#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_stop_voices_8()
{
    event_func_7();
    event_func_888();
    event_func_8();
    event_func_9();
    event_func_10();
}
void Frames::event_func_889()
{
    // event 203_8
    {
        if (!(group_sound_events_spade_1)) goto event_203_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_203_8_end;
        media.play_id(SOUND_SPADE_ATTACK1_108, -1, 1);
    }
    event_203_8_end: ;
}
void Frames::loop_sound_attack1_8()
{
    event_func_67();
    event_func_889();
    event_func_68();
}
void Frames::event_func_890()
{
    // event 202_8
    {
        if (!(group_sound_events_spade_1)) goto event_202_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_202_8_end;
        media.play_id(SOUND_SPADE_ATTACK0_107, -1, 1);
    }
    event_202_8_end: ;
}
void Frames::loop_sound_attack0_8()
{
    event_func_69();
    event_func_890();
    event_func_70();
    event_func_71();
}
void Frames::event_func_891()
{
    // event 204_8
    {
        if (!(group_sound_events_spade_1)) goto event_204_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_204_8_end;
        media.play_id(SOUND_SPADE_WHYWONTMOVE_109, -1, 1);
    }
    event_204_8_end: ;
}
void Frames::loop_sound_cantmoveit_8()
{
    event_func_79();
    event_func_891();
    event_func_80();
    event_func_81();
    event_func_82();
}
void Frames::event_func_892()
{
    // event 12_8
    {
        if (!(group_check_stage_1)) goto event_12_8_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (string_to_number(((Text*)get_instance(stageidlist_127_instances))->get_paragraph(loop_stage_index))))) goto event_12_8_end;
        ((Active*)get_instance(menusequence_244_instances))->alterables->values.set(8, loop_stage_index);
    }
    event_12_8_end: ;
}
void Frames::loop_stage_8()
{
    event_func_892();
}
void Frames::event_func_893()
{
    // event 200_8
    {
        if (!(group_sound_events_spade_1)) goto event_200_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_200_8_end;
        media.play_id(SOUND_SPADE_HURT2_105, -1, 1);
    }
    event_200_8_end: ;
}
void Frames::loop_sound_hurt2_8()
{
    event_func_89();
    event_func_893();
    event_func_90();
    event_func_91();
    event_func_92();
}
void Frames::event_func_894()
{
    // event 198_8
    {
        if (!(group_sound_events_spade_1)) goto event_198_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_198_8_end;
        media.play_id(SOUND_SPADE_HURT0_103, -1, 1);
    }
    event_198_8_end: ;
}
void Frames::loop_sound_hurt0_8()
{
    event_func_95();
    event_func_894();
    event_func_96();
    event_func_97();
    event_func_92();
}
void Frames::test_collisions_8()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_895()
{
    // event 6_8
    {
        if (!((global_values->get(1)) == (4))) goto event_6_8_end;
        if (!((global_values->get(0)) == (2))) goto event_6_8_end;
        global_values->set(0, 1);
    }
    event_6_8_end: ;
}
void Frames::event_func_896()
{
    // event 7_8
    {
        // group: Check Character
        if (!((global_values->get(1)) < (3))) goto event_7_8_end;
        ((Active*)get_instance(menusequence_244_instances))->alterables->values.set(9, global_values->get(1));
    }
    event_7_8_end: ;
}
void Frames::event_func_897()
{
    // event 8_8
    {
        // group: Check Character
        if (!((global_values->get(1)) == (3))) goto event_8_8_end;
        ((Active*)get_instance(menusequence_244_instances))->alterables->values.set(9, 2);
    }
    event_8_8_end: ;
}
void Frames::event_func_898()
{
    // event 9_8
    {
        // group: Check Character
        if (!((global_values->get(1)) > (3))) goto event_9_8_end;
        ((Active*)get_instance(menusequence_244_instances))->alterables->values.set(9, global_values->get(1)-1);
    }
    event_9_8_end: ;
}
void Frames::event_func_899()
{
    // event 10_8
    {
        if (!(group_check_stage_1)) goto event_10_8_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (99))) goto event_10_8_end;
        if (not_always_10_8 > loop_count) {
            not_always_10_8 = loop_count + 2;
            goto event_10_8_end;
        }
        not_always_10_8 = loop_count + 2;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_file_14+number_to_string(global_values->get(10))+str_sav_15);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_10_8_end: ;
}
void Frames::event_func_900()
{
    // event 11_8
    {
        if (!(group_check_stage_1)) goto event_11_8_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (99))) goto event_11_8_end;
        next_frame = 5 + 0;    
    
    }
    event_11_8_end: ;
}
void Frames::event_func_901()
{
    // event 13_8
    {
        if (!(group_check_stage_1)) goto event_13_8_end;
        if (not_always_13_8 > loop_count) {
            not_always_13_8 = loop_count + 2;
            goto event_13_8_end;
        }
        not_always_13_8 = loop_count + 2;
        ((Active*)get_instance(menusequence_244_instances))->alterables->flags.enable(0);
    }
    event_13_8_end: ;
}
void Frames::event_func_902()
{
    // event 14_8
    bool or_result_14_8 = false;
    bool or_temp_result_14_8_0 = false;
    {
        if (!(group_check_stage_1)) goto or_event_14_8_0_end;
        menusequence_244_instances.clear_selection();
        for (ObjectIterator it(menusequence_244_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!menusequence_244_instances.has_selection()) goto or_event_14_8_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (10000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(25)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+((Active*)get_single(menusequence_244_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_single(menusequence_244_instances, default_active_instance))->alterables->values.get(8)*2+1)))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_14_8_0_end;
        or_result_14_8 = true;
        or_temp_result_14_8_0 = true;
    }
    or_event_14_8_0_end: ;
    menusequence_244_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_14_8_0) {
        menusequence_244_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 14_8
    bool or_temp_result_14_8_1 = false;
    {
        if (!(group_check_stage_1)) goto or_event_14_8_1_end;
        menusequence_244_instances.clear_selection();
        for (ObjectIterator it(menusequence_244_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!menusequence_244_instances.has_selection()) goto or_event_14_8_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (10000))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_14_8_1_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+((Active*)get_single(menusequence_244_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_single(menusequence_244_instances, default_active_instance))->alterables->values.get(8)*2+1)) <= (0))) goto or_event_14_8_1_end;
        or_result_14_8 = true;
        or_temp_result_14_8_1 = true;
        or_event_14_8_1_end: ;
        if (or_temp_result_14_8_1) {
            menusequence_244_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_14_8) goto or_final_or_event_14_8_1_end;
        masterlevel_37_instances.empty_selection();
        menusequence_244_instances.empty_selection();
        if (or_temp_result_14_8_0 || or_temp_result_14_8_1) {
            menusequence_244_instances.restore_selection();
        }
        if (or_temp_result_14_8_0 || or_temp_result_14_8_1) {
            masterlevel_37_instances.restore_selection();
        }
        recorddata_34_instances.clear_selection();
        for (ObjectIterator it(recorddata_34_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(int(((Active*)get_single(masterlevel_37_instances, it.current_index, default_active_instance))->alterables->values.get(25)), 3+((Active*)get_single(menusequence_244_instances, it.current_index, default_active_instance))->alterables->values.get(9), ((Active*)get_single(menusequence_244_instances, it.current_index, default_active_instance))->alterables->values.get(8)*2+1);
        }
    }
    or_final_or_event_14_8_1_end: ;
}
void Frames::event_func_903()
{
    // event 15_8
    {
        if (!(group_check_stage_1)) goto event_15_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_15_8_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9)) > (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+((Active*)get_instance(menusequence_244_instances))->alterables->values.get(9), ((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)*2+2)))) goto event_15_8_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9), 3+((Active*)get_instance(menusequence_244_instances))->alterables->values.get(9), ((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)*2+2);
    }
    event_15_8_end: ;
}
void Frames::event_func_904()
{
    // event 16_8
    {
        if (!(group_check_stage_1)) goto event_16_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_16_8_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_16_8_end: ;
}
void Frames::event_func_905()
{
    // event 17_8
    {
        // group: Game Reset
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_17_8_end;
        if (not_always_17_8 > loop_count) {
            not_always_17_8 = loop_count + 2;
            goto event_17_8_end;
        }
        not_always_17_8 = loop_count + 2;
        global_values->set(13, 0);
        global_values->set(3, 0);
        global_values->set(14, 0);
        global_values->set(15, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        global_values->set(4, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(5);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(6);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(7);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(8);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        global_values->set(5, 0);
        global_values->set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_17_8_end: ;
}
void Frames::event_func_906()
{
    // event 18_8
    {
        // group: Game Reset
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_18_8_end;
        if (!((global_values->get(0)) <= (0))) goto event_18_8_end;
        if (not_always_18_8 > loop_count) {
            not_always_18_8 = loop_count + 2;
            goto event_18_8_end;
        }
        not_always_18_8 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, 0);
    }
    event_18_8_end: ;
}
void Frames::event_func_907()
{
    // event 19_8
    {
        // group: Game Reset
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_19_8_end;
        if (!((global_values->get(1)) == (3))) goto event_19_8_end;
        if (not_always_19_8 > loop_count) {
            not_always_19_8 = loop_count + 2;
            goto event_19_8_end;
        }
        not_always_19_8 = loop_count + 2;
        global_values->set(1, 2);
    }
    event_19_8_end: ;
}
void Frames::event_func_908()
{
    // event 20_8
    {
        if (!(group_stage_transitions_1)) goto event_20_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_20_8_end;
        if (!((global_values->get(0)) == (1))) goto event_20_8_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
    }
    event_20_8_end: ;
}
void Frames::event_func_909()
{
    // event 21_8
    {
        if (!(group_stage_transitions_1)) goto event_21_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_21_8_end;
        if (!((global_values->get(0)) == (1))) goto event_21_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (0))) goto event_21_8_end;
        next_frame = 24 + 0;    
    
    }
    event_21_8_end: ;
}
void Frames::event_func_910()
{
    // event 22_8
    {
        if (!(group_stage_transitions_1)) goto event_22_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_22_8_end;
        if (!((global_values->get(0)) == (1))) goto event_22_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (1))) goto event_22_8_end;
        next_frame = 24 + 0;    
    
    }
    event_22_8_end: ;
}
void Frames::event_func_911()
{
    // event 23_8
    {
        if (!(group_stage_transitions_1)) goto event_23_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_23_8_end;
        if (!((global_values->get(0)) == (1))) goto event_23_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (2))) goto event_23_8_end;
        next_frame = 29 + 0;    
    
    }
    event_23_8_end: ;
}
void Frames::event_func_912()
{
    // event 24_8
    {
        if (!(group_stage_transitions_1)) goto event_24_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_24_8_end;
        if (!((global_values->get(0)) == (1))) goto event_24_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (3))) goto event_24_8_end;
        next_frame = 35 + 0;    
    
    }
    event_24_8_end: ;
}
void Frames::event_func_913()
{
    // event 25_8
    {
        if (!(group_stage_transitions_1)) goto event_25_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_25_8_end;
        if (!((global_values->get(0)) == (1))) goto event_25_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (4))) goto event_25_8_end;
        next_frame = 39 + 0;    
    
    }
    event_25_8_end: ;
}
void Frames::event_func_914()
{
    // event 26_8
    {
        if (!(group_stage_transitions_1)) goto event_26_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_26_8_end;
        if (!((global_values->get(0)) == (1))) goto event_26_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (5))) goto event_26_8_end;
        if (!((global_values->get(1)) == (0))) goto event_26_8_end;
        next_frame = 44 + 0;    
    
    }
    event_26_8_end: ;
}
void Frames::event_func_915()
{
    // event 27_8
    {
        if (!(group_stage_transitions_1)) goto event_27_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_27_8_end;
        if (!((global_values->get(0)) == (1))) goto event_27_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (5))) goto event_27_8_end;
        if (!((global_values->get(1)) != (0))) goto event_27_8_end;
        next_frame = 56 + 0;    
    
    }
    event_27_8_end: ;
}
void Frames::event_func_916()
{
    // event 28_8
    {
        if (!(group_stage_transitions_1)) goto event_28_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_28_8_end;
        if (!((global_values->get(0)) == (1))) goto event_28_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (6))) goto event_28_8_end;
        if (!((global_values->get(1)) == (0))) goto event_28_8_end;
        next_frame = 50 + 0;    
    
    }
    event_28_8_end: ;
}
void Frames::event_func_917()
{
    // event 29_8
    {
        if (!(group_stage_transitions_1)) goto event_29_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_29_8_end;
        if (!((global_values->get(0)) == (1))) goto event_29_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (6))) goto event_29_8_end;
        if (!((global_values->get(1)) != (0))) goto event_29_8_end;
        next_frame = 85 + 0;    
    
    }
    event_29_8_end: ;
}
void Frames::event_func_918()
{
    // event 30_8
    {
        if (!(group_stage_transitions_1)) goto event_30_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_30_8_end;
        if (!((global_values->get(0)) == (1))) goto event_30_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (7))) goto event_30_8_end;
        next_frame = 85 + 0;    
    
    }
    event_30_8_end: ;
}
void Frames::event_func_919()
{
    // event 31_8
    {
        if (!(group_stage_transitions_1)) goto event_31_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_31_8_end;
        if (!((global_values->get(0)) == (1))) goto event_31_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (8))) goto event_31_8_end;
        next_frame = 44 + 0;    
    
    }
    event_31_8_end: ;
}
void Frames::event_func_920()
{
    // event 32_8
    {
        if (!(group_stage_transitions_1)) goto event_32_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_32_8_end;
        if (!((global_values->get(0)) == (1))) goto event_32_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (9))) goto event_32_8_end;
        next_frame = 65 + 0;    
    
    }
    event_32_8_end: ;
}
void Frames::event_func_921()
{
    // event 33_8
    {
        if (!(group_stage_transitions_1)) goto event_33_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_33_8_end;
        if (!((global_values->get(0)) == (1))) goto event_33_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (10))) goto event_33_8_end;
        next_frame = 67 + 0;    
    
    }
    event_33_8_end: ;
}
void Frames::event_func_922()
{
    // event 34_8
    {
        if (!(group_stage_transitions_1)) goto event_34_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_34_8_end;
        if (!((global_values->get(0)) == (1))) goto event_34_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (11))) goto event_34_8_end;
        next_frame = 69 + 0;    
    
    }
    event_34_8_end: ;
}
void Frames::event_func_923()
{
    // event 35_8
    {
        if (!(group_stage_transitions_1)) goto event_35_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_35_8_end;
        if (!((global_values->get(0)) == (1))) goto event_35_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (12))) goto event_35_8_end;
        next_frame = 71 + 0;    
    
    }
    event_35_8_end: ;
}
void Frames::event_func_924()
{
    // event 36_8
    {
        if (!(group_stage_transitions_1)) goto event_36_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_36_8_end;
        if (!((global_values->get(0)) == (1))) goto event_36_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (13))) goto event_36_8_end;
        next_frame = 84 + 0;    
    
    }
    event_36_8_end: ;
}
void Frames::event_func_925()
{
    // event 37_8
    {
        if (!(group_stage_transitions_1)) goto event_37_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_37_8_end;
        if (!((global_values->get(0)) == (2))) goto event_37_8_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
    }
    event_37_8_end: ;
}
void Frames::event_func_926()
{
    // event 38_8
    {
        if (!(group_stage_transitions_1)) goto event_38_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_38_8_end;
        if (!((global_values->get(0)) == (2))) goto event_38_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (0))) goto event_38_8_end;
        next_frame = 77 + 0;    
    
        global_values->set(4, 0);
    }
    event_38_8_end: ;
}
void Frames::event_func_927()
{
    // event 39_8
    {
        if (!(group_stage_transitions_1)) goto event_39_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_39_8_end;
        if (!((global_values->get(0)) == (2))) goto event_39_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (1))) goto event_39_8_end;
        next_frame = 76 + 0;    
    
        global_values->set(4, 1);
    }
    event_39_8_end: ;
}
void Frames::event_func_928()
{
    // event 40_8
    {
        if (!(group_stage_transitions_1)) goto event_40_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_40_8_end;
        if (!((global_values->get(0)) == (2))) goto event_40_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (2))) goto event_40_8_end;
        if (!((global_values->get(1)) != (2))) goto event_40_8_end;
        if (!((global_values->get(1)) != (4))) goto event_40_8_end;
        next_frame = 77 + 0;    
    
        global_values->set(4, 2);
    }
    event_40_8_end: ;
}
void Frames::event_func_929()
{
    // event 41_8
    {
        if (!(group_stage_transitions_1)) goto event_41_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_41_8_end;
        if (!((global_values->get(0)) == (2))) goto event_41_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (2))) goto event_41_8_end;
        if (!((global_values->get(1)) == (2))) goto event_41_8_end;
        next_frame = 77 + 0;    
    
        global_values->set(4, 3);
    }
    event_41_8_end: ;
}
void Frames::event_func_930()
{
    // event 42_8
    {
        if (!(group_stage_transitions_1)) goto event_42_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_42_8_end;
        if (!((global_values->get(0)) == (2))) goto event_42_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (2))) goto event_42_8_end;
        if (!((global_values->get(1)) == (4))) goto event_42_8_end;
        next_frame = 77 + 0;    
    
        global_values->set(4, 3);
    }
    event_42_8_end: ;
}
void Frames::event_func_931()
{
    // event 43_8
    {
        if (!(group_stage_transitions_1)) goto event_43_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_43_8_end;
        if (!((global_values->get(0)) == (2))) goto event_43_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (3))) goto event_43_8_end;
        global_values->set(4, 1);
        next_frame = 79 + 0;    
    
    }
    event_43_8_end: ;
}
void Frames::event_func_932()
{
    // event 44_8
    {
        if (!(group_stage_transitions_1)) goto event_44_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_44_8_end;
        if (!((global_values->get(0)) == (2))) goto event_44_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (4))) goto event_44_8_end;
        next_frame = 36 + 0;    
    
        global_values->set(4, 99);
    }
    event_44_8_end: ;
}
void Frames::event_func_933()
{
    // event 45_8
    {
        if (!(group_stage_transitions_1)) goto event_45_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_45_8_end;
        if (!((global_values->get(0)) == (2))) goto event_45_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (5))) goto event_45_8_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 13);
    }
    event_45_8_end: ;
}
void Frames::event_func_934()
{
    // event 46_8
    {
        if (!(group_stage_transitions_1)) goto event_46_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_46_8_end;
        if (!((global_values->get(0)) == (2))) goto event_46_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (6))) goto event_46_8_end;
        if (!((global_values->get(1)) == (0))) goto event_46_8_end;
        global_values->set(4, 0);
        next_frame = 81 + 0;    
    
    }
    event_46_8_end: ;
}
void Frames::event_func_935()
{
    // event 47_8
    {
        if (!(group_stage_transitions_1)) goto event_47_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_47_8_end;
        if (!((global_values->get(0)) == (2))) goto event_47_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (6))) goto event_47_8_end;
        if (!((global_values->get(1)) != (0))) goto event_47_8_end;
        global_values->set(4, 1);
        next_frame = 81 + 0;    
    
    }
    event_47_8_end: ;
}
void Frames::event_func_936()
{
    // event 48_8
    {
        if (!(group_stage_transitions_1)) goto event_48_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_48_8_end;
        if (!((global_values->get(0)) == (2))) goto event_48_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (7))) goto event_48_8_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 20);
    }
    event_48_8_end: ;
}
void Frames::event_func_937()
{
    // event 49_8
    {
        if (!(group_stage_transitions_1)) goto event_49_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_49_8_end;
        if (!((global_values->get(0)) == (2))) goto event_49_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (8))) goto event_49_8_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 16);
    }
    event_49_8_end: ;
}
void Frames::event_func_938()
{
    // event 50_8
    {
        if (!(group_stage_transitions_1)) goto event_50_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_50_8_end;
        if (!((global_values->get(0)) == (2))) goto event_50_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (9))) goto event_50_8_end;
        next_frame = 65 + 0;    
    
    }
    event_50_8_end: ;
}
void Frames::event_func_939()
{
    // event 51_8
    {
        if (!(group_stage_transitions_1)) goto event_51_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_51_8_end;
        if (!((global_values->get(0)) == (2))) goto event_51_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (10))) goto event_51_8_end;
        next_frame = 67 + 0;    
    
    }
    event_51_8_end: ;
}
void Frames::event_func_940()
{
    // event 52_8
    {
        if (!(group_stage_transitions_1)) goto event_52_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_52_8_end;
        if (!((global_values->get(0)) == (2))) goto event_52_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (11))) goto event_52_8_end;
        next_frame = 69 + 0;    
    
    }
    event_52_8_end: ;
}
void Frames::event_func_941()
{
    // event 53_8
    {
        if (!(group_stage_transitions_1)) goto event_53_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_53_8_end;
        if (!((global_values->get(0)) == (2))) goto event_53_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (12))) goto event_53_8_end;
        next_frame = 71 + 0;    
    
    }
    event_53_8_end: ;
}
void Frames::event_func_942()
{
    // event 54_8
    {
        if (!(group_stage_transitions_1)) goto event_54_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_54_8_end;
        if (!((global_values->get(0)) == (2))) goto event_54_8_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8)) == (13))) goto event_54_8_end;
        next_frame = 84 + 0;    
    
    }
    event_54_8_end: ;
}
void Frames::event_func_943()
{
    // event 55_8
    {
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_55_8_end;
        if (!((global_values->get(0)) <= (0))) goto event_55_8_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
        next_frame = 5 + 0;    
    
    }
    event_55_8_end: ;
}
void Frames::event_func_944()
{
    // event 56_8
    {
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_56_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_off(1))) goto event_56_8_end;
        if (!((global_values->get(0)) >= (1))) goto event_56_8_end;
        if (!((global_values->get(0)) <= (2))) goto event_56_8_end;
        if (!((global_values->get(31)) == (0))) goto event_56_8_end;
        if (not_always_56_8 > loop_count) {
            not_always_56_8 = loop_count + 2;
            goto event_56_8_end;
        }
        not_always_56_8 = loop_count + 2;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8), 1, 5);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 1), 3, (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 5)+1)*5+1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 2), 3, (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 5)+1)*5+2);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3), 3, (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 5)+1)*5+3);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 6)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 11)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 16)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 21)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 26)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 31)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 36)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 41)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 46)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 51)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 56)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 61)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 66)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 71)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 76), 1, 6);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 7)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 12)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 17)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 22)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 27)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 32)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 37)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 42)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 47)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 52)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 57)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 62)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 67)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 72)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 77), 1, 4);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 8)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 13)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 18)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 23)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 28)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 33)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 38)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 43)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 48)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 53)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 58)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 63)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 68)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 73)+((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 78), 1, 7);
    }
    event_56_8_end: ;
}
void Frames::event_func_945()
{
    // event 57_8
    {
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_57_8_end;
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_off(1))) goto event_57_8_end;
        if (!((global_values->get(0)) >= (1))) goto event_57_8_end;
        if (!((global_values->get(0)) <= (2))) goto event_57_8_end;
        if (not_always_57_8 > loop_count) {
            not_always_57_8 = loop_count + 2;
            goto event_57_8_end;
        }
        not_always_57_8 = loop_count + 2;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(manager.lives, 1, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(0, 3, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(0, 3, 2);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(0, 3, 3);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(global_values->get(1), 1, 8);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(get_min(global_values->get(18), ((Counter*)get_instance(guicrystal_121_instances))->value), 1, 9);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(((Active*)get_instance(menusequence_244_instances))->alterables->values.get(8), ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 40+((Active*)get_instance(menusequence_244_instances))->alterables->values.get(9))), 1, 40+((Active*)get_instance(menusequence_244_instances))->alterables->values.get(9));
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 15)+((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9), 1, 15);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1), 1, 3);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(2-global_values->get(0), 1, 12);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((ArrayObject*)get_instance(savedata_28_instances))->save(get_app_drive()+get_app_dir()+str_file_14+number_to_string(global_values->get(10))+str_sav_15);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./file" + number_to_string(global_values->get(10)) + ".sav");
    }
    event_57_8_end: ;
}
void Frames::event_func_946()
{
    // event 58_8
    {
        if (!(((Active*)get_instance(menusequence_244_instances))->alterables->flags.is_on(0))) goto event_58_8_end;
        if (!((global_values->get(0)) >= (1))) goto event_58_8_end;
        if (!((global_values->get(0)) <= (2))) goto event_58_8_end;
        if (not_always_58_8 > loop_count) {
            not_always_58_8 = loop_count + 2;
            goto event_58_8_end;
        }
        not_always_58_8 = loop_count + 2;
        if (!group_stage_transitions_1) {
            group_stage_transitions_1 = true;
        }
    }
    event_58_8_end: ;
}
void Frames::event_func_947()
{
    // event 171_8
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (1))) goto event_171_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_171_8_end;
        if (not_always_171_8 > loop_count) {
            not_always_171_8 = loop_count + 2;
            goto event_171_8_end;
        }
        not_always_171_8 = loop_count + 2;
        if (!group_sound_events_lilac_1) {
            group_sound_events_lilac_1 = true;
        }
            group_sound_events_spade_1 = false;
    
            group_sound_events_carol_1 = false;
    
            group_sound_events_milla_1 = false;
    
            group_sound_events_torque_1 = false;
    
    }
    event_171_8_end: ;
}
void Frames::event_func_948()
{
    // event 172_8
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (1))) goto event_172_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_172_8_end;
        if (not_always_172_8 > loop_count) {
            not_always_172_8 = loop_count + 2;
            goto event_172_8_end;
        }
        not_always_172_8 = loop_count + 2;
        if (!group_sound_events_spade_1) {
            group_sound_events_spade_1 = true;
        }
            group_sound_events_lilac_1 = false;
    
            group_sound_events_carol_1 = false;
    
            group_sound_events_milla_1 = false;
    
            group_sound_events_torque_1 = false;
    
    }
    event_172_8_end: ;
}
void Frames::event_func_949()
{
    // event 173_8
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (1))) goto event_173_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_173_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_173_8_end;
        if (not_always_173_8 > loop_count) {
            not_always_173_8 = loop_count + 2;
            goto event_173_8_end;
        }
        not_always_173_8 = loop_count + 2;
        if (!group_sound_events_carol_1) {
            group_sound_events_carol_1 = true;
        }
            group_sound_events_lilac_1 = false;
    
            group_sound_events_spade_1 = false;
    
            group_sound_events_milla_1 = false;
    
            group_sound_events_torque_1 = false;
    
    }
    event_173_8_end: ;
}
void Frames::event_func_950()
{
    // event 174_8
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (1))) goto event_174_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_174_8_end;
        if (not_always_174_8 > loop_count) {
            not_always_174_8 = loop_count + 2;
            goto event_174_8_end;
        }
        not_always_174_8 = loop_count + 2;
        if (!group_sound_events_milla_1) {
            group_sound_events_milla_1 = true;
        }
            group_sound_events_spade_1 = false;
    
            group_sound_events_carol_1 = false;
    
            group_sound_events_lilac_1 = false;
    
            group_sound_events_torque_1 = false;
    
    }
    event_174_8_end: ;
}
void Frames::event_func_951()
{
    // event 175_8
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (1))) goto event_175_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_175_8_end;
        if (not_always_175_8 > loop_count) {
            not_always_175_8 = loop_count + 2;
            goto event_175_8_end;
        }
        not_always_175_8 = loop_count + 2;
        if (!group_sound_events_torque_1) {
            group_sound_events_torque_1 = true;
        }
            group_sound_events_spade_1 = false;
    
            group_sound_events_carol_1 = false;
    
            group_sound_events_lilac_1 = false;
    
            group_sound_events_milla_1 = false;
    
    }
    event_175_8_end: ;
}
void Frames::event_func_952()
{
    // event 261_8
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_261_8_end;
        if (!(is_key_pressed_once(SDLK_6))) goto event_261_8_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*15);
    }
    event_261_8_end: ;
}
void Frames::event_func_953()
{
    // event 262_8
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_262_8_end;
        if (!(is_key_pressed_once(SDLK_7))) goto event_262_8_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_262_8_end: ;
}
void Frames::event_func_954()
{
    // event 263_8
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_263_8_end;
        if (!(is_key_pressed_once(SDLK_8))) goto event_263_8_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
    }
    event_263_8_end: ;
}
void Frames::handle_frame_9_events()
{
    test_collisions_8();
    event_func_895();
    event_func_896();
    event_func_897();
    event_func_898();
    if (!group_check_stage_1) goto group_check_stage_1_end;
    event_func_899();
    event_func_900();
    event_func_901();
    event_func_902();
    event_func_903();
    event_func_904();
    group_check_stage_1_end: ;
    event_func_905();
    event_func_906();
    event_func_907();
    if (!group_stage_transitions_1) goto group_stage_transitions_1_end;
    event_func_908();
    event_func_909();
    event_func_910();
    event_func_911();
    event_func_912();
    event_func_913();
    event_func_914();
    event_func_915();
    event_func_916();
    event_func_917();
    event_func_918();
    event_func_919();
    event_func_920();
    event_func_921();
    event_func_922();
    event_func_923();
    event_func_924();
    event_func_925();
    event_func_926();
    event_func_927();
    event_func_928();
    event_func_929();
    event_func_930();
    event_func_931();
    event_func_932();
    event_func_933();
    event_func_934();
    event_func_935();
    event_func_936();
    event_func_937();
    event_func_938();
    event_func_939();
    event_func_940();
    event_func_941();
    event_func_942();
    group_stage_transitions_1_end: ;
    event_func_943();
    event_func_944();
    event_func_945();
    event_func_946();
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_9_pre_events()
{
}
void Frames::event_func_955()
{
    // event 1_8
    {
        {
            loop_check_running = true;
            int times = int(99);
            loop_check_index = 0;
            while (loop_check_index < times) {
                loop_check_8();
                if (!loop_check_running) break;
                loop_check_index++;
            }
        }
    }
    event_1_8_end: ;
}
void Frames::event_func_956()
{
    // event 3_8
    {
        // group: Jump to bonus stage
        if (!((global_values->get(0)) > (0))) goto event_3_8_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(9))) goto event_3_8_end;
            group_check_stage_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(9);
        next_frame = 13 + 0;    
    
    }
    event_3_8_end: ;
}
void Frames::event_func_957()
{
    // event 4_8
    {
        if (!((global_values->get(0)) < (0))) goto event_4_8_end;
        global_values->set(0, 0-global_values->get(0));
        ((Active*)get_instance(menusequence_244_instances))->alterables->flags.enable(1);
    }
    event_4_8_end: ;
}
void Frames::event_func_958()
{
    // event 5_8
    {
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./records.dat");
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
        media.stop_samples();
        global_values->set(4, 0);
        {
            loop_stage_running = true;
            int times = int(15);
            loop_stage_index = 0;
            while (loop_stage_index < times) {
                loop_stage_8();
                if (!loop_stage_running) break;
                loop_stage_index++;
            }
        }
    }
    event_5_8_end: ;
}
void Frames::on_frame_9_start_events()
{
    event_func_955();
    event_func_956();
    event_func_957();
    event_func_958();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_9_init()
{
    index = 8;
    width = 640;
    height = 480;
    virtual_width = 640;
    virtual_height = 480;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(2);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_2_instances[] = {&act2recordmin_239_instances, &act2recordsec_240_instances, &act2recordmil_241_instances, &act2recordcrystals2_242_instances, NULL};
    qualifier_2.set(4, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&recordcolon_243_instances, &active_246_instances, &active2_247_instances, NULL};
    qualifier_3.set(3, &qualifier_3_instances[0]);
    add_background_object(create_quickbackdrop3_233(160, -376), 0);
    add_background_object(create_quickbackdrop_234(160, -320), 0);
    add_background_object(create_backdrop3_235(0, -376), 0);
    add_background_object(create_checkerpattern_236(0, -416), 0);
    add_background_object(create_separatormasterobjects2_12(-192, -80), 0);
    add_object(create_results_237(320, -355), 0);
    add_object(create_active5_238(352, -328), 0);
    add_object(create_masterlevel_37(-24, -24), 0);
    add_object(create_playerinput_19(-176, -56), 0);
    add_object(create_masterinput_20(-152, -56), 0);
    add_object(create_inputsp1_21(-128, -56), 0);
    add_object(create_globalinputdata_22(-104, -56), 0);
    add_object(create_act2recordmin_239(302, -312), 0);
    add_object(create_act2recordsec_240(342, -312), 0);
    add_object(create_act2recordmil_241(382, -312), 0);
    add_object(create_act2recordcrystals2_242(342, -280), 0);
    add_object(create_recordcolon_243(304, -328), 0);
    add_object(create_recordcolon_243(344, -328), 0);
    add_object(create_menusequence_244(-32, 0), 0);
    add_object(create_active5_238(312, -328), 0);
    add_object(create_active5_238(272, -328), 0);
    add_object(create_stageidlist_127(-112, 280), 0);
    add_object(create_playermovementvalues_245(-48, -24), 0);
    add_object(create_mapdata_30(-144, 0), 0);
    add_object(create_recorddata_34(-64, -56), 0);
    add_object(create_windowcontrol_27(-144, -32), 0);
    add_object(create_active_246(248, -336), 1);
    add_object(create_active2_247(248, -304), 1);
    add_object(create_bordertop_248(0, -496), 1);
    add_object(create_borderbottom_249(0, -264), 1);
    add_object(create_card_250(465, -236), 1);
    add_object(create_card_250(433, -236), 1);
    add_object(create_card_250(401, -236), 1);
    add_object(create_card_250(369, -236), 1);
    add_object(create_card_250(337, -236), 1);
    add_object(create_card_250(305, -236), 1);
    add_object(create_card_250(273, -236), 1);
    add_object(create_card_250(241, -236), 1);
    add_object(create_card_250(209, -236), 1);
    add_object(create_card_250(177, -236), 1);
    add_object(create_crystalcursor_251(-21, 213), 1);
    add_object(create_continue_252(329, -201), 1);
    add_object(create_fade_54(-440, -192), 1);
    add_object(create_newrecord_253(325, -270), 1);
    add_object(create_newrecord_253(325, -302), 1);
    add_object(create_sarassteampluginfreedomplanet_26(0, -56), 1);
    add_object(create_guirings_122(-304, 296), 1);
    add_object(create_controllermusic_128(-304, 344), 1);
    add_object(create_playerothers_123(-296, 408), 1);
    add_object(create_guienergy_124(-264, 320), 1);
    add_object(create_guilifebasemeter_125(-200, 360), 1);
    add_object(create_guicrystal_121(-228, 310), 1);
    add_object(create_savedata_28(-32, -56), 1);
    add_object(create_mapdata2_32(-144, 8), 1);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_check_running = false;
    loop_check_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_stage_running = false;
    loop_stage_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loops = NULL;
    not_always_58_8 = loop_count;
    not_always_171_8 = loop_count;
    not_always_173_8 = loop_count;
    not_always_65_0 = loop_count;
    not_always_172_8 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_121_0 = loop_count;
    not_always_175_8 = loop_count;
    group_debug_mode_debugging_1 = false;
    not_always_174_8 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    group_sound_events_lilac_1 = false;
    not_always_102_0 = loop_count;
    not_always_56_8 = loop_count;
    group_check_stage_1 = true;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_98_0 = loop_count;
    not_always_57_8 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_17_8 = loop_count;
    group_stage_transitions_1 = false;
    not_always_66_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_101_0 = loop_count;
    not_always_13_8 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_18_8 = loop_count;
    not_always_10_8 = loop_count;
    not_always_19_8 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
}
void Frames::event_func_959()
{
    // event 4_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_4_9_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_check_index)) == (1))) goto event_4_9_end;
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!achievement_257_instances.has_selection()) goto event_4_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) < (3))) goto event_4_9_end;
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, loop_check_index);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1));
        }
        FrameObject * single_instance_4_9_0; single_instance_4_9_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(achievement_257_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shine_256(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4_9_0 == NULL)
                    single_instance_4_9_0 = new_obj;
            }
        }
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->unlock_achievement(number_to_string(((Active*)get_single(achievement_257_instances, default_active_instance))->alterables->values.get(1)));
    }
    event_4_9_end: ;
}
void Frames::event_func_960()
{
    // event 5_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_5_9_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_check_index)) == (1))) goto event_5_9_end;
        achievementname_260_instances.clear_selection();
        for (ObjectIterator it(achievementname_260_instances); !it.end(); ++it) {
            if (!((((TextBlitter*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!achievementname_260_instances.has_selection()) goto event_5_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) < (3))) goto event_5_9_end;
        for (ObjectIterator it(achievementname_260_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(((Text*)get_instance(listnames_259_instances))->get_paragraph(loop_check_index-1));
        }
    }
    event_5_9_end: ;
}
void Frames::event_func_961()
{
    // event 6_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_6_9_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_check_index)) == (1))) goto event_6_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) < (3))) goto event_6_9_end;
        ((Active*)get_instance(menusequence_244_instances))->alterables->values.add(0, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(2, 2, loop_check_index);
    }
    event_6_9_end: ;
}
void Frames::event_func_962()
{
    // event 7_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_7_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) >= (3))) goto event_7_9_end;
            loop_check_running = false;
    
    }
    event_7_9_end: ;
}
void Frames::event_func_963()
{
    // event 8_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_8_9_end;
        if (!((loop_check_index) >= (98))) goto event_8_9_end;
            loop_check_running = false;
    
    }
    event_8_9_end: ;
}
void Frames::loop_check_9()
{
    event_func_959();
    event_func_960();
    event_func_961();
    event_func_962();
    event_func_963();
}
void Frames::test_collisions_9()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_964()
{
    // event 9_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_9_9_end;
        if (!((global_values->get(3)) > (30))) goto event_9_9_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(continue_252_instances))->set_visible(true);
    }
    event_9_9_end: ;
}
void Frames::event_func_965()
{
    // event 10_9
    {
        if (!(group_search_for_new_achievements_1)) goto event_10_9_end;
        if (!((global_values->get(3)) > (30))) goto event_10_9_end;
        if (once_condition_10_9) goto event_10_9_end;
        once_condition_10_9 = true;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_10_9_end: ;
}
void Frames::event_func_966()
{
    // event 11_9
    bool or_result_11_9 = false;
    bool or_temp_result_11_9_0 = false;
    {
        if (!(group_search_for_new_achievements_1)) goto or_event_11_9_0_end;
        if (!((global_values->get(3)) > (30))) goto or_event_11_9_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_11_9_0_end;
        or_result_11_9 = true;
        or_temp_result_11_9_0 = true;
    }
    or_event_11_9_0_end: ;
    // event 11_9
    bool or_temp_result_11_9_1 = false;
    {
        if (!(group_search_for_new_achievements_1)) goto or_event_11_9_1_end;
        if (!((global_values->get(3)) > (30))) goto or_event_11_9_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_11_9_1_end;
        or_result_11_9 = true;
        or_temp_result_11_9_1 = true;
        or_event_11_9_1_end: ;
        if (!or_result_11_9) goto or_final_or_event_11_9_1_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 1);
            fadeedge_57_instances.add_back();
        }
        ((Active*)get_instance(fade_54_instances))->set_x(frame_left()-global_values->get(16)-120);
        ((Active*)get_instance(fade_54_instances))->set_y(frame_top());
        ((Active*)get_instance(fade_54_instances))->set_x_scale(global_values->get(16));
        ((Active*)get_instance(fade_54_instances))->set_y_scale(global_values->get(17));
        {
            ((Active*)get_instance(fade_54_instances))->blend_color.set_semi_transparency(0);
        }
        if (!group_transition_1) {
            group_transition_1 = true;
        }
            group_search_for_new_achievements_1 = false;
    
    }
    or_final_or_event_11_9_1_end: ;
}
void Frames::event_func_967()
{
    // event 12_9
    {
        if (!(group_transition_1)) goto event_12_9_end;
        ((Active*)get_instance(fade_54_instances))->set_x(get_min(((Active*)get_instance(fade_54_instances))->get_x()+32, frame_left()));
        ((Active*)get_instance(fade_54_instances))->alterables->values.add(5, 1);
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(fade_54_instances))->get_x()+global_values->get(16)+120);
        }
    }
    event_12_9_end: ;
}
void Frames::event_func_968()
{
    // event 13_9
    {
        if (!(group_transition_1)) goto event_13_9_end;
        if (!((((Active*)get_instance(fade_54_instances))->alterables->values.get(5)) > (50))) goto event_13_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) <= (3))) goto event_13_9_end;
        if (!((global_values->get(0)) != (-3))) goto event_13_9_end;
        if (!((global_values->get(0)) != (-4))) goto event_13_9_end;
        next_frame = 8 + 0;    
    
    }
    event_13_9_end: ;
}
void Frames::event_func_969()
{
    // event 14_9
    {
        if (!(group_transition_1)) goto event_14_9_end;
        if (!((((Active*)get_instance(fade_54_instances))->alterables->values.get(5)) > (50))) goto event_14_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) <= (3))) goto event_14_9_end;
        if (!((global_values->get(0)) == (-3))) goto event_14_9_end;
        next_frame = 10 + 0;    
    
    }
    event_14_9_end: ;
}
void Frames::event_func_970()
{
    // event 15_9
    {
        if (!(group_transition_1)) goto event_15_9_end;
        if (!((((Active*)get_instance(fade_54_instances))->alterables->values.get(5)) > (50))) goto event_15_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) <= (3))) goto event_15_9_end;
        if (!((global_values->get(0)) == (-4))) goto event_15_9_end;
        next_frame = 3 + 0;    
    
    }
    event_15_9_end: ;
}
void Frames::event_func_971()
{
    // event 16_9
    {
        if (!(group_transition_1)) goto event_16_9_end;
        if (!((((Active*)get_instance(fade_54_instances))->alterables->values.get(5)) > (50))) goto event_16_9_end;
        if (!((((Active*)get_instance(menusequence_244_instances))->alterables->values.get(0)) > (3))) goto event_16_9_end;
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_16_9_end: ;
}
void Frames::handle_frame_10_events()
{
    test_collisions_9();
    event_func_379();
    if (!group_search_for_new_achievements_1) goto group_search_for_new_achievements_1_end;
    event_func_964();
    event_func_965();
    event_func_966();
    group_search_for_new_achievements_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_967();
    event_func_968();
    event_func_969();
    event_func_970();
    event_func_971();
    group_transition_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_225();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_10_pre_events()
{
}
void Frames::event_func_972()
{
    // event 1_9
    {
        achievement_257_instances.clear_selection();
        spread_value(achievement_257_instances, 0, 0);
        global_values->set(3, 0);
        media.play_id(SOUND_UI_START_100, -1, 1);
        achievementname_260_instances.clear_selection();
        spread_value(achievementname_260_instances, 0, 0);
        for (ObjectIterator it(achievementname_260_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->load(str_data_font_bmp_7);
        }
    }
    event_1_9_end: ;
}
