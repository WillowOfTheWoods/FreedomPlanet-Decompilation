#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1618()
{
    // event 385_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_385_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_385_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_385_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(7)))) goto event_385_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_385_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_385_13_end: ;
}
void Frames::event_func_1619()
{
    // event 386_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_386_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_386_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_386_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0-((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(7)))) goto event_386_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_386_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_386_13_end: ;
}
void Frames::event_func_1620()
{
    // event 387_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_387_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_387_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_387_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_387_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_387_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (0.2))) goto event_387_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
    }
    event_387_13_end: ;
}
void Frames::event_func_1621()
{
    // event 388_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_388_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_388_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        {
            loop_action_land_running = true;
            int times = int(1);
            loop_action_land_index = 0;
            while (loop_action_land_index < times) {
                loop_action_land_13();
                if (!loop_action_land_running) break;
                loop_action_land_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_388_13_end: ;
}
void Frames::event_func_1622()
{
    // event 389_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_389_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_389_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_389_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) > (0))) goto event_389_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 42);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2));
        }
    }
    event_389_13_end: ;
}
void Frames::event_func_1623()
{
    // event 390_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_390_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_390_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_390_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_390_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) < (2))) goto event_390_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.add(14, 1);
    }
    event_390_13_end: ;
}
void Frames::event_func_1624()
{
    // event 391_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_391_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_391_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_391_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_391_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_391_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_391_13_end: ;
}
void Frames::event_func_1625()
{
    // event 392_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_392_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_392_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_392_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_392_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_392_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 22);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
    }
    event_392_13_end: ;
}
void Frames::event_func_1626()
{
    // event 393_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_393_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_393_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_393_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_393_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_393_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_393_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 14);
    }
    event_393_13_end: ;
}
void Frames::event_func_1627()
{
    // event 394_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_394_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(15, 30);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_394_13_end: ;
}
void Frames::event_func_1628()
{
    // event 395_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_395_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_395_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    
    }
    event_395_13_end: ;
}
void Frames::event_func_1629()
{
    // event 396_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_396_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0.0))) goto event_396_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    
    }
    event_396_13_end: ;
}
void Frames::event_func_1630()
{
    // event 397_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_397_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_397_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    
    }
    event_397_13_end: ;
}
void Frames::event_func_1631()
{
    // event 398_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_398_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_398_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_398_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_398_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
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
    event_398_13_end: ;
}
void Frames::event_func_1632()
{
    // event 399_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_399_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_399_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_399_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_399_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_399_13_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
    }
    event_399_13_end: ;
}
void Frames::event_func_1633()
{
    // event 400_13
    bool or_result_400_13 = false;
    bool or_temp_result_400_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto or_event_400_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_400_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_400_13_0_end;
        or_result_400_13 = true;
        or_temp_result_400_13_0 = true;
    }
    or_event_400_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_400_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 400_13
    bool or_temp_result_400_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto or_event_400_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_400_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_400_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_400_13_1_end;
        or_result_400_13 = true;
        or_temp_result_400_13_1 = true;
        or_event_400_13_1_end: ;
        guienergy_124_instances.clear_saved_selection();
        if (or_temp_result_400_13_1) {
            guienergy_124_instances.save_selection();
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_400_13) goto or_final_or_event_400_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_400_13_1) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_400_13_0 || or_temp_result_400_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_400_13_0 || or_temp_result_400_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_400_13_1_end: ;
}
void Frames::event_func_1634()
{
    // event 401_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_401_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_401_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_401_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) > (0))) goto event_401_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 42);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2));
        }
    }
    event_401_13_end: ;
}
void Frames::event_func_1635()
{
    // event 402_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_402_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_402_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_402_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_402_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_402_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_402_13_end: ;
}
void Frames::event_func_1636()
{
    // event 403_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_403_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_403_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_403_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_403_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_403_13_end: ;
}
void Frames::event_func_1637()
{
    // event 404_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_404_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_404_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_404_13_end: ;
}
void Frames::event_func_1638()
{
    // event 405_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_405_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(15, 120);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_405_13_end: ;
}
void Frames::event_func_1639()
{
    // event 406_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_406_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_406_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_406_13_end: ;
}
void Frames::event_func_1640()
{
    // event 407_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_407_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0.0))) goto event_407_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_407_13_end: ;
}
void Frames::event_func_1641()
{
    // event 408_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_408_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_408_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_408_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_408_13_end: ;
}
void Frames::event_func_1642()
{
    // event 409_13
    bool or_result_409_13 = false;
    bool or_temp_result_409_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto or_event_409_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (45))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_409_13_0_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (3))) goto or_event_409_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_409_13_0_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_12)) goto or_event_409_13_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_14)) goto or_event_409_13_0_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_409_13_0_end;
        or_result_409_13 = true;
        or_temp_result_409_13_0 = true;
    }
    or_event_409_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    playerskincarolbike_382_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_409_13_0) {
        playersensorbottombig_397_instances.save_selection();
        playerinput_19_instances.save_selection();
        playerskincarolbike_382_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 409_13
    bool or_temp_result_409_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto or_event_409_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_409_13_1_end;
        or_result_409_13 = true;
        or_temp_result_409_13_1 = true;
        or_event_409_13_1_end: ;
        if (or_temp_result_409_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_409_13) goto or_final_or_event_409_13_1_end;
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerskincarolbike_382_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_409_13_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_409_13_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_409_13_0) {
            playerskincarolbike_382_instances.restore_selection();
        }
        if (or_temp_result_409_13_0 || or_temp_result_409_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        FrameObject * single_instance_409_13_0; single_instance_409_13_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_409_13_0 == NULL)
                    single_instance_409_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_409_13_0))->alterables->values.set(0, ((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_409_13_0))->set_direction(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_409_13_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        global_values->set(1, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_409_13_0))->alterables->flags.enable(1);
    }
    or_final_or_event_409_13_1_end: ;
}
void Frames::event_func_1643()
{
    // event 410_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_410_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_410_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_410_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_410_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_410_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_410_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
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
    event_410_13_end: ;
}
void Frames::event_func_1644()
{
    // event 411_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_411_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_411_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_411_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_411_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 23);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 100);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(19);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_411_13_end: ;
}
void Frames::event_func_1645()
{
    // event 412_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_412_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_412_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (1))) goto event_412_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_412_13_end;
        FrameObject * single_instance_412_13_0; single_instance_412_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_412_13_0 == NULL)
                    single_instance_412_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKED_292, -1, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)((Active*)single_instance_412_13_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()-1);
        ((Active*)((Active*)single_instance_412_13_0))->force_speed(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)single_instance_412_13_0)->move_back(((Active*)get_instance(playerskinsash_418_instances)));
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(2);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_412_13_1_end;
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
        dynamic_412_13_1_end: ;
    }
    event_412_13_end: ;
}
void Frames::event_func_1646()
{
    // event 413_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_413_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) != (1))) goto event_413_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(2);
    }
    event_413_13_end: ;
}
void Frames::event_func_1647()
{
    // event 414_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_414_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(30))) goto event_414_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 5);
    }
    event_414_13_end: ;
}
void Frames::event_func_1648()
{
    // event 415_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_415_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_415_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_415_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_415_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_415_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_415_13_end: ;
}
void Frames::event_func_1649()
{
    // event 416_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_416_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_416_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_416_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) > (0))) goto event_416_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 42);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2));
        }
    }
    event_416_13_end: ;
}
void Frames::event_func_1650()
{
    // event 417_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_417_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_417_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_417_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_417_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 8*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        {
            loop_sound_pounce_running = true;
            int times = int(1);
            loop_sound_pounce_index = 0;
            while (loop_sound_pounce_index < times) {
                loop_sound_pounce_13();
                if (!loop_sound_pounce_running) break;
                loop_sound_pounce_index++;
            }
        }
    }
    event_417_13_end: ;
}
void Frames::event_func_1651()
{
    // event 418_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_418_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_418_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_418_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_418_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_418_13_end: ;
}
void Frames::event_func_1652()
{
    // event 419_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_419_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_419_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_419_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_419_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_419_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_419_13_end: ;
}
void Frames::event_func_1653()
{
    // event 420_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_420_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_420_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_420_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_420_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 27);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 20);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(playerdig_448_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_420_13_end: ;
}
void Frames::event_func_1654()
{
    // event 421_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_421_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 6);
    }
    event_421_13_end: ;
}
void Frames::event_func_1655()
{
    // event 422_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_422_13_end;
        if (not_always_422_13 > loop_count) {
            not_always_422_13 = loop_count + 2;
            goto event_422_13_end;
        }
        not_always_422_13 = loop_count + 2;
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    event_422_13_end: ;
}
void Frames::event_func_1656()
{
    // event 423_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_423_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_423_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_423_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(8), 0));
    }
    event_423_13_end: ;
}
void Frames::event_func_1657()
{
    // event 424_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_424_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_424_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_424_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_424_13_end: ;
}
void Frames::event_func_1658()
{
    // event 425_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_425_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_425_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_425_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(8), 0));
    }
    event_425_13_end: ;
}
void Frames::event_func_1659()
{
    // event 426_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_426_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_426_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_426_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_426_13_end: ;
}
void Frames::event_func_1660()
{
    // event 427_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_427_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0.0))) goto event_427_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    
    }
    event_427_13_end: ;
}
void Frames::event_func_1661()
{
    // event 428_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_428_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_428_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    
    }
    event_428_13_end: ;
}
void Frames::event_func_1662()
{
    // event 429_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1)) goto event_429_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_429_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_429_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    
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
    event_429_13_end: ;
}
void Frames::event_func_1663()
{
    // event 430_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_430_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
    }
    event_430_13_end: ;
}
void Frames::event_func_1664()
{
    // event 431_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_431_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_431_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_431_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(15), 0));
    }
    event_431_13_end: ;
}
void Frames::event_func_1665()
{
    // event 432_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_432_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_432_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_432_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(14), 0));
    }
    event_432_13_end: ;
}
void Frames::event_func_1666()
{
    // event 433_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_433_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_433_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_433_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(15), 0));
    }
    event_433_13_end: ;
}
void Frames::event_func_1667()
{
    // event 434_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_434_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_434_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_434_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(14), 0));
    }
    event_434_13_end: ;
}
void Frames::event_func_1668()
{
    // event 435_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_435_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_435_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_435_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (180))) goto event_435_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(16));
    }
    event_435_13_end: ;
}
void Frames::event_func_1669()
{
    // event 436_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_436_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_436_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_436_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (180))) goto event_436_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(16));
    }
    event_436_13_end: ;
}
void Frames::event_func_1670()
{
    // event 437_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_437_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_437_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_437_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (180))) goto event_437_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(17));
    }
    event_437_13_end: ;
}
void Frames::event_func_1671()
{
    // event 438_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_438_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_438_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_438_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (180))) goto event_438_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(17));
    }
    event_438_13_end: ;
}
void Frames::event_func_1672()
{
    // event 439_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_439_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_439_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    
    }
    event_439_13_end: ;
}
void Frames::event_func_1673()
{
    // event 440_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_440_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_440_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_440_13_end;
        if (!((((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(24)) != (1))) goto event_440_13_end;
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_440_13_end: ;
}
void Frames::event_func_1674()
{
    // event 441_13
    bool or_result_441_13 = false;
    bool or_temp_result_441_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto or_event_441_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_441_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (30))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_441_13_0_end;
        or_result_441_13 = true;
        or_temp_result_441_13_0 = true;
    }
    or_event_441_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_441_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 441_13
    bool or_temp_result_441_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto or_event_441_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_441_13_1_end;
        or_result_441_13 = true;
        or_temp_result_441_13_1 = true;
        or_event_441_13_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_441_13_1) {
            playerinput_19_instances.save_selection();
        }
        if (!or_result_441_13) goto or_final_or_event_441_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_441_13_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_441_13_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_441_13_1) {
            playerinput_19_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(18, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    or_final_or_event_441_13_1_end: ;
}
void Frames::event_func_1675()
{
    // event 442_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_442_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_442_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (2))) goto event_442_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (30))) goto event_442_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_442_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_442_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_442_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_442_13_end: ;
}
void Frames::event_func_1676()
{
    // event 443_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_443_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_443_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_443_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_443_13_end;
        if (!((((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(24)) != (1))) goto event_443_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_443_13_end: ;
}
void Frames::event_func_1677()
{
    // event 444_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_444_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_444_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_444_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_444_13_end: ;
}
void Frames::event_func_1678()
{
    // event 445_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_445_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(14, 1);
    }
    event_445_13_end: ;
}
void Frames::event_func_1679()
{
    // event 446_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_446_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (5))) goto event_446_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(8));
    }
    event_446_13_end: ;
}
void Frames::event_func_1680()
{
    // event 447_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_447_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(8))) goto event_447_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_447_13_end: ;
}
void Frames::event_func_1681()
{
    // event 448_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_448_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(14)) > (30))) goto event_448_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_448_13_end: ;
}
void Frames::event_func_1682()
{
    // event 449_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_449_13_end;
        if (not_always_449_13 > loop_count) {
            not_always_449_13 = loop_count + 2;
            goto event_449_13_end;
        }
        not_always_449_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        media.stop_sample(SOUND_BIKE_SKID_162);
    }
    event_449_13_end: ;
}
void Frames::event_func_1683()
{
    // event 450_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_450_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(11)) == (4))) goto event_450_13_end;
        if (not_always_450_13 > loop_count) {
            not_always_450_13 = loop_count + 2;
            goto event_450_13_end;
        }
        not_always_450_13 = loop_count + 2;
        {
            loop_stop_voices_running = true;
            int times = int(1);
            loop_stop_voices_index = 0;
            while (loop_stop_voices_index < times) {
                loop_stop_voices_8();
                if (!loop_stop_voices_running) break;
                loop_stop_voices_index++;
            }
        }
        {
            loop_sound_help_running = true;
            int times = int(1);
            loop_sound_help_index = 0;
            while (loop_sound_help_index < times) {
                loop_sound_help_0();
                if (!loop_sound_help_running) break;
                loop_sound_help_index++;
            }
        }
    }
    event_450_13_end: ;
}
void Frames::event_func_1684()
{
    // event 451_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_451_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 13);
    }
    event_451_13_end: ;
}
void Frames::event_func_1685()
{
    // event 452_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_452_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_452_13_end: ;
}
void Frames::event_func_1686()
{
    // event 453_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_453_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_453_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_453_13_end: ;
}
void Frames::event_func_1687()
{
    // event 454_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_454_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_454_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(18)) <= (0))) goto event_454_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_454_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_454_13_end: ;
}
void Frames::event_func_1688()
{
    // event 455_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_455_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_455_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_455_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_455_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_455_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_455_13_end: ;
}
void Frames::event_func_1689()
{
    // event 456_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_456_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_456_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_456_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_456_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_456_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_456_13_end: ;
}
void Frames::event_func_1690()
{
    // event 457_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_457_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_457_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_457_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_457_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_457_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_457_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_457_13_end: ;
}
void Frames::event_func_1691()
{
    // event 458_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_458_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_458_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_458_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_458_13_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_458_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_458_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_458_13_end: ;
}
void Frames::event_func_1692()
{
    // event 459_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_459_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_459_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_459_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    
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
    event_459_13_end: ;
}
void Frames::event_func_1693()
{
    // event 460_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_460_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_460_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_460_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_460_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(12)) <= (20))) goto event_460_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_460_13_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_460_13_end: ;
}
void Frames::event_func_1694()
{
    // event 461_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_461_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_461_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_461_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_461_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_461_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_461_13_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
    }
    event_461_13_end: ;
}
void Frames::event_func_1695()
{
    // event 462_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_462_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_462_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_462_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_462_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_462_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_462_13_end: ;
}
void Frames::event_func_1696()
{
    // event 463_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1)) goto event_463_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 25);
    }
    event_463_13_end: ;
}
void Frames::event_func_1697()
{
    // event 464_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1)) goto event_464_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(27))) goto event_464_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
    }
    event_464_13_end: ;
}
void Frames::event_func_1698()
{
    // event 465_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1)) goto event_465_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
    }
    event_465_13_end: ;
}
void Frames::event_func_1699()
{
    // event 466_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1)) goto event_466_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(14, 1);
    }
    event_466_13_end: ;
}
void Frames::event_func_1700()
{
    // event 467_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1)) goto event_467_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(14)) > (7))) goto event_467_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_467_13_end: ;
}
void Frames::event_func_1701()
{
    // event 468_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1)) goto event_468_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (45))) goto event_468_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 46);
    }
    event_468_13_end: ;
}
void Frames::event_func_1702()
{
    // event 469_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_469_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(9, 0);
    }
    event_469_13_end: ;
}
void Frames::event_func_1703()
{
    // event 470_13
    bool or_result_470_13 = false;
    bool or_temp_result_470_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto or_event_470_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_470_13_0_end;
        or_result_470_13 = true;
        or_temp_result_470_13_0 = true;
    }
    or_event_470_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_470_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 470_13
    bool or_temp_result_470_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto or_event_470_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_470_13_1_end;
        or_result_470_13 = true;
        or_temp_result_470_13_1 = true;
        or_event_470_13_1_end: ;
        if (or_temp_result_470_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_470_13) goto or_final_or_event_470_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_470_13_0 || or_temp_result_470_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
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
    }
    or_final_or_event_470_13_1_end: ;
}
void Frames::event_func_1704()
{
    // event 471_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_471_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (12))) goto event_471_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_471_13_end: ;
}
void Frames::event_func_1705()
{
    // event 472_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_472_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_472_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_472_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_472_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
    }
    event_472_13_end: ;
}
void Frames::event_func_1706()
{
    // event 473_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_473_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_473_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_473_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_473_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_473_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_473_13_end: ;
}
void Frames::event_func_1707()
{
    // event 474_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_474_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_474_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_474_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_474_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (43))) goto event_474_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    
    }
    event_474_13_end: ;
}
void Frames::event_func_1708()
{
    // event 475_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_475_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_475_13_end: ;
}
void Frames::event_func_1709()
{
    // event 476_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_476_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_476_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_476_13_end: ;
}
void Frames::event_func_1710()
{
    // event 477_13
    bool or_result_477_13 = false;
    bool or_temp_result_477_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_477_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_477_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_477_13_0_end;
        or_result_477_13 = true;
        or_temp_result_477_13_0 = true;
    }
    or_event_477_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_477_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 477_13
    bool or_temp_result_477_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_477_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_477_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_477_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_477_13_1_end;
        or_result_477_13 = true;
        or_temp_result_477_13_1 = true;
        or_event_477_13_1_end: ;
        guienergy_124_instances.clear_saved_selection();
        if (or_temp_result_477_13_1) {
            guienergy_124_instances.save_selection();
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_477_13) goto or_final_or_event_477_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_477_13_1) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_477_13_0 || or_temp_result_477_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_477_13_0 || or_temp_result_477_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_477_13_1_end: ;
}
void Frames::event_func_1711()
{
    // event 478_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_478_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_478_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_478_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-3))) goto event_478_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
    }
    event_478_13_end: ;
}
void Frames::event_func_1712()
{
    // event 479_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_479_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_479_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_479_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) > (0))) goto event_479_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 42);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2));
        }
    }
    event_479_13_end: ;
}
void Frames::event_func_1713()
{
    // event 480_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_480_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_480_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_480_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) < (2))) goto event_480_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.add(14, 1);
    }
    event_480_13_end: ;
}
void Frames::event_func_1714()
{
    // event 481_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_481_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_481_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_481_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_481_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (20))) goto event_481_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 44);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_kick_67+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_481_13_0_end;
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
        dynamic_481_13_0_end: ;
    }
    event_481_13_end: ;
}
void Frames::event_func_1715()
{
    // event 482_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_482_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_482_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_482_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_482_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        {
            loop_sound_pounce_running = true;
            int times = int(1);
            loop_sound_pounce_index = 0;
            while (loop_sound_pounce_index < times) {
                loop_sound_pounce_13();
                if (!loop_sound_pounce_running) break;
                loop_sound_pounce_index++;
            }
        }
    }
    event_482_13_end: ;
}
void Frames::event_func_1716()
{
    // event 483_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_483_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_483_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_483_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_483_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        {
            loop_sound_pounce_running = true;
            int times = int(1);
            loop_sound_pounce_index = 0;
            while (loop_sound_pounce_index < times) {
                loop_sound_pounce_13();
                if (!loop_sound_pounce_running) break;
                loop_sound_pounce_index++;
            }
        }
    }
    event_483_13_end: ;
}
void Frames::event_func_1717()
{
    // event 484_13
    bool or_result_484_13 = false;
    bool or_temp_result_484_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_484_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_484_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_484_13_0_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_484_13_0_end;
        or_result_484_13 = true;
        or_temp_result_484_13_0 = true;
    }
    or_event_484_13_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_484_13_0) {
        playersensorrightbig_393_instances.save_selection();
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 484_13
    bool or_temp_result_484_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_484_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_484_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_484_13_1_end;
        playersensorleftbig_391_instances.clear_selection();
        for (ObjectIterator it(playersensorleftbig_391_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorleftbig_391_instances.has_selection()) goto or_event_484_13_1_end;
        or_result_484_13 = true;
        or_temp_result_484_13_1 = true;
        or_event_484_13_1_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_484_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_484_13) goto or_final_or_event_484_13_1_end;
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_484_13_0) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_484_13_0 || or_temp_result_484_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_484_13_0 || or_temp_result_484_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_484_13_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 47);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 10);
        }
    }
    or_final_or_event_484_13_1_end: ;
}
