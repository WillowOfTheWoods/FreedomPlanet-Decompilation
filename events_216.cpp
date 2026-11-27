#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17036()
{
    // event 1695_76
    {
        if (!(group_main_engine_1)) goto event_1695_76_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1695_76_end;
        FrameObject * single_instance_1695_76_0; single_instance_1695_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1695_76_0 == NULL)
                    single_instance_1695_76_0 = new_obj;
            }
        }
    }
    event_1695_76_end: ;
}
void Frames::event_func_17037()
{
    // event 1696_76
    {
        if (!(group_main_engine_1)) goto event_1696_76_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1696_76_end;
        FrameObject * single_instance_1696_76_0; single_instance_1696_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1696_76_0 == NULL)
                    single_instance_1696_76_0 = new_obj;
            }
        }
    }
    event_1696_76_end: ;
}
void Frames::event_func_17038()
{
    // event 1697_76
    {
        if (!(group_main_engine_1)) goto event_1697_76_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1697_76_end;
        FrameObject * single_instance_1697_76_0; single_instance_1697_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1697_76_0 == NULL)
                    single_instance_1697_76_0 = new_obj;
            }
        }
    }
    event_1697_76_end: ;
}
void Frames::event_func_17039()
{
    // event 1698_76
    {
        if (!(group_main_engine_1)) goto event_1698_76_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1698_76_end;
        FrameObject * single_instance_1698_76_0; single_instance_1698_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1698_76_0 == NULL)
                    single_instance_1698_76_0 = new_obj;
            }
        }
    }
    event_1698_76_end: ;
}
void Frames::event_func_17040()
{
    // event 1699_76
    {
        if (!(group_main_engine_1)) goto event_1699_76_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1699_76_end;
        FrameObject * single_instance_1699_76_0; single_instance_1699_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1699_76_0 == NULL)
                    single_instance_1699_76_0 = new_obj;
            }
        }
    }
    event_1699_76_end: ;
}
void Frames::event_func_17041()
{
    // event 1700_76
    {
        if (!(group_main_engine_1)) goto event_1700_76_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1700_76_end;
        FrameObject * single_instance_1700_76_0; single_instance_1700_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1700_76_0 == NULL)
                    single_instance_1700_76_0 = new_obj;
            }
        }
    }
    event_1700_76_end: ;
}
void Frames::event_func_17042()
{
    // event 1701_76
    {
        if (!(group_main_engine_1)) goto event_1701_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1701_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1701_76_end: ;
}
void Frames::event_func_17043()
{
    // event 1702_76
    {
        if (!(group_main_engine_1)) goto event_1702_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1702_76_end;
        if (not_always_1702_76 > loop_count) {
            not_always_1702_76 = loop_count + 2;
            goto event_1702_76_end;
        }
        not_always_1702_76 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1702_76_end: ;
}
void Frames::event_func_17044()
{
    // event 1703_76
    {
        if (!(group_main_engine_1)) goto event_1703_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1703_76_end;
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
                loop_voice_76();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1703_76_end: ;
}
void Frames::event_func_17045()
{
    // event 1704_76
    {
        if (!(group_main_engine_1)) goto event_1704_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1704_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1704_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1704_76_end: ;
}
void Frames::event_func_17046()
{
    // event 1705_76
    bool or_result_1705_76 = false;
    bool or_temp_result_1705_76_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1705_76_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1705_76_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1705_76_0_end;
        if (not_always_1705_76 > loop_count) {
            not_always_1705_76 = loop_count + 2;
            goto or_event_1705_76_0_end;
        }
        not_always_1705_76 = loop_count + 2;
        or_result_1705_76 = true;
        or_temp_result_1705_76_0 = true;
    }
    or_event_1705_76_0_end: ;
    // event 1705_76
    bool or_temp_result_1705_76_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1705_76_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1705_76_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1705_76_1_end;
        if (not_always_1705_76 > loop_count) {
            not_always_1705_76 = loop_count + 2;
            goto or_event_1705_76_1_end;
        }
        not_always_1705_76 = loop_count + 2;
        or_result_1705_76 = true;
        or_temp_result_1705_76_1 = true;
        or_event_1705_76_1_end: ;
        if (!or_result_1705_76) goto or_final_or_event_1705_76_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1705_76_1_end: ;
}
void Frames::event_func_17047()
{
    // event 1706_76
    {
        if (!(group_main_engine_1)) goto event_1706_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1706_76_end;
        if (not_always_1706_76 > loop_count) {
            not_always_1706_76 = loop_count + 2;
            goto event_1706_76_end;
        }
        not_always_1706_76 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1706_76_end: ;
}
void Frames::event_func_17048()
{
    // event 1707_76
    {
        if (!(group_main_engine_1)) goto event_1707_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1707_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1707_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1707_76_end: ;
}
void Frames::event_func_17049()
{
    // event 1708_76
    {
        if (!(group_main_engine_1)) goto event_1708_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1708_76_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1708_76_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1708_76_end: ;
}
void Frames::event_func_17050()
{
    // event 1709_76
    {
        if (!(group_main_engine_1)) goto event_1709_76_end;
        if (!((global_values->get(27)) == (0))) goto event_1709_76_end;
        if (not_always_1709_76 > loop_count) {
            not_always_1709_76 = loop_count + 2;
            goto event_1709_76_end;
        }
        not_always_1709_76 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1709_76_end: ;
}
void Frames::event_func_17051()
{
    // event 1713_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1713_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1713_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1713_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1713_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1713_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1713_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1713_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1713_76_end: ;
}
void Frames::event_func_17052()
{
    // event 1714_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1714_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1714_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1714_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1714_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1714_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1714_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1714_76_end: ;
}
void Frames::event_func_17053()
{
    // event 1715_76
    bool or_result_1715_76 = false;
    bool or_temp_result_1715_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1715_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1715_76_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1715_76_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1715_76_0_end;
        or_result_1715_76 = true;
        or_temp_result_1715_76_0 = true;
    }
    or_event_1715_76_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1715_76_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1715_76
    bool or_temp_result_1715_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1715_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1715_76_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1715_76_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1715_76_1_end;
        or_result_1715_76 = true;
        or_temp_result_1715_76_1 = true;
        or_event_1715_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1715_76_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1715_76) goto or_final_or_event_1715_76_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1715_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1715_76_0 || or_temp_result_1715_76_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1715_76_1_end: ;
}
void Frames::event_func_17054()
{
    // event 1716_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1716_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1716_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1716_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1716_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1716_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1716_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1716_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1716_76_end: ;
}
void Frames::event_func_17055()
{
    // event 1717_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1717_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1717_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1717_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1717_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1717_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1717_76_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1717_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1717_76_end: ;
}
void Frames::event_func_17056()
{
    // event 1718_76
    bool or_result_1718_76 = false;
    bool or_temp_result_1718_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1718_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1718_76_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1718_76_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1718_76_0_end;
        or_result_1718_76 = true;
        or_temp_result_1718_76_0 = true;
    }
    or_event_1718_76_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1718_76_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1718_76
    bool or_temp_result_1718_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1718_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1718_76_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1718_76_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1718_76_1_end;
        or_result_1718_76 = true;
        or_temp_result_1718_76_1 = true;
        or_event_1718_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1718_76_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1718_76) goto or_final_or_event_1718_76_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1718_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1718_76_0 || or_temp_result_1718_76_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1718_76_1_end: ;
}
void Frames::event_func_17057()
{
    // event 1719_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1719_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1719_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1719_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1719_76_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1719_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1719_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1719_76_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1719_76_end: ;
}
void Frames::event_func_17058()
{
    // event 1720_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1720_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1720_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1720_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1720_76_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1720_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1720_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1720_76_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1720_76_end: ;
}
void Frames::event_func_17059()
{
    // event 1721_76
    bool or_result_1721_76 = false;
    bool or_temp_result_1721_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1721_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1721_76_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1721_76_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1721_76_0_end;
        or_result_1721_76 = true;
        or_temp_result_1721_76_0 = true;
    }
    or_event_1721_76_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1721_76_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1721_76
    bool or_temp_result_1721_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1721_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1721_76_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1721_76_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1721_76_1_end;
        or_result_1721_76 = true;
        or_temp_result_1721_76_1 = true;
        or_event_1721_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1721_76_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1721_76) goto or_final_or_event_1721_76_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1721_76_0 || or_temp_result_1721_76_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1721_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1721_76_1_end: ;
}
void Frames::event_func_17060()
{
    // event 1722_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1722_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1722_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1722_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1722_76_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1722_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1722_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1722_76_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1722_76_end: ;
}
void Frames::event_func_17061()
{
    // event 1723_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1723_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1723_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1723_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1723_76_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1723_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1723_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1723_76_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1723_76_end: ;
}
void Frames::event_func_17062()
{
    // event 1724_76
    bool or_result_1724_76 = false;
    bool or_temp_result_1724_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1724_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1724_76_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1724_76_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1724_76_0_end;
        or_result_1724_76 = true;
        or_temp_result_1724_76_0 = true;
    }
    or_event_1724_76_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1724_76_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1724_76
    bool or_temp_result_1724_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1724_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1724_76_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1724_76_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1724_76_1_end;
        or_result_1724_76 = true;
        or_temp_result_1724_76_1 = true;
        or_event_1724_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1724_76_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1724_76) goto or_final_or_event_1724_76_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1724_76_0 || or_temp_result_1724_76_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1724_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1724_76_1_end: ;
}
void Frames::event_func_17063()
{
    // event 1725_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1725_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1725_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1725_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1725_76_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1725_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1725_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1725_76_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1725_76_end: ;
}
void Frames::event_func_17064()
{
    // event 1726_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1726_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1726_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1726_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1726_76_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1726_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1726_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1726_76_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1726_76_end: ;
}
void Frames::event_func_17065()
{
    // event 1727_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1727_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1727_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1727_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1727_76_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1727_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1727_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1727_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1727_76_end: ;
}
void Frames::event_func_17066()
{
    // event 1728_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1728_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1728_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1728_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1728_76_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1728_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1728_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1728_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
    }
    event_1728_76_end: ;
}
void Frames::event_func_17067()
{
    // event 1729_76
    bool or_result_1729_76 = false;
    bool or_temp_result_1729_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1729_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1729_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1729_76_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1729_76_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1729_76_0_end;
        or_result_1729_76 = true;
        or_temp_result_1729_76_0 = true;
    }
    or_event_1729_76_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1729_76_0) {
        npcshellduck_533_instances.save_selection();
    }
    // event 1729_76
    bool or_temp_result_1729_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1729_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1729_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1729_76_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1729_76_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1729_76_1_end;
        or_result_1729_76 = true;
        or_temp_result_1729_76_1 = true;
        or_event_1729_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1729_76_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1729_76) goto or_final_or_event_1729_76_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1729_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1729_76_0 || or_temp_result_1729_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1729_76_1_end: ;
}
void Frames::event_func_17068()
{
    // event 1730_76
    bool or_result_1730_76 = false;
    bool or_temp_result_1730_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1730_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1730_76_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1730_76_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1730_76_0_end;
        or_result_1730_76 = true;
        or_temp_result_1730_76_0 = true;
    }
    or_event_1730_76_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1730_76_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1730_76
    bool or_temp_result_1730_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1730_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1730_76_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1730_76_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1730_76_1_end;
        or_result_1730_76 = true;
        or_temp_result_1730_76_1 = true;
        or_event_1730_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1730_76_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1730_76) goto or_final_or_event_1730_76_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1730_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1730_76_0 || or_temp_result_1730_76_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1730_76_1_end: ;
}
void Frames::event_func_17069()
{
    // event 1731_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1731_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1731_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1731_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_direction()%math_helper%16) == (0))) goto event_1731_76_end;
        if (!media.is_channel_playing(20-1)) goto event_1731_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1731_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1731_76_end: ;
}
void Frames::event_func_17070()
{
    // event 1732_76
    bool or_result_1732_76 = false;
    bool or_temp_result_1732_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1732_76_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1732_76_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1732_76_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1732_76_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1732_76_0_end;
        or_result_1732_76 = true;
        or_temp_result_1732_76_0 = true;
    }
    or_event_1732_76_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1732_76_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1732_76
    bool or_temp_result_1732_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1732_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1732_76_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1732_76_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1732_76_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1732_76_1_end;
        or_result_1732_76 = true;
        or_temp_result_1732_76_1 = true;
        or_event_1732_76_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1732_76_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1732_76) goto or_final_or_event_1732_76_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1732_76_0 || or_temp_result_1732_76_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1732_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1732_76_1_end: ;
}
void Frames::event_func_17071()
{
    // event 1733_76
    {
        if (!(group_main_engine_1)) goto event_1733_76_end;
        if (!((global_values->get(27)) == (1))) goto event_1733_76_end;
        if (not_always_1733_76 > loop_count) {
            not_always_1733_76 = loop_count + 2;
            goto event_1733_76_end;
        }
        not_always_1733_76 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1733_76_end: ;
}
void Frames::event_func_17072()
{
    // event 1734_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1734_76_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1734_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1734_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1734_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1734_76_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1734_76_end: ;
}
void Frames::event_func_17073()
{
    // event 1735_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1735_76_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1735_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1735_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1735_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1735_76_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1735_76_end: ;
}
void Frames::event_func_17074()
{
    // event 1736_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1736_76_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1736_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1736_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1736_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1736_76_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1736_76_end: ;
}
void Frames::event_func_17075()
{
    // event 1737_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1737_76_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1737_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1737_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1737_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1737_76_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1737_76_end: ;
}
void Frames::event_func_17076()
{
    // event 1738_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1738_76_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1738_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1738_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1738_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1738_76_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1738_76_end: ;
}
void Frames::event_func_17077()
{
    // event 1739_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1739_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1739_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1739_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1739_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1739_76_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1739_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1739_76_end: ;
}
void Frames::event_func_17078()
{
    // event 1740_76
    bool or_result_1740_76 = false;
    bool or_temp_result_1740_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1740_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1740_76_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1740_76_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1740_76_0_end;
        or_result_1740_76 = true;
        or_temp_result_1740_76_0 = true;
    }
    or_event_1740_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1740_76_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1740_76
    bool or_temp_result_1740_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1740_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1740_76_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1740_76_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1740_76_1_end;
        or_result_1740_76 = true;
        or_temp_result_1740_76_1 = true;
        or_event_1740_76_1_end: ;
        if (or_temp_result_1740_76_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1740_76) goto or_final_or_event_1740_76_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1740_76_0 || or_temp_result_1740_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1740_76_0 || or_temp_result_1740_76_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1740_76_1_end: ;
}
void Frames::event_func_17079()
{
    // event 1741_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1741_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1741_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1741_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1741_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1741_76_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1741_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1741_76_end: ;
}
void Frames::event_func_17080()
{
    // event 1742_76
    bool or_result_1742_76 = false;
    bool or_temp_result_1742_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1742_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1742_76_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1742_76_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1742_76_0_end;
        or_result_1742_76 = true;
        or_temp_result_1742_76_0 = true;
    }
    or_event_1742_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1742_76_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1742_76
    bool or_temp_result_1742_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1742_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1742_76_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1742_76_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1742_76_1_end;
        or_result_1742_76 = true;
        or_temp_result_1742_76_1 = true;
        or_event_1742_76_1_end: ;
        if (or_temp_result_1742_76_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1742_76) goto or_final_or_event_1742_76_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1742_76_0 || or_temp_result_1742_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1742_76_0 || or_temp_result_1742_76_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1742_76_1_end: ;
}
void Frames::event_func_17081()
{
    // event 1743_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1743_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1743_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1743_76_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1743_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1743_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1743_76_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1743_76_end: ;
}
void Frames::event_func_17082()
{
    // event 1744_76
    bool or_result_1744_76 = false;
    bool or_temp_result_1744_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1744_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1744_76_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1744_76_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1744_76_0_end;
        or_result_1744_76 = true;
        or_temp_result_1744_76_0 = true;
    }
    or_event_1744_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1744_76_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1744_76
    bool or_temp_result_1744_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1744_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1744_76_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1744_76_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1744_76_1_end;
        or_result_1744_76 = true;
        or_temp_result_1744_76_1 = true;
        or_event_1744_76_1_end: ;
        if (or_temp_result_1744_76_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1744_76) goto or_final_or_event_1744_76_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1744_76_0 || or_temp_result_1744_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1744_76_0 || or_temp_result_1744_76_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1744_76_1_end: ;
}
void Frames::event_func_17083()
{
    // event 1745_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1745_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1745_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1745_76_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1745_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1745_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1745_76_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1745_76_end: ;
}
void Frames::event_func_17084()
{
    // event 1746_76
    bool or_result_1746_76 = false;
    bool or_temp_result_1746_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1746_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1746_76_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1746_76_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1746_76_0_end;
        or_result_1746_76 = true;
        or_temp_result_1746_76_0 = true;
    }
    or_event_1746_76_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1746_76_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1746_76
    bool or_temp_result_1746_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1746_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1746_76_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1746_76_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1746_76_1_end;
        or_result_1746_76 = true;
        or_temp_result_1746_76_1 = true;
        or_event_1746_76_1_end: ;
        if (or_temp_result_1746_76_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1746_76) goto or_final_or_event_1746_76_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1746_76_0 || or_temp_result_1746_76_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1746_76_0 || or_temp_result_1746_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1746_76_1_end: ;
}
void Frames::event_func_17085()
{
    // event 1747_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1747_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1747_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1747_76_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1747_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1747_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1747_76_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1747_76_end: ;
}
void Frames::event_func_17086()
{
    // event 1748_76
    bool or_result_1748_76 = false;
    bool or_temp_result_1748_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1748_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1748_76_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1748_76_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1748_76_0_end;
        or_result_1748_76 = true;
        or_temp_result_1748_76_0 = true;
    }
    or_event_1748_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1748_76_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1748_76
    bool or_temp_result_1748_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1748_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1748_76_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1748_76_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1748_76_1_end;
        or_result_1748_76 = true;
        or_temp_result_1748_76_1 = true;
        or_event_1748_76_1_end: ;
        if (or_temp_result_1748_76_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1748_76) goto or_final_or_event_1748_76_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1748_76_0 || or_temp_result_1748_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1748_76_0 || or_temp_result_1748_76_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1748_76_1_end: ;
}
void Frames::event_func_17087()
{
    // event 1749_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1749_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1749_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1749_76_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1749_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1749_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1749_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1749_76_end: ;
}
void Frames::event_func_17088()
{
    // event 1750_76
    bool or_result_1750_76 = false;
    bool or_temp_result_1750_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1750_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1750_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1750_76_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1750_76_0_end;
        or_result_1750_76 = true;
        or_temp_result_1750_76_0 = true;
    }
    or_event_1750_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1750_76_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1750_76
    bool or_temp_result_1750_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1750_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1750_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1750_76_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1750_76_1_end;
        or_result_1750_76 = true;
        or_temp_result_1750_76_1 = true;
        or_event_1750_76_1_end: ;
        if (or_temp_result_1750_76_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1750_76) goto or_final_or_event_1750_76_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1750_76_0 || or_temp_result_1750_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1750_76_0 || or_temp_result_1750_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1750_76_1_end: ;
}
void Frames::event_func_17089()
{
    // event 1751_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1751_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1751_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1751_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(5))) goto event_1751_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1751_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1751_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1751_76_end: ;
}
void Frames::event_func_17090()
{
    // event 1752_76
    bool or_result_1752_76 = false;
    bool or_temp_result_1752_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1752_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1752_76_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1752_76_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1752_76_0_end;
        or_result_1752_76 = true;
        or_temp_result_1752_76_0 = true;
    }
    or_event_1752_76_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1752_76_0) {
        npcserpentine_947_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1752_76
    bool or_temp_result_1752_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1752_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1752_76_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1752_76_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1752_76_1_end;
        or_result_1752_76 = true;
        or_temp_result_1752_76_1 = true;
        or_event_1752_76_1_end: ;
        if (or_temp_result_1752_76_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1752_76) goto or_final_or_event_1752_76_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1752_76_0 || or_temp_result_1752_76_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1752_76_0 || or_temp_result_1752_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1752_76_1_end: ;
}
void Frames::event_func_17091()
{
    // event 1754_76
    {
        if (!(group_main_engine_1)) goto event_1754_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1754_76_end: ;
}
void Frames::event_func_17092()
{
    // event 1764_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1764_76_end;
            group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1 = false;
    
    }
    event_1764_76_end: ;
}
void Frames::event_func_17093()
{
    // event 1765_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1765_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (1))) goto event_1765_76_end;
        if (!group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1) {
            group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1 = true;
        }
    }
    event_1765_76_end: ;
}
void Frames::event_func_17094()
{
    // event 1766_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1766_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1766_76_end;
        if (!group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1) {
            group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1 = true;
        }
    }
    event_1766_76_end: ;
}
void Frames::event_func_17095()
{
    // event 1767_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1767_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (3))) goto event_1767_76_end;
        if (!group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1) {
            group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1 = true;
        }
    }
    event_1767_76_end: ;
}
void Frames::event_func_17096()
{
    // event 1768_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1768_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (4))) goto event_1768_76_end;
        if (!group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1) {
            group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1 = true;
        }
    }
    event_1768_76_end: ;
}
void Frames::event_func_17097()
{
    // event 1769_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1769_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (5))) goto event_1769_76_end;
        if (!group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1) {
            group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1 = true;
        }
    }
    event_1769_76_end: ;
}
void Frames::event_func_17098()
{
    // event 1770_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1770_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1770_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1770_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1770_76_end: ;
}
void Frames::event_func_17099()
{
    // event 1771_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1771_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1771_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1771_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1771_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1771_76_0_end: ;
    }
    event_1771_76_end: ;
}
void Frames::event_func_17100()
{
    // event 1772_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1772_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1772_76_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1772_76_end;
        FrameObject * single_instance_1772_76_0; single_instance_1772_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1772_76_0 == NULL)
                    single_instance_1772_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1772_76_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1772_76_0))->stop_animation();
        ((Active*)((Active*)single_instance_1772_76_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1772_76_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1772_76_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1772_76_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1772_76_0)->alterables->values.get(2))*-26);
        ((Active*)single_instance_1772_76_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        ((Active*)((Active*)single_instance_1772_76_0))->alterables->values.set(3, randrange(360));
        ((Active*)((Active*)single_instance_1772_76_0))->set_angle(randrange(360), 0);
    }
    event_1772_76_end: ;
}
void Frames::event_func_17101()
{
    // event 1773_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1773_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1773_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 0.7);
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*1.3);
            ((Active*)*it)->alterables->values.add(3, 8);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+4, 0);
        }
    }
    event_1773_76_end: ;
}
void Frames::event_func_17102()
{
    // event 1774_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1774_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1774_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1774_76_end: ;
}
void Frames::event_func_17103()
{
    // event 1775_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1775_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (15))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1775_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1775_76_0; single_instance_1775_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1775_76_0 == NULL)
                    single_instance_1775_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1775_76_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1775_76_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1775_76_0))->set_direction(8);
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
    }
    event_1775_76_end: ;
}
void Frames::event_func_17104()
{
    // event 1776_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1776_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1776_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1776_76_end: ;
}
void Frames::event_func_17105()
{
    // event 1777_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1777_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1777_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1777_76_end: ;
}
void Frames::event_func_17106()
{
    // event 1778_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1778_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0-((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1778_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1778_76_end: ;
}
void Frames::event_func_17107()
{
    // event 1779_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1779_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0-((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1779_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1779_76_end: ;
}
void Frames::event_func_17108()
{
    // event 1780_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1780_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1780_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1780_76_end: ;
}
void Frames::event_func_17109()
{
    // event 1781_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1)) goto event_1781_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1781_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1781_76_end: ;
}
void Frames::event_func_17110()
{
    // event 1782_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1)) goto event_1782_76_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1782_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1782_76_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1782_76_end: ;
}
void Frames::event_func_17111()
{
    // event 1783_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1)) goto event_1783_76_end;
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflameback_315_instances.has_selection()) goto event_1783_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1783_76_end;
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1783_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1783_76_0_end: ;
    }
    event_1783_76_end: ;
}
void Frames::event_func_17112()
{
    // event 1784_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1)) goto event_1784_76_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1784_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1784_76_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1784_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1784_76_0_end: ;
    }
    event_1784_76_end: ;
}
void Frames::event_func_17113()
{
    // event 1785_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1)) goto event_1785_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1785_76_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
    }
    event_1785_76_end: ;
}
void Frames::event_func_17114()
{
    // event 1786_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1)) goto event_1786_76_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1786_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1786_76_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1786_76_end: ;
}
void Frames::event_func_17115()
{
    // event 1787_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1)) goto event_1787_76_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1787_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1787_76_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1787_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1787_76_0_end: ;
    }
    event_1787_76_end: ;
}
void Frames::event_func_17116()
{
    // event 1788_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1788_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1788_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1788_76_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1788_76_end: ;
}
void Frames::event_func_17117()
{
    // event 1789_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1789_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1789_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1789_76_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1789_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1789_76_0_end: ;
    }
    event_1789_76_end: ;
}
void Frames::event_func_17118()
{
    // event 1790_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1790_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1790_76_end;
        if (not_always_1790_76 > loop_count) {
            not_always_1790_76 = loop_count + 2;
            goto event_1790_76_end;
        }
        not_always_1790_76 = loop_count + 2;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+90, 0);
        }
    }
    event_1790_76_end: ;
}
void Frames::event_func_17119()
{
    // event 1791_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1791_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1791_76_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1791_76_end;
        FrameObject * single_instance_1791_76_0; single_instance_1791_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwater_318_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1791_76_0 == NULL)
                    single_instance_1791_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1791_76_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1791_76_0))->stop_animation();
        ((Active*)((Active*)single_instance_1791_76_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1791_76_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1791_76_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1791_76_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1791_76_0)->alterables->values.get(2))*26);
        ((Active*)single_instance_1791_76_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        {
            ((Active*)single_instance_1791_76_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_1791_76_end: ;
}
void Frames::event_func_17120()
{
    // event 1792_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1792_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1792_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+3);
        }
    }
    event_1792_76_end: ;
}
void Frames::event_func_17121()
{
    // event 1793_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1793_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1793_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1793_76_end: ;
}
void Frames::event_func_17122()
{
    // event 1794_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1)) goto event_1794_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-10-sin_deg(((Active*)*it)->alterables->values.get(2))*24))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1794_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1794_76_end: ;
}
void Frames::event_func_17123()
{
    // event 1795_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1795_76_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1795_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1795_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1795_76_end: ;
}
void Frames::event_func_17124()
{
    // event 1796_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1796_76_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1796_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1796_76_end;
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1796_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1796_76_0_end: ;
    }
    event_1796_76_end: ;
}
void Frames::event_func_17125()
{
    // event 1797_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1797_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1797_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1797_76_end: ;
}
void Frames::event_func_17126()
{
    // event 1798_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1798_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1798_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1798_76_end: ;
}
void Frames::event_func_17127()
{
    // event 1799_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1799_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0-((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1799_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1799_76_end: ;
}
void Frames::event_func_17128()
{
    // event 1800_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1800_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0-((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1800_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1800_76_end: ;
}
void Frames::event_func_17129()
{
    // event 1801_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1801_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1801_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1801_76_end: ;
}
void Frames::event_func_17130()
{
    // event 1802_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1 && group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1)) goto event_1802_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1802_76_end: ;
}
void Frames::event_func_17131()
{
    // event 1803_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1803_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (0))) goto event_1803_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1803_76_end;
        if (not_always_1803_76 > loop_count) {
            not_always_1803_76 = loop_count + 2;
            goto event_1803_76_end;
        }
        not_always_1803_76 = loop_count + 2;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1803_76_end: ;
}
void Frames::event_func_17132()
{
    // event 1804_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1804_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) > (0))) goto event_1804_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()-10+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1804_76_end: ;
}
void Frames::event_func_17133()
{
    // event 1805_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1805_76_end;
        {
            player_389_instances.clear_selection();
            for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            playerskinsash_418_instances.clear_selection();
            for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()+cos_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_layer(((Active*)get_single(player_389_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            ObjectIterator other_it(playerskinsash_418_instances);
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (other_it.end()) goto action_1805_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1805_76_0_end: ;
    }
    event_1805_76_end: ;
}
void Frames::event_func_17134()
{
    // event 1806_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1806_76_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1806_76_end;
        if (not_always_1806_76 > loop_count) {
            not_always_1806_76 = loop_count + 2;
            goto event_1806_76_end;
        }
        not_always_1806_76 = loop_count + 2;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1806_76_end: ;
}
void Frames::event_func_17135()
{
    // event 1807_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1807_76_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1807_76_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1807_76_end: ;
}
