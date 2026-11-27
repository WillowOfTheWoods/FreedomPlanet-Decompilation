#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_521()
{
    // event 114_3
    {
        if (!(group_clear_files_that_are_flagged_for_deletion_1)) goto event_114_3_end;
        if (not_always_114_3 > loop_count) {
            not_always_114_3 = loop_count + 2;
            goto event_114_3_end;
        }
        not_always_114_3 = loop_count + 2;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_clear_files_that_are_flagged_for_deletion_1 = false;
    
    }
    event_114_3_end: ;
}
void Frames::event_func_522()
{
    // event 115_3
    {
        if (!(group_options_1 && group_options_options_zoom_in_1)) goto event_115_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) < (736))) goto event_115_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_x(get_min(((Active*)get_instance(scrolldot_6_instances))->get_x()+30, 736));
        set_display_center(((Active*)get_instance(scrolldot_6_instances))->get_x(), -1);
    }
    event_115_3_end: ;
}
void Frames::event_func_523()
{
    // event 116_3
    {
        if (!(group_options_1 && group_options_options_zoom_in_1)) goto event_116_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) >= (736))) goto event_116_3_end;
        if (!group_options_options_select_options_1) {
            group_options_options_select_options_1 = true;
        }
            group_options_options_zoom_in_1 = false;
    
    }
    event_116_3_end: ;
}
void Frames::event_func_524()
{
    // event 117_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_117_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_117_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_117_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_117_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 5);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_117_3_end: ;
}
void Frames::event_func_525()
{
    // event 118_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_118_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_118_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_118_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_118_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_118_3_end: ;
}
void Frames::event_func_526()
{
    // event 119_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_119_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_119_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_119_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (5))) goto event_119_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_119_3_end: ;
}
void Frames::event_func_527()
{
    // event 120_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_120_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_120_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_120_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (5))) goto event_120_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_120_3_end: ;
}
void Frames::event_func_528()
{
    // event 121_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_121_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_121_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_121_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(difficulty_81_instances))->alterables->values.set(25, 4);
    }
    event_121_3_end: ;
}
void Frames::event_func_529()
{
    // event 122_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_122_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_122_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_122_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(screensize_82_instances))->alterables->values.set(25, 4);
    }
    event_122_3_end: ;
}
void Frames::event_func_530()
{
    // event 123_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_123_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_123_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_123_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(musicvolume_83_instances))->alterables->values.set(25, 4);
    }
    event_123_3_end: ;
}
void Frames::event_func_531()
{
    // event 124_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_124_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_124_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_124_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(controls_80_instances))->alterables->values.set(25, 4);
    }
    event_124_3_end: ;
}
void Frames::event_func_532()
{
    // event 125_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_125_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_125_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_125_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(sensitivity_77_instances))->alterables->values.set(25, 4);
    }
    event_125_3_end: ;
}
void Frames::event_func_533()
{
    // event 126_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_126_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (5))) goto event_126_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_126_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(okay_76_instances))->alterables->values.set(25, 4);
    }
    event_126_3_end: ;
}
void Frames::event_func_534()
{
    // event 127_3
    bool or_result_127_3 = false;
    bool or_temp_result_127_3_0 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_127_3_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_127_3_0_end;
        or_result_127_3 = true;
        or_temp_result_127_3_0 = true;
    }
    or_event_127_3_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_127_3_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 127_3
    bool or_temp_result_127_3_1 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_127_3_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_127_3_1_end;
        or_result_127_3 = true;
        or_temp_result_127_3_1 = true;
    }
    or_event_127_3_1_end: ;
    if (or_temp_result_127_3_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 127_3
    bool or_temp_result_127_3_2 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_127_3_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_127_3_2_end;
        or_result_127_3 = true;
        or_temp_result_127_3_2 = true;
    }
    or_event_127_3_2_end: ;
    if (or_temp_result_127_3_2) {
        inputsp1_21_instances.save_selection();
    }
    // event 127_3
    bool or_temp_result_127_3_3 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_127_3_3_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_127_3_3_end;
        or_result_127_3 = true;
        or_temp_result_127_3_3 = true;
        or_event_127_3_3_end: ;
        if (or_temp_result_127_3_3) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_127_3) goto or_final_or_event_127_3_3_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_127_3_0 || or_temp_result_127_3_1 || or_temp_result_127_3_2 || or_temp_result_127_3_3) {
            inputsp1_21_instances.restore_selection();
        }
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_127_3_3_end: ;
}
void Frames::event_func_535()
{
    // event 128_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_128_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_128_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_128_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Counter*)get_instance(screenres_88_instances))->set(((((Counter*)get_instance(screenres_88_instances))->value+2)%math_helper%4)+1);
    }
    event_128_3_end: ;
}
void Frames::event_func_536()
{
    // event 129_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_129_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_129_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_129_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Counter*)get_instance(screenres_88_instances))->set(((((Counter*)get_instance(screenres_88_instances))->value+4)%math_helper%4)+1);
    }
    event_129_3_end: ;
}
void Frames::event_func_537()
{
    // event 130_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_130_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_130_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_130_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Counter*)get_instance(screenres_88_instances))->set(((((Counter*)get_instance(screenres_88_instances))->value+4)%math_helper%4)+1);
    }
    event_130_3_end: ;
}
void Frames::event_func_538()
{
    // event 131_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_131_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_131_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_131_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->add(12, 1);
    }
    event_131_3_end: ;
}
void Frames::event_func_539()
{
    // event 132_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_132_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_132_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_132_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->sub(12, 1);
    }
    event_132_3_end: ;
}
void Frames::event_func_540()
{
    // event 133_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_133_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_133_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_133_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->sub(12, 1);
    }
    event_133_3_end: ;
}
void Frames::event_func_541()
{
    // event 134_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_134_3_end;
        if (!((global_values->get(12)) < (0))) goto event_134_3_end;
        global_values->set(12, 2);
    }
    event_134_3_end: ;
}
void Frames::event_func_542()
{
    // event 135_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_135_3_end;
        if (!((global_values->get(12)) == (0))) goto event_135_3_end;
        global_values->set(8, 3);
        ((Active*)get_instance(difficulty2_84_instances))->set_direction(global_values->get(12));
        global_values->set(18, 300);
    }
    event_135_3_end: ;
}
void Frames::event_func_543()
{
    // event 136_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_136_3_end;
        if (!((global_values->get(12)) == (1))) goto event_136_3_end;
        global_values->set(8, 5);
        ((Active*)get_instance(difficulty2_84_instances))->set_direction(global_values->get(12));
        global_values->set(18, 200);
    }
    event_136_3_end: ;
}
void Frames::event_func_544()
{
    // event 137_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_137_3_end;
        if (!((global_values->get(12)) == (2))) goto event_137_3_end;
        global_values->set(8, 7);
        ((Active*)get_instance(difficulty2_84_instances))->set_direction(global_values->get(12));
        global_values->set(18, 200);
    }
    event_137_3_end: ;
}
void Frames::event_func_545()
{
    // event 138_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_138_3_end;
        if (!((global_values->get(12)) > (2))) goto event_138_3_end;
        global_values->set(12, 0);
    }
    event_138_3_end: ;
}
void Frames::event_func_546()
{
    // event 139_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_139_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_139_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_139_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->set(25, (global_values->get(25)+100)%math_helper%110);
        ((Counter*)get_instance(musicvolume_89_instances))->set(global_values->get(25));
    }
    event_139_3_end: ;
}
void Frames::event_func_547()
{
    // event 140_3
    bool or_result_140_3 = false;
    bool or_temp_result_140_3_0 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_140_3_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_140_3_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_140_3_0_end;
        or_result_140_3 = true;
        or_temp_result_140_3_0 = true;
    }
    or_event_140_3_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_140_3_0) {
        crystalcursor_75_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 140_3
    bool or_temp_result_140_3_1 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_140_3_1_end;
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!mainoption1_70_instances.has_selection()) goto or_event_140_3_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_140_3_1_end;
        or_result_140_3 = true;
        or_temp_result_140_3_1 = true;
        or_event_140_3_1_end: ;
        mainoption1_70_instances.clear_saved_selection();
        if (or_temp_result_140_3_1) {
            crystalcursor_75_instances.save_selection();
            mainoption1_70_instances.save_selection();
        }
        if (!or_result_140_3) goto or_final_or_event_140_3_1_end;
        mainoption1_70_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_140_3_0 || or_temp_result_140_3_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_140_3_1) {
            mainoption1_70_instances.restore_selection();
        }
        if (or_temp_result_140_3_0) {
            playerinput_19_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->set(25, (global_values->get(25)+10)%math_helper%110);
        musicvolume_89_instances.clear_selection();
        for (ObjectIterator it(musicvolume_89_instances); !it.end(); ++it) {
            ((Counter*)*it)->set(global_values->get(25));
        }
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    or_final_or_event_140_3_1_end: ;
}
void Frames::event_func_548()
{
    // event 141_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_141_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_141_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_141_3_end;
    }
    event_141_3_end: ;
}
void Frames::event_func_549()
{
    // event 142_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_142_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_142_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_142_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_options_1 = false;
    
        if (!group_controls_1) {
            group_controls_1 = true;
        }
        if (!group_controls_controls_zoom_in_1) {
            group_controls_controls_zoom_in_1 = true;
        }
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
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0), 0, 2, 0);
        {
            loop_import_deadzones_running = true;
            int times = int(1);
            loop_import_deadzones_index = 0;
            while (loop_import_deadzones_index < times) {
                loop_import_deadzones_0();
                if (!loop_import_deadzones_running) break;
                loop_import_deadzones_index++;
            }
        }
    }
    event_142_3_end: ;
}
void Frames::event_func_550()
{
    // event 143_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_143_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_143_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_143_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0)+5, 0, 2, 0);
    }
    event_143_3_end: ;
}
void Frames::event_func_551()
{
    // event 144_3
    bool or_result_144_3 = false;
    bool or_temp_result_144_3_0 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_144_3_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_144_3_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_144_3_0_end;
        or_result_144_3 = true;
        or_temp_result_144_3_0 = true;
    }
    or_event_144_3_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_144_3_0) {
        crystalcursor_75_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 144_3
    bool or_temp_result_144_3_1 = false;
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto or_event_144_3_1_end;
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!mainoption1_70_instances.has_selection()) goto or_event_144_3_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_144_3_1_end;
        or_result_144_3 = true;
        or_temp_result_144_3_1 = true;
        or_event_144_3_1_end: ;
        mainoption1_70_instances.clear_saved_selection();
        if (or_temp_result_144_3_1) {
            crystalcursor_75_instances.save_selection();
            mainoption1_70_instances.save_selection();
        }
        if (!or_result_144_3) goto or_final_or_event_144_3_1_end;
        mainoption1_70_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_144_3_0 || or_temp_result_144_3_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_144_3_1) {
            mainoption1_70_instances.restore_selection();
        }
        if (or_temp_result_144_3_0) {
            playerinput_19_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        mapdatatemporary2_130_instances.clear_selection();
        for (ObjectIterator it(mapdatatemporary2_130_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(0, 2, 0)-5, 0, 2, 0);
        }
    }
    or_final_or_event_144_3_1_end: ;
}
void Frames::event_func_552()
{
    // event 145_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_145_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0)) < (0))) goto event_145_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(100, 0, 2, 0);
    }
    event_145_3_end: ;
}
void Frames::event_func_553()
{
    // event 146_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_146_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0)) > (100))) goto event_146_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(0, 0, 2, 0);
    }
    event_146_3_end: ;
}
void Frames::event_func_554()
{
    // event 147_3
    {
        if (!(group_options_1 && group_options_options_select_options_1)) goto event_147_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_147_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (5))) goto event_147_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 3);
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_options_options_select_options_1 = false;
    
            group_options_options_menu_selection_1 = false;
    
        if (!group_options_options_zoom_out_1) {
            group_options_options_zoom_out_1 = true;
        }
        {
            FrameObject * parent = ((Active*)get_instance(mainoption3_72_instances));
            if (parent == NULL) goto pos_end_147_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_147_3_0: ;
        }
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(global_values->get(7), 1, 33);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(global_values->get(24), 1, 34);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->save(get_app_drive()+get_app_dir()+str_gamepad_cfg_13);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 2, 0), 0, 2, 0);
        {
            loop_import_deadzones_running = true;
            int times = int(1);
            loop_import_deadzones_index = 0;
            while (loop_import_deadzones_index < times) {
                loop_import_deadzones_0();
                if (!loop_import_deadzones_running) break;
                loop_import_deadzones_index++;
            }
        }
    }
    event_147_3_end: ;
}
void Frames::event_func_555()
{
    // event 148_3
    {
        if (!(group_options_1 && group_options_options_zoom_out_1)) goto event_148_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) > (256))) goto event_148_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_x(get_max(((Active*)get_instance(scrolldot_6_instances))->get_x()-30, 256));
        set_display_center(((Active*)get_instance(scrolldot_6_instances))->get_x(), -1);
    }
    event_148_3_end: ;
}
void Frames::event_func_556()
{
    // event 149_3
    {
        if (!(group_options_1 && group_options_options_zoom_out_1)) goto event_149_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) <= (256))) goto event_149_3_end;
        if (!group_select_an_option_1) {
            group_select_an_option_1 = true;
        }
            group_options_options_zoom_out_1 = false;
    
            group_options_1 = false;
    
    }
    event_149_3_end: ;
}
void Frames::event_func_557()
{
    // event 150_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_150_3_end;
        if (not_always_150_3 > loop_count) {
            not_always_150_3 = loop_count + 2;
            goto event_150_3_end;
        }
        not_always_150_3 = loop_count + 2;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
    }
    event_150_3_end: ;
}
void Frames::event_func_558()
{
    // event 151_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_151_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_151_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(difficulty_81_instances));
            if (parent == NULL) goto pos_end_151_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_151_3_0: ;
        }
    }
    event_151_3_end: ;
}
void Frames::event_func_559()
{
    // event 152_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_152_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_152_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(screensize_82_instances));
            if (parent == NULL) goto pos_end_152_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_152_3_0: ;
        }
    }
    event_152_3_end: ;
}
void Frames::event_func_560()
{
    // event 153_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_153_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_153_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(musicvolume_83_instances));
            if (parent == NULL) goto pos_end_153_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_153_3_0: ;
        }
    }
    event_153_3_end: ;
}
void Frames::event_func_561()
{
    // event 154_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_154_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_154_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(controls_80_instances));
            if (parent == NULL) goto pos_end_154_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_154_3_0: ;
        }
    }
    event_154_3_end: ;
}
void Frames::event_func_562()
{
    // event 155_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_155_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_155_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(sensitivity_77_instances));
            if (parent == NULL) goto pos_end_155_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_155_3_0: ;
        }
    }
    event_155_3_end: ;
}
void Frames::event_func_563()
{
    // event 156_3
    {
        if (!(group_options_1 && group_options_options_menu_selection_1)) goto event_156_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (5))) goto event_156_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(okay_76_instances));
            if (parent == NULL) goto pos_end_156_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_156_3_0: ;
        }
    }
    event_156_3_end: ;
}
void Frames::event_func_564()
{
    // event 157_3
    {
        if (!(group_controls_1)) goto event_157_3_end;
        buttonname_92_instances.clear_selection();
        controlbox_69_instances.clear_selection();
        if (!check_overlap(buttonname_92_instances, controlbox_69_instances)) goto event_157_3_end;
        for (ObjectIterator it(buttonname_92_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(((Active*)get_single(controlbox_69_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
        }
    }
    event_157_3_end: ;
}
void Frames::event_func_565()
{
    // event 158_3
    {
        if (!(group_controls_1 && group_controls_controls_zoom_in_1)) goto event_158_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) < (1216))) goto event_158_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_x(get_min(((Active*)get_instance(scrolldot_6_instances))->get_x()+30, 1216));
        set_display_center(((Active*)get_instance(scrolldot_6_instances))->get_x(), -1);
    }
    event_158_3_end: ;
}
void Frames::event_func_566()
{
    // event 159_3
    {
        if (!(group_controls_1 && group_controls_controls_zoom_in_1)) goto event_159_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_x()) >= (1216))) goto event_159_3_end;
        if (!group_controls_controls_select_options_1) {
            group_controls_controls_select_options_1 = true;
        }
            group_controls_controls_zoom_in_1 = false;
    
    }
    event_159_3_end: ;
}
void Frames::event_func_567()
{
    // event 160_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_160_3_end;
        if (not_always_160_3 > loop_count) {
            not_always_160_3 = loop_count + 2;
            goto event_160_3_end;
        }
        not_always_160_3 = loop_count + 2;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(32);
        }
        controlboxname_68_instances.clear_selection();
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(32);
        }
    }
    event_160_3_end: ;
}
void Frames::event_func_568()
{
    // event 161_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_161_3_end;
        if (!(frame_time >= 0.15)) goto event_161_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_161_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)+9)%math_helper%10);
    }
    event_161_3_end: ;
}
void Frames::event_func_569()
{
    // event 162_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_162_3_end;
        if (!(frame_time >= 0.15)) goto event_162_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_162_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)+1)%math_helper%10);
    }
    event_162_3_end: ;
}
void Frames::event_func_570()
{
    // event 163_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_163_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_163_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_163_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(type_79_instances))->alterables->values.set(25, 4);
    }
    event_163_3_end: ;
}
void Frames::event_func_571()
{
    // event 164_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_164_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_164_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_164_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(okay2_78_instances))->alterables->values.set(25, 4);
    }
    event_164_3_end: ;
}
void Frames::event_func_572()
{
    // event 165_3
    bool or_result_165_3 = false;
    bool or_temp_result_165_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_165_3_0_end;
        if (!(frame_time >= 0.15)) goto or_event_165_3_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_165_3_0_end;
        or_result_165_3 = true;
        or_temp_result_165_3_0 = true;
    }
    or_event_165_3_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_165_3_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 165_3
    bool or_temp_result_165_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_165_3_1_end;
        if (!(frame_time >= 0.15)) goto or_event_165_3_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_165_3_1_end;
        or_result_165_3 = true;
        or_temp_result_165_3_1 = true;
    }
    or_event_165_3_1_end: ;
    if (or_temp_result_165_3_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 165_3
    bool or_temp_result_165_3_2 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_165_3_2_end;
        if (!(frame_time >= 0.15)) goto or_event_165_3_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_165_3_2_end;
        or_result_165_3 = true;
        or_temp_result_165_3_2 = true;
    }
    or_event_165_3_2_end: ;
    if (or_temp_result_165_3_2) {
        inputsp1_21_instances.save_selection();
    }
    // event 165_3
    bool or_temp_result_165_3_3 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_165_3_3_end;
        if (!(frame_time >= 0.15)) goto or_event_165_3_3_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_165_3_3_end;
        or_result_165_3 = true;
        or_temp_result_165_3_3 = true;
        or_event_165_3_3_end: ;
        if (or_temp_result_165_3_3) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_165_3) goto or_final_or_event_165_3_3_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_165_3_0 || or_temp_result_165_3_1 || or_temp_result_165_3_2 || or_temp_result_165_3_3) {
            inputsp1_21_instances.restore_selection();
        }
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_165_3_3_end: ;
}
void Frames::event_func_573()
{
    // event 166_3
    bool or_result_166_3 = false;
    bool or_temp_result_166_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_166_3_0_end;
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!mainoption1_70_instances.has_selection()) goto or_event_166_3_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_166_3_0_end;
        or_result_166_3 = true;
        or_temp_result_166_3_0 = true;
    }
    or_event_166_3_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    mainoption1_70_instances.clear_saved_selection();
    if (or_temp_result_166_3_0) {
        crystalcursor_75_instances.save_selection();
        mainoption1_70_instances.save_selection();
    }
    // event 166_3
    bool or_temp_result_166_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_166_3_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_166_3_1_end;
        if (!((global_values->get(7)) == (0))) goto or_event_166_3_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_166_3_1_end;
        or_result_166_3 = true;
        or_temp_result_166_3_1 = true;
    }
    or_event_166_3_1_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_166_3_1) {
        playerinput_19_instances.save_selection();
        crystalcursor_75_instances.save_selection();
    }
    // event 166_3
    bool or_temp_result_166_3_2 = false;
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto or_event_166_3_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_166_3_2_end;
        if (!((global_values->get(7)) == (1))) goto or_event_166_3_2_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_166_3_2_end;
        or_result_166_3 = true;
        or_temp_result_166_3_2 = true;
        or_event_166_3_2_end: ;
        if (or_temp_result_166_3_2) {
            playerinput_19_instances.save_selection();
            crystalcursor_75_instances.save_selection();
        }
        if (!or_result_166_3) goto or_final_or_event_166_3_2_end;
        mainoption1_70_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_166_3_0 || or_temp_result_166_3_1 || or_temp_result_166_3_2) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_166_3_0) {
            mainoption1_70_instances.restore_selection();
        }
        if (or_temp_result_166_3_1 || or_temp_result_166_3_2) {
            playerinput_19_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        global_values->set(7, (global_values->get(7)+1)%math_helper%2);
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
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    or_final_or_event_166_3_2_end: ;
}
void Frames::event_func_574()
{
    // event 167_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_167_3_end;
        if (!((global_values->get(7)) == (1))) goto event_167_3_end;
        if (!((joystick2_29_instances.size()) == (0))) goto event_167_3_end;
        ((Active*)get_instance(warningbox_95_instances))->set_visible(true);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->set_text(str_looking_for_controllers_32);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->set_visible(true);
    }
    event_167_3_end: ;
}
void Frames::event_func_575()
{
    // event 168_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_168_3_end;
        if (!((global_values->get(7)) == (1))) goto event_168_3_end;
        if (!((joystick2_29_instances.size()) == (0))) goto event_168_3_end;
        if (!(((Active*)get_instance(warningbox_95_instances))->flags & VISIBLE)) goto event_168_3_end;
        ((Active*)get_instance(warningbox_95_instances))->alterables->values.add(0, 1);
    }
    event_168_3_end: ;
}
void Frames::event_func_576()
{
    // event 169_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_169_3_end;
        if (!((((Active*)get_instance(warningbox_95_instances))->alterables->values.get(0)) > (1))) goto event_169_3_end;
        joystick2_29_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_joystick2_29(1115, -48), 0);
            joystick2_29_instances.add_back();
        }
        ((Active*)get_instance(warningbox_95_instances))->set_visible(false);
        ((Active*)get_instance(warningbox_95_instances))->alterables->values.set(0, 0);
        ((TextBlitter*)get_instance(warningmessage_118_instances))->set_visible(false);
    }
    event_169_3_end: ;
}
void Frames::event_func_577()
{
    // event 170_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_170_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_170_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) >= (1))) goto event_170_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) <= (8))) goto event_170_3_end;
        if (!((global_values->get(7)) == (0))) goto event_170_3_end;
        if (!(frame_time >= 0.15)) goto event_170_3_end;
            group_controls_controls_select_options_1 = false;
    
        if (!group_controls_controls_assign_key_1) {
            group_controls_controls_assign_key_1 = true;
        }
        set_timer((0) / 1000.0);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(okay2_78_instances))->alterables->values.set(0, 0);
    }
    event_170_3_end: ;
}
void Frames::event_func_578()
{
    // event 171_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_171_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_171_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) >= (1))) goto event_171_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) <= (8))) goto event_171_3_end;
        if (!((global_values->get(7)) == (1))) goto event_171_3_end;
        if (!(frame_time >= 0.15)) goto event_171_3_end;
            group_controls_controls_select_options_1 = false;
    
        if (!group_controls_controls_assign_controller_1) {
            group_controls_controls_assign_controller_1 = true;
        }
        set_timer((0) / 1000.0);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(okay2_78_instances))->alterables->values.set(0, 0);
    }
    event_171_3_end: ;
}
void Frames::event_func_579()
{
    // event 172_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_172_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_172_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_172_3_end;
        {
            loop_save_array_running = true;
            int times = int(8);
            loop_save_array_index = 0;
            while (loop_save_array_index < times) {
                loop_save_array_3();
                if (!loop_save_array_running) break;
                loop_save_array_index++;
            }
        }
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(0, 1);
        ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->save(get_app_drive()+get_app_dir()+str_keyboard_cfg_12);
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->save(get_app_drive()+get_app_dir()+str_gamepad_cfg_13);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./control_gamepad.cfg");
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./control_keyboard.cfg");
    }
    event_172_3_end: ;
}
void Frames::event_func_580()
{
    // event 173_3
    {
        if (!(group_controls_1 && group_controls_controls_select_options_1)) goto event_173_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_173_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (9))) goto event_173_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_controls_controls_select_options_1 = false;
    
        if (!group_controls_controls_zoom_out_1) {
            group_controls_controls_zoom_out_1 = true;
        }
    }
    event_173_3_end: ;
}
void Frames::event_func_581()
{
    // event 174_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_174_3_end;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        controlboxname_68_instances.clear_selection();
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_174_3_end: ;
}
void Frames::event_func_582()
{
    // event 175_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_175_3_end;
        controlboxname_68_instances.clear_selection();
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-1))) { it.deselect(); continue; }
        }
        if (!controlboxname_68_instances.has_selection()) goto event_175_3_end;
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
    }
    event_175_3_end: ;
}
void Frames::event_func_583()
{
    // event 176_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_176_3_end;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-1))) { it.deselect(); continue; }
        }
        if (!controlbox_69_instances.has_selection()) goto event_176_3_end;
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
    }
    event_176_3_end: ;
}
void Frames::event_func_584()
{
    // event 177_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_177_3_end;
        if (not_always_177_3 > loop_count) {
            not_always_177_3 = loop_count + 2;
            goto event_177_3_end;
        }
        not_always_177_3 = loop_count + 2;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(3, ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->get_value(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0), 1));
    }
    event_177_3_end: ;
}
void Frames::event_func_585()
{
    // event 178_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_178_3_end;
        if (!(is_any_key_pressed_once())) goto event_178_3_end;
        if (is_key_pressed(SDLK_ESCAPE)) goto event_178_3_end;
        if (!(frame_time >= 0.15)) goto event_178_3_end;
        ((Active*)get_instance(okay2_78_instances))->alterables->values.set(0, get_last_key_pressed());
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        {
            loop_check_keys_running = true;
            int times = int(9);
            loop_check_keys_index = 0;
            while (loop_check_keys_index < times) {
                loop_check_keys_3();
                if (!loop_check_keys_running) break;
                loop_check_keys_index++;
            }
        }
    }
    event_178_3_end: ;
}
void Frames::event_func_586()
{
    // event 181_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_181_3_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_181_3_end;
        if (!(frame_time >= 0.15)) goto event_181_3_end;
            group_controls_controls_assign_key_1 = false;
    
        if (!group_controls_controls_select_options_1) {
            group_controls_controls_select_options_1 = true;
        }
        set_timer((0) / 1000.0);
    }
    event_181_3_end: ;
}
void Frames::event_func_587()
{
    // event 182_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1)) goto event_182_3_end;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        controlboxname_68_instances.clear_selection();
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_182_3_end: ;
}
void Frames::event_func_588()
{
    // event 183_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1)) goto event_183_3_end;
        controlboxname_68_instances.clear_selection();
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-1))) { it.deselect(); continue; }
        }
        if (!controlboxname_68_instances.has_selection()) goto event_183_3_end;
        for (ObjectIterator it(controlboxname_68_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
    }
    event_183_3_end: ;
}
void Frames::event_func_589()
{
    // event 184_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1)) goto event_184_3_end;
        controlbox_69_instances.clear_selection();
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-1))) { it.deselect(); continue; }
        }
        if (!controlbox_69_instances.has_selection()) goto event_184_3_end;
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
    }
    event_184_3_end: ;
}
void Frames::event_func_590()
{
    // event 185_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1)) goto event_185_3_end;
        if (not_always_185_3 > loop_count) {
            not_always_185_3 = loop_count + 2;
            goto event_185_3_end;
        }
        not_always_185_3 = loop_count + 2;
            group_controls_controls_assign_controller_p1_waiting_for_input_1 = false;
    
    }
    event_185_3_end: ;
}
void Frames::event_func_591()
{
    // event 186_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1)) goto event_186_3_end;
        if (!(frame_time >= 0.15)) goto event_186_3_end;
        if (!group_controls_controls_assign_controller_p1_waiting_for_input_1) {
            group_controls_controls_assign_controller_p1_waiting_for_input_1 = true;
        }
    }
    event_186_3_end: ;
}
void Frames::event_func_592()
{
    // event 187_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto event_187_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(1, 0);
            ((FrameObject*)*it)->alterables->values.set(2, 0);
            ((FrameObject*)*it)->alterables->values.set(3, 0);
            ((FrameObject*)*it)->alterables->values.set(4, 0);
            ((FrameObject*)*it)->alterables->values.set(5, 0);
            ((FrameObject*)*it)->alterables->values.set(6, 0);
            ((FrameObject*)*it)->alterables->values.set(7, 0);
            ((FrameObject*)*it)->alterables->values.set(8, 0);
        }
    }
    event_187_3_end: ;
}
void Frames::event_func_593()
{
    // event 188_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto event_188_3_end;
        if (!((get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) > (-1))) goto event_188_3_end;
        if (not_always_188_3 > loop_count) {
            not_always_188_3 = loop_count + 2;
            goto event_188_3_end;
        }
        not_always_188_3 = loop_count + 2;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(1, 1);
        }
    }
    event_188_3_end: ;
}
void Frames::event_func_594()
{
    // event 189_3
    bool or_result_189_3 = false;
    bool or_temp_result_189_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_189_3_0_end;
        if (!((get_joystick_x(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_189_3_0_end;
        if (not_always_189_3 > loop_count) {
            not_always_189_3 = loop_count + 2;
            goto or_event_189_3_0_end;
        }
        not_always_189_3 = loop_count + 2;
        or_result_189_3 = true;
        or_temp_result_189_3_0 = true;
    }
    or_event_189_3_0_end: ;
    // event 189_3
    bool or_temp_result_189_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_189_3_1_end;
        if (!((get_joystick_x(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(-1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_189_3_1_end;
        if (not_always_189_3 > loop_count) {
            not_always_189_3 = loop_count + 2;
            goto or_event_189_3_1_end;
        }
        not_always_189_3 = loop_count + 2;
        or_result_189_3 = true;
        or_temp_result_189_3_1 = true;
        or_event_189_3_1_end: ;
        if (!or_result_189_3) goto or_final_or_event_189_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_189_3_1_end: ;
}
void Frames::event_func_595()
{
    // event 190_3
    bool or_result_190_3 = false;
    bool or_temp_result_190_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_190_3_0_end;
        if (!((get_joystick_y(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_190_3_0_end;
        if (not_always_190_3 > loop_count) {
            not_always_190_3 = loop_count + 2;
            goto or_event_190_3_0_end;
        }
        not_always_190_3 = loop_count + 2;
        or_result_190_3 = true;
        or_temp_result_190_3_0 = true;
    }
    or_event_190_3_0_end: ;
    // event 190_3
    bool or_temp_result_190_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_190_3_1_end;
        if (!((get_joystick_y(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(-1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_190_3_1_end;
        if (not_always_190_3 > loop_count) {
            not_always_190_3 = loop_count + 2;
            goto or_event_190_3_1_end;
        }
        not_always_190_3 = loop_count + 2;
        or_result_190_3 = true;
        or_temp_result_190_3_1 = true;
        or_event_190_3_1_end: ;
        if (!or_result_190_3) goto or_final_or_event_190_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(3, 1);
        }
    }
    or_final_or_event_190_3_1_end: ;
}
void Frames::event_func_596()
{
    // event 191_3
    bool or_result_191_3 = false;
    bool or_temp_result_191_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_191_3_0_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_191_3_0_end;
        if (not_always_191_3 > loop_count) {
            not_always_191_3 = loop_count + 2;
            goto or_event_191_3_0_end;
        }
        not_always_191_3 = loop_count + 2;
        or_result_191_3 = true;
        or_temp_result_191_3_0 = true;
    }
    or_event_191_3_0_end: ;
    // event 191_3
    bool or_temp_result_191_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_191_3_1_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_191_3_1_end;
        if (not_always_191_3 > loop_count) {
            not_always_191_3 = loop_count + 2;
            goto or_event_191_3_1_end;
        }
        not_always_191_3 = loop_count + 2;
        or_result_191_3 = true;
        or_temp_result_191_3_1 = true;
        or_event_191_3_1_end: ;
        if (!or_result_191_3) goto or_final_or_event_191_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(4, 1);
        }
    }
    or_final_or_event_191_3_1_end: ;
}
void Frames::event_func_597()
{
    // event 192_3
    bool or_result_192_3 = false;
    bool or_temp_result_192_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_192_3_0_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_192_3_0_end;
        if (not_always_192_3 > loop_count) {
            not_always_192_3 = loop_count + 2;
            goto or_event_192_3_0_end;
        }
        not_always_192_3 = loop_count + 2;
        or_result_192_3 = true;
        or_temp_result_192_3_0 = true;
    }
    or_event_192_3_0_end: ;
    // event 192_3
    bool or_temp_result_192_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_192_3_1_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_192_3_1_end;
        if (not_always_192_3 > loop_count) {
            not_always_192_3 = loop_count + 2;
            goto or_event_192_3_1_end;
        }
        not_always_192_3 = loop_count + 2;
        or_result_192_3 = true;
        or_temp_result_192_3_1 = true;
        or_event_192_3_1_end: ;
        if (!or_result_192_3) goto or_final_or_event_192_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(5, 1);
        }
    }
    or_final_or_event_192_3_1_end: ;
}
void Frames::event_func_598()
{
    // event 193_3
    bool or_result_193_3 = false;
    bool or_temp_result_193_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_193_3_0_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_193_3_0_end;
        if (not_always_193_3 > loop_count) {
            not_always_193_3 = loop_count + 2;
            goto or_event_193_3_0_end;
        }
        not_always_193_3 = loop_count + 2;
        or_result_193_3 = true;
        or_temp_result_193_3_0 = true;
    }
    or_event_193_3_0_end: ;
    // event 193_3
    bool or_temp_result_193_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_193_3_1_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_193_3_1_end;
        if (not_always_193_3 > loop_count) {
            not_always_193_3 = loop_count + 2;
            goto or_event_193_3_1_end;
        }
        not_always_193_3 = loop_count + 2;
        or_result_193_3 = true;
        or_temp_result_193_3_1 = true;
        or_event_193_3_1_end: ;
        if (!or_result_193_3) goto or_final_or_event_193_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(6, 1);
        }
    }
    or_final_or_event_193_3_1_end: ;
}
void Frames::event_func_599()
{
    // event 194_3
    bool or_result_194_3 = false;
    bool or_temp_result_194_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_194_3_0_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_194_3_0_end;
        if (not_always_194_3 > loop_count) {
            not_always_194_3 = loop_count + 2;
            goto or_event_194_3_0_end;
        }
        not_always_194_3 = loop_count + 2;
        or_result_194_3 = true;
        or_temp_result_194_3_0 = true;
    }
    or_event_194_3_0_end: ;
    // event 194_3
    bool or_temp_result_194_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_194_3_1_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_194_3_1_end;
        if (not_always_194_3 > loop_count) {
            not_always_194_3 = loop_count + 2;
            goto or_event_194_3_1_end;
        }
        not_always_194_3 = loop_count + 2;
        or_result_194_3 = true;
        or_temp_result_194_3_1 = true;
        or_event_194_3_1_end: ;
        if (!or_result_194_3) goto or_final_or_event_194_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(7, 1);
        }
    }
    or_final_or_event_194_3_1_end: ;
}
void Frames::event_func_600()
{
    // event 195_3
    bool or_result_195_3 = false;
    bool or_temp_result_195_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_195_3_0_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_195_3_0_end;
        if (not_always_195_3 > loop_count) {
            not_always_195_3 = loop_count + 2;
            goto or_event_195_3_0_end;
        }
        not_always_195_3 = loop_count + 2;
        or_result_195_3 = true;
        or_temp_result_195_3_0 = true;
    }
    or_event_195_3_0_end: ;
    // event 195_3
    bool or_temp_result_195_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto or_event_195_3_1_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto or_event_195_3_1_end;
        if (not_always_195_3 > loop_count) {
            not_always_195_3 = loop_count + 2;
            goto or_event_195_3_1_end;
        }
        not_always_195_3 = loop_count + 2;
        or_result_195_3 = true;
        or_temp_result_195_3_1 = true;
        or_event_195_3_1_end: ;
        if (!or_result_195_3) goto or_final_or_event_195_3_1_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(8, 1);
        }
    }
    or_final_or_event_195_3_1_end: ;
}
void Frames::event_func_601()
{
    // event 196_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto event_196_3_end;
        if (not_always_196_3 > loop_count) {
            not_always_196_3 = loop_count + 2;
            goto event_196_3_end;
        }
        not_always_196_3 = loop_count + 2;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(1, 0);
            ((FrameObject*)*it)->alterables->values.set(2, 0);
            ((FrameObject*)*it)->alterables->values.set(3, 0);
            ((FrameObject*)*it)->alterables->values.set(4, 0);
            ((FrameObject*)*it)->alterables->values.set(5, 0);
            ((FrameObject*)*it)->alterables->values.set(6, 0);
            ((FrameObject*)*it)->alterables->values.set(7, 0);
            ((FrameObject*)*it)->alterables->values.set(8, 0);
        }
            group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1 = false;
    
    }
    event_196_3_end: ;
}
void Frames::event_func_602()
{
    // event 197_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1)) goto event_197_3_end;
        if (not_always_197_3 > loop_count) {
            not_always_197_3 = loop_count + 2;
            goto event_197_3_end;
        }
        not_always_197_3 = loop_count + 2;
        if (!group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1) {
            group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1 = true;
        }
    }
    event_197_3_end: ;
}
void Frames::event_func_603()
{
    // event 198_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_198_3_end;
        if (!(is_key_pressed_once(SDLK_BACKSPACE))) goto event_198_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 0);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_198_3_end: ;
}
void Frames::event_func_604()
{
    // event 199_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_199_3_end;
        if (!(any_joystick_pressed_once(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0)))) goto event_199_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, get_joystick_last_press(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0)));
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_199_3_end: ;
}
void Frames::event_func_605()
{
    // event 200_3
    bool or_result_200_3 = false;
    bool or_temp_result_200_3_0 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto or_event_200_3_0_end;
        if (!((get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (0))) goto or_event_200_3_0_end;
        or_result_200_3 = true;
        or_temp_result_200_3_0 = true;
    }
    or_event_200_3_0_end: ;
    // event 200_3
    bool or_temp_result_200_3_1 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto or_event_200_3_1_end;
        if (!((get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (90))) goto or_event_200_3_1_end;
        or_result_200_3 = true;
        or_temp_result_200_3_1 = true;
    }
    or_event_200_3_1_end: ;
    // event 200_3
    bool or_temp_result_200_3_2 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto or_event_200_3_2_end;
        if (!((get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (180))) goto or_event_200_3_2_end;
        or_result_200_3 = true;
        or_temp_result_200_3_2 = true;
    }
    or_event_200_3_2_end: ;
    // event 200_3
    bool or_temp_result_200_3_3 = false;
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto or_event_200_3_3_end;
        if (!((get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (270))) goto or_event_200_3_3_end;
        or_result_200_3 = true;
        or_temp_result_200_3_3 = true;
        or_event_200_3_3_end: ;
        if (!or_result_200_3) goto or_final_or_event_200_3_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        iconjoypad_86_instances.clear_selection();
        for (ObjectIterator it(iconjoypad_86_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 1);
            ((Active*)*it)->alterables->values.set(25, get_joystick_dpad_degrees(((ArrayObject*)get_instance(mapdatatemporary2_130_instances, it.current_index))->get_value(0, 0, 0)));
        }
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    or_final_or_event_200_3_3_end: ;
}
void Frames::event_func_606()
{
    // event 201_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_201_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_201_3_end;
        if (!((get_joystick_x(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_201_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 2);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_201_3_end: ;
}
void Frames::event_func_607()
{
    // event 202_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_202_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_202_3_end;
        if (!((get_joystick_x(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(-1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_202_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 2);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_202_3_end: ;
}
void Frames::event_func_608()
{
    // event 203_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_203_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_203_3_end;
        if (!((get_joystick_y(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_203_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 3);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_203_3_end: ;
}
void Frames::event_func_609()
{
    // event 204_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_204_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_204_3_end;
        if (!((get_joystick_y(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(-1000.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_204_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 3);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_204_3_end: ;
}
void Frames::event_func_610()
{
    // event 205_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_205_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_205_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_205_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 4);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_205_3_end: ;
}
void Frames::event_func_611()
{
    // event 206_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_206_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_206_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_206_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 4);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_206_3_end: ;
}
void Frames::event_func_612()
{
    // event 207_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_207_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_207_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_207_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 5);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_207_3_end: ;
}
void Frames::event_func_613()
{
    // event 208_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_208_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_208_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_208_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 5);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_208_3_end: ;
}
void Frames::event_func_614()
{
    // event 209_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_209_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_209_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_209_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 6);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_209_3_end: ;
}
void Frames::event_func_615()
{
    // event 210_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_210_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_210_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_210_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 6);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_210_3_end: ;
}
void Frames::event_func_616()
{
    // event 211_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_211_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_211_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_211_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 7);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_211_3_end: ;
}
void Frames::event_func_617()
{
    // event 212_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_212_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_212_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_212_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 7);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_212_3_end: ;
}
void Frames::event_func_618()
{
    // event 213_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_213_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_213_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_213_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, 1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_213_3_end: ;
}
void Frames::event_func_619()
{
    // event 214_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_214_3_end;
        joystick2_29_instances.clear_selection();
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            if (!((((FrameObject*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!joystick2_29_instances.has_selection()) goto event_214_3_end;
        if (!((get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))) == (get_joystick_dummy(0.0f, ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(0, 0, 0))))) goto event_214_3_end;
        for (ObjectIterator it(joystick2_29_instances); !it.end(); ++it) {
            ((FrameObject*)*it)->alterables->values.set(9, 1);
        }
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(iconjoypad_86_instances))->alterables->values.set(25, -1);
        {
            loop_save_input_running = true;
            int times = int(1);
            loop_save_input_index = 0;
            while (loop_save_input_index < times) {
                loop_save_input_3();
                if (!loop_save_input_running) break;
                loop_save_input_index++;
            }
        }
    }
    event_214_3_end: ;
}
void Frames::event_func_620()
{
    // event 216_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_216_3_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_216_3_end;
            group_controls_controls_assign_controller_1 = false;
    
        if (!group_controls_controls_select_options_1) {
            group_controls_controls_select_options_1 = true;
        }
        set_timer((0) / 1000.0);
    }
    event_216_3_end: ;
}
