#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_621()
{
    // event 217_3
    {
        if (!(group_controls_1 && group_controls_controls_zoom_out_1)) goto event_217_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) > (736))) goto event_217_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_x(get_max(((Active*)get_instance(scrolldot_6_instances))->get_x()-30, 736));
        set_display_center(((Active*)get_instance(scrolldot_6_instances))->get_x(), -1);
    }
    event_217_3_end: ;
}
void Frames::event_func_622()
{
    // event 218_3
    {
        if (!(group_controls_1 && group_controls_controls_zoom_out_1)) goto event_218_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) <= (736))) goto event_218_3_end;
            group_controls_controls_zoom_out_1 = false;
    
            group_controls_1 = false;
    
        if (!group_options_1) {
            group_options_1 = true;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
    }
    event_218_3_end: ;
}
void Frames::event_func_623()
{
    // event 219_3
    {
        if (!(group_controls_1)) goto event_219_3_end;
        if (not_always_219_3 > loop_count) {
            not_always_219_3 = loop_count + 2;
            goto event_219_3_end;
        }
        not_always_219_3 = loop_count + 2;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
    }
    event_219_3_end: ;
}
void Frames::event_func_624()
{
    // event 220_3
    {
        if (!(group_controls_1)) goto event_220_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_220_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(type_79_instances));
            if (parent == NULL) goto pos_end_220_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_220_3_0: ;
        }
    }
    event_220_3_end: ;
}
void Frames::event_func_625()
{
    // event 221_3
    {
        if (!(group_controls_1)) goto event_221_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_221_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (9))) goto event_221_3_end;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-1))) { it.deselect(); continue; }
        }
        if (!controlbox_69_instances.has_selection()) goto event_221_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_x(((Active*)get_single(controlbox_69_instances, default_active_instance))->get_x()-20);
        ((Active*)get_instance(crystalcursor_75_instances))->set_y(((Active*)get_single(controlbox_69_instances, default_active_instance))->get_y());
    }
    event_221_3_end: ;
}
void Frames::event_func_626()
{
    // event 222_3
    {
        if (!(group_controls_1)) goto event_222_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_222_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(okay2_78_instances));
            if (parent == NULL) goto pos_end_222_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_222_3_0: ;
        }
    }
    event_222_3_end: ;
}
void Frames::event_func_627()
{
    // event 223_3
    {
        if (!(group_controls_1)) goto event_223_3_end;
        if (!((global_values->get(7)) == (1))) goto event_223_3_end;
        if (is_joystick_attached(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) goto event_223_3_end;
        if (not_always_223_3 > loop_count) {
            not_always_223_3 = loop_count + 2;
            goto event_223_3_end;
        }
        not_always_223_3 = loop_count + 2;
        ((Active*)get_instance(warningbox_95_instances))->set_visible(true);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->set_text(str_no_gamepad_was_detected_33+newline_character+str_a_compatible_gamepad_must_be_connected_to_port_1_34);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->set_visible(true);
    }
    event_223_3_end: ;
}
void Frames::event_func_628()
{
    // event 224_3
    bool or_result_224_3 = false;
    bool or_temp_result_224_3_0 = false;
    {
        if (!(group_controls_1)) goto or_event_224_3_0_end;
        if (!((global_values->get(7)) == (1))) goto or_event_224_3_0_end;
        if (!(is_joystick_attached(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0)))) goto or_event_224_3_0_end;
        if (not_always_224_3 > loop_count) {
            not_always_224_3 = loop_count + 2;
            goto or_event_224_3_0_end;
        }
        not_always_224_3 = loop_count + 2;
        or_result_224_3 = true;
        or_temp_result_224_3_0 = true;
    }
    or_event_224_3_0_end: ;
    // event 224_3
    bool or_temp_result_224_3_1 = false;
    {
        if (!(group_controls_1)) goto or_event_224_3_1_end;
        if (!((global_values->get(7)) != (1))) goto or_event_224_3_1_end;
        if (not_always_224_3 > loop_count) {
            not_always_224_3 = loop_count + 2;
            goto or_event_224_3_1_end;
        }
        not_always_224_3 = loop_count + 2;
        or_result_224_3 = true;
        or_temp_result_224_3_1 = true;
        or_event_224_3_1_end: ;
        if (!or_result_224_3) goto or_final_or_event_224_3_1_end;
        warningbox_95_instances.clear_selection();
        for (ObjectIterator it(warningbox_95_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        warningmessage_118_instances.clear_selection();
        for (ObjectIterator it(warningmessage_118_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_visible(false);
        }
    }
    or_final_or_event_224_3_1_end: ;
}
void Frames::event_func_629()
{
    // event 225_3
    {
        if (!(group_transition_1)) goto event_225_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_225_3_end;
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_layer(4-1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(fade_54_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_225_3_end: ;
}
void Frames::event_func_630()
{
    // event 226_3
    {
        if (!(group_transition_1)) goto event_226_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_226_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_226_3_end;
        if (!((global_values->get(0)) == (0))) goto event_226_3_end;
        media.set_channel_volume(32-1, 100);
        next_frame = 6 + 0;    
    
    }
    event_226_3_end: ;
}
void Frames::event_func_631()
{
    // event 227_3
    {
        if (!(group_transition_1)) goto event_227_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_227_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_227_3_end;
        media.set_channel_volume(32-1, 100);
        next_frame = 10 + 0;    
    
    }
    event_227_3_end: ;
}
void Frames::event_func_632()
{
    // event 228_3
    {
        if (!(group_transition_1)) goto event_228_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_228_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_228_3_end;
        has_quit = true;
    }
    event_228_3_end: ;
}
void Frames::event_func_633()
{
    // event 229_3
    {
        if (!(group_transition_1)) goto event_229_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_229_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_229_3_end;
        if (!((global_values->get(0)) != (0))) goto event_229_3_end;
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./file" + number_to_string(global_values->get(10)) + ".sav");
        if (!group_transition_adventure_transitions_1) {
            group_transition_adventure_transitions_1 = true;
        }
    }
    event_229_3_end: ;
}
void Frames::event_func_634()
{
    // event 230_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_230_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) == (-1))) goto event_230_3_end;
        if (not_always_230_3 > loop_count) {
            not_always_230_3 = loop_count + 2;
            goto event_230_3_end;
        }
        not_always_230_3 = loop_count + 2;
        ((ArrayObject*)get_instance(savedata_28_instances))->clear();
    }
    event_230_3_end: ;
}
void Frames::event_func_635()
{
    // event 231_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_231_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) > (-1))) goto event_231_3_end;
        if (not_always_231_3 > loop_count) {
            not_always_231_3 = loop_count + 2;
            goto event_231_3_end;
        }
        not_always_231_3 = loop_count + 2;
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./file" + number_to_string(global_values->get(10)) + ".sav");
        ((ArrayObject*)get_instance(savedata_28_instances))->load(get_app_drive()+get_app_dir()+str_file_14+number_to_string(global_values->get(10))+str_sav_15);
    }
    event_231_3_end: ;
}
void Frames::event_func_636()
{
    // event 232_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_232_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) > (-1))) goto event_232_3_end;
        if (not_always_232_3 > loop_count) {
            not_always_232_3 = loop_count + 2;
            goto event_232_3_end;
        }
        not_always_232_3 = loop_count + 2;
        set_lives(get_max(global_values->get(8), ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 1)));
        set_score(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 4));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 13));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_232_3_end: ;
}
void Frames::event_func_637()
{
    // event 233_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_233_3_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 9)) > (0))) goto event_233_3_end;
        if (not_always_233_3 > loop_count) {
            not_always_233_3 = loop_count + 2;
            goto event_233_3_end;
        }
        not_always_233_3 = loop_count + 2;
        ((Counter*)get_instance(guicrystal_121_instances))->set(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 9));
    }
    event_233_3_end: ;
}
void Frames::event_func_638()
{
    // event 234_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_234_3_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 9)) <= (0))) goto event_234_3_end;
        if (not_always_234_3 > loop_count) {
            not_always_234_3 = loop_count + 2;
            goto event_234_3_end;
        }
        not_always_234_3 = loop_count + 2;
        ((Counter*)get_instance(guicrystal_121_instances))->set(999);
    }
    event_234_3_end: ;
}
void Frames::event_func_639()
{
    // event 235_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_235_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) == (-1))) goto event_235_3_end;
        if (!((global_values->get(0)) != (-1))) goto event_235_3_end;
        media.set_channel_volume(32-1, 100);
        next_frame = 82 + 0;    
    
        global_values->set(4, 2);
        global_values->set(0, 2);
    }
    event_235_3_end: ;
}
void Frames::event_func_640()
{
    // event 236_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_236_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) == (-1))) goto event_236_3_end;
        if (!((global_values->get(0)) == (-1))) goto event_236_3_end;
        media.set_channel_volume(32-1, 100);
        next_frame = 6 + 0;    
    
        global_values->set(4, 0);
        global_values->set(0, 1);
    }
    event_236_3_end: ;
}
void Frames::event_func_641()
{
    // event 237_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_237_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) > (-1))) goto event_237_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) < (13))) goto event_237_3_end;
        media.set_channel_volume(32-1, 100);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, string_to_number(((Text*)get_instance(stageidlist_127_instances))->get_paragraph(((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4))));
        next_frame = 8 + 0;    
    
    }
    event_237_3_end: ;
}
void Frames::event_func_642()
{
    // event 238_3
    {
        if (!(group_transition_1 && group_transition_adventure_transitions_1)) goto event_238_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) > (-1))) goto event_238_3_end;
        if (!((((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4)) >= (13))) goto event_238_3_end;
        media.set_channel_volume(32-1, 100);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, string_to_number(((Text*)get_instance(stageidlist_127_instances))->get_paragraph(((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(4))));
        next_frame = 11 + 0;    
    
    }
    event_238_3_end: ;
}
void Frames::event_func_643()
{
    // event 241_3
    {
        ((Active*)get_instance(iconkeyboard_85_instances))->set_direction(global_values->get(7));
        ((Active*)get_instance(iconjoypad_86_instances))->set_direction(global_values->get(7));
        ((Counter*)get_instance(controllersensitivity_90_instances))->set(100-((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0));
    }
    event_241_3_end: ;
}
void Frames::event_func_644()
{
    // event 242_3
    {
        if (!((((Counter*)get_instance(screenres_88_instances))->value) == (1))) goto event_242_3_end;
        if (!((global_values->get(24)) != (1))) goto event_242_3_end;
        global_values->set(24, 1);
    WindowControl::set_width(global_values->get(16)+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        manager.set_window_scale(1.0);
        manager.set_window(false);
    WindowControl::set_placement(4);
        ((Counter*)get_instance(screenres_88_instances))->set_visible(true);
        ((Active*)get_instance(active_93_instances))->force_frame(0);
    }
    event_242_3_end: ;
}
void Frames::event_func_645()
{
    // event 243_3
    {
        if (!((((Counter*)get_instance(screenres_88_instances))->value) == (2))) goto event_243_3_end;
        if (!((global_values->get(24)) != (2))) goto event_243_3_end;
        global_values->set(24, 2);
    WindowControl::set_width(global_values->get(16)*2+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*2+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        manager.set_window_scale(2.0);
        manager.set_window(false);
    WindowControl::set_placement(4);
        ((Active*)get_instance(active_93_instances))->force_frame(0);
        ((Counter*)get_instance(screenres_88_instances))->set_visible(true);
    }
    event_243_3_end: ;
}
void Frames::event_func_646()
{
    // event 244_3
    {
        if (!((((Counter*)get_instance(screenres_88_instances))->value) == (3))) goto event_244_3_end;
        if (!((global_values->get(24)) != (3))) goto event_244_3_end;
        global_values->set(24, 3);
    WindowControl::set_width(global_values->get(16)*3+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*3+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        manager.set_window_scale(3.0);
        manager.set_window(false);
    WindowControl::set_placement(4);
        ((Active*)get_instance(active_93_instances))->force_frame(0);
        ((Counter*)get_instance(screenres_88_instances))->set_visible(true);
    }
    event_244_3_end: ;
}
void Frames::event_func_647()
{
    // event 245_3
    {
        if (!((((Counter*)get_instance(screenres_88_instances))->value) == (4))) goto event_245_3_end;
        if (!((global_values->get(24)) != (4))) goto event_245_3_end;
        manager.set_window_scale(1.0);
        manager.set_window(true);
        ((Counter*)get_instance(screenres_88_instances))->set_visible(false);
        ((Active*)get_instance(active_93_instances))->force_frame(1);
        global_values->set(24, 4);
    }
    event_245_3_end: ;
}
void Frames::event_func_648()
{
    // event 427_3
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_427_3_end;
        if (!(is_key_pressed_once(SDLK_1))) goto event_427_3_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(0, 100);
    }
    event_427_3_end: ;
}
void Frames::event_func_649()
{
    // event 428_3
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_428_3_end;
        if (!(is_key_pressed_once(SDLK_2))) goto event_428_3_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)+1)%math_helper%6);
    }
    event_428_3_end: ;
}
void Frames::event_func_650()
{
    // event 429_3
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_429_3_end;
        if (!(is_key_pressed_once(SDLK_3))) goto event_429_3_end;
        ((Counter*)get_instance(guirings_122_instances))->add(99);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
    }
    event_429_3_end: ;
}
void Frames::event_func_651()
{
    // event 430_3
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_430_3_end;
        if (!(is_key_pressed_once(SDLK_4))) goto event_430_3_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 600);
    }
    event_430_3_end: ;
}
void Frames::event_func_652()
{
    // event 432_3
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_432_3_end;
        if (!(is_key_pressed_once(SDLK_9))) goto event_432_3_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
    }
    event_432_3_end: ;
}
void Frames::event_func_653()
{
    // event 436_3
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F5))) goto event_436_3_end;
        manager.set_window_scale(1.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 1);
    WindowControl::set_placement(4);
        ((Counter*)get_instance(screenres_88_instances))->set(1);
    }
    event_436_3_end: ;
}
void Frames::event_func_654()
{
    // event 437_3
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F6))) goto event_437_3_end;
        manager.set_window_scale(2.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*2+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*2+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 2);
    WindowControl::set_placement(4);
        ((Counter*)get_instance(screenres_88_instances))->set(2);
    }
    event_437_3_end: ;
}
void Frames::event_func_655()
{
    // event 438_3
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F7))) goto event_438_3_end;
        manager.set_window_scale(3.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*3+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*3+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 3);
    WindowControl::set_placement(4);
        ((Counter*)get_instance(screenres_88_instances))->set(3);
    }
    event_438_3_end: ;
}
void Frames::event_func_656()
{
    // event 439_3
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F8))) goto event_439_3_end;
        manager.set_window_scale(1.0);
        manager.set_window(true);
        global_values->set(24, 4);
        ((Counter*)get_instance(screenres_88_instances))->set(4);
    }
    event_439_3_end: ;
}
void Frames::handle_frame_4_events()
{
    test_collisions_3();
    event_func_568();
    event_func_569();
    event_func_572();
    event_func_591();
    if (!group_load_keys_load_keys_keyboard_1) goto group_load_keys_load_keys_keyboard_1_end;
    group_load_keys_load_keys_keyboard_1_end: ;
    if (!group_load_keys_load_keys_controller_1) goto group_load_keys_load_keys_controller_1_end;
    group_load_keys_load_keys_controller_1_end: ;
    if (!group_fade_in_1) goto group_fade_in_1_end;
    event_func_446();
    event_func_447();
    group_fade_in_1_end: ;
    event_func_448();
    event_func_449();
    event_func_450();
    event_func_451();
    event_func_452();
    event_func_453();
    event_func_454();
    if (!group_select_an_option_1) goto group_select_an_option_1_end;
    event_func_455();
    event_func_456();
    event_func_457();
    event_func_458();
    event_func_459();
    event_func_460();
    event_func_461();
    event_func_462();
    event_func_463();
    event_func_464();
    event_func_465();
    event_func_466();
    event_func_467();
    group_select_an_option_1_end: ;
    if (!group_adventure_1) goto group_adventure_1_end;
    if (!group_adventure_adventure_zoom_in_1) goto group_adventure_adventure_zoom_in_1_end;
    event_func_468();
    event_func_469();
    group_adventure_adventure_zoom_in_1_end: ;
    if (!group_adventure_adventure_select_options_1) goto group_adventure_adventure_select_options_1_end;
    event_func_470();
    event_func_471();
    event_func_472();
    event_func_473();
    event_func_474();
    event_func_475();
    event_func_476();
    event_func_477();
    event_func_478();
    event_func_479();
    event_func_480();
    group_adventure_adventure_select_options_1_end: ;
    if (!group_adventure_adventure_file_options_1) goto group_adventure_adventure_file_options_1_end;
    event_func_481();
    event_func_482();
    event_func_483();
    event_func_484();
    event_func_485();
    event_func_486();
    event_func_487();
    event_func_488();
    event_func_489();
    event_func_490();
    event_func_491();
    event_func_492();
    event_func_493();
    event_func_494();
    event_func_495();
    event_func_496();
    event_func_497();
    event_func_498();
    event_func_499();
    group_adventure_adventure_file_options_1_end: ;
    if (!group_adventure_adventure_zoom_out_1) goto group_adventure_adventure_zoom_out_1_end;
    event_func_500();
    event_func_501();
    group_adventure_adventure_zoom_out_1_end: ;
    if (!group_adventure_adventure_menu_display_1) goto group_adventure_adventure_menu_display_1_end;
    event_func_502();
    event_func_503();
    event_func_504();
    event_func_505();
    event_func_506();
    event_func_507();
    event_func_508();
    event_func_509();
    event_func_510();
    event_func_511();
    event_func_512();
    event_func_513();
    event_func_514();
    event_func_515();
    event_func_516();
    event_func_517();
    event_func_518();
    event_func_519();
    group_adventure_adventure_menu_display_1_end: ;
    group_adventure_1_end: ;
    if (!group_clear_files_that_are_flagged_for_deletion_1) goto group_clear_files_that_are_flagged_for_deletion_1_end;
    event_func_520();
    event_func_521();
    group_clear_files_that_are_flagged_for_deletion_1_end: ;
    if (!group_options_1) goto group_options_1_end;
    if (!group_options_options_zoom_in_1) goto group_options_options_zoom_in_1_end;
    event_func_522();
    event_func_523();
    group_options_options_zoom_in_1_end: ;
    if (!group_options_options_select_options_1) goto group_options_options_select_options_1_end;
    event_func_524();
    event_func_525();
    event_func_526();
    event_func_527();
    event_func_528();
    event_func_529();
    event_func_530();
    event_func_531();
    event_func_532();
    event_func_533();
    event_func_534();
    event_func_535();
    event_func_536();
    event_func_537();
    event_func_538();
    event_func_539();
    event_func_540();
    event_func_541();
    event_func_542();
    event_func_543();
    event_func_544();
    event_func_545();
    event_func_546();
    event_func_547();
    event_func_548();
    event_func_549();
    event_func_550();
    event_func_551();
    event_func_552();
    event_func_553();
    event_func_554();
    group_options_options_select_options_1_end: ;
    if (!group_options_options_zoom_out_1) goto group_options_options_zoom_out_1_end;
    event_func_555();
    event_func_556();
    group_options_options_zoom_out_1_end: ;
    if (!group_options_options_menu_selection_1) goto group_options_options_menu_selection_1_end;
    event_func_557();
    event_func_558();
    event_func_559();
    event_func_560();
    event_func_561();
    event_func_562();
    event_func_563();
    group_options_options_menu_selection_1_end: ;
    group_options_1_end: ;
    if (!group_controls_1) goto group_controls_1_end;
    event_func_564();
    if (!group_controls_controls_zoom_in_1) goto group_controls_controls_zoom_in_1_end;
    event_func_565();
    event_func_566();
    group_controls_controls_zoom_in_1_end: ;
    if (!group_controls_controls_select_options_1) goto group_controls_controls_select_options_1_end;
    event_func_567();
    event_func_570();
    event_func_571();
    event_func_573();
    event_func_574();
    event_func_575();
    event_func_576();
    event_func_577();
    event_func_578();
    event_func_579();
    event_func_580();
    group_controls_controls_select_options_1_end: ;
    if (!group_controls_controls_assign_key_1) goto group_controls_controls_assign_key_1_end;
    event_func_581();
    event_func_582();
    event_func_583();
    event_func_584();
    event_func_585();
    event_func_586();
    group_controls_controls_assign_key_1_end: ;
    if (!group_controls_controls_assign_controller_1) goto group_controls_controls_assign_controller_1_end;
    event_func_587();
    event_func_588();
    event_func_589();
    event_func_590();
    if (!group_controls_controls_assign_controller_p1_waiting_for_input_1) goto group_controls_controls_assign_controller_p1_waiting_for_input_1_end;
    event_func_592();
    event_func_593();
    event_func_594();
    event_func_595();
    event_func_596();
    event_func_597();
    event_func_598();
    event_func_599();
    event_func_600();
    event_func_601();
    event_func_602();
    if (!group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1) goto group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1_end;
    event_func_603();
    event_func_604();
    event_func_605();
    event_func_606();
    event_func_607();
    event_func_608();
    event_func_609();
    event_func_610();
    event_func_611();
    event_func_612();
    event_func_613();
    event_func_614();
    event_func_615();
    event_func_616();
    event_func_617();
    event_func_618();
    event_func_619();
    event_func_620();
    group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1_end: ;
    group_controls_controls_assign_controller_p1_waiting_for_input_1_end: ;
    group_controls_controls_assign_controller_1_end: ;
    if (!group_controls_controls_zoom_out_1) goto group_controls_controls_zoom_out_1_end;
    event_func_621();
    event_func_622();
    group_controls_controls_zoom_out_1_end: ;
    event_func_623();
    event_func_624();
    event_func_625();
    event_func_626();
    event_func_627();
    event_func_628();
    group_controls_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_630();
    event_func_631();
    event_func_632();
    event_func_633();
    if (!group_transition_adventure_transitions_1) goto group_transition_adventure_transitions_1_end;
    event_func_634();
    event_func_635();
    event_func_636();
    event_func_637();
    event_func_638();
    event_func_639();
    event_func_640();
    event_func_641();
    event_func_642();
    group_transition_adventure_transitions_1_end: ;
    group_transition_1_end: ;
    event_func_404();
    event_func_405();
    event_func_643();
    event_func_644();
    event_func_645();
    event_func_646();
    event_func_647();
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
    event_func_653();
    event_func_654();
    event_func_655();
    event_func_656();
}
void Frames::handle_frame_4_pre_events()
{
}
void Frames::event_func_657()
{
    // event 1_3
    {
        if (!((global_values->get(0)) == (-17))) goto event_1_3_end;
        global_values->set(0, 0);
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1_3_end: ;
}
void Frames::event_func_658()
{
    // event 2_3
    {
        {
            loop_create_particles_running = true;
            int times = int(30);
            loop_create_particles_index = 0;
            while (loop_create_particles_index < times) {
                loop_create_particles_3();
                if (!loop_create_particles_running) break;
                loop_create_particles_index++;
            }
        }
        ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->alterables->values.set(0, ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_y());
        ((Counter*)get_instance(livessetting_87_instances))->set(global_values->get(8));
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        set_display_center(((Active*)get_instance(scrolldot_6_instances))->get_x(), -1);
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
        }
        controlbox_69_instances.clear_selection();
        spread_value(controlbox_69_instances, 0, 0);
        controlboxname_68_instances.clear_selection();
        spread_value(controlboxname_68_instances, 0, 0);
        ((Counter*)get_instance(screenres_88_instances))->set(global_values->get(24));
        ((Counter*)get_instance(musicvolume_89_instances))->set(global_values->get(25));
        filesaveslot_108_instances.clear_selection();
        spread_value(filesaveslot_108_instances, 7, 0);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./records.dat");
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_menu2_ogg_35, 32-1, 0);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->load(str_data_font_bmp_7);
        buttonname_92_instances.clear_selection();
        for (ObjectIterator it(buttonname_92_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->load(str_data_font_bmp_7);
        }
        ((TextBlitter*)get_instance(filemessage_117_instances))->load(str_data_font_bmp_7);
        ((Active*)get_instance(start_113_instances))->alterables->values.set(1, ((Active*)get_instance(start_113_instances))->get_y());
        ((Counter*)get_instance(guicrystal_121_instances))->set(0);
        global_values->set(31, 0);
    }
    event_2_3_end: ;
}
void Frames::event_func_659()
{
    // event 3_3
    {
        global_values->set(13, 0);
        global_values->set(3, 0);
        global_values->set(0, 0);
        global_values->set(14, 0);
        global_values->set(15, 0);
        set_score(0);
        set_lives(global_values->get(8));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        ((Counter*)get_instance(guicrystal_121_instances))->set(999);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        global_values->set(4, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, 0);
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
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, 0);
    }
    event_3_3_end: ;
}
void Frames::event_func_660()
{
    // event 4_3
    {
        // group: Game Reset
        if (!((global_values->get(1)) == (3))) goto event_4_3_end;
        global_values->set(1, 2);
    }
    event_4_3_end: ;
}
void Frames::event_func_661()
{
    // event 5_3
    {
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./control_keyboard.cfg");
        ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->load(get_app_drive()+get_app_dir()+str_keyboard_cfg_12);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./control_gamepad.cfg");
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->load(get_app_drive()+get_app_dir()+str_gamepad_cfg_13);
        ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->set_value(0, 0, 0, 0);
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(get_max(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0), 1), 0, 0, 0);
        {
            loop_load_keys_running = true;
            int times = int(8);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_3();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
    }
    event_5_3_end: ;
}
void Frames::on_frame_4_start_events()
{
    event_func_657();
    event_func_658();
    event_func_659();
    event_func_660();
    event_func_661();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_4_init()
{
    index = 3;
    width = 1440;
    height = 480;
    virtual_width = 1440;
    virtual_height = 480;
    background_color = Color(0, 0, 80);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(4);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.0, 0.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_2_instances[] = {&livessetting_87_instances, &screenres_88_instances, &musicvolume_89_instances, &controllersensitivity_90_instances, &filecurrentstage_97_instances, &fileid_109_instances, NULL};
    qualifier_2.set(6, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&filestageicon_98_instances, NULL};
    qualifier_3.set(1, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&mainoption1_70_instances, &mainoption2_71_instances, &mainoption3_72_instances, &mainoption4_73_instances, &mainoption5_74_instances, &okay_76_instances, &sensitivity_77_instances, &okay2_78_instances, &type_79_instances, &controls_80_instances, &difficulty_81_instances, &screensize_82_instances, &musicvolume_83_instances, &difficulty2_84_instances, &return_111_instances, &copy_112_instances, &start_113_instances, &filetext_114_instances, &yes_115_instances, NULL};
    qualifier_1.set(19, &qualifier_1_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&fileicon_99_instances, NULL};
    qualifier_4.set(1, &qualifier_4_instances[0]);
    add_background_object(create_quickbackdrop2_58(0, 0), 1);
    add_background_object(create_quickbackdrop_59(0, 120), 1);
    add_background_object(create_backgroundsystembox2_60(0, 176), 1);
    add_object(create_star_63(99, 35), 1);
    add_object(create_star_63(235, 51), 1);
    add_object(create_star_63(283, 11), 1);
    add_object(create_star_63(27, 51), 1);
    add_object(create_star_63(219, 83), 1);
    add_object(create_star_63(71, 41), 1);
    add_object(create_star_63(222, 43), 1);
    add_object(create_star_63(306, 66), 1);
    add_background_object(create_backdrop5_64(312, -24), 2);
    add_background_object(create_backdrop4_52(127, 224), 2);
    add_background_object(create_separatormasterobjects2_12(-168, 0), 2);
    add_background_object(create_backdrop6_65(696, 16), 2);
    add_background_object(create_backdrop_66(1088, 40), 2);
    add_background_object(create_fplogo_35(106, 16), 2);
    add_background_object(create_backdrop8_67(872, 120), 2);
    add_background_object(create_backdrop8_67(872, 176), 2);
    add_object(create_controlboxname_68(1104, 180), 2);
    add_object(create_controlboxname_68(1104, 160), 2);
    add_object(create_controlboxname_68(1104, 140), 2);
    add_object(create_controlboxname_68(1104, 120), 2);
    add_object(create_controlboxname_68(1104, 100), 2);
    add_object(create_controlboxname_68(1104, 80), 2);
    add_object(create_controlboxname_68(1104, 60), 2);
    add_object(create_controlboxname_68(1104, 40), 2);
    add_object(create_controlbox_69(1220, 190), 2);
    add_object(create_controlbox_69(1220, 170), 2);
    add_object(create_controlbox_69(1220, 150), 2);
    add_object(create_controlbox_69(1220, 130), 2);
    add_object(create_controlbox_69(1220, 110), 2);
    add_object(create_controlbox_69(1220, 90), 2);
    add_object(create_controlbox_69(1220, 70), 2);
    add_object(create_controlbox_69(1220, 50), 2);
    add_object(create_mainoption1_70(259, 131), 2);
    add_object(create_mainoption2_71(262, 151), 2);
    add_object(create_mainoption3_72(241, 191), 2);
    add_object(create_mainoption4_73(223, 211), 2);
    add_object(create_mainoption5_74(245, 171), 2);
    add_object(create_crystalcursor_75(219, 461), 2);
    add_object(create_okay_76(739, 216), 2);
    add_object(create_sensitivity_77(699, 184), 2);
    add_object(create_okay2_78(1212, 224), 2);
    add_object(create_type_79(1141, 20), 2);
    add_object(create_controls_80(659, 160), 2);
    add_object(create_difficulty_81(659, 72), 2);
    add_object(create_screensize_82(659, 104), 2);
    add_object(create_musicvolume_83(659, 128), 2);
    add_object(create_difficulty2_84(803, 72), 2);
    add_object(create_iconkeyboard_85(1259, 12), 2);
    add_object(create_iconjoypad_86(1323, 12), 2);
    add_object(create_playerinput_19(-152, 24), 2);
    add_object(create_masterinput_20(-128, 24), 2);
    add_object(create_inputsp1_21(-104, 24), 2);
    add_object(create_globalinputdata_22(-80, 24), 2);
    add_object(create_livessetting_87(774, -24), 2);
    add_object(create_screenres_88(870, 112), 2);
    add_object(create_musicvolume_89(874, 136), 2);
    add_object(create_controllersensitivity_90(874, 192), 2);
    add_object(create_scrolldot_6(256, 120), 2);
    add_object(create_buttonname_92(1216, 180), 2);
    add_object(create_buttonname_92(1216, 160), 2);
    add_object(create_buttonname_92(1216, 140), 2);
    add_object(create_buttonname_92(1216, 120), 2);
    add_object(create_buttonname_92(1216, 100), 2);
    add_object(create_buttonname_92(1216, 80), 2);
    add_object(create_buttonname_92(1216, 60), 2);
    add_object(create_buttonname_92(1216, 40), 2);
    add_object(create_active_93(899, 104), 2);
    add_object(create_controlnamelist_94(1104, 40), 2);
    add_object(create_warningbox_95(1105, 41), 2);
    add_object(create_fileback_96(256, 256), 2);
    add_object(create_filecurrentstage_97(46, 528), 2);
    add_object(create_filestageicon_98(152, 280), 2);
    add_object(create_fileicon_99(279, 270), 2);
    add_object(create_filelives_100(308, 277), 2);
    add_object(create_filetimemilli_101(360, 295), 2);
    add_object(create_filedeaths_102(360, 310), 2);
    add_object(create_filecrystals_103(360, 277), 2);
    add_object(create_filelabel_104(208, 271), 2);
    add_object(create_filelabel2_105(212, 284), 2);
    add_object(create_filetimes_106(334, 295), 2);
    add_object(create_filetimem_107(308, 295), 2);
    add_object(create_filesaveslot_108(376, 344), 2);
    add_object(create_filesaveslot_108(256, 344), 2);
    add_object(create_fileid_109(302, 416), 2);
    add_object(create_filesaveslotcharacter_110(256, 344), 2);
    add_object(create_filesaveslotcharacter_110(376, 344), 2);
    add_object(create_filesaveslot_108(496, 344), 2);
    add_object(create_filesaveslotcharacter_110(496, 344), 2);
    add_object(create_filesaveslot_108(616, 344), 2);
    add_object(create_filesaveslotcharacter_110(616, 344), 2);
    add_object(create_filesaveslot_108(736, 344), 2);
    add_object(create_filesaveslotcharacter_110(736, 344), 2);
    add_object(create_filesaveslot_108(856, 344), 2);
    add_object(create_filesaveslotcharacter_110(856, 344), 2);
    add_object(create_filesaveslot_108(976, 344), 2);
    add_object(create_filesaveslotcharacter_110(976, 344), 2);
    add_object(create_filesaveslot_108(1096, 344), 2);
    add_object(create_filesaveslotcharacter_110(1096, 344), 2);
    add_object(create_return_111(271, 455), 2);
    add_object(create_copy_112(575, 423), 2);
    add_object(create_start_113(575, 399), 2);
    add_object(create_filetext_114(271, 407), 2);
    add_object(create_yes_115(397, 536), 2);
    add_object(create_filesaveslotcopy_116(256, 320), 2);
    add_object(create_filemessage_117(144, 264), 2);
    add_object(create_warningmessage_118(1104, 80), 2);
    add_object(create_filesaveslotcharactercopy_119(256, 320), 2);
    add_object(create_copyarrow_120(256, 352), 2);
    add_object(create_sarassteampluginfreedomplanet_26(-88, 128), 2);
    add_object(create_guicrystal_121(-114, 211), 2);
    add_object(create_masterlevel_37(-312, 304), 2);
    add_object(create_guirings_122(-320, 168), 2);
    add_object(create_playerothers_123(-312, 280), 2);
    add_object(create_guienergy_124(-280, 192), 2);
    add_object(create_guilifebasemeter_125(-216, 232), 2);
    add_object(create_filemessagelist_126(-144, 280), 2);
    add_object(create_stageidlist_127(-144, 328), 2);
    add_object(create_controllermusic_128(-288, 280), 2);
    add_object(create_mapdata_30(-120, 80), 2);
    add_object(create_mapdata2_32(-120, 88), 2);
    add_object(create_mapdatatemporary_129(1192, -56), 2);
    add_object(create_mapdatatemporary2_130(1224, -56), 2);
    add_object(create_savedata_28(-120, 128), 2);
    add_object(create_windowcontrol_27(-120, 48), 2);
    add_object(create_recorddata_34(-152, 128), 2);
    add_object(create_fade_54(0, 0), 3);
    loop_load_running = false;
    loop_load_index = 0;
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
    loop_save_array_running = false;
    loop_save_array_index = 0;
    loop_save_input_running = false;
    loop_save_input_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
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
    loop_create_particles_running = false;
    loop_create_particles_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
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
    loop_check_keys_running = false;
    loop_check_keys_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_avatar_running = false;
    loop_avatar_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_load_keys_running = false;
    loop_load_keys_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_delete_running = false;
    loop_delete_index = 0;
    loops = NULL;
    not_always_193_3 = loop_count;
    not_always_189_3 = loop_count;
    not_always_73_3 = loop_count;
    not_always_194_3 = loop_count;
    group_options_options_menu_selection_1 = true;
    group_transition_1 = false;
    not_always_185_3 = loop_count;
    not_always_188_3 = loop_count;
    not_always_195_3 = loop_count;
    not_always_72_3 = loop_count;
    not_always_102_0 = loop_count;
    group_adventure_adventure_file_options_1 = false;
    group_sound_events_lilac_1 = false;
    not_always_121_0 = loop_count;
    not_always_196_3 = loop_count;
    group_controls_1 = false;
    not_always_192_3 = loop_count;
    group_load_keys_load_keys_controller_1 = false;
    group_adventure_adventure_select_options_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_231_3 = loop_count;
    not_always_112_3 = loop_count;
    group_adventure_1 = false;
    not_always_66_0 = loop_count;
    not_always_230_3 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_190_3 = loop_count;
    not_always_95_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_fade_in_1 = true;
    not_always_191_3 = loop_count;
    not_always_219_3 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_233_3 = loop_count;
    not_always_103_0 = loop_count;
    not_always_6_3 = loop_count;
    group_adventure_adventure_zoom_out_1 = false;
    not_always_232_3 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    not_always_7_3 = loop_count;
    group_sound_events_torque_1 = false;
    group_options_options_zoom_in_1 = true;
    group_controls_controls_assign_key_1 = false;
    not_always_101_0 = loop_count;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_mac_controls_1 = false;
    group_options_options_select_options_1 = false;
    group_transition_adventure_transitions_1 = false;
    group_controls_controls_assign_controller_p1_waiting_for_input_1 = false;
    group_select_an_option_1 = false;
    group_controls_controls_select_options_1 = false;
    not_always_234_3 = loop_count;
    group_debug_mode_1 = false;
    once_condition_138_0 = false;
    not_always_160_3 = loop_count;
    not_always_150_3 = loop_count;
    group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1 = true;
    not_always_100_0 = loop_count;
    group_controls_controls_zoom_out_1 = false;
    group_options_1 = false;
    not_always_197_3 = loop_count;
    once_condition_63_0 = false;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_223_3 = loop_count;
    group_adventure_adventure_menu_display_1 = true;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    group_adventure_adventure_zoom_in_1 = true;
    not_always_177_3 = loop_count;
    not_always_114_3 = loop_count;
    not_always_65_0 = loop_count;
    group_controls_controls_zoom_in_1 = true;
    not_always_224_3 = loop_count;
    group_clear_files_that_are_flagged_for_deletion_1 = false;
    group_options_options_zoom_out_1 = false;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    group_load_keys_load_keys_keyboard_1 = false;
    group_controls_controls_assign_controller_1 = false;
    not_always_98_0 = loop_count;
    not_always_10_3 = loop_count;
}
void Frames::test_collisions_4()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_662()
{
    // event 3_4
    {
        ((SystemBox*)get_instance(checkerpattern_132_instances))->set_global_position(((SystemBox*)get_instance(checkerpattern_132_instances))->get_x(), 0-((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0));
        ((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.set(0, (((SystemBox*)get_instance(checkerpattern_132_instances))->alterables->values.get(0)+0.5)%math_helper%64);
        colorbox1_143_instances.clear_selection();
        for (ObjectIterator it(colorbox1_143_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        colorbox2_145_instances.clear_selection();
        for (ObjectIterator it(colorbox2_145_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(char1_141_instances))->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21));
        ((Active*)get_instance(char1_141_instances))->restore_frame();
        ((Active*)get_instance(char3_137_instances))->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22));
        ((Active*)get_instance(char3_137_instances))->restore_frame();
        colorbox3_144_instances.clear_selection();
        for (ObjectIterator it(colorbox3_144_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(char4_136_instances))->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24));
        ((Active*)get_instance(char4_136_instances))->restore_frame();
    }
    event_3_4_end: ;
}
void Frames::event_func_663()
{
    // event 4_4
    {
        if (!(group_fade_in_1)) goto event_4_4_end;
        fadein_149_instances.clear_selection();
        FrameObject * single_instance_4_4_0; single_instance_4_4_0 = pick_random(fadein_149_instances);
        if (single_instance_4_4_0 == NULL) goto event_4_4_end;
        ((Active*)((Active*)single_instance_4_4_0))->destroy();
    }
    event_4_4_end: ;
}
void Frames::event_func_664()
{
    // event 8_4
    {
        if (!(group_fade_in_1)) goto event_8_4_end;
        if (!((fadein_149_instances.size()) == (0))) goto event_8_4_end;
            group_fade_in_1 = false;
    
        if (!group_select_1) {
            group_select_1 = true;
        }
    }
    event_8_4_end: ;
}
void Frames::event_func_665()
{
    // event 9_4
    {
        if (!(group_fade_in_1)) goto event_9_4_end;
        fadein_149_instances.clear_selection();
        for (ObjectIterator it(fadein_149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (1))) { it.deselect(); continue; }
        }
        if (!fadein_149_instances.has_selection()) goto event_9_4_end;
        if (not_always_9_4 > loop_count) {
            not_always_9_4 = loop_count + 2;
            goto event_9_4_end;
        }
        not_always_9_4 = loop_count + 2;
        backgroundsystembox_146_instances.clear_selection();
        for (ObjectIterator it(backgroundsystembox_146_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_9_4_end: ;
}
void Frames::event_func_666()
{
    // event 17_4
    {
        if (!(group_select_1)) goto event_17_4_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
    }
    event_17_4_end: ;
}
void Frames::event_func_667()
{
    // event 18_4
    {
        if (!(group_select_1)) goto event_18_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_18_4_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_18_4_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        ((Active*)get_instance(charname1_142_instances))->force_frame(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0));
        {
            FrameObject * parent = ((Active*)get_single(characterslot_133_instances));
            if (parent == NULL) goto pos_end_18_4_0;
            ((Active*)get_instance(charname1_142_instances))->set_global_position(parent->get_x() + 24, parent->get_y() + -16);
            pos_end_18_4_0: ;
        }
        ((Active*)get_instance(charname1_142_instances))->alterables->values.set(23, 0);
    }
    event_18_4_end: ;
}
void Frames::event_func_668()
{
    // event 19_4
    {
        if (!(group_select_1)) goto event_19_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (1))) goto event_19_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
    }
    event_19_4_end: ;
}
void Frames::event_func_669()
{
    // event 20_4
    bool or_result_20_4 = false;
    bool or_temp_result_20_4_0 = false;
    {
        if (!(group_select_1)) goto or_event_20_4_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_20_4_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_20_4_0_end;
        if (group_demo_mode_1) goto or_event_20_4_0_end;
        or_result_20_4 = true;
        or_temp_result_20_4_0 = true;
    }
    or_event_20_4_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_20_4_0) {
        crystalcursor_75_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 20_4
    bool or_temp_result_20_4_1 = false;
    {
        if (!(group_select_1)) goto or_event_20_4_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_20_4_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_20_4_1_end;
        if (!(group_demo_mode_1)) goto or_event_20_4_1_end;
        or_result_20_4 = true;
        or_temp_result_20_4_1 = true;
        or_event_20_4_1_end: ;
        if (or_temp_result_20_4_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_20_4) goto or_final_or_event_20_4_1_end;
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_20_4_0 || or_temp_result_20_4_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_20_4_0 || or_temp_result_20_4_1) {
            playerinput_19_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_20_4_1_end: ;
}
void Frames::event_func_670()
{
    // event 21_4
    {
        if (!(group_select_1)) goto event_21_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_21_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_21_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_21_4_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_21_4_end: ;
}
void Frames::event_func_671()
{
    // event 22_4
    {
        if (!(group_select_1)) goto event_22_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_22_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (0))) goto event_22_4_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_22_4_end: ;
}
void Frames::event_func_672()
{
    // event 23_4
    {
        if (!(group_select_1)) goto event_23_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_23_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (1))) goto event_23_4_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_23_4_end: ;
}
void Frames::event_func_673()
{
    // event 24_4
    bool or_result_24_4 = false;
    bool or_temp_result_24_4_0 = false;
    {
        if (!(group_select_1)) goto or_event_24_4_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_24_4_0_end;
        or_result_24_4 = true;
        or_temp_result_24_4_0 = true;
    }
    or_event_24_4_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_24_4_0) {
        playerinput_19_instances.save_selection();
    }
    // event 24_4
    bool or_temp_result_24_4_1 = false;
    {
        if (!(group_select_1)) goto or_event_24_4_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_24_4_1_end;
        or_result_24_4 = true;
        or_temp_result_24_4_1 = true;
        or_event_24_4_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_24_4_1) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_24_4) goto or_final_or_event_24_4_1_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_24_4_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_24_4_1) {
            inputsp1_21_instances.restore_selection();
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_24_4_1_end: ;
}
void Frames::event_func_674()
{
    // event 25_4
    {
        if (!(group_select_1)) goto event_25_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_25_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_25_4_end;
        if (not_always_25_4 > loop_count) {
            not_always_25_4 = loop_count + 2;
            goto event_25_4_end;
        }
        not_always_25_4 = loop_count + 2;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)+1)%math_helper%5, 1, 21);
    }
    event_25_4_end: ;
}
void Frames::event_func_675()
{
    // event 26_4
    {
        if (!(group_select_1)) goto event_26_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_26_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_26_4_end;
        if (not_always_26_4 > loop_count) {
            not_always_26_4 = loop_count + 2;
            goto event_26_4_end;
        }
        not_always_26_4 = loop_count + 2;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)+1)%math_helper%5, 1, 22);
    }
    event_26_4_end: ;
}
void Frames::event_func_676()
{
    // event 27_4
    {
        if (!(group_select_1)) goto event_27_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_27_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_27_4_end;
        if (not_always_27_4 > loop_count) {
            not_always_27_4 = loop_count + 2;
            goto event_27_4_end;
        }
        not_always_27_4 = loop_count + 2;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)+1)%math_helper%5, 1, 24);
    }
    event_27_4_end: ;
}
void Frames::event_func_677()
{
    // event 28_4
    {
        if (!(group_select_1)) goto event_28_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (10))) goto event_28_4_end;
        set_display_center(320+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1), -1);
        set_display_center(-1, 120+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_min(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18), 50));
    }
    event_28_4_end: ;
}
void Frames::event_func_678()
{
    // event 29_4
    {
        if (!(group_select_1)) goto event_29_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (30))) goto event_29_4_end;
        ((Active*)get_instance(char3_137_instances))->set_direction(8);
        ((Active*)get_instance(char1_141_instances))->set_direction(8);
        ((Active*)get_instance(char2_138_instances))->set_direction(8);
        ((Active*)get_instance(char4_136_instances))->set_direction(8);
    }
    event_29_4_end: ;
}
void Frames::event_func_679()
{
    // event 30_4
    {
        if (!(group_select_1)) goto event_30_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) < (10))) goto event_30_4_end;
        ((Active*)get_instance(char1_141_instances))->set_direction(0);
        ((Active*)get_instance(char3_137_instances))->set_direction(0);
        ((Active*)get_instance(char2_138_instances))->set_direction(0);
        ((Active*)get_instance(char4_136_instances))->set_direction(0);
    }
    event_30_4_end: ;
}
void Frames::event_func_680()
{
    // event 31_4
    {
        if (!(group_select_1)) goto event_31_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_31_4_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_31_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        ((Active*)get_instance(charname1_142_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(charname1_142_instances))->set_visible(true);
    }
    event_31_4_end: ;
}
void Frames::event_func_681()
{
    // event 32_4
    {
        if (!(group_select_1)) goto event_32_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (1))) goto event_32_4_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_32_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
        ((Active*)get_instance(charname1_142_instances))->set_visible(false);
    }
    event_32_4_end: ;
}
void Frames::event_func_682()
{
    // event 33_4
    {
        if (!(group_select_1)) goto event_33_4_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_33_4_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_33_4_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_max(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-1, 0));
    }
    event_33_4_end: ;
}
void Frames::event_func_683()
{
    // event 34_4
    {
        if (!(group_select_1)) goto event_34_4_end;
        if (!(((Active*)get_instance(charname1_142_instances))->alterables->flags.is_on(0))) goto event_34_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_34_4_end;
            group_select_1 = false;
    
        if (!group_character_selected_1) {
            group_character_selected_1 = true;
        }
        global_values->set(1, ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0));
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
    }
    event_34_4_end: ;
}
void Frames::event_func_684()
{
    // event 35_4
    bool or_result_35_4 = false;
    bool or_temp_result_35_4_0 = false;
    {
        if (!(group_select_1)) goto or_event_35_4_0_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto or_event_35_4_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_35_4_0_end;
        or_result_35_4 = true;
        or_temp_result_35_4_0 = true;
    }
    or_event_35_4_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    charname1_142_instances.clear_saved_selection();
    if (or_temp_result_35_4_0) {
        crystalcursor_75_instances.save_selection();
        charname1_142_instances.save_selection();
    }
    // event 35_4
    bool or_temp_result_35_4_1 = false;
    {
        if (!(group_select_1)) goto or_event_35_4_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_35_4_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_35_4_1_end;
        or_result_35_4 = true;
        or_temp_result_35_4_1 = true;
        or_event_35_4_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_35_4_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_35_4) goto or_final_or_event_35_4_1_end;
        crystalcursor_75_instances.empty_selection();
        charname1_142_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_35_4_0 || or_temp_result_35_4_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_35_4_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_35_4_0) {
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
    or_final_or_event_35_4_1_end: ;
}
void Frames::event_func_685()
{
    // event 36_4
    {
        if (!(group_select_1)) goto event_36_4_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_36_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (1))) goto event_36_4_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_36_4_end: ;
}
void Frames::event_func_686()
{
    // event 37_4
    {
        // group: Color Select
        colorbox1_143_instances.clear_selection();
        for (ObjectIterator it(colorbox1_143_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)))) { it.deselect(); continue; }
        }
        if (!colorbox1_143_instances.has_selection()) goto event_37_4_end;
        for (ObjectIterator it(colorbox1_143_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_37_4_end: ;
}
void Frames::event_func_687()
{
    // event 38_4
    {
        // group: Color Select
        colorbox2_145_instances.clear_selection();
        for (ObjectIterator it(colorbox2_145_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)))) { it.deselect(); continue; }
        }
        if (!colorbox2_145_instances.has_selection()) goto event_38_4_end;
        for (ObjectIterator it(colorbox2_145_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_38_4_end: ;
}
void Frames::event_func_688()
{
    // event 39_4
    {
        // group: Color Select
        colorbox3_144_instances.clear_selection();
        for (ObjectIterator it(colorbox3_144_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)))) { it.deselect(); continue; }
        }
        if (!colorbox3_144_instances.has_selection()) goto event_39_4_end;
        for (ObjectIterator it(colorbox3_144_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_39_4_end: ;
}
void Frames::event_func_689()
{
    // event 40_4
    {
        if (!(group_character_selected_1)) goto event_40_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_40_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_40_4_end;
        global_values->set(1, 0);
    }
    event_40_4_end: ;
}
void Frames::event_func_690()
{
    // event 41_4
    {
        if (!(group_character_selected_1)) goto event_41_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_41_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_41_4_end;
        global_values->set(1, 2);
    }
    event_41_4_end: ;
}
void Frames::event_func_691()
{
    // event 42_4
    {
        if (!(group_character_selected_1)) goto event_42_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_42_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_42_4_end;
        global_values->set(1, 4);
    }
    event_42_4_end: ;
}
void Frames::event_func_692()
{
    // event 43_4
    {
        if (!(group_character_selected_1)) goto event_43_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_43_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_43_4_end;
        global_values->set(1, 1);
    }
    event_43_4_end: ;
}
void Frames::event_func_693()
{
    // event 44_4
    {
        if (!(group_character_selected_1)) goto event_44_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_44_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_44_4_end;
        global_values->set(1, 5);
    }
    event_44_4_end: ;
}
void Frames::event_func_694()
{
    // event 45_4
    {
        if (!(group_character_selected_1)) goto event_45_4_end;
        if (!((global_values->get(1)) == (0))) goto event_45_4_end;
        if (not_always_45_4 > loop_count) {
            not_always_45_4 = loop_count + 2;
            goto event_45_4_end;
        }
        not_always_45_4 = loop_count + 2;
        media.play_id(SOUND_LILAC_YES_220, -1, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(13, 1, 40);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_45_4_end: ;
}
void Frames::event_func_695()
{
    // event 46_4
    {
        if (!(group_character_selected_1)) goto event_46_4_end;
        if (!((global_values->get(1)) == (1))) goto event_46_4_end;
        if (not_always_46_4 > loop_count) {
            not_always_46_4 = loop_count + 2;
            goto event_46_4_end;
        }
        not_always_46_4 = loop_count + 2;
        media.play_id(SOUND_SPADE_HMPH_242, -1, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(13, 1, 41);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_46_4_end: ;
}
void Frames::event_func_696()
{
    // event 47_4
    {
        if (!(group_character_selected_1)) goto event_47_4_end;
        if (!((global_values->get(1)) == (2))) goto event_47_4_end;
        if (not_always_47_4 > loop_count) {
            not_always_47_4 = loop_count + 2;
            goto event_47_4_end;
        }
        not_always_47_4 = loop_count + 2;
        media.play_id(SOUND_CAROL_SWEET_2_221, -1, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(13, 1, 42);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_47_4_end: ;
}
void Frames::event_func_697()
{
    // event 48_4
    {
        if (!(group_character_selected_1)) goto event_48_4_end;
        if (!((global_values->get(1)) == (4))) goto event_48_4_end;
        if (not_always_48_4 > loop_count) {
            not_always_48_4 = loop_count + 2;
            goto event_48_4_end;
        }
        not_always_48_4 = loop_count + 2;
        media.play_id(SOUND_MILLA_YAY_186, -1, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(13, 1, 43);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_48_4_end: ;
}
void Frames::event_func_698()
{
    // event 49_4
    {
        if (!(group_character_selected_1)) goto event_49_4_end;
        if (!((global_values->get(1)) == (5))) goto event_49_4_end;
        if (not_always_49_4 > loop_count) {
            not_always_49_4 = loop_count + 2;
            goto event_49_4_end;
        }
        not_always_49_4 = loop_count + 2;
        media.play_id(SOUND_TORQUE_WHAT_2_243, -1, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(13, 1, 44);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_49_4_end: ;
}
void Frames::event_func_699()
{
    // event 50_4
    {
        if (!(group_character_selected_1)) goto event_50_4_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_50_4_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_50_4_end: ;
}
void Frames::event_func_700()
{
    // event 51_4
    {
        if (!(group_character_selected_1)) goto event_51_4_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_51_4_end;
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_51_4_end: ;
}
void Frames::event_func_701()
{
    // event 52_4
    {
        if (!(group_character_selected_1)) goto event_52_4_end;
        ((Active*)get_instance(charname1_142_instances))->alterables->values.add(0, 1);
    }
    event_52_4_end: ;
}
void Frames::event_func_702()
{
    // event 53_4
    {
        if (!(group_character_selected_1)) goto event_53_4_end;
        if (!((((Active*)get_instance(charname1_142_instances))->alterables->values.get(0)) >= (10))) goto event_53_4_end;
        if (not_always_53_4 > loop_count) {
            not_always_53_4 = loop_count + 2;
            goto event_53_4_end;
        }
        not_always_53_4 = loop_count + 2;
        ((ArrayObject*)get_instance(savedata_28_instances))->save(get_app_drive()+get_app_dir()+str_save_36+number_to_string(global_values->get(10))+str_dat_37);
    }
    event_53_4_end: ;
}
void Frames::event_func_703()
{
    // event 54_4
    {
        if (!(group_character_selected_1)) goto event_54_4_end;
        if (!((((Active*)get_instance(charname1_142_instances))->alterables->values.get(0)) >= (20))) goto event_54_4_end;
            group_character_selected_1 = false;
    
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
    event_54_4_end: ;
}
void Frames::event_func_704()
{
    // event 56_4
    {
        if (!(group_transition_1)) goto event_56_4_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_56_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_56_4_end;
        next_frame = 5 + 0;    
    
    }
    event_56_4_end: ;
}
void Frames::event_func_705()
{
    // event 57_4
    {
        if (!(group_transition_1)) goto event_57_4_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_57_4_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (1))) goto event_57_4_end;
        next_frame = 3 + 0;    
    
    }
    event_57_4_end: ;
}
void Frames::handle_frame_5_events()
{
    test_collisions_4();
    event_func_662();
    if (!group_fade_in_1) goto group_fade_in_1_end;
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_663();
    event_func_664();
    event_func_665();
    group_fade_in_1_end: ;
    if (!group_demo_mode_1) goto group_demo_mode_1_end;
    group_demo_mode_1_end: ;
    if (!group_select_1) goto group_select_1_end;
    event_func_666();
    event_func_667();
    event_func_668();
    event_func_669();
    event_func_670();
    event_func_671();
    event_func_672();
    event_func_673();
    event_func_674();
    event_func_675();
    event_func_676();
    event_func_677();
    event_func_678();
    event_func_679();
    event_func_680();
    event_func_681();
    event_func_682();
    event_func_683();
    event_func_684();
    event_func_685();
    group_select_1_end: ;
    event_func_686();
    event_func_687();
    event_func_688();
    if (!group_character_selected_1) goto group_character_selected_1_end;
    event_func_689();
    event_func_690();
    event_func_691();
    event_func_692();
    event_func_693();
    event_func_694();
    event_func_695();
    event_func_696();
    event_func_697();
    event_func_698();
    event_func_699();
    event_func_700();
    event_func_701();
    event_func_702();
    event_func_703();
    group_character_selected_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_629();
    event_func_704();
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
void Frames::handle_frame_5_pre_events()
{
}
void Frames::event_func_706()
{
    // event 1_4
    {
        set_display_center(320, -1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 0);
        colorbox1_143_instances.clear_selection();
        spread_value(colorbox1_143_instances, 0, 0);
        colorbox2_145_instances.clear_selection();
        spread_value(colorbox2_145_instances, 0, 0);
        for (ObjectIterator it(colorbox1_143_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        for (ObjectIterator it(colorbox2_145_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        colorbox3_144_instances.clear_selection();
        spread_value(colorbox3_144_instances, 0, 0);
        for (ObjectIterator it(colorbox3_144_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        ((TextBlitter*)get_instance(helpmessage_148_instances))->load(str_data_font_bmp_7);
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_1_4_end: ;
}
void Frames::event_func_707()
{
    // event 2_4
    {
        if (!(!media.is_channel_playing(32-1))) goto event_2_4_end;
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_menu1_ogg_38, 32-1, 0);
    }
    event_2_4_end: ;
}
void Frames::event_func_708()
{
    // event 10_4
    {
        characterslot_133_instances.clear_selection();
        spread_value(characterslot_133_instances, 0, 0);
    }
    event_10_4_end: ;
}
void Frames::event_func_709()
{
    // event 11_4
    {
        // group: Set Initial X/Y positions
        if (!((global_values->get(1)) == (1))) goto event_11_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 3);
    }
    event_11_4_end: ;
}
void Frames::event_func_710()
{
    // event 12_4
    {
        // group: Set Initial X/Y positions
        if (!((global_values->get(1)) == (2))) goto event_12_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 1);
    }
    event_12_4_end: ;
}
void Frames::event_func_711()
{
    // event 13_4
    {
        // group: Set Initial X/Y positions
        if (!((global_values->get(1)) == (4))) goto event_13_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
    }
    event_13_4_end: ;
}
void Frames::event_func_712()
{
    // event 14_4
    {
        // group: Set Initial X/Y positions
        if (!((global_values->get(1)) == (5))) goto event_14_4_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 4);
    }
    event_14_4_end: ;
}
void Frames::event_func_713()
{
    // event 15_4
    {
        if (!(group_demo_mode_1)) goto event_15_4_end;
        ((Active*)get_instance(char2_138_instances))->set_visible(false);
        ((Active*)get_instance(char4_136_instances))->set_visible(false);
        ((Active*)get_instance(char5_135_instances))->set_visible(false);
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0)*20+64);
        }
        ((Active*)get_instance(char1_141_instances))->set_x(((Active*)get_instance(char1_141_instances))->get_x()+64);
        ((Active*)get_instance(char3_137_instances))->set_x(((Active*)get_instance(char3_137_instances))->get_x()+84);
    }
    event_15_4_end: ;
}
