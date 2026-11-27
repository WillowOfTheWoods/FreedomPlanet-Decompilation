#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20121()
{
    // event 2505_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2505_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (202))) goto event_2505_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3000))) goto event_2505_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 60);
    }
    event_2505_83_end: ;
}
void Frames::event_func_20122()
{
    // event 2506_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2506_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_2506_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2506_83_end: ;
}
void Frames::event_func_20123()
{
    // event 2507_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2507_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2507_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_2507_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(1000);
            ((Active*)*it)->set_y(5362);
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2507_83_end: ;
}
void Frames::event_func_20124()
{
    // event 2508_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2508_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2508_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2508_83_end: ;
}
void Frames::event_func_20125()
{
    // event 2509_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2509_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2509_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2509_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (220))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2509_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2509_83_end: ;
}
void Frames::event_func_20126()
{
    // event 2510_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2510_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_2510_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2510_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2510_83_end: ;
}
void Frames::event_func_20127()
{
    // event 2511_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2511_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2511_83_end;
        if (not_always_2511_83 > loop_count) {
            not_always_2511_83 = loop_count + 2;
            goto event_2511_83_end;
        }
        not_always_2511_83 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_2511_83_end: ;
}
void Frames::event_func_20128()
{
    // event 2512_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2512_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2512_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_2512_83_end: ;
}
void Frames::event_func_20129()
{
    // event 2513_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2513_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2513_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2513_83_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        global_values->set(4, 0);
        next_frame = 44 + 0;    
    
    }
    event_2513_83_end: ;
}
void Frames::event_func_20130()
{
    // event 2515_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2515_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2515_83_end: ;
}
void Frames::event_func_20131()
{
    // event 2516_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2516_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2516_83_end;
        if (once_condition_2516_83) goto event_2516_83_end;
        once_condition_2516_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 184);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 5920);
    }
    event_2516_83_end: ;
}
void Frames::event_func_20132()
{
    // event 2517_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2517_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2517_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(96);
            ((Active*)*it)->set_y(5700);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(50);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(96);
            ((Active*)*it)->set_y(5700);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(24);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2517_83_end: ;
}
void Frames::event_func_20133()
{
    // event 2518_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2518_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2518_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2518_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_storm_drainage_tunnel_336+newline_character+str_shang_tu_314);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2518_83_end: ;
}
void Frames::event_func_20134()
{
    // event 2519_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2519_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2519_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2519_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+15, 5970));
        }
    }
    event_2519_83_end: ;
}
void Frames::event_func_20135()
{
    // event 2520_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2520_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2520_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2520_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (5970))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2520_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_2520_83_end: ;
}
void Frames::event_func_20136()
{
    // event 2521_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2521_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2521_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2521_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (220))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2521_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2521_83_end: ;
}
void Frames::event_func_20137()
{
    // event 2522_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2522_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2522_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2522_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (220))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2522_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2522_83_end: ;
}
void Frames::event_func_20138()
{
    // event 2523_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2523_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2523_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+12, 5970));
        }
    }
    event_2523_83_end: ;
}
void Frames::event_func_20139()
{
    // event 2524_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2524_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2524_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (5970))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2524_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 203);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2524_83_end: ;
}
void Frames::event_func_20140()
{
    // event 2525_83
    bool or_result_2525_83 = false;
    bool or_temp_result_2525_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto or_event_2525_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2525_83_0_end;
        or_result_2525_83 = true;
        or_temp_result_2525_83_0 = true;
    }
    or_event_2525_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2525_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2525_83
    bool or_temp_result_2525_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto or_event_2525_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2525_83_1_end;
        or_result_2525_83 = true;
        or_temp_result_2525_83_1 = true;
    }
    or_event_2525_83_1_end: ;
    if (or_temp_result_2525_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2525_83
    bool or_temp_result_2525_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto or_event_2525_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2525_83_2_end;
        or_result_2525_83 = true;
        or_temp_result_2525_83_2 = true;
        or_event_2525_83_2_end: ;
        if (or_temp_result_2525_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2525_83) goto or_final_or_event_2525_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2525_83_0 || or_temp_result_2525_83_1 || or_temp_result_2525_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2525_83_2_end: ;
}
void Frames::event_func_20141()
{
    // event 2526_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2526_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2526_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (203))) goto event_2526_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (206))) goto event_2526_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2526_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.set_channel_position(20-1, 0);
    }
    event_2526_83_end: ;
}
void Frames::event_func_20142()
{
    // event 2527_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2527_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (204))) goto event_2527_83_end;
        if (not_always_2527_83 > loop_count) {
            not_always_2527_83 = loop_count + 2;
            goto event_2527_83_end;
        }
        not_always_2527_83 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2527_83_end: ;
}
void Frames::event_func_20143()
{
    // event 2528_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2528_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (206))) goto event_2528_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2000))) goto event_2528_83_end;
        if (not_always_2528_83 > loop_count) {
            not_always_2528_83 = loop_count + 2;
            goto event_2528_83_end;
        }
        not_always_2528_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
    }
    event_2528_83_end: ;
}
void Frames::event_func_20144()
{
    // event 2529_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2529_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2529_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (206))) goto event_2529_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2529_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2529_83_end: ;
}
void Frames::event_func_20145()
{
    // event 2530_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2530_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2530_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2530_83_end: ;
}
void Frames::event_func_20146()
{
    // event 2531_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2531_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2531_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2531_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2531_83_end: ;
}
void Frames::event_func_20147()
{
    // event 2532_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2532_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2532_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (220))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2532_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2532_83_end: ;
}
void Frames::event_func_20148()
{
    // event 2533_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2533_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2533_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (220))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2533_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2533_83_end: ;
}
void Frames::event_func_20149()
{
    // event 2534_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2534_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2534_83_end;
        if (not_always_2534_83 > loop_count) {
            not_always_2534_83 = loop_count + 2;
            goto event_2534_83_end;
        }
        not_always_2534_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2534_83_end: ;
}
void Frames::event_func_20150()
{
    // event 2535_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2535_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2535_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2535_83_end: ;
}
void Frames::event_func_20151()
{
    // event 2536_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_trap_hideout_1)) goto event_2536_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2536_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2536_83_end;
        global_values->set(4, 0);
        next_frame = 56 + 0;    
    
    }
    event_2536_83_end: ;
}
void Frames::event_func_20152()
{
    // event 2538_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2538_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2538_83_end: ;
}
void Frames::event_func_20153()
{
    // event 2539_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2539_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2539_83_end;
        if (once_condition_2539_83) goto event_2539_83_end;
        once_condition_2539_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 600);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 5300);
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_jade_creek_outskirts_334+newline_character+str_20_minutes_later_337);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_2539_83_end: ;
}
void Frames::event_func_20154()
{
    // event 2540_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2540_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2540_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_2540_83_end;
        if (once_condition_2540_83) goto event_2540_83_end;
        once_condition_2540_83 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2540_83_end: ;
}
void Frames::event_func_20155()
{
    // event 2541_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2541_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2541_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_2541_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2541_83_end: ;
}
void Frames::event_func_20156()
{
    // event 2542_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2542_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2542_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2542_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(1400);
            ((Active*)*it)->set_y(5362);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(1000);
            ((Active*)*it)->set_y(5362);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(1200);
            ((Active*)*it)->set_y(5362);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2542_83_end: ;
}
void Frames::event_func_20157()
{
    // event 2543_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2543_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2543_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2543_83_end: ;
}
void Frames::event_func_20158()
{
    // event 2544_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2544_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2544_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2544_83_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (260))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_2544_83_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2544_83_end: ;
}
void Frames::event_func_20159()
{
    // event 2545_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2545_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2545_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2545_83_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (260))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_2545_83_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2545_83_end: ;
}
void Frames::event_func_20160()
{
    // event 2546_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2546_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2546_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2546_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (220))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2546_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2546_83_end: ;
}
void Frames::event_func_20161()
{
    // event 2547_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2547_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2547_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2547_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (220))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2547_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2547_83_end: ;
}
void Frames::event_func_20162()
{
    // event 2548_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2548_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2548_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2548_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (180))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2548_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2548_83_end: ;
}
void Frames::event_func_20163()
{
    // event 2549_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2549_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2549_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2549_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2549_83_end: ;
}
void Frames::event_func_20164()
{
    // event 2550_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2550_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2550_83_end;
        if (not_always_2550_83 > loop_count) {
            not_always_2550_83 = loop_count + 2;
            goto event_2550_83_end;
        }
        not_always_2550_83 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_2550_83_end: ;
}
void Frames::event_func_20165()
{
    // event 2551_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2551_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2551_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_2551_83_end: ;
}
void Frames::event_func_20166()
{
    // event 2552_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1)) goto event_2552_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2552_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2552_83_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        global_values->set(4, 0);
        next_frame = 44 + 0;    
    
    }
    event_2552_83_end: ;
}
void Frames::event_func_20167()
{
    // event 2554_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2554_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2554_83_end: ;
}
void Frames::event_func_20168()
{
    // event 2555_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2555_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2555_83_end;
        if (once_condition_2555_83) goto event_2555_83_end;
        once_condition_2555_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 5300);
    }
    event_2555_83_end: ;
}
void Frames::event_func_20169()
{
    // event 2556_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2556_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2556_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2556_83_end: ;
}
void Frames::event_func_20170()
{
    // event 2557_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2557_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2557_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2557_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator it(parallaxthermalbase_4023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2557_83_end: ;
}
void Frames::event_func_20171()
{
    // event 2558_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2558_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2558_83_end;
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator it(parallaxthermalbase_4023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)-2+randrange(5));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 2);
    }
    event_2558_83_end: ;
}
void Frames::event_func_20172()
{
    // event 2559_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2559_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2559_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2559_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%33) == (0))) goto event_2559_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2559_83_0_end;
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
        dynamic_2559_83_0_end: ;
        FrameObject * single_instance_2559_83_1; single_instance_2559_83_1 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2559_83_1 == NULL)
                    single_instance_2559_83_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2559_83_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2559_83_1))->set_x(((Active*)single_instance_2559_83_1)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2559_83_1))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)-randrange(81-get_min(((Active*)get_single(parallaxthermalbase_4023_instances, default_active_instance))->alterables->values.get(1), 80)));
    }
    event_2559_83_end: ;
}
void Frames::event_func_20173()
{
    // event 2560_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2560_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2560_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2560_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%43) == (2))) goto event_2560_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2560_83_0_end;
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
        dynamic_2560_83_0_end: ;
        FrameObject * single_instance_2560_83_1; single_instance_2560_83_1 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2560_83_1 == NULL)
                    single_instance_2560_83_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2560_83_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2560_83_1))->set_x(((Active*)single_instance_2560_83_1)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2560_83_1))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)-randrange(81-get_min(((Active*)get_single(parallaxthermalbase_4023_instances, default_active_instance))->alterables->values.get(1), 80)));
    }
    event_2560_83_end: ;
}
void Frames::event_func_20174()
{
    // event 2561_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2561_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2561_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2561_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%57) == (8))) goto event_2561_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2561_83_0_end;
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
        dynamic_2561_83_0_end: ;
        FrameObject * single_instance_2561_83_1; single_instance_2561_83_1 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2561_83_1 == NULL)
                    single_instance_2561_83_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2561_83_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2561_83_1))->set_x(((Active*)single_instance_2561_83_1)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2561_83_1))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)-randrange(81-get_min(((Active*)get_single(parallaxthermalbase_4023_instances, default_active_instance))->alterables->values.get(1), 80)));
    }
    event_2561_83_end: ;
}
void Frames::event_func_20175()
{
    // event 2562_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2562_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2562_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2562_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%67) == (24))) goto event_2562_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2562_83_0_end;
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
        dynamic_2562_83_0_end: ;
        FrameObject * single_instance_2562_83_1; single_instance_2562_83_1 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2562_83_1 == NULL)
                    single_instance_2562_83_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2562_83_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2562_83_1))->set_x(((Active*)single_instance_2562_83_1)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2562_83_1))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)-randrange(81-get_min(((Active*)get_single(parallaxthermalbase_4023_instances, default_active_instance))->alterables->values.get(1), 80)));
    }
    event_2562_83_end: ;
}
void Frames::event_func_20176()
{
    // event 2563_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2563_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2563_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2563_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%2) == (0))) goto event_2563_83_end;
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator it(parallaxthermalbase_4023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        FrameObject * single_instance_2563_83_0; single_instance_2563_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2563_83_0 == NULL)
                    single_instance_2563_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2563_83_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2563_83_0))->force_speed(25);
        ((Active*)((Active*)single_instance_2563_83_0))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)+4);
        ((Active*)((Active*)single_instance_2563_83_0))->set_x(((Active*)single_instance_2563_83_0)->get_x()-randrange(60));
        {
            ((Active*)single_instance_2563_83_0)->blend_color.set_semi_transparency(64);
        }
    }
    event_2563_83_end: ;
}
void Frames::event_func_20177()
{
    // event 2564_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2564_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2564_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2564_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%2) == (0))) goto event_2564_83_end;
        FrameObject * single_instance_2564_83_0; single_instance_2564_83_0 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2564_83_0 == NULL)
                    single_instance_2564_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2564_83_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2564_83_0))->force_speed(25);
        ((Active*)((Active*)single_instance_2564_83_0))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)+4);
        ((Active*)((Active*)single_instance_2564_83_0))->set_x(((Active*)single_instance_2564_83_0)->get_x()+randrange(60));
        {
            ((Active*)single_instance_2564_83_0)->blend_color.set_semi_transparency(64);
        }
    }
    event_2564_83_end: ;
}
void Frames::event_func_20178()
{
    // event 2565_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2565_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2565_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120+244))) goto event_2565_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 12);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_2565_83_end: ;
}
void Frames::event_func_20179()
{
    // event 2566_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2566_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2566_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_2566_83_end;
        FrameObject * single_instance_2566_83_0; single_instance_2566_83_0 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2566_83_0 == NULL)
                    single_instance_2566_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2566_83_0))->force_speed(50);
        ((Active*)((Active*)single_instance_2566_83_0))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)+4);
        ((Active*)((Active*)single_instance_2566_83_0))->set_x(((Active*)single_instance_2566_83_0)->get_x()-((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*3-10+randrange(21));
        {
            ((Active*)single_instance_2566_83_0)->blend_color.set_semi_transparency(64);
        }
    }
    event_2566_83_end: ;
}
void Frames::event_func_20180()
{
    // event 2567_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2567_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2567_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_2567_83_end;
        FrameObject * single_instance_2567_83_0; single_instance_2567_83_0 = NULL;
        // select single: true false false
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator p_it(parallaxthermalbase_4023_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2567_83_0 == NULL)
                    single_instance_2567_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2567_83_0))->force_speed(50);
        ((Active*)((Active*)single_instance_2567_83_0))->set_y(((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)+4);
        ((Active*)((Active*)single_instance_2567_83_0))->set_x(((Active*)single_instance_2567_83_0)->get_x()+((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*3-10+randrange(21));
        {
            ((Active*)single_instance_2567_83_0)->blend_color.set_semi_transparency(64);
        }
    }
    event_2567_83_end: ;
}
void Frames::event_func_20181()
{
    // event 2568_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2568_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2568_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+1);
        }
    }
    event_2568_83_end: ;
}
void Frames::event_func_20182()
{
    // event 2569_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2569_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2569_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (64))) goto event_2569_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2569_83_end: ;
}
void Frames::event_func_20183()
{
    // event 2570_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2570_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2570_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2570_83_end;
        if (!((global_values->get(1)) == (0))) goto event_2570_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 4);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        effectswatersplash_416_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswatersplash_416(175, 5376), 3);
            effectswatersplash_416_instances.add_back();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(177);
            ((Active*)*it)->set_y(5401);
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(22);
            ((Active*)*it)->set_layer(3-1);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2570_83_end: ;
}
void Frames::event_func_20184()
{
    // event 2571_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2571_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2571_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(4));
            ((Active*)*it)->set_y(get_max(5361, ((Active*)*it)->get_y()-2));
        }
    }
    event_2571_83_end: ;
}
void Frames::event_func_20185()
{
    // event 2572_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2572_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2572_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2572_83_end;
        media.play_id(SOUND_POLICE_ECHO_278, -1, 1);
    }
    event_2572_83_end: ;
}
void Frames::event_func_20186()
{
    // event 2573_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2573_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2573_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2573_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(105);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 210);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2573_83_end: ;
}
void Frames::event_func_20187()
{
    // event 2574_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2574_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2574_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2574_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (150))) goto event_2574_83_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(0)-3, 700));
    }
    event_2574_83_end: ;
}
void Frames::event_func_20188()
{
    // event 2575_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2575_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2575_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_2575_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_x(470);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(5351);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
    }
    event_2575_83_end: ;
}
void Frames::event_func_20189()
{
    // event 2576_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2576_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2576_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2576_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (230))) goto event_2576_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
    }
    event_2576_83_end: ;
}
void Frames::event_func_20190()
{
    // event 2577_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2577_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2577_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (230))) goto event_2577_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
    }
    event_2577_83_end: ;
}
void Frames::event_func_20191()
{
    // event 2578_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2578_83_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->set_y(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(2))*5);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(2, (((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(2)+2)%math_helper%360);
        ((Active*)get_instance(bosshovercop_2332_instances))->set_x(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(0, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4));
        ((Active*)get_instance(bosshovercopturbine1_2333_instances))->move_front(((Active*)get_instance(bosshovercop_2332_instances)));
        ((Active*)get_instance(bosshovercopsiren1_2336_instances))->move_front(((Active*)get_instance(bosshovercopturbine1_2333_instances)));
        ((Active*)get_instance(bosshovercopsiren2_2337_instances))->move_front(((Active*)get_instance(bosshovercopturbine1_2333_instances)));
        ((Active*)get_instance(bosshovercopturbine2_2331_instances))->move_back(((Active*)get_instance(bosshovercop_2332_instances)));
        ((Active*)get_instance(bosshovercopsiren4_2329_instances))->move_back(((Active*)get_instance(bosshovercopturbine2_2331_instances)));
        ((Active*)get_instance(bosshovercopsiren3_2330_instances))->move_back(((Active*)get_instance(bosshovercopturbine2_2331_instances)));
        ((Active*)get_instance(bosshovercoppropellor_2334_instances))->move_front(((Active*)get_instance(bosshovercopturbine1_2333_instances)));
        ((Active*)get_instance(bosshovercoppropellor2_2335_instances))->move_front(((Active*)get_instance(bosshovercopturbine2_2331_instances)));
    }
    event_2578_83_end: ;
}
void Frames::event_func_20192()
{
    // event 2579_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2579_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_2579_83_end;
        if (!(((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->flags.is_off(6))) goto event_2579_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2579_83_0;
            ((Active*)get_instance(bosshovercopturbine1_2333_instances))->set_global_position(parent->get_x() + -52, parent->get_y() + -31);
            pos_end_2579_83_0: ;
        }
    }
    event_2579_83_end: ;
}
void Frames::event_func_20193()
{
    // event 2580_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2580_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_2580_83_end;
        if (!(((Active*)get_instance(bosshovercopturbine2_2331_instances))->alterables->flags.is_off(6))) goto event_2580_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2580_83_0;
            ((Active*)get_instance(bosshovercopturbine2_2331_instances))->set_global_position(parent->get_x() + 28, parent->get_y() + -31);
            pos_end_2580_83_0: ;
        }
    }
    event_2580_83_end: ;
}
void Frames::event_func_20194()
{
    // event 2581_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2581_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_2581_83_end;
        if (!(((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->flags.is_off(6))) goto event_2581_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2581_83_0;
            ((Active*)get_instance(bosshovercopturbine1_2333_instances))->set_global_position(parent->get_x() + 52, parent->get_y() + -31);
            pos_end_2581_83_0: ;
        }
    }
    event_2581_83_end: ;
}
void Frames::event_func_20195()
{
    // event 2582_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2582_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_2582_83_end;
        if (!(((Active*)get_instance(bosshovercopturbine2_2331_instances))->alterables->flags.is_off(6))) goto event_2582_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2582_83_0;
            ((Active*)get_instance(bosshovercopturbine2_2331_instances))->set_global_position(parent->get_x() + -28, parent->get_y() + -31);
            pos_end_2582_83_0: ;
        }
    }
    event_2582_83_end: ;
}
void Frames::event_func_20196()
{
    // event 2583_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2583_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_2583_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2583_83_0;
            ((Active*)get_instance(bosshovercopsiren2_2337_instances))->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_2583_83_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2583_83_1;
            ((Active*)get_instance(bosshovercopsiren1_2336_instances))->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_2583_83_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2583_83_2;
            ((Active*)get_instance(bosshovercopsiren3_2330_instances))->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_2583_83_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2583_83_3;
            ((Active*)get_instance(bosshovercopsiren4_2329_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_2583_83_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2583_83_4;
            ((Active*)get_instance(bosshovercoppropellor_2334_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2583_83_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2583_83_5;
            ((Active*)get_instance(bosshovercoppropellor2_2335_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2583_83_5: ;
        }
        ((Active*)get_instance(bosshovercoppropellor_2334_instances))->set_angle((((Active*)get_instance(bosshovercoppropellor_2334_instances))->get_angle()+10)%math_helper%360, 0);
        ((Active*)get_instance(bosshovercoppropellor2_2335_instances))->set_angle((((Active*)get_instance(bosshovercoppropellor2_2335_instances))->get_angle()+10)%math_helper%360, 0);
        ((Active*)get_instance(bosshovercop_2332_instances))->set_direction(0);
        ((Active*)get_instance(bosshovercopturbine1_2333_instances))->set_direction(0);
        ((Active*)get_instance(bosshovercopturbine2_2331_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2583_83_6;
            ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_global_position(parent->get_x() + 54, parent->get_y() + 32);
            pos_end_2583_83_6: ;
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_direction(0);
    }
    event_2583_83_end: ;
}
void Frames::event_func_20197()
{
    // event 2584_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2584_83_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_2584_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2584_83_0;
            ((Active*)get_instance(bosshovercopsiren2_2337_instances))->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_2584_83_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2584_83_1;
            ((Active*)get_instance(bosshovercopsiren1_2336_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_2584_83_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2584_83_2;
            ((Active*)get_instance(bosshovercopsiren3_2330_instances))->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_2584_83_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2584_83_3;
            ((Active*)get_instance(bosshovercopsiren4_2329_instances))->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_2584_83_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances));
            if (parent == NULL) goto pos_end_2584_83_4;
            ((Active*)get_instance(bosshovercoppropellor_2334_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2584_83_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances));
            if (parent == NULL) goto pos_end_2584_83_5;
            ((Active*)get_instance(bosshovercoppropellor2_2335_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2584_83_5: ;
        }
        ((Active*)get_instance(bosshovercoppropellor_2334_instances))->set_angle((((Active*)get_instance(bosshovercoppropellor_2334_instances))->get_angle()+10)%math_helper%360, 0);
        ((Active*)get_instance(bosshovercoppropellor2_2335_instances))->set_angle((((Active*)get_instance(bosshovercoppropellor2_2335_instances))->get_angle()+10)%math_helper%360, 0);
        ((Active*)get_instance(bosshovercop_2332_instances))->set_direction(16);
        ((Active*)get_instance(bosshovercopturbine1_2333_instances))->set_direction(16);
        ((Active*)get_instance(bosshovercopturbine2_2331_instances))->set_direction(16);
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_2584_83_6;
            ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_global_position(parent->get_x() + -54, parent->get_y() + 32);
            pos_end_2584_83_6: ;
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_direction(16);
    }
    event_2584_83_end: ;
}
void Frames::event_func_20198()
{
    // event 2585_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2585_83_end;
        ((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->values.set(3, (((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->values.get(3)+5)%math_helper%60);
        ((Active*)get_instance(bosshovercopturbine2_2331_instances))->alterables->values.set(3, (((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->values.get(3)+5)%math_helper%60);
        ((Active*)get_instance(bosshovercopsiren2_2337_instances))->set_visible(false);
        ((Active*)get_instance(bosshovercopsiren3_2330_instances))->set_visible(false);
        ((Active*)get_instance(bosshovercopsiren1_2336_instances))->set_visible(true);
        ((Active*)get_instance(bosshovercopsiren4_2329_instances))->set_visible(true);
    }
    event_2585_83_end: ;
}
void Frames::event_func_20199()
{
    // event 2586_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2586_83_end;
        if (!((((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->values.get(3)) >= (30))) goto event_2586_83_end;
        ((Active*)get_instance(bosshovercopsiren1_2336_instances))->set_visible(false);
        ((Active*)get_instance(bosshovercopsiren2_2337_instances))->set_visible(true);
    }
    event_2586_83_end: ;
}
void Frames::event_func_20200()
{
    // event 2587_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2587_83_end;
        if (!((((Active*)get_instance(bosshovercopturbine2_2331_instances))->alterables->values.get(3)) >= (30))) goto event_2587_83_end;
        ((Active*)get_instance(bosshovercopsiren4_2329_instances))->set_visible(false);
        ((Active*)get_instance(bosshovercopsiren3_2330_instances))->set_visible(true);
    }
    event_2587_83_end: ;
}
void Frames::event_func_20201()
{
    // event 2588_83
    bool or_result_2588_83 = false;
    bool or_temp_result_2588_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto or_event_2588_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2588_83_0_end;
        or_result_2588_83 = true;
        or_temp_result_2588_83_0 = true;
    }
    or_event_2588_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2588_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2588_83
    bool or_temp_result_2588_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto or_event_2588_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2588_83_1_end;
        or_result_2588_83 = true;
        or_temp_result_2588_83_1 = true;
    }
    or_event_2588_83_1_end: ;
    if (or_temp_result_2588_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2588_83
    bool or_temp_result_2588_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto or_event_2588_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2588_83_2_end;
        or_result_2588_83 = true;
        or_temp_result_2588_83_2 = true;
        or_event_2588_83_2_end: ;
        if (or_temp_result_2588_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2588_83) goto or_final_or_event_2588_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2588_83_0 || or_temp_result_2588_83_1 || or_temp_result_2588_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2588_83_2_end: ;
}
void Frames::event_func_20202()
{
    // event 2589_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2589_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (210))) goto event_2589_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 1);
    }
    event_2589_83_end: ;
}
void Frames::event_func_20203()
{
    // event 2590_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2590_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (210))) goto event_2590_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (10))) goto event_2590_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) < (20))) goto event_2590_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2590_83_end: ;
}
void Frames::event_func_20204()
{
    // event 2591_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2591_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (210))) goto event_2591_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (60))) goto event_2591_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) < (80))) goto event_2591_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2591_83_end: ;
}
void Frames::event_func_20205()
{
    // event 2592_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2592_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2592_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (210))) goto event_2592_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2592_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(121);
        }
    }
    event_2592_83_end: ;
}
void Frames::event_func_20206()
{
    // event 2593_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2593_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_2593_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2593_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (230))) goto event_2593_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2593_83_end: ;
}
void Frames::event_func_20207()
{
    // event 2594_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2594_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2594_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (211))) goto event_2594_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (213))) goto event_2594_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2594_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2594_83_end: ;
}
void Frames::event_func_20208()
{
    // event 2595_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2595_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2595_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (213))) goto event_2595_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (220))) goto event_2595_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2595_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_2595_83_end: ;
}
void Frames::event_func_20209()
{
    // event 2596_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2596_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2596_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2596_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(6);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_2596_83_end: ;
}
void Frames::event_func_20210()
{
    // event 2597_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2597_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2597_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2597_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(93);
        }
    }
    event_2597_83_end: ;
}
void Frames::event_func_20211()
{
    // event 2598_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2598_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2598_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2598_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2598_83_end: ;
}
void Frames::event_func_20212()
{
    // event 2599_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2599_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2599_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
        ((Active*)get_instance(npcneera_2464_instances))->move_back();
    }
    event_2599_83_end: ;
}
void Frames::event_func_20213()
{
    // event 2600_83
    bool or_result_2600_83 = false;
    bool or_temp_result_2600_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto or_event_2600_83_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (210))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2600_83_0_end;
        or_result_2600_83 = true;
        or_temp_result_2600_83_0 = true;
    }
    or_event_2600_83_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_2600_83_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 2600_83
    bool or_temp_result_2600_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto or_event_2600_83_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (212))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2600_83_1_end;
        or_result_2600_83 = true;
        or_temp_result_2600_83_1 = true;
        or_event_2600_83_1_end: ;
        if (or_temp_result_2600_83_1) {
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_2600_83) goto or_final_or_event_2600_83_1_end;
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_2600_83_0 || or_temp_result_2600_83_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 105);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(get_max(105, ((Active*)*it)->get_frame()));
        }
    }
    or_final_or_event_2600_83_1_end: ;
}
void Frames::event_func_20214()
{
    // event 2601_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2601_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2601_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-16))) goto event_2601_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2601_83_end: ;
}
void Frames::event_func_20215()
{
    // event 2602_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2602_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2602_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2602_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2602_83_end: ;
}
void Frames::event_func_20216()
{
    // event 2603_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2603_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2603_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2603_83_end;
        if (!((global_values->get(1)) != (0))) goto event_2603_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 20);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        effectswatersplash_416_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswatersplash_416(135, 5376), 3);
            effectswatersplash_416_instances.add_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(135);
            ((Active*)*it)->set_y(5401);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->force_speed(50);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(2, -8);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2603_83_end: ;
}
void Frames::event_func_20217()
{
    // event 2604_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2604_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_2604_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 0.4);
    }
    event_2604_83_end: ;
}
void Frames::event_func_20218()
{
    // event 2605_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2605_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_2605_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (0))) goto event_2605_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (5361))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2605_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
            ((Active*)*it)->set_y(5361);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(2, -7);
        effectswatersplash_416_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswatersplash_416(235, 5376), 3);
            effectswatersplash_416_instances.add_back();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(235);
            ((Active*)*it)->set_y(5401);
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_layer(3-1);
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_2605_83_end: ;
}
void Frames::event_func_20219()
{
    // event 2606_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2606_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2606_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 0.4);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2));
        }
    }
    event_2606_83_end: ;
}
void Frames::event_func_20220()
{
    // event 2607_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2607_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2607_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (0))) goto event_2607_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (5361))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2607_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(5361);
            ((Active*)*it)->force_animation(40);
        }
        effectswatersplash_416_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswatersplash_416(195, 5376), 3);
            effectswatersplash_416_instances.add_back();
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(195);
            ((Active*)*it)->set_y(5401);
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_layer(3-1);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(2, -8);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_2607_83_end: ;
}
