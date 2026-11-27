#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::handle_frame_13_events()
{
    test_collisions_12();
    event_func_1149();
    event_func_1086();
    event_func_1087();
    event_func_1088();
    if (!group_main_menu_1) goto group_main_menu_1_end;
    event_func_1089();
    event_func_1090();
    event_func_1091();
    event_func_1092();
    event_func_1093();
    event_func_1094();
    event_func_1095();
    group_main_menu_1_end: ;
    if (!group_get_ready_1) goto group_get_ready_1_end;
    event_func_1096();
    event_func_1097();
    event_func_1098();
    event_func_1099();
    event_func_1100();
    group_get_ready_1_end: ;
    if (!group_shuffle_tiles_1) goto group_shuffle_tiles_1_end;
    event_func_1101();
    if (!group_shuffle_tiles_add_tile_1) goto group_shuffle_tiles_add_tile_1_end;
    group_shuffle_tiles_add_tile_1_end: ;
    event_func_1102();
    event_func_1103();
    event_func_1104();
    event_func_1105();
    group_shuffle_tiles_1_end: ;
    if (!group_main_game_1) goto group_main_game_1_end;
    event_func_1106();
    event_func_1107();
    event_func_1108();
    event_func_1109();
    event_func_1110();
    event_func_1111();
    event_func_1112();
    event_func_1113();
    event_func_1114();
    event_func_1115();
    event_func_1116();
    event_func_1117();
    event_func_1118();
    event_func_1119();
    event_func_1120();
    event_func_1121();
    if (!group_main_game_select_tile_1) goto group_main_game_select_tile_1_end;
    event_func_1122();
    event_func_1123();
    event_func_1124();
    event_func_1125();
    event_func_1126();
    group_main_game_select_tile_1_end: ;
    if (!group_main_game_select_second_tile_1) goto group_main_game_select_second_tile_1_end;
    event_func_1127();
    event_func_1128();
    event_func_1129();
    event_func_1130();
    event_func_1131();
    event_func_1132();
    event_func_1133();
    event_func_1134();
    group_main_game_select_second_tile_1_end: ;
    event_func_1135();
    event_func_1136();
    event_func_1137();
    event_func_1138();
    event_func_1139();
    group_main_game_1_end: ;
    if (!group_win_1) goto group_win_1_end;
    event_func_1140();
    event_func_1141();
    event_func_1142();
    event_func_1143();
    event_func_1144();
    event_func_1145();
    event_func_1146();
    event_func_1147();
    event_func_1148();
    group_win_1_end: ;
    event_func_1150();
    event_func_1151();
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_1152();
    group_transition_1_end: ;
    event_func_1153();
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
void Frames::handle_frame_13_pre_events()
{
}
void Frames::event_func_1154()
{
    // event 1_12
    {
        global_values->set(3, 0);
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        ((Active*)get_instance(active7_295_instances))->alterables->values.set(0, ((Active*)get_instance(active7_295_instances))->get_y());
        ((Active*)get_instance(hand_292_instances))->set_direction(global_values->get(1));
        ((Active*)get_instance(handshadow_291_instances))->set_direction(global_values->get(1));
        set_display_center(320, -1);
        media.play(str_data_bgm_m_mahjong_ogg_40, 32-1, 0);
    }
    event_1_12_end: ;
}
void Frames::event_func_1155()
{
    // event 3_12
    {
        tile_285_instances.clear_selection();
        spread_value(tile_285_instances, 0, 1);
        for (ObjectIterator it(tile_285_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, tile_285_instances.size()-((Active*)*it)->alterables->values.get(0));
        }
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 1, 2, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 8, 2, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 1, 5, 1);
        ((ArrayObject*)get_instance(mahjongboard_281_instances))->set_value(-1, 8, 5, 1);
    }
    event_3_12_end: ;
}
void Frames::on_frame_13_start_events()
{
    event_func_1154();
    event_func_1155();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_13_init()
{
    index = 12;
    width = 640;
    height = 240;
    virtual_width = 640;
    virtual_height = 240;
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
    static ObjectList* qualifier_2_instances[] = {&timemin_286_instances, &countdown_287_instances, &timesec_288_instances, NULL};
    qualifier_2.set(3, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&timecolon_289_instances, &active_246_instances, NULL};
    qualifier_3.set(2, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&option1_297_instances, &option2_298_instances, NULL};
    qualifier_1.set(2, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, NULL};
    qualifier_6.set(1, &qualifier_6_instances[0]);
    add_background_object(create_backdrop_277(160, 0), 0);
    add_background_object(create_backgroundsystembox_278(160, 0), 0);
    add_object(create_layerobject_10(-40, 0), 0);
    add_object(create_mahjongboard_281(-40, 240), 0);
    add_object(create_addtile_282(-40, 272), 0);
    add_background_object(create_separatormasterobjects2_12(-192, 0), 1);
    add_object(create_active5_283(204, 19), 1);
    add_object(create_jukebox_284(296, 8), 1);
    add_object(create_tile_285(205, 53), 1);
    add_object(create_tile_285(237, 53), 1);
    add_object(create_tile_285(269, 53), 1);
    add_object(create_tile_285(301, 53), 1);
    add_object(create_tile_285(333, 53), 1);
    add_object(create_tile_285(365, 53), 1);
    add_object(create_tile_285(397, 53), 1);
    add_object(create_tile_285(429, 53), 1);
    add_object(create_tile_285(205, 85), 1);
    add_object(create_tile_285(237, 85), 1);
    add_object(create_tile_285(269, 85), 1);
    add_object(create_tile_285(301, 85), 1);
    add_object(create_tile_285(333, 85), 1);
    add_object(create_tile_285(365, 85), 1);
    add_object(create_tile_285(397, 85), 1);
    add_object(create_tile_285(429, 85), 1);
    add_object(create_tile_285(205, 117), 1);
    add_object(create_tile_285(237, 117), 1);
    add_object(create_tile_285(269, 117), 1);
    add_object(create_tile_285(301, 117), 1);
    add_object(create_tile_285(333, 117), 1);
    add_object(create_tile_285(365, 117), 1);
    add_object(create_tile_285(397, 117), 1);
    add_object(create_tile_285(429, 117), 1);
    add_object(create_tile_285(205, 149), 1);
    add_object(create_tile_285(237, 149), 1);
    add_object(create_tile_285(269, 149), 1);
    add_object(create_tile_285(301, 149), 1);
    add_object(create_tile_285(333, 149), 1);
    add_object(create_tile_285(365, 149), 1);
    add_object(create_tile_285(397, 149), 1);
    add_object(create_tile_285(429, 149), 1);
    add_object(create_tile_285(205, 181), 1);
    add_object(create_tile_285(237, 181), 1);
    add_object(create_tile_285(269, 181), 1);
    add_object(create_tile_285(301, 181), 1);
    add_object(create_tile_285(333, 181), 1);
    add_object(create_tile_285(365, 181), 1);
    add_object(create_tile_285(397, 181), 1);
    add_object(create_tile_285(429, 181), 1);
    add_object(create_tile_285(205, 213), 1);
    add_object(create_tile_285(237, 213), 1);
    add_object(create_tile_285(269, 213), 1);
    add_object(create_tile_285(301, 213), 1);
    add_object(create_tile_285(333, 213), 1);
    add_object(create_tile_285(365, 213), 1);
    add_object(create_tile_285(397, 213), 1);
    add_object(create_tile_285(429, 213), 1);
    add_object(create_playerinput_19(-176, 24), 1);
    add_object(create_masterinput_20(-152, 24), 1);
    add_object(create_inputsp1_21(-128, 24), 1);
    add_object(create_globalinputdata_22(-104, 24), 1);
    add_object(create_timemin_286(404, 28), 1);
    add_object(create_countdown_287(327, 128), 1);
    add_object(create_timesec_288(444, 28), 1);
    add_object(create_timecolon_289(408, 12), 1);
    add_object(create_active_290(352, 4), 1);
    add_object(create_handshadow_291(328, 146), 1);
    add_object(create_hand_292(320, 138), 1);
    add_object(create_discardpile_293(-27, 213), 1);
    add_object(create_active6_294(416, 12), 1);
    add_object(create_active7_295(320, 48), 1);
    add_object(create_crystalcursor_296(-29, 181), 1);
    add_object(create_option1_297(255, 216), 1);
    add_object(create_option2_298(383, 216), 1);
    add_object(create_active2_299(168, 61), 1);
    add_object(create_sparkle1_300(-90, 182), 1);
    add_object(create_mapdata_30(-144, 80), 1);
    add_object(create_windowcontrol_27(-144, 48), 1);
    add_object(create_mapdata2_32(-144, 88), 1);
    add_background_object(create_quickbackdrop_301(0, 0), 2);
    add_background_object(create_quickbackdrop_301(480, 0), 2);
    add_object(create_fade_54(152, -344), 2);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_shuffle_running = false;
    loop_shuffle_index = 0;
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
    loop_add_tile_running = false;
    loop_add_tile_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
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
    loop_pick_tile_running = false;
    loop_pick_tile_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loops = NULL;
    not_always_18_12 = loop_count;
    group_transition_1 = false;
    not_always_77_12 = loop_count;
    group_main_game_select_second_tile_1 = false;
    group_sound_events_torque_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    group_main_game_1 = false;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_sound_events_milla_1 = false;
    group_main_game_select_tile_1 = true;
    group_sound_events_carol_1 = false;
    not_always_97_0 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_53_12 = loop_count;
    once_condition_63_0 = false;
    group_win_1 = false;
    group_shuffle_tiles_add_tile_1 = false;
    group_debug_mode_1 = false;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    group_shuffle_tiles_1 = false;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_101_0 = loop_count;
    not_always_103_0 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_140_0 = loop_count;
    group_main_menu_1 = true;
    not_always_82_12 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_76_12 = loop_count;
    group_get_ready_1 = false;
}
void Frames::event_func_1156()
{
    // event 1179_13
    {
        if (!(group_main_engine_1)) goto event_1179_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_itm_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1179_13_end;
        FrameObject * single_instance_1179_13_0; single_instance_1179_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1179_13_0 == NULL)
                    single_instance_1179_13_0 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1179_13_0))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1179_13_0))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->get_direction());
    }
    event_1179_13_end: ;
}
void Frames::loop_itm_13()
{
    event_func_1156();
}
void Frames::event_func_1157()
{
    // event 1188_13
    {
        if (!(group_main_engine_1)) goto event_1188_13_end;
        if (!((loop_spawn_rings_index) == (5))) goto event_1188_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1188_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1188_13_end: ;
}
void Frames::event_func_1158()
{
    // event 1189_13
    {
        if (!(group_main_engine_1)) goto event_1189_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1189_13_end;
        FrameObject * single_instance_1189_13_0; single_instance_1189_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 16, parent->y + 10), parent->layer);
                if (single_instance_1189_13_0 == NULL)
                    single_instance_1189_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1189_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1189_13_0))->set_direction(5+loop_spawn_rings_index);
        ((Active*)((Active*)single_instance_1189_13_0))->alterables->values.set(0, 2);
    }
    event_1189_13_end: ;
}
void Frames::loop_spawn_rings_13()
{
    event_func_1157();
    event_func_1158();
}
void Frames::event_func_1159()
{
    // event 175_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_175_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(25)) == (1))) goto event_175_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
    }
    event_175_13_end: ;
}
void Frames::event_func_1160()
{
    // event 176_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_176_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(25)) == (0))) goto event_176_13_end;
            loop_player01slopesup_running = false;
    
    }
    event_176_13_end: ;
}
void Frames::loop_player01slopesup_13()
{
    event_func_1159();
    event_func_1160();
}
void Frames::event_func_1161()
{
    // event 1290_13
    bool or_result_1290_13 = false;
    bool or_temp_result_1290_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1290_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1290_13_0_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)-2))) goto or_event_1290_13_0_end;
        or_result_1290_13 = true;
        or_temp_result_1290_13_0 = true;
    }
    or_event_1290_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1290_13_0) {
        qualifier_14.save_selection();
    }
    // event 1290_13
    bool or_temp_result_1290_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1290_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1290_13_1_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(1)))) goto or_event_1290_13_1_end;
        or_result_1290_13 = true;
        or_temp_result_1290_13_1 = true;
        or_event_1290_13_1_end: ;
        if (or_temp_result_1290_13_1) {
            qualifier_14.save_selection();
        }
        if (!or_result_1290_13) goto or_final_or_event_1290_13_1_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1290_13_0 || or_temp_result_1290_13_1) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    or_final_or_event_1290_13_1_end: ;
}
void Frames::event_func_1162()
{
    // event 1291_13
    bool or_result_1291_13 = false;
    bool or_temp_result_1291_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1291_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1291_13_0_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)-2))) goto or_event_1291_13_0_end;
        or_result_1291_13 = true;
        or_temp_result_1291_13_0 = true;
    }
    or_event_1291_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1291_13_0) {
        qualifier_14.save_selection();
    }
    // event 1291_13
    bool or_temp_result_1291_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1291_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1291_13_1_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(1)))) goto or_event_1291_13_1_end;
        or_result_1291_13 = true;
        or_temp_result_1291_13_1 = true;
        or_event_1291_13_1_end: ;
        if (or_temp_result_1291_13_1) {
            qualifier_14.save_selection();
        }
        if (!or_result_1291_13) goto or_final_or_event_1291_13_1_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1291_13_0 || or_temp_result_1291_13_1) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    or_final_or_event_1291_13_1_end: ;
}
void Frames::event_func_1163()
{
    // event 1292_13
    bool or_result_1292_13 = false;
    bool or_temp_result_1292_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1292_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1292_13_0_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)))) goto or_event_1292_13_0_end;
        or_result_1292_13 = true;
        or_temp_result_1292_13_0 = true;
    }
    or_event_1292_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1292_13_0) {
        qualifier_14.save_selection();
    }
    // event 1292_13
    bool or_temp_result_1292_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1292_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1292_13_1_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)))) goto or_event_1292_13_1_end;
        or_result_1292_13 = true;
        or_temp_result_1292_13_1 = true;
    }
    or_event_1292_13_1_end: ;
    if (or_temp_result_1292_13_1) {
        qualifier_14.save_selection();
    }
    // event 1292_13
    bool or_temp_result_1292_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1292_13_2_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1292_13_2_end;
        if (!(test_obstacle(((((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)+((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0))*0.5+((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2))*0.5, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)))) goto or_event_1292_13_2_end;
        or_result_1292_13 = true;
        or_temp_result_1292_13_2 = true;
    }
    or_event_1292_13_2_end: ;
    if (or_temp_result_1292_13_2) {
        qualifier_14.save_selection();
    }
    // event 1292_13
    bool or_temp_result_1292_13_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1292_13_3_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1292_13_3_end;
        if (!(test_obstacle(((((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)+((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0))*0.5+((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0))*0.5, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)))) goto or_event_1292_13_3_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1292_13_3_end;
        or_result_1292_13 = true;
        or_temp_result_1292_13_3 = true;
        or_event_1292_13_3_end: ;
        if (or_temp_result_1292_13_3) {
            qualifier_14.save_selection();
        }
        if (!or_result_1292_13) goto or_final_or_event_1292_13_3_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1292_13_0 || or_temp_result_1292_13_1 || or_temp_result_1292_13_2 || or_temp_result_1292_13_3) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    or_final_or_event_1292_13_3_end: ;
}
void Frames::event_func_1164()
{
    // event 1293_13
    bool or_result_1293_13 = false;
    bool or_temp_result_1293_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1293_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1293_13_0_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)+1))) goto or_event_1293_13_0_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3))) goto or_event_1293_13_0_end;
        or_result_1293_13 = true;
        or_temp_result_1293_13_0 = true;
    }
    or_event_1293_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1293_13_0) {
        qualifier_14.save_selection();
    }
    // event 1293_13
    bool or_temp_result_1293_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1293_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_iterate_pushables_index))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1293_13_1_end;
        if (!(test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)+1))) goto or_event_1293_13_1_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3))) goto or_event_1293_13_1_end;
        or_result_1293_13 = true;
        or_temp_result_1293_13_1 = true;
        or_event_1293_13_1_end: ;
        if (or_temp_result_1293_13_1) {
            qualifier_14.save_selection();
        }
        if (!or_result_1293_13) goto or_final_or_event_1293_13_1_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1293_13_0 || or_temp_result_1293_13_1) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    or_final_or_event_1293_13_1_end: ;
}
void Frames::loop_iterate_pushables_13()
{
    event_func_1161();
    event_func_1162();
    event_func_1163();
    event_func_1164();
}
void Frames::event_func_1165()
{
    // event 1387_13
    {
        if (!(group_main_engine_1)) goto event_1387_13_end;
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1387_13_end: ;
}
void Frames::loop_death_13()
{
    event_func_1165();
}
void Frames::event_func_1166()
{
    // event 1358_13
    {
        if (!(group_main_engine_1)) goto event_1358_13_end;
        if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) {
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
    }
    event_1358_13_end: ;
}
void Frames::loop_cutscene_end_13()
{
    event_func_1166();
}
void Frames::event_func_1167()
{
    // event 173_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_173_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(25)) == (0))) goto event_173_13_end;
        if (!((((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.get(25)) == (1))) goto event_173_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
    }
    event_173_13_end: ;
}
void Frames::event_func_1168()
{
    // event 174_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_174_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(25)) == (1))) goto event_174_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)));
            loop_player01slopesdown_running = false;
    
    }
    event_174_13_end: ;
}
void Frames::loop_player01slopesdown_13()
{
    event_func_1167();
    event_func_1168();
}
void Frames::event_func_1169()
{
    // event 124_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_124_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(6, str_player01detectsensoredges_41);
    }
    event_124_13_end: ;
}
void Frames::loop_player01detectsensoredges_13()
{
    event_func_1169();
}
void Frames::event_func_1170()
{
    // event 1531_13
    {
        if (!(group_main_engine_1)) goto event_1531_13_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1531_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()+1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()+1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()+1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.sub(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
        ((Counter*)get_instance(guicrystal_121_instances))->set_y(((Counter*)get_instance(guicrystal_121_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()+1);
    }
    event_1531_13_end: ;
}
void Frames::loop_gui_shiftdown_13()
{
    event_func_1170();
}
void Frames::event_func_1171()
{
    // event 1808_13
    {
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.resume_samples();
        media.stop_samples();
        ((Counter*)get_instance(guicrystal_121_instances))->set(global_values->get(29));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, global_values->get(15));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        set_lives(get_max(global_values->get(28)-1, 1));
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_1808_13_end: ;
}
void Frames::loop_restart_13()
{
    event_func_86();
    event_func_1171();
}
void Frames::event_func_1172()
{
    // event 1587_13
    {
        if (!(group_main_engine_1)) goto event_1587_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1587_13_end: ;
}
void Frames::loop_process_call_unlock_music_13()
{
    event_func_1172();
}
void Frames::event_func_1173()
{
    // event 101_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_101_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(2, str_player01detectsensorbottom_42);
    }
    event_101_13_end: ;
}
void Frames::loop_player01detectsensorbottom_13()
{
    event_func_1173();
}
void Frames::event_func_1174()
{
    // event 1152_13
    {
        if (!(group_main_engine_1)) goto event_1152_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1152_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1152_13_end: ;
}
void Frames::event_func_1175()
{
    // event 1153_13
    {
        if (!(group_main_engine_1)) goto event_1153_13_end;
        qualifier_19.clear_selection();
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        enemyrocketpunchershield_3162_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_7)) goto event_1153_13_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1153_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1153_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1153_13_end: ;
}
void Frames::loop_monitorsunstuckfromceiling_13()
{
    event_func_1174();
    event_func_1175();
}
void Frames::event_func_1176()
{
    // event 532_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_532_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_532_13_end;
        FrameObject * single_instance_532_13_0; single_instance_532_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_532_13_0 == NULL)
                    single_instance_532_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_532_13_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_532_13_0))->force_frame(45+((Active*)get_single(objectbike_322_instances, default_active_instance))->alterables->values.get(1)*-1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_532_13_end: ;
}
void Frames::event_func_1177()
{
    // event 549_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_549_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_549_13_end;
        FrameObject * single_instance_549_13_0; single_instance_549_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_549_13_0 == NULL)
                    single_instance_549_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_549_13_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_549_13_0))->force_frame(45+((Active*)get_single(objectbike_322_instances, default_active_instance))->alterables->values.get(1)*-1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_549_13_end: ;
}
void Frames::event_func_1178()
{
    // event 683_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_683_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_683_13_end;
        FrameObject * single_instance_683_13_0; single_instance_683_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_683_13_0 == NULL)
                    single_instance_683_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_683_13_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_683_13_0))->force_frame(45+((Active*)get_single(objectbike_322_instances, default_active_instance))->alterables->values.get(1)*-1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_683_13_end: ;
}
void Frames::loop_spawndebris_13()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
}
void Frames::event_func_1179()
{
    // event 1585_13
    {
        if (!(group_main_engine_1)) goto event_1585_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, media.get_channel_volume(-1 +32)/math_helper/(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2))/math_helper/(1000/math_helper/60.0)));
            ((Active*)*it)->alterables->values.set(9, media.get_channel_volume(-1 +32));
            ((Active*)*it)->alterables->values.set(10, 1);
        }
    }
    event_1585_13_end: ;
}
void Frames::loop_process_call_fadeout_music_13()
{
    event_func_1179();
}
void Frames::event_func_1180()
{
    // event 681_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_681_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_681_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_681_13_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_681_13_0; single_instance_681_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_681_13_0 == NULL)
                    single_instance_681_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_681_13_0))->alterables->flags.enable(6);
    }
    event_681_13_end: ;
}
void Frames::event_func_1181()
{
    // event 928_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_928_13_end;
        FrameObject * single_instance_928_13_0; single_instance_928_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_928_13_0 == NULL)
                    single_instance_928_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_928_13_0))->get_movement()->set_speed(25+loop_petal_loss_index);
        ((Active*)((Active*)single_instance_928_13_0))->set_direction(randrange(32));
        ((Active*)((Active*)single_instance_928_13_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_928_13_0))->alterables->values.sub(0, loop_petal_loss_index*4);
    }
    event_928_13_end: ;
}
void Frames::loop_petal_loss_13()
{
    event_func_1180();
    event_func_1181();
}
void Frames::event_func_1182()
{
    // event 834_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_834_13_end;
        FrameObject * single_instance_834_13_0; single_instance_834_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdig_448_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_834_13_0 == NULL)
                    single_instance_834_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_834_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_834_13_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_834_13_0))->set_direction(8+(loop_dig_crystals_index/math_helper/2+1)*((loop_dig_crystals_index%math_helper%2)*2-1));
    }
    event_834_13_end: ;
}
void Frames::loop_dig_crystals_13()
{
    event_func_1182();
}
void Frames::event_func_1183()
{
    // event 1049_13
    {
        if (!(group_main_engine_1)) goto event_1049_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1049_13_end;
        FrameObject * single_instance_1049_13_0; single_instance_1049_13_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1049_13_0 == NULL) goto event_1049_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        media.play_id(SOUND_ITEM_PETALGET_2_37, -1, 1);
        ((Active*)((Active*)single_instance_1049_13_0))->alterables->values.set(0, 3);
        ((Active*)((Active*)single_instance_1049_13_0))->set_layer(7-1);
        ((Active*)((Active*)single_instance_1049_13_0))->alterables->values.set(8, get_min((((Counter*)get_instance(guirings_122_instances))->get_x()-((Active*)single_instance_1049_13_0)->get_x())*0.03, -1));
        ((Active*)((Active*)single_instance_1049_13_0))->alterables->values.set(9, get_min((((Counter*)get_instance(guirings_122_instances))->get_y()-((Active*)single_instance_1049_13_0)->get_y())*0.03, -1));
    }
    event_1049_13_end: ;
}
void Frames::event_func_1184()
{
    // event 1072_13
    {
        if (!(group_main_engine_1)) goto event_1072_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1072_13_end;
        FrameObject * single_instance_1072_13_0; single_instance_1072_13_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1072_13_0 == NULL) goto event_1072_13_end;
        ((Active*)((Active*)single_instance_1072_13_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+5, 100));
        ((Active*)get_instance(guienergy_124_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.add(9, 1);
        ((Counter*)get_instance(guicrystal_121_instances))->subtract(1);
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1072_13_end: ;
}
void Frames::event_func_1185()
{
    // event 1073_13
    {
        if (!(group_main_engine_1)) goto event_1073_13_end;
        objectcrystal_279_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(objectcrystal_279_instances, qualifier_20)) goto event_1073_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1073_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1073_13_end;
        FrameObject * single_instance_1073_13_0; single_instance_1073_13_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1073_13_0 == NULL) goto event_1073_13_end;
        ((Active*)((Active*)single_instance_1073_13_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, 1);
        }
    }
    event_1073_13_end: ;
}
void Frames::event_func_1186()
{
    // event 1092_13
    {
        if (!(group_main_engine_1)) goto event_1092_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1092_13_end;
        FrameObject * single_instance_1092_13_0; single_instance_1092_13_0 = pick_random(objectkeystone_311_instances);
        if (single_instance_1092_13_0 == NULL) goto event_1092_13_end;
        FrameObject * single_instance_1092_13_1; single_instance_1092_13_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_1092_13_0)->x + 0, ((Active*)single_instance_1092_13_0)->y + 0), ((Active*)single_instance_1092_13_0)->layer);
            if (single_instance_1092_13_1 == NULL)
                single_instance_1092_13_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1092_13_0))->alterables->values.set(4, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1092_13_end: ;
}
void Frames::event_func_1187()
{
    // event 1139_13
    {
        if (!(group_main_engine_1)) goto event_1139_13_end;
        if (!(((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.is_off(0))) goto event_1139_13_end;
            loop_collect_item_running = false;
    
    }
    event_1139_13_end: ;
}
void Frames::event_func_1188()
{
    // event 1140_13
    {
        if (!(group_main_engine_1)) goto event_1140_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.disable(0);
    }
    event_1140_13_end: ;
}
void Frames::loop_collect_item_13()
{
    event_func_1183();
    event_func_1184();
    event_func_1185();
    event_func_1186();
    event_func_1187();
    event_func_1188();
}
void Frames::event_func_1189()
{
    // event 939_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_939_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
    }
    event_939_13_end: ;
}
void Frames::loop_reposition_skin_13()
{
    event_func_1189();
}
void Frames::event_func_1190()
{
    // event 218_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_218_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(8))) goto event_218_13_end;
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
    }
    event_218_13_end: ;
}
void Frames::event_func_1191()
{
    // event 219_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_219_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_219_13_end;
        media.play_id(SOUND_LILAC_SCOMETREBOUND_400, -1, 1);
    }
    event_219_13_end: ;
}
void Frames::loop_bs_13()
{
    event_func_1190();
    event_func_1191();
}
void Frames::event_func_1192()
{
    // event 1765_13
    {
        if (!(group_sound_events_carol_1)) goto event_1765_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1765_13_end;
        media.play_id(SOUND_CAROL_POUNCE_154, -1, 1);
    }
    event_1765_13_end: ;
}
void Frames::event_func_1193()
{
    // event 1766_13
    {
        if (!(group_sound_events_carol_1)) goto event_1766_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1766_13_end;
        media.play_id(SOUND_CAROL_POUNCE_2_133, -1, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 600);
        }
        media.play_id(SOUND_CAROL_POUNCE_154, -1, 1);
    }
    event_1766_13_end: ;
}
void Frames::loop_sound_pounce_13()
{
    event_func_1192();
    event_func_1193();
}
void Frames::event_func_1194()
{
    // event 1584_13
    {
        if (!(group_main_engine_1)) goto event_1584_13_end;
        media.set_channel_volume(32-1, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1584_13_end: ;
}
void Frames::loop_process_call_fadein_music_13()
{
    event_func_1194();
}
void Frames::event_func_1195()
{
    // event 1586_13
    {
        if (!(group_main_engine_1)) goto event_1586_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 1);
        }
    }
    event_1586_13_end: ;
}
void Frames::loop_process_call_lock_music_13()
{
    event_func_1195();
}
void Frames::event_func_1196()
{
    // event 1583_13
    {
        if (!(group_main_engine_1)) goto event_1583_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
    }
    event_1583_13_end: ;
}
void Frames::loop_process_call_unqueue_music_13()
{
    event_func_1196();
}
void Frames::event_func_1197()
{
    // event 93_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_93_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(1, str_player01detectsensortop_43);
    }
    event_93_13_end: ;
}
void Frames::loop_player01detectsensortop_13()
{
    event_func_1197();
}
void Frames::event_func_1198()
{
    // event 877_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_877_13_end;
        FrameObject * single_instance_877_13_0; single_instance_877_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playersensorbottombig_397_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_877_13_0 == NULL)
                    single_instance_877_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_877_13_0))->set_angle(((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_angle(), 0);
        ((Active*)((Active*)single_instance_877_13_0))->set_y_scale(0.2);
    }
    event_877_13_end: ;
}
void Frames::loop_sound_jump_13()
{
    event_func_1198();
    event_func_17();
    event_func_18();
    event_func_883();
    event_func_884();
    event_func_19();
    event_func_20();
}
void Frames::event_func_1199()
{
    // event 134_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_134_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(0, 0);
    }
    event_134_13_end: ;
}
void Frames::event_func_1200()
{
    // event 135_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_135_13_end;
        if (!(((Active*)get_instance(playercharactersensor_383_instances))->overlaps_background())) goto event_135_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(0, 1);
    }
    event_135_13_end: ;
}
void Frames::event_func_1201()
{
    // event 136_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_136_13_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_7)) goto event_136_13_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_136_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(0, 1);
    }
    event_136_13_end: ;
}
void Frames::event_func_1202()
{
    // event 137_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_137_13_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_8)) goto event_137_13_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_137_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1)))) goto event_137_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(0, 1);
    }
    event_137_13_end: ;
}
void Frames::loop_player01detectcharactersensor_13()
{
    event_func_1199();
    event_func_1200();
    event_func_1201();
    event_func_1202();
}
void Frames::event_func_1203()
{
    // event 184_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_184_13_end;
        if (!((((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.get(25)) == (0))) goto event_184_13_end;
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.add(24, 1);
    }
    event_184_13_end: ;
}
void Frames::event_func_1204()
{
    // event 185_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_185_13_end;
        if (!((((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.get(25)) == (0))) goto event_185_13_end;
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.add(24, 1);
    }
    event_185_13_end: ;
}
void Frames::loop_player01detectangle_13()
{
    event_func_1203();
    event_func_1204();
}
void Frames::event_func_1205()
{
    // event 71_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_71_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(1, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(2, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(5, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(6, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01allsensors_44);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)/math_helper/11.25);
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_71_13_end: ;
}
void Frames::loop_player01allsensors_13()
{
    event_func_1205();
}
void Frames::event_func_1206()
{
    // event 72_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_72_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01detectsensormain_45);
    }
    event_72_13_end: ;
}
void Frames::loop_player01detectsensormain_13()
{
    event_func_1206();
}
void Frames::event_func_1207()
{
    // event 1549_13
    {
        if (!(group_main_engine_1)) goto event_1549_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_invincibility_ogg_46, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1549_13_end: ;
}
void Frames::loop_play_music_0_13()
{
    event_func_1207();
}
void Frames::event_func_1208()
{
    // event 1550_13
    {
        if (!(group_main_engine_1)) goto event_1550_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_speedup_ogg_47, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1550_13_end: ;
}
void Frames::loop_play_music_1_13()
{
    event_func_1208();
}
void Frames::event_func_1209()
{
    // event 1551_13
    {
        if (!(group_main_engine_1)) goto event_1551_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_1up_ogg_48, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1551_13_end: ;
}
void Frames::loop_play_music_2_13()
{
    event_func_1209();
}
void Frames::event_func_1210()
{
    // event 1552_13
    {
        if (!(group_main_engine_1)) goto event_1552_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_clear_ogg_49, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1552_13_end: ;
}
void Frames::loop_play_music_3_13()
{
    event_func_1210();
}
void Frames::event_func_1211()
{
    // event 1553_13
    {
        if (!(group_main_engine_1)) goto event_1553_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_midboss_ogg_50, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1553_13_end: ;
}
void Frames::loop_play_music_4_13()
{
    event_func_1211();
}
void Frames::event_func_1212()
{
    // event 1554_13
    {
        if (!(group_main_engine_1)) goto event_1554_13_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) < (47))) goto event_1554_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_secret_ogg_51, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1554_13_end: ;
}
void Frames::event_func_1213()
{
    // event 1555_13
    {
        if (!(group_main_engine_1)) goto event_1555_13_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) >= (47))) goto event_1555_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_schmup_ogg_52, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1555_13_end: ;
}
void Frames::loop_play_music_5_13()
{
    event_func_1212();
    event_func_1213();
}
