#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_973()
{
    // event 2_9
    {
        set_display_center(320, -1);
        {
            loop_check_running = true;
            int times = int(99);
            loop_check_index = 0;
            while (loop_check_index < times) {
                loop_check_9();
                if (!loop_check_running) break;
                loop_check_index++;
            }
        }
    }
    event_2_9_end: ;
}
void Frames::on_frame_10_start_events()
{
    event_func_972();
    event_func_973();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_10_init()
{
    index = 9;
    width = 640;
    height = 480;
    virtual_width = 640;
    virtual_height = 480;
    background_color = Color(8, 0, 0);
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
    static ObjectList* qualifier_3_instances[] = {&achievement_257_instances, NULL};
    qualifier_3.set(1, &qualifier_3_instances[0]);
    add_background_object(create_separatormasterobjects2_12(-192, -80), 0);
    add_object(create_unlocked_254(320, 29), 0);
    add_object(create_masterlevel_37(-24, -24), 0);
    add_object(create_playerinput_19(-176, -56), 0);
    add_object(create_masterinput_20(-152, -56), 0);
    add_object(create_inputsp1_21(-128, -56), 0);
    add_object(create_globalinputdata_22(-104, -56), 0);
    add_object(create_menusequence_255(-32, 0), 0);
    add_object(create_mapdata_30(-144, 0), 0);
    add_object(create_achievement_257(200, 160), 1);
    add_object(create_achievement_257(200, 120), 1);
    add_object(create_achievement_257(200, 80), 1);
    add_object(create_sweep_258(-8, 160), 1);
    add_object(create_sweep_258(-8, 120), 1);
    add_object(create_sweep_258(-8, 80), 1);
    add_object(create_ringsparkle_139(-73, 127), 1);
    add_object(create_crystalcursor_251(257, 216), 1);
    add_object(create_continue_252(320, 215), 1);
    add_object(create_shine_256(-88, 192), 1);
    add_object(create_listnames_259(-192, 56), 1);
    add_object(create_achievementname_260(240, 160), 1);
    add_object(create_achievementname_260(240, 120), 1);
    add_object(create_achievementname_260(240, 80), 1);
    add_object(create_fade_54(0, 0), 1);
    add_object(create_sarassteampluginfreedomplanet_26(32, -56), 1);
    add_object(create_savedata_261(-32, -56), 1);
    add_object(create_recorddata_34(0, -56), 1);
    add_object(create_windowcontrol_27(-144, -32), 1);
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
    group_sound_events_torque_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    once_condition_10_9 = false;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    group_search_for_new_achievements_1 = true;
    not_always_66_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_101_0 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
}
void Frames::event_func_974()
{
    // event 19_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_19_10_end;
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_ac_index+1))) { it.deselect(); continue; }
        }
        if (!achievement_257_instances.has_selection()) goto event_19_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_ac_index+1)) >= (2))) goto event_19_10_end;
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->unlock_achievement(number_to_string(((Active*)get_single(achievement_257_instances, default_active_instance))->alterables->values.get(0)));
    }
    event_19_10_end: ;
}
void Frames::event_func_975()
{
    // event 20_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_20_10_end;
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_ac_index+1))) { it.deselect(); continue; }
        }
        if (!achievement_257_instances.has_selection()) goto event_20_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, loop_ac_index+1)) < (2))) goto event_20_10_end;
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_20_10_end: ;
}
void Frames::loop_ac_10()
{
    event_func_974();
    event_func_975();
}
void Frames::event_func_976()
{
    // event 3_10
    {
        // group: Check cards
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 23+loop_check_a_index)) == (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 1+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 2+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 3+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 4+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 5+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 6+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 7+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 8+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 9+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 10+loop_check_a_index*10)) > (0))) goto event_3_10_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 23+loop_check_a_index);
        ((Active*)get_instance(arrow1_269_instances))->alterables->flags.enable(5);
    }
    event_3_10_end: ;
}
void Frames::loop_check_a_10()
{
    event_func_976();
}
void Frames::event_func_977()
{
    // event 17_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_17_10_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_cards_index+1))) { it.deselect(); continue; }
        }
        if (!mapicon_265_instances.has_selection()) goto event_17_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, loop_cards_index+1)) > (0))) goto event_17_10_end;
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_17_10_end: ;
}
void Frames::loop_cards_10()
{
    event_func_977();
}
void Frames::test_collisions_10()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_978()
{
    // event 8_10
    {
        if (!(group_gallery_1 && group_gallery_fade_in_1)) goto event_8_10_end;
        fadein_149_instances.clear_selection();
        FrameObject * single_instance_8_10_0; single_instance_8_10_0 = pick_random(fadein_149_instances);
        if (single_instance_8_10_0 == NULL) goto event_8_10_end;
        ((Active*)((Active*)single_instance_8_10_0))->destroy();
    }
    event_8_10_end: ;
}
void Frames::event_func_979()
{
    // event 12_10
    {
        if (!(group_gallery_1 && group_gallery_fade_in_1)) goto event_12_10_end;
        if (!((fadein_149_instances.size()) == (0))) goto event_12_10_end;
            group_gallery_fade_in_1 = false;
    
        if (!group_gallery_main_menu_select_1) {
            group_gallery_main_menu_select_1 = true;
        }
    }
    event_12_10_end: ;
}
void Frames::event_func_980()
{
    // event 13_10
    {
        if (!(group_gallery_1 && group_gallery_fade_in_1)) goto event_13_10_end;
        fadein_149_instances.clear_selection();
        for (ObjectIterator it(fadein_149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (1))) { it.deselect(); continue; }
        }
        if (!fadein_149_instances.has_selection()) goto event_13_10_end;
        if (not_always_13_10 > loop_count) {
            not_always_13_10 = loop_count + 2;
            goto event_13_10_end;
        }
        not_always_13_10 = loop_count + 2;
        backgroundsystembox_146_instances.clear_selection();
        for (ObjectIterator it(backgroundsystembox_146_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_13_10_end: ;
}
void Frames::event_func_981()
{
    // event 15_10
    {
        if (!(group_gallery_1)) goto event_15_10_end;
        checkerpattern_132_instances.clear_selection();
        for (ObjectIterator it(checkerpattern_132_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->get_x(), 0-((SystemBox*)*it)->alterables->values.get(0));
            ((SystemBox*)*it)->alterables->values.set(0, (((SystemBox*)*it)->alterables->values.get(0)+0.5)%math_helper%64);
        }
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(21));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(22));
        }
        global_values->add(3, 1);
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3+((Active*)*it)->alterables->values.get(0)*0.5)%math_helper%40);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(21));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(22));
        }
        ((Active*)get_instance(header_266_instances))->force_frame(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0));
    }
    event_15_10_end: ;
}
void Frames::event_func_982()
{
    // event 16_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_16_10_end;
        if (once_condition_16_10) goto event_16_10_end;
        once_condition_16_10 = true;
        {
            loop_cards_running = true;
            int times = int(100);
            loop_cards_index = 0;
            while (loop_cards_index < times) {
                loop_cards_10();
                if (!loop_cards_running) break;
                loop_cards_index++;
            }
        }
    }
    event_16_10_end: ;
}
void Frames::event_func_983()
{
    // event 18_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_18_10_end;
        if (once_condition_18_10) goto event_18_10_end;
        once_condition_18_10 = true;
        {
            loop_ac_running = true;
            int times = int(100);
            loop_ac_index = 0;
            while (loop_ac_index < times) {
                loop_ac_10();
                if (!loop_ac_running) break;
                loop_ac_index++;
            }
        }
    }
    event_18_10_end: ;
}
void Frames::event_func_984()
{
    // event 21_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_21_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_21_10_end;
        if (not_always_21_10 > loop_count) {
            not_always_21_10 = loop_count + 2;
            goto event_21_10_end;
        }
        not_always_21_10 = loop_count + 2;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_21_10_end: ;
}
void Frames::event_func_985()
{
    // event 22_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_22_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_22_10_end;
        if (not_always_22_10 > loop_count) {
            not_always_22_10 = loop_count + 2;
            goto event_22_10_end;
        }
        not_always_22_10 = loop_count + 2;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 2);
        }
    }
    event_22_10_end: ;
}
void Frames::event_func_986()
{
    // event 23_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_23_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_23_10_end;
        if (not_always_23_10 > loop_count) {
            not_always_23_10 = loop_count + 2;
            goto event_23_10_end;
        }
        not_always_23_10 = loop_count + 2;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_23_10_end: ;
}
void Frames::event_func_987()
{
    // event 24_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_24_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_24_10_end;
        if (not_always_24_10 > loop_count) {
            not_always_24_10 = loop_count + 2;
            goto event_24_10_end;
        }
        not_always_24_10 = loop_count + 2;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 8);
        }
    }
    event_24_10_end: ;
}
void Frames::event_func_988()
{
    // event 25_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_25_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_25_10_end;
        if (not_always_25_10 > loop_count) {
            not_always_25_10 = loop_count + 2;
            goto event_25_10_end;
        }
        not_always_25_10 = loop_count + 2;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 7);
        }
    }
    event_25_10_end: ;
}
void Frames::event_func_989()
{
    // event 26_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_26_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(15);
        }
    }
    event_26_10_end: ;
}
void Frames::event_func_990()
{
    // event 27_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_27_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_27_10_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 1+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 2+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 3+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 4+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 5+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 6+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 7+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 8+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 9+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)+((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 10+((Active*)get_single(stageicon1_212_instances, default_active_instance))->alterables->values.get(0)*10)) > (0))) goto event_27_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_27_10_end: ;
}
void Frames::event_func_991()
{
    // event 28_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_28_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_28_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_28_10_end: ;
}
void Frames::event_func_992()
{
    // event 29_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_29_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 40)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (8))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_29_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_29_10_end: ;
}
void Frames::event_func_993()
{
    // event 30_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_30_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 41)))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_30_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_30_10_end: ;
}
void Frames::event_func_994()
{
    // event 31_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_31_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 42)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_31_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_31_10_end: ;
}
void Frames::event_func_995()
{
    // event 32_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_32_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 43)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (7))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_32_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_32_10_end: ;
}
void Frames::event_func_996()
{
    // event 33_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_33_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 44)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (8))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_33_10_end;
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_33_10_end: ;
}
void Frames::event_func_997()
{
    // event 34_10
    {
        if (!(group_gallery_1 && group_gallery_content_display_1)) goto event_34_10_end;
        if (!((global_values->get(3)) > (10))) goto event_34_10_end;
            group_gallery_content_display_1 = false;
    
    }
    event_34_10_end: ;
}
void Frames::event_func_998()
{
    // event 35_10
    {
        if (!(group_gallery_1)) goto event_35_10_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!mapicon_265_instances.has_selection()) goto event_35_10_end;
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_35_10_end: ;
}
void Frames::event_func_999()
{
    // event 36_10
    {
        if (!(group_gallery_1)) goto event_36_10_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (300))) { it.deselect(); continue; }
        }
        if (!mapicon_265_instances.has_selection()) goto event_36_10_end;
        FrameObject * single_instance_36_10_0; single_instance_36_10_0 = pick_random(mapicon_265_instances);
        if (single_instance_36_10_0 == NULL) goto event_36_10_end;
        ((Active*)((Active*)single_instance_36_10_0))->alterables->values.set(3, 0);
        FrameObject * single_instance_36_10_1; single_instance_36_10_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_36_10_0)->x + 0, ((Active*)single_instance_36_10_0)->y + 0), ((Active*)single_instance_36_10_0)->layer);
            if (single_instance_36_10_1 == NULL)
                single_instance_36_10_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_36_10_1))->set_x(((Active*)single_instance_36_10_1)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_36_10_1))->set_y(((Active*)single_instance_36_10_1)->get_y()-14+randrange(29));
        ((Active*)((Active*)single_instance_36_10_1))->alterables->values.set(23, ((Active*)single_instance_36_10_1)->get_x());
        ((Active*)((Active*)single_instance_36_10_1))->alterables->values.set(24, ((Active*)single_instance_36_10_1)->get_y());
        ((Active*)((Active*)single_instance_36_10_1))->alterables->values.set(21, ((Active*)single_instance_36_10_1)->get_x());
        ((Active*)((Active*)single_instance_36_10_1))->alterables->values.set(22, ((Active*)single_instance_36_10_1)->get_y());
    }
    event_36_10_end: ;
}
void Frames::event_func_1000()
{
    // event 37_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_37_10_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*7+((Active*)*it)->alterables->values.get(1))*0.125);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*7+((Active*)*it)->alterables->values.get(2))*0.125);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(21, (((Active*)*it)->alterables->values.get(21)*7+((Active*)*it)->alterables->values.get(1))*0.125);
            ((Active*)*it)->alterables->values.set(22, (((Active*)*it)->alterables->values.get(22)*7+((Active*)*it)->alterables->values.get(2))*0.125);
        }
        ((Active*)get_instance(return_111_instances))->alterables->values.set(24, ((Active*)get_instance(header_266_instances))->get_y()-24);
        ((Active*)get_instance(return_111_instances))->set_y(((Active*)get_instance(header_266_instances))->get_y()-24);
    }
    event_37_10_end: ;
}
void Frames::event_func_1001()
{
    // event 38_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_38_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_38_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_38_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (-2))) goto event_38_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, -1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 30);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 30);
        }
    }
    event_38_10_end: ;
}
void Frames::event_func_1002()
{
    // event 39_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_39_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_39_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_39_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (stageicon1_212_instances.size()-1))) goto event_39_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, 1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(24, 30);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(24, 30);
        }
    }
    event_39_10_end: ;
}
void Frames::event_func_1003()
{
    // event 40_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_40_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_40_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_40_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (-2))) goto event_40_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, -1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 25);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 25);
        }
    }
    event_40_10_end: ;
}
void Frames::event_func_1004()
{
    // event 41_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_41_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_41_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_41_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (achievement_257_instances.size()/math_helper/8-1))) goto event_41_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, 1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(24, 25);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(24, 25);
        }
    }
    event_41_10_end: ;
}
void Frames::event_func_1005()
{
    // event 42_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_42_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_42_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_42_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) >= (0))) goto event_42_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(8)) < (7))) goto event_42_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(8, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_42_10_end: ;
}
void Frames::event_func_1006()
{
    // event 43_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_43_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_43_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_43_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) >= (0))) goto event_43_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(8)) > (0))) goto event_43_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(8, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_43_10_end: ;
}
void Frames::event_func_1007()
{
    // event 44_10
    bool or_result_44_10 = false;
    bool or_temp_result_44_10_0 = false;
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto or_event_44_10_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_44_10_0_end;
        or_result_44_10 = true;
        or_temp_result_44_10_0 = true;
    }
    or_event_44_10_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_44_10_0) {
        playerinput_19_instances.save_selection();
    }
    // event 44_10
    bool or_temp_result_44_10_1 = false;
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto or_event_44_10_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_44_10_1_end;
        or_result_44_10 = true;
        or_temp_result_44_10_1 = true;
        or_event_44_10_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_44_10_1) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_44_10) goto or_final_or_event_44_10_1_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_44_10_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_44_10_1) {
            inputsp1_21_instances.restore_selection();
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_44_10_1_end: ;
}
void Frames::event_func_1008()
{
    // event 45_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_45_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (10))) goto event_45_10_end;
        set_display_center(320+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1), -1);
        set_display_center(-1, 120+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_min(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18), 50));
    }
    event_45_10_end: ;
}
void Frames::event_func_1009()
{
    // event 46_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_46_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_max(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-1, 0));
    }
    event_46_10_end: ;
}
void Frames::event_func_1010()
{
    // event 47_10
    bool or_result_47_10 = false;
    bool or_temp_result_47_10_0 = false;
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto or_event_47_10_0_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto or_event_47_10_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_47_10_0_end;
        or_result_47_10 = true;
        or_temp_result_47_10_0 = true;
    }
    or_event_47_10_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    charname1_142_instances.clear_saved_selection();
    if (or_temp_result_47_10_0) {
        crystalcursor_75_instances.save_selection();
        charname1_142_instances.save_selection();
    }
    // event 47_10
    bool or_temp_result_47_10_1 = false;
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto or_event_47_10_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_47_10_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_47_10_1_end;
        or_result_47_10 = true;
        or_temp_result_47_10_1 = true;
        or_event_47_10_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_47_10_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_47_10) goto or_final_or_event_47_10_1_end;
        crystalcursor_75_instances.empty_selection();
        charname1_142_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_47_10_0 || or_temp_result_47_10_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_47_10_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_47_10_0) {
            charname1_142_instances.restore_selection();
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
            group_gallery_main_menu_select_1 = false;
    
        if (!group_gallery_transition_1) {
            group_gallery_transition_1 = true;
        }
        media.stop_channel(32-1);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 0);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 0);
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
    or_final_or_event_47_10_1_end: ;
}
void Frames::event_func_1011()
{
    // event 48_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_48_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_48_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (-2))) goto event_48_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_48_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)+2)*30);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)+2)*30);
        }
    }
    event_48_10_end: ;
}
void Frames::event_func_1012()
{
    // event 49_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_49_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_49_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (-2))) goto event_49_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_49_10_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)+2)*15);
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)+2)*30);
        }
    }
    event_49_10_end: ;
}
void Frames::event_func_1013()
{
    // event 50_10
    {
        if (!(group_gallery_1 && group_gallery_main_menu_select_1)) goto event_50_10_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_50_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (-2))) goto event_50_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, -2);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_50_10_end: ;
}
void Frames::event_func_1014()
{
    // event 51_10
    {
        if (!(group_gallery_1)) goto event_51_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (-1))) goto event_51_10_end;
        ((Active*)get_instance(arrow1_269_instances))->set_x(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(0));
        ((Active*)get_instance(arrow2_270_instances))->set_x(((Active*)get_instance(arrow2_270_instances))->alterables->values.get(0));
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(3, 0);
        {
            ((Active*)get_instance(arrow1_269_instances))->blend_color.set_semi_transparency(0);
        }
        {
            ((Active*)get_instance(arrow2_270_instances))->blend_color.set_semi_transparency(0);
        }
    }
    event_51_10_end: ;
}
void Frames::event_func_1015()
{
    // event 52_10
    {
        if (!(group_gallery_1)) goto event_52_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (-1))) goto event_52_10_end;
        ((Active*)get_instance(arrow1_269_instances))->set_x(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(0)-((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3));
        ((Active*)get_instance(arrow2_270_instances))->set_x(((Active*)get_instance(arrow2_270_instances))->alterables->values.get(0)+((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3));
        {
            ((Active*)get_instance(arrow1_269_instances))->blend_color.set_semi_transparency(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)*2);
        }
        {
            ((Active*)get_instance(arrow2_270_instances))->blend_color.set_semi_transparency(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)*2);
        }
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(3, (((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)+2)%math_helper%48);
    }
    event_52_10_end: ;
}
void Frames::event_func_1016()
{
    // event 53_10
    bool or_result_53_10 = false;
    bool or_temp_result_53_10_0 = false;
    {
        if (!(group_gallery_1)) goto or_event_53_10_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_53_10_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_53_10_0_end;
        or_result_53_10 = true;
        or_temp_result_53_10_0 = true;
    }
    or_event_53_10_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_53_10_0) {
        crystalcursor_75_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 53_10
    bool or_temp_result_53_10_1 = false;
    {
        if (!(group_gallery_1)) goto or_event_53_10_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_53_10_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_53_10_1_end;
        or_result_53_10 = true;
        or_temp_result_53_10_1 = true;
        or_event_53_10_1_end: ;
        if (or_temp_result_53_10_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_53_10) goto or_final_or_event_53_10_1_end;
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_53_10_0 || or_temp_result_53_10_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_53_10_0 || or_temp_result_53_10_1) {
            playerinput_19_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 30);
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%2);
        }
    }
    or_final_or_event_53_10_1_end: ;
}
void Frames::event_func_1017()
{
    // event 54_10
    {
        if (!(group_gallery_1)) goto event_54_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_54_10_end;
        if (not_always_54_10 > loop_count) {
            not_always_54_10 = loop_count + 2;
            goto event_54_10_end;
        }
        not_always_54_10 = loop_count + 2;
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_visible(false);
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_text(empty_string);
        ((Active*)get_instance(blackborder_271_instances))->set_visible(false);
    }
    event_54_10_end: ;
}
void Frames::event_func_1018()
{
    // event 55_10
    {
        if (!(group_gallery_1)) goto event_55_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_55_10_end;
        if (not_always_55_10 > loop_count) {
            not_always_55_10 = loop_count + 2;
            goto event_55_10_end;
        }
        not_always_55_10 = loop_count + 2;
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_55_10_end: ;
}
void Frames::event_func_1019()
{
    // event 56_10
    {
        if (!(group_gallery_1)) goto event_56_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_56_10_end;
        stageicon1_212_instances.clear_selection();
        for (ObjectIterator it(stageicon1_212_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!stageicon1_212_instances.has_selection()) goto event_56_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        {
            FrameObject * parent = ((Active*)get_single(stageicon1_212_instances));
            if (parent == NULL) goto pos_end_56_10_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_x() + -24, parent->get_y() + 16);
            pos_end_56_10_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
    }
    event_56_10_end: ;
}
void Frames::event_func_1020()
{
    // event 57_10
    {
        if (!(group_gallery_1)) goto event_57_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_57_10_end;
        achievement_257_instances.clear_selection();
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)*8+1+((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!achievement_257_instances.has_selection()) goto event_57_10_end;
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(8);
        {
            FrameObject * parent = ((Active*)get_single(achievement_257_instances));
            if (parent == NULL) goto pos_end_57_10_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_57_10_0: ;
        }
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_text(((Text*)get_instance(listnames_259_instances))->get_paragraph(((Active*)get_single(achievement_257_instances, default_active_instance))->alterables->values.get(0)-1)+newline_character+((Text*)get_instance(listdescriptions_268_instances))->get_paragraph(((Active*)get_single(achievement_257_instances, default_active_instance))->alterables->values.get(0)-1));
        ((Active*)get_instance(blackborder_271_instances))->set_visible(true);
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_visible(true);
    }
    event_57_10_end: ;
}
void Frames::event_func_1021()
{
    // event 58_10
    {
        if (!(group_gallery_1)) goto event_58_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (-1))) goto event_58_10_end;
        {
            FrameObject * parent = ((Active*)get_instance(header_266_instances));
            if (parent == NULL) goto pos_end_58_10_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_58_10_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
        ((Active*)get_instance(blackborder_271_instances))->set_visible(false);
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_visible(false);
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->set_text(empty_string);
    }
    event_58_10_end: ;
}
void Frames::event_func_1022()
{
    // event 59_10
    {
        if (!(group_gallery_1)) goto event_59_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (-2))) goto event_59_10_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_59_10_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_59_10_0: ;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
    }
    event_59_10_end: ;
}
void Frames::event_func_1023()
{
    // event 60_10
    {
        if (!(group_gallery_1)) goto event_60_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (stageicon1_212_instances.size()))) goto event_60_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
    }
    event_60_10_end: ;
}
void Frames::event_func_1024()
{
    // event 61_10
    {
        if (!(group_gallery_1)) goto event_61_10_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_61_10_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (-2))) goto event_61_10_end;
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_61_10_end: ;
}
void Frames::event_func_1025()
{
    // event 62_10
    {
        if (!(group_gallery_1)) goto event_62_10_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_62_10_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_62_10_end: ;
}
void Frames::event_func_1026()
{
    // event 63_10
    {
        if (!(group_gallery_1 && group_gallery_character_selected_1)) goto event_63_10_end;
        if (not_always_63_10 > loop_count) {
            not_always_63_10 = loop_count + 2;
            goto event_63_10_end;
        }
        not_always_63_10 = loop_count + 2;
            group_gallery_character_selected_1 = false;
    
        if (!group_gallery_transition_1) {
            group_gallery_transition_1 = true;
        }
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 0);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 0);
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
    event_63_10_end: ;
}
void Frames::event_func_1027()
{
    // event 64_10
    {
        if (!(group_gallery_1 && group_gallery_transition_1)) goto event_64_10_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_64_10_end;
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
    event_64_10_end: ;
}
void Frames::event_func_1028()
{
    // event 65_10
    {
        if (!(group_gallery_1 && group_gallery_transition_1)) goto event_65_10_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_65_10_end;
        next_frame = 3 + 0;    
    
    }
    event_65_10_end: ;
}
void Frames::event_func_1029()
{
    // event 66_10
    {
        if (!(group_gallery_1)) goto event_66_10_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_66_10_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_66_10_end: ;
}
void Frames::event_func_1030()
{
    // event 67_10
    {
        if (!(group_gallery_1)) goto event_67_10_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_67_10_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(23)+cos_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25)*0.5);
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25)-0.4, 0));
        }
    }
    event_67_10_end: ;
}
void Frames::handle_frame_11_events()
{
    test_collisions_10();
    if (!group_gallery_1) goto group_gallery_1_end;
    if (!group_gallery_fade_in_1) goto group_gallery_fade_in_1_end;
    event_func_978();
    event_func_978();
    event_func_978();
    event_func_978();
    event_func_979();
    event_func_980();
    group_gallery_fade_in_1_end: ;
    event_func_981();
    if (!group_gallery_content_display_1) goto group_gallery_content_display_1_end;
    event_func_982();
    event_func_983();
    event_func_984();
    event_func_985();
    event_func_986();
    event_func_987();
    event_func_988();
    event_func_989();
    event_func_990();
    event_func_991();
    event_func_992();
    event_func_993();
    event_func_994();
    event_func_995();
    event_func_996();
    event_func_997();
    group_gallery_content_display_1_end: ;
    event_func_998();
    event_func_999();
    if (!group_gallery_main_menu_select_1) goto group_gallery_main_menu_select_1_end;
    event_func_1000();
    event_func_1001();
    event_func_1002();
    event_func_1003();
    event_func_1004();
    event_func_1005();
    event_func_1006();
    event_func_1007();
    event_func_1008();
    event_func_1009();
    event_func_1010();
    event_func_1011();
    event_func_1012();
    event_func_1013();
    group_gallery_main_menu_select_1_end: ;
    event_func_1014();
    event_func_1015();
    event_func_1016();
    event_func_1017();
    event_func_1018();
    event_func_1019();
    event_func_1020();
    event_func_1021();
    event_func_1022();
    event_func_1023();
    event_func_1024();
    event_func_1025();
    if (!group_gallery_character_selected_1) goto group_gallery_character_selected_1_end;
    event_func_1026();
    group_gallery_character_selected_1_end: ;
    if (!group_gallery_transition_1) goto group_gallery_transition_1_end;
    event_func_1027();
    event_func_1028();
    group_gallery_transition_1_end: ;
    event_func_1029();
    event_func_1030();
    group_gallery_1_end: ;
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
void Frames::handle_frame_11_pre_events()
{
}
void Frames::event_func_1031()
{
    // event 2_10
    {
        {
            loop_check_a_running = true;
            int times = int(10);
            loop_check_a_index = 0;
            while (loop_check_a_index < times) {
                loop_check_a_10();
                if (!loop_check_a_running) break;
                loop_check_a_index++;
            }
        }
    }
    event_2_10_end: ;
}
void Frames::event_func_1032()
{
    // event 4_10
    {
        // group: Check cards
        if (!(((Active*)get_instance(arrow1_269_instances))->alterables->flags.is_on(5))) goto event_4_10_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_4_10_end: ;
}
void Frames::event_func_1033()
{
    // event 5_10
    {
        // group: Check cards
        if (!(((Active*)get_instance(arrow1_269_instances))->alterables->flags.is_on(5))) goto event_5_10_end;
            group_gallery_1 = false;
    
        next_frame = 9 + 0;    
    
        global_values->set(0, -3);
    }
    event_5_10_end: ;
}
void Frames::event_func_1034()
{
    // event 6_10
    {
        if (!(group_gallery_1)) goto event_6_10_end;
        set_display_center(320+(106-global_values->get(19)*53), -1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((TextBlitter*)get_instance(achievementdescription_272_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(helpmessage_148_instances))->load(str_data_font_bmp_7);
        stageicon1_212_instances.clear_selection();
        spread_value(stageicon1_212_instances, 0, 0);
        spread_value(stageicon1_212_instances, 4, 0);
        mapicon_265_instances.clear_selection();
        spread_value(mapicon_265_instances, 0, 1);
        global_values->set(3, 0);
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(0)*123)%math_helper%300);
        }
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(0, ((Active*)get_instance(arrow1_269_instances))->get_x());
        ((Active*)get_instance(arrow2_270_instances))->alterables->values.set(0, ((Active*)get_instance(arrow2_270_instances))->get_x());
        achievement_257_instances.clear_selection();
        spread_value(achievement_257_instances, 0, 1);
        for (ObjectIterator it(achievement_257_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(blackborder_271_instances))->set_x_scale(322);
    }
    event_6_10_end: ;
}
void Frames::event_func_1035()
{
    // event 7_10
    {
        if (!(group_gallery_1)) goto event_7_10_end;
        if (!(!media.is_channel_playing(32-1))) goto event_7_10_end;
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_results_ogg_39, 32-1, 0);
    }
    event_7_10_end: ;
}
void Frames::event_func_1036()
{
    // event 14_10
    {
        if (!(group_gallery_1)) goto event_14_10_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(21, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_y());
        }
    }
    event_14_10_end: ;
}
void Frames::on_frame_11_start_events()
{
    event_func_823();
    event_func_1031();
    event_func_1032();
    event_func_1033();
    event_func_1034();
    event_func_1035();
    event_func_1036();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_11_init()
{
    index = 10;
    width = 644;
    height = 1600;
    virtual_width = 644;
    virtual_height = 1600;
    background_color = Color(8, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(4);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_3_instances[] = {&stageicon1_212_instances, &achievement_257_instances, &mapicon_265_instances, &header_266_instances, &arrow1_269_instances, &arrow2_270_instances, NULL};
    qualifier_3.set(6, &qualifier_3_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&return_111_instances, &charname1_142_instances, NULL};
    qualifier_1.set(2, &qualifier_1_instances[0]);
    add_background_object(create_quickbackdrop_262(0, 0), 1);
    add_background_object(create_checkerpattern_263(472, 0), 1);
    add_background_object(create_checkerpattern_263(8, 0), 1);
    add_object(create_achievement_257(444, 312), 1);
    add_object(create_achievement_257(404, 312), 1);
    add_object(create_achievement_257(364, 312), 1);
    add_object(create_achievement_257(324, 312), 1);
    add_object(create_achievement_257(284, 312), 1);
    add_object(create_achievement_257(244, 312), 1);
    add_object(create_achievement_257(204, 312), 1);
    add_object(create_achievement_257(164, 312), 1);
    add_object(create_achievement_257(444, 272), 1);
    add_object(create_achievement_257(404, 272), 1);
    add_object(create_achievement_257(364, 272), 1);
    add_object(create_achievement_257(324, 272), 1);
    add_object(create_achievement_257(284, 272), 1);
    add_object(create_achievement_257(244, 272), 1);
    add_object(create_achievement_257(204, 272), 1);
    add_object(create_achievement_257(164, 272), 1);
    add_object(create_achievement_257(444, 232), 1);
    add_object(create_achievement_257(404, 232), 1);
    add_object(create_achievement_257(364, 232), 1);
    add_object(create_achievement_257(324, 232), 1);
    add_object(create_achievement_257(284, 232), 1);
    add_object(create_achievement_257(244, 232), 1);
    add_object(create_achievement_257(204, 232), 1);
    add_object(create_achievement_257(164, 232), 1);
    add_object(create_achievement_257(444, 192), 1);
    add_object(create_achievement_257(404, 192), 1);
    add_object(create_achievement_257(364, 192), 1);
    add_object(create_achievement_257(324, 192), 1);
    add_object(create_achievement_257(284, 192), 1);
    add_object(create_achievement_257(244, 192), 1);
    add_object(create_achievement_257(204, 192), 1);
    add_object(create_achievement_257(164, 192), 1);
    add_object(create_achievement_257(444, 152), 1);
    add_object(create_achievement_257(404, 152), 1);
    add_object(create_achievement_257(364, 152), 1);
    add_object(create_achievement_257(324, 152), 1);
    add_object(create_achievement_257(284, 152), 1);
    add_object(create_achievement_257(244, 152), 1);
    add_object(create_achievement_257(204, 152), 1);
    add_object(create_achievement_257(164, 152), 1);
    add_object(create_achievement_257(444, 112), 1);
    add_object(create_achievement_257(404, 112), 1);
    add_object(create_achievement_257(364, 112), 1);
    add_object(create_achievement_257(324, 112), 1);
    add_object(create_achievement_257(284, 112), 1);
    add_object(create_achievement_257(244, 112), 1);
    add_object(create_achievement_257(204, 112), 1);
    add_object(create_achievement_257(164, 112), 1);
    add_object(create_achievement_257(444, 72), 1);
    add_object(create_achievement_257(404, 72), 1);
    add_object(create_achievement_257(364, 72), 1);
    add_object(create_achievement_257(324, 72), 1);
    add_object(create_achievement_257(284, 72), 1);
    add_object(create_achievement_257(244, 72), 1);
    add_object(create_achievement_257(204, 72), 1);
    add_object(create_achievement_257(164, 72), 1);
    add_background_object(create_separatormasterobjects2_12(-192, -24), 2);
    add_object(create_playerinput_19(-176, 0), 2);
    add_object(create_masterinput_20(-152, 0), 2);
    add_object(create_inputsp1_21(-128, 0), 2);
    add_object(create_globalinputdata_22(-104, 0), 2);
    add_object(create_ringsparkle_139(-73, 167), 2);
    add_object(create_charname1_142(40, 335), 2);
    add_object(create_active2_264(-8, -280), 2);
    add_object(create_mapicon_265(454, 445), 2);
    add_object(create_mapicon_265(430, 445), 2);
    add_object(create_mapicon_265(406, 445), 2);
    add_object(create_mapicon_265(382, 445), 2);
    add_object(create_mapicon_265(358, 445), 2);
    add_object(create_mapicon_265(334, 445), 2);
    add_object(create_mapicon_265(310, 445), 2);
    add_object(create_mapicon_265(286, 445), 2);
    add_object(create_mapicon_265(262, 445), 2);
    add_object(create_mapicon_265(238, 445), 2);
    add_object(create_mapicon_265(454, 405), 2);
    add_object(create_mapicon_265(430, 405), 2);
    add_object(create_mapicon_265(406, 405), 2);
    add_object(create_mapicon_265(382, 405), 2);
    add_object(create_mapicon_265(358, 405), 2);
    add_object(create_mapicon_265(334, 405), 2);
    add_object(create_mapicon_265(310, 405), 2);
    add_object(create_mapicon_265(286, 405), 2);
    add_object(create_mapicon_265(262, 405), 2);
    add_object(create_mapicon_265(238, 405), 2);
    add_object(create_mapicon_265(454, 365), 2);
    add_object(create_mapicon_265(430, 365), 2);
    add_object(create_mapicon_265(406, 365), 2);
    add_object(create_mapicon_265(382, 365), 2);
    add_object(create_mapicon_265(358, 365), 2);
    add_object(create_mapicon_265(334, 365), 2);
    add_object(create_mapicon_265(310, 365), 2);
    add_object(create_mapicon_265(286, 365), 2);
    add_object(create_mapicon_265(262, 365), 2);
    add_object(create_mapicon_265(238, 365), 2);
    add_object(create_mapicon_265(454, 325), 2);
    add_object(create_mapicon_265(430, 325), 2);
    add_object(create_mapicon_265(406, 325), 2);
    add_object(create_mapicon_265(382, 325), 2);
    add_object(create_mapicon_265(358, 325), 2);
    add_object(create_mapicon_265(334, 325), 2);
    add_object(create_mapicon_265(310, 325), 2);
    add_object(create_mapicon_265(286, 325), 2);
    add_object(create_mapicon_265(262, 325), 2);
    add_object(create_mapicon_265(238, 325), 2);
    add_object(create_mapicon_265(454, 285), 2);
    add_object(create_mapicon_265(430, 285), 2);
    add_object(create_mapicon_265(406, 285), 2);
    add_object(create_mapicon_265(382, 285), 2);
    add_object(create_mapicon_265(358, 285), 2);
    add_object(create_mapicon_265(334, 285), 2);
    add_object(create_mapicon_265(310, 285), 2);
    add_object(create_mapicon_265(286, 285), 2);
    add_object(create_mapicon_265(262, 285), 2);
    add_object(create_mapicon_265(238, 285), 2);
    add_object(create_mapicon_265(454, 245), 2);
    add_object(create_mapicon_265(430, 245), 2);
    add_object(create_mapicon_265(406, 245), 2);
    add_object(create_mapicon_265(382, 245), 2);
    add_object(create_mapicon_265(358, 245), 2);
    add_object(create_mapicon_265(334, 245), 2);
    add_object(create_mapicon_265(310, 245), 2);
    add_object(create_mapicon_265(286, 245), 2);
    add_object(create_mapicon_265(262, 245), 2);
    add_object(create_mapicon_265(238, 245), 2);
    add_object(create_mapicon_265(454, 205), 2);
    add_object(create_mapicon_265(430, 205), 2);
    add_object(create_mapicon_265(406, 205), 2);
    add_object(create_mapicon_265(382, 205), 2);
    add_object(create_mapicon_265(358, 205), 2);
    add_object(create_mapicon_265(334, 205), 2);
    add_object(create_mapicon_265(310, 205), 2);
    add_object(create_mapicon_265(286, 205), 2);
    add_object(create_mapicon_265(262, 205), 2);
    add_object(create_mapicon_265(238, 205), 2);
    add_object(create_mapicon_265(454, 165), 2);
    add_object(create_mapicon_265(430, 165), 2);
    add_object(create_mapicon_265(406, 165), 2);
    add_object(create_mapicon_265(382, 165), 2);
    add_object(create_mapicon_265(358, 165), 2);
    add_object(create_mapicon_265(334, 165), 2);
    add_object(create_mapicon_265(310, 165), 2);
    add_object(create_mapicon_265(286, 165), 2);
    add_object(create_mapicon_265(262, 165), 2);
    add_object(create_mapicon_265(238, 165), 2);
    add_object(create_mapicon_265(454, 125), 2);
    add_object(create_mapicon_265(430, 125), 2);
    add_object(create_mapicon_265(406, 125), 2);
    add_object(create_mapicon_265(382, 125), 2);
    add_object(create_mapicon_265(358, 125), 2);
    add_object(create_mapicon_265(334, 125), 2);
    add_object(create_mapicon_265(310, 125), 2);
    add_object(create_mapicon_265(286, 125), 2);
    add_object(create_mapicon_265(262, 125), 2);
    add_object(create_mapicon_265(238, 125), 2);
    add_object(create_mapicon_265(454, 85), 2);
    add_object(create_mapicon_265(430, 85), 2);
    add_object(create_mapicon_265(406, 85), 2);
    add_object(create_mapicon_265(382, 85), 2);
    add_object(create_mapicon_265(358, 85), 2);
    add_object(create_mapicon_265(334, 85), 2);
    add_object(create_mapicon_265(310, 85), 2);
    add_object(create_mapicon_265(286, 85), 2);
    add_object(create_mapicon_265(262, 85), 2);
    add_object(create_mapicon_265(238, 85), 2);
    add_object(create_stageicon1_212(172, 432), 2);
    add_object(create_stageicon1_212(172, 392), 2);
    add_object(create_stageicon1_212(172, 352), 2);
    add_object(create_stageicon1_212(172, 312), 2);
    add_object(create_stageicon1_212(172, 272), 2);
    add_object(create_stageicon1_212(172, 232), 2);
    add_object(create_stageicon1_212(172, 192), 2);
    add_object(create_stageicon1_212(172, 152), 2);
    add_object(create_stageicon1_212(172, 112), 2);
    add_object(create_stageicon1_212(172, 72), 2);
    add_object(create_return_111(327, 15), 2);
    add_object(create_sarassteampluginfreedomplanet_26(64, -40), 2);
    add_object(create_header_266(325, 46), 2);
    add_object(create_listnames_267(-176, 112), 2);
    add_object(create_listdescriptions_268(-176, 144), 2);
    add_object(create_crystalcursor_140(147, 85), 2);
    add_object(create_arrow1_269(200, 48), 2);
    add_object(create_arrow2_270(440, 48), 2);
    add_object(create_blackborder_271(0, 36), 2);
    add_object(create_achievementdescription_272(120, 8), 2);
    add_object(create_mapdata_30(-144, 56), 2);
    add_object(create_savedata_28(128, -40), 2);
    add_object(create_windowcontrol_27(-144, 24), 2);
    add_object(create_mapdata2_32(-144, 64), 2);
    add_object(create_recorddata_34(96, -40), 2);
    add_background_object(create_backgroundsystembox_146(0, 0), 3);
    add_background_object(create_backdrop_273(96, 200), 3);
    add_background_object(create_backdrop_273(272, 200), 3);
    add_background_object(create_backdrop_273(448, 200), 3);
    add_object(create_helpmessage_274(112, 216), 3);
    add_object(create_fade_54(48, -376), 3);
    add_object(create_fadein_149(192, 0), 3);
    add_object(create_fadein_149(224, 0), 3);
    add_object(create_fadein_149(256, 0), 3);
    add_object(create_fadein_149(288, 0), 3);
    add_object(create_fadein_149(320, 0), 3);
    add_object(create_fadein_149(352, 0), 3);
    add_object(create_fadein_149(384, 0), 3);
    add_object(create_fadein_149(416, 0), 3);
    add_object(create_fadein_149(448, 0), 3);
    add_object(create_fadein_149(480, 0), 3);
    add_object(create_fadein_149(192, 32), 3);
    add_object(create_fadein_149(224, 32), 3);
    add_object(create_fadein_149(256, 32), 3);
    add_object(create_fadein_149(288, 32), 3);
    add_object(create_fadein_149(320, 32), 3);
    add_object(create_fadein_149(352, 32), 3);
    add_object(create_fadein_149(384, 32), 3);
    add_object(create_fadein_149(416, 32), 3);
    add_object(create_fadein_149(448, 32), 3);
    add_object(create_fadein_149(480, 32), 3);
    add_object(create_fadein_149(192, 64), 3);
    add_object(create_fadein_149(224, 64), 3);
    add_object(create_fadein_149(256, 64), 3);
    add_object(create_fadein_149(288, 64), 3);
    add_object(create_fadein_149(320, 64), 3);
    add_object(create_fadein_149(352, 64), 3);
    add_object(create_fadein_149(384, 64), 3);
    add_object(create_fadein_149(416, 64), 3);
    add_object(create_fadein_149(448, 64), 3);
    add_object(create_fadein_149(480, 64), 3);
    add_object(create_fadein_149(192, 96), 3);
    add_object(create_fadein_149(224, 96), 3);
    add_object(create_fadein_149(256, 96), 3);
    add_object(create_fadein_149(288, 96), 3);
    add_object(create_fadein_149(320, 96), 3);
    add_object(create_fadein_149(352, 96), 3);
    add_object(create_fadein_149(384, 96), 3);
    add_object(create_fadein_149(416, 96), 3);
    add_object(create_fadein_149(448, 96), 3);
    add_object(create_fadein_149(480, 96), 3);
    add_object(create_fadein_149(192, 128), 3);
    add_object(create_fadein_149(224, 128), 3);
    add_object(create_fadein_149(256, 128), 3);
    add_object(create_fadein_149(288, 128), 3);
    add_object(create_fadein_149(320, 128), 3);
    add_object(create_fadein_149(352, 128), 3);
    add_object(create_fadein_149(384, 128), 3);
    add_object(create_fadein_149(416, 128), 3);
    add_object(create_fadein_149(448, 128), 3);
    add_object(create_fadein_149(480, 128), 3);
    add_object(create_fadein_149(192, 160), 3);
    add_object(create_fadein_149(224, 160), 3);
    add_object(create_fadein_149(256, 160), 3);
    add_object(create_fadein_149(288, 160), 3);
    add_object(create_fadein_149(320, 160), 3);
    add_object(create_fadein_149(352, 160), 3);
    add_object(create_fadein_149(384, 160), 3);
    add_object(create_fadein_149(416, 160), 3);
    add_object(create_fadein_149(448, 160), 3);
    add_object(create_fadein_149(480, 160), 3);
    add_object(create_fadein_149(192, 192), 3);
    add_object(create_fadein_149(224, 192), 3);
    add_object(create_fadein_149(256, 192), 3);
    add_object(create_fadein_149(288, 192), 3);
    add_object(create_fadein_149(320, 192), 3);
    add_object(create_fadein_149(352, 192), 3);
    add_object(create_fadein_149(384, 192), 3);
    add_object(create_fadein_149(416, 192), 3);
    add_object(create_fadein_149(448, 192), 3);
    add_object(create_fadein_149(480, 192), 3);
    add_object(create_fadein_149(192, 224), 3);
    add_object(create_fadein_149(224, 224), 3);
    add_object(create_fadein_149(256, 224), 3);
    add_object(create_fadein_149(288, 224), 3);
    add_object(create_fadein_149(320, 224), 3);
    add_object(create_fadein_149(352, 224), 3);
    add_object(create_fadein_149(384, 224), 3);
    add_object(create_fadein_149(416, 224), 3);
    add_object(create_fadein_149(448, 224), 3);
    add_object(create_fadein_149(480, 224), 3);
    add_object(create_fadein_149(160, 0), 3);
    add_object(create_fadein_149(160, 32), 3);
    add_object(create_fadein_149(160, 64), 3);
    add_object(create_fadein_149(160, 96), 3);
    add_object(create_fadein_149(160, 128), 3);
    add_object(create_fadein_149(160, 160), 3);
    add_object(create_fadein_149(160, 192), 3);
    add_object(create_fadein_149(160, 224), 3);
    add_object(create_fadein_149(512, 0), 3);
    add_object(create_fadein_149(512, 32), 3);
    add_object(create_fadein_149(512, 64), 3);
    add_object(create_fadein_149(512, 96), 3);
    add_object(create_fadein_149(512, 128), 3);
    add_object(create_fadein_149(512, 160), 3);
    add_object(create_fadein_149(512, 192), 3);
    add_object(create_fadein_149(512, 224), 3);
    add_object(create_fadein_149(128, 0), 3);
    add_object(create_fadein_149(128, 32), 3);
    add_object(create_fadein_149(128, 64), 3);
    add_object(create_fadein_149(128, 96), 3);
    add_object(create_fadein_149(128, 128), 3);
    add_object(create_fadein_149(128, 160), 3);
    add_object(create_fadein_149(128, 192), 3);
    add_object(create_fadein_149(128, 224), 3);
    add_object(create_fadein_149(96, 0), 3);
    add_object(create_fadein_149(96, 32), 3);
    add_object(create_fadein_149(96, 64), 3);
    add_object(create_fadein_149(96, 96), 3);
    add_object(create_fadein_149(96, 128), 3);
    add_object(create_fadein_149(96, 160), 3);
    add_object(create_fadein_149(96, 192), 3);
    add_object(create_fadein_149(96, 224), 3);
    loop_ac_running = false;
    loop_ac_index = 0;
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
    loop_check_a_running = false;
    loop_check_a_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_cards_running = false;
    loop_cards_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loops = NULL;
    once_condition_18_10 = false;
    group_gallery_1 = true;
    once_condition_138_0 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_121_0 = loop_count;
    group_gallery_character_selected_1 = false;
    group_gallery_content_display_1 = true;
    group_debug_mode_debugging_1 = false;
    group_sound_events_spade_1 = false;
    not_always_23_10 = loop_count;
    not_always_95_0 = loop_count;
    once_condition_16_10 = false;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_sound_events_milla_1 = false;
    group_gallery_transition_1 = false;
    not_always_103_0 = loop_count;
    not_always_54_10 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    not_always_55_10 = loop_count;
    group_sound_events_lilac_1 = false;
    not_always_63_10 = loop_count;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_13_10 = loop_count;
    not_always_24_10 = loop_count;
    not_always_168_0 = loop_count;
    group_gallery_main_menu_select_1 = true;
    not_always_66_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_101_0 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    group_gallery_fade_in_1 = true;
    not_always_102_0 = loop_count;
    not_always_21_10 = loop_count;
    not_always_22_10 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_25_10 = loop_count;
}
void Frames::test_collisions_11()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_1037()
{
    // event 3_11
    {
        checkerpattern_132_instances.clear_selection();
        for (ObjectIterator it(checkerpattern_132_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->get_x(), 0-((SystemBox*)*it)->alterables->values.get(0));
            ((SystemBox*)*it)->alterables->values.set(0, (((SystemBox*)*it)->alterables->values.get(0)+0.5)%math_helper%64);
        }
    }
    event_3_11_end: ;
}
void Frames::event_func_1038()
{
    // event 8_11
    {
        if (!(group_fade_in_1)) goto event_8_11_end;
        if (!((fadein_149_instances.size()) == (0))) goto event_8_11_end;
            group_fade_in_1 = false;
    
        if (!group_main_menu_select_1) {
            group_main_menu_select_1 = true;
        }
    }
    event_8_11_end: ;
}
void Frames::event_func_1039()
{
    // event 14_11
    {
        // group: Stage IDs
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, ((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)+1);
    }
    event_14_11_end: ;
}
void Frames::event_func_1040()
{
    // event 15_11
    {
        // group: Stage IDs
        if (!((global_values->get(1)) == (0))) goto event_15_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) >= (7))) goto event_15_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, ((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)+2);
    }
    event_15_11_end: ;
}
void Frames::event_func_1041()
{
    // event 16_11
    {
        // group: Stage IDs
        if (!((global_values->get(1)) == (4))) goto event_16_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) == (0))) goto event_16_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, 0);
    }
    event_16_11_end: ;
}
void Frames::event_func_1042()
{
    // event 17_11
    {
        // group: Stage IDs
        if (!((global_values->get(1)) >= (2))) goto event_17_11_end;
        if (!((global_values->get(1)) <= (4))) goto event_17_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) == (5))) goto event_17_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, 8);
    }
    event_17_11_end: ;
}
void Frames::event_func_1043()
{
    // event 18_11
    {
        // group: Stage IDs
        if (!((global_values->get(1)) >= (2))) goto event_18_11_end;
        if (!((global_values->get(1)) <= (4))) goto event_18_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) == (6))) goto event_18_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, 6);
    }
    event_18_11_end: ;
}
void Frames::event_func_1044()
{
    // event 19_11
    {
        // group: Stage IDs
        if (!((global_values->get(1)) >= (2))) goto event_19_11_end;
        if (!((global_values->get(1)) <= (4))) goto event_19_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) >= (7))) goto event_19_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(4, ((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)+2);
    }
    event_19_11_end: ;
}
void Frames::event_func_1045()
{
    // event 20_11
    {
        if (!(group_main_menu_select_1)) goto event_20_11_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_20_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) > (0))) goto event_20_11_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, -1);
    }
    event_20_11_end: ;
}
void Frames::event_func_1046()
{
    // event 21_11
    {
        if (!(group_main_menu_select_1)) goto event_21_11_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_21_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) < (1))) goto event_21_11_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, 1);
    }
    event_21_11_end: ;
}
void Frames::event_func_1047()
{
    // event 22_11
    bool or_result_22_11 = false;
    bool or_temp_result_22_11_0 = false;
    {
        if (!(group_main_menu_select_1)) goto or_event_22_11_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_22_11_0_end;
        or_result_22_11 = true;
        or_temp_result_22_11_0 = true;
    }
    or_event_22_11_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_22_11_0) {
        playerinput_19_instances.save_selection();
    }
    // event 22_11
    bool or_temp_result_22_11_1 = false;
    {
        if (!(group_main_menu_select_1)) goto or_event_22_11_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_22_11_1_end;
        or_result_22_11 = true;
        or_temp_result_22_11_1 = true;
        or_event_22_11_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_22_11_1) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_22_11) goto or_final_or_event_22_11_1_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_22_11_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_22_11_1) {
            inputsp1_21_instances.restore_selection();
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_22_11_1_end: ;
}
void Frames::event_func_1048()
{
    // event 23_11
    {
        if (!(group_main_menu_select_1)) goto event_23_11_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_23_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_23_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(0, (((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)+1)%math_helper%12);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(25, 3);
    }
    event_23_11_end: ;
}
void Frames::event_func_1049()
{
    // event 24_11
    {
        if (!(group_main_menu_select_1)) goto event_24_11_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_24_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_24_11_end;
        ((Active*)get_instance(stageicon1_212_instances))->alterables->values.set(0, (((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)+11)%math_helper%12);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(stagename_213_instances))->alterables->values.set(25, 3);
    }
    event_24_11_end: ;
}
void Frames::event_func_1050()
{
    // event 25_11
    {
        if (!(group_main_menu_select_1)) goto event_25_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)) > (10))) goto event_25_11_end;
        set_display_center(320+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1), -1);
        set_display_center(-1, 120+randrange((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-10)*0.1));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_min(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18), 50));
    }
    event_25_11_end: ;
}
void Frames::event_func_1051()
{
    // event 26_11
    {
        if (!(group_main_menu_select_1)) goto event_26_11_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(18, get_max(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(18)-1, 0));
    }
    event_26_11_end: ;
}
void Frames::event_func_1052()
{
    // event 27_11
    bool or_result_27_11 = false;
    bool or_temp_result_27_11_0 = false;
    {
        if (!(group_main_menu_select_1)) goto or_event_27_11_0_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto or_event_27_11_0_end;
        or_result_27_11 = true;
        or_temp_result_27_11_0 = true;
    }
    or_event_27_11_0_end: ;
    charname1_142_instances.clear_saved_selection();
    if (or_temp_result_27_11_0) {
        charname1_142_instances.save_selection();
    }
    // event 27_11
    bool or_temp_result_27_11_1 = false;
    {
        if (!(group_main_menu_select_1)) goto or_event_27_11_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_27_11_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_27_11_1_end;
        or_result_27_11 = true;
        or_temp_result_27_11_1 = true;
        or_event_27_11_1_end: ;
        crystalcursor_75_instances.clear_saved_selection();
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_27_11_1) {
            crystalcursor_75_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_27_11) goto or_final_or_event_27_11_1_end;
        crystalcursor_75_instances.empty_selection();
        charname1_142_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_27_11_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_27_11_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_27_11_0) {
            charname1_142_instances.restore_selection();
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
            group_main_menu_select_1 = false;
    
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
    or_final_or_event_27_11_1_end: ;
}
void Frames::event_func_1053()
{
    // event 28_11
    {
        if (!(group_main_menu_select_1)) goto event_28_11_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_28_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) != (1))) goto event_28_11_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(1, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_28_11_end: ;
}
void Frames::event_func_1054()
{
    // event 29_11
    {
        // group: Selected options
        ((Active*)get_instance(stageicon1_212_instances))->force_frame(((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(4));
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_text(((Text*)get_instance(stagelist_38_instances))->get_paragraph(((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(4)));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, string_to_number(((Text*)get_instance(stageidlist_127_instances))->get_paragraph(((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(4)-1)));
        ((Active*)get_instance(stagename_213_instances))->force_frame(((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(4));
    }
    event_29_11_end: ;
}
void Frames::event_func_1055()
{
    // event 30_11
    {
        // group: Selected options
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_30_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(stageicon1_212_instances));
            if (parent == NULL) goto pos_end_30_11_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_x() + 24, parent->get_y() + -8);
            pos_end_30_11_0: ;
        }
        ((Active*)get_instance(arrow1_269_instances))->set_x(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(0)-((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3));
        {
            ((Active*)get_instance(arrow1_269_instances))->blend_color.set_semi_transparency(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)*2);
        }
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(3, (((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)+2)%math_helper%48);
        ((Active*)get_instance(arrow2_270_instances))->set_x(((Active*)get_instance(arrow2_270_instances))->alterables->values.get(0)+((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3));
        {
            ((Active*)get_instance(arrow2_270_instances))->blend_color.set_semi_transparency(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(3)*2);
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(8);
    }
    event_30_11_end: ;
}
void Frames::event_func_1056()
{
    // event 31_11
    {
        // group: Selected options
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (1))) goto event_31_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_31_11_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_31_11_0: ;
        }
        ((Active*)get_instance(arrow1_269_instances))->set_x(((Active*)get_instance(arrow1_269_instances))->alterables->values.get(0));
        ((Active*)get_instance(arrow1_269_instances))->alterables->values.set(3, 0);
        {
            ((Active*)get_instance(arrow1_269_instances))->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(arrow2_270_instances))->set_x(((Active*)get_instance(arrow2_270_instances))->alterables->values.get(0));
        {
            ((Active*)get_instance(arrow2_270_instances))->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_direction(0);
    }
    event_31_11_end: ;
}
void Frames::event_func_1057()
{
    // event 32_11
    {
        // group: Selected options
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_32_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (1))) goto event_32_11_end;
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_32_11_end: ;
}
void Frames::event_func_1058()
{
    // event 33_11
    {
        // group: Selected options
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_33_11_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(18, 7);
    }
    event_33_11_end: ;
}
void Frames::event_func_1059()
{
    // event 35_11
    {
        if (!(group_transition_1)) goto event_35_11_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_35_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_35_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) == (0))) goto event_35_11_end;
        if (!((global_values->get(1)) != (4))) goto event_35_11_end;
        next_frame = 20 + 0;    
    
        global_values->set(4, 0);
    }
    event_35_11_end: ;
}
void Frames::event_func_1060()
{
    // event 36_11
    {
        if (!(group_transition_1)) goto event_36_11_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_36_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_36_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) == (0))) goto event_36_11_end;
        if (!((global_values->get(1)) == (4))) goto event_36_11_end;
        next_frame = 16 + 0;    
    
        global_values->set(4, 0);
    }
    event_36_11_end: ;
}
void Frames::event_func_1061()
{
    // event 37_11
    {
        if (!(group_transition_1)) goto event_37_11_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_37_11_end;
        if (!((((Active*)get_instance(stageicon1_212_instances))->alterables->values.get(0)) > (0))) goto event_37_11_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3)) == (0))) goto event_37_11_end;
        next_frame = 8 + 0;    
    
    }
    event_37_11_end: ;
}
