#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8786()
{
    // event 1630_36
    {
        if (!(group_main_engine_1)) goto event_1630_36_end;
        if (!((global_values->get(0)) == (2))) goto event_1630_36_end;
        if (!((global_values->get(1)) == (0))) goto event_1630_36_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(7))) goto event_1630_36_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1630_36_end;
        if (once_condition_1630_36) goto event_1630_36_end;
        once_condition_1630_36 = true;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(7);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
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
        if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_1) {
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 = true;
        }
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1630_36_end: ;
}
void Frames::event_func_8787()
{
    // event 1631_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1631_36_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1631_36_end;
        FrameObject * single_instance_1631_36_0; single_instance_1631_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1631_36_0 == NULL)
                    single_instance_1631_36_0 = new_obj;
            }
        }
    }
    event_1631_36_end: ;
}
void Frames::event_func_8788()
{
    // event 1632_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1632_36_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1632_36_end;
        FrameObject * single_instance_1632_36_0; single_instance_1632_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1632_36_0 == NULL)
                    single_instance_1632_36_0 = new_obj;
            }
        }
    }
    event_1632_36_end: ;
}
void Frames::event_func_8789()
{
    // event 1633_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1633_36_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1633_36_end;
        FrameObject * single_instance_1633_36_0; single_instance_1633_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1633_36_0 == NULL)
                    single_instance_1633_36_0 = new_obj;
            }
        }
    }
    event_1633_36_end: ;
}
void Frames::event_func_8790()
{
    // event 1634_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1634_36_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1634_36_end;
        FrameObject * single_instance_1634_36_0; single_instance_1634_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1634_36_0 == NULL)
                    single_instance_1634_36_0 = new_obj;
            }
        }
    }
    event_1634_36_end: ;
}
void Frames::event_func_8791()
{
    // event 1635_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1635_36_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1635_36_end;
        FrameObject * single_instance_1635_36_0; single_instance_1635_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1635_36_0 == NULL)
                    single_instance_1635_36_0 = new_obj;
            }
        }
    }
    event_1635_36_end: ;
}
void Frames::event_func_8792()
{
    // event 1636_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1636_36_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1636_36_end;
        FrameObject * single_instance_1636_36_0; single_instance_1636_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_36_0 == NULL)
                    single_instance_1636_36_0 = new_obj;
            }
        }
    }
    event_1636_36_end: ;
}
void Frames::event_func_8793()
{
    // event 1637_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1637_36_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1637_36_end;
        FrameObject * single_instance_1637_36_0; single_instance_1637_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1637_36_0 == NULL)
                    single_instance_1637_36_0 = new_obj;
            }
        }
    }
    event_1637_36_end: ;
}
void Frames::event_func_8794()
{
    // event 1638_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1638_36_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1638_36_end;
        FrameObject * single_instance_1638_36_0; single_instance_1638_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1638_36_0 == NULL)
                    single_instance_1638_36_0 = new_obj;
            }
        }
    }
    event_1638_36_end: ;
}
void Frames::event_func_8795()
{
    // event 1639_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1639_36_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1639_36_end;
        FrameObject * single_instance_1639_36_0; single_instance_1639_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1639_36_0 == NULL)
                    single_instance_1639_36_0 = new_obj;
            }
        }
    }
    event_1639_36_end: ;
}
void Frames::event_func_8796()
{
    // event 1640_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1640_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1640_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1640_36_end: ;
}
void Frames::event_func_8797()
{
    // event 1641_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1641_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1641_36_end;
        if (not_always_1641_36 > loop_count) {
            not_always_1641_36 = loop_count + 2;
            goto event_1641_36_end;
        }
        not_always_1641_36 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1641_36_end: ;
}
void Frames::event_func_8798()
{
    // event 1642_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1642_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1642_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_36();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1642_36_end: ;
}
void Frames::event_func_8799()
{
    // event 1643_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1643_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1643_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1643_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1643_36_end: ;
}
void Frames::event_func_8800()
{
    // event 1644_36
    bool or_result_1644_36 = false;
    bool or_temp_result_1644_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1644_36_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1644_36_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1644_36_0_end;
        if (not_always_1644_36 > loop_count) {
            not_always_1644_36 = loop_count + 2;
            goto or_event_1644_36_0_end;
        }
        not_always_1644_36 = loop_count + 2;
        or_result_1644_36 = true;
        or_temp_result_1644_36_0 = true;
    }
    or_event_1644_36_0_end: ;
    // event 1644_36
    bool or_temp_result_1644_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1644_36_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1644_36_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1644_36_1_end;
        if (not_always_1644_36 > loop_count) {
            not_always_1644_36 = loop_count + 2;
            goto or_event_1644_36_1_end;
        }
        not_always_1644_36 = loop_count + 2;
        or_result_1644_36 = true;
        or_temp_result_1644_36_1 = true;
        or_event_1644_36_1_end: ;
        if (!or_result_1644_36) goto or_final_or_event_1644_36_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1644_36_1_end: ;
}
void Frames::event_func_8801()
{
    // event 1645_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1645_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1645_36_end;
        if (not_always_1645_36 > loop_count) {
            not_always_1645_36 = loop_count + 2;
            goto event_1645_36_end;
        }
        not_always_1645_36 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1645_36_end: ;
}
void Frames::event_func_8802()
{
    // event 1646_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1646_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1646_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1646_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1646_36_end: ;
}
void Frames::event_func_8803()
{
    // event 1647_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1647_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1647_36_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1647_36_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1647_36_end: ;
}
void Frames::event_func_8804()
{
    // event 1648_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1648_36_end;
        if (!((global_values->get(27)) == (0))) goto event_1648_36_end;
        if (not_always_1648_36 > loop_count) {
            not_always_1648_36 = loop_count + 2;
            goto event_1648_36_end;
        }
        not_always_1648_36 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1648_36_end: ;
}
void Frames::event_func_8805()
{
    // event 1652_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1652_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1652_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1652_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1652_36_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1652_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1652_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1652_36_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1652_36_end: ;
}
void Frames::event_func_8806()
{
    // event 1653_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1653_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1653_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1653_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1653_36_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1653_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1653_36_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1653_36_end: ;
}
void Frames::event_func_8807()
{
    // event 1654_36
    bool or_result_1654_36 = false;
    bool or_temp_result_1654_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1654_36_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1654_36_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1654_36_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1654_36_0_end;
        or_result_1654_36 = true;
        or_temp_result_1654_36_0 = true;
    }
    or_event_1654_36_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1654_36_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1654_36
    bool or_temp_result_1654_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1654_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1654_36_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1654_36_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1654_36_1_end;
        or_result_1654_36 = true;
        or_temp_result_1654_36_1 = true;
        or_event_1654_36_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1654_36_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1654_36) goto or_final_or_event_1654_36_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1654_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1654_36_0 || or_temp_result_1654_36_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1654_36_1_end: ;
}
void Frames::event_func_8808()
{
    // event 1655_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1655_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1655_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1655_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1655_36_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1655_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1655_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1655_36_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1655_36_end: ;
}
void Frames::event_func_8809()
{
    // event 1656_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1656_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1656_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1656_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1656_36_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1656_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1656_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1656_36_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1656_36_end: ;
}
void Frames::event_func_8810()
{
    // event 1657_36
    bool or_result_1657_36 = false;
    bool or_temp_result_1657_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1657_36_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1657_36_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1657_36_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1657_36_0_end;
        or_result_1657_36 = true;
        or_temp_result_1657_36_0 = true;
    }
    or_event_1657_36_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1657_36_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1657_36
    bool or_temp_result_1657_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1657_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1657_36_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1657_36_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1657_36_1_end;
        or_result_1657_36 = true;
        or_temp_result_1657_36_1 = true;
        or_event_1657_36_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1657_36_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1657_36) goto or_final_or_event_1657_36_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1657_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1657_36_0 || or_temp_result_1657_36_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1657_36_1_end: ;
}
void Frames::event_func_8811()
{
    // event 1658_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1658_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1658_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1658_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1658_36_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1658_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1658_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1658_36_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1658_36_end: ;
}
void Frames::event_func_8812()
{
    // event 1659_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1659_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1659_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1659_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1659_36_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1659_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1659_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1659_36_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1659_36_end: ;
}
void Frames::event_func_8813()
{
    // event 1660_36
    bool or_result_1660_36 = false;
    bool or_temp_result_1660_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1660_36_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1660_36_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1660_36_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1660_36_0_end;
        or_result_1660_36 = true;
        or_temp_result_1660_36_0 = true;
    }
    or_event_1660_36_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1660_36_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1660_36
    bool or_temp_result_1660_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1660_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1660_36_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1660_36_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1660_36_1_end;
        or_result_1660_36 = true;
        or_temp_result_1660_36_1 = true;
        or_event_1660_36_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1660_36_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1660_36) goto or_final_or_event_1660_36_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1660_36_0 || or_temp_result_1660_36_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1660_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1660_36_1_end: ;
}
void Frames::event_func_8814()
{
    // event 1661_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1661_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1661_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1661_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1661_36_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1661_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1661_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1661_36_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1661_36_end: ;
}
void Frames::event_func_8815()
{
    // event 1662_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1662_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1662_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1662_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1662_36_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1662_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1662_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1662_36_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1662_36_end: ;
}
void Frames::event_func_8816()
{
    // event 1663_36
    bool or_result_1663_36 = false;
    bool or_temp_result_1663_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1663_36_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1663_36_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1663_36_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1663_36_0_end;
        or_result_1663_36 = true;
        or_temp_result_1663_36_0 = true;
    }
    or_event_1663_36_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1663_36_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1663_36
    bool or_temp_result_1663_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1663_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1663_36_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1663_36_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1663_36_1_end;
        or_result_1663_36 = true;
        or_temp_result_1663_36_1 = true;
        or_event_1663_36_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1663_36_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1663_36) goto or_final_or_event_1663_36_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1663_36_0 || or_temp_result_1663_36_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1663_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1663_36_1_end: ;
}
void Frames::event_func_8817()
{
    // event 1664_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1664_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1664_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1664_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1664_36_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1664_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1664_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1664_36_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1664_36_end: ;
}
void Frames::event_func_8818()
{
    // event 1665_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto event_1665_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1665_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1665_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1665_36_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1665_36_end;
        if (!media.is_channel_playing(20-1)) goto event_1665_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1665_36_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1665_36_end: ;
}
void Frames::event_func_8819()
{
    // event 1666_36
    bool or_result_1666_36 = false;
    bool or_temp_result_1666_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1666_36_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1666_36_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1666_36_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1666_36_0_end;
        or_result_1666_36 = true;
        or_temp_result_1666_36_0 = true;
    }
    or_event_1666_36_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1666_36_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1666_36
    bool or_temp_result_1666_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1666_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1666_36_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1666_36_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1666_36_1_end;
        or_result_1666_36 = true;
        or_temp_result_1666_36_1 = true;
        or_event_1666_36_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1666_36_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1666_36) goto or_final_or_event_1666_36_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1666_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1666_36_0 || or_temp_result_1666_36_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1666_36_1_end: ;
}
void Frames::event_func_8820()
{
    // event 1667_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1667_36_end;
        if (!((global_values->get(27)) == (1))) goto event_1667_36_end;
        if (not_always_1667_36 > loop_count) {
            not_always_1667_36 = loop_count + 2;
            goto event_1667_36_end;
        }
        not_always_1667_36 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1667_36_end: ;
}
void Frames::event_func_8821()
{
    // event 1668_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1668_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1668_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1668_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1668_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1668_36_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1668_36_end: ;
}
void Frames::event_func_8822()
{
    // event 1669_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1669_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1669_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1669_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1669_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1669_36_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1669_36_end: ;
}
void Frames::event_func_8823()
{
    // event 1670_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1670_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1670_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1670_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1670_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1670_36_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1670_36_end: ;
}
void Frames::event_func_8824()
{
    // event 1671_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1671_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1671_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1671_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1671_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1671_36_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1671_36_end: ;
}
void Frames::event_func_8825()
{
    // event 1672_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1672_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1672_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1672_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1672_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1672_36_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1672_36_end: ;
}
void Frames::event_func_8826()
{
    // event 1673_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1673_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1673_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1673_36_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1673_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1673_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1673_36_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1673_36_end: ;
}
void Frames::event_func_8827()
{
    // event 1674_36
    bool or_result_1674_36 = false;
    bool or_temp_result_1674_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1674_36_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1674_36_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1674_36_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1674_36_0_end;
        or_result_1674_36 = true;
        or_temp_result_1674_36_0 = true;
    }
    or_event_1674_36_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1674_36_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1674_36
    bool or_temp_result_1674_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1674_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1674_36_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1674_36_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1674_36_1_end;
        or_result_1674_36 = true;
        or_temp_result_1674_36_1 = true;
        or_event_1674_36_1_end: ;
        if (or_temp_result_1674_36_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1674_36) goto or_final_or_event_1674_36_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1674_36_0 || or_temp_result_1674_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1674_36_0 || or_temp_result_1674_36_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1674_36_1_end: ;
}
void Frames::event_func_8828()
{
    // event 1675_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1675_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1675_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1675_36_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1675_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1675_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1675_36_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1675_36_end: ;
}
void Frames::event_func_8829()
{
    // event 1676_36
    bool or_result_1676_36 = false;
    bool or_temp_result_1676_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1676_36_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1676_36_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1676_36_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1676_36_0_end;
        or_result_1676_36 = true;
        or_temp_result_1676_36_0 = true;
    }
    or_event_1676_36_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1676_36_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1676_36
    bool or_temp_result_1676_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1676_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1676_36_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1676_36_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1676_36_1_end;
        or_result_1676_36 = true;
        or_temp_result_1676_36_1 = true;
        or_event_1676_36_1_end: ;
        if (or_temp_result_1676_36_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1676_36) goto or_final_or_event_1676_36_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1676_36_0 || or_temp_result_1676_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1676_36_0 || or_temp_result_1676_36_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1676_36_1_end: ;
}
void Frames::event_func_8830()
{
    // event 1677_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1677_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1677_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1677_36_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1677_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1677_36_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1677_36_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1677_36_end: ;
}
void Frames::event_func_8831()
{
    // event 1678_36
    bool or_result_1678_36 = false;
    bool or_temp_result_1678_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1678_36_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1678_36_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1678_36_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1678_36_0_end;
        or_result_1678_36 = true;
        or_temp_result_1678_36_0 = true;
    }
    or_event_1678_36_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1678_36_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1678_36
    bool or_temp_result_1678_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1678_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1678_36_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1678_36_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1678_36_1_end;
        or_result_1678_36 = true;
        or_temp_result_1678_36_1 = true;
        or_event_1678_36_1_end: ;
        if (or_temp_result_1678_36_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1678_36) goto or_final_or_event_1678_36_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1678_36_0 || or_temp_result_1678_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1678_36_0 || or_temp_result_1678_36_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1678_36_1_end: ;
}
void Frames::event_func_8832()
{
    // event 1679_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1679_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1679_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1679_36_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1679_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1679_36_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1679_36_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1679_36_end: ;
}
void Frames::event_func_8833()
{
    // event 1680_36
    bool or_result_1680_36 = false;
    bool or_temp_result_1680_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1680_36_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1680_36_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1680_36_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1680_36_0_end;
        or_result_1680_36 = true;
        or_temp_result_1680_36_0 = true;
    }
    or_event_1680_36_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1680_36_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1680_36
    bool or_temp_result_1680_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1680_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1680_36_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1680_36_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1680_36_1_end;
        or_result_1680_36 = true;
        or_temp_result_1680_36_1 = true;
        or_event_1680_36_1_end: ;
        if (or_temp_result_1680_36_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1680_36) goto or_final_or_event_1680_36_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1680_36_0 || or_temp_result_1680_36_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1680_36_0 || or_temp_result_1680_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1680_36_1_end: ;
}
void Frames::event_func_8834()
{
    // event 1681_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto event_1681_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1681_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1681_36_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1681_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1681_36_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1681_36_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1681_36_end: ;
}
void Frames::event_func_8835()
{
    // event 1682_36
    bool or_result_1682_36 = false;
    bool or_temp_result_1682_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1682_36_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1682_36_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1682_36_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1682_36_0_end;
        or_result_1682_36 = true;
        or_temp_result_1682_36_0 = true;
    }
    or_event_1682_36_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1682_36_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1682_36
    bool or_temp_result_1682_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1)) goto or_event_1682_36_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1682_36_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1682_36_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1682_36_1_end;
        or_result_1682_36 = true;
        or_temp_result_1682_36_1 = true;
        or_event_1682_36_1_end: ;
        if (or_temp_result_1682_36_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1682_36) goto or_final_or_event_1682_36_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1682_36_0 || or_temp_result_1682_36_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1682_36_0 || or_temp_result_1682_36_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1682_36_1_end: ;
}
void Frames::event_func_8836()
{
    // event 1684_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1684_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1684_36_end: ;
}
void Frames::event_func_8837()
{
    // event 1685_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1685_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) < (4))) goto event_1685_36_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+3, 50));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(12, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, 0);
    }
    event_1685_36_end: ;
}
void Frames::event_func_8838()
{
    // event 1686_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1686_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) == (1))) goto event_1686_36_end;
        if (once_condition_1686_36) goto event_1686_36_end;
        once_condition_1686_36 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1686_36_end: ;
}
void Frames::event_func_8839()
{
    // event 1687_36
    bool or_result_1687_36 = false;
    bool or_temp_result_1687_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1687_36_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1687_36_0_end;
        or_result_1687_36 = true;
        or_temp_result_1687_36_0 = true;
    }
    or_event_1687_36_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1687_36_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1687_36
    bool or_temp_result_1687_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1687_36_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1687_36_1_end;
        or_result_1687_36 = true;
        or_temp_result_1687_36_1 = true;
    }
    or_event_1687_36_1_end: ;
    if (or_temp_result_1687_36_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1687_36
    bool or_temp_result_1687_36_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1687_36_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1687_36_2_end;
        or_result_1687_36 = true;
        or_temp_result_1687_36_2 = true;
        or_event_1687_36_2_end: ;
        if (or_temp_result_1687_36_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1687_36) goto or_final_or_event_1687_36_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1687_36_0 || or_temp_result_1687_36_1 || or_temp_result_1687_36_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1687_36_2_end: ;
}
void Frames::event_func_8840()
{
    // event 1688_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1688_36_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1688_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1688_36_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1688_36_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(16, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1688_36_end: ;
}
void Frames::event_func_8841()
{
    // event 1689_36
    bool or_result_1689_36 = false;
    bool or_temp_result_1689_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1689_36_0_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (2))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1689_36_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1689_36_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1689_36_0_end;
        or_result_1689_36 = true;
        or_temp_result_1689_36_0 = true;
    }
    or_event_1689_36_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    bossspademask_2231_instances.clear_saved_selection();
    bossspade_2194_instances.clear_saved_selection();
    if (or_temp_result_1689_36_0) {
        playermovementvalues_245_instances.save_selection();
        bossspademask_2231_instances.save_selection();
        bossspade_2194_instances.save_selection();
    }
    // event 1689_36
    bool or_temp_result_1689_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto or_event_1689_36_1_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (2))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1689_36_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1689_36_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1689_36_1_end;
        or_result_1689_36 = true;
        or_temp_result_1689_36_1 = true;
        or_event_1689_36_1_end: ;
        if (or_temp_result_1689_36_1) {
            playermovementvalues_245_instances.save_selection();
            bossspademask_2231_instances.save_selection();
            bossspade_2194_instances.save_selection();
        }
        if (!or_result_1689_36) goto or_final_or_event_1689_36_1_end;
        bossspademask_2231_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        bossspade_2194_instances.empty_selection();
        if (or_temp_result_1689_36_0 || or_temp_result_1689_36_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1689_36_0 || or_temp_result_1689_36_1) {
            bossspademask_2231_instances.restore_selection();
        }
        if (or_temp_result_1689_36_0 || or_temp_result_1689_36_1) {
            bossspade_2194_instances.restore_selection();
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1689_36_1_end: ;
}
void Frames::event_func_8842()
{
    // event 1690_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1690_36_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1690_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1690_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (4))) goto event_1690_36_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1690_36_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1690_36_end: ;
}
void Frames::event_func_8843()
{
    // event 1691_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1691_36_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1691_36_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1691_36_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1691_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(16, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1691_36_end: ;
}
void Frames::event_func_8844()
{
    // event 1692_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1692_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) == (4))) goto event_1692_36_end;
        if (((Active*)get_instance(dialogbox_566_instances))->flags & VISIBLE) goto event_1692_36_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 = false;
    
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, -1);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(16, 0);
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
    }
    event_1692_36_end: ;
}
void Frames::event_func_8845()
{
    // event 1693_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1693_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->test_animation(0))) goto event_1693_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(40);
    }
    event_1693_36_end: ;
}
void Frames::event_func_8846()
{
    // event 1694_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1)) goto event_1694_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->test_animation(40))) goto event_1694_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(((Active*)get_instance(playerskinspade_419_instances, default_active_instance))->get_frame());
    }
    event_1694_36_end: ;
}
void Frames::event_func_8847()
{
    // event 1696_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1696_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(zaoshipfalling_2129_instances))->set_y(((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.get(0));
    }
    event_1696_36_end: ;
}
void Frames::event_func_8848()
{
    // event 1697_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1697_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) == (0))) goto event_1697_36_end;
        if (once_condition_1697_36) goto event_1697_36_end;
        once_condition_1697_36 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 220);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
    }
    event_1697_36_end: ;
}
void Frames::event_func_8849()
{
    // event 1698_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1698_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) == (0))) goto event_1698_36_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(1888);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(1944);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(69);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
    }
    event_1698_36_end: ;
}
void Frames::event_func_8850()
{
    // event 1699_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1699_36_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1699_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) == (0))) goto event_1699_36_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(0, 1);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1699_36_end: ;
}
void Frames::event_func_8851()
{
    // event 1700_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1700_36_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1700_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) < (180))) goto event_1700_36_end;
        ((Active*)get_instance(zaoshipfalling_2129_instances))->set_x(((Active*)get_instance(zaoshipfalling_2129_instances))->get_x()+1);
    }
    event_1700_36_end: ;
}
void Frames::event_func_8852()
{
    // event 1701_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1701_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) > (30))) goto event_1701_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) < (180))) goto event_1701_36_end;
        if (!((global_values->get(3)%math_helper%40) == (0))) goto event_1701_36_end;
        FrameObject * single_instance_1701_36_0; single_instance_1701_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(zaoshipfalling_2129_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1701_36_0 == NULL)
                    single_instance_1701_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1701_36_0))->set_scale(0.4);
        ((Active*)((Active*)single_instance_1701_36_0))->set_y(((Active*)single_instance_1701_36_0)->get_y()-5+randrange(11));
        ((Active*)((Active*)single_instance_1701_36_0))->set_x(((Active*)single_instance_1701_36_0)->get_x()-50+randrange(101));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(6+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1701_36_1_end;
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
        dynamic_1701_36_1_end: ;
    }
    event_1701_36_end: ;
}
void Frames::event_func_8853()
{
    // event 1702_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1702_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) > (30))) goto event_1702_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) < (180))) goto event_1702_36_end;
        if (!((global_values->get(3)%math_helper%30) == (13))) goto event_1702_36_end;
        FrameObject * single_instance_1702_36_0; single_instance_1702_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(zaoshipfalling_2129_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1702_36_0 == NULL)
                    single_instance_1702_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1702_36_0))->set_scale(0.4);
        ((Active*)((Active*)single_instance_1702_36_0))->set_y(((Active*)single_instance_1702_36_0)->get_y()-5+randrange(11));
        ((Active*)((Active*)single_instance_1702_36_0))->set_x(((Active*)single_instance_1702_36_0)->get_x()-80+randrange(101));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(6+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1702_36_1_end;
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
        dynamic_1702_36_1_end: ;
    }
    event_1702_36_end: ;
}
void Frames::event_func_8854()
{
    // event 1703_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1703_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (180))) goto event_1703_36_end;
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        FrameObject * single_instance_1703_36_0; single_instance_1703_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(zaoshipfalling_2129_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -62, parent->y + 11), parent->layer);
                if (single_instance_1703_36_0 == NULL)
                    single_instance_1703_36_0 = new_obj;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1703_36_end: ;
}
void Frames::event_func_8855()
{
    // event 1704_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1704_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) > (230))) goto event_1704_36_end;
        ((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.add(0, ((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.get(1));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, ((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.get(1)*0.85);
        ((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.add(1, 0.1);
        ((Active*)get_instance(zaoshipfalling_2129_instances))->set_angle(0-((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.get(1), 0);
    }
    event_1704_36_end: ;
}
void Frames::event_func_8856()
{
    // event 1705_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1705_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (240))) goto event_1705_36_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_18_01_ogg_174, 15-1);
    }
    event_1705_36_end: ;
}
void Frames::event_func_8857()
{
    // event 1706_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1706_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (260))) goto event_1706_36_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_17_01_ogg_175, 16-1);
    }
    event_1706_36_end: ;
}
void Frames::event_func_8858()
{
    // event 1707_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1707_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (270))) goto event_1707_36_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_12_03_ogg_176, 17-1);
    }
    event_1707_36_end: ;
}
void Frames::event_func_8859()
{
    // event 1708_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1708_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (280))) goto event_1708_36_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_to_to_12_02_ogg_177, 18-1);
    }
    event_1708_36_end: ;
}
void Frames::event_func_8860()
{
    // event 1709_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1709_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) == (460))) goto event_1709_36_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        media.play_id(SOUND_BIGSPLASH_404, -1, 1);
    }
    event_1709_36_end: ;
}
void Frames::event_func_8861()
{
    // event 1710_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1710_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) > (460))) goto event_1710_36_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-3, 0));
        }
    }
    event_1710_36_end: ;
}
void Frames::event_func_8862()
{
    // event 1711_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1)) goto event_1711_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(2)) > (660))) goto event_1711_36_end;
        global_values->set(4, 0);
        next_frame = 80 + 0;    
    
    }
    event_1711_36_end: ;
}
void Frames::event_func_8863()
{
    // event 1713_36
    {
        if (!(group_main_engine_1)) goto event_1713_36_end;
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(11))) { it.deselect(); continue; }
        }
        if (!levelsbplatform1_2096_instances.has_selection()) goto event_1713_36_end;
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+4, ((Active*)*it)->alterables->values.get(16)));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, 40));
        }
    }
    event_1713_36_end: ;
}
void Frames::event_func_8864()
{
    // event 1714_36
    {
        if (!(group_main_engine_1)) goto event_1714_36_end;
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (((Active*)*it)->alterables->values.get(16)))) { it.deselect(); continue; }
        }
        if (!levelsbplatform1_2096_instances.has_selection()) goto event_1714_36_end;
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(11);
        }
    }
    event_1714_36_end: ;
}
void Frames::event_func_8865()
{
    // event 1716_36
    {
        if (!(group_main_engine_1)) goto event_1716_36_end;
        if (!((global_values->get(4)) < (2))) goto event_1716_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7192))) goto event_1716_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7392))) goto event_1716_36_end;
        global_values->set(4, 2);
        global_values->set(5, 7192);
        global_values->set(6, 616);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1716_36_end: ;
}
void Frames::event_func_8866()
{
    // event 1717_36
    {
        if (!(group_main_engine_1)) goto event_1717_36_end;
        if (!((global_values->get(4)) < (3))) goto event_1717_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10800))) goto event_1717_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10900))) goto event_1717_36_end;
        global_values->set(4, 3);
        global_values->set(5, 10872);
        global_values->set(6, 588);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1717_36_end: ;
}
void Frames::event_func_8867()
{
    // event 1719_36
    {
        if (!(group_main_engine_1)) goto event_1719_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+600))) goto event_1719_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1719_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1719_36_end;
        if (!((minibossbarrier_924_instances.size()) > (0))) goto event_1719_36_end;
        if (not_always_1719_36 > loop_count) {
            not_always_1719_36 = loop_count + 2;
            goto event_1719_36_end;
        }
        not_always_1719_36 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1719_36_end: ;
}
void Frames::event_func_8868()
{
    // event 1720_36
    {
        if (!(group_main_engine_1)) goto event_1720_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_1720_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+600))) goto event_1720_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1720_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1720_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-300))) goto event_1720_36_end;
        if (!((minibossbarrier_924_instances.size()) > (0))) goto event_1720_36_end;
        if (once_condition_1720_36) goto event_1720_36_end;
        once_condition_1720_36 = true;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_chopper_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_chopper_1 = true;
        }
    }
    event_1720_36_end: ;
}
void Frames::event_func_8869()
{
    // event 1721_36
    {
        if (!(group_main_engine_1)) goto event_1721_36_end;
        if (!((minibossbarrier_924_instances.size()) == (0))) goto event_1721_36_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1721_36_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1721_36_end: ;
}
void Frames::event_func_8870()
{
    // event 1722_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1722_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1722_36_end;
        if (once_condition_1722_36) goto event_1722_36_end;
        once_condition_1722_36 = true;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, frame_left()-200);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(6, 6);
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.enable(4);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
        }
    }
    event_1722_36_end: ;
}
void Frames::event_func_8871()
{
    // event 1723_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1723_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1723_36_end: ;
}
void Frames::event_func_8872()
{
    // event 1724_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1724_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(8))*((Active*)*it)->alterables->values.get(11));
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1724_36_0;
            ((Active*)get_instance(bosschopperblade_2218_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1724_36_0: ;
        }
        ((Active*)get_instance(bosschopperblade_2218_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschopperblade_2218_instances))->move_front(((Active*)get_single(bosschopper_2216_instances)));
    }
    event_1724_36_end: ;
}
void Frames::event_func_8873()
{
    // event 1725_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1725_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1725_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(2)-sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8))*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11)+sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8)-20-((Active*)*it)->alterables->values.get(0)*20)*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11));
            ((Active*)*it)->set_direction(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1725_36_end: ;
}
void Frames::event_func_8874()
{
    // event 1726_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1726_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(10), 0);
        }
        ((Active*)get_instance(bosschopperblade_2218_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
    }
    event_1726_36_end: ;
}
void Frames::event_func_8875()
{
    // event 1727_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1727_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1727_36_end;
        {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances));
            if (parent == NULL) goto pos_end_1727_36_0;
            ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1727_36_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances));
            if (parent == NULL) goto pos_end_1727_36_1;
            ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1727_36_1: ;
        }
    }
    event_1727_36_end: ;
}
void Frames::event_func_8876()
{
    // event 1728_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1728_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1728_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1728_36_end: ;
}
void Frames::event_func_8877()
{
    // event 1729_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1729_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1729_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1729_36_end: ;
}
void Frames::event_func_8878()
{
    // event 1730_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1730_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1730_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+6)%math_helper%360);
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1730_36_0;
            ((Active*)get_instance(bosschopperbars_2212_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1730_36_0: ;
        }
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1730_36_1;
            ((Active*)get_instance(bosschopperbars2_2213_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1730_36_1: ;
        }
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
    }
    event_1730_36_end: ;
}
void Frames::event_func_8879()
{
    // event 1731_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1731_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1731_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (32+((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1731_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 8);
        }
    }
    event_1731_36_end: ;
}
void Frames::event_func_8880()
{
    // event 1732_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1732_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1732_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-32-((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1732_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 8);
        }
    }
    event_1732_36_end: ;
}
void Frames::event_func_8881()
{
    // event 1733_36
    bool or_result_1733_36 = false;
    bool or_temp_result_1733_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1733_36_0_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+150))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1733_36_0_end;
        or_result_1733_36 = true;
        or_temp_result_1733_36_0 = true;
    }
    or_event_1733_36_0_end: ;
    bosschopper_2216_instances.clear_saved_selection();
    if (or_temp_result_1733_36_0) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1733_36
    bool or_temp_result_1733_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1733_36_1_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-150))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1733_36_1_end;
        or_result_1733_36 = true;
        or_temp_result_1733_36_1 = true;
        or_event_1733_36_1_end: ;
        if (or_temp_result_1733_36_1) {
            bosschopper_2216_instances.save_selection();
        }
        if (!or_result_1733_36) goto or_final_or_event_1733_36_1_end;
        bosschopper_2216_instances.empty_selection();
        if (or_temp_result_1733_36_0 || or_temp_result_1733_36_1) {
            bosschopper_2216_instances.restore_selection();
        }
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.2, 3));
        }
    }
    or_final_or_event_1733_36_1_end: ;
}
void Frames::event_func_8882()
{
    // event 1734_36
    bool or_result_1734_36 = false;
    bool or_temp_result_1734_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1734_36_0_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+150))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1734_36_0_end;
        or_result_1734_36 = true;
        or_temp_result_1734_36_0 = true;
    }
    or_event_1734_36_0_end: ;
    bosschopper_2216_instances.clear_saved_selection();
    if (or_temp_result_1734_36_0) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1734_36
    bool or_temp_result_1734_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1734_36_1_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-150))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1734_36_1_end;
        or_result_1734_36 = true;
        or_temp_result_1734_36_1 = true;
        or_event_1734_36_1_end: ;
        if (or_temp_result_1734_36_1) {
            bosschopper_2216_instances.save_selection();
        }
        if (!or_result_1734_36) goto or_final_or_event_1734_36_1_end;
        bosschopper_2216_instances.empty_selection();
        if (or_temp_result_1734_36_0 || or_temp_result_1734_36_1) {
            bosschopper_2216_instances.restore_selection();
        }
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.2, -3));
        }
    }
    or_final_or_event_1734_36_1_end: ;
}
void Frames::event_func_8883()
{
    // event 1735_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1735_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1735_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1735_36_end: ;
}
void Frames::event_func_8884()
{
    // event 1736_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1736_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1736_36_end;
        FrameObject * single_instance_1736_36_0; single_instance_1736_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschopperbars_2212_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2122(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1736_36_0 == NULL)
                    single_instance_1736_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1736_36_0))->set_direction(28);
        ((Active*)((Active*)single_instance_1736_36_0))->alterables->values.set(5, 1);
        ((Active*)((Active*)single_instance_1736_36_0))->get_movement()->set_speed(50);
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 10);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1736_36_end: ;
}
void Frames::event_func_8885()
{
    // event 1737_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1737_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1737_36_end;
        FrameObject * single_instance_1737_36_0; single_instance_1737_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschopperbars_2212_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2122(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1737_36_0 == NULL)
                    single_instance_1737_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1737_36_0))->set_direction(20);
        ((Active*)((Active*)single_instance_1737_36_0))->alterables->values.set(5, -1);
        ((Active*)((Active*)single_instance_1737_36_0))->get_movement()->set_speed(50);
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 10);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1737_36_end: ;
}
