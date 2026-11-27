#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17970()
{
    // event 1742_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1742_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1742_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (4910))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1742_79_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1742_79_end: ;
}
void Frames::event_func_17971()
{
    // event 1743_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1743_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1743_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (4910))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1743_79_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1743_79_end: ;
}
void Frames::event_func_17972()
{
    // event 1744_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1744_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1744_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (5030))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1744_79_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1744_79_end: ;
}
void Frames::event_func_17973()
{
    // event 1745_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1745_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1745_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()-20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1745_79_end;
        if (once_condition_1745_79) goto event_1745_79_end;
        once_condition_1745_79 = true;
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1745_79_end: ;
}
void Frames::event_func_17974()
{
    // event 1746_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1746_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1746_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (5030))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1746_79_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1746_79_end: ;
}
void Frames::event_func_17975()
{
    // event 1747_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1747_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1747_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (4990))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1747_79_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+9);
            ((Active*)*it)->force_speed(45);
        }
    }
    event_1747_79_end: ;
}
void Frames::event_func_17976()
{
    // event 1748_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1748_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1748_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (4990))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1748_79_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1748_79_end: ;
}
void Frames::event_func_17977()
{
    // event 1749_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1749_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1749_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_y(-1 + 2)-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1749_79_end: ;
}
void Frames::event_func_17978()
{
    // event 1750_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1750_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1750_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1750_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (620))) goto event_1750_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 4.5);
    }
    event_1750_79_end: ;
}
void Frames::event_func_17979()
{
    // event 1751_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1751_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1751_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) >= (620))) goto event_1751_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+80);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(33);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, 16-1);
    }
    event_1751_79_end: ;
}
void Frames::event_func_17980()
{
    // event 1752_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1752_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1752_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (100))) goto event_1752_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 30);
    }
    event_1752_79_end: ;
}
void Frames::event_func_17981()
{
    // event 1753_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1753_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1753_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (154))) goto event_1753_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 58);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_14_04_ogg_288, 18-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1753_79_end: ;
}
void Frames::event_func_17982()
{
    // event 1754_79
    bool or_result_1754_79 = false;
    bool or_temp_result_1754_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto or_event_1754_79_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1754_79_0_end;
        or_result_1754_79 = true;
        or_temp_result_1754_79_0 = true;
    }
    or_event_1754_79_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1754_79_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1754_79
    bool or_temp_result_1754_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto or_event_1754_79_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1754_79_1_end;
        or_result_1754_79 = true;
        or_temp_result_1754_79_1 = true;
    }
    or_event_1754_79_1_end: ;
    if (or_temp_result_1754_79_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1754_79
    bool or_temp_result_1754_79_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto or_event_1754_79_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1754_79_2_end;
        or_result_1754_79 = true;
        or_temp_result_1754_79_2 = true;
        or_event_1754_79_2_end: ;
        if (or_temp_result_1754_79_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1754_79) goto or_final_or_event_1754_79_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1754_79_0 || or_temp_result_1754_79_1 || or_temp_result_1754_79_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1754_79_2_end: ;
}
void Frames::event_func_17983()
{
    // event 1755_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1755_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1755_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (58))) goto event_1755_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (60))) goto event_1755_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1755_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1755_79_end: ;
}
void Frames::event_func_17984()
{
    // event 1756_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1756_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (58))) goto event_1756_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (60))) goto event_1756_79_end;
        if (!((media.get_channel_position(-1 +18)) > (300))) goto event_1756_79_end;
        if (!((media.get_channel_position(-1 +18)) < (1700))) goto event_1756_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(28);
        }
    }
    event_1756_79_end: ;
}
void Frames::event_func_17985()
{
    // event 1757_79
    bool or_result_1757_79 = false;
    bool or_temp_result_1757_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto or_event_1757_79_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (58))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (60))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1757_79_0_end;
        if (!((media.get_channel_position(-1 +18)) <= (0))) goto or_event_1757_79_0_end;
        or_result_1757_79 = true;
        or_temp_result_1757_79_0 = true;
    }
    or_event_1757_79_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1757_79_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 1757_79
    bool or_temp_result_1757_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto or_event_1757_79_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (58))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (60))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1757_79_1_end;
        if (!((media.get_channel_position(-1 +18)) > (1700))) goto or_event_1757_79_1_end;
        or_result_1757_79 = true;
        or_temp_result_1757_79_1 = true;
        or_event_1757_79_1_end: ;
        if (or_temp_result_1757_79_1) {
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1757_79) goto or_final_or_event_1757_79_1_end;
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1757_79_0 || or_temp_result_1757_79_1) {
            dialogbox_566_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    or_final_or_event_1757_79_1_end: ;
}
void Frames::event_func_17986()
{
    // event 1758_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1758_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (58))) goto event_1758_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1758_79_end: ;
}
void Frames::event_func_17987()
{
    // event 1759_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1759_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (59))) goto event_1759_79_end;
        if (!((media.get_channel_position(-1 +20)) > (2100))) goto event_1759_79_end;
        if (once_condition_1759_79) goto event_1759_79_end;
        once_condition_1759_79 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(48);
        }
    }
    event_1759_79_end: ;
}
void Frames::event_func_17988()
{
    // event 1760_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1760_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (60))) goto event_1760_79_end;
        if (not_always_1760_79 > loop_count) {
            not_always_1760_79 = loop_count + 2;
            goto event_1760_79_end;
        }
        not_always_1760_79 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        media.stop_channel(18-1);
    }
    event_1760_79_end: ;
}
void Frames::event_func_17989()
{
    // event 1761_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1761_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1761_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (60))) goto event_1761_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1761_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
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
    event_1761_79_end: ;
}
void Frames::event_func_17990()
{
    // event 1762_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1762_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1762_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1762_79_end: ;
}
void Frames::event_func_17991()
{
    // event 1763_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1763_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1763_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1763_79_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(45);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(((Active*)get_instance(shipplatform2_2094_instances, default_active_instance))->get_y()-14);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(5750);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(5790);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(5710);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(5660);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 5730);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_layer(2-1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(5830);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1763_79_end: ;
}
void Frames::event_func_17992()
{
    // event 1764_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1764_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1764_79_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1764_79_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1764_79_end: ;
}
void Frames::event_func_17993()
{
    // event 1765_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1765_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1765_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1765_79_end: ;
}
void Frames::event_func_17994()
{
    // event 1766_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1766_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1766_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1766_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 61);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1766_79_end: ;
}
void Frames::event_func_17995()
{
    // event 1767_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1767_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1767_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (61))) goto event_1767_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (63))) goto event_1767_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1767_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1767_79_end: ;
}
void Frames::event_func_17996()
{
    // event 1768_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1768_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1768_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 4);
    }
    event_1768_79_end: ;
}
void Frames::event_func_17997()
{
    // event 1769_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1769_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1769_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (25))) goto event_1769_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
    }
    event_1769_79_end: ;
}
void Frames::event_func_17998()
{
    // event 1770_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1770_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1770_79_end;
        if (once_condition_1770_79) goto event_1770_79_end;
        once_condition_1770_79 = true;
        media.play_id(SOUND_SCENE_AIRSHIP_446, -1, 1);
    }
    event_1770_79_end: ;
}
void Frames::event_func_17999()
{
    // event 1771_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1771_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1771_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
    }
    event_1771_79_end: ;
}
void Frames::event_func_18000()
{
    // event 1772_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1772_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1772_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (800))) goto event_1772_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1772_79_end: ;
}
void Frames::event_func_18001()
{
    // event 1773_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1773_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1773_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (40))) goto event_1773_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(4, 0.01);
    }
    event_1773_79_end: ;
}
void Frames::event_func_18002()
{
    // event 1774_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1774_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1774_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (100))) goto event_1774_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 0.5);
    }
    event_1774_79_end: ;
}
void Frames::event_func_18003()
{
    // event 1775_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1775_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1775_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (200))) goto event_1775_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_y(-1 + 2)-1);
    }
    event_1775_79_end: ;
}
void Frames::event_func_18004()
{
    // event 1776_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1776_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1776_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (800))) goto event_1776_79_end;
        ((SystemBox*)get_instance(levelparallaxzaoship2_3944_instances))->set_global_position(frame_left()+global_values->get(16), frame_top());
        ((SystemBox*)get_instance(levelparallaxzaoship2_3944_instances))->set_visible(true);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(5, -4);
    }
    event_1776_79_end: ;
}
void Frames::event_func_18005()
{
    // event 1777_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1777_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1777_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (800))) goto event_1777_79_end;
        ((SystemBox*)get_instance(levelparallaxzaoship2_3944_instances))->set_global_position(((SystemBox*)get_instance(levelparallaxzaoship2_3944_instances))->get_x()+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(5), frame_top());
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(5, 0.05);
    }
    event_1777_79_end: ;
}
void Frames::event_func_18006()
{
    // event 1778_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1778_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1778_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (800))) goto event_1778_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(5)) > (2))) goto event_1778_79_end;
        if (once_condition_1778_79) goto event_1778_79_end;
        once_condition_1778_79 = true;
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1778_79_end: ;
}
void Frames::event_func_18007()
{
    // event 1779_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1779_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1779_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (1000))) goto event_1779_79_end;
        if (not_always_1779_79 > loop_count) {
            not_always_1779_79 = loop_count + 2;
            goto event_1779_79_end;
        }
        not_always_1779_79 = loop_count + 2;
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
    
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1779_79_end: ;
}
void Frames::event_func_18008()
{
    // event 1780_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1780_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1780_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (1000))) goto event_1780_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1780_79_end: ;
}
void Frames::event_func_18009()
{
    // event 1781_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1781_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1781_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (1000))) goto event_1781_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1781_79_end;
        next_frame = 35 + 0;    
    
        global_values->set(4, 99);
    }
    event_1781_79_end: ;
}
void Frames::event_func_18010()
{
    // event 1783_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1)) goto event_1783_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1783_79_end: ;
}
void Frames::event_func_18011()
{
    // event 1784_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1)) goto event_1784_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1784_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 950);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 440);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(877);
            ((Active*)*it)->set_y(456);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(72);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1784_79_end: ;
}
void Frames::event_func_18012()
{
    // event 1785_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1)) goto event_1785_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1785_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1785_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1785_79_end: ;
}
void Frames::event_func_18013()
{
    // event 1994_79
    {
        if (!(group_main_engine_1)) goto event_1994_79_end;
        if (!((((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->alterables->values.get(5)) > (0))) goto event_1994_79_end;
        ((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->alterables->values.sub(5, 640);
    }
    event_1994_79_end: ;
}
void Frames::event_func_18014()
{
    // event 1995_79
    {
        if (!(group_pause_1)) goto event_1995_79_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1995_79_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1995_79_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1995_79_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1995_79_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
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
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
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
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
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
        tbpipeloop3_2807_instances.clear_selection();
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
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        layer0loop_1742_instances.clear_selection();
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
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
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
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
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
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->stop_animation();
        playerassistcopilot2_3952_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot2_3952_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
    }
    event_1995_79_end: ;
}
void Frames::event_func_18015()
{
    // event 1996_79
    bool or_result_1996_79 = false;
    bool or_temp_result_1996_79_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1996_79_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1996_79_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1996_79_0_end;
        or_result_1996_79 = true;
        or_temp_result_1996_79_0 = true;
    }
    or_event_1996_79_0_end: ;
    // event 1996_79
    bool or_temp_result_1996_79_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1996_79_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1996_79_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1996_79_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1996_79_1_end;
        or_result_1996_79 = true;
        or_temp_result_1996_79_1 = true;
        or_event_1996_79_1_end: ;
        if (!or_result_1996_79) goto or_final_or_event_1996_79_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
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
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
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
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
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
        tbpipeloop3_2807_instances.clear_selection();
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
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
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
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
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
        gimmicklanternbridge6_1732_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
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
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->start_animation();
        playerassistcopilot2_3952_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot2_3952_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
    }
    or_final_or_event_1996_79_1_end: ;
}
void Frames::event_func_18016()
{
    // event 2002_79
    {
        if (!(group_pause_1)) goto event_2002_79_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_2002_79_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (4))) goto event_2002_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2002_79_end;
        if (!((global_values->get(4)) == (0))) goto event_2002_79_end;
        global_values->set(4, 0);
        next_frame = 29 + 0;    
    
        media.stop_samples();
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
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2002_79_end: ;
}
void Frames::event_func_18017()
{
    // event 2003_79
    {
        if (!(group_pause_1)) goto event_2003_79_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2003_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2003_79_end;
        if (!((global_values->get(4)) != (0))) goto event_2003_79_end;
        if (!((global_values->get(4)) != (2))) goto event_2003_79_end;
        global_values->set(4, 4);
        next_frame = 83 + 0;    
    
        media.stop_samples();
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
    }
    event_2003_79_end: ;
}
void Frames::event_func_18018()
{
    // event 2004_79
    {
        if (!(group_pause_1)) goto event_2004_79_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2004_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2004_79_end;
        if (!((global_values->get(4)) == (2))) goto event_2004_79_end;
        global_values->set(4, 99);
        next_frame = 35 + 0;    
    
        media.stop_samples();
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
    }
    event_2004_79_end: ;
}
void Frames::event_func_18019()
{
    // event 2005_79
    {
        if (!(group_pause_1)) goto event_2005_79_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2005_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2005_79_end;
        if (!((global_values->get(4)) != (0))) goto event_2005_79_end;
        global_values->set(4, 0);
        next_frame = 35 + 0;    
    
        media.stop_samples();
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
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2005_79_end: ;
}
void Frames::handle_frame_80_events()
{
    test_collisions_79();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_2735();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_2744();
    event_func_1473();
    event_func_16748();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_2752();
    event_func_2753();
    event_func_2754();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_2755();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_2776();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_16749();
    event_func_1759();
    event_func_16750();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_16751();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_16752();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_16753();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_2823();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_16754();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_16755();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_2824();
    event_func_1973();
    event_func_2825();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_16756();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2082();
    event_func_2083();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_16757();
    event_func_2289();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2939();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_17728();
    event_func_6685();
    event_func_6686();
    event_func_6688();
    event_func_6690();
    event_func_6691();
    event_func_6692();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_14812();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    event_func_6819();
    event_func_6820();
    event_func_17729();
    event_func_6823();
    event_func_6824();
    event_func_6825();
    event_func_6826();
    event_func_6827();
    event_func_6828();
    event_func_17033();
    event_func_17034();
    event_func_17035();
    event_func_17036();
    event_func_17037();
    event_func_17038();
    event_func_17039();
    event_func_17040();
    event_func_17041();
    event_func_17042();
    event_func_17043();
    event_func_17044();
    event_func_17045();
    event_func_17046();
    event_func_17047();
    event_func_17048();
    event_func_17049();
    event_func_17050();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_17051();
    event_func_17052();
    event_func_17053();
    event_func_17054();
    event_func_17055();
    event_func_17056();
    event_func_17057();
    event_func_17058();
    event_func_17059();
    event_func_17060();
    event_func_17061();
    event_func_17062();
    event_func_17063();
    event_func_17064();
    event_func_17065();
    event_func_17066();
    event_func_17067();
    event_func_17068();
    event_func_17069();
    event_func_17070();
    event_func_17730();
    event_func_17731();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_17071();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end;
    event_func_17072();
    event_func_17073();
    event_func_17074();
    event_func_17075();
    event_func_17076();
    event_func_17077();
    event_func_17078();
    event_func_17079();
    event_func_17080();
    event_func_17081();
    event_func_17082();
    event_func_17083();
    event_func_17084();
    event_func_17085();
    event_func_17086();
    event_func_17087();
    event_func_17088();
    event_func_17089();
    event_func_17090();
    event_func_17732();
    event_func_17733();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_17091();
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    if (!group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1) goto group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1_end;
    event_func_17734();
    event_func_17735();
    event_func_17736();
    event_func_17737();
    event_func_17738();
    event_func_17739();
    event_func_17740();
    event_func_17741();
    event_func_17742();
    event_func_17743();
    event_func_17744();
    event_func_17745();
    event_func_17746();
    event_func_17747();
    event_func_17748();
    event_func_17749();
    event_func_17750();
    event_func_17751();
    event_func_17752();
    event_func_17753();
    event_func_17754();
    event_func_17755();
    event_func_17756();
    event_func_17757();
    event_func_17758();
    event_func_17759();
    event_func_17760();
    event_func_17761();
    event_func_17762();
    event_func_17763();
    event_func_17764();
    event_func_17765();
    event_func_17766();
    event_func_17767();
    event_func_17768();
    event_func_17769();
    event_func_17770();
    event_func_17771();
    event_func_17772();
    event_func_17773();
    event_func_17774();
    event_func_17775();
    event_func_17776();
    event_func_17777();
    event_func_17778();
    event_func_17779();
    event_func_17780();
    event_func_17781();
    event_func_17782();
    event_func_17783();
    event_func_17784();
    event_func_17785();
    event_func_17786();
    event_func_17787();
    event_func_17788();
    event_func_17789();
    event_func_17790();
    event_func_17791();
    event_func_17792();
    event_func_17793();
    event_func_17794();
    event_func_17795();
    event_func_17796();
    event_func_17797();
    event_func_17798();
    event_func_17799();
    event_func_17800();
    event_func_17801();
    event_func_17802();
    event_func_17803();
    event_func_17804();
    event_func_17805();
    event_func_17806();
    event_func_17807();
    group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1) goto group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1_end;
    event_func_17808();
    event_func_17809();
    event_func_17810();
    event_func_17811();
    event_func_17812();
    event_func_17813();
    event_func_17814();
    event_func_17815();
    event_func_17816();
    event_func_17817();
    event_func_17818();
    event_func_17819();
    event_func_17820();
    event_func_17821();
    event_func_17822();
    event_func_17823();
    event_func_17824();
    event_func_17825();
    event_func_17826();
    event_func_17827();
    event_func_17828();
    event_func_17829();
    event_func_17830();
    event_func_17831();
    event_func_17832();
    event_func_17833();
    event_func_17834();
    event_func_17835();
    event_func_17836();
    event_func_17837();
    event_func_17838();
    event_func_17839();
    event_func_17840();
    event_func_17841();
    event_func_17842();
    event_func_17843();
    event_func_17844();
    event_func_17845();
    event_func_17846();
    event_func_17847();
    event_func_17848();
    event_func_17849();
    event_func_17850();
    event_func_17851();
    event_func_17852();
    event_func_17853();
    event_func_17854();
    event_func_17855();
    event_func_17856();
    event_func_17857();
    event_func_17858();
    event_func_17859();
    event_func_17860();
    event_func_17861();
    event_func_17862();
    event_func_17863();
    event_func_17864();
    event_func_17865();
    event_func_17866();
    event_func_17867();
    event_func_17868();
    event_func_17869();
    event_func_17870();
    event_func_17871();
    event_func_17872();
    event_func_17873();
    event_func_17874();
    event_func_17875();
    event_func_17876();
    event_func_17877();
    event_func_17878();
    event_func_17879();
    event_func_17880();
    event_func_17881();
    event_func_17882();
    event_func_17883();
    event_func_17884();
    event_func_17885();
    event_func_17886();
    event_func_17887();
    event_func_17888();
    event_func_17889();
    event_func_17890();
    event_func_17891();
    event_func_17892();
    event_func_17893();
    event_func_17894();
    event_func_17895();
    event_func_17896();
    event_func_17897();
    event_func_17898();
    event_func_17899();
    event_func_17900();
    event_func_17901();
    event_func_17902();
    event_func_17903();
    event_func_17904();
    event_func_17905();
    event_func_17906();
    event_func_17907();
    event_func_17908();
    event_func_17909();
    event_func_17910();
    event_func_17911();
    event_func_17912();
    event_func_17913();
    event_func_17914();
    event_func_17915();
    event_func_17916();
    event_func_17917();
    event_func_17918();
    event_func_17919();
    event_func_17920();
    event_func_17921();
    event_func_17922();
    event_func_17923();
    event_func_17924();
    event_func_17925();
    event_func_17926();
    event_func_17927();
    event_func_17928();
    event_func_17929();
    event_func_17930();
    event_func_17931();
    event_func_17932();
    event_func_17933();
    event_func_17934();
    event_func_17935();
    event_func_17936();
    event_func_17937();
    event_func_17938();
    event_func_17939();
    event_func_17940();
    event_func_17941();
    event_func_17942();
    event_func_17943();
    event_func_17944();
    event_func_17945();
    event_func_17946();
    event_func_17947();
    event_func_17948();
    event_func_17949();
    event_func_17950();
    event_func_17951();
    event_func_17952();
    event_func_17953();
    event_func_17954();
    event_func_17955();
    event_func_17956();
    event_func_17957();
    event_func_17958();
    event_func_17959();
    group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1) goto group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1_end;
    event_func_17960();
    event_func_17961();
    event_func_17962();
    event_func_17963();
    event_func_17964();
    event_func_17965();
    event_func_17966();
    event_func_17967();
    event_func_17968();
    event_func_17969();
    event_func_17970();
    event_func_17971();
    event_func_17972();
    event_func_17973();
    event_func_17974();
    event_func_17975();
    event_func_17976();
    event_func_17977();
    event_func_17978();
    event_func_17979();
    event_func_17980();
    event_func_17981();
    event_func_17982();
    event_func_17983();
    event_func_17984();
    event_func_17985();
    event_func_17986();
    event_func_17987();
    event_func_17988();
    event_func_17989();
    event_func_17990();
    event_func_17991();
    event_func_17992();
    event_func_17993();
    event_func_17994();
    event_func_17995();
    event_func_17996();
    event_func_17997();
    event_func_17998();
    event_func_17999();
    event_func_18000();
    event_func_18001();
    event_func_18002();
    event_func_18003();
    event_func_18004();
    event_func_18005();
    event_func_18006();
    event_func_18007();
    event_func_18008();
    event_func_18009();
    group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1) goto group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1_end;
    event_func_18010();
    event_func_18011();
    event_func_18012();
    group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1_end: ;
    event_func_11837();
    event_func_11838();
    event_func_11839();
    if (!group_main_engine_interface_and_post_processing_methods_all_shields_1) goto group_main_engine_interface_and_post_processing_methods_all_shields_1_end;
    event_func_3656();
    event_func_3657();
    event_func_3658();
    event_func_3659();
    event_func_3660();
    event_func_3661();
    event_func_3662();
    event_func_3663();
    event_func_3664();
    group_main_engine_interface_and_post_processing_methods_all_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_6935();
    event_func_18013();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_18014();
    event_func_18015();
    event_func_2644();
    event_func_3252();
    event_func_3253();
    event_func_3975();
    event_func_17719();
    event_func_18016();
    event_func_18017();
    event_func_18018();
    event_func_18019();
    group_pause_1_end: ;
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
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_80_pre_events()
{
}
void Frames::event_func_18020()
{
    // event 23_79
    {
        if (!(group_main_engine_1)) goto event_23_79_end;
        ((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.65);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.65);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(6, -0.25);
        ((SystemBox*)get_instance(levelparallaxcar2_3945_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxcar2_3945_instances))->alterables->values.set(4, 0.75);
        ((SystemBox*)get_instance(levelparallaxcar2_3945_instances))->alterables->values.set(6, -3);
        ((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->alterables->values.set(6, 3);
    }
    event_23_79_end: ;
}
void Frames::event_func_18021()
{
    // event 1503_79
    {
        if (!(group_main_engine_1)) goto event_1503_79_end;
        if (!((global_values->get(4)) <= (0))) goto event_1503_79_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1 = true;
        }
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        playerassistcopilot2_3952_instances.clear_selection();
        spread_value(playerassistcopilot2_3952_instances, 0, 0);
        for (ObjectIterator it(playerassistcopilot2_3952_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0)*2);
            ((Active*)*it)->set_visible(true);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(2-1);
    }
    event_1503_79_end: ;
}
void Frames::event_func_18022()
{
    // event 1578_79
    {
        if (!(group_main_engine_1)) goto event_1578_79_end;
        if (!((global_values->get(4)) == (1))) goto event_1578_79_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1 = true;
        }
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        ((SystemBox*)get_instance(levelparallaxcar2_3945_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxcar3_3946_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
    }
    event_1578_79_end: ;
}
void Frames::event_func_18023()
{
    // event 1731_79
    {
        if (!(group_main_engine_1)) goto event_1731_79_end;
        if (!((global_values->get(4)) == (2))) goto event_1731_79_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1 = true;
        }
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxzaoship2_3944_instances))->set_visible(false);
    }
    event_1731_79_end: ;
}
void Frames::event_func_18024()
{
    // event 1782_79
    {
        if (!(group_main_engine_1)) goto event_1782_79_end;
        if (!((global_values->get(4)) == (3))) goto event_1782_79_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1 = true;
        }
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(2-1);
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1782_79_end: ;
}
void Frames::on_frame_80_start_events()
{
    event_func_17154();
    event_func_4133();
    event_func_3265();
    event_func_4498();
    event_func_17159();
    event_func_17160();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_6939();
    event_func_18020();
    event_func_3269();
    event_func_17167();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_2686();
    event_func_18021();
    event_func_18022();
    event_func_18023();
    event_func_18024();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_4500();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_80_init()
{
    index = 79;
    width = 9600;
    height = 1200;
    virtual_width = 9600;
    virtual_height = 1200;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &shipplatform1_2093_instances, &shipplatform2_2094_instances, &shipplatform3_2095_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &shipplatform1_2093_instances, &shipplatform2_2094_instances, &shipplatform3_2095_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&caravanengine_1395_instances, &minibossufo_1763_instances, &lamppostfront_1778_instances, NULL};
    qualifier_20.set(3, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0a_1612_instances, &levelparallaxboat1_1613_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece2_861_instances, &levelparallaxcar2_3945_instances, &levelparallaxcar3_3946_instances, NULL};
    qualifier_0.set(10, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &bossclawbase_1393_instances, &breakablefloor2_1761_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0a_1612(0, 0), 0);
    add_background_object(create_levelparallaxboat1_1613(0, 120), 0);
    add_background_object(create_levelparallaxzaoship2_3944(6744, 128), 0);
    add_background_object(create_levelparallaxpiece1_1614(0, 96), 0);
    add_background_object(create_levelparallaxpiece3_1615(0, 152), 0);
    add_background_object(create_levelparallaxpiece2_1616(0, 208), 0);
    add_background_object(create_levelparallaxcar2_3945(0, 232), 0);
    add_background_object(create_levelparallaxcar3_3946(0, 264), 0);
    add_background_object(create_levelparallaxpiece4_1617(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_1618(0, 352), 0);
    add_background_object(create_levelparallaxpiece2_1620(0, 664), 0);
    add_object(create_bgstar_4(177, 41), 0);
    add_object(create_bgstar_4(129, 33), 0);
    add_object(create_bgstar_4(201, 17), 0);
    add_object(create_bgstar_4(97, 49), 0);
    add_object(create_bgstar_4(25, 57), 0);
    add_object(create_bgstar_4(281, 41), 0);
    add_object(create_bgstar_4(225, 49), 0);
    add_object(create_bgstar_4(449, 33), 0);
    add_object(create_bgstar_4(433, 65), 0);
    add_object(create_bgstar_4(345, 57), 0);
    add_object(create_bgstar_4(385, 25), 0);
    add_object(create_bgstar_4(417, 49), 0);
    add_object(create_bgstar_4(65, 25), 0);
    add_object(create_bgstar_4(297, 25), 0);
    add_object(create_bgstar_4(161, 49), 0);
    add_object(create_bgstar_4(361, 49), 0);
    add_background_object(create_shipbottomsailshadow_2089(5388, 1312), 1);
    add_background_object(create_caravanplatform8_1273(1416, 160), 1);
    add_background_object(create_caravanplatform8_1273(1704, 160), 1);
    add_background_object(create_caravanplatform8_1273(1512, 160), 1);
    add_background_object(create_caravanplatform8_1273(1608, 160), 1);
    add_background_object(create_caravanplatform8_1273(1912, 144), 1);
    add_background_object(create_caravanplatform12_1319(1888, 88), 1);
    add_background_object(create_caravanplatform12_1319(2080, 160), 1);
    add_background_object(create_caravanplatform3_1320(1424, 208), 1);
    add_background_object(create_caravanplatform3_1320(1680, 208), 1);
    add_background_object(create_caravanplatform3_1320(1616, 208), 1);
    add_background_object(create_caravanplatform3_1320(2016, 208), 1);
    add_background_object(create_caravanplatform9_1327(1744, 208), 1);
    add_background_object(create_caravanplatform_1325(1400, 208), 1);
    add_background_object(create_caravanplatform4_1322(1888, 208), 1);
    add_background_object(create_caravanplatform4_1322(1488, 208), 1);
    add_background_object(create_caravanplatform4_1322(1552, 208), 1);
    add_background_object(create_caravanplatform4_1322(1824, 208), 1);
    add_background_object(create_caravanplatform4_1322(1952, 208), 1);
    add_background_object(create_caravanplatform2_1326(1824, 168), 1);
    add_background_object(create_caravanplatform2_1326(1824, 128), 1);
    add_background_object(create_caravanplatform2_1326(1824, 88), 1);
    add_background_object(create_caravanplatform10_1329(1824, 216), 1);
    add_background_object(create_caravanplatform10_1329(1904, 216), 1);
    add_background_object(create_caravantruck_1330(1904, 88), 1);
    add_background_object(create_caravantruck3_1331(1952, 88), 1);
    add_background_object(create_caravanplatform12_1319(1888, 56), 1);
    add_background_object(create_caravanplatform11_1332(1880, 128), 1);
    add_background_object(create_caravanplatform11_1332(1880, 128), 1);
    add_background_object(create_bossclawbaseback_1333(1760, 144), 1);
    add_background_object(create_caravanplatform13_1357(1840, 128), 1);
    add_background_object(create_caravantruck2_3907(2024, 160), 1);
    add_background_object(create_caravanplatform14_1359(1824, 88), 1);
    add_background_object(create_caravanplatform14_1359(1824, 128), 1);
    add_background_object(create_caravandoor_3908(1920, 160), 1);
    add_background_object(create_pantherheaddeactivated_3948(1560, 144), 1);
    add_background_object(create_backguard_3949(1960, 136), 1);
    add_background_object(create_backguard_3949(1928, 136), 1);
    add_background_object(create_quickbackdrop6_2060(5524, 1096), 1);
    add_background_object(create_sbflagpole_2061(6236, 352), 1);
    add_background_object(create_sbflagpole_2061(6748, 576), 1);
    add_background_object(create_sbflagpole_2061(5116, 480), 1);
    add_background_object(create_shipmast_2062(5636, 768), 1);
    add_background_object(create_shipmast_2062(6212, 832), 1);
    add_background_object(create_shipmast_2062(6212, 448), 1);
    add_background_object(create_shipmast_2062(5092, 576), 1);
    add_background_object(create_shipmast_2062(6724, 800), 1);
    add_background_object(create_shipmast_2062(6724, 672), 1);
    add_background_object(create_shipmast2_2063(5636, 960), 1);
    add_background_object(create_shipmast2_2063(5636, 960), 1);
    add_background_object(create_shipmast2_2063(6212, 960), 1);
    add_background_object(create_shipmast2_2063(5092, 872), 1);
    add_background_object(create_shipmast2_2063(6724, 1040), 1);
    add_background_object(create_ship19_2064(5380, 256), 1);
    add_background_object(create_ship18_2065(6436, 648), 1);
    add_background_object(create_ship17_2066(4916, 608), 1);
    add_background_object(create_blimpcable1_2070(6380, 1088), 1);
    add_background_object(create_blimpcable1_2070(5364, 960), 1);
    add_background_object(create_blimpcable1_2070(5364, 808), 1);
    add_background_object(create_blimpcable1_2070(5348, 872), 1);
    add_background_object(create_blimpcable1_2070(5332, 936), 1);
    add_background_object(create_blimpcable1_2070(5316, 1000), 1);
    add_background_object(create_blimpcable1_2070(6460, 768), 1);
    add_background_object(create_blimpcable1_2070(6444, 832), 1);
    add_background_object(create_blimpcable1_2070(6428, 896), 1);
    add_background_object(create_blimpcable1_2070(6412, 960), 1);
    add_background_object(create_blimpcable1_2070(6396, 1024), 1);
    add_background_object(create_blimpcable1_2070(6428, 1064), 1);
    add_background_object(create_blimpcable1_2070(5868, 264), 1);
    add_background_object(create_blimpcable1_2070(5852, 328), 1);
    add_background_object(create_blimpcable1_2070(5836, 392), 1);
    add_background_object(create_blimpcable1_2070(5820, 456), 1);
    add_background_object(create_blimpcable1_2070(5804, 520), 1);
    add_background_object(create_blimpcable1_2070(5788, 584), 1);
    add_background_object(create_blimpcable1_2070(5772, 648), 1);
    add_background_object(create_blimpcable1_2070(5756, 712), 1);
    add_background_object(create_blimpcable1_2070(5740, 776), 1);
    add_background_object(create_blimpcable1_2070(5724, 840), 1);
    add_background_object(create_blimpcable1_2070(5708, 904), 1);
    add_background_object(create_blimpcable1_2070(5692, 968), 1);
    add_background_object(create_blimpcable1_2070(5676, 1032), 1);
    add_background_object(create_blimpcable1_2070(5668, 1064), 1);
    add_background_object(create_blimpcable1_2070(5572, 424), 1);
    add_background_object(create_blimpcable1_2070(5556, 488), 1);
    add_background_object(create_blimpcable1_2070(5540, 552), 1);
    add_background_object(create_blimpcable1_2070(5524, 616), 1);
    add_background_object(create_blimpcable1_2070(5508, 680), 1);
    add_background_object(create_blimpcable1_2070(5492, 744), 1);
    add_background_object(create_blimpcable1_2070(5476, 808), 1);
    add_background_object(create_blimpcable1_2070(5460, 872), 1);
    add_background_object(create_blimpcable1_2070(5444, 936), 1);
    add_background_object(create_blimpcable1_2070(5428, 1000), 1);
    add_background_object(create_blimpcable1_2070(5412, 1064), 1);
    add_background_object(create_blimpcable1_2070(5428, 616), 1);
    add_background_object(create_blimpcable1_2070(5412, 680), 1);
    add_background_object(create_blimpcable1_2070(5396, 744), 1);
    add_background_object(create_blimpcable1_2070(5380, 808), 1);
    add_background_object(create_blimpcable1_2070(5364, 872), 1);
    add_background_object(create_blimpcable1_2070(5348, 936), 1);
    add_background_object(create_blimpcable1_2070(5332, 1000), 1);
    add_background_object(create_blimpcable1_2070(5316, 1064), 1);
    add_background_object(create_blimpcable1_2070(6588, 648), 1);
    add_background_object(create_blimpcable1_2070(6572, 712), 1);
    add_background_object(create_blimpcable1_2070(6556, 776), 1);
    add_background_object(create_blimpcable1_2070(6540, 840), 1);
    add_background_object(create_blimpcable1_2070(6524, 904), 1);
    add_background_object(create_blimpcable1_2070(6508, 968), 1);
    add_background_object(create_blimpcable1_2070(6492, 1032), 1);
    add_background_object(create_blimpcable1_2070(6484, 1064), 1);
    add_background_object(create_ship24_2071(5380, 1016), 1);
    add_background_object(create_ship24_2071(5444, 1032), 1);
    add_background_object(create_ship24_2071(5124, 952), 1);
    add_background_object(create_ship24_2071(5188, 968), 1);
    add_background_object(create_ship24_2071(5252, 984), 1);
    add_background_object(create_ship24_2071(5316, 1000), 1);
    add_background_object(create_ship30_2072(5380, 1056), 1);
    add_background_object(create_ship30_2072(5380, 1072), 1);
    add_background_object(create_ship30_2072(5444, 1072), 1);
    add_background_object(create_ship30_2072(5252, 1104), 1);
    add_background_object(create_ship30_2072(5316, 1104), 1);
    add_background_object(create_ship30_2072(5256, 1040), 1);
    add_background_object(create_ship30_2072(5316, 1040), 1);
    add_background_object(create_ship31_2073(5204, 1096), 1);
    add_background_object(create_ship31_2073(5204, 1032), 1);
    add_background_object(create_shipbottomsail_2074(5380, 1416), 1);
    add_background_object(create_shipbottomsail_2074(5676, 1376), 1);
    add_background_object(create_shipbottomsail_2074(5756, 1352), 1);
    add_background_object(create_shipbottomsail_2074(5444, 1392), 1);
    add_background_object(create_shipbottomsail_2074(5188, 1392), 1);
    add_background_object(create_shipbottomsail_2074(5500, 1352), 1);
    add_background_object(create_ship28_2075(6132, 1296), 1);
    add_background_object(create_ship28_2075(5932, 1376), 1);
    add_background_object(create_ship28_2075(5972, 1360), 1);
    add_background_object(create_ship28_2075(6012, 1344), 1);
    add_background_object(create_ship28_2075(6052, 1328), 1);
    add_background_object(create_ship28_2075(6092, 1312), 1);
    add_background_object(create_ship13_2076(6356, 1096), 1);
    add_background_object(create_ship21_2077(6612, 1088), 1);
    add_background_object(create_ship20_2078(5028, 928), 1);
    add_background_object(create_ship20_2078(5060, 936), 1);
    add_background_object(create_ship23_2079(5108, 1016), 1);
    add_background_object(create_shipplatformlong_2080(5204, 1128), 1);
    add_background_object(create_ship16_2081(5668, 1200), 1);
    add_background_object(create_ship16_2081(5796, 1200), 1);
    add_background_object(create_ship16_2081(5924, 1200), 1);
    add_background_object(create_ship16_2081(6052, 1200), 1);
    add_background_object(create_ship16_2081(6180, 1200), 1);
    add_background_object(create_ship16_2081(6308, 1200), 1);
    add_background_object(create_ship16_2081(6436, 1200), 1);
    add_background_object(create_ship16_2081(6564, 1200), 1);
    add_background_object(create_ship16_2081(5540, 1200), 1);
    add_background_object(create_ship26_2082(5252, 1480), 1);
    add_background_object(create_ship26_2082(5316, 1472), 1);
    add_background_object(create_ship26_2082(5380, 1464), 1);
    add_background_object(create_ship26_2082(5444, 1456), 1);
    add_background_object(create_ship26_2082(5508, 1448), 1);
    add_background_object(create_ship26_2082(5572, 1440), 1);
    add_background_object(create_ship26_2082(5636, 1432), 1);
    add_background_object(create_ship26_2082(5188, 1488), 1);
    add_background_object(create_ship27_2083(5700, 1416), 1);
    add_background_object(create_ship29_2084(6156, 1312), 1);
    add_background_object(create_shipthrusterfront_2085(5460, 1424), 1);
    add_background_object(create_shipthrusterfront_2085(5460, 1312), 1);
    add_background_object(create_shipthrusterend_2086(5076, 1424), 1);
    add_background_object(create_shipthrusterend_2086(5076, 1312), 1);
    add_background_object(create_ship22_2087(5196, 1128), 1);
    add_background_object(create_shipthrustermid_2088(5172, 1424), 1);
    add_background_object(create_shipthrustermid_2088(5172, 1312), 1);
    add_background_object(create_ship25_2090(5508, 1048), 1);
    add_background_object(create_sbflagpole_2061(5252, 1032), 1);
    add_object(create_npcmerc_1283(1688, 191), 1);
    add_object(create_npcmerc_1283(1536, 191), 1);
    add_object(create_yellowspringup_434(1792, 160), 1);
    add_object(create_caravanwheel_1386(1456, 256), 1);
    add_object(create_caravanwheel_1386(1712, 256), 1);
    add_object(create_caravanwheel_1386(1648, 256), 1);
    add_object(create_caravanwheel_1386(2048, 256), 1);
    add_object(create_bossclawbase_1393(1784, 168), 1);
    add_object(create_caravanengine_1395(2044, 156), 1);
    add_object(create_active_3911(2074, 280), 1);
    add_object(create_npcmayor_3950(1736, 192), 1);
    add_object(create_levelzaoflag_2068(5115, 494), 1);
    add_object(create_levelzaoflag_2068(6235, 366), 1);
    add_object(create_levelzaoflag_2068(6747, 590), 1);
    add_object(create_levelzaoflag_2068(5251, 1046), 1);
    add_object(create_shipplatform1_2093(5028, 928), 1);
    add_object(create_shipplatform1_2093(5092, 944), 1);
    add_object(create_shipplatform1_2093(5156, 960), 1);
    add_object(create_shipplatform1_2093(5220, 976), 1);
    add_object(create_shipplatform1_2093(5284, 992), 1);
    add_object(create_shipplatform1_2093(5348, 1008), 1);
    add_object(create_shipplatform1_2093(5412, 1024), 1);
    add_object(create_shipplatform1_2093(5468, 1038), 1);
    add_object(create_shipplatform2_2094(5204, 1128), 1);
    add_object(create_shipplatform2_2094(5332, 1128), 1);
    add_object(create_shipplatform2_2094(5460, 1128), 1);
    add_object(create_shipplatform2_2094(5588, 1128), 1);
    add_object(create_shipplatform2_2094(5716, 1128), 1);
    add_object(create_shipplatform2_2094(5844, 1128), 1);
    add_object(create_shipplatform2_2094(5972, 1128), 1);
    add_object(create_shipplatform2_2094(6100, 1128), 1);
    add_object(create_shipplatform2_2094(6228, 1128), 1);
    add_object(create_shipplatform2_2094(6356, 1128), 1);
    add_object(create_shipplatform2_2094(6484, 1128), 1);
    add_object(create_shipplatform3_2095(6612, 1088), 1);
    add_background_object(create_fnredcolumnback_1646(8, 560), 2);
    add_background_object(create_fnredcolumnback_1646(136, 560), 2);
    add_background_object(create_fnredcolumnback_1646(264, 560), 2);
    add_background_object(create_fnbackhedge_1666(-32, 656), 2);
    add_background_object(create_fnbackhedge_1666(96, 656), 2);
    add_background_object(create_fnbackhedge_1666(224, 656), 2);
    add_background_object(create_fnfloor6_1650(1304, 696), 2);
    add_background_object(create_fnfloor6_1650(1176, 696), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9752, 109), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_npcplane_3951(1431, 360), 2);
    add_object(create_playerassistcopilot2_3952(1450, 360), 2);
    add_object(create_playerassistcopilot2_3952(1426, 360), 2);
    add_object(create_playerassistcopilot2_3952(1450, 360), 2);
    add_object(create_ship1_1982(2197, 124), 2);
    add_object(create_ship2_1985(2147, 104), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_fnfloor20_1667(4608, 720), 3);
    add_background_object(create_fnredcolumnback_1646(1128, 280), 3);
    add_background_object(create_fnredcolumnback_1646(1304, 280), 3);
    add_background_object(create_backwall2_1642(984, 400), 3);
    add_background_object(create_fnbackwall6_1648(1240, 400), 3);
    add_background_object(create_fnbackwall4_1647(1368, 400), 3);
    add_background_object(create_fnbackwall6_1648(1112, 400), 3);
    add_background_object(create_fnredcolumnback_1646(1128, 568), 3);
    add_background_object(create_fnredcolumnback_1646(1304, 568), 3);
    add_background_object(create_fnredcolumnback_1646(952, 568), 3);
    add_background_object(create_fnredcolumnback_1646(1480, 568), 3);
    add_background_object(create_floor5_1679(888, 696), 3);
    add_background_object(create_floor7_1680(1560, 696), 3);
    add_background_object(create_fnfloor6_1650(1048, 696), 3);
    add_background_object(create_fnfloor6_1650(920, 696), 3);
    add_background_object(create_fnfloor6_1650(1432, 696), 3);
    add_background_object(create_fnfloor8_1649(0, 720), 3);
    add_background_object(create_fnfloor12_1659(0, 720), 3);
    add_background_object(create_fnfloor8_1649(384, 768), 3);
    add_background_object(create_fnfloor20_1667(128, 720), 3);
    add_background_object(create_fnfloor20_1667(256, 720), 3);
    add_background_object(create_fnfloor27_1684(128, 768), 3);
    add_background_object(create_fnfloor28_1685(304, 768), 3);
    add_background_object(create_fnfloor12_1659(256, 720), 3);
    add_background_object(create_fnfloor12_1659(128, 720), 3);
    add_background_object(create_fnfloor8_1649(0, 816), 3);
    add_background_object(create_fnfloor8_1649(384, 864), 3);
    add_background_object(create_fnfloor8_1649(0, 912), 3);
    add_background_object(create_fnfloor8_1649(384, 960), 3);
    add_background_object(create_fnfloor8_1649(0, 1008), 3);
    add_background_object(create_fnfloor8_1649(384, 1056), 3);
    add_background_object(create_fnfloor8_1649(0, 1104), 3);
    add_background_object(create_fnfloor8_1649(384, 1152), 3);
    add_background_object(create_fnfloor8_1649(768, 768), 3);
    add_background_object(create_fnfloor20_1667(512, 720), 3);
    add_background_object(create_fnfloor20_1667(640, 720), 3);
    add_background_object(create_fnfloor27_1684(512, 768), 3);
    add_background_object(create_fnfloor28_1685(688, 768), 3);
    add_background_object(create_fnfloor12_1659(640, 720), 3);
    add_background_object(create_fnfloor12_1659(512, 720), 3);
    add_background_object(create_fnfloor8_1649(768, 864), 3);
    add_background_object(create_fnfloor8_1649(768, 960), 3);
    add_background_object(create_fnfloor8_1649(768, 1056), 3);
    add_background_object(create_fnfloor8_1649(768, 1152), 3);
    add_background_object(create_fnrooftop2_1687(128, 432), 3);
    add_background_object(create_fnrooftop1_1686(0, 432), 3);
    add_background_object(create_fnrooftop1_1686(64, 432), 3);
    add_background_object(create_lamppostback_1709(528, 640), 3);
    add_background_object(create_lamppostback_1709(720, 640), 3);
    add_background_object(create_lamppostback_1709(912, 640), 3);
    add_background_object(create_fnfloor8_1649(1152, 720), 3);
    add_background_object(create_fnfloor12_1659(1152, 720), 3);
    add_background_object(create_fnfloor20_1667(896, 720), 3);
    add_background_object(create_fnfloor20_1667(1024, 720), 3);
    add_background_object(create_fnfloor27_1684(896, 768), 3);
    add_background_object(create_fnfloor28_1685(1072, 768), 3);
    add_background_object(create_fnfloor12_1659(1024, 720), 3);
    add_background_object(create_fnfloor12_1659(896, 720), 3);
    add_background_object(create_fnfloor8_1649(1152, 816), 3);
    add_background_object(create_fnfloor8_1649(1152, 912), 3);
    add_background_object(create_fnfloor8_1649(1152, 1008), 3);
    add_background_object(create_fnfloor8_1649(1152, 1104), 3);
    add_background_object(create_fnrooftop2_1687(1336, 440), 3);
    add_background_object(create_fnrooftop3_1658(864, 440), 3);
    add_background_object(create_fnfloor8_1649(1536, 720), 3);
    add_background_object(create_fnfloor12_1659(1536, 720), 3);
    add_background_object(create_fnfloor20_1667(1280, 720), 3);
    add_background_object(create_fnfloor20_1667(1408, 720), 3);
    add_background_object(create_fnfloor27_1684(1280, 768), 3);
    add_background_object(create_fnfloor28_1685(1456, 768), 3);
    add_background_object(create_fnfloor12_1659(1408, 720), 3);
    add_background_object(create_fnfloor12_1659(1280, 720), 3);
    add_background_object(create_fnfloor8_1649(1536, 816), 3);
    add_background_object(create_fnfloor8_1649(1536, 912), 3);
    add_background_object(create_fnfloor8_1649(1536, 1008), 3);
    add_background_object(create_fnfloor8_1649(1536, 1104), 3);
    add_background_object(create_fnfloor8_1649(1920, 720), 3);
    add_background_object(create_fnfloor12_1659(1920, 720), 3);
    add_background_object(create_fnfloor20_1667(1664, 720), 3);
    add_background_object(create_fnfloor20_1667(1792, 720), 3);
    add_background_object(create_fnfloor27_1684(1664, 768), 3);
    add_background_object(create_fnfloor28_1685(1840, 768), 3);
    add_background_object(create_fnfloor12_1659(1792, 720), 3);
    add_background_object(create_fnfloor12_1659(1664, 720), 3);
    add_background_object(create_fnfloor8_1649(1920, 816), 3);
    add_background_object(create_fnfloor8_1649(1920, 912), 3);
    add_background_object(create_fnfloor8_1649(1920, 1008), 3);
    add_background_object(create_fnfloor8_1649(1920, 1104), 3);
    add_background_object(create_fnbustedwall_1705(768, 720), 3);
    add_background_object(create_fnbustedwall_1705(832, 720), 3);
    add_background_object(create_fnbustedwall_1705(384, 720), 3);
    add_background_object(create_fnbustedwall_1705(448, 720), 3);
    add_background_object(create_fnrooftop2_1687(1240, 152), 3);
    add_background_object(create_fnrooftop3_1658(960, 152), 3);
    add_background_object(create_fnrooftop1_1686(1144, 440), 3);
    add_background_object(create_fnrooftop1_1686(1272, 440), 3);
    add_background_object(create_fnrooftop1_1686(1208, 440), 3);
    add_background_object(create_lamppostback_1709(336, 640), 3);
    add_background_object(create_fnfloor8_1649(2304, 720), 3);
    add_background_object(create_fnfloor12_1659(2304, 720), 3);
    add_background_object(create_fnfloor20_1667(2048, 720), 3);
    add_background_object(create_fnfloor20_1667(2176, 720), 3);
    add_background_object(create_fnfloor27_1684(2048, 768), 3);
    add_background_object(create_fnfloor28_1685(2224, 768), 3);
    add_background_object(create_fnfloor12_1659(2176, 720), 3);
    add_background_object(create_fnfloor12_1659(2048, 720), 3);
    add_background_object(create_fnfloor8_1649(2304, 816), 3);
    add_background_object(create_fnfloor8_1649(2304, 912), 3);
    add_background_object(create_fnfloor8_1649(2304, 1008), 3);
    add_background_object(create_fnfloor8_1649(2304, 1104), 3);
    add_background_object(create_fnfloor8_1649(2688, 720), 3);
    add_background_object(create_fnfloor12_1659(2688, 720), 3);
    add_background_object(create_fnfloor20_1667(2432, 720), 3);
    add_background_object(create_fnfloor20_1667(2560, 720), 3);
    add_background_object(create_fnfloor27_1684(2432, 768), 3);
    add_background_object(create_fnfloor28_1685(2608, 768), 3);
    add_background_object(create_fnfloor12_1659(2560, 720), 3);
    add_background_object(create_fnfloor12_1659(2432, 720), 3);
    add_background_object(create_fnfloor8_1649(2688, 816), 3);
    add_background_object(create_fnfloor8_1649(2688, 912), 3);
    add_background_object(create_fnfloor8_1649(2688, 1008), 3);
    add_background_object(create_fnfloor8_1649(2688, 1104), 3);
    add_background_object(create_lamppostback_1709(1104, 640), 3);
    add_background_object(create_lamppostback_1709(1296, 640), 3);
    add_background_object(create_lamppostback_1709(1488, 640), 3);
    add_background_object(create_lamppostback_1709(1680, 640), 3);
    add_background_object(create_lamppostback_1709(1872, 640), 3);
    add_background_object(create_lamppostback_1709(2064, 640), 3);
    add_background_object(create_lamppostback_1709(2256, 640), 3);
    add_background_object(create_lamppostback_1709(2448, 640), 3);
    add_background_object(create_lamppostback_1709(2640, 640), 3);
    add_background_object(create_fnfloor8_1649(3072, 720), 3);
    add_background_object(create_fnfloor12_1659(3072, 720), 3);
    add_background_object(create_fnfloor20_1667(2816, 720), 3);
    add_background_object(create_fnfloor20_1667(2944, 720), 3);
    add_background_object(create_fnfloor27_1684(2816, 768), 3);
    add_background_object(create_fnfloor28_1685(2992, 768), 3);
    add_background_object(create_fnfloor12_1659(2944, 720), 3);
    add_background_object(create_fnfloor12_1659(2816, 720), 3);
    add_background_object(create_fnfloor8_1649(3072, 816), 3);
    add_background_object(create_fnfloor8_1649(3072, 912), 3);
    add_background_object(create_fnfloor8_1649(3072, 1008), 3);
    add_background_object(create_fnfloor8_1649(3072, 1104), 3);
    add_background_object(create_lamppostback_1709(2832, 640), 3);
    add_background_object(create_lamppostback_1709(3024, 640), 3);
    add_background_object(create_fnfloor8_1649(3456, 720), 3);
    add_background_object(create_fnfloor12_1659(3456, 720), 3);
    add_background_object(create_fnfloor20_1667(3200, 720), 3);
    add_background_object(create_fnfloor20_1667(3328, 720), 3);
    add_background_object(create_fnfloor27_1684(3200, 768), 3);
    add_background_object(create_fnfloor28_1685(3376, 768), 3);
    add_background_object(create_fnfloor12_1659(3328, 720), 3);
    add_background_object(create_fnfloor12_1659(3200, 720), 3);
    add_background_object(create_fnfloor8_1649(3456, 816), 3);
    add_background_object(create_fnfloor8_1649(3456, 912), 3);
    add_background_object(create_fnfloor8_1649(3456, 1008), 3);
    add_background_object(create_fnfloor8_1649(3456, 1104), 3);
    add_background_object(create_lamppostback_1709(3216, 640), 3);
    add_background_object(create_lamppostback_1709(3408, 640), 3);
    add_background_object(create_fnfloor8_1649(3840, 720), 3);
    add_background_object(create_fnfloor12_1659(3840, 720), 3);
    add_background_object(create_fnfloor20_1667(3584, 720), 3);
    add_background_object(create_fnfloor20_1667(3712, 720), 3);
    add_background_object(create_fnfloor27_1684(3584, 768), 3);
    add_background_object(create_fnfloor28_1685(3760, 768), 3);
    add_background_object(create_fnfloor12_1659(3712, 720), 3);
    add_background_object(create_fnfloor12_1659(3584, 720), 3);
    add_background_object(create_fnfloor8_1649(3840, 816), 3);
    add_background_object(create_fnfloor8_1649(3840, 912), 3);
    add_background_object(create_fnfloor8_1649(3840, 1008), 3);
    add_background_object(create_fnfloor8_1649(3840, 1104), 3);
    add_background_object(create_lamppostback_1709(3600, 640), 3);
    add_background_object(create_lamppostback_1709(3792, 640), 3);
    add_background_object(create_fnfloor8_1649(4608, 280), 3);
    add_background_object(create_fnfloor12_1659(4608, 280), 3);
    add_background_object(create_fnfloor8_1649(4480, 280), 3);
    add_background_object(create_fnfloor12_1659(4480, 280), 3);
    add_background_object(create_fnfloor8_1649(4096, 280), 3);
    add_background_object(create_fnfloor12_1659(4096, 280), 3);
    add_background_object(create_fnfloor8_1649(3968, 280), 3);
    add_background_object(create_fnfloor12_1659(3968, 280), 3);
    add_background_object(create_fnfloor8_1649(3328, 280), 3);
    add_background_object(create_fnfloor12_1659(3328, 280), 3);
    add_background_object(create_fnfloor8_1649(3200, 280), 3);
    add_background_object(create_fnfloor12_1659(3200, 280), 3);
    add_background_object(create_fnfloor8_1649(3072, 280), 3);
    add_background_object(create_fnfloor12_1659(3072, 280), 3);
    add_background_object(create_fnfloor8_1649(2944, 280), 3);
    add_background_object(create_fnfloor12_1659(2944, 280), 3);
    add_background_object(create_fnfloor8_1649(2816, 280), 3);
    add_background_object(create_fnfloor12_1659(2816, 280), 3);
    add_background_object(create_fnfloor8_1649(2688, 280), 3);
    add_background_object(create_fnfloor12_1659(2688, 280), 3);
    add_background_object(create_fnfloor8_1649(2560, 280), 3);
    add_background_object(create_fnfloor12_1659(2560, 280), 3);
    add_background_object(create_fnfloor8_1649(2432, 280), 3);
    add_background_object(create_fnfloor12_1659(2432, 280), 3);
    add_background_object(create_fnfloor8_1649(2304, 280), 3);
    add_background_object(create_fnfloor12_1659(2304, 280), 3);
    add_background_object(create_fnfloor8_1649(2176, 280), 3);
    add_background_object(create_fnfloor12_1659(2176, 280), 3);
    add_background_object(create_fnfloor8_1649(2048, 280), 3);
    add_background_object(create_fnfloor12_1659(2048, 280), 3);
    add_background_object(create_fnfloor8_1649(3584, 280), 3);
    add_background_object(create_fnfloor12_1659(3584, 280), 3);
    add_background_object(create_fnfloor8_1649(3456, 280), 3);
    add_background_object(create_fnfloor12_1659(3456, 280), 3);
    add_background_object(create_fnfloor8_1649(3840, 280), 3);
    add_background_object(create_fnfloor12_1659(3840, 280), 3);
    add_background_object(create_fnfloor8_1649(3712, 280), 3);
    add_background_object(create_fnfloor12_1659(3712, 280), 3);
    add_background_object(create_fnfloor8_1649(4224, 720), 3);
    add_background_object(create_fnfloor12_1659(4224, 720), 3);
    add_background_object(create_fnfloor20_1667(3968, 720), 3);
    add_background_object(create_fnfloor20_1667(4096, 720), 3);
    add_background_object(create_fnfloor12_1659(4096, 720), 3);
    add_background_object(create_fnfloor12_1659(3968, 720), 3);
    add_background_object(create_fnfloor8_1649(4224, 816), 3);
    add_background_object(create_fnfloor8_1649(4224, 912), 3);
    add_background_object(create_fnfloor8_1649(4224, 1008), 3);
    add_background_object(create_fnfloor8_1649(4224, 1104), 3);
    add_background_object(create_lamppostback_1709(3984, 640), 3);
    add_background_object(create_lamppostback_1709(4176, 640), 3);
    add_background_object(create_fnfloor12_1659(4608, 720), 3);
    add_background_object(create_fnfloor20_1667(4352, 720), 3);
    add_background_object(create_fnfloor20_1667(4480, 720), 3);
    add_background_object(create_fnfloor12_1659(4480, 720), 3);
    add_background_object(create_fnfloor12_1659(4352, 720), 3);
    add_background_object(create_lamppostback_1709(4368, 640), 3);
    add_background_object(create_lamppostback_1709(4560, 640), 3);
    add_background_object(create_fnfloor8_1649(4736, 280), 3);
    add_background_object(create_fnfloor12_1659(4736, 280), 3);
    add_background_object(create_fnfloor8_1649(4352, 280), 3);
    add_background_object(create_fnfloor12_1659(4352, 280), 3);
    add_background_object(create_fnfloor8_1649(4224, 280), 3);
    add_background_object(create_fnfloor12_1659(4224, 280), 3);
    add_background_object(create_fnfloor8_1649(4480, 768), 3);
    add_background_object(create_fnfloor8_1649(4480, 864), 3);
    add_background_object(create_fnfloor8_1649(4480, 960), 3);
    add_background_object(create_fnfloor8_1649(4480, 1056), 3);
    add_background_object(create_fnfloor8_1649(4480, 1152), 3);
    add_background_object(create_fnfloor8_1649(4352, 768), 3);
    add_background_object(create_fnfloor8_1649(4352, 864), 3);
    add_background_object(create_fnfloor8_1649(4352, 960), 3);
    add_background_object(create_fnfloor8_1649(4352, 1056), 3);
    add_background_object(create_fnfloor8_1649(4352, 1152), 3);
    add_background_object(create_fnfloor8_1649(4096, 768), 3);
    add_background_object(create_fnfloor8_1649(4096, 864), 3);
    add_background_object(create_fnfloor8_1649(4096, 960), 3);
    add_background_object(create_fnfloor8_1649(4096, 1056), 3);
    add_background_object(create_fnfloor8_1649(4096, 1152), 3);
    add_background_object(create_fnfloor8_1649(3968, 768), 3);
    add_background_object(create_fnfloor8_1649(3968, 864), 3);
    add_background_object(create_fnfloor8_1649(3968, 960), 3);
    add_background_object(create_fnfloor8_1649(3968, 1056), 3);
    add_background_object(create_fnfloor8_1649(3968, 1152), 3);
    add_background_object(create_fnfloor8_1649(4608, 768), 3);
    add_background_object(create_fnfloor8_1649(4608, 864), 3);
    add_background_object(create_fnfloor8_1649(4608, 960), 3);
    add_background_object(create_fnfloor8_1649(4608, 1056), 3);
    add_background_object(create_fnfloor8_1649(4608, 1152), 3);
    add_background_object(create_fnfloor20_1667(4864, 720), 3);
    add_background_object(create_fnfloor12_1659(4864, 720), 3);
    add_background_object(create_fnfloor20_1667(4736, 720), 3);
    add_background_object(create_fnfloor12_1659(4736, 720), 3);
    add_background_object(create_lamppostback_1709(4752, 640), 3);
    add_background_object(create_fnfloor8_1649(4736, 768), 3);
    add_background_object(create_fnfloor8_1649(4736, 864), 3);
    add_background_object(create_fnfloor8_1649(4736, 960), 3);
    add_background_object(create_fnfloor8_1649(4736, 1056), 3);
    add_background_object(create_fnfloor8_1649(4736, 1152), 3);
    add_background_object(create_fnfloor8_1649(4864, 768), 3);
    add_background_object(create_fnfloor8_1649(4864, 864), 3);
    add_background_object(create_fnfloor8_1649(4864, 960), 3);
    add_background_object(create_fnfloor8_1649(4864, 1056), 3);
    add_background_object(create_fnfloor8_1649(4864, 1152), 3);
    add_background_object(create_lamppostback_1709(4944, 640), 3);
    add_background_object(create_fnfloor20_1667(5120, 720), 3);
    add_background_object(create_fnfloor12_1659(5120, 720), 3);
    add_background_object(create_fnfloor20_1667(4992, 720), 3);
    add_background_object(create_fnfloor12_1659(4992, 720), 3);
    add_background_object(create_lamppostback_1709(5136, 640), 3);
    add_background_object(create_fnfloor8_1649(4992, 768), 3);
    add_background_object(create_fnfloor8_1649(4992, 864), 3);
    add_background_object(create_fnfloor8_1649(4992, 960), 3);
    add_background_object(create_fnfloor8_1649(4992, 1056), 3);
    add_background_object(create_fnfloor8_1649(4992, 1152), 3);
    add_background_object(create_fnfloor8_1649(5120, 768), 3);
    add_background_object(create_fnfloor8_1649(5120, 864), 3);
    add_background_object(create_fnfloor8_1649(5120, 960), 3);
    add_background_object(create_fnfloor8_1649(5120, 1056), 3);
    add_background_object(create_fnfloor8_1649(5120, 1152), 3);
    add_background_object(create_fnfloor20_1667(5376, 720), 3);
    add_background_object(create_fnfloor12_1659(5376, 720), 3);
    add_background_object(create_fnfloor20_1667(5248, 720), 3);
    add_background_object(create_fnfloor12_1659(5248, 720), 3);
    add_background_object(create_lamppostback_1709(5328, 640), 3);
    add_background_object(create_fnfloor8_1649(5248, 768), 3);
    add_background_object(create_fnfloor8_1649(5248, 864), 3);
    add_background_object(create_fnfloor8_1649(5248, 960), 3);
    add_background_object(create_fnfloor8_1649(5248, 1056), 3);
    add_background_object(create_fnfloor8_1649(5248, 1152), 3);
    add_background_object(create_fnfloor8_1649(5376, 768), 3);
    add_background_object(create_fnfloor8_1649(5376, 864), 3);
    add_background_object(create_fnfloor8_1649(5376, 960), 3);
    add_background_object(create_fnfloor8_1649(5376, 1056), 3);
    add_background_object(create_fnfloor8_1649(5376, 1152), 3);
    add_background_object(create_fnfloor20_1667(5632, 720), 3);
    add_background_object(create_fnfloor12_1659(5632, 720), 3);
    add_background_object(create_fnfloor20_1667(5504, 720), 3);
    add_background_object(create_fnfloor12_1659(5504, 720), 3);
    add_background_object(create_lamppostback_1709(5520, 640), 3);
    add_background_object(create_fnfloor8_1649(5504, 768), 3);
    add_background_object(create_fnfloor8_1649(5504, 864), 3);
    add_background_object(create_fnfloor8_1649(5504, 960), 3);
    add_background_object(create_fnfloor8_1649(5504, 1056), 3);
    add_background_object(create_fnfloor8_1649(5504, 1152), 3);
    add_background_object(create_fnfloor8_1649(5632, 768), 3);
    add_background_object(create_fnfloor8_1649(5632, 864), 3);
    add_background_object(create_fnfloor8_1649(5632, 960), 3);
    add_background_object(create_fnfloor8_1649(5632, 1056), 3);
    add_background_object(create_fnfloor8_1649(5632, 1152), 3);
    add_background_object(create_lamppostback_1709(5712, 640), 3);
    add_background_object(create_fnfloor20_1667(5888, 720), 3);
    add_background_object(create_fnfloor12_1659(5888, 720), 3);
    add_background_object(create_fnfloor20_1667(5760, 720), 3);
    add_background_object(create_fnfloor12_1659(5760, 720), 3);
    add_background_object(create_lamppostback_1709(5904, 640), 3);
    add_background_object(create_fnfloor8_1649(5760, 768), 3);
    add_background_object(create_fnfloor8_1649(5760, 864), 3);
    add_background_object(create_fnfloor8_1649(5760, 960), 3);
    add_background_object(create_fnfloor8_1649(5760, 1056), 3);
    add_background_object(create_fnfloor8_1649(5760, 1152), 3);
    add_background_object(create_fnfloor8_1649(5888, 768), 3);
    add_background_object(create_fnfloor8_1649(5888, 864), 3);
    add_background_object(create_fnfloor8_1649(5888, 960), 3);
    add_background_object(create_fnfloor8_1649(5888, 1056), 3);
    add_background_object(create_fnfloor8_1649(5888, 1152), 3);
    add_background_object(create_fnfloor20_1667(6144, 720), 3);
    add_background_object(create_fnfloor12_1659(6144, 720), 3);
    add_background_object(create_fnfloor20_1667(6016, 720), 3);
    add_background_object(create_fnfloor12_1659(6016, 720), 3);
    add_background_object(create_lamppostback_1709(6096, 640), 3);
    add_background_object(create_fnfloor8_1649(6016, 768), 3);
    add_background_object(create_fnfloor8_1649(6016, 864), 3);
    add_background_object(create_fnfloor8_1649(6016, 960), 3);
    add_background_object(create_fnfloor8_1649(6016, 1056), 3);
    add_background_object(create_fnfloor8_1649(6016, 1152), 3);
    add_background_object(create_fnfloor8_1649(6144, 768), 3);
    add_background_object(create_fnfloor8_1649(6144, 864), 3);
    add_background_object(create_fnfloor8_1649(6144, 960), 3);
    add_background_object(create_fnfloor8_1649(6144, 1056), 3);
    add_background_object(create_fnfloor8_1649(6144, 1152), 3);
    add_background_object(create_fnfloor20_1667(6400, 720), 3);
    add_background_object(create_fnfloor12_1659(6400, 720), 3);
    add_background_object(create_fnfloor20_1667(6272, 720), 3);
    add_background_object(create_fnfloor12_1659(6272, 720), 3);
    add_background_object(create_lamppostback_1709(6288, 640), 3);
    add_background_object(create_fnfloor8_1649(6272, 768), 3);
    add_background_object(create_fnfloor8_1649(6272, 864), 3);
    add_background_object(create_fnfloor8_1649(6272, 960), 3);
    add_background_object(create_fnfloor8_1649(6272, 1056), 3);
    add_background_object(create_fnfloor8_1649(6272, 1152), 3);
    add_background_object(create_fnfloor8_1649(6400, 768), 3);
    add_background_object(create_fnfloor8_1649(6400, 864), 3);
    add_background_object(create_fnfloor8_1649(6400, 960), 3);
    add_background_object(create_fnfloor8_1649(6400, 1056), 3);
    add_background_object(create_fnfloor8_1649(6400, 1152), 3);
    add_background_object(create_lamppostback_1709(6480, 640), 3);
    add_background_object(create_fnfloor20_1667(6656, 720), 3);
    add_background_object(create_fnfloor12_1659(6656, 720), 3);
    add_background_object(create_fnfloor20_1667(6528, 720), 3);
    add_background_object(create_fnfloor12_1659(6528, 720), 3);
    add_background_object(create_lamppostback_1709(6672, 640), 3);
    add_background_object(create_fnfloor8_1649(6528, 768), 3);
    add_background_object(create_fnfloor8_1649(6528, 864), 3);
    add_background_object(create_fnfloor8_1649(6528, 960), 3);
    add_background_object(create_fnfloor8_1649(6528, 1056), 3);
    add_background_object(create_fnfloor8_1649(6528, 1152), 3);
    add_background_object(create_fnfloor8_1649(6656, 768), 3);
    add_background_object(create_fnfloor8_1649(6656, 864), 3);
    add_background_object(create_fnfloor8_1649(6656, 960), 3);
    add_background_object(create_fnfloor8_1649(6656, 1056), 3);
    add_background_object(create_fnfloor8_1649(6656, 1152), 3);
    add_background_object(create_fnfloor20_1667(6912, 720), 3);
    add_background_object(create_fnfloor12_1659(6912, 720), 3);
    add_background_object(create_fnfloor20_1667(6784, 720), 3);
    add_background_object(create_fnfloor12_1659(6784, 720), 3);
    add_background_object(create_lamppostback_1709(6864, 640), 3);
    add_background_object(create_fnfloor8_1649(6784, 768), 3);
    add_background_object(create_fnfloor8_1649(6784, 864), 3);
    add_background_object(create_fnfloor8_1649(6784, 960), 3);
    add_background_object(create_fnfloor8_1649(6784, 1056), 3);
    add_background_object(create_fnfloor8_1649(6784, 1152), 3);
    add_background_object(create_fnfloor8_1649(6912, 768), 3);
    add_background_object(create_fnfloor8_1649(6912, 864), 3);
    add_background_object(create_fnfloor8_1649(6912, 960), 3);
    add_background_object(create_fnfloor8_1649(6912, 1056), 3);
    add_background_object(create_fnfloor8_1649(6912, 1152), 3);
    add_background_object(create_backguard_3949(5552, 664), 3);
    add_background_object(create_backguard_3949(4840, 664), 3);
    add_background_object(create_backguard_3949(4808, 664), 3);
    add_background_object(create_backguard_3949(4776, 664), 3);
    add_background_object(create_backguard_3949(5744, 664), 3);
    add_background_object(create_backguard_3949(5856, 664), 3);
    add_background_object(create_backguard_3949(6336, 664), 3);
    add_background_object(create_backguard_3949(6424, 664), 3);
    add_object(create_placeholdercharactertail_3953(2640, -23), 3);
    add_object(create_placeholdercharactertail_3953(2688, -23), 3);
    add_object(create_lamppostfront_1778(544, 658), 3);
    add_object(create_lamppostfront_1778(736, 658), 3);
    add_object(create_lamppostfront_1778(928, 658), 3);
    add_object(create_lamppostfront_1778(352, 658), 3);
    add_object(create_playerstartingpoint_358(85, 701), 3);
    add_object(create_npcshellduck_533(-36, 705), 3);
    add_object(create_pigeon_1724(396, 448), 3);
    add_object(create_pigeon_1724(340, 480), 3);
    add_object(create_minibossufobeam_1721(832, -56), 3);
    add_object(create_minibossufohatch1_1722(833, -96), 3);
    add_object(create_minibossufohatch2_1723(832, -96), 3);
    add_object(create_minibossufo_1763(832, -96), 3);
    add_object(create_minibossufo2_1764(940, -96), 3);
    add_object(create_minibossufo2_1764(964, -96), 3);
    add_object(create_minibossufo2_1764(988, -96), 3);
    add_object(create_minibossufo2_1764(1012, -96), 3);
    add_object(create_breakablefloor2_1761(768, 720), 3);
    add_object(create_breakablefloor2_1761(832, 720), 3);
    add_object(create_breakablefloor2_1761(384, 720), 3);
    add_object(create_breakablefloor2_1761(448, 720), 3);
    add_object(create_pigeon_1724(884, 456), 3);
    add_object(create_pigeon_1724(900, 472), 3);
    add_object(create_pigeon_1724(940, 488), 3);
    add_object(create_lamppostfront_1778(1120, 658), 3);
    add_object(create_lamppostfront_1778(1312, 658), 3);
    add_object(create_lamppostfront_1778(1504, 658), 3);
    add_object(create_lamppostfront_1778(1696, 658), 3);
    add_object(create_lamppostfront_1778(1888, 658), 3);
    add_object(create_lamppostfront_1778(2080, 658), 3);
    add_object(create_lamppostfront_1778(2272, 658), 3);
    add_object(create_lamppostfront_1778(2464, 658), 3);
    add_object(create_lamppostfront_1778(2656, 658), 3);
    add_object(create_lamppostfront_1778(2848, 658), 3);
    add_object(create_lamppostfront_1778(3040, 658), 3);
    add_object(create_lamppostfront_1778(3232, 658), 3);
    add_object(create_lamppostfront_1778(3424, 658), 3);
    add_object(create_lamppostfront_1778(3616, 658), 3);
    add_object(create_lamppostfront_1778(3808, 658), 3);
    add_object(create_layerobject_10(-160, 640), 3);
    add_object(create_npcserpentine_947(2100, 252), 3);
    add_object(create_placeholdercharacter_3954(2484, -31), 3);
    add_object(create_placeholdercharacter_3954(2533, -31), 3);
    add_object(create_placeholdercharacter_3954(2581, -31), 3);
    add_object(create_lamppostfront_1778(4000, 658), 3);
    add_object(create_lamppostfront_1778(4192, 658), 3);
    add_object(create_lamppostfront_1778(4384, 658), 3);
    add_object(create_lamppostfront_1778(4576, 658), 3);
    add_object(create_lamppostfront_1778(4768, 658), 3);
    add_object(create_lamppostfront_1778(4960, 658), 3);
    add_object(create_lamppostfront_1778(5152, 658), 3);
    add_object(create_lamppostfront_1778(5344, 658), 3);
    add_object(create_lamppostfront_1778(5536, 658), 3);
    add_object(create_lamppostfront_1778(5728, 658), 3);
    add_object(create_lamppostfront_1778(5920, 658), 3);
    add_object(create_lamppostfront_1778(6112, 658), 3);
    add_object(create_lamppostfront_1778(6304, 658), 3);
    add_object(create_lamppostfront_1778(6496, 658), 3);
    add_object(create_lamppostfront_1778(6688, 658), 3);
    add_object(create_lamppostfront_1778(6880, 658), 3);
    add_background_object(create_shipbottomsailshadow_2089(1088, 0), 4);
    add_background_object(create_ship28_2075(1832, -16), 4);
    add_background_object(create_ship28_2075(1632, 64), 4);
    add_background_object(create_ship28_2075(1672, 48), 4);
    add_background_object(create_ship28_2075(1712, 32), 4);
    add_background_object(create_ship28_2075(1752, 16), 4);
    add_background_object(create_ship28_2075(1792, 0), 4);
    add_background_object(create_shipbottomsail_2074(1080, 104), 4);
    add_background_object(create_shipbottomsail_2074(1376, 64), 4);
    add_background_object(create_shipbottomsail_2074(1456, 40), 4);
    add_background_object(create_shipbottomsail_2074(1144, 80), 4);
    add_background_object(create_shipbottomsail_2074(888, 80), 4);
    add_background_object(create_shipbottomsail_2074(1200, 40), 4);
    add_background_object(create_shipbottomsail_2074(1144, 40), 4);
    add_background_object(create_shipbottomsail_2074(888, 40), 4);
    add_background_object(create_ship26_2082(952, 168), 4);
    add_background_object(create_ship26_2082(1016, 160), 4);
    add_background_object(create_ship26_2082(1080, 152), 4);
    add_background_object(create_ship26_2082(1144, 144), 4);
    add_background_object(create_ship26_2082(1208, 136), 4);
    add_background_object(create_ship26_2082(1272, 128), 4);
    add_background_object(create_ship26_2082(1336, 120), 4);
    add_background_object(create_ship26_2082(888, 176), 4);
    add_background_object(create_ship27_2083(1400, 104), 4);
    add_background_object(create_ship29_2084(1856, 0), 4);
    add_background_object(create_shipthrusterfront_2085(1144, 112), 4);
    add_background_object(create_shipthrusterfront_2085(1144, -56), 4);
    add_background_object(create_shipthrusterend_2086(760, 112), 4);
    add_background_object(create_shipthrusterend_2086(760, -56), 4);
    add_background_object(create_shipthrustermid_2088(856, 112), 4);
    add_background_object(create_shipthrustermid_2088(856, -56), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-584, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2776, -73), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_sarassteampluginfreedomplanet_26(-232, -88), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_dialogdata_3955(-128, 456), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_locationname_570(16, 192), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
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
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_lamp_running = false;
    loop_lamp_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
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
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_voice_running = false;
    loop_voice_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_79, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_79, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_79, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_79, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_79, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_79, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_79, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_79, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_79, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_79, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_79, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_79, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_79, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_79, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_79, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_79, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_79, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_79, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_79, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_79, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_79, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_79, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_79, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_79, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_79, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_79, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_79, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_79, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_79, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_79, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_79, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_79, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_79, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_79, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_79, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_79, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_79, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_79, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_79, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_79, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_79, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_79, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_79, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_79, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_79, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    once_condition_1770_79 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1725_79 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1 = false;
    not_always_449_13 = loop_count;
    not_always_1848_15 = loop_count;
    not_always_1779_79 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1845_15 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1420_13 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1709_76 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1702_76 = loop_count;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    once_condition_1699_79 = false;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1683_79 = false;
    not_always_1422_13 = loop_count;
    once_condition_1649_79 = false;
    group_main_engine_interface_and_post_processing_methods_all_shields_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1 = false;
    not_always_46_13 = loop_count;
    not_always_1733_76 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    once_condition_1778_79 = false;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_101_0 = loop_count;
    not_always_1783_69 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_1712_79 = false;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1421_13 = loop_count;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_1760_79 = loop_count;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1705_76 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    once_condition_565_76 = false;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    once_condition_550_76 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1728_79 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1706_76 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    once_condition_66_13 = false;
    once_condition_1759_79 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_scene_lilac_thinks_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1695_16 = loop_count;
    not_always_1696_16 = loop_count;
    once_condition_1745_79 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_18025()
{
    // event 1729_80
    {
        if (!(group_main_engine_1)) goto event_1729_80_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_river_ogg_289, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1729_80_end: ;
}
void Frames::loop_play_music_4_80()
{
    event_func_18025();
}
void Frames::event_func_18026()
{
    // event 1419_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1419_80_end;
        if (!((global_values->get(26)) == (0))) goto event_1419_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1419_80_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1419_80_end: ;
}
void Frames::event_func_18027()
{
    // event 1420_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1420_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1420_80_end: ;
}
void Frames::event_func_18028()
{
    // event 1421_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1421_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1421_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1421_80_end: ;
}
void Frames::event_func_18029()
{
    // event 1454_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1454_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1454_80_end: ;
}
void Frames::loop_voice_80()
{
    event_func_18026();
    event_func_18027();
    event_func_18028();
    event_func_18029();
}
void Frames::loop_wrapper_sound_kick1_80(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_80(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_80(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_80(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_80(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_80(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_80(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_80(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_80(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_80(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_80(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_80(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_camera_mode1_80(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_80(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_80(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_80(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_80(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_80(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_80(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
