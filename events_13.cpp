#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::handle_frame_12_events()
{
    test_collisions_11();
    event_func_1037();
    if (!group_fade_in_1) goto group_fade_in_1_end;
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_1038();
    event_func_665();
    group_fade_in_1_end: ;
    event_func_1039();
    event_func_1040();
    event_func_1041();
    event_func_1042();
    event_func_1043();
    event_func_1044();
    if (!group_main_menu_select_1) goto group_main_menu_select_1_end;
    event_func_1045();
    event_func_1046();
    event_func_1047();
    event_func_1048();
    event_func_1049();
    event_func_1050();
    event_func_1051();
    event_func_1052();
    event_func_1053();
    group_main_menu_select_1_end: ;
    event_func_1054();
    event_func_1055();
    event_func_1056();
    event_func_1057();
    event_func_1058();
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_1059();
    event_func_1060();
    event_func_1061();
    event_func_705();
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
void Frames::handle_frame_12_pre_events()
{
}
void Frames::event_func_1062()
{
    // event 1_11
    {
        set_display_center(320+(106-global_values->get(19)*53), -1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((TextBlitter*)get_instance(filemessage_117_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(helpmessage_148_instances))->load(str_data_font_bmp_7);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(0, ((Active*)get_instance(arrow1_269_instances))->get_x());
        ((Active*)get_instance(arrow2_270_instances))->alterables->values.set(0, ((Active*)get_instance(arrow2_270_instances))->get_x());
        global_values->set(31, 1);
    }
    event_1_11_end: ;
}
void Frames::on_frame_12_start_events()
{
    event_func_1062();
    event_func_707();
    event_func_709();
    event_func_710();
    event_func_711();
    event_func_712();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_12_init()
{
    index = 11;
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
    static ObjectList* qualifier_3_instances[] = {&stageicon1_212_instances, &arrow1_269_instances, &arrow2_270_instances, NULL};
    qualifier_3.set(3, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&return_111_instances, &charname1_142_instances, &stagename_213_instances, NULL};
    qualifier_1.set(3, &qualifier_1_instances[0]);
    add_background_object(create_separatormasterobjects2_12(-192, -24), 1);
    add_background_object(create_quickbackdrop_262(0, 0), 1);
    add_background_object(create_checkerpattern_263(472, 0), 1);
    add_background_object(create_checkerpattern_263(8, 0), 1);
    add_object(create_stageselect_215(324, 27), 1);
    add_object(create_playerinput_19(-176, 0), 1);
    add_object(create_masterinput_20(-152, 0), 1);
    add_object(create_inputsp1_21(-128, 0), 1);
    add_object(create_globalinputdata_22(-104, 0), 1);
    add_object(create_ringsparkle_139(-73, 167), 1);
    add_object(create_return_111(479, 183), 1);
    add_object(create_charname1_142(192, 303), 1);
    add_object(create_filemessage_275(272, -88), 1);
    add_object(create_active2_264(-8, -280), 1);
    add_object(create_stageicon1_212(296, 80), 1);
    add_object(create_stagelist_276(-152, 144), 1);
    add_object(create_masterlevel_37(-144, 176), 1);
    add_object(create_arrow1_269(248, 96), 1);
    add_object(create_arrow2_270(392, 96), 1);
    add_object(create_crystalcursor_140(422, 184), 1);
    add_object(create_stageidlist_127(-184, 144), 1);
    add_object(create_stagename_213(322, 128), 1);
    add_object(create_mapdata_30(-144, 56), 1);
    add_object(create_savedata_28(128, -40), 1);
    add_object(create_windowcontrol_27(-144, 24), 1);
    add_object(create_mapdata2_32(-144, 64), 1);
    add_background_object(create_backgroundsystembox_146(0, 0), 2);
    add_background_object(create_backdrop_273(0, 200), 2);
    add_background_object(create_backdrop_273(176, 200), 2);
    add_background_object(create_backdrop_273(352, 200), 2);
    add_background_object(create_backdrop_273(528, 200), 2);
    add_object(create_helpmessage_221(112, 216), 2);
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
    group_main_menu_select_1 = false;
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
    not_always_9_4 = loop_count;
    not_always_140_0 = loop_count;
}
void Frames::event_func_1063()
{
    // event 35_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_35_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (1))) goto event_35_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(0, 1);
    }
    event_35_12_end: ;
}
void Frames::event_func_1064()
{
    // event 36_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_36_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (2))) goto event_36_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(1, 1);
    }
    event_36_12_end: ;
}
void Frames::event_func_1065()
{
    // event 37_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_37_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (3))) goto event_37_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(2, 1);
    }
    event_37_12_end: ;
}
void Frames::event_func_1066()
{
    // event 38_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_38_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (4))) goto event_38_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(3, 1);
    }
    event_38_12_end: ;
}
void Frames::event_func_1067()
{
    // event 39_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_39_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (5))) goto event_39_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(4, 1);
    }
    event_39_12_end: ;
}
void Frames::event_func_1068()
{
    // event 40_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_40_12_end;
        if (!((((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13))) == (6))) goto event_40_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.sub(5, 1);
    }
    event_40_12_end: ;
}
void Frames::event_func_1069()
{
    // event 41_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_41_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(((ArrayObject*)get_instance(addtile_282_instances))->get_value(((Active*)get_instance(discardpile_293_instances))->alterables->values.get(13)), ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos, ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos, ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos);
            group_shuffle_tiles_add_tile_1 = false;
    
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(12, 0);
    }
    event_41_12_end: ;
}
void Frames::loop_pick_tile_12()
{
    event_func_1063();
    event_func_1064();
    event_func_1065();
    event_func_1066();
    event_func_1067();
    event_func_1068();
    event_func_1069();
}
void Frames::event_func_1070()
{
    // event 28_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_28_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_28_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(1);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(7, 1);
    }
    event_28_12_end: ;
}
void Frames::event_func_1071()
{
    // event 29_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_29_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_29_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_29_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(2);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(8, 1);
    }
    event_29_12_end: ;
}
void Frames::event_func_1072()
{
    // event 30_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_30_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_30_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_30_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(9)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(2)))) goto event_30_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(3);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(9, 1);
    }
    event_30_12_end: ;
}
void Frames::event_func_1073()
{
    // event 31_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_31_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_31_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_31_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(9)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(2)))) goto event_31_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(10)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(3)))) goto event_31_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(4);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(10, 1);
    }
    event_31_12_end: ;
}
void Frames::event_func_1074()
{
    // event 32_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_32_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_32_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_32_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(9)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(2)))) goto event_32_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(10)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(3)))) goto event_32_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(11)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(4)))) goto event_32_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(5);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(11, 1);
    }
    event_32_12_end: ;
}
void Frames::event_func_1075()
{
    // event 33_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(9)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(2)))) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(10)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(3)))) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(11)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(4)))) goto event_33_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(12)) < (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(5)))) goto event_33_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->set_value(6);
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos++;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(12, 1);
    }
    event_33_12_end: ;
}
void Frames::event_func_1076()
{
    // event 34_12
    {
        if (!(group_shuffle_tiles_1 && group_shuffle_tiles_add_tile_1)) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(7)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(0)))) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(8)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(1)))) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(9)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(2)))) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(10)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(3)))) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(11)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(4)))) goto event_34_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(12)) >= (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(5)))) goto event_34_12_end;
            loop_add_tile_running = false;
    
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(13, randrange(((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos-1)+1);
        {
            loop_pick_tile_running = true;
            int times = int(1);
            loop_pick_tile_index = 0;
            while (loop_pick_tile_index < times) {
                loop_pick_tile_12();
                if (!loop_pick_tile_running) break;
                loop_pick_tile_index++;
            }
        }
    }
    event_34_12_end: ;
}
void Frames::loop_add_tile_12()
{
    event_func_1070();
    event_func_1071();
    event_func_1072();
    event_func_1073();
    event_func_1074();
    event_func_1075();
    event_func_1076();
}
void Frames::event_func_1077()
{
    // event 19_12
    {
        if (!(group_shuffle_tiles_1)) goto event_19_12_end;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.add(6, 1);
    }
    event_19_12_end: ;
}
void Frames::event_func_1078()
{
    // event 20_12
    {
        if (!(group_shuffle_tiles_1)) goto event_20_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (47))) goto event_20_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)%math_helper%48)%math_helper%8+1;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = (((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)%math_helper%48)/math_helper/8+1;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 1;
    }
    event_20_12_end: ;
}
void Frames::event_func_1079()
{
    // event 21_12
    {
        if (!(group_shuffle_tiles_1)) goto event_21_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (48))) goto event_21_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (49))) goto event_21_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-44;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 2;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 2;
    }
    event_21_12_end: ;
}
void Frames::event_func_1080()
{
    // event 22_12
    {
        if (!(group_shuffle_tiles_1)) goto event_22_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (50))) goto event_22_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (53))) goto event_22_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-47;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 3;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 2;
    }
    event_22_12_end: ;
}
void Frames::event_func_1081()
{
    // event 23_12
    {
        if (!(group_shuffle_tiles_1)) goto event_23_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (54))) goto event_23_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (57))) goto event_23_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-51;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 4;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 2;
    }
    event_23_12_end: ;
}
void Frames::event_func_1082()
{
    // event 24_12
    {
        if (!(group_shuffle_tiles_1)) goto event_24_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (58))) goto event_24_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (59))) goto event_24_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-54;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 5;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 2;
    }
    event_24_12_end: ;
}
void Frames::event_func_1083()
{
    // event 25_12
    {
        if (!(group_shuffle_tiles_1)) goto event_25_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (60))) goto event_25_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (61))) goto event_25_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-56;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 3;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 3;
    }
    event_25_12_end: ;
}
void Frames::event_func_1084()
{
    // event 26_12
    {
        if (!(group_shuffle_tiles_1)) goto event_26_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) >= (62))) goto event_26_12_end;
        if (!((((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)) <= (63))) goto event_26_12_end;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.x_pos = ((Active*)get_instance(discardpile_293_instances))->alterables->values.get(6)-58;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.y_pos = 4;
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->data.z_pos = 3;
    }
    event_26_12_end: ;
}
void Frames::event_func_1085()
{
    // event 27_12
    {
        if (!(group_shuffle_tiles_1)) goto event_27_12_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value()) != (-1))) goto event_27_12_end;
        ((ArrayObject*)get_instance(addtile_282_instances))->clear();
        ((ArrayObject*)get_instance(addtile_282_instances))->data.x_pos = 1;
        if (!group_shuffle_tiles_add_tile_1) {
            group_shuffle_tiles_add_tile_1 = true;
        }
        {
            loop_add_tile_running = true;
            loop_add_tile_index = 0;
            while (true) {
                loop_add_tile_12();
                if (!loop_add_tile_running) break;
                loop_add_tile_index++;
            }
        }
    }
    event_27_12_end: ;
}
void Frames::loop_shuffle_12()
{
    event_func_1077();
    event_func_1078();
    event_func_1079();
    event_func_1080();
    event_func_1081();
    event_func_1082();
    event_func_1083();
    event_func_1084();
    event_func_1085();
}
void Frames::test_collisions_12()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_1086()
{
    // event 2_12
    {
        // group: Checker pattern
        ((Active*)get_instance(active_246_instances))->alterables->values.set(0, (((Active*)get_instance(active_246_instances))->alterables->values.get(0)+0.5)%math_helper%64);
        ((SystemBox*)get_instance(backgroundsystembox_146_instances))->set_global_position(160-((Active*)get_instance(active_246_instances))->alterables->values.get(0), 0-((Active*)get_instance(active_246_instances))->alterables->values.get(0));
    }
    event_2_12_end: ;
}
void Frames::event_func_1087()
{
    // event 4_12
    bool or_result_4_12 = false;
    bool or_temp_result_4_12_0 = false;
    {
        // group: Selection
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_4_12_0_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) <= (0))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_4_12_0_end;
        or_result_4_12 = true;
        or_temp_result_4_12_0 = true;
    }
    or_event_4_12_0_end: ;
    hand_292_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_4_12_0) {
        hand_292_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 4_12
    bool or_temp_result_4_12_1 = false;
    {
        // group: Selection
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_4_12_1_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) <= (0))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_4_12_1_end;
        or_result_4_12 = true;
        or_temp_result_4_12_1 = true;
    }
    or_event_4_12_1_end: ;
    if (or_temp_result_4_12_1) {
        hand_292_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 4_12
    bool or_temp_result_4_12_2 = false;
    {
        // group: Selection
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_4_12_2_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) <= (0))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_4_12_2_end;
        or_result_4_12 = true;
        or_temp_result_4_12_2 = true;
        or_event_4_12_2_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_4_12_2) {
            hand_292_instances.save_selection();
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_4_12) goto or_final_or_event_4_12_2_end;
        inputsp1_21_instances.empty_selection();
        hand_292_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_4_12_0 || or_temp_result_4_12_1 || or_temp_result_4_12_2) {
            hand_292_instances.restore_selection();
        }
        if (or_temp_result_4_12_0 || or_temp_result_4_12_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_4_12_2) {
            inputsp1_21_instances.restore_selection();
        }
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_4_12_2_end: ;
}
void Frames::event_func_1088()
{
    // event 5_12
    {
        // group: Selection
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(25)) > (0))) goto event_5_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.sub(25, 1);
    }
    event_5_12_end: ;
}
void Frames::event_func_1089()
{
    // event 6_12
    {
        if (!(group_main_menu_1)) goto event_6_12_end;
        global_values->add(3, 1);
        ((Active*)get_instance(jukebox_284_instances))->force_frame((global_values->get(3)%math_helper%60)/math_helper/30);
    }
    event_6_12_end: ;
}
void Frames::event_func_1090()
{
    // event 7_12
    {
        if (!(group_main_menu_1)) goto event_7_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_7_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_7_12_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(option2_298_instances))->alterables->values.set(25, 4);
    }
    event_7_12_end: ;
}
void Frames::event_func_1091()
{
    // event 8_12
    {
        if (!(group_main_menu_1)) goto event_8_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_8_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_8_12_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(option1_297_instances))->alterables->values.set(25, 4);
    }
    event_8_12_end: ;
}
void Frames::event_func_1092()
{
    // event 9_12
    {
        if (!(group_main_menu_1)) goto event_9_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_9_12_end;
        {
            FrameObject * parent = ((Active*)get_instance(option1_297_instances));
            if (parent == NULL) goto pos_end_9_12_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_9_12_0: ;
        }
    }
    event_9_12_end: ;
}
void Frames::event_func_1093()
{
    // event 10_12
    {
        if (!(group_main_menu_1)) goto event_10_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_10_12_end;
        {
            FrameObject * parent = ((Active*)get_instance(option2_298_instances));
            if (parent == NULL) goto pos_end_10_12_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_10_12_0: ;
        }
    }
    event_10_12_end: ;
}
void Frames::event_func_1094()
{
    // event 11_12
    {
        if (!(group_main_menu_1)) goto event_11_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_11_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_11_12_end;
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_main_menu_1 = false;
    
        if (!group_get_ready_1) {
            group_get_ready_1 = true;
        }
        global_values->set(3, -200);
        ((Active*)get_instance(active7_295_instances))->get_movement()->start();
        ((Active*)get_instance(active7_295_instances))->get_movement()->set_speed(20);
        ((Active*)get_instance(option1_297_instances))->set_visible(false);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
        ((Active*)get_instance(option2_298_instances))->set_visible(false);
        ((Active*)get_instance(hand_292_instances))->set_visible(true);
        ((Active*)get_instance(handshadow_291_instances))->set_visible(true);
        ((Active*)get_instance(active7_295_instances))->set_direction(24);
        ((Active*)get_instance(active2_55_instances))->set_visible(false);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_11_12_end: ;
}
void Frames::event_func_1095()
{
    // event 12_12
    {
        if (!(group_main_menu_1)) goto event_12_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_12_12_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_12_12_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
            group_main_menu_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
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
    event_12_12_end: ;
}
void Frames::event_func_1096()
{
    // event 13_12
    {
        if (!(group_get_ready_1)) goto event_13_12_end;
        global_values->add(3, 1);
        ((Active*)get_instance(jukebox_284_instances))->force_frame((global_values->get(3)%math_helper%60)/math_helper/30);
    }
    event_13_12_end: ;
}
void Frames::event_func_1097()
{
    // event 14_12
    {
        if (!(group_get_ready_1)) goto event_14_12_end;
        if (!((global_values->get(3)) == (-150))) goto event_14_12_end;
        ((Counter*)get_instance(countdown_287_instances))->set(3);
        ((Counter*)get_instance(countdown_287_instances))->set_visible(true);
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
    }
    event_14_12_end: ;
}
void Frames::event_func_1098()
{
    // event 15_12
    {
        if (!(group_get_ready_1)) goto event_15_12_end;
        if (!((global_values->get(3)) == (-100))) goto event_15_12_end;
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
        ((Counter*)get_instance(countdown_287_instances))->set(2);
    }
    event_15_12_end: ;
}
void Frames::event_func_1099()
{
    // event 16_12
    {
        if (!(group_get_ready_1)) goto event_16_12_end;
        if (!((global_values->get(3)) == (-50))) goto event_16_12_end;
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
        ((Counter*)get_instance(countdown_287_instances))->set(1);
    }
    event_16_12_end: ;
}
void Frames::event_func_1100()
{
    // event 17_12
    {
        if (!(group_get_ready_1)) goto event_17_12_end;
        if (!((global_values->get(3)) == (0))) goto event_17_12_end;
        media.play_id(SOUND_ITEM_SHIELDWOOD_2_0, -1, 1);
        ((Counter*)get_instance(countdown_287_instances))->set_visible(false);
            group_get_ready_1 = false;
    
        if (!group_shuffle_tiles_1) {
            group_shuffle_tiles_1 = true;
        }
        if (!group_main_game_1) {
            group_main_game_1 = true;
        }
        ((Active*)get_instance(active7_295_instances))->set_visible(false);
        ((Active*)get_instance(active5_238_instances))->set_direction(1);
    }
    event_17_12_end: ;
}
void Frames::event_func_1101()
{
    // event 18_12
    {
        if (!(group_shuffle_tiles_1)) goto event_18_12_end;
        if (not_always_18_12 > loop_count) {
            not_always_18_12 = loop_count + 2;
            goto event_18_12_end;
        }
        not_always_18_12 = loop_count + 2;
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(0, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(1, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(2, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(3, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(4, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(5, 10);
        ((Active*)get_instance(discardpile_293_instances))->alterables->values.set(6, -1);
        {
            loop_shuffle_running = true;
            int times = int(64);
            loop_shuffle_index = 0;
            while (loop_shuffle_index < times) {
                loop_shuffle_12();
                if (!loop_shuffle_running) break;
                loop_shuffle_index++;
            }
        }
    }
    event_18_12_end: ;
}
void Frames::event_func_1102()
{
    // event 42_12
    {
        if (!(group_shuffle_tiles_1)) goto event_42_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)*it)->alterables->values.get(0)%math_helper%8+1, ((Active*)*it)->alterables->values.get(0)/math_helper/8+1, 1));
            ((Active*)*it)->alterables->values.set(3, ((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)*it)->alterables->values.get(0)%math_helper%8+1, ((Active*)*it)->alterables->values.get(0)/math_helper/8+1, 2));
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)*it)->alterables->values.get(0)%math_helper%8+1, ((Active*)*it)->alterables->values.get(0)/math_helper/8+1, 3));
            ((Active*)*it)->set_visible(false);
        }
    }
    event_42_12_end: ;
}
void Frames::event_func_1103()
{
    // event 43_12
    {
        if (!(group_shuffle_tiles_1)) goto event_43_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_43_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_43_12_end: ;
}
void Frames::event_func_1104()
{
    // event 44_12
    {
        if (!(group_shuffle_tiles_1)) goto event_44_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_44_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_44_12_end: ;
}
void Frames::event_func_1105()
{
    // event 45_12
    {
        if (!(group_shuffle_tiles_1)) goto event_45_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_45_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_45_12_end: ;
}
void Frames::event_func_1106()
{
    // event 46_12
    {
        if (!(group_main_game_1)) goto event_46_12_end;
        global_values->add(3, 1);
        ((Active*)get_instance(jukebox_284_instances))->force_frame((global_values->get(3)%math_helper%60)/math_helper/30);
        ((Active*)get_instance(active6_294_instances))->set_visible(false);
    }
    event_46_12_end: ;
}
void Frames::event_func_1107()
{
    // event 47_12
    {
        if (!(group_main_game_1)) goto event_47_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(10)) == (0))) goto event_47_12_end;
        ((Counter*)get_instance(timemin_286_instances))->set(get_floor(global_values->get(3)/math_helper/3600));
        ((Counter*)get_instance(timesec_288_instances))->set(get_floor(global_values->get(3)/math_helper/60)%math_helper%60);
    }
    event_47_12_end: ;
}
void Frames::event_func_1108()
{
    // event 48_12
    {
        if (!(group_main_game_1)) goto event_48_12_end;
        if (!((((Counter*)get_instance(timesec_288_instances))->value) < (10))) goto event_48_12_end;
        ((Active*)get_instance(active6_294_instances))->set_visible(true);
    }
    event_48_12_end: ;
}
void Frames::event_func_1109()
{
    // event 49_12
    {
        if (!(group_main_game_1)) goto event_49_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_49_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_49_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(0, ((((Active*)get_instance(hand_292_instances))->alterables->values.get(0)+6)%math_helper%8)+1);
    }
    event_49_12_end: ;
}
void Frames::event_func_1110()
{
    // event 50_12
    {
        if (!(group_main_game_1)) goto event_50_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_50_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_50_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(0, (((Active*)get_instance(hand_292_instances))->alterables->values.get(0)%math_helper%8)+1);
    }
    event_50_12_end: ;
}
void Frames::event_func_1111()
{
    // event 51_12
    {
        if (!(group_main_game_1)) goto event_51_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_51_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_51_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) > (0))) goto event_51_12_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.sub(3, 1);
    }
    event_51_12_end: ;
}
void Frames::event_func_1112()
{
    // event 52_12
    {
        if (!(group_main_game_1)) goto event_52_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_52_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_52_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) < (1))) goto event_52_12_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.add(3, 1);
    }
    event_52_12_end: ;
}
void Frames::event_func_1113()
{
    // event 53_12
    {
        if (!(group_main_game_1)) goto event_53_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_53_12_end;
        if (not_always_53_12 > loop_count) {
            not_always_53_12 = loop_count + 2;
            goto event_53_12_end;
        }
        not_always_53_12 = loop_count + 2;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_53_12_end: ;
}
void Frames::event_func_1114()
{
    // event 54_12
    {
        if (!(group_main_game_1)) goto event_54_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_54_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(1, (((Active*)get_instance(hand_292_instances))->alterables->values.get(1)+6)%math_helper%7);
    }
    event_54_12_end: ;
}
void Frames::event_func_1115()
{
    // event 55_12
    {
        if (!(group_main_game_1)) goto event_55_12_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_55_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(1, (((Active*)get_instance(hand_292_instances))->alterables->values.get(1)+1)%math_helper%7);
    }
    event_55_12_end: ;
}
void Frames::event_func_1116()
{
    // event 56_12
    {
        if (!(group_main_game_1)) goto event_56_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_56_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (0))) goto event_56_12_end;
        {
            FrameObject * parent = ((Active*)get_instance(active5_238_instances));
            if (parent == NULL) goto pos_end_56_12_0;
            ((Active*)get_instance(hand_292_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_56_12_0: ;
        }
    }
    event_56_12_end: ;
}
void Frames::event_func_1117()
{
    // event 57_12
    {
        if (!(group_main_game_1)) goto event_57_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_57_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (1))) goto event_57_12_end;
        {
            FrameObject * parent = ((Active*)get_instance(jukebox_284_instances));
            if (parent == NULL) goto pos_end_57_12_0;
            ((Active*)get_instance(hand_292_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_57_12_0: ;
        }
    }
    event_57_12_end: ;
}
void Frames::event_func_1118()
{
    // event 58_12
    {
        if (!(group_main_game_1)) goto event_58_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_58_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(2, (((Active*)get_instance(hand_292_instances))->alterables->values.get(1)-1)*8+((Active*)get_instance(hand_292_instances))->alterables->values.get(0)-1);
    }
    event_58_12_end: ;
}
void Frames::event_func_1119()
{
    // event 59_12
    {
        if (!(group_main_game_1)) goto event_59_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_59_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_59_12_end;
        {
            FrameObject * parent = ((Active*)get_single(tile_285_instances));
            if (parent == NULL) goto pos_end_59_12_0;
            ((Active*)get_instance(hand_292_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_59_12_0: ;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(4, ((Active*)get_single(tile_285_instances, default_active_instance))->get_frame()+1);
    }
    event_59_12_end: ;
}
void Frames::event_func_1120()
{
    // event 60_12
    {
        if (!(group_main_game_1)) goto event_60_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_60_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(0)) <= (2))) goto event_60_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_60_12_end: ;
}
void Frames::event_func_1121()
{
    // event 61_12
    {
        if (!(group_main_game_1)) goto event_61_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) > (0))) goto event_61_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(0)) > (2))) goto event_61_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 1);
    }
    event_61_12_end: ;
}
void Frames::event_func_1122()
{
    // event 62_12
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto event_62_12_end;
        {
            ((Active*)get_instance(sparkle1_300_instances))->set_global_position(-119, 179);
            pos_end_62_12_0: ;
        }
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(1);
    }
    event_62_12_end: ;
}
void Frames::event_func_1123()
{
    // event 63_12
    bool or_result_63_12 = false;
    bool or_temp_result_63_12_0 = false;
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto or_event_63_12_0_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(4))) > (0))) goto or_event_63_12_0_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(0)-1, ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(4))) <= (0))) goto or_event_63_12_0_end;
        or_result_63_12 = true;
        or_temp_result_63_12_0 = true;
    }
    or_event_63_12_0_end: ;
    // event 63_12
    bool or_temp_result_63_12_1 = false;
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto or_event_63_12_1_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(4))) > (0))) goto or_event_63_12_1_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(0)+1, ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_instance(hand_292_instances, default_active_instance))->alterables->values.get(4))) <= (0))) goto or_event_63_12_1_end;
        or_result_63_12 = true;
        or_temp_result_63_12_1 = true;
        or_event_63_12_1_end: ;
        if (!or_result_63_12) goto or_final_or_event_63_12_1_end;
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(hand_292_instances, it.current_index));
            if (parent == NULL) goto pos_end_63_12_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_63_12_0: ;
        }
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_63_12_1_end: ;
}
void Frames::event_func_1124()
{
    // event 64_12
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto event_64_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_64_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_64_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_64_12_end: ;
}
void Frames::event_func_1125()
{
    // event 65_12
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto event_65_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_65_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_65_12_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
            group_main_game_select_tile_1 = false;
    
        if (!group_main_game_select_second_tile_1) {
            group_main_game_select_second_tile_1 = true;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(5, ((Active*)get_instance(hand_292_instances))->alterables->values.get(0));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(6, ((Active*)get_instance(hand_292_instances))->alterables->values.get(1));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(7, ((Active*)get_instance(hand_292_instances))->alterables->values.get(4));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(8, ((Active*)get_instance(hand_292_instances))->alterables->values.get(2));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_65_12_end: ;
}
void Frames::event_func_1126()
{
    // event 66_12
    {
        if (!(group_main_game_1 && group_main_game_select_tile_1)) goto event_66_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(9)) >= (60))) goto event_66_12_end;
        ((Active*)get_instance(active_246_instances))->alterables->values.set(1, global_values->get(3));
            group_main_game_1 = false;
    
        if (!group_win_1) {
            group_win_1 = true;
        }
            group_shuffle_tiles_1 = false;
    
    }
    event_66_12_end: ;
}
void Frames::event_func_1127()
{
    // event 67_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_67_12_end;
        {
            ((Active*)get_instance(sparkle1_300_instances))->set_global_position(-119, 179);
            pos_end_67_12_0: ;
        }
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(1);
    }
    event_67_12_end: ;
}
void Frames::event_func_1128()
{
    // event 68_12
    bool or_result_68_12 = false;
    bool or_temp_result_68_12_0 = false;
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto or_event_68_12_0_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_68_12_0_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) == (((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(5), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(6), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(7))))) goto or_event_68_12_0_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) > (0))) goto or_event_68_12_0_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0)-1, ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) <= (0))) goto or_event_68_12_0_end;
        or_result_68_12 = true;
        or_temp_result_68_12_0 = true;
    }
    or_event_68_12_0_end: ;
    hand_292_instances.clear_saved_selection();
    if (or_temp_result_68_12_0) {
        hand_292_instances.save_selection();
    }
    // event 68_12
    bool or_temp_result_68_12_1 = false;
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto or_event_68_12_1_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_68_12_1_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) == (((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(5), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(6), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(7))))) goto or_event_68_12_1_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) > (0))) goto or_event_68_12_1_end;
        if (!((((ArrayObject*)get_instance(mahjongboard_281_instances))->get_value(((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(0)+1, ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(1), ((Active*)get_single(hand_292_instances, default_active_instance))->alterables->values.get(4))) <= (0))) goto or_event_68_12_1_end;
        or_result_68_12 = true;
        or_temp_result_68_12_1 = true;
        or_event_68_12_1_end: ;
        if (or_temp_result_68_12_1) {
            hand_292_instances.save_selection();
        }
        if (!or_result_68_12) goto or_final_or_event_68_12_1_end;
        hand_292_instances.empty_selection();
        if (or_temp_result_68_12_0 || or_temp_result_68_12_1) {
            hand_292_instances.restore_selection();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hand_292_instances, it.current_index));
            if (parent == NULL) goto pos_end_68_12_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_68_12_0: ;
        }
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_68_12_1_end: ;
}
void Frames::event_func_1129()
{
    // event 69_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_69_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_69_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_69_12_end: ;
}
void Frames::event_func_1130()
{
    // event 70_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_70_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_70_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_70_12_end;
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_70_12_end: ;
}
void Frames::event_func_1131()
{
    // event 71_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_71_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_71_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_off(1))) goto event_71_12_end;
        media.play_id(SOUND_LAND_2_54, -1, 1);
            group_main_game_select_second_tile_1 = false;
    
        if (!group_main_game_select_tile_1) {
            group_main_game_select_tile_1 = true;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_71_12_end: ;
}
void Frames::event_func_1132()
{
    // event 72_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_72_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_72_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_72_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_72_12_end;
        FrameObject * single_instance_72_12_0; single_instance_72_12_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(tile_285_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_72_12_0 == NULL)
                    single_instance_72_12_0 = new_obj;
            }
        }
        FrameObject * single_instance_72_12_1; single_instance_72_12_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(tile_285_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_72_12_1 == NULL)
                    single_instance_72_12_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_72_12_1))->advance_movement(+1);
        ((Active*)get_instance(active_246_instances))->alterables->values.add(2, 1);
    }
    event_72_12_end: ;
}
void Frames::event_func_1133()
{
    // event 73_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_73_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_73_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_73_12_end;
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!tile_285_instances.has_selection()) goto event_73_12_end;
        FrameObject * single_instance_73_12_0; single_instance_73_12_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(tile_285_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_73_12_0 == NULL)
                    single_instance_73_12_0 = new_obj;
            }
        }
        FrameObject * single_instance_73_12_1; single_instance_73_12_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(tile_285_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_73_12_1 == NULL)
                    single_instance_73_12_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_73_12_1))->advance_movement(+1);
        ((Active*)get_instance(active_246_instances))->alterables->values.add(2, 1);
    }
    event_73_12_end: ;
}
void Frames::event_func_1134()
{
    // event 74_12
    {
        if (!(group_main_game_1 && group_main_game_select_second_tile_1)) goto event_74_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_74_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(1))) goto event_74_12_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
            group_main_game_select_second_tile_1 = false;
    
        if (!group_main_game_select_tile_1) {
            group_main_game_select_tile_1 = true;
        }
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, ((Active*)get_instance(hand_292_instances))->alterables->values.get(0), ((Active*)get_instance(hand_292_instances))->alterables->values.get(1), ((Active*)get_instance(hand_292_instances))->alterables->values.get(4));
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, ((Active*)get_instance(hand_292_instances))->alterables->values.get(5), ((Active*)get_instance(hand_292_instances))->alterables->values.get(6), ((Active*)get_instance(hand_292_instances))->alterables->values.get(7));
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.add(9, 2);
    }
    event_74_12_end: ;
}
void Frames::event_func_1135()
{
    // event 75_12
    {
        if (!(group_main_game_1)) goto event_75_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_75_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_75_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (1))) goto event_75_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(jukebox_284_instances))->set_direction((((Active*)get_instance(jukebox_284_instances))->get_direction()+1)%math_helper%2);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_75_12_end: ;
}
void Frames::event_func_1136()
{
    // event 76_12
    {
        if (!(group_main_game_1)) goto event_76_12_end;
        if (!(((Active*)get_instance(jukebox_284_instances))->test_directions(2))) goto event_76_12_end;
        if (not_always_76_12 > loop_count) {
            not_always_76_12 = loop_count + 2;
            goto event_76_12_end;
        }
        not_always_76_12 = loop_count + 2;
        media.pause_channel(32-1);
    }
    event_76_12_end: ;
}
void Frames::event_func_1137()
{
    // event 77_12
    {
        if (!(group_main_game_1)) goto event_77_12_end;
        if (!(((Active*)get_instance(jukebox_284_instances))->test_directions(1))) goto event_77_12_end;
        if (not_always_77_12 > loop_count) {
            not_always_77_12 = loop_count + 2;
            goto event_77_12_end;
        }
        not_always_77_12 = loop_count + 2;
        media.resume_channel(32-1);
    }
    event_77_12_end: ;
}
void Frames::event_func_1138()
{
    // event 78_12
    {
        if (!(group_main_game_1)) goto event_78_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_78_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(1)) == (0))) goto event_78_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (0))) goto event_78_12_end;
            group_main_game_1 = false;
    
        if (!group_win_1) {
            group_win_1 = true;
        }
        ((Active*)get_instance(active_246_instances))->alterables->values.set(1, 0);
        tile_285_instances.clear_selection();
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
            group_shuffle_tiles_1 = false;
    
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_78_12_end: ;
}
void Frames::event_func_1139()
{
    // event 79_12
    {
        if (!(group_main_game_1)) goto event_79_12_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_79_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
    }
    event_79_12_end: ;
}
void Frames::event_func_1140()
{
    // event 80_12
    {
        if (!(group_win_1)) goto event_80_12_end;
        global_values->add(3, 1);
        ((Active*)get_instance(jukebox_284_instances))->force_frame((global_values->get(3)%math_helper%60)/math_helper/30);
    }
    event_80_12_end: ;
}
void Frames::event_func_1141()
{
    // event 81_12
    {
        if (!(group_win_1)) goto event_81_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(10)) == (0))) goto event_81_12_end;
        objectcrystal_279_instances.clear_selection();
        if (!((objects_in_zone(objectcrystal_279_instances, 161, 1, 482, 239)) == (0))) goto event_81_12_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(active7_295_instances))->set_direction(8);
        media.play_id(SOUND_UI_SCOREDISPLAY_34, -1, 1);
        ((Active*)get_instance(active7_295_instances))->set_visible(true);
        ((Counter*)get_instance(countdown_287_instances))->set(((Active*)get_instance(active_246_instances))->alterables->values.get(2));
        ((Counter*)get_instance(countdown_287_instances))->set_visible(true);
    }
    event_81_12_end: ;
}
void Frames::event_func_1142()
{
    // event 82_12
    {
        if (!(group_win_1)) goto event_82_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(10)) == (1))) goto event_82_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(1)) == (0))) goto event_82_12_end;
        if (not_always_82_12 > loop_count) {
            not_always_82_12 = loop_count + 2;
            goto event_82_12_end;
        }
        not_always_82_12 = loop_count + 2;
        ((Active*)get_instance(active_246_instances))->alterables->values.set(2, ((Active*)get_instance(active_246_instances))->alterables->values.get(2)*0.5);
    }
    event_82_12_end: ;
}
void Frames::event_func_1143()
{
    // event 83_12
    {
        if (!(group_win_1)) goto event_83_12_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(10)) == (1))) goto event_83_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) < (60))) goto event_83_12_end;
        ((Active*)get_instance(active_246_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(hand_292_instances))->set_visible(false);
        ((Active*)get_instance(handshadow_291_instances))->set_visible(false);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(0, 5);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(1, 4);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        {
            ((Active*)get_instance(hand_292_instances))->set_global_position(158, 137);
            pos_end_83_12_0: ;
        }
    }
    event_83_12_end: ;
}
void Frames::event_func_1144()
{
    // event 84_12
    {
        if (!(group_win_1)) goto event_84_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) == (60))) goto event_84_12_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 0);
        ((Active*)get_instance(active_246_instances))->alterables->values.add(3, 1);
    }
    event_84_12_end: ;
}
void Frames::event_func_1145()
{
    // event 85_12
    {
        if (!(group_win_1)) goto event_85_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) == (61))) goto event_85_12_end;
        if (!((((Counter*)get_instance(countdown_287_instances))->value) > (0))) goto event_85_12_end;
        ((Counter*)get_instance(countdown_287_instances))->subtract(1);
    }
    event_85_12_end: ;
}
void Frames::event_func_1146()
{
    // event 86_12
    {
        if (!(group_win_1)) goto event_86_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) == (61))) goto event_86_12_end;
        if (!((((Counter*)get_instance(countdown_287_instances))->value) == (0))) goto event_86_12_end;
        ((Active*)get_instance(active_246_instances))->alterables->values.add(3, 1);
        media.stop_sample(SOUND_UI_SCORETALLY_15);
        media.play_id(SOUND_COMMON_RESULT_16, -1, 1);
    }
    event_86_12_end: ;
}
void Frames::event_func_1147()
{
    // event 87_12
    {
        if (!(group_win_1)) goto event_87_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) > (61))) goto event_87_12_end;
        ((Active*)get_instance(active_246_instances))->alterables->values.add(3, 1);
    }
    event_87_12_end: ;
}
void Frames::event_func_1148()
{
    // event 88_12
    {
        if (!(group_win_1)) goto event_88_12_end;
        if (!((((Active*)get_instance(active_246_instances))->alterables->values.get(3)) > (160))) goto event_88_12_end;
        ((Active*)get_instance(active_246_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(active_246_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(active_246_instances))->alterables->values.set(3, 0);
            group_win_1 = false;
    
        if (!group_main_menu_1) {
            group_main_menu_1 = true;
        }
        ((Active*)get_instance(active7_295_instances))->set_direction(0);
        ((Active*)get_instance(active7_295_instances))->set_y(((Active*)get_instance(active7_295_instances))->alterables->values.get(0));
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(option1_297_instances))->set_visible(true);
        ((Active*)get_instance(option2_298_instances))->set_visible(true);
        ((Active*)get_instance(active2_55_instances))->set_visible(true);
        ((Active*)get_instance(active5_238_instances))->set_direction(0);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(countdown_287_instances))->set_visible(false);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(9, 0);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->clear();
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 1, 2, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 8, 2, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 1, 5, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 8, 5, 1);
    }
    event_88_12_end: ;
}
void Frames::event_func_1149()
{
    // event 89_12
    {
        // group: Crystals
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_89_12_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->bounce(false);
        }
    }
    event_89_12_end: ;
}
void Frames::event_func_1150()
{
    // event 90_12
    {
        // group: Crystals
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_90_12_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_ITEM_CRYSTAL_27, -1, 1);
        FrameObject * single_instance_90_12_0; single_instance_90_12_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcrystal_279_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guilinkbonus_280(parent->x + -20, parent->y + 0), parent->layer);
                if (single_instance_90_12_0 == NULL)
                    single_instance_90_12_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_90_12_0))->force_animation(7);
        ((Active*)((Active*)single_instance_90_12_0))->set_y(frame_bottom()-15);
    }
    event_90_12_end: ;
}
void Frames::event_func_1151()
{
    // event 91_12
    {
        // group: Crystals
        guilinkbonus_280_instances.clear_selection();
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!guilinkbonus_280_instances.has_selection()) goto event_91_12_end;
        for (ObjectIterator it(guilinkbonus_280_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_91_12_end: ;
}
void Frames::event_func_1152()
{
    // event 93_12
    {
        if (!(group_transition_1)) goto event_93_12_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_93_12_end;
        next_frame = 3 + 0;    
    
    }
    event_93_12_end: ;
}
void Frames::event_func_1153()
{
    // event 94_12
    {
        ((Active*)get_instance(handshadow_291_instances))->set_x(((Active*)get_instance(hand_292_instances))->get_x()+8);
        ((Active*)get_instance(handshadow_291_instances))->set_y(((Active*)get_instance(hand_292_instances))->get_y()+8);
    }
    event_94_12_end: ;
}
