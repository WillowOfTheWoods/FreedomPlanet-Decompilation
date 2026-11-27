#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2018()
{
    // event 796_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_796_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_796_13_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_796_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(7, 6);
    }
    event_796_13_end: ;
}
void Frames::event_func_2019()
{
    // event 797_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_797_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_797_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(player_389_instances))->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.add(5, 0.5);
    }
    event_797_13_end: ;
}
void Frames::event_func_2020()
{
    // event 798_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_798_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_798_13_end;
        if (((Active*)get_instance(playerreflect_447_instances))->test_animation(8)) goto event_798_13_end;
        if (((Active*)get_instance(playerreflect_447_instances))->test_animation(5)) goto event_798_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
    }
    event_798_13_end: ;
}
void Frames::event_func_2021()
{
    // event 799_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_799_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (6))) goto event_799_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.add(5, 1);
    }
    event_799_13_end: ;
}
void Frames::event_func_2022()
{
    // event 800_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_800_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (6))) goto event_800_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) > (10))) goto event_800_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
    }
    event_800_13_end: ;
}
void Frames::event_func_2023()
{
    // event 801_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_801_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) != (5))) goto event_801_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(7)) > (4))) goto event_801_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(7, 4);
    }
    event_801_13_end: ;
}
void Frames::event_func_2024()
{
    // event 802_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_802_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_802_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_802_13_end;
        {
            for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            playermovementvalues_245_instances.clear_selection();
            for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_802_13_end: ;
}
void Frames::event_func_2025()
{
    // event 803_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_803_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_803_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_803_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_803_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(23, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*5));
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, 0-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*5));
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_803_13_end: ;
}
void Frames::event_func_2026()
{
    // event 804_13
    bool or_result_804_13 = false;
    bool or_temp_result_804_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_804_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_804_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_804_13_0_end;
        or_result_804_13 = true;
        or_temp_result_804_13_0 = true;
    }
    or_event_804_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_804_13_0) {
        playerinput_19_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 804_13
    bool or_temp_result_804_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_804_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_804_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_804_13_1_end;
        or_result_804_13 = true;
        or_temp_result_804_13_1 = true;
        or_event_804_13_1_end: ;
        if (or_temp_result_804_13_1) {
            playerinput_19_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_804_13) goto or_final_or_event_804_13_1_end;
        playerskinmilla_446_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_804_13_0 || or_temp_result_804_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_804_13_0 || or_temp_result_804_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 2);
        }
        media.play_id(SOUND_MILLA_BLOCKTHROW_419, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_804_13_1_end: ;
}
void Frames::event_func_2027()
{
    // event 805_13
    bool or_result_805_13 = false;
    bool or_temp_result_805_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_805_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (30))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_805_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_805_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_805_13_0_end;
        or_result_805_13 = true;
        or_temp_result_805_13_0 = true;
    }
    or_event_805_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_805_13_0) {
        playerinput_19_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 805_13
    bool or_temp_result_805_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_805_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (30))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_805_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_805_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_805_13_1_end;
        or_result_805_13 = true;
        or_temp_result_805_13_1 = true;
        or_event_805_13_1_end: ;
        if (or_temp_result_805_13_1) {
            playerinput_19_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_805_13) goto or_final_or_event_805_13_1_end;
        playerskinmilla_446_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_805_13_0 || or_temp_result_805_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_805_13_0 || or_temp_result_805_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_805_13_0 || or_temp_result_805_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_805_13_1_end: ;
}
void Frames::event_func_2028()
{
    // event 806_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_806_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_806_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)) < (5))) goto event_806_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
    }
    event_806_13_end: ;
}
void Frames::event_func_2029()
{
    // event 807_13
    bool or_result_807_13 = false;
    bool or_temp_result_807_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (12))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_807_13_0_end;
        or_result_807_13 = true;
        or_temp_result_807_13_0 = true;
    }
    or_event_807_13_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_807_13_0) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (41))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (46))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_807_13_1_end;
        or_result_807_13 = true;
        or_temp_result_807_13_1 = true;
    }
    or_event_807_13_1_end: ;
    if (or_temp_result_807_13_1) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_2_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (12))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_807_13_2_end;
        or_result_807_13 = true;
        or_temp_result_807_13_2 = true;
    }
    or_event_807_13_2_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_807_13_2) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_3_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_3_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (48))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_807_13_3_end;
        or_result_807_13 = true;
        or_temp_result_807_13_3 = true;
    }
    or_event_807_13_3_end: ;
    if (or_temp_result_807_13_3) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_4_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_4_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_807_13_4_end;
        or_result_807_13 = true;
        or_temp_result_807_13_4 = true;
    }
    or_event_807_13_4_end: ;
    if (or_temp_result_807_13_4) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_5 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_5_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_5_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (25))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_807_13_5_end;
        or_result_807_13 = true;
        or_temp_result_807_13_5 = true;
    }
    or_event_807_13_5_end: ;
    if (or_temp_result_807_13_5) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 807_13
    bool or_temp_result_807_13_6 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_807_13_6_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_807_13_6_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (8))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_807_13_6_end;
        or_result_807_13 = true;
        or_temp_result_807_13_6 = true;
        or_event_807_13_6_end: ;
        if (or_temp_result_807_13_6) {
            playerothers_123_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_807_13) goto or_final_or_event_807_13_6_end;
        playerskinmilla_446_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_807_13_2 || or_temp_result_807_13_3 || or_temp_result_807_13_4 || or_temp_result_807_13_6) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_807_13_0 || or_temp_result_807_13_1 || or_temp_result_807_13_2 || or_temp_result_807_13_3 || or_temp_result_807_13_4 || or_temp_result_807_13_5 || or_temp_result_807_13_6) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_807_13_0 || or_temp_result_807_13_1 || or_temp_result_807_13_5) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_807_13_6_end: ;
}
void Frames::event_func_2030()
{
    // event 808_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_808_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_808_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_808_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_808_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_808_13_end: ;
}
void Frames::event_func_2031()
{
    // event 809_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_809_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_809_13_end;
        if (not_always_809_13 > loop_count) {
            not_always_809_13 = loop_count + 2;
            goto event_809_13_end;
        }
        not_always_809_13 = loop_count + 2;
        media.play_id(SOUND_MILLA_BLOCKCHARGE_424, -1, 1);
    }
    event_809_13_end: ;
}
void Frames::event_func_2032()
{
    // event 810_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_810_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_810_13_end;
        if (!media.is_sample_playing(SOUND_MILLA_BLOCKCHARGE_424)) goto event_810_13_end;
        media.stop_sample(SOUND_MILLA_BLOCKCHARGE_424);
    }
    event_810_13_end: ;
}
void Frames::event_func_2033()
{
    // event 811_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_811_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_811_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_811_13_end: ;
}
void Frames::event_func_2034()
{
    // event 812_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto event_812_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_812_13_end: ;
}
void Frames::event_func_2035()
{
    // event 813_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto event_813_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_813_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_813_13_end;
        if (not_always_813_13 > loop_count) {
            not_always_813_13 = loop_count + 2;
            goto event_813_13_end;
        }
        not_always_813_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
        }
    }
    event_813_13_end: ;
}
void Frames::event_func_2036()
{
    // event 814_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto event_814_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_814_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_814_13_end;
        if (not_always_814_13 > loop_count) {
            not_always_814_13 = loop_count + 2;
            goto event_814_13_end;
        }
        not_always_814_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_814_13_end: ;
}
void Frames::event_func_2037()
{
    // event 815_13
    bool or_result_815_13 = false;
    bool or_temp_result_815_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto or_event_815_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_815_13_0_end;
        if (not_always_815_13 > loop_count) {
            not_always_815_13 = loop_count + 2;
            goto or_event_815_13_0_end;
        }
        not_always_815_13 = loop_count + 2;
        or_result_815_13 = true;
        or_temp_result_815_13_0 = true;
    }
    or_event_815_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_815_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 815_13
    bool or_temp_result_815_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto or_event_815_13_1_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_815_13_1_end;
        if (not_always_815_13 > loop_count) {
            not_always_815_13 = loop_count + 2;
            goto or_event_815_13_1_end;
        }
        not_always_815_13 = loop_count + 2;
        or_result_815_13 = true;
        or_temp_result_815_13_1 = true;
        or_event_815_13_1_end: ;
        playerreflect_447_instances.clear_saved_selection();
        if (or_temp_result_815_13_1) {
            playerreflect_447_instances.save_selection();
        }
        if (!or_result_815_13) goto or_final_or_event_815_13_1_end;
        playerreflect_447_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_815_13_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_815_13_1) {
            playerreflect_447_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_815_13_1_end: ;
}
void Frames::event_func_2038()
{
    // event 816_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto event_816_13_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_19)) goto event_816_13_end;
        FrameObject * single_instance_816_13_0; single_instance_816_13_0 = pick_random(qualifier_19);
        if (single_instance_816_13_0 == NULL) goto event_816_13_end;
        ((Active*)((Active*)single_instance_816_13_0))->alterables->flags.enable(2);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
    }
    event_816_13_end: ;
}
void Frames::event_func_2039()
{
    // event 817_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_817_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 14);
    }
    event_817_13_end: ;
}
void Frames::event_func_2040()
{
    // event 818_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_818_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (1))) goto event_818_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 20);
        }
        {
            loop_sound_attack0_running = true;
            int times = int(1);
            loop_sound_attack0_index = 0;
            while (loop_sound_attack0_index < times) {
                loop_sound_attack0_8();
                if (!loop_sound_attack0_running) break;
                loop_sound_attack0_index++;
            }
        }
    }
    event_818_13_end: ;
}
void Frames::event_func_2041()
{
    // event 819_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_819_13_end;
        every_819_13 += manager.dt;
        if (every_819_13 < 0.1) goto event_819_13_end;
        every_819_13 -= 0.1;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (15))) goto event_819_13_end;
        media.play_id(SOUND_MILLA_FLY_2_170, -1, 1);
    }
    event_819_13_end: ;
}
void Frames::event_func_2042()
{
    // event 820_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_820_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, get_max(80-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)*2, 0));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 0.9);
        }
    }
    event_820_13_end: ;
}
void Frames::event_func_2043()
{
    // event 821_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_821_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-2))) goto event_821_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-0.5, -2));
    }
    event_821_13_end: ;
}
void Frames::event_func_2044()
{
    // event 822_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_822_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_822_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
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
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_822_13_end: ;
}
void Frames::event_func_2045()
{
    // event 823_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_823_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_823_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_823_13_end: ;
}
void Frames::event_func_2046()
{
    // event 824_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_824_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 15);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_min(5+((Active*)*it)->alterables->values.get(0)*0.5, 30));
        }
    }
    event_824_13_end: ;
}
void Frames::event_func_2047()
{
    // event 825_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_825_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_825_13_end;
        if (not_always_825_13 > loop_count) {
            not_always_825_13 = loop_count + 2;
            goto event_825_13_end;
        }
        not_always_825_13 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGB_185, -1, 1);
        ((Active*)get_instance(playerdig_448_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerdig_448_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12);
        ((Active*)get_instance(playerdig_448_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(playerdig_448_instances))->move_front(((Active*)get_single(playerskinmilla_446_instances)));
        ((Active*)get_instance(playerdig_448_instances))->force_frame(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->alterables->values.get(1)/math_helper/24);
        ((Active*)get_instance(playerdig_448_instances))->set_visible(true);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_825_13_end: ;
}
void Frames::event_func_2048()
{
    // event 826_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_826_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_826_13_end;
        if (not_always_826_13 > loop_count) {
            not_always_826_13 = loop_count + 2;
            goto event_826_13_end;
        }
        not_always_826_13 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGA_184, -1, 1);
        ((Active*)get_instance(playerdig_448_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerdig_448_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12);
        ((Active*)get_instance(playerdig_448_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(playerdig_448_instances))->move_front(((Active*)get_single(playerskinmilla_446_instances)));
        ((Active*)get_instance(playerdig_448_instances))->force_frame(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->alterables->values.get(1)/math_helper/24);
        ((Active*)get_instance(playerdig_448_instances))->set_visible(true);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_826_13_end: ;
}
void Frames::event_func_2049()
{
    // event 827_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_827_13_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_19)) goto event_827_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_827_13_end;
        FrameObject * single_instance_827_13_0; single_instance_827_13_0 = pick_random(qualifier_19);
        if (single_instance_827_13_0 == NULL) goto event_827_13_end;
        ((Active*)((Active*)single_instance_827_13_0))->alterables->flags.enable(2);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
    }
    event_827_13_end: ;
}
void Frames::event_func_2050()
{
    // event 828_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_828_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_828_13_end: ;
}
void Frames::event_func_2051()
{
    // event 829_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_829_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (5))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_829_13_end;
        ((Active*)get_instance(playerdig_448_instances))->force_frame(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->alterables->values.get(1)/math_helper/24);
    }
    event_829_13_end: ;
}
void Frames::event_func_2052()
{
    // event 830_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_830_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_830_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_830_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+20, 50));
        }
    }
    event_830_13_end: ;
}
void Frames::event_func_2053()
{
    // event 831_13
    bool or_result_831_13 = false;
    bool or_temp_result_831_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_831_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (355))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_831_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_831_13_0_end;
        or_result_831_13 = true;
        or_temp_result_831_13_0 = true;
    }
    or_event_831_13_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_831_13_0) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 831_13
    bool or_temp_result_831_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_831_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (-5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_831_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_831_13_1_end;
        or_result_831_13 = true;
        or_temp_result_831_13_1 = true;
    }
    or_event_831_13_1_end: ;
    if (or_temp_result_831_13_1) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 831_13
    bool or_temp_result_831_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_831_13_2_end;
        if (test_obstacle(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+16*((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16), ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_box_index(3)+2)) goto or_event_831_13_2_end;
        or_result_831_13 = true;
        or_temp_result_831_13_2 = true;
    }
    or_event_831_13_2_end: ;
    // event 831_13
    bool or_temp_result_831_13_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_831_13_3_end;
        playersensorbottombig_397_instances.clear_selection();
        playerdig_448_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, playerdig_448_instances)) goto or_event_831_13_3_end;
        or_result_831_13 = true;
        or_temp_result_831_13_3 = true;
        or_event_831_13_3_end: ;
        playersensorbottombig_397_instances.clear_saved_selection();
        playerdig_448_instances.clear_saved_selection();
        if (or_temp_result_831_13_3) {
            playersensorbottombig_397_instances.save_selection();
            playerdig_448_instances.save_selection();
        }
        if (!or_result_831_13) goto or_final_or_event_831_13_3_end;
        playerskinmilla_446_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerdig_448_instances.empty_selection();
        if (or_temp_result_831_13_3) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_831_13_0 || or_temp_result_831_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_831_13_0 || or_temp_result_831_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_831_13_3) {
            playerdig_448_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_831_13_3_end: ;
}
void Frames::event_func_2054()
{
    // event 832_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_832_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_832_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_832_13_end: ;
}
void Frames::event_func_2055()
{
    // event 833_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_833_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (120))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_833_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_833_13_end: ;
}
void Frames::event_func_2056()
{
    // event 835_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_835_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_835_13_end;
        if (!(((Active*)get_instance(playerdig_448_instances))->alterables->flags.is_off(1))) goto event_835_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_835_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) < (8))) goto event_835_13_end;
        ((Active*)get_instance(playerdig_448_instances))->alterables->flags.enable(1);
        FrameObject * single_instance_835_13_0; single_instance_835_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdig_448_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_835_13_0 == NULL)
                    single_instance_835_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_835_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_835_13_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_835_13_0))->set_direction(8);
        ((Active*)((Active*)single_instance_835_13_0))->alterables->flags.enable(2);
    }
    event_835_13_end: ;
}
void Frames::event_func_2057()
{
    // event 836_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_836_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_836_13_end;
        if (!(((Active*)get_instance(playerdig_448_instances))->alterables->flags.is_off(1))) goto event_836_13_end;
        media.play_id(SOUND_MILLA_WHIMPER_2_183, -1, 1);
    }
    event_836_13_end: ;
}
void Frames::event_func_2058()
{
    // event 837_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_837_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_837_13_end;
        if (!(((Active*)get_instance(playerdig_448_instances))->alterables->flags.is_on(1))) goto event_837_13_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_dig_74+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_837_13_0_end;
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
        dynamic_837_13_0_end: ;
    }
    event_837_13_end: ;
}
void Frames::event_func_2059()
{
    // event 838_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_838_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_838_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 5);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerdig_448_instances))->paste(4);
    }
    event_838_13_end: ;
}
void Frames::event_func_2060()
{
    // event 839_13
    bool or_result_839_13 = false;
    bool or_temp_result_839_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_839_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_839_13_0_end;
        or_result_839_13 = true;
        or_temp_result_839_13_0 = true;
    }
    or_event_839_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_839_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 839_13
    bool or_temp_result_839_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_839_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_839_13_1_end;
        or_result_839_13 = true;
        or_temp_result_839_13_1 = true;
        or_event_839_13_1_end: ;
        if (or_temp_result_839_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_839_13) goto or_final_or_event_839_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_839_13_0 || or_temp_result_839_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerdig_448_instances.clear_selection();
        for (ObjectIterator it(playerdig_448_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(4);
        }
    }
    or_final_or_event_839_13_1_end: ;
}
void Frames::event_func_2061()
{
    // event 840_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_840_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_840_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) == (0))) goto event_840_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (48))) goto event_840_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (12))) goto event_840_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_840_13_end: ;
}
void Frames::event_func_2062()
{
    // event 841_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_841_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_841_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) > (0))) goto event_841_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (5))) goto event_841_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 1);
    }
    event_841_13_end: ;
}
void Frames::event_func_2063()
{
    // event 842_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_842_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_842_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (5))) goto event_842_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 2);
    }
    event_842_13_end: ;
}
void Frames::event_func_2064()
{
    // event 843_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_843_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (13))) goto event_843_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_843_13_end: ;
}
void Frames::event_func_2065()
{
    // event 844_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_844_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (30))) goto event_844_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_844_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_844_13_end: ;
}
void Frames::event_func_2066()
{
    // event 845_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_845_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 4);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 100);
        }
    }
    event_845_13_end: ;
}
void Frames::event_func_2067()
{
    // event 846_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_846_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_846_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_846_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_846_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
    }
    event_846_13_end: ;
}
void Frames::event_func_2068()
{
    // event 847_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_847_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_847_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_847_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
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
    event_847_13_end: ;
}
void Frames::event_func_2069()
{
    // event 848_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_848_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) != (4))) goto event_848_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) != (5))) goto event_848_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) != (6))) goto event_848_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_frame(0);
        ((Active*)get_instance(playerreflect_447_instances))->restore_frame();
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(3, ((Active*)get_instance(playerreflect_447_instances))->get_x());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(4, ((Active*)get_instance(playerreflect_447_instances))->get_y());
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(11);
        media.play_id(SOUND_MILLA_BARRIER_2_422, -1, 1);
    }
    event_848_13_end: ;
}
void Frames::event_func_2070()
{
    // event 849_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_849_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_849_13_end;
        if (!(((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.is_off(5))) goto event_849_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_849_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-0.2, 0));
    }
    event_849_13_end: ;
}
void Frames::event_func_2071()
{
    // event 850_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_850_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_850_13_end;
        if (!(((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.is_off(5))) goto event_850_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_850_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.2, 0));
    }
    event_850_13_end: ;
}
void Frames::event_func_2072()
{
    // event 851_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_851_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_851_13_end;
        if (!(((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.is_off(5))) goto event_851_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-2))) goto event_851_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (2))) goto event_851_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_851_13_end: ;
}
void Frames::event_func_2073()
{
    // event 852_13
    bool or_result_852_13 = false;
    bool or_temp_result_852_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto or_event_852_13_0_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_852_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_852_13_0_end;
        or_result_852_13 = true;
        or_temp_result_852_13_0 = true;
    }
    or_event_852_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_852_13_0) {
        playerinput_19_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 852_13
    bool or_temp_result_852_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto or_event_852_13_1_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_852_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_852_13_1_end;
        or_result_852_13 = true;
        or_temp_result_852_13_1 = true;
        or_event_852_13_1_end: ;
        if (or_temp_result_852_13_1) {
            playerinput_19_instances.save_selection();
            playerreflect_447_instances.save_selection();
        }
        if (!or_result_852_13) goto or_final_or_event_852_13_1_end;
        playerreflect_447_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_852_13_0 || or_temp_result_852_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_852_13_0 || or_temp_result_852_13_1) {
            playerreflect_447_instances.restore_selection();
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0+(1-((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(11))*4);
        }
    }
    or_final_or_event_852_13_1_end: ;
}
void Frames::event_func_2074()
{
    // event 853_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_853_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_853_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_853_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_853_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(2, 45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4);
        }
    }
    event_853_13_end: ;
}
void Frames::event_func_2075()
{
    // event 854_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_854_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_854_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_854_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_854_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4);
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(2, -45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
    }
    event_854_13_end: ;
}
void Frames::event_func_2076()
{
    // event 855_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_855_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_855_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 20);
        ((Active*)get_instance(playerreflect_447_instances))->set_direction(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(2, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2)+((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_angle());
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2), 0);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(player_389_instances))->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_855_13_end: ;
}
void Frames::event_func_2077()
{
    // event 856_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_856_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_856_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_856_13_end;
        if (((Active*)get_instance(playerreflect_447_instances))->test_animation(2)) goto event_856_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 5);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(3, ((Active*)get_instance(playerreflect_447_instances))->get_x());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(4, ((Active*)get_instance(playerreflect_447_instances))->get_y());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        media.play_id(SOUND_MILLA_SHOT_2_420, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_856_13_end: ;
}
void Frames::event_func_2078()
{
    // event 857_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_857_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_857_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_857_13_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(2))) goto event_857_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_857_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+4, 4));
    }
    event_857_13_end: ;
}
void Frames::event_func_2079()
{
    // event 858_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_858_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_858_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_858_13_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(2))) goto event_858_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_858_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-4, -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_858_13_end: ;
}
void Frames::event_func_2080()
{
    // event 859_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_859_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_859_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_859_13_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(2))) goto event_859_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 5);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(3, ((Active*)get_instance(playerreflect_447_instances))->get_x());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(4, ((Active*)get_instance(playerreflect_447_instances))->get_y());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        media.play_id(SOUND_MILLA_SHOTSUPER_421, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-6);
    }
    event_859_13_end: ;
}
void Frames::event_func_2081()
{
    // event 860_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_860_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (6))) goto event_860_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*40);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_860_13_end: ;
}
void Frames::event_func_2082()
{
    // event 861_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_861_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_861_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_861_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_861_13_end: ;
}
void Frames::event_func_2083()
{
    // event 862_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_862_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_862_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_862_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_862_13_end: ;
}
void Frames::event_func_2084()
{
    // event 863_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_863_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_863_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) {
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = true;
        }
    }
    event_863_13_end: ;
}
void Frames::event_func_2085()
{
    // event 864_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_864_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_864_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10)) == (1))) goto event_864_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_864_13_end: ;
}
void Frames::event_func_2086()
{
    // event 865_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_865_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_865_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10)) == (2))) goto event_865_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_865_13_end: ;
}
void Frames::event_func_2087()
{
    // event 866_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_866_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_866_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10)) == (3))) goto event_866_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_866_13_end: ;
}
void Frames::event_func_2088()
{
    // event 867_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_867_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_867_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10)) == (4))) goto event_867_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_867_13_end: ;
}
void Frames::event_func_2089()
{
    // event 868_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_868_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_868_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10)) == (5))) goto event_868_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_868_13_end: ;
}
void Frames::event_func_2090()
{
    // event 869_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_869_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_869_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_869_13_end: ;
}
void Frames::event_func_2091()
{
    // event 870_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_870_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_870_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 11)) == (1))) goto event_870_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_870_13_end: ;
}
void Frames::event_func_2092()
{
    // event 871_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_871_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_871_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 11)) == (2))) goto event_871_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_871_13_end: ;
}
void Frames::event_func_2093()
{
    // event 872_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_872_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_872_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 11)) == (3))) goto event_872_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_872_13_end: ;
}
void Frames::event_func_2094()
{
    // event 873_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_873_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_873_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 11)) == (4))) goto event_873_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_873_13_end: ;
}
void Frames::event_func_2095()
{
    // event 874_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_874_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_874_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 11)) == (5))) goto event_874_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_874_13_end: ;
}
void Frames::event_func_2096()
{
    // event 875_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_875_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_875_13_end;
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        spread_value(guikeystone_455_instances, 0, 0);
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10+((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_875_13_end: ;
}
void Frames::event_func_2097()
{
    // event 878_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_878_13_end;
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskintorque_450_instances, it.current_index));
            if (parent == NULL) goto pos_end_878_13_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_878_13_0: ;
        }
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_angle()+((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->alterables->values.get(1)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), 0);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            playerskintorque_450_instances.clear_selection();
            ObjectIterator other_it(playerskintorque_450_instances);
            for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_878_13_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_878_13_1_end: ;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-1, 0));
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_878_13_end: ;
}
void Frames::event_func_2098()
{
    // event 879_13
    bool or_result_879_13 = false;
    bool or_temp_result_879_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto or_event_879_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (46))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_879_13_0_end;
        or_result_879_13 = true;
        or_temp_result_879_13_0 = true;
    }
    or_event_879_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_879_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 879_13
    bool or_temp_result_879_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto or_event_879_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_879_13_1_end;
        or_result_879_13 = true;
        or_temp_result_879_13_1 = true;
    }
    or_event_879_13_1_end: ;
    if (or_temp_result_879_13_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 879_13
    bool or_temp_result_879_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto or_event_879_13_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (48))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_879_13_2_end;
        or_result_879_13 = true;
        or_temp_result_879_13_2 = true;
        or_event_879_13_2_end: ;
        playerothers_123_instances.clear_saved_selection();
        if (or_temp_result_879_13_2) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_879_13) goto or_final_or_event_879_13_2_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_879_13_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_879_13_0 || or_temp_result_879_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    or_final_or_event_879_13_2_end: ;
}
void Frames::event_func_2099()
{
    // event 880_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_880_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_880_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_880_13_end: ;
}
void Frames::event_func_2100()
{
    // event 881_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_881_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_881_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_881_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45, 0)-get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45, 0));
        }
    }
    event_881_13_end: ;
}
void Frames::event_func_2101()
{
    // event 882_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_882_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_882_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_882_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45, 0)-get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45, 0));
        }
    }
    event_882_13_end: ;
}
void Frames::event_func_2102()
{
    // event 883_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_883_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_883_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (-90))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_883_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_883_13_end: ;
}
void Frames::event_func_2103()
{
    // event 884_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_884_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_884_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_884_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (-90))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_884_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45, 0)-get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45, 0));
        }
    }
    event_884_13_end: ;
}
void Frames::event_func_2104()
{
    // event 885_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_885_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_885_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_885_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (-90))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_885_13_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45, 0)-get_max(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45, 0));
        }
    }
    event_885_13_end: ;
}
void Frames::event_func_2105()
{
    // event 886_13
    bool or_result_886_13 = false;
    bool or_temp_result_886_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto or_event_886_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_886_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_886_13_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_886_13_0_end;
        or_result_886_13 = true;
        or_temp_result_886_13_0 = true;
    }
    or_event_886_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_886_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 886_13
    bool or_temp_result_886_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto or_event_886_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_886_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_886_13_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_886_13_1_end;
        or_result_886_13 = true;
        or_temp_result_886_13_1 = true;
        or_event_886_13_1_end: ;
        if (or_temp_result_886_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_886_13) goto or_final_or_event_886_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_886_13_0 || or_temp_result_886_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_886_13_0 || or_temp_result_886_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_886_13_0 || or_temp_result_886_13_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60);
            ((Active*)*it)->alterables->values.set(2, 8-((Active*)*it)->alterables->values.get(6)*2);
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        {
            loop_weapon_running = true;
            int times = int(1);
            loop_weapon_index = 0;
            while (loop_weapon_index < times) {
                loop_weapon_13();
                if (!loop_weapon_running) break;
                loop_weapon_index++;
            }
        }
    }
    or_final_or_event_886_13_1_end: ;
}
void Frames::event_func_2106()
{
    // event 892_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_892_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_892_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_892_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(0);
        }
        media.play_id(SOUND_BLASTER_0_238, -1, 1);
    }
    event_892_13_end: ;
}
void Frames::event_func_2107()
{
    // event 893_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_893_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_893_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_893_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(1);
        }
        media.stop_sample(SOUND_COMMON_BLASTER1_28);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_893_13_end: ;
}
void Frames::event_func_2108()
{
    // event 894_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_894_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_894_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_894_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(2);
        }
        media.stop_sample(SOUND_COMMON_BLASTER1_28);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_894_13_end: ;
}
void Frames::event_func_2109()
{
    // event 895_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_895_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_895_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_895_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_W_236, -1, 1);
    }
    event_895_13_end: ;
}
void Frames::event_func_2110()
{
    // event 896_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_896_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_896_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_896_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(4);
        }
        media.play_id(SOUND_BLASTER_W_2_239, -1, 1);
    }
    event_896_13_end: ;
}
void Frames::event_func_2111()
{
    // event 897_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_897_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_897_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_897_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_897_13_end: ;
}
void Frames::event_func_2112()
{
    // event 898_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_898_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_898_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_898_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
    }
    event_898_13_end: ;
}
void Frames::event_func_2113()
{
    // event 899_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_899_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_899_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_899_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(7);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_W_236, -1, 1);
    }
    event_899_13_end: ;
}
void Frames::event_func_2114()
{
    // event 900_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_900_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_900_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_900_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(8);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_W_236, -1, 1);
    }
    event_900_13_end: ;
}
void Frames::event_func_2115()
{
    // event 901_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_901_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_901_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_901_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(9);
        }
        media.play_id(SOUND_BLASTER_W_236, -1, 1);
    }
    event_901_13_end: ;
}
void Frames::event_func_2116()
{
    // event 902_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_902_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_902_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_902_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(10);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_W_236, -1, 1);
    }
    event_902_13_end: ;
}
void Frames::event_func_2117()
{
    // event 903_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_903_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_903_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_903_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(11);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
    }
    event_903_13_end: ;
}
