#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20021()
{
    // event 2404_83
    bool or_result_2404_83 = false;
    bool or_temp_result_2404_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto or_event_2404_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2404_83_0_end;
        or_result_2404_83 = true;
        or_temp_result_2404_83_0 = true;
    }
    or_event_2404_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2404_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2404_83
    bool or_temp_result_2404_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto or_event_2404_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2404_83_1_end;
        or_result_2404_83 = true;
        or_temp_result_2404_83_1 = true;
    }
    or_event_2404_83_1_end: ;
    if (or_temp_result_2404_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2404_83
    bool or_temp_result_2404_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto or_event_2404_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2404_83_2_end;
        or_result_2404_83 = true;
        or_temp_result_2404_83_2 = true;
        or_event_2404_83_2_end: ;
        if (or_temp_result_2404_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2404_83) goto or_final_or_event_2404_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2404_83_0 || or_temp_result_2404_83_1 || or_temp_result_2404_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2404_83_2_end: ;
}
void Frames::event_func_20022()
{
    // event 2405_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2405_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2405_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (176))) goto event_2405_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2405_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2405_83_end: ;
}
void Frames::event_func_20023()
{
    // event 2406_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2406_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2406_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_2406_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+2);
    }
    event_2406_83_end: ;
}
void Frames::event_func_20024()
{
    // event 2407_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2407_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2407_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2407_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, -1);
    }
    event_2407_83_end: ;
}
void Frames::event_func_20025()
{
    // event 2408_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2408_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2408_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (110))) goto event_2408_83_end;
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(true);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2408_83_end: ;
}
void Frames::event_func_20026()
{
    // event 2409_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2409_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2409_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2409_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 274);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2409_83_end: ;
}
void Frames::event_func_20027()
{
    // event 2410_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2410_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2410_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (274))) goto event_2410_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2410_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2410_83_end: ;
}
void Frames::event_func_20028()
{
    // event 2411_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2411_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2411_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2411_83_end;
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(syntaxprojection2_4098_instances))->set_visible(true);
        ((Active*)get_instance(syntaxprojection2_4098_instances))->force_frame(1);
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2411_83_end: ;
}
void Frames::event_func_20029()
{
    // event 2412_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2412_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2412_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2412_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 177);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2412_83_end: ;
}
void Frames::event_func_20030()
{
    // event 2413_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2413_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2413_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (177))) goto event_2413_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2413_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2413_83_end: ;
}
void Frames::event_func_20031()
{
    // event 2414_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2414_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (177))) goto event_2414_83_end;
        if (once_condition_2414_83) goto event_2414_83_end;
        once_condition_2414_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
    }
    event_2414_83_end: ;
}
void Frames::event_func_20032()
{
    // event 2415_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2415_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (178))) goto event_2415_83_end;
        if (once_condition_2415_83) goto event_2415_83_end;
        once_condition_2415_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(4);
    }
    event_2415_83_end: ;
}
void Frames::event_func_20033()
{
    // event 2416_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2416_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2416_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2416_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1623);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2416_83_end: ;
}
void Frames::event_func_20034()
{
    // event 2417_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2417_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_2417_83_end;
        if (not_always_2417_83 > loop_count) {
            not_always_2417_83 = loop_count + 2;
            goto event_2417_83_end;
        }
        not_always_2417_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2417_83_end: ;
}
void Frames::event_func_20035()
{
    // event 2418_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2418_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_2418_83_end;
        if (not_always_2418_83 > loop_count) {
            not_always_2418_83 = loop_count + 2;
            goto event_2418_83_end;
        }
        not_always_2418_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2418_83_end: ;
}
void Frames::event_func_20036()
{
    // event 2419_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2419_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2419_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2419_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_2419_83_end: ;
}
void Frames::event_func_20037()
{
    // event 2420_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2420_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2420_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2420_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2420_83_end: ;
}
void Frames::event_func_20038()
{
    // event 2421_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2421_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2421_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (178))) goto event_2421_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2421_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        enemyelite_2510_instances.clear_selection();
        spread_value(enemyelite_2510_instances, 0, 0);
        static FlatObjectList swap_2421_83;
        swap_2421_83.clear();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            swap_2421_83.push_back(((Active*)*it));
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*10);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        swap_position(swap_2421_83);
    }
    event_2421_83_end: ;
}
void Frames::event_func_20039()
{
    // event 2422_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2422_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2422_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2422_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_2422_83_end: ;
}
void Frames::event_func_20040()
{
    // event 2423_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2423_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2423_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2423_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2423_83_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_2423_83_0; single_instance_2423_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2423_83_0 == NULL)
                    single_instance_2423_83_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
    }
    event_2423_83_end: ;
}
void Frames::event_func_20041()
{
    // event 2424_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2424_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2424_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2424_83_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
    }
    event_2424_83_end: ;
}
void Frames::event_func_20042()
{
    // event 2425_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2425_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2425_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_2425_83_end: ;
}
void Frames::event_func_20043()
{
    // event 2426_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2426_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2426_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_2426_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2426_83_end: ;
}
void Frames::event_func_20044()
{
    // event 2427_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2427_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2427_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_2427_83_end;
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
    
    }
    event_2427_83_end: ;
}
void Frames::event_func_20045()
{
    // event 2428_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2428_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2428_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2428_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2428_83_end: ;
}
void Frames::event_func_20046()
{
    // event 2429_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2429_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2429_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2429_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2429_83_end;
        next_frame = (index+1-0)-1 + 0;    
    
        global_values->set(4, 10);
    }
    event_2429_83_end: ;
}
void Frames::event_func_20047()
{
    // event 2431_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2431_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2431_83_end: ;
}
void Frames::event_func_20048()
{
    // event 2432_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2432_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) < (20))) goto event_2432_83_end;
        if (!((levelrain_2506_instances.size()) < (100))) goto event_2432_83_end;
        levelrain_2506_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelrain_2506(0, 0), 3);
            levelrain_2506_instances.add_back();
        }
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(frame_left(), 256)+(levelrain_2506_instances.size()*31)%math_helper%640);
            ((Active*)*it)->alterables->values.set(0, 4500);
            ((Active*)*it)->alterables->values.set(1, 12+randrange(80)*0.1);
        }
    }
    event_2432_83_end: ;
}
void Frames::event_func_20049()
{
    // event 2433_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2433_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) < (20))) goto event_2433_83_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_rgb(1-1, make_color_int(255-get_min(get_max(0, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-400+global_values->get(3))/math_helper/25), 255), 255-get_min(get_max(0, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-400+global_values->get(3))/math_helper/25), 255), 255));
    }
    event_2433_83_end: ;
}
void Frames::event_func_20050()
{
    // event 2434_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2434_83_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_top()+global_values->get(17)+40))) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2434_83_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(frame_left(), 256)+randrange(640));
            ((Active*)*it)->alterables->values.set(0, frame_top()-randrange(50));
            ((Active*)*it)->alterables->values.set(1, 12+randrange(80)*0.1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2434_83_end: ;
}
void Frames::event_func_20051()
{
    // event 2435_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2435_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2435_83_end;
        if (once_condition_2435_83) goto event_2435_83_end;
        once_condition_2435_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 976);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 4747);
        media.play_id(SOUND_RAIN_295, 30-1, 0);
        media.set_channel_volume(30-1, 30);
    }
    event_2435_83_end: ;
}
void Frames::event_func_20052()
{
    // event 2436_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2436_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2436_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4802);
            ((Active*)*it)->set_x(1036);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(63);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4802);
            ((Active*)*it)->set_x(1096);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(14);
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4802);
            ((Active*)*it)->set_x(936);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(72);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2436_83_end: ;
}
void Frames::event_func_20053()
{
    // event 2437_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2437_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2437_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2437_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2437_83_end: ;
}
void Frames::event_func_20054()
{
    // event 2438_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2438_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2438_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2438_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 179);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2438_83_end: ;
}
void Frames::event_func_20055()
{
    // event 2439_83
    bool or_result_2439_83 = false;
    bool or_temp_result_2439_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto or_event_2439_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2439_83_0_end;
        or_result_2439_83 = true;
        or_temp_result_2439_83_0 = true;
    }
    or_event_2439_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2439_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2439_83
    bool or_temp_result_2439_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto or_event_2439_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2439_83_1_end;
        or_result_2439_83 = true;
        or_temp_result_2439_83_1 = true;
    }
    or_event_2439_83_1_end: ;
    if (or_temp_result_2439_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2439_83
    bool or_temp_result_2439_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto or_event_2439_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2439_83_2_end;
        or_result_2439_83 = true;
        or_temp_result_2439_83_2 = true;
        or_event_2439_83_2_end: ;
        if (or_temp_result_2439_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2439_83) goto or_final_or_event_2439_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2439_83_0 || or_temp_result_2439_83_1 || or_temp_result_2439_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2439_83_2_end: ;
}
void Frames::event_func_20056()
{
    // event 2440_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2440_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2440_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (179))) goto event_2440_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (187))) goto event_2440_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2440_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.set_channel_position(20-1, 0);
    }
    event_2440_83_end: ;
}
void Frames::event_func_20057()
{
    // event 2441_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2441_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (180))) goto event_2441_83_end;
        if (once_condition_2441_83) goto event_2441_83_end;
        once_condition_2441_83 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(66);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2441_83_end: ;
}
void Frames::event_func_20058()
{
    // event 2442_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2442_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (181))) goto event_2442_83_end;
        if (not_always_2442_83 > loop_count) {
            not_always_2442_83 = loop_count + 2;
            goto event_2442_83_end;
        }
        not_always_2442_83 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2442_83_end: ;
}
void Frames::event_func_20059()
{
    // event 2443_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2443_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (183))) goto event_2443_83_end;
        if (not_always_2443_83 > loop_count) {
            not_always_2443_83 = loop_count + 2;
            goto event_2443_83_end;
        }
        not_always_2443_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2443_83_end: ;
}
void Frames::event_func_20060()
{
    // event 2444_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2444_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (183))) goto event_2444_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2500))) goto event_2444_83_end;
        if (once_condition_2444_83) goto event_2444_83_end;
        once_condition_2444_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(75);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 75);
    }
    event_2444_83_end: ;
}
void Frames::event_func_20061()
{
    // event 2445_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2445_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (184))) goto event_2445_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+70))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2445_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_2445_83_end: ;
}
void Frames::event_func_20062()
{
    // event 2446_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2446_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (184))) goto event_2446_83_end;
        if (not_always_2446_83 > loop_count) {
            not_always_2446_83 = loop_count + 2;
            goto event_2446_83_end;
        }
        not_always_2446_83 = loop_count + 2;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(48);
        }
        media.play_id(SOUND_MILLA_HURT0_179, -1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(75);
        }
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2446_83_end: ;
}
void Frames::event_func_20063()
{
    // event 2447_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2447_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (185))) goto event_2447_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2447_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
        }
    }
    event_2447_83_end: ;
}
void Frames::event_func_20064()
{
    // event 2448_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2448_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (186))) goto event_2448_83_end;
        if (once_condition_2448_83) goto event_2448_83_end;
        once_condition_2448_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(15);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_2448_83_end: ;
}
void Frames::event_func_20065()
{
    // event 2449_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2449_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (187))) goto event_2449_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1000))) goto event_2449_83_end;
        if (once_condition_2449_83) goto event_2449_83_end;
        once_condition_2449_83 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
    }
    event_2449_83_end: ;
}
void Frames::event_func_20066()
{
    // event 2450_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2450_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (187))) goto event_2450_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2300))) goto event_2450_83_end;
        if (once_condition_2450_83) goto event_2450_83_end;
        once_condition_2450_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 78);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(78);
        }
    }
    event_2450_83_end: ;
}
void Frames::event_func_20067()
{
    // event 2451_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2451_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2451_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (187))) goto event_2451_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2451_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(78);
        }
    }
    event_2451_83_end: ;
}
void Frames::event_func_20068()
{
    // event 2452_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2452_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2452_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2452_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_2452_83_end: ;
}
void Frames::event_func_20069()
{
    // event 2453_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2453_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2453_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2453_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2453_83_end: ;
}
void Frames::event_func_20070()
{
    // event 2454_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2454_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2454_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2454_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(75);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2454_83_end: ;
}
void Frames::event_func_20071()
{
    // event 2455_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2455_83_end;
        if (!((global_values->get(27)) == (0))) goto event_2455_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (189))) goto event_2455_83_end;
        if (!media.is_channel_playing(20-1)) goto event_2455_83_end;
        if (!(!media.is_channel_playing(21-1))) goto event_2455_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 21-1);
        media.stop_channel(20-1);
    }
    event_2455_83_end: ;
}
void Frames::event_func_20072()
{
    // event 2456_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2456_83_end;
        if (!((global_values->get(27)) == (0))) goto event_2456_83_end;
        if (!media.is_channel_playing(21-1)) goto event_2456_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(42+(global_values->get(3)/math_helper/5)%math_helper%3);
        }
    }
    event_2456_83_end: ;
}
void Frames::event_func_20073()
{
    // event 2457_83
    bool or_result_2457_83 = false;
    bool or_temp_result_2457_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto or_event_2457_83_0_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto or_event_2457_83_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (188))) goto or_event_2457_83_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (190))) goto or_event_2457_83_0_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto or_event_2457_83_0_end;
        or_result_2457_83 = true;
        or_temp_result_2457_83_0 = true;
    }
    or_event_2457_83_0_end: ;
    // event 2457_83
    bool or_temp_result_2457_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto or_event_2457_83_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (189))) goto or_event_2457_83_1_end;
        if (!((media.get_channel_position(-1 +21)) > (600))) goto or_event_2457_83_1_end;
        or_result_2457_83 = true;
        or_temp_result_2457_83_1 = true;
        or_event_2457_83_1_end: ;
        if (!or_result_2457_83) goto or_final_or_event_2457_83_1_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    or_final_or_event_2457_83_1_end: ;
}
void Frames::event_func_20074()
{
    // event 2458_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2458_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (188))) goto event_2458_83_end;
        if (!((media.get_channel_position(-1 +20)) > (5000))) goto event_2458_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 42);
    }
    event_2458_83_end: ;
}
void Frames::event_func_20075()
{
    // event 2459_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2459_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (190))) goto event_2459_83_end;
        if (!((media.get_channel_position(-1 +20)) > (800))) goto event_2459_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 78);
    }
    event_2459_83_end: ;
}
void Frames::event_func_20076()
{
    // event 2460_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2460_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2460_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (190))) goto event_2460_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (191))) goto event_2460_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2460_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(78);
        }
    }
    event_2460_83_end: ;
}
void Frames::event_func_20077()
{
    // event 2461_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2461_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2461_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (15))) goto event_2461_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (45))) goto event_2461_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2461_83_end: ;
}
void Frames::event_func_20078()
{
    // event 2462_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2462_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2462_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (45))) goto event_2462_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2462_83_end: ;
}
void Frames::event_func_20079()
{
    // event 2463_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2463_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2463_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (45))) goto event_2463_83_end;
        if (!((global_values->get(1)) >= (2))) goto event_2463_83_end;
        if (!((global_values->get(1)) <= (3))) goto event_2463_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 4);
    }
    event_2463_83_end: ;
}
void Frames::event_func_20080()
{
    // event 2464_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2464_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2464_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (130))) goto event_2464_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_2464_83_end: ;
}
void Frames::event_func_20081()
{
    // event 2465_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2465_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2465_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_2465_83_end;
        if (!((global_values->get(1)) >= (2))) goto event_2465_83_end;
        if (!((global_values->get(1)) <= (3))) goto event_2465_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 14);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 140);
    }
    event_2465_83_end: ;
}
void Frames::event_func_20082()
{
    // event 2466_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2466_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2466_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_2466_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2466_83_end: ;
}
void Frames::event_func_20083()
{
    // event 2467_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2467_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2467_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_2467_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2467_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2467_83_end: ;
}
void Frames::event_func_20084()
{
    // event 2468_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2468_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2468_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2468_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(14);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_2468_83_end: ;
}
void Frames::event_func_20085()
{
    // event 2469_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2469_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2469_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2469_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2469_83_end: ;
}
void Frames::event_func_20086()
{
    // event 2470_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2470_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2470_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (75))) goto event_2470_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2470_83_end: ;
}
void Frames::event_func_20087()
{
    // event 2471_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2471_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2471_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_2471_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2471_83_end: ;
}
void Frames::event_func_20088()
{
    // event 2472_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2472_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2472_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_2472_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2472_83_end: ;
}
void Frames::event_func_20089()
{
    // event 2473_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2473_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2473_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (192))) goto event_2473_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (195))) goto event_2473_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2473_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2473_83_end: ;
}
void Frames::event_func_20090()
{
    // event 2474_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2474_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2474_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (195))) goto event_2474_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2474_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2474_83_end: ;
}
void Frames::event_func_20091()
{
    // event 2475_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2475_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2475_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2475_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (60))) goto event_2475_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2475_83_end: ;
}
void Frames::event_func_20092()
{
    // event 2476_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2476_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2476_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (60))) goto event_2476_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 5);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_2476_83_end: ;
}
void Frames::event_func_20093()
{
    // event 2477_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2477_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2477_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2477_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(38);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-7);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2477_83_end: ;
}
void Frames::event_func_20094()
{
    // event 2478_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2478_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2478_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2478_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2478_83_end: ;
}
void Frames::event_func_20095()
{
    // event 2479_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2479_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2479_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (196))) goto event_2479_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (197))) goto event_2479_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2479_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2479_83_end: ;
}
void Frames::event_func_20096()
{
    // event 2480_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2480_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2480_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (197))) goto event_2480_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2480_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_2480_83_0;
            ((Active*)get_instance(placeholdercharacter_1588_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2480_83_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_2480_83_1;
            ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2480_83_1: ;
        }
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->move_back();
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_27_10_ogg_333, 18-1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
    }
    event_2480_83_end: ;
}
void Frames::event_func_20097()
{
    // event 2481_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2481_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2481_83_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
    }
    event_2481_83_end: ;
}
void Frames::event_func_20098()
{
    // event 2482_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2482_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2482_83_end;
        if (!((global_values->get(1)) == (0))) goto event_2482_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(global_values->get(16)*0.5+80, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23))));
    }
    event_2482_83_end: ;
}
void Frames::event_func_20099()
{
    // event 2483_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2483_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2483_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2483_83_end;
        if (!((global_values->get(1)) == (0))) goto event_2483_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2483_83_end: ;
}
void Frames::event_func_20100()
{
    // event 2484_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2484_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2484_83_end;
        if (!((global_values->get(1)) == (4))) goto event_2484_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2484_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        FrameObject * single_instance_2484_83_0; single_instance_2484_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2484_83_0 == NULL)
                    single_instance_2484_83_0 = new_obj;
            }
        }
        FrameObject * single_instance_2484_83_1; single_instance_2484_83_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2484_83_1 == NULL)
                    single_instance_2484_83_1 = new_obj;
            }
        }
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_visible(false);
        {
            FrameObject * parent = ((Active*)get_instance(placeholdercharacter_1588_instances));
            if (parent == NULL) goto pos_end_2484_83_2;
            ((Active*)single_instance_2484_83_0)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2484_83_2: ;
        }
        ((Active*)((Active*)single_instance_2484_83_0))->set_direction(16);
        ((Active*)((Active*)single_instance_2484_83_0))->set_visible(true);
        ((Active*)((Active*)single_instance_2484_83_0))->force_animation(40);
        ((Active*)((Active*)single_instance_2484_83_0))->force_frame(57);
    }
    event_2484_83_end: ;
}
void Frames::event_func_20101()
{
    // event 2485_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2485_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2485_83_end;
        if (once_condition_2485_83) goto event_2485_83_end;
        once_condition_2485_83 = true;
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
    }
    event_2485_83_end: ;
}
void Frames::event_func_20102()
{
    // event 2486_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2486_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2486_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        media.set_channel_volume(30-1, 30-get_min(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*0.4, 30));
    }
    event_2486_83_end: ;
}
void Frames::event_func_20103()
{
    // event 2487_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2487_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2487_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2487_83_end;
        if (once_condition_2487_83) goto event_2487_83_end;
        once_condition_2487_83 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_jade_creek_outskirts_334+newline_character+str_15_minutes_later_335);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_2487_83_end: ;
}
void Frames::event_func_20104()
{
    // event 2488_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2488_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2488_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (300))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2488_83_end;
        if (!((global_values->get(1)) == (0))) goto event_2488_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 20);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 600);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 5300);
        media.stop_channel(30-1);
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2488_83_end: ;
}
void Frames::event_func_20105()
{
    // event 2489_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2489_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2489_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2489_83_end;
        if (!((global_values->get(1)) != (0))) goto event_2489_83_end;
        global_values->set(4, 14);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_2489_83_end: ;
}
void Frames::event_func_20106()
{
    // event 2490_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2490_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2490_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (198))) goto event_2490_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2490_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2490_83_end: ;
}
void Frames::event_func_20107()
{
    // event 2491_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2491_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2491_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) <= (50))) goto event_2491_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2491_83_end: ;
}
void Frames::event_func_20108()
{
    // event 2492_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2492_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2492_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2492_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2492_83_end: ;
}
void Frames::event_func_20109()
{
    // event 2493_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2493_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2493_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_2493_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2493_83_end: ;
}
void Frames::event_func_20110()
{
    // event 2494_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2494_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2494_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2494_83_end: ;
}
void Frames::event_func_20111()
{
    // event 2495_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2495_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2495_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_2495_83_end;
        if (not_always_2495_83 > loop_count) {
            not_always_2495_83 = loop_count + 2;
            goto event_2495_83_end;
        }
        not_always_2495_83 = loop_count + 2;
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
    }
    event_2495_83_end: ;
}
void Frames::event_func_20112()
{
    // event 2496_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2496_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2496_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2496_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2496_83_end: ;
}
void Frames::event_func_20113()
{
    // event 2497_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2497_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2497_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2497_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2497_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 300);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4802);
            ((Active*)*it)->set_x(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-100);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(72);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+250);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(3-1, -1200);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2497_83_end: ;
}
void Frames::event_func_20114()
{
    // event 2498_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2498_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_2498_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_2498_83_end: ;
}
void Frames::event_func_20115()
{
    // event 2499_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2499_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2499_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_2499_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2499_83_end: ;
}
void Frames::event_func_20116()
{
    // event 2500_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2500_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2500_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2500_83_end: ;
}
void Frames::event_func_20117()
{
    // event 2501_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2501_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2501_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2501_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 199);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2501_83_end: ;
}
void Frames::event_func_20118()
{
    // event 2502_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2502_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2502_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (199))) goto event_2502_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (202))) goto event_2502_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2502_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2502_83_end: ;
}
void Frames::event_func_20119()
{
    // event 2503_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2503_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2503_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (202))) goto event_2503_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2503_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 12);
    }
    event_2503_83_end: ;
}
void Frames::event_func_20120()
{
    // event 2504_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1)) goto event_2504_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (202))) goto event_2504_83_end;
        if (once_condition_2504_83) goto event_2504_83_end;
        once_condition_2504_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2504_83_end: ;
}
