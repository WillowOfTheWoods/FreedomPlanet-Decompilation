#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_810()
{
    // event 115_5
    {
        if (!(group_transition_1)) goto event_115_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_115_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_115_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (5))) goto event_115_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 39 + 0;    
    
    }
    event_115_5_end: ;
}
void Frames::event_func_811()
{
    // event 116_5
    {
        if (!(group_transition_1)) goto event_116_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_116_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_116_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (6))) goto event_116_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 44 + 0;    
    
    }
    event_116_5_end: ;
}
void Frames::event_func_812()
{
    // event 117_5
    {
        if (!(group_transition_1)) goto event_117_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_117_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_117_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (7))) goto event_117_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 50 + 0;    
    
    }
    event_117_5_end: ;
}
void Frames::event_func_813()
{
    // event 118_5
    {
        if (!(group_transition_1)) goto event_118_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_118_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_118_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (8))) goto event_118_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 56 + 0;    
    
    }
    event_118_5_end: ;
}
void Frames::event_func_814()
{
    // event 119_5
    {
        if (!(group_transition_1)) goto event_119_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_119_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_119_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (9))) goto event_119_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 59 + 0;    
    
    }
    event_119_5_end: ;
}
void Frames::event_func_815()
{
    // event 120_5
    {
        if (!(group_transition_1)) goto event_120_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_120_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_120_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (10))) goto event_120_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 65 + 0;    
    
    }
    event_120_5_end: ;
}
void Frames::event_func_816()
{
    // event 121_5
    {
        if (!(group_transition_1)) goto event_121_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_121_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_121_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (11))) goto event_121_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 67 + 0;    
    
    }
    event_121_5_end: ;
}
void Frames::event_func_817()
{
    // event 122_5
    {
        if (!(group_transition_1)) goto event_122_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_122_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_122_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (12))) goto event_122_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 69 + 0;    
    
    }
    event_122_5_end: ;
}
void Frames::event_func_818()
{
    // event 123_5
    {
        if (!(group_transition_1)) goto event_123_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_123_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_123_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (13))) goto event_123_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 71 + 0;    
    
    }
    event_123_5_end: ;
}
void Frames::event_func_819()
{
    // event 124_5
    {
        if (!(group_transition_1)) goto event_124_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_124_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_124_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (14))) goto event_124_5_end;
        global_values->set(4, 1);
        global_values->set(0, 0);
        next_frame = 73 + 0;    
    
    }
    event_124_5_end: ;
}
void Frames::event_func_820()
{
    // event 125_5
    {
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_125_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_125_5_end;
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(0, ((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(stagename_213_instances))->force_frame(((Active*)get_instance(stagename_213_instances))->alterables->values.get(0));
    }
    event_125_5_end: ;
}
void Frames::event_func_821()
{
    // event 126_5
    {
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (10))) goto event_126_5_end;
        set_display_center(320+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1), -1);
        set_display_center(-1, 120+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_min(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18), 50));
    }
    event_126_5_end: ;
}
void Frames::event_func_822()
{
    // event 127_5
    {
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_max(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-1, 0));
    }
    event_127_5_end: ;
}
void Frames::handle_frame_6_events()
{
    test_collisions_5();
    event_func_715();
    event_func_716();
    event_func_717();
    if (!group_fade_in_1) goto group_fade_in_1_end;
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_718();
    event_func_719();
    event_func_720();
    event_func_721();
    event_func_722();
    event_func_723();
    group_fade_in_1_end: ;
    event_func_724();
    event_func_725();
    event_func_726();
    event_func_727();
    event_func_728();
    event_func_729();
    event_func_730();
    event_func_731();
    event_func_732();
    event_func_733();
    event_func_734();
    event_func_735();
    event_func_736();
    event_func_737();
    event_func_738();
    if (!group_demo_mode_1) goto group_demo_mode_1_end;
    event_func_739();
    event_func_740();
    event_func_741();
    event_func_742();
    event_func_743();
    event_func_744();
    event_func_745();
    group_demo_mode_1_end: ;
    event_func_746();
    event_func_747();
    event_func_748();
    if (!group_stage_selection_1) goto group_stage_selection_1_end;
    event_func_749();
    event_func_750();
    event_func_751();
    event_func_752();
    event_func_753();
    event_func_754();
    event_func_755();
    event_func_756();
    event_func_757();
    event_func_758();
    event_func_759();
    event_func_760();
    event_func_761();
    event_func_762();
    event_func_763();
    event_func_764();
    event_func_765();
    event_func_766();
    event_func_767();
    event_func_768();
    event_func_769();
    event_func_770();
    event_func_771();
    event_func_772();
    event_func_773();
    event_func_774();
    event_func_775();
    event_func_776();
    event_func_777();
    event_func_778();
    event_func_779();
    group_stage_selection_1_end: ;
    if (!group_confirm_selection_1) goto group_confirm_selection_1_end;
    event_func_780();
    event_func_781();
    event_func_782();
    event_func_783();
    event_func_784();
    event_func_785();
    event_func_786();
    group_confirm_selection_1_end: ;
    if (!group_start_1) goto group_start_1_end;
    event_func_787();
    event_func_788();
    event_func_789();
    event_func_790();
    event_func_791();
    event_func_792();
    event_func_793();
    event_func_794();
    event_func_795();
    group_start_1_end: ;
    if (!group_return_to_stage_selection_1) goto group_return_to_stage_selection_1_end;
    event_func_796();
    event_func_797();
    event_func_798();
    event_func_799();
    event_func_800();
    group_return_to_stage_selection_1_end: ;
    if (!group_update_records_1) goto group_update_records_1_end;
    event_func_801();
    event_func_802();
    group_update_records_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_803();
    event_func_804();
    event_func_805();
    event_func_806();
    event_func_807();
    event_func_808();
    event_func_809();
    event_func_810();
    event_func_811();
    event_func_812();
    event_func_813();
    event_func_814();
    event_func_815();
    event_func_816();
    event_func_817();
    event_func_818();
    event_func_819();
    group_transition_1_end: ;
    event_func_820();
    event_func_821();
    event_func_822();
    event_func_404();
    event_func_405();
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
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_652();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_6_pre_events()
{
}
void Frames::event_func_823()
{
    // event 1_5
    {
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./records.dat");
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_1_5_end: ;
}
void Frames::event_func_824()
{
    // event 2_5
    {
        set_display_center(320+(106-global_values->get(19)*53), -1);
        ((TextBlitter*)get_instance(helpmessage_148_instances))->load(str_data_font_bmp_7);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(0, ((Active*)get_instance(return_111_instances))->get_x());
    }
    event_2_5_end: ;
}
void Frames::event_func_825()
{
    // event 3_5
    {
        {
            loop_game_reset_running = true;
            int times = int(1);
            loop_game_reset_index = 0;
            while (loop_game_reset_index < times) {
                loop_game_reset_5();
                if (!loop_game_reset_running) break;
                loop_game_reset_index++;
            }
        }
    }
    event_3_5_end: ;
}
void Frames::event_func_826()
{
    // event 5_5
    {
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, ((SystemBox*)*it)->width);
            ((SystemBox*)*it)->set_size(((SystemBox*)*it)->alterables->values.get(0)*4, ((SystemBox*)*it)->height);
            ((SystemBox*)*it)->alterables->values.set(1, ((SystemBox*)*it)->get_x());
        }
        ((SystemBox*)get_instance(bg1layer1_151_instances))->alterables->values.set(3, 0.8);
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(2, ((SystemBox*)*it)->get_x());
        }
        ((SystemBox*)get_instance(bg1layer2_152_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg1layer3_153_instances))->alterables->values.set(3, 0);
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(4, ((SystemBox*)*it)->get_y());
        }
        ((SystemBox*)get_instance(bg2layer3_157_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg2layer2_156_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg2layer1_155_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(bg2layer4_158_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg1layer4_154_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg3layer1_159_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(bg3layer2_160_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg3layer3_161_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg3layer4_162_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg4layer4_166_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg4layer3_165_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg4layer2_164_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg4layer1_163_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(bg5layer4_170_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg5layer3_169_instances))->alterables->values.set(3, -5);
        ((SystemBox*)get_instance(bg5layer2_168_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg5layer1_167_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(bg6layer4_174_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg6layer3_173_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg6layer2_172_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg6layer1_171_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(bgalayer1_178_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bgalayer2_179_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bgalayer3_180_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg7layer3_177_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg7layer2_176_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg7layer1_175_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg8layer1_181_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg8layer2_182_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg8layer3_183_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg9layer1_184_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg9layer2_185_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg9layer3_186_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg10layer1_187_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(bg10layer2_188_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg10layer3_189_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg10layer4_190_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg11layer1_191_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(bg11layer2_192_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg12layer2_197_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(bg11layer3_193_instances))->alterables->values.set(3, 0);
        ((SystemBox*)get_instance(bg11layer4_194_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg12layer4_201_instances))->alterables->values.set(3, -0.5);
        ((SystemBox*)get_instance(bg14layer1_195_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(bg13layer1_199_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(bg12layer1_196_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(bg12layer3_198_instances))->alterables->values.set(3, 0.3);
    }
    event_5_5_end: ;
}
void Frames::event_func_827()
{
    // event 11_5
    {
        // group: Unlockables
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(8, 1)) >= (18))) goto event_11_5_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 1, 24);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
        ((Active*)get_instance(mahjong_207_instances))->alterables->flags.enable(3);
    }
    event_11_5_end: ;
}
void Frames::event_func_828()
{
    // event 12_5
    {
        // group: Unlockables
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(9, 1)) >= (18))) goto event_12_5_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 1, 24);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
        ((Active*)get_instance(mahjong_207_instances))->alterables->flags.enable(3);
    }
    event_12_5_end: ;
}
void Frames::event_func_829()
{
    // event 13_5
    {
        // group: Unlockables
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(10, 1)) >= (18))) goto event_13_5_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 1, 24);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
        ((Active*)get_instance(mahjong_207_instances))->alterables->flags.enable(3);
    }
    event_13_5_end: ;
}
void Frames::event_func_830()
{
    // event 14_5
    {
        // group: Unlockables
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(11, 1)) >= (18))) goto event_14_5_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 1, 24);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
        ((Active*)get_instance(mahjong_207_instances))->alterables->flags.enable(3);
    }
    event_14_5_end: ;
}
void Frames::event_func_831()
{
    // event 15_5
    {
        // group: Unlockables
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(12, 1)) >= (18))) goto event_15_5_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 1, 24);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
        ((Active*)get_instance(mahjong_207_instances))->alterables->flags.enable(3);
    }
    event_15_5_end: ;
}
void Frames::event_func_832()
{
    // event 26_5
    {
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(21, ((Active*)get_instance(stagename_213_instances))->get_x());
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(22, ((Active*)get_instance(stagename_213_instances))->get_y());
        ((Active*)get_instance(start_208_instances))->set_x(frame_right()+80);
        ((Active*)get_instance(yes_115_instances))->set_x(frame_right()+80);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(21, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_y());
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(23, ((Active*)get_instance(stagename_213_instances))->get_x());
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(24, ((Active*)get_instance(stagename_213_instances))->get_y());
    }
    event_26_5_end: ;
}
void Frames::event_func_833()
{
    // event 28_5
    {
        stageicon1_212_instances.clear_selection();
        spread_value(stageicon1_212_instances, 0, 0);
        spread_value(stageicon1_212_instances, 4, 0);
    }
    event_28_5_end: ;
}
void Frames::on_frame_6_start_events()
{
    event_func_823();
    event_func_824();
    event_func_825();
    event_func_707();
    event_func_826();
    event_func_827();
    event_func_828();
    event_func_829();
    event_func_830();
    event_func_831();
    event_func_832();
    event_func_833();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_6_init()
{
    index = 5;
    width = 644;
    height = 800;
    virtual_width = 644;
    virtual_height = 800;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(3);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_3_instances[] = {&stageicon1_212_instances, NULL};
    qualifier_3.set(1, &qualifier_3_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&bg1layer1_151_instances, &bg1layer2_152_instances, &bg1layer3_153_instances, &bg1layer4_154_instances, &bg2layer1_155_instances, &bg2layer2_156_instances, &bg2layer3_157_instances, &bg2layer4_158_instances, &bg3layer1_159_instances, &bg3layer2_160_instances, &bg3layer3_161_instances, &bg3layer4_162_instances, &bg4layer1_163_instances, &bg4layer2_164_instances, &bg4layer3_165_instances, &bg4layer4_166_instances, &bg5layer1_167_instances, &bg5layer2_168_instances, &bg5layer3_169_instances, &bg5layer4_170_instances, &bg6layer1_171_instances, &bg6layer2_172_instances, &bg6layer3_173_instances, &bg6layer4_174_instances, &bg7layer1_175_instances, &bg7layer2_176_instances, &bg7layer3_177_instances, &bgalayer1_178_instances, &bgalayer2_179_instances, &bgalayer3_180_instances, &bg8layer1_181_instances, &bg8layer2_182_instances, &bg8layer3_183_instances, &bg9layer1_184_instances, &bg9layer2_185_instances, &bg9layer3_186_instances, &bg10layer1_187_instances, &bg10layer2_188_instances, &bg10layer3_189_instances, &bg10layer4_190_instances, &bg11layer1_191_instances, &bg11layer2_192_instances, &bg11layer3_193_instances, &bg11layer4_194_instances, &bg14layer1_195_instances, &bg12layer1_196_instances, &bg12layer2_197_instances, &bg12layer3_198_instances, &bg13layer1_199_instances, &bg13layer2_200_instances, &bg12layer4_201_instances, NULL};
    qualifier_0.set(51, &qualifier_0_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&yes_115_instances, &return_111_instances, &mahjong_207_instances, &stagename_213_instances, NULL};
    qualifier_1.set(4, &qualifier_1_instances[0]);
    add_background_object(create_lockedback_150(208, 56), 0);
    add_background_object(create_bg1layer1_151(208, 56), 0);
    add_background_object(create_bg1layer2_152(208, 56), 0);
    add_background_object(create_bg1layer3_153(208, 56), 0);
    add_background_object(create_bg1layer4_154(208, 56), 0);
    add_background_object(create_bg2layer1_155(208, 104), 0);
    add_background_object(create_bg2layer2_156(208, 104), 0);
    add_background_object(create_bg2layer3_157(208, 104), 0);
    add_background_object(create_bg2layer4_158(208, 104), 0);
    add_background_object(create_bg3layer1_159(208, 152), 0);
    add_background_object(create_bg3layer2_160(208, 152), 0);
    add_background_object(create_bg3layer3_161(208, 152), 0);
    add_background_object(create_bg3layer4_162(208, 152), 0);
    add_background_object(create_bg4layer1_163(208, 200), 0);
    add_background_object(create_bg4layer2_164(208, 200), 0);
    add_background_object(create_bg4layer3_165(208, 200), 0);
    add_background_object(create_bg4layer4_166(208, 200), 0);
    add_background_object(create_bg5layer1_167(208, 248), 0);
    add_background_object(create_bg5layer2_168(208, 248), 0);
    add_background_object(create_bg5layer3_169(208, 248), 0);
    add_background_object(create_bg5layer4_170(208, 248), 0);
    add_background_object(create_bg6layer1_171(208, 296), 0);
    add_background_object(create_bg6layer2_172(208, 296), 0);
    add_background_object(create_bg6layer3_173(208, 296), 0);
    add_background_object(create_bg6layer4_174(208, 296), 0);
    add_background_object(create_bg7layer1_175(208, 344), 0);
    add_background_object(create_bg7layer2_176(208, 344), 0);
    add_background_object(create_bg7layer3_177(208, 344), 0);
    add_background_object(create_bgalayer1_178(208, 728), 0);
    add_background_object(create_bgalayer2_179(208, 728), 0);
    add_background_object(create_bgalayer3_180(208, 728), 0);
    add_background_object(create_bg8layer1_181(208, 392), 0);
    add_background_object(create_bg8layer2_182(208, 392), 0);
    add_background_object(create_bg8layer3_183(208, 392), 0);
    add_background_object(create_bg9layer1_184(208, 440), 0);
    add_background_object(create_bg9layer2_185(208, 440), 0);
    add_background_object(create_bg9layer3_186(208, 440), 0);
    add_background_object(create_bg10layer1_187(208, 488), 0);
    add_background_object(create_bg10layer2_188(208, 488), 0);
    add_background_object(create_bg10layer3_189(208, 488), 0);
    add_background_object(create_bg10layer4_190(208, 488), 0);
    add_background_object(create_bg11layer1_191(208, 536), 0);
    add_background_object(create_bg11layer2_192(208, 536), 0);
    add_background_object(create_bg11layer3_193(208, 536), 0);
    add_background_object(create_bg11layer4_194(208, 536), 0);
    add_background_object(create_bg14layer1_195(208, 680), 0);
    add_background_object(create_bg12layer1_196(208, 584), 0);
    add_background_object(create_bg12layer2_197(208, 584), 0);
    add_background_object(create_bg12layer3_198(208, 584), 0);
    add_background_object(create_bg13layer1_199(208, 632), 0);
    add_background_object(create_bg13layer2_200(208, 632), 0);
    add_background_object(create_bg12layer4_201(208, 584), 0);
    add_background_object(create_quickbackdrop_202(208, 104), 1);
    add_background_object(create_quickbackdrop_202(416, 104), 1);
    add_background_object(create_quickbackdrop_202(0, 120), 1);
    add_background_object(create_quickbackdrop_202(0, 0), 1);
    add_background_object(create_quickbackdrop_202(208, 120), 1);
    add_background_object(create_quickbackdrop_202(416, 120), 1);
    add_background_object(create_quickbackdrop_202(440, 120), 1);
    add_background_object(create_quickbackdrop_202(480, 0), 1);
    add_background_object(create_quickbackdrop_202(416, -72), 1);
    add_background_object(create_quickbackdrop_202(208, -72), 1);
    add_background_object(create_separatormasterobjects2_12(-192, -24), 1);
    add_background_object(create_checkerpattern_203(48, 0), 1);
    add_object(create_recordback_204(248, 152), 1);
    add_object(create_masterlevel_37(-24, 56), 1);
    add_object(create_playerinput_19(-176, 0), 1);
    add_object(create_masterinput_20(-152, 0), 1);
    add_object(create_inputsp1_21(-128, 0), 1);
    add_object(create_globalinputdata_22(-104, 0), 1);
    add_object(create_ringsparkle_139(-73, 167), 1);
    add_object(create_return_111(479, 183), 1);
    add_object(create_mahjong_207(455, 159), 1);
    add_object(create_yes_115(525, 160), 1);
    add_object(create_start_208(524, 135), 1);
    add_object(create_recordcolon2_209(328, 158), 1);
    add_object(create_recordcolon2_209(352, 158), 1);
    add_object(create_recordlabel_210(256, 158), 1);
    add_object(create_active11_211(280, 170), 1);
    add_object(create_guirings_122(-32, -80), 1);
    add_object(create_controllermusic_128(-32, -32), 1);
    add_object(create_playerothers_123(-24, 32), 1);
    add_object(create_guienergy_124(8, -56), 1);
    add_object(create_guilifebasemeter_125(72, -16), 1);
    add_object(create_stageicon1_212(128, 528), 1);
    add_object(create_stageicon1_212(128, 488), 1);
    add_object(create_stageicon1_212(128, 448), 1);
    add_object(create_stageicon1_212(128, 408), 1);
    add_object(create_stageicon1_212(128, 368), 1);
    add_object(create_stageicon1_212(128, 328), 1);
    add_object(create_stageicon1_212(128, 288), 1);
    add_object(create_stageicon1_212(128, 248), 1);
    add_object(create_stageicon1_212(128, 208), 1);
    add_object(create_stageicon1_212(128, 168), 1);
    add_object(create_stageicon1_212(128, 128), 1);
    add_object(create_stageicon1_212(128, 88), 1);
    add_object(create_stageicon1_212(128, 48), 1);
    add_object(create_stagename_213(344, 120), 1);
    add_object(create_guicrystal_121(38, -69), 1);
    add_object(create_crystalcursor_214(211, 269), 1);
    add_object(create_stageselect_215(324, 27), 1);
    add_object(create_timerecordmil_216(380, 169), 1);
    add_object(create_crystalrecord_217(352, 186), 1);
    add_object(create_timerecordsec_218(356, 169), 1);
    add_object(create_timerecordmin_219(332, 169), 1);
    add_object(create_sarassteampluginfreedomplanet_26(-64, -32), 1);
    add_object(create_mapdata_30(-144, 56), 1);
    add_object(create_savedata_28(-32, 0), 1);
    add_object(create_recorddata_34(-64, 0), 1);
    add_object(create_windowcontrol_27(-144, 24), 1);
    add_object(create_mapdata2_32(-144, 64), 1);
    add_background_object(create_quickbackdrop_202(624, 128), 2);
    add_background_object(create_backgroundsystembox2_220(0, 0), 2);
    add_background_object(create_backdrop_147(0, 200), 2);
    add_background_object(create_backdrop_147(176, 200), 2);
    add_background_object(create_backdrop_147(352, 200), 2);
    add_background_object(create_backdrop_147(528, 200), 2);
    add_object(create_fade_54(48, -376), 2);
    add_object(create_fadein_149(176, 0), 2);
    add_object(create_fadein_149(208, 0), 2);
    add_object(create_fadein_149(240, 0), 2);
    add_object(create_fadein_149(272, 0), 2);
    add_object(create_fadein_149(304, 0), 2);
    add_object(create_fadein_149(336, 0), 2);
    add_object(create_fadein_149(368, 0), 2);
    add_object(create_fadein_149(400, 0), 2);
    add_object(create_fadein_149(432, 0), 2);
    add_object(create_fadein_149(464, 0), 2);
    add_object(create_fadein_149(176, 32), 2);
    add_object(create_fadein_149(208, 32), 2);
    add_object(create_fadein_149(240, 32), 2);
    add_object(create_fadein_149(272, 32), 2);
    add_object(create_fadein_149(304, 32), 2);
    add_object(create_fadein_149(336, 32), 2);
    add_object(create_fadein_149(368, 32), 2);
    add_object(create_fadein_149(400, 32), 2);
    add_object(create_fadein_149(432, 32), 2);
    add_object(create_fadein_149(464, 32), 2);
    add_object(create_fadein_149(176, 64), 2);
    add_object(create_fadein_149(208, 64), 2);
    add_object(create_fadein_149(240, 64), 2);
    add_object(create_fadein_149(272, 64), 2);
    add_object(create_fadein_149(304, 64), 2);
    add_object(create_fadein_149(336, 64), 2);
    add_object(create_fadein_149(368, 64), 2);
    add_object(create_fadein_149(400, 64), 2);
    add_object(create_fadein_149(432, 64), 2);
    add_object(create_fadein_149(464, 64), 2);
    add_object(create_fadein_149(176, 96), 2);
    add_object(create_fadein_149(208, 96), 2);
    add_object(create_fadein_149(240, 96), 2);
    add_object(create_fadein_149(272, 96), 2);
    add_object(create_fadein_149(304, 96), 2);
    add_object(create_fadein_149(336, 96), 2);
    add_object(create_fadein_149(368, 96), 2);
    add_object(create_fadein_149(400, 96), 2);
    add_object(create_fadein_149(432, 96), 2);
    add_object(create_fadein_149(464, 96), 2);
    add_object(create_fadein_149(176, 128), 2);
    add_object(create_fadein_149(208, 128), 2);
    add_object(create_fadein_149(240, 128), 2);
    add_object(create_fadein_149(272, 128), 2);
    add_object(create_fadein_149(304, 128), 2);
    add_object(create_fadein_149(336, 128), 2);
    add_object(create_fadein_149(368, 128), 2);
    add_object(create_fadein_149(400, 128), 2);
    add_object(create_fadein_149(432, 128), 2);
    add_object(create_fadein_149(464, 128), 2);
    add_object(create_fadein_149(176, 160), 2);
    add_object(create_fadein_149(208, 160), 2);
    add_object(create_fadein_149(240, 160), 2);
    add_object(create_fadein_149(272, 160), 2);
    add_object(create_fadein_149(304, 160), 2);
    add_object(create_fadein_149(336, 160), 2);
    add_object(create_fadein_149(368, 160), 2);
    add_object(create_fadein_149(400, 160), 2);
    add_object(create_fadein_149(432, 160), 2);
    add_object(create_fadein_149(464, 160), 2);
    add_object(create_fadein_149(176, 192), 2);
    add_object(create_fadein_149(208, 192), 2);
    add_object(create_fadein_149(240, 192), 2);
    add_object(create_fadein_149(272, 192), 2);
    add_object(create_fadein_149(304, 192), 2);
    add_object(create_fadein_149(336, 192), 2);
    add_object(create_fadein_149(368, 192), 2);
    add_object(create_fadein_149(400, 192), 2);
    add_object(create_fadein_149(432, 192), 2);
    add_object(create_fadein_149(464, 192), 2);
    add_object(create_fadein_149(176, 224), 2);
    add_object(create_fadein_149(208, 224), 2);
    add_object(create_fadein_149(240, 224), 2);
    add_object(create_fadein_149(272, 224), 2);
    add_object(create_fadein_149(304, 224), 2);
    add_object(create_fadein_149(336, 224), 2);
    add_object(create_fadein_149(368, 224), 2);
    add_object(create_fadein_149(400, 224), 2);
    add_object(create_fadein_149(432, 224), 2);
    add_object(create_fadein_149(464, 224), 2);
    add_object(create_fadein_149(144, 0), 2);
    add_object(create_fadein_149(144, 32), 2);
    add_object(create_fadein_149(144, 64), 2);
    add_object(create_fadein_149(144, 96), 2);
    add_object(create_fadein_149(144, 128), 2);
    add_object(create_fadein_149(144, 160), 2);
    add_object(create_fadein_149(144, 192), 2);
    add_object(create_fadein_149(144, 224), 2);
    add_object(create_fadein_149(496, 0), 2);
    add_object(create_fadein_149(496, 32), 2);
    add_object(create_fadein_149(496, 64), 2);
    add_object(create_fadein_149(496, 96), 2);
    add_object(create_fadein_149(496, 128), 2);
    add_object(create_fadein_149(496, 160), 2);
    add_object(create_fadein_149(496, 192), 2);
    add_object(create_fadein_149(496, 224), 2);
    add_object(create_fadein_149(112, 0), 2);
    add_object(create_fadein_149(112, 32), 2);
    add_object(create_fadein_149(112, 64), 2);
    add_object(create_fadein_149(112, 96), 2);
    add_object(create_fadein_149(112, 128), 2);
    add_object(create_fadein_149(112, 160), 2);
    add_object(create_fadein_149(112, 192), 2);
    add_object(create_fadein_149(112, 224), 2);
    add_object(create_helpmessage_221(112, 216), 2);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
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
    loop_game_reset_running = false;
    loop_game_reset_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    group_transition_1 = false;
    not_always_102_0 = loop_count;
    group_return_to_stage_selection_1 = false;
    not_always_121_0 = loop_count;
    group_confirm_selection_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_66_0 = loop_count;
    not_always_22_5 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_fade_in_1 = true;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_demo_mode_1 = false;
    not_always_96_0 = loop_count;
    not_always_53_5 = loop_count;
    not_always_97_0 = loop_count;
    group_sound_events_torque_1 = false;
    group_update_records_1 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    group_start_1 = false;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_168_0 = loop_count;
    not_always_105_5 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_66_5 = loop_count;
    not_always_64_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_101_0 = loop_count;
    not_always_84_5 = loop_count;
    not_always_130_0 = loop_count;
    not_always_65_5 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_100_5 = loop_count;
    group_sound_events_lilac_1 = false;
    group_stage_selection_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_140_0 = loop_count;
}
void Frames::test_collisions_6()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_834()
{
    // event 4_6
    {
        ((SystemBox*)get_instance(checkerpattern_132_instances))->set_global_position(((SystemBox*)get_instance(checkerpattern_132_instances))->get_x(), 0-((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0));
        ((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.set(0, (((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0)+0.5)%math_helper%64);
    }
    event_4_6_end: ;
}
void Frames::event_func_835()
{
    // event 15_6
    {
        if (!(group_select_1)) goto event_15_6_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_15_6_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_15_6_end: ;
}
void Frames::event_func_836()
{
    // event 16_6
    {
        if (!(group_select_1)) goto event_16_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_16_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
    }
    event_16_6_end: ;
}
void Frames::event_func_837()
{
    // event 17_6
    {
        if (!(group_select_1)) goto event_17_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_17_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_17_6_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_17_6_end: ;
}
void Frames::event_func_838()
{
    // event 18_6
    {
        if (!(group_select_1)) goto event_18_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_18_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_18_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
    }
    event_18_6_end: ;
}
void Frames::event_func_839()
{
    // event 19_6
    {
        if (!(group_select_1)) goto event_19_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_19_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_19_6_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_19_6_end: ;
}
void Frames::event_func_840()
{
    // event 20_6
    {
        if (!(group_select_1)) goto event_20_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_20_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_20_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
    }
    event_20_6_end: ;
}
void Frames::event_func_841()
{
    // event 22_6
    {
        if (!(group_select_1)) goto event_22_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_22_6_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 42)) < (2))) goto event_22_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_22_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_22_6_end: ;
}
void Frames::event_func_842()
{
    // event 23_6
    {
        if (!(group_select_1)) goto event_23_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_23_6_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 42)) < (2))) goto event_23_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_23_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_23_6_end: ;
}
void Frames::event_func_843()
{
    // event 25_6
    {
        if (!(group_select_1)) goto event_25_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (30))) goto event_25_6_end;
        ((Active*)get_instance(character2_224_instances))->set_direction(8);
        ((Active*)get_instance(character1_223_instances))->set_direction(8);
        ((Active*)get_instance(character3_225_instances))->set_direction(8);
    }
    event_25_6_end: ;
}
void Frames::event_func_844()
{
    // event 26_6
    {
        if (!(group_select_1)) goto event_26_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) < (10))) goto event_26_6_end;
        ((Active*)get_instance(character1_223_instances))->set_direction(0);
        ((Active*)get_instance(character2_224_instances))->set_direction(0);
        ((Active*)get_instance(character3_225_instances))->set_direction(0);
    }
    event_26_6_end: ;
}
void Frames::event_func_845()
{
    // event 27_6
    {
        if (!(group_select_1)) goto event_27_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_27_6_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_27_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(charname1_142_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_27_6_end: ;
}
void Frames::event_func_846()
{
    // event 28_6
    {
        if (!(group_select_1)) goto event_28_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_28_6_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_28_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(charname2_227_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_28_6_end: ;
}
void Frames::event_func_847()
{
    // event 29_6
    {
        if (!(group_select_1)) goto event_29_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_29_6_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_29_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        ((Active*)get_instance(charname3_228_instances))->alterables->values.set(25, 4);
    }
    event_29_6_end: ;
}
void Frames::event_func_848()
{
    // event 30_6
    {
        if (!(group_select_1)) goto event_30_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_30_6_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_30_6_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_30_6_end: ;
}
void Frames::event_func_849()
{
    // event 32_6
    {
        if (!(group_select_1)) goto event_32_6_end;
        if (!(((Active*)get_instance(charname1_142_instances))->alterables->flags.is_on(0))) goto event_32_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_32_6_end;
        if (((Active*)get_instance(character2_224_instances))->flags & VISIBLE) goto event_32_6_end;
        ((Active*)get_instance(charname1_142_instances))->alterables->flags.disable(0);
    }
    event_32_6_end: ;
}
void Frames::event_func_850()
{
    // event 33_6
    {
        if (!(group_select_1)) goto event_33_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_33_6_end;
        global_values->set(1, 0);
    }
    event_33_6_end: ;
}
void Frames::event_func_851()
{
    // event 34_6
    {
        if (!(group_select_1)) goto event_34_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_34_6_end;
        global_values->set(1, 1);
    }
    event_34_6_end: ;
}
void Frames::event_func_852()
{
    // event 35_6
    {
        if (!(group_select_1)) goto event_35_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_35_6_end;
        global_values->set(1, 2);
    }
    event_35_6_end: ;
}
void Frames::event_func_853()
{
    // event 36_6
    {
        if (!(group_select_1)) goto event_36_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_36_6_end;
        global_values->set(1, 4);
    }
    event_36_6_end: ;
}
void Frames::event_func_854()
{
    // event 37_6
    {
        if (!(group_select_1)) goto event_37_6_end;
        if (!(((Active*)get_instance(charname1_142_instances))->alterables->flags.is_on(0))) goto event_37_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_37_6_end;
            group_select_1 = false;
    
        if (!group_character_selected_1) {
            group_character_selected_1 = true;
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
    }
    event_37_6_end: ;
}
void Frames::event_func_855()
{
    // event 38_6
    bool or_result_38_6 = false;
    bool or_temp_result_38_6_0 = false;
    {
        if (!(group_select_1)) goto or_event_38_6_0_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto or_event_38_6_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_38_6_0_end;
        or_result_38_6 = true;
        or_temp_result_38_6_0 = true;
    }
    or_event_38_6_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    charname1_142_instances.clear_saved_selection();
    if (or_temp_result_38_6_0) {
        crystalcursor_75_instances.save_selection();
        charname1_142_instances.save_selection();
    }
    // event 38_6
    bool or_temp_result_38_6_1 = false;
    {
        if (!(group_select_1)) goto or_event_38_6_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_38_6_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_38_6_1_end;
        or_result_38_6 = true;
        or_temp_result_38_6_1 = true;
        or_event_38_6_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_38_6_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_38_6) goto or_final_or_event_38_6_1_end;
        crystalcursor_75_instances.empty_selection();
        charname1_142_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_38_6_0 || or_temp_result_38_6_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_38_6_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_38_6_0) {
            charname1_142_instances.restore_selection();
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
            group_select_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.stop_channel(32-1);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 3);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 3);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
        }
    }
    or_final_or_event_38_6_1_end: ;
}
void Frames::event_func_856()
{
    // event 39_6
    {
        if (!(group_select_1)) goto event_39_6_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_39_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) != (4))) goto event_39_6_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_39_6_end: ;
}
void Frames::event_func_857()
{
    // event 40_6
    {
        if (!(group_character_selected_1)) goto event_40_6_end;
        if (!((global_values->get(1)) == (0))) goto event_40_6_end;
        if (not_always_40_6 > loop_count) {
            not_always_40_6 = loop_count + 2;
            goto event_40_6_end;
        }
        not_always_40_6 = loop_count + 2;
        media.play_id(SOUND_LILAC_YES_220, -1, 1);
    }
    event_40_6_end: ;
}
void Frames::event_func_858()
{
    // event 41_6
    {
        if (!(group_character_selected_1)) goto event_41_6_end;
        if (!((global_values->get(1)) == (2))) goto event_41_6_end;
        if (not_always_41_6 > loop_count) {
            not_always_41_6 = loop_count + 2;
            goto event_41_6_end;
        }
        not_always_41_6 = loop_count + 2;
        media.play_id(SOUND_CAROL_SWEET_2_221, -1, 1);
    }
    event_41_6_end: ;
}
void Frames::event_func_859()
{
    // event 42_6
    {
        if (!(group_character_selected_1)) goto event_42_6_end;
        if (!((global_values->get(1)) == (4))) goto event_42_6_end;
        if (not_always_42_6 > loop_count) {
            not_always_42_6 = loop_count + 2;
            goto event_42_6_end;
        }
        not_always_42_6 = loop_count + 2;
        media.play_id(SOUND_MILLA_YAY_186, -1, 1);
    }
    event_42_6_end: ;
}
void Frames::event_func_860()
{
    // event 43_6
    {
        if (!(group_character_selected_1)) goto event_43_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_43_6_end;
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_43_6_end: ;
}
void Frames::event_func_861()
{
    // event 46_6
    {
        if (!(group_character_selected_1)) goto event_46_6_end;
        if (!((((Active*)get_instance(charname1_142_instances))->alterables->values.get(0)) >= (20))) goto event_46_6_end;
        if (!((global_values->get(0)) > (0))) goto event_46_6_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
    }
    event_46_6_end: ;
}
void Frames::event_func_862()
{
    // event 49_6
    {
        if (!(group_transition_1)) goto event_49_6_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_49_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_49_6_end;
        next_frame = 3 + 0;    
    
    }
    event_49_6_end: ;
}
void Frames::event_func_863()
{
    // event 50_6
    {
        if (!(group_transition_1)) goto event_50_6_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_50_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_50_6_end;
        if (!((global_values->get(0)) <= (0))) goto event_50_6_end;
        next_frame = 5 + 0;    
    
    }
    event_50_6_end: ;
}
void Frames::event_func_864()
{
    // event 51_6
    {
        if (!(group_transition_1)) goto event_51_6_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_51_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_51_6_end;
        if (!((global_values->get(0)) == (1))) goto event_51_6_end;
        if (!((global_values->get(1)) != (4))) goto event_51_6_end;
        next_frame = 20 + 0;    
    
        global_values->set(4, 0);
    }
    event_51_6_end: ;
}
void Frames::event_func_865()
{
    // event 52_6
    {
        if (!(group_transition_1)) goto event_52_6_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_52_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_52_6_end;
        if (!((global_values->get(0)) > (0))) goto event_52_6_end;
        if (!((global_values->get(1)) == (4))) goto event_52_6_end;
        next_frame = 16 + 0;    
    
        global_values->set(4, 0);
    }
    event_52_6_end: ;
}
void Frames::event_func_866()
{
    // event 53_6
    {
        if (!(group_transition_1)) goto event_53_6_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_53_6_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_53_6_end;
        if (!((global_values->get(0)) > (1))) goto event_53_6_end;
        if (!((global_values->get(1)) != (4))) goto event_53_6_end;
        next_frame = 82 + 0;    
    
        global_values->set(4, 2);
    }
    event_53_6_end: ;
}
void Frames::handle_frame_7_events()
{
    test_collisions_6();
    event_func_834();
    if (!group_fade_in_1) goto group_fade_in_1_end;
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_664();
    event_func_665();
    group_fade_in_1_end: ;
    if (!group_select_1) goto group_select_1_end;
    event_func_666();
    event_func_835();
    event_func_836();
    event_func_837();
    event_func_838();
    event_func_839();
    event_func_840();
    event_func_673();
    event_func_841();
    event_func_842();
    event_func_677();
    event_func_843();
    event_func_844();
    event_func_845();
    event_func_846();
    event_func_847();
    event_func_848();
    event_func_682();
    event_func_849();
    event_func_850();
    event_func_851();
    event_func_852();
    event_func_853();
    event_func_854();
    event_func_855();
    event_func_856();
    group_select_1_end: ;
    if (!group_character_selected_1) goto group_character_selected_1_end;
    event_func_857();
    event_func_858();
    event_func_859();
    event_func_860();
    event_func_701();
    event_func_702();
    event_func_861();
    event_func_703();
    group_character_selected_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_862();
    event_func_863();
    event_func_864();
    event_func_865();
    event_func_866();
    group_transition_1_end: ;
    event_func_404();
    event_func_405();
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
void Frames::handle_frame_7_pre_events()
{
}
void Frames::event_func_867()
{
    // event 1_6
    {
        set_display_center(320, -1);
        ((ArrayObject*)get_instance(savedata_28_instances))->load(get_app_drive()+get_app_dir()+str_save_36+number_to_string(global_values->get(10))+str_dat_37);
        ((TextBlitter*)get_instance(helpmessage_148_instances))->load(str_data_font_bmp_7);
    }
    event_1_6_end: ;
}
void Frames::event_func_868()
{
    // event 2_6
    {
        if (!(!media.is_channel_playing(32-1))) goto event_2_6_end;
        if (!((global_values->get(0)) > (0))) goto event_2_6_end;
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_results_ogg_39, 32-1, 0);
    }
    event_2_6_end: ;
}
void Frames::event_func_869()
{
    // event 3_6
    {
        if (!(!media.is_channel_playing(32-1))) goto event_3_6_end;
        if (!((global_values->get(0)) <= (0))) goto event_3_6_end;
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_menu1_ogg_38, 32-1, 0);
    }
    event_3_6_end: ;
}
void Frames::event_func_870()
{
    // event 11_6
    {
        characterslot_133_instances.clear_selection();
        spread_value(characterslot_133_instances, 0, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, global_values->get(1));
    }
    event_11_6_end: ;
}
void Frames::event_func_871()
{
    // event 12_6
    {
        // group: Unlockable characters
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 42)) < (2))) goto event_12_6_end;
        ((Active*)get_instance(character3_225_instances))->set_visible(false);
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+20);
        }
        ((Active*)get_instance(character1_223_instances))->set_y(((Active*)get_instance(character1_223_instances))->get_y()+20);
        ((Active*)get_instance(character2_224_instances))->set_y(((Active*)get_instance(character2_224_instances))->get_y()+20);
        ((Active*)get_instance(charname1_142_instances))->set_y(((Active*)get_instance(charname1_142_instances))->get_y()+20);
        ((Active*)get_instance(charname2_227_instances))->set_y(((Active*)get_instance(charname2_227_instances))->get_y()+20);
        ((Active*)get_instance(charname3_228_instances))->set_visible(false);
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24);
        }
        ((Active*)get_instance(character1_223_instances))->set_x(((Active*)get_instance(character1_223_instances))->get_x()+24);
        ((Active*)get_instance(character2_224_instances))->set_x(((Active*)get_instance(character2_224_instances))->get_x()+24);
        ((Active*)get_instance(charname1_142_instances))->set_x(((Active*)get_instance(charname1_142_instances))->get_x()+24);
        ((Active*)get_instance(charname2_227_instances))->set_x(((Active*)get_instance(charname2_227_instances))->get_x()+24);
    }
    event_12_6_end: ;
}
void Frames::event_func_872()
{
    // event 13_6
    {
        // group: Unlockable characters
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 42)) < (2))) goto event_13_6_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_13_6_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_13_6_end: ;
}
void Frames::on_frame_7_start_events()
{
    event_func_867();
    event_func_868();
    event_func_869();
    event_func_870();
    event_func_871();
    event_func_872();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_7_init()
{
    index = 6;
    width = 644;
    height = 244;
    virtual_width = 644;
    virtual_height = 244;
    background_color = Color(8, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(3);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_1_instances[] = {&return_111_instances, &charname1_142_instances, &charname2_227_instances, &charname3_228_instances, NULL};
    qualifier_1.set(4, &qualifier_1_instances[0]);
    static ObjectList* qualifier_5_instances[] = {&character1_223_instances, &character2_224_instances, &character3_225_instances, NULL};
    qualifier_5.set(3, &qualifier_5_instances[0]);
    add_background_object(create_separatormasterobjects2_12(-192, -24), 1);
    add_background_object(create_checkerpattern_132(240, 0), 1);
    add_object(create_characterslot_222(319, 128), 1);
    add_object(create_characterslot_222(255, 84), 1);
    add_object(create_characterslot_222(95, -128), 1);
    add_object(create_characterslot_222(191, 40), 1);
    add_object(create_playerinput_19(-176, 0), 1);
    add_object(create_masterinput_20(-152, 0), 1);
    add_object(create_inputsp1_21(-128, 0), 1);
    add_object(create_globalinputdata_22(-104, 0), 1);
    add_object(create_ringsparkle_139(-73, 167), 1);
    add_object(create_crystalcursor_140(387, 189), 1);
    add_object(create_return_111(439, 191), 1);
    add_object(create_character1_223(199, 48), 1);
    add_object(create_character2_224(263, 92), 1);
    add_object(create_character3_225(327, 136), 1);
    add_object(create_charname1_226(216, 87), 1);
    add_object(create_charname2_227(281, 131), 1);
    add_object(create_charname3_228(345, 175), 1);
    add_object(create_mapdata_30(-144, 56), 1);
    add_object(create_savedata_28(-144, 152), 1);
    add_object(create_windowcontrol_27(-144, 24), 1);
    add_object(create_mapdata2_32(-144, 64), 1);
    add_object(create_recorddata_229(-144, 120), 1);
    add_background_object(create_backgroundsystembox_146(0, 0), 2);
    add_background_object(create_backdrop_147(0, 200), 2);
    add_background_object(create_backdrop_147(176, 200), 2);
    add_background_object(create_backdrop_147(352, 200), 2);
    add_background_object(create_backdrop_147(528, 200), 2);
    add_object(create_helpmessage_221(112, 216), 2);
    add_object(create_characterselect_230(308, 27), 2);
    add_object(create_fade_54(48, -376), 2);
    add_object(create_fadein_149(176, 0), 2);
    add_object(create_fadein_149(208, 0), 2);
    add_object(create_fadein_149(240, 0), 2);
    add_object(create_fadein_149(272, 0), 2);
    add_object(create_fadein_149(304, 0), 2);
    add_object(create_fadein_149(336, 0), 2);
    add_object(create_fadein_149(368, 0), 2);
    add_object(create_fadein_149(400, 0), 2);
    add_object(create_fadein_149(432, 0), 2);
    add_object(create_fadein_149(464, 0), 2);
    add_object(create_fadein_149(176, 32), 2);
    add_object(create_fadein_149(208, 32), 2);
    add_object(create_fadein_149(240, 32), 2);
    add_object(create_fadein_149(272, 32), 2);
    add_object(create_fadein_149(304, 32), 2);
    add_object(create_fadein_149(336, 32), 2);
    add_object(create_fadein_149(368, 32), 2);
    add_object(create_fadein_149(400, 32), 2);
    add_object(create_fadein_149(432, 32), 2);
    add_object(create_fadein_149(464, 32), 2);
    add_object(create_fadein_149(176, 64), 2);
    add_object(create_fadein_149(208, 64), 2);
    add_object(create_fadein_149(240, 64), 2);
    add_object(create_fadein_149(272, 64), 2);
    add_object(create_fadein_149(304, 64), 2);
    add_object(create_fadein_149(336, 64), 2);
    add_object(create_fadein_149(368, 64), 2);
    add_object(create_fadein_149(400, 64), 2);
    add_object(create_fadein_149(432, 64), 2);
    add_object(create_fadein_149(464, 64), 2);
    add_object(create_fadein_149(176, 96), 2);
    add_object(create_fadein_149(208, 96), 2);
    add_object(create_fadein_149(240, 96), 2);
    add_object(create_fadein_149(272, 96), 2);
    add_object(create_fadein_149(304, 96), 2);
    add_object(create_fadein_149(336, 96), 2);
    add_object(create_fadein_149(368, 96), 2);
    add_object(create_fadein_149(400, 96), 2);
    add_object(create_fadein_149(432, 96), 2);
    add_object(create_fadein_149(464, 96), 2);
    add_object(create_fadein_149(176, 128), 2);
    add_object(create_fadein_149(208, 128), 2);
    add_object(create_fadein_149(240, 128), 2);
    add_object(create_fadein_149(272, 128), 2);
    add_object(create_fadein_149(304, 128), 2);
    add_object(create_fadein_149(336, 128), 2);
    add_object(create_fadein_149(368, 128), 2);
    add_object(create_fadein_149(400, 128), 2);
    add_object(create_fadein_149(432, 128), 2);
    add_object(create_fadein_149(464, 128), 2);
    add_object(create_fadein_149(176, 160), 2);
    add_object(create_fadein_149(208, 160), 2);
    add_object(create_fadein_149(240, 160), 2);
    add_object(create_fadein_149(272, 160), 2);
    add_object(create_fadein_149(304, 160), 2);
    add_object(create_fadein_149(336, 160), 2);
    add_object(create_fadein_149(368, 160), 2);
    add_object(create_fadein_149(400, 160), 2);
    add_object(create_fadein_149(432, 160), 2);
    add_object(create_fadein_149(464, 160), 2);
    add_object(create_fadein_149(176, 192), 2);
    add_object(create_fadein_149(208, 192), 2);
    add_object(create_fadein_149(240, 192), 2);
    add_object(create_fadein_149(272, 192), 2);
    add_object(create_fadein_149(304, 192), 2);
    add_object(create_fadein_149(336, 192), 2);
    add_object(create_fadein_149(368, 192), 2);
    add_object(create_fadein_149(400, 192), 2);
    add_object(create_fadein_149(432, 192), 2);
    add_object(create_fadein_149(464, 192), 2);
    add_object(create_fadein_149(176, 224), 2);
    add_object(create_fadein_149(208, 224), 2);
    add_object(create_fadein_149(240, 224), 2);
    add_object(create_fadein_149(272, 224), 2);
    add_object(create_fadein_149(304, 224), 2);
    add_object(create_fadein_149(336, 224), 2);
    add_object(create_fadein_149(368, 224), 2);
    add_object(create_fadein_149(400, 224), 2);
    add_object(create_fadein_149(432, 224), 2);
    add_object(create_fadein_149(464, 224), 2);
    add_object(create_fadein_149(144, 0), 2);
    add_object(create_fadein_149(144, 32), 2);
    add_object(create_fadein_149(144, 64), 2);
    add_object(create_fadein_149(144, 96), 2);
    add_object(create_fadein_149(144, 128), 2);
    add_object(create_fadein_149(144, 160), 2);
    add_object(create_fadein_149(144, 192), 2);
    add_object(create_fadein_149(144, 224), 2);
    add_object(create_fadein_149(496, 0), 2);
    add_object(create_fadein_149(496, 32), 2);
    add_object(create_fadein_149(496, 64), 2);
    add_object(create_fadein_149(496, 96), 2);
    add_object(create_fadein_149(496, 128), 2);
    add_object(create_fadein_149(496, 160), 2);
    add_object(create_fadein_149(496, 192), 2);
    add_object(create_fadein_149(496, 224), 2);
    add_object(create_fadein_149(112, 0), 2);
    add_object(create_fadein_149(112, 32), 2);
    add_object(create_fadein_149(112, 64), 2);
    add_object(create_fadein_149(112, 96), 2);
    add_object(create_fadein_149(112, 128), 2);
    add_object(create_fadein_149(112, 160), 2);
    add_object(create_fadein_149(112, 192), 2);
    add_object(create_fadein_149(112, 224), 2);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
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
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    group_character_selected_1 = false;
    not_always_100_0 = loop_count;
    group_transition_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_fade_in_1 = true;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_53_4 = loop_count;
    group_sound_events_lilac_1 = false;
    not_always_41_6 = loop_count;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    once_condition_138_0 = false;
    not_always_66_0 = loop_count;
    not_always_40_6 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_101_0 = loop_count;
    not_always_42_6 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    group_select_1 = false;
    not_always_65_0 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_9_4 = loop_count;
    not_always_140_0 = loop_count;
}
void Frames::event_func_873()
{
    // event 2_7
    {
        // group: Check for achievements
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_check_index)) == (1))) goto event_2_7_end;
        global_values->set(0, -4);
        next_frame = 9 + 0;    
    
    }
    event_2_7_end: ;
}
void Frames::loop_check_7()
{
    event_func_873();
}
void Frames::event_func_874()
{
    // event 189_7
    {
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(7, 3);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(4, 0);
        media.resume_samples();
        media.stop_samples();
        set_lives(get_max(global_values->get(28)-1, 1));
    }
    event_189_7_end: ;
}
void Frames::loop_restart_7()
{
    event_func_86();
    event_func_874();
}
void Frames::test_collisions_7()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_875()
{
    // event 4_7
    {
        if (!(frame_time >= 0.1)) goto event_4_7_end;
        if (!((global_values->get(0)) <= (0))) goto event_4_7_end;
        if (not_always_4_7 > loop_count) {
            not_always_4_7 = loop_count + 2;
            goto event_4_7_end;
        }
        not_always_4_7 = loop_count + 2;
        next_frame = 5 + 0;    
    
        media.stop_channel(32-1);
    }
    event_4_7_end: ;
}
void Frames::event_func_876()
{
    // event 5_7
    {
        if (!(frame_time >= 0.1)) goto event_5_7_end;
        if (!((global_values->get(0)) > (0))) goto event_5_7_end;
        if (not_always_5_7 > loop_count) {
            not_always_5_7 = loop_count + 2;
            goto event_5_7_end;
        }
        not_always_5_7 = loop_count + 2;
        next_frame = 3 + 0;    
    
        media.stop_channel(32-1);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(10, 0);
        ((ArrayObject*)get_instance(functionmusic_231_instances))->clear();
        ((ArrayObject*)get_instance(queuemusic_232_instances))->clear();
    }
    event_5_7_end: ;
}
void Frames::event_func_877()
{
    // event 191_7
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F5))) goto event_191_7_end;
        manager.set_window_scale(1.0);
        manager.set_window(false);
        global_values->set(24, 1);
    }
    event_191_7_end: ;
}
void Frames::event_func_878()
{
    // event 192_7
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F6))) goto event_192_7_end;
        manager.set_window_scale(2.0);
        manager.set_window(false);
        global_values->set(24, 2);
    }
    event_192_7_end: ;
}
void Frames::event_func_879()
{
    // event 193_7
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F7))) goto event_193_7_end;
        manager.set_window_scale(3.0);
        manager.set_window(false);
        global_values->set(24, 3);
    }
    event_193_7_end: ;
}
void Frames::handle_frame_8_events()
{
    test_collisions_7();
    event_func_875();
    event_func_876();
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
    event_func_877();
    event_func_878();
    event_func_879();
    event_func_229();
}
void Frames::handle_frame_8_pre_events()
{
}
void Frames::event_func_880()
{
    // event 1_7
    {
        {
            loop_check_running = true;
            int times = int(99);
            loop_check_index = 0;
            while (loop_check_index < times) {
                loop_check_7();
                if (!loop_check_running) break;
                loop_check_index++;
            }
        }
    }
    event_1_7_end: ;
}
void Frames::event_func_881()
{
    // event 3_7
    {
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_3_7_end: ;
}
void Frames::on_frame_8_start_events()
{
    event_func_880();
    event_func_881();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_8_init()
{
    index = 7;
    width = 426;
    height = 240;
    virtual_width = 426;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(1);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    add_background_object(create_separatormasterobjects2_12(-208, 0), 0);
    add_object(create_playerinput_19(-192, 24), 0);
    add_object(create_masterinput_20(-168, 24), 0);
    add_object(create_inputsp1_21(-144, 24), 0);
    add_object(create_globalinputdata_22(-120, 24), 0);
    add_object(create_sarassteampluginfreedomplanet_26(-192, 144), 0);
    add_object(create_controllermusic_128(-208, -40), 0);
    add_object(create_mapdata_30(-160, 80), 0);
    add_object(create_mapdata2_32(-160, 88), 0);
    add_object(create_recorddata_34(-160, 144), 0);
    add_object(create_functionmusic_231(-168, -40), 0);
    add_object(create_queuemusic_232(-128, -40), 0);
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
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    group_sound_events_spade_1 = false;
    not_always_4_7 = loop_count;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_5_7 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_66_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_101_0 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
}
void Frames::event_func_882()
{
    // event 199_8
    {
        if (!(group_sound_events_spade_1)) goto event_199_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_199_8_end;
        media.play_id(SOUND_SPADE_HURT1_104, -1, 1);
    }
    event_199_8_end: ;
}
void Frames::loop_sound_hurt1_8()
{
    event_func_1();
    event_func_882();
    event_func_2();
    event_func_3();
    event_func_4();
}
void Frames::event_func_883()
{
    // event 208_8
    {
        if (!(group_sound_events_carol_1)) goto event_208_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_208_8_end;
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_208_8_end: ;
}
void Frames::event_func_884()
{
    // event 209_8
    {
        if (!(group_sound_events_carol_1)) goto event_209_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_209_8_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
    }
    event_209_8_end: ;
}
void Frames::loop_sound_jump_8()
{
    event_func_17();
    event_func_18();
    event_func_883();
    event_func_884();
    event_func_19();
    event_func_20();
}
void Frames::event_func_885()
{
    // event 2_8
    {
        // group: Check for achievements
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_check_index)) == (1))) goto event_2_8_end;
        next_frame = 9 + 0;    
    
            group_check_stage_1 = false;
    
    }
    event_2_8_end: ;
}
void Frames::loop_check_8()
{
    event_func_885();
}
void Frames::event_func_886()
{
    // event 201_8
    {
        if (!(group_sound_events_spade_1)) goto event_201_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_201_8_end;
        media.play_id(SOUND_SPADE_HURT3_106, -1, 1);
    }
    event_201_8_end: ;
}
void Frames::loop_sound_hurt3_8()
{
    event_func_29();
    event_func_886();
    event_func_30();
    event_func_31();
    event_func_4();
}
void Frames::event_func_887()
{
    // event 205_8
    {
        if (!(group_sound_events_spade_1)) goto event_205_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_205_8_end;
        media.play_id(SOUND_SPADE_DIE_156, -1, 1);
    }
    event_205_8_end: ;
}
void Frames::loop_sound_die_8()
{
    event_func_37();
    event_func_887();
    event_func_38();
    event_func_39();
    event_func_40();
}
void Frames::event_func_888()
{
    // event 207_8
    {
        if (!(group_sound_events_spade_1)) goto event_207_8_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_207_8_end;
        media.stop_sample(SOUND_SPADE_HURT0_103);
        media.stop_sample(SOUND_SPADE_HURT1_104);
        media.stop_sample(SOUND_SPADE_HURT2_105);
        media.stop_sample(SOUND_SPADE_HURT3_106);
        media.stop_sample(SOUND_SPADE_ATTACK0_107);
        media.stop_sample(SOUND_SPADE_ATTACK1_108);
        media.stop_sample(SOUND_SPADE_WHYWONTMOVE_109);
    }
    event_207_8_end: ;
}
