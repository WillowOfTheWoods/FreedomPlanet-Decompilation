#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_714()
{
    // event 16_4
    {
        if (!(group_demo_mode_1)) goto event_16_4_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_16_4_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_16_4_end: ;
}
void Frames::on_frame_5_start_events()
{
    event_func_706();
    event_func_707();
    event_func_708();
    event_func_709();
    event_func_710();
    event_func_711();
    event_func_712();
    event_func_713();
    event_func_714();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_5_init()
{
    index = 4;
    width = 644;
    height = 244;
    virtual_width = 644;
    virtual_height = 244;
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
    static ObjectList* qualifier_1_instances[] = {&return_111_instances, &charname1_142_instances, NULL};
    qualifier_1.set(2, &qualifier_1_instances[0]);
    static ObjectList* qualifier_5_instances[] = {&char5_135_instances, &char4_136_instances, &char3_137_instances, &char2_138_instances, &char1_141_instances, NULL};
    qualifier_5.set(5, &qualifier_5_instances[0]);
    add_background_object(create_separatormasterobjects2_12(-192, -24), 1);
    add_background_object(create_quickbackdrop_131(160, 0), 1);
    add_background_object(create_checkerpattern_132(240, 0), 1);
    add_object(create_characterslot_133(392, 112), 1);
    add_object(create_characterslot_133(344, 112), 1);
    add_object(create_characterslot_133(296, 112), 1);
    add_object(create_characterslot_133(248, 112), 1);
    add_object(create_characterslot_133(200, 112), 1);
    add_object(create_active3_134(308, 59), 1);
    add_object(create_char5_135(391, 112), 1);
    add_object(create_char4_136(295, 112), 1);
    add_object(create_char3_137(247, 112), 1);
    add_object(create_char2_138(343, 112), 1);
    add_object(create_playerinput_19(-176, 0), 1);
    add_object(create_masterinput_20(-152, 0), 1);
    add_object(create_inputsp1_21(-128, 0), 1);
    add_object(create_globalinputdata_22(-104, 0), 1);
    add_object(create_ringsparkle_139(-73, 167), 1);
    add_object(create_crystalcursor_140(195, 277), 1);
    add_object(create_return_111(327, 183), 1);
    add_object(create_char1_141(199, 112), 1);
    add_object(create_charname1_142(192, 303), 1);
    add_object(create_colorbox1_143(208, 368), 1);
    add_object(create_colorbox3_144(304, 368), 1);
    add_object(create_colorbox2_145(256, 368), 1);
    add_object(create_colorbox1_143(208, 360), 1);
    add_object(create_colorbox1_143(208, 352), 1);
    add_object(create_colorbox1_143(208, 344), 1);
    add_object(create_colorbox1_143(208, 336), 1);
    add_object(create_colorbox2_145(256, 360), 1);
    add_object(create_colorbox2_145(256, 352), 1);
    add_object(create_colorbox2_145(256, 344), 1);
    add_object(create_colorbox2_145(256, 336), 1);
    add_object(create_colorbox3_144(304, 360), 1);
    add_object(create_colorbox3_144(304, 352), 1);
    add_object(create_colorbox3_144(304, 344), 1);
    add_object(create_colorbox3_144(304, 336), 1);
    add_object(create_mapdata_30(-144, 56), 1);
    add_object(create_savedata_28(-48, 40), 1);
    add_object(create_windowcontrol_27(-144, 24), 1);
    add_object(create_mapdata2_32(-144, 64), 1);
    add_object(create_recorddata_34(-48, 0), 1);
    add_background_object(create_backgroundsystembox_146(0, 0), 2);
    add_background_object(create_backdrop_147(0, 200), 2);
    add_background_object(create_backdrop_147(176, 200), 2);
    add_background_object(create_backdrop_147(352, 200), 2);
    add_background_object(create_backdrop_147(528, 200), 2);
    add_background_object(create_backdrop_147(0, -24), 2);
    add_background_object(create_backdrop_147(176, -24), 2);
    add_background_object(create_backdrop_147(352, -24), 2);
    add_background_object(create_backdrop_147(528, -24), 2);
    add_object(create_helpmessage_148(112, 216), 2);
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
    not_always_48_4 = loop_count;
    not_always_49_4 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    not_always_99_0 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_fade_in_1 = true;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_demo_mode_1 = false;
    group_sound_events_carol_1 = false;
    not_always_53_4 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    not_always_46_4 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    once_condition_63_0 = false;
    not_always_47_4 = loop_count;
    not_always_101_0 = loop_count;
    group_debug_mode_1 = false;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_27_4 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    group_select_1 = false;
    not_always_65_0 = loop_count;
    not_always_25_4 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_9_4 = loop_count;
    not_always_45_4 = loop_count;
    not_always_26_4 = loop_count;
    not_always_140_0 = loop_count;
}
void Frames::loop_game_reset_5()
{
    event_func_659();
    event_func_660();
}
void Frames::test_collisions_5()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_715()
{
    // event 6_5
    {
        // group: Backgrounds
        if (((Active*)get_instance(stagename_213_instances))->test_directions(1)) goto event_6_5_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->alterables->values.get(2)-(((SystemBox*)*it)->alterables->values.get(1)%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(4)+50);
        }
    }
    event_6_5_end: ;
}
void Frames::event_func_716()
{
    // event 7_5
    {
        // group: Backgrounds
        if (!(((Active*)get_instance(stagename_213_instances))->test_directions(1))) goto event_7_5_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->alterables->values.get(2)-(((SystemBox*)*it)->alterables->values.get(1)%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(4)-((Active*)get_instance(stagename_213_instances))->get_frame()*48);
            ((SystemBox*)*it)->alterables->values.add(1, 1-((SystemBox*)*it)->alterables->values.get(3));
        }
    }
    event_7_5_end: ;
}
void Frames::event_func_717()
{
    // event 8_5
    {
        // group: Backgrounds
        if (!(((Active*)get_instance(stagename_213_instances))->test_directions(1))) goto event_8_5_end;
        ((SystemBox*)get_instance(bg14layer1_195_instances))->set_global_position(208, ((SystemBox*)get_instance(bg14layer1_195_instances))->get_y());
        ((SystemBox*)get_instance(bg13layer1_199_instances))->set_global_position(88-((((SystemBox*)get_instance(bg13layer1_199_instances))->alterables->values.get(0)/math_helper/8)%math_helper%4)*512, ((SystemBox*)get_instance(bg13layer1_199_instances))->get_y());
        ((SystemBox*)get_instance(bg13layer1_199_instances))->alterables->values.set(0, (((SystemBox*)get_instance(bg13layer1_199_instances))->alterables->values.get(0)+1)%math_helper%32);
        ((SystemBox*)get_instance(bg13layer2_200_instances))->set_global_position(208, ((SystemBox*)get_instance(bg13layer2_200_instances))->get_y());
    }
    event_8_5_end: ;
}
void Frames::event_func_718()
{
    // event 20_5
    {
        if (!(group_fade_in_1)) goto event_20_5_end;
        if (!((fadein_149_instances.size()) == (0))) goto event_20_5_end;
            group_fade_in_1 = false;
    
        if (!group_stage_selection_1) {
            group_stage_selection_1 = true;
        }
    }
    event_20_5_end: ;
}
void Frames::event_func_719()
{
    // event 21_5
    {
        if (!(group_fade_in_1)) goto event_21_5_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 24)) > (0))) goto event_21_5_end;
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
    }
    event_21_5_end: ;
}
void Frames::event_func_720()
{
    // event 22_5
    {
        if (!(group_fade_in_1)) goto event_22_5_end;
        fadein_149_instances.clear_selection();
        for (ObjectIterator it(fadein_149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (1))) { it.deselect(); continue; }
        }
        if (!fadein_149_instances.has_selection()) goto event_22_5_end;
        if (not_always_22_5 > loop_count) {
            not_always_22_5 = loop_count + 2;
            goto event_22_5_end;
        }
        not_always_22_5 = loop_count + 2;
        backgroundsystembox2_60_instances.clear_selection();
        for (ObjectIterator it(backgroundsystembox2_60_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_22_5_end: ;
}
void Frames::event_func_721()
{
    // event 23_5
    {
        if (!(group_fade_in_1)) goto event_23_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) <= (0))) goto event_23_5_end;
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(8);
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_23_5_end: ;
}
void Frames::event_func_722()
{
    // event 24_5
    {
        if (!(group_fade_in_1)) goto event_24_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) > (0))) goto event_24_5_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(0);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_24_5_end: ;
}
void Frames::event_func_723()
{
    // event 25_5
    {
        if (!(group_fade_in_1)) goto event_25_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_25_5_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(false);
        ((Active*)get_instance(active11_211_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
        ((Active*)get_instance(recordback_204_instances))->set_visible(false);
    }
    event_25_5_end: ;
}
void Frames::event_func_724()
{
    // event 27_5
    {
        ((Active*)get_instance(stagename_213_instances))->set_x(((Active*)get_instance(stagename_213_instances))->alterables->values.get(21));
        ((Active*)get_instance(stagename_213_instances))->set_y(((Active*)get_instance(stagename_213_instances))->alterables->values.get(22));
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(21));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(22));
        }
        ((SystemBox*)get_instance(checkerpattern_132_instances))->set_global_position(((SystemBox*)get_instance(checkerpattern_132_instances))->get_x(), 0-((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0));
        ((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.set(0, (((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0)+0.5)%math_helper%64);
    }
    event_27_5_end: ;
}
void Frames::event_func_725()
{
    // event 29_5
    bool or_result_29_5 = false;
    bool or_temp_result_29_5_0 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (1))) goto or_event_29_5_0_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_29_5_0_end;
        or_result_29_5 = true;
        or_temp_result_29_5_0 = true;
    }
    or_event_29_5_0_end: ;
    stageicon1_212_instances.clear_saved_selection();
    if (or_temp_result_29_5_0) {
        stageicon1_212_instances.save_selection();
    }
    // event 29_5
    bool or_temp_result_29_5_1 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (4))) goto or_event_29_5_1_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_29_5_1_end;
        or_result_29_5 = true;
        or_temp_result_29_5_1 = true;
        or_event_29_5_1_end: ;
        if (or_temp_result_29_5_1) {
            stageicon1_212_instances.save_selection();
        }
        if (!or_result_29_5) goto or_final_or_event_29_5_1_end;
        stageicon1_212_instances.empty_selection();
        if (or_temp_result_29_5_0 || or_temp_result_29_5_1) {
            stageicon1_212_instances.restore_selection();
        }
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    or_final_or_event_29_5_1_end: ;
}
void Frames::event_func_726()
{
    // event 30_5
    bool or_result_30_5 = false;
    bool or_temp_result_30_5_0 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (2))) goto or_event_30_5_0_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_30_5_0_end;
        or_result_30_5 = true;
        or_temp_result_30_5_0 = true;
    }
    or_event_30_5_0_end: ;
    stageicon1_212_instances.clear_saved_selection();
    if (or_temp_result_30_5_0) {
        stageicon1_212_instances.save_selection();
    }
    // event 30_5
    bool or_temp_result_30_5_1 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (4))) goto or_event_30_5_1_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_30_5_1_end;
        or_result_30_5 = true;
        or_temp_result_30_5_1 = true;
        or_event_30_5_1_end: ;
        if (or_temp_result_30_5_1) {
            stageicon1_212_instances.save_selection();
        }
        if (!or_result_30_5) goto or_final_or_event_30_5_1_end;
        stageicon1_212_instances.empty_selection();
        if (or_temp_result_30_5_0 || or_temp_result_30_5_1) {
            stageicon1_212_instances.restore_selection();
        }
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 8);
        }
    }
    or_final_or_event_30_5_1_end: ;
}
void Frames::event_func_727()
{
    // event 31_5
    bool or_result_31_5 = false;
    bool or_temp_result_31_5_0 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (2))) goto or_event_31_5_0_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_31_5_0_end;
        or_result_31_5 = true;
        or_temp_result_31_5_0 = true;
    }
    or_event_31_5_0_end: ;
    stageicon1_212_instances.clear_saved_selection();
    if (or_temp_result_31_5_0) {
        stageicon1_212_instances.save_selection();
    }
    // event 31_5
    bool or_temp_result_31_5_1 = false;
    {
        // group: Setup stage IDs
        if (!((global_values->get(1)) == (4))) goto or_event_31_5_1_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_31_5_1_end;
        or_result_31_5 = true;
        or_temp_result_31_5_1 = true;
        or_event_31_5_1_end: ;
        if (or_temp_result_31_5_1) {
            stageicon1_212_instances.save_selection();
        }
        if (!or_result_31_5) goto or_final_or_event_31_5_1_end;
        stageicon1_212_instances.empty_selection();
        if (or_temp_result_31_5_0 || or_temp_result_31_5_1) {
            stageicon1_212_instances.restore_selection();
        }
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 6);
        }
    }
    or_final_or_event_31_5_1_end: ;
}
void Frames::event_func_728()
{
    // event 32_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (9))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_32_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 9);
        }
    }
    event_32_5_end: ;
}
void Frames::event_func_729()
{
    // event 33_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (10))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_33_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 10);
        }
    }
    event_33_5_end: ;
}
void Frames::event_func_730()
{
    // event 34_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (11))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_34_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 11);
        }
    }
    event_34_5_end: ;
}
void Frames::event_func_731()
{
    // event 35_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (12))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_35_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 12);
        }
    }
    event_35_5_end: ;
}
void Frames::event_func_732()
{
    // event 36_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (13))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_36_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 13);
        }
    }
    event_36_5_end: ;
}
void Frames::event_func_733()
{
    // event 37_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (14))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_37_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 14);
        }
    }
    event_37_5_end: ;
}
void Frames::event_func_734()
{
    // event 38_5
    bool or_result_38_5 = false;
    bool or_temp_result_38_5_0 = false;
    {
        // group: Limit Access
        if (!((global_values->get(1)) == (1))) goto or_event_38_5_0_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (5))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_38_5_0_end;
        or_result_38_5 = true;
        or_temp_result_38_5_0 = true;
    }
    or_event_38_5_0_end: ;
    stageicon1_212_instances.clear_saved_selection();
    if (or_temp_result_38_5_0) {
        stageicon1_212_instances.save_selection();
    }
    // event 38_5
    bool or_temp_result_38_5_1 = false;
    {
        // group: Limit Access
        if (!((global_values->get(1)) == (1))) goto or_event_38_5_1_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_38_5_1_end;
        or_result_38_5 = true;
        or_temp_result_38_5_1 = true;
    }
    or_event_38_5_1_end: ;
    if (or_temp_result_38_5_1) {
        stageicon1_212_instances.save_selection();
    }
    // event 38_5
    bool or_temp_result_38_5_2 = false;
    {
        // group: Limit Access
        if (!((global_values->get(1)) == (5))) goto or_event_38_5_2_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (99))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_38_5_2_end;
        or_result_38_5 = true;
        or_temp_result_38_5_2 = true;
    }
    or_event_38_5_2_end: ;
    if (or_temp_result_38_5_2) {
        stageicon1_212_instances.save_selection();
    }
    // event 38_5
    bool or_temp_result_38_5_3 = false;
    {
        // group: Limit Access
        if (!((global_values->get(1)) == (1))) goto or_event_38_5_3_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (14))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto or_event_38_5_3_end;
        or_result_38_5 = true;
        or_temp_result_38_5_3 = true;
        or_event_38_5_3_end: ;
        if (or_temp_result_38_5_3) {
            stageicon1_212_instances.save_selection();
        }
        if (!or_result_38_5) goto or_final_or_event_38_5_3_end;
        stageicon1_212_instances.empty_selection();
        if (or_temp_result_38_5_0 || or_temp_result_38_5_1 || or_temp_result_38_5_2 || or_temp_result_38_5_3) {
            stageicon1_212_instances.restore_selection();
        }
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    or_final_or_event_38_5_3_end: ;
}
void Frames::event_func_735()
{
    // event 39_5
    {
        // group: Limit Access
        if (!((global_values->get(1)) < (2))) goto event_39_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 40+global_values->get(1))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (14))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_39_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    event_39_5_end: ;
}
void Frames::event_func_736()
{
    // event 40_5
    {
        // group: Limit Access
        if (!((global_values->get(1)) >= (2))) goto event_40_5_end;
        if (!((global_values->get(1)) <= (3))) goto event_40_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 42)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (14))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_40_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    event_40_5_end: ;
}
void Frames::event_func_737()
{
    // event 41_5
    {
        // group: Limit Access
        if (!((global_values->get(1)) > (3))) goto event_41_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 39+global_values->get(1))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (14))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_41_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    event_41_5_end: ;
}
void Frames::event_func_738()
{
    // event 42_5
    {
        // group: Setup stage IDs
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_42_5_end: ;
}
void Frames::event_func_739()
{
    // event 43_5
    {
        if (!(group_demo_mode_1)) goto event_43_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_43_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_43_5_end: ;
}
void Frames::event_func_740()
{
    // event 44_5
    {
        if (!(group_demo_mode_1)) goto event_44_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_44_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_44_5_end: ;
}
void Frames::event_func_741()
{
    // event 45_5
    {
        if (!(group_demo_mode_1)) goto event_45_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_45_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_45_5_end: ;
}
void Frames::event_func_742()
{
    // event 46_5
    {
        if (!(group_demo_mode_1)) goto event_46_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (1))) goto event_46_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 1);
    }
    event_46_5_end: ;
}
void Frames::event_func_743()
{
    // event 47_5
    {
        if (!(group_demo_mode_1)) goto event_47_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_47_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_47_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 1);
    }
    event_47_5_end: ;
}
void Frames::event_func_744()
{
    // event 48_5
    {
        if (!(group_demo_mode_1)) goto event_48_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_48_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_48_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 2);
    }
    event_48_5_end: ;
}
void Frames::event_func_745()
{
    // event 49_5
    {
        if (!(group_demo_mode_1)) goto event_49_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_49_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_49_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_49_5_end: ;
}
void Frames::event_func_746()
{
    // event 50_5
    {
        // group: Load Records
        if (!((global_values->get(1)) < (3))) goto event_50_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(4, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+global_values->get(1), ((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)*2+1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(5, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+global_values->get(1), ((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)*2+2));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
    }
    event_50_5_end: ;
}
void Frames::event_func_747()
{
    // event 51_5
    {
        // group: Load Records
        if (!((global_values->get(1)) == (3))) goto event_51_5_end;
        global_values->set(1, 2);
    }
    event_51_5_end: ;
}
void Frames::event_func_748()
{
    // event 52_5
    {
        // group: Load Records
        if (!((global_values->get(1)) > (3))) goto event_52_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(4, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2+global_values->get(1), ((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)*2+1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(5, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2+global_values->get(1), ((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)*2+2));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
    }
    event_52_5_end: ;
}
void Frames::event_func_749()
{
    // event 53_5
    {
        if (!(group_stage_selection_1)) goto event_53_5_end;
        if (not_always_53_5 > loop_count) {
            not_always_53_5 = loop_count + 2;
            goto event_53_5_end;
        }
        not_always_53_5 = loop_count + 2;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_53_5_end: ;
}
void Frames::event_func_750()
{
    // event 54_5
    {
        if (!(group_stage_selection_1)) goto event_54_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(24));
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(1, ((Active*)get_instance(stagename_213_instances))->alterables->values.get(23));
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(2, ((Active*)get_instance(stagename_213_instances))->alterables->values.get(24));
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*7+((Active*)*it)->alterables->values.get(1))*0.125);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*7+((Active*)*it)->alterables->values.get(2))*0.125);
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(21, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(21)*7+((Active*)get_instance(stagename_213_instances))->alterables->values.get(1))*0.125);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(22, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(22)*7+((Active*)get_instance(stagename_213_instances))->alterables->values.get(2))*0.125);
        ((Counter*)get_instance(crystalrecord_217_instances))->set(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(5));
        ((Counter*)get_instance(timerecordmin_219_instances))->set(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)/math_helper/60000);
        ((Counter*)get_instance(timerecordsec_218_instances))->set((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)/math_helper/1000)%math_helper%60);
        ((Counter*)get_instance(timerecordmil_216_instances))->set((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)/math_helper/10)%math_helper%100);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
    }
    event_54_5_end: ;
}
void Frames::event_func_751()
{
    // event 55_5
    {
        if (!(group_stage_selection_1)) goto event_55_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_55_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_y(72);
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(8);
    }
    event_55_5_end: ;
}
void Frames::event_func_752()
{
    // event 56_5
    {
        if (!(group_stage_selection_1)) goto event_56_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_56_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_56_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_x(((Active*)get_single(qualifier_3, default_active_instance))->get_x()+24);
        ((Active*)get_instance(crystalcursor_75_instances))->set_y(((Active*)get_single(qualifier_3, default_active_instance))->get_y());
    }
    event_56_5_end: ;
}
void Frames::event_func_753()
{
    // event 57_5
    {
        if (!(group_stage_selection_1)) goto event_57_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_57_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_57_5_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_57_5_end: ;
}
void Frames::event_func_754()
{
    // event 58_5
    {
        if (!(group_stage_selection_1)) goto event_58_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) <= (0))) goto event_58_5_end;
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(8);
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(true);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_58_5_end: ;
}
void Frames::event_func_755()
{
    // event 59_5
    {
        if (!(group_stage_selection_1)) goto event_59_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) > (0))) goto event_59_5_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(0);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(true);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_59_5_end: ;
}
void Frames::event_func_756()
{
    // event 60_5
    {
        if (!(group_stage_selection_1)) goto event_60_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_60_5_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(false);
        ((Active*)get_instance(active11_211_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
        ((Active*)get_instance(recordback_204_instances))->set_visible(false);
    }
    event_60_5_end: ;
}
void Frames::event_func_757()
{
    // event 61_5
    bool or_result_61_5 = false;
    bool or_temp_result_61_5_0 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_61_5_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (12))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_61_5_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3, ((Active*)get_single(crystalcursor_75_instances, default_active_instance))->alterables->values.get(4))) != (0))) goto or_event_61_5_0_end;
        or_result_61_5 = true;
        or_temp_result_61_5_0 = true;
    }
    or_event_61_5_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    if (or_temp_result_61_5_0) {
        crystalcursor_75_instances.save_selection();
    }
    // event 61_5
    bool or_temp_result_61_5_1 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_61_5_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (12))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_61_5_1_end;
        or_result_61_5 = true;
        or_temp_result_61_5_1 = true;
        or_event_61_5_1_end: ;
        if (or_temp_result_61_5_1) {
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_61_5) goto or_final_or_event_61_5_1_end;
        crystalcursor_75_instances.empty_selection();
        if (or_temp_result_61_5_0 || or_temp_result_61_5_1) {
            crystalcursor_75_instances.restore_selection();
        }
        stagename_213_instances.clear_selection();
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_61_5_1_end: ;
}
void Frames::event_func_758()
{
    // event 62_5
    {
        if (!(group_stage_selection_1)) goto event_62_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_62_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (12))) goto event_62_5_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3, ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4))) == (0))) goto event_62_5_end;
        ((Active*)get_instance(stagename_213_instances))->set_direction(1);
    }
    event_62_5_end: ;
}
void Frames::event_func_759()
{
    // event 63_5
    {
        if (!(group_stage_selection_1)) goto event_63_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_63_5_end;
        if (!(((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE)) goto event_63_5_end;
        {
            FrameObject * parent = ((Active*)get_instance(mahjong_207_instances));
            if (parent == NULL) goto pos_end_63_5_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_63_5_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
    }
    event_63_5_end: ;
}
void Frames::event_func_760()
{
    // event 64_5
    {
        if (!(group_stage_selection_1)) goto event_64_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_64_5_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_64_5_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_64_5_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
    }
    event_64_5_end: ;
}
void Frames::event_func_761()
{
    // event 65_5
    {
        if (!(group_stage_selection_1)) goto event_65_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_65_5_end;
        if (!(((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE)) goto event_65_5_end;
        if (not_always_65_5 > loop_count) {
            not_always_65_5 = loop_count + 2;
            goto event_65_5_end;
        }
        not_always_65_5 = loop_count + 2;
        ((Active*)get_instance(mahjong_207_instances))->alterables->values.set(25, 4);
    }
    event_65_5_end: ;
}
void Frames::event_func_762()
{
    // event 66_5
    {
        if (!(group_stage_selection_1)) goto event_66_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_66_5_end;
        if (not_always_66_5 > loop_count) {
            not_always_66_5 = loop_count + 2;
            goto event_66_5_end;
        }
        not_always_66_5 = loop_count + 2;
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_66_5_end: ;
}
void Frames::event_func_763()
{
    // event 67_5
    {
        if (!(group_stage_selection_1)) goto event_67_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_67_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_67_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (0))) goto event_67_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(3, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 30);
        }
    }
    event_67_5_end: ;
}
void Frames::event_func_764()
{
    // event 68_5
    {
        if (!(group_stage_selection_1)) goto event_68_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_68_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_68_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (12))) goto event_68_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(3, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(24, 30);
        }
    }
    event_68_5_end: ;
}
void Frames::event_func_765()
{
    // event 69_5
    {
        if (!(group_stage_selection_1)) goto event_69_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_69_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_69_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(19, 5);
    }
    event_69_5_end: ;
}
void Frames::event_func_766()
{
    // event 70_5
    {
        if (!(group_stage_selection_1)) goto event_70_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_70_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_70_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_70_5_end: ;
}
void Frames::event_func_767()
{
    // event 71_5
    {
        if (!(group_stage_selection_1)) goto event_71_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (0))) goto event_71_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_71_5_end;
        if (((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE) goto event_71_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
    }
    event_71_5_end: ;
}
void Frames::event_func_768()
{
    // event 72_5
    {
        if (!(group_stage_selection_1)) goto event_72_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(19)) > (0))) goto event_72_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(19, 1);
    }
    event_72_5_end: ;
}
void Frames::event_func_769()
{
    // event 73_5
    {
        if (!(group_stage_selection_1)) goto event_73_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_73_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_73_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(19)) <= (0))) goto event_73_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_73_5_end: ;
}
void Frames::event_func_770()
{
    // event 74_5
    {
        if (!(group_stage_selection_1)) goto event_74_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_74_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_74_5_end;
        if (!(((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE)) goto event_74_5_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
    }
    event_74_5_end: ;
}
void Frames::event_func_771()
{
    // event 75_5
    {
        if (!(group_stage_selection_1)) goto event_75_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_75_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_75_5_end;
        if (((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE) goto event_75_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
    }
    event_75_5_end: ;
}
void Frames::event_func_772()
{
    // event 76_5
    bool or_result_76_5 = false;
    bool or_temp_result_76_5_0 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_76_5_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_76_5_0_end;
        or_result_76_5 = true;
        or_temp_result_76_5_0 = true;
    }
    or_event_76_5_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_76_5_0) {
        playerinput_19_instances.save_selection();
    }
    // event 76_5
    bool or_temp_result_76_5_1 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_76_5_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_76_5_1_end;
        or_result_76_5 = true;
        or_temp_result_76_5_1 = true;
        or_event_76_5_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_76_5_1) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_76_5) goto or_final_or_event_76_5_1_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_76_5_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_76_5_1) {
            inputsp1_21_instances.restore_selection();
        }
        stagename_213_instances.clear_selection();
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_76_5_1_end: ;
}
void Frames::event_func_773()
{
    // event 77_5
    {
        if (!(group_stage_selection_1)) goto event_77_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) <= (12))) goto event_77_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (99))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_77_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_77_5_end: ;
}
void Frames::event_func_774()
{
    // event 78_5
    bool or_result_78_5 = false;
    bool or_temp_result_78_5_0 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_78_5_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (12))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_78_5_0_end;
        if (!((global_values->get(1)) < (3))) goto or_event_78_5_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3+global_values->get(1), ((Active*)get_single(crystalcursor_75_instances, default_active_instance))->alterables->values.get(4))) != (0))) goto or_event_78_5_0_end;
        or_result_78_5 = true;
        or_temp_result_78_5_0 = true;
    }
    or_event_78_5_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    if (or_temp_result_78_5_0) {
        crystalcursor_75_instances.save_selection();
    }
    // event 78_5
    bool or_temp_result_78_5_1 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_78_5_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (12))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_78_5_1_end;
        if (!((global_values->get(1)) > (3))) goto or_event_78_5_1_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2+global_values->get(1), ((Active*)get_single(crystalcursor_75_instances, default_active_instance))->alterables->values.get(4))) != (0))) goto or_event_78_5_1_end;
        or_result_78_5 = true;
        or_temp_result_78_5_1 = true;
        or_event_78_5_1_end: ;
        if (or_temp_result_78_5_1) {
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_78_5) goto or_final_or_event_78_5_1_end;
        crystalcursor_75_instances.empty_selection();
        if (or_temp_result_78_5_0 || or_temp_result_78_5_1) {
            crystalcursor_75_instances.restore_selection();
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_78_5_1_end: ;
}
void Frames::event_func_775()
{
    // event 79_5
    {
        if (!(group_stage_selection_1)) goto event_79_5_end;
        if (!(((Active*)get_instance(stagename_213_instances))->alterables->flags.is_on(0))) goto event_79_5_end;
        if (((Active*)get_instance(stagename_213_instances))->test_directions(2)) goto event_79_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_79_5_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_79_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_79_5_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_stage_selection_1 = false;
    
        if (!group_confirm_selection_1) {
            group_confirm_selection_1 = true;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
        ((Active*)get_instance(stagename_213_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(return_111_instances))->set_x(frame_right()+80);
        ((Active*)get_instance(return_111_instances))->set_direction(8);
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(active11_211_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(mahjong_207_instances))->set_visible(false);
        ((Active*)get_instance(stageselect_215_instances))->set_visible(false);
    }
    event_79_5_end: ;
}
void Frames::event_func_776()
{
    // event 80_5
    {
        if (!(group_stage_selection_1)) goto event_80_5_end;
        if (!(((Active*)get_instance(stagename_213_instances))->alterables->flags.is_on(0))) goto event_80_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_80_5_end;
        ((Active*)get_instance(stagename_213_instances))->alterables->flags.disable(0);
    }
    event_80_5_end: ;
}
void Frames::event_func_777()
{
    // event 81_5
    {
        if (!(group_stage_selection_1)) goto event_81_5_end;
        if (!(((Active*)get_instance(stagename_213_instances))->alterables->flags.is_on(0))) goto event_81_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_81_5_end;
        if (!(((Active*)get_instance(mahjong_207_instances))->flags & VISIBLE)) goto event_81_5_end;
            group_stage_selection_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
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
    event_81_5_end: ;
}
void Frames::event_func_778()
{
    // event 82_5
    bool or_result_82_5 = false;
    bool or_temp_result_82_5_0 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_82_5_0_end;
        stagename_213_instances.clear_selection();
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!stagename_213_instances.has_selection()) goto or_event_82_5_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_82_5_0_end;
        or_result_82_5 = true;
        or_temp_result_82_5_0 = true;
    }
    or_event_82_5_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    stagename_213_instances.clear_saved_selection();
    if (or_temp_result_82_5_0) {
        crystalcursor_75_instances.save_selection();
        stagename_213_instances.save_selection();
    }
    // event 82_5
    bool or_temp_result_82_5_1 = false;
    {
        if (!(group_stage_selection_1)) goto or_event_82_5_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_82_5_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_82_5_1_end;
        or_result_82_5 = true;
        or_temp_result_82_5_1 = true;
        or_event_82_5_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_82_5_1) {
            playerinput_19_instances.save_selection();
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_82_5) goto or_final_or_event_82_5_1_end;
        stagename_213_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_82_5_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_82_5_0 || or_temp_result_82_5_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_82_5_0) {
            stagename_213_instances.restore_selection();
        }
            group_stage_selection_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
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
    or_final_or_event_82_5_1_end: ;
}
void Frames::event_func_779()
{
    // event 83_5
    {
        if (!(group_stage_selection_1)) goto event_83_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_83_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) != (2))) goto event_83_5_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(19, 5);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
    }
    event_83_5_end: ;
}
void Frames::event_func_780()
{
    // event 84_5
    {
        if (!(group_confirm_selection_1)) goto event_84_5_end;
        if (not_always_84_5 > loop_count) {
            not_always_84_5 = loop_count + 2;
            goto event_84_5_end;
        }
        not_always_84_5 = loop_count + 2;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(false);
        ((Active*)get_instance(active11_211_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
        ((Active*)get_instance(recordback_204_instances))->set_visible(false);
    }
    event_84_5_end: ;
}
void Frames::event_func_781()
{
    // event 85_5
    {
        if (!(group_confirm_selection_1)) goto event_85_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_85_5_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 184);
            ((Active*)*it)->alterables->values.set(2, 16);
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(1, 336);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(2, 32);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(21, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(21)*9+((Active*)get_instance(stagename_213_instances))->alterables->values.get(1))*0.1);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(22, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(22)*9+((Active*)get_instance(stagename_213_instances))->alterables->values.get(2))*0.1);
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*9+((Active*)*it)->alterables->values.get(1))*0.1);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*9+((Active*)*it)->alterables->values.get(2))*0.1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_85_5_end: ;
}
void Frames::event_func_782()
{
    // event 86_5
    {
        if (!(group_confirm_selection_1)) goto event_86_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_86_5_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -80);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*9+((Active*)*it)->alterables->values.get(1))*0.1);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*9+((Active*)*it)->alterables->values.get(2))*0.1);
        }
    }
    event_86_5_end: ;
}
void Frames::event_func_783()
{
    // event 87_5
    {
        if (!(group_confirm_selection_1)) goto event_87_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->get_y()) <= (((Active*)get_instance(stagename_213_instances))->alterables->values.get(2)+5))) goto event_87_5_end;
        ((Active*)get_instance(start_208_instances))->set_x(get_max(((Active*)get_instance(start_208_instances))->get_x()-20, 320));
    }
    event_87_5_end: ;
}
void Frames::event_func_784()
{
    // event 88_5
    {
        if (!(group_confirm_selection_1)) goto event_88_5_end;
        if (!((((Active*)get_instance(start_208_instances))->get_x()) <= (320))) goto event_88_5_end;
        ((Active*)get_instance(yes_115_instances))->set_x(get_max(((Active*)get_instance(yes_115_instances))->get_x()-20, 320));
    }
    event_88_5_end: ;
}
void Frames::event_func_785()
{
    // event 89_5
    {
        if (!(group_confirm_selection_1)) goto event_89_5_end;
        if (!((((Active*)get_instance(yes_115_instances))->get_x()) <= (320))) goto event_89_5_end;
        ((Active*)get_instance(return_111_instances))->set_x(get_max(((Active*)get_instance(return_111_instances))->get_x()-20, 320));
    }
    event_89_5_end: ;
}
void Frames::event_func_786()
{
    // event 90_5
    {
        if (!(group_confirm_selection_1)) goto event_90_5_end;
        if (!((((Active*)get_instance(return_111_instances))->get_x()) <= (320))) goto event_90_5_end;
            group_confirm_selection_1 = false;
    
        if (!group_start_1) {
            group_start_1 = true;
        }
        {
            FrameObject * parent = ((Active*)get_instance(yes_115_instances));
            if (parent == NULL) goto pos_end_90_5_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_90_5_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(23, 0);
    }
    event_90_5_end: ;
}
void Frames::event_func_787()
{
    // event 91_5
    {
        if (!(group_start_1)) goto event_91_5_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_91_5_end: ;
}
void Frames::event_func_788()
{
    // event 92_5
    bool or_result_92_5 = false;
    bool or_temp_result_92_5_0 = false;
    {
        if (!(group_start_1)) goto or_event_92_5_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_92_5_0_end;
        or_result_92_5 = true;
        or_temp_result_92_5_0 = true;
    }
    or_event_92_5_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_92_5_0) {
        playerinput_19_instances.save_selection();
    }
    // event 92_5
    bool or_temp_result_92_5_1 = false;
    {
        if (!(group_start_1)) goto or_event_92_5_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_92_5_1_end;
        or_result_92_5 = true;
        or_temp_result_92_5_1 = true;
        or_event_92_5_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_92_5_1) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_92_5) goto or_final_or_event_92_5_1_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_92_5_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_92_5_1) {
            inputsp1_21_instances.restore_selection();
        }
        stagename_213_instances.clear_selection();
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_92_5_1_end: ;
}
void Frames::event_func_789()
{
    // event 93_5
    {
        if (!(group_start_1)) goto event_93_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_93_5_end;
        {
            FrameObject * parent = ((Active*)get_instance(yes_115_instances));
            if (parent == NULL) goto pos_end_93_5_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_93_5_0: ;
        }
    }
    event_93_5_end: ;
}
void Frames::event_func_790()
{
    // event 94_5
    {
        if (!(group_start_1)) goto event_94_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_94_5_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_94_5_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_94_5_0: ;
        }
    }
    event_94_5_end: ;
}
void Frames::event_func_791()
{
    // event 95_5
    {
        if (!(group_start_1)) goto event_95_5_end;
        if (!(((Active*)get_instance(stagename_213_instances))->alterables->flags.is_on(0))) goto event_95_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_95_5_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
            group_start_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 9);
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
    event_95_5_end: ;
}
void Frames::event_func_792()
{
    // event 96_5
    {
        if (!(group_start_1)) goto event_96_5_end;
        if (!(((Active*)get_instance(stagename_213_instances))->alterables->flags.is_on(0))) goto event_96_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_96_5_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 24)) > (0))) goto event_96_5_end;
        ((Active*)get_instance(mahjong_207_instances))->set_visible(true);
    }
    event_96_5_end: ;
}
void Frames::event_func_793()
{
    // event 97_5
    bool or_result_97_5 = false;
    bool or_temp_result_97_5_0 = false;
    {
        if (!(group_start_1)) goto or_event_97_5_0_end;
        stagename_213_instances.clear_selection();
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!stagename_213_instances.has_selection()) goto or_event_97_5_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_97_5_0_end;
        or_result_97_5 = true;
        or_temp_result_97_5_0 = true;
    }
    or_event_97_5_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    stagename_213_instances.clear_saved_selection();
    if (or_temp_result_97_5_0) {
        crystalcursor_75_instances.save_selection();
        stagename_213_instances.save_selection();
    }
    // event 97_5
    bool or_temp_result_97_5_1 = false;
    {
        if (!(group_start_1)) goto or_event_97_5_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_97_5_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_97_5_1_end;
        or_result_97_5 = true;
        or_temp_result_97_5_1 = true;
        or_event_97_5_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_97_5_1) {
            playerinput_19_instances.save_selection();
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_97_5) goto or_final_or_event_97_5_1_end;
        stagename_213_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_97_5_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_97_5_0 || or_temp_result_97_5_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_97_5_0) {
            stagename_213_instances.restore_selection();
        }
            group_start_1 = false;
    
        if (!group_return_to_stage_selection_1) {
            group_return_to_stage_selection_1 = true;
        }
        start_208_instances.clear_selection();
        for (ObjectIterator it(start_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_right()+80);
        }
        yes_115_instances.clear_selection();
        for (ObjectIterator it(yes_115_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_right()+80);
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(stagename_213_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        stageselect_215_instances.clear_selection();
        for (ObjectIterator it(stageselect_215_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(479);
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_97_5_1_end: ;
}
void Frames::event_func_794()
{
    // event 98_5
    {
        if (!(group_start_1)) goto event_98_5_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_98_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (2))) goto event_98_5_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(yes_115_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_98_5_end: ;
}
void Frames::event_func_795()
{
    // event 99_5
    bool or_result_99_5 = false;
    bool or_temp_result_99_5_0 = false;
    {
        if (!(group_start_1)) goto or_event_99_5_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_99_5_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_99_5_0_end;
        or_result_99_5 = true;
        or_temp_result_99_5_0 = true;
    }
    or_event_99_5_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    crystalcursor_75_instances.clear_saved_selection();
    if (or_temp_result_99_5_0) {
        playerinput_19_instances.save_selection();
        crystalcursor_75_instances.save_selection();
    }
    // event 99_5
    bool or_temp_result_99_5_1 = false;
    {
        if (!(group_start_1)) goto or_event_99_5_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_99_5_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_99_5_1_end;
        or_result_99_5 = true;
        or_temp_result_99_5_1 = true;
        or_event_99_5_1_end: ;
        if (or_temp_result_99_5_1) {
            playerinput_19_instances.save_selection();
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_99_5) goto or_final_or_event_99_5_1_end;
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_99_5_0 || or_temp_result_99_5_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_99_5_0 || or_temp_result_99_5_1) {
            crystalcursor_75_instances.restore_selection();
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 4);
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, 7);
        }
    }
    or_final_or_event_99_5_1_end: ;
}
void Frames::event_func_796()
{
    // event 100_5
    {
        if (!(group_return_to_stage_selection_1)) goto event_100_5_end;
        if (not_always_100_5 > loop_count) {
            not_always_100_5 = loop_count + 2;
            goto event_100_5_end;
        }
        not_always_100_5 = loop_count + 2;
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(true);
        ((Active*)get_instance(return_111_instances))->set_x(479);
        ((Active*)get_instance(return_111_instances))->set_direction(0);
    }
    event_100_5_end: ;
}
void Frames::event_func_797()
{
    // event 101_5
    {
        if (!(group_return_to_stage_selection_1)) goto event_101_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) <= (0))) goto event_101_5_end;
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(8);
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_101_5_end: ;
}
void Frames::event_func_798()
{
    // event 102_5
    {
        if (!(group_return_to_stage_selection_1)) goto event_102_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(4)) > (0))) goto event_102_5_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(0);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(true);
        ((Counter*)get_instance(crystalrecord_217_instances))->set_visible(true);
        ((Active*)get_instance(active11_211_instances))->set_visible(true);
        ((Active*)get_instance(recordback_204_instances))->set_visible(true);
    }
    event_102_5_end: ;
}
void Frames::event_func_799()
{
    // event 103_5
    {
        if (!(group_return_to_stage_selection_1)) goto event_103_5_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(24));
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(1, ((Active*)get_instance(stagename_213_instances))->alterables->values.get(23));
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(2, ((Active*)get_instance(stagename_213_instances))->alterables->values.get(24));
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*7+((Active*)*it)->alterables->values.get(1))*0.125);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*7+((Active*)*it)->alterables->values.get(2))*0.125);
        }
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(21, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(21)*7+((Active*)get_instance(stagename_213_instances))->alterables->values.get(1))*0.125);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(22, (((Active*)get_instance(stagename_213_instances))->alterables->values.get(22)*7+((Active*)get_instance(stagename_213_instances))->alterables->values.get(2))*0.125);
    }
    event_103_5_end: ;
}
void Frames::event_func_800()
{
    // event 104_5
    {
        if (!(group_return_to_stage_selection_1)) goto event_104_5_end;
        if (!((((Active*)get_instance(return_111_instances))->get_x()) <= (((Active*)get_instance(return_111_instances))->alterables->values.get(0)))) goto event_104_5_end;
            group_return_to_stage_selection_1 = false;
    
        if (!group_stage_selection_1) {
            group_stage_selection_1 = true;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->set_y(-80);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(23, 0);
    }
    event_104_5_end: ;
}
void Frames::event_func_801()
{
    // event 105_5
    {
        if (!(group_update_records_1)) goto event_105_5_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)*3)+1)) != (0))) goto event_105_5_end;
        if (not_always_105_5 > loop_count) {
            not_always_105_5 = loop_count + 2;
            goto event_105_5_end;
        }
        not_always_105_5 = loop_count + 2;
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(0);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(true);
    }
    event_105_5_end: ;
}
void Frames::event_func_802()
{
    // event 106_5
    {
        if (!(group_update_records_1)) goto event_106_5_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(3, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)*3)+1)) == (0))) goto event_106_5_end;
        ((Active*)get_instance(recordlabel_210_instances))->set_direction(8);
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
    }
    event_106_5_end: ;
}
void Frames::event_func_803()
{
    // event 108_5
    {
        if (!(group_transition_1)) goto event_108_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_108_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_108_5_end;
        next_frame = 12 + 0;    
    
    }
    event_108_5_end: ;
}
void Frames::event_func_804()
{
    // event 109_5
    {
        if (!(group_transition_1)) goto event_109_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_109_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_109_5_end;
        next_frame = 6 + 0;    
    
    }
    event_109_5_end: ;
}
void Frames::event_func_805()
{
    // event 110_5
    {
        if (!(group_transition_1)) goto event_110_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_110_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_110_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (0))) goto event_110_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 16 + 0;    
    
    }
    event_110_5_end: ;
}
void Frames::event_func_806()
{
    // event 111_5
    {
        if (!(group_transition_1)) goto event_111_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_111_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_111_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (1))) goto event_111_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 20 + 0;    
    
    }
    event_111_5_end: ;
}
void Frames::event_func_807()
{
    // event 112_5
    {
        if (!(group_transition_1)) goto event_112_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_112_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_112_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (2))) goto event_112_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 24 + 0;    
    
    }
    event_112_5_end: ;
}
void Frames::event_func_808()
{
    // event 113_5
    {
        if (!(group_transition_1)) goto event_113_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_113_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_113_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (3))) goto event_113_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 29 + 0;    
    
    }
    event_113_5_end: ;
}
void Frames::event_func_809()
{
    // event 114_5
    {
        if (!(group_transition_1)) goto event_114_5_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_114_5_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_114_5_end;
        if (!((((Active*)get_instance(stagename_213_instances))->alterables->values.get(0)) == (4))) goto event_114_5_end;
        global_values->set(4, 0);
        global_values->set(0, 0);
        next_frame = 35 + 0;    
    
    }
    event_114_5_end: ;
}
