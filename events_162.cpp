#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12737()
{
    // event 1760_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1760_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(1, 1);
    }
    event_1760_58_end: ;
}
void Frames::event_func_12738()
{
    // event 1761_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1761_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1761_58_end;
        if (once_condition_1761_58) goto event_1761_58_end;
        once_condition_1761_58 = true;
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.unlock(10-1);
        media.unlock(11-1);
        media.stop_channel(10-1);
        media.stop_channel(11-1);
        enemyninja_3190_instances.clear_selection();
        for (ObjectIterator it(enemyninja_3190_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.stop_sample(SOUND_CROWD_CHEER_365);
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
    }
    event_1761_58_end: ;
}
void Frames::event_func_12739()
{
    // event 1762_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1762_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1762_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1762_58_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
    }
    event_1762_58_end: ;
}
void Frames::event_func_12740()
{
    // event 1763_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1763_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1763_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(12300);
            ((Active*)*it)->set_y(730);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(12350);
            ((Active*)*it)->set_y(730);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(12150);
            ((Active*)*it)->set_y(730);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 12250);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 670);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1763_58_end: ;
}
void Frames::event_func_12741()
{
    // event 1764_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1764_58_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1764_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1764_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1764_58_end: ;
}
void Frames::event_func_12742()
{
    // event 1765_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1765_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1765_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (1))) goto event_1765_58_end;
        enemyninja_3190_instances.clear_selection();
        for (ObjectIterator it(enemyninja_3190_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyninja_3190_instances.has_selection()) goto event_1765_58_end;
        for (ObjectIterator it(enemyninja_3190_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1765_58_end: ;
}
void Frames::event_func_12743()
{
    // event 1766_58
    bool or_result_1766_58 = false;
    bool or_temp_result_1766_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1766_58_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1766_58_0_end;
        or_result_1766_58 = true;
        or_temp_result_1766_58_0 = true;
    }
    or_event_1766_58_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1766_58_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1766_58
    bool or_temp_result_1766_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1766_58_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1766_58_1_end;
        or_result_1766_58 = true;
        or_temp_result_1766_58_1 = true;
    }
    or_event_1766_58_1_end: ;
    if (or_temp_result_1766_58_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1766_58
    bool or_temp_result_1766_58_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1766_58_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1766_58_2_end;
        or_result_1766_58 = true;
        or_temp_result_1766_58_2 = true;
        or_event_1766_58_2_end: ;
        if (or_temp_result_1766_58_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1766_58) goto or_final_or_event_1766_58_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1766_58_0 || or_temp_result_1766_58_1 || or_temp_result_1766_58_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1766_58_2_end: ;
}
void Frames::event_func_12744()
{
    // event 1767_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1767_58_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1767_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1767_58_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1767_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1767_58_end: ;
}
void Frames::event_func_12745()
{
    // event 1768_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1768_58_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1768_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1768_58_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1768_58_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
    }
    event_1768_58_end: ;
}
void Frames::event_func_12746()
{
    // event 1769_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1769_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (2))) goto event_1769_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1769_58_end: ;
}
void Frames::event_func_12747()
{
    // event 1770_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1770_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (2))) goto event_1770_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinspade_419_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1770_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
    }
    event_1770_58_end: ;
}
void Frames::event_func_12748()
{
    // event 1771_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1771_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (3))) goto event_1771_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
        }
    }
    event_1771_58_end: ;
}
void Frames::event_func_12749()
{
    // event 1772_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1772_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (3))) goto event_1772_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (10))) goto event_1772_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(48);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1772_58_end: ;
}
void Frames::event_func_12750()
{
    // event 1773_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1773_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1773_58_end;
        if (!(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->flags.is_off(3))) goto event_1773_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1773_58_end: ;
}
void Frames::event_func_12751()
{
    // event 1774_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1774_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1774_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)%math_helper%2) == (0))) goto event_1774_58_end;
        effectsdust01_332_instances.empty_selection();
        // select single: false true false
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 16), parent->layer);
                effectsdust01_332_instances.add_back();
            }
        }
        // select single: false true true
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarol_445_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 16), parent->layer);
                effectsdust01_332_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10+randrange(21));
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1774_58_end: ;
}
void Frames::event_func_12752()
{
    // event 1775_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1775_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1775_58_end;
        if (!(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->flags.is_on(3))) goto event_1775_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1775_58_end: ;
}
void Frames::event_func_12753()
{
    // event 1776_58
    bool or_result_1776_58 = false;
    bool or_temp_result_1776_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1776_58_0_end;
        if (!(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->flags.is_off(3))) goto or_event_1776_58_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1776_58_0_end;
        or_result_1776_58 = true;
        or_temp_result_1776_58_0 = true;
    }
    or_event_1776_58_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1776_58_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1776_58
    bool or_temp_result_1776_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1776_58_1_end;
        if (!(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->flags.is_on(3))) goto or_event_1776_58_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1776_58_1_end;
        or_result_1776_58 = true;
        or_temp_result_1776_58_1 = true;
        or_event_1776_58_1_end: ;
        if (or_temp_result_1776_58_1) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1776_58) goto or_final_or_event_1776_58_1_end;
        playerskincarol_445_instances.clear_selection();
        if (or_temp_result_1776_58_0 || or_temp_result_1776_58_1) {
            playerskincarol_445_instances.restore_selection();
        }
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->flags.toggle(3);
    }
    or_final_or_event_1776_58_1_end: ;
}
void Frames::event_func_12754()
{
    // event 1777_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1777_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1777_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)%math_helper%7) == (0))) goto event_1777_58_end;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_1777_58_end: ;
}
void Frames::event_func_12755()
{
    // event 1778_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1778_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1778_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)%math_helper%9) == (3))) goto event_1778_58_end;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_1778_58_end: ;
}
void Frames::event_func_12756()
{
    // event 1779_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1779_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1779_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (120))) goto event_1779_58_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-10, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1779_58_end: ;
}
void Frames::event_func_12757()
{
    // event 1780_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1780_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1780_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (120))) goto event_1780_58_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1780_58_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
        }
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(27);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1780_58_end: ;
}
void Frames::event_func_12758()
{
    // event 1781_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1781_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (5))) goto event_1781_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) < (6))) goto event_1781_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
        }
    }
    event_1781_58_end: ;
}
void Frames::event_func_12759()
{
    // event 1782_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1782_58_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1782_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (2))) goto event_1782_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (5))) goto event_1782_58_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1782_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1782_58_end: ;
}
void Frames::event_func_12760()
{
    // event 1783_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1783_58_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1783_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (5))) goto event_1783_58_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1783_58_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
    }
    event_1783_58_end: ;
}
void Frames::event_func_12761()
{
    // event 1784_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1784_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (6))) goto event_1784_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) == (25))) goto event_1784_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1784_58_end: ;
}
void Frames::event_func_12762()
{
    // event 1785_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1785_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (6))) goto event_1785_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (100))) goto event_1785_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1785_58_end: ;
}
void Frames::event_func_12763()
{
    // event 1786_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1786_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (8))) goto event_1786_58_end;
        if (not_always_1786_58 > loop_count) {
            not_always_1786_58 = loop_count + 2;
            goto event_1786_58_end;
        }
        not_always_1786_58 = loop_count + 2;
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
    event_1786_58_end: ;
}
void Frames::event_func_12764()
{
    // event 1787_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1787_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (8))) goto event_1787_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1787_58_end: ;
}
void Frames::event_func_12765()
{
    // event 1788_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1788_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (8))) goto event_1788_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1788_58_end;
        next_frame = 8 + 0;    
    
    }
    event_1788_58_end: ;
}
void Frames::event_func_12766()
{
    // event 1789_58
    {
        if (!(group_main_engine_1)) goto event_1789_58_end;
        if (!((global_values->get(4)) < (6))) goto event_1789_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5446))) goto event_1789_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5646))) goto event_1789_58_end;
        global_values->set(4, 6);
        global_values->set(5, 5546);
        global_values->set(6, 1520);
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
    event_1789_58_end: ;
}
void Frames::event_func_12767()
{
    // event 1790_58
    {
        if (!(group_main_engine_1)) goto event_1790_58_end;
        if (!((global_values->get(4)) < (7))) goto event_1790_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11460))) goto event_1790_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11560))) goto event_1790_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (400))) goto event_1790_58_end;
        global_values->set(4, 7);
        global_values->set(5, 11500);
        global_values->set(6, 160);
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
    event_1790_58_end: ;
}
void Frames::event_func_12768()
{
    // event 1793_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1793_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_off(2))) goto event_1793_58_end;
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_x()+cos_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3))*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*32);
            ((Active*)*it)->set_y(get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3))*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*-32, ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()-((Active*)*it)->alterables->values.get(0)*10));
        }
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_x()+cos_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3))*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*32);
            ((Active*)*it)->set_y(get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3))*((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*-32, ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()-50));
        }
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(0));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->get_x()-((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(0));
        }
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index));
            if (parent == NULL) goto pos_end_1793_58_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1793_58_0: ;
        }
        ((Active*)get_instance(bossdoor_3191_instances))->set_x(((Active*)get_instance(bossdoor_3191_instances))->alterables->values.get(0)+((Active*)get_instance(bossdoor_3191_instances))->alterables->values.get(1));
    }
    event_1793_58_end: ;
}
void Frames::event_func_12769()
{
    // event 1794_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1794_58_end;
        if (!(((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.is_off(0))) goto event_1794_58_end;
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bossdoor_3191_instances))->alterables->values.get(1)-12, 0));
    }
    event_1794_58_end: ;
}
void Frames::event_func_12770()
{
    // event 1795_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1795_58_end;
        if (!(((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.is_on(0))) goto event_1795_58_end;
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossdoor_3191_instances))->alterables->values.get(1)+12, 112));
    }
    event_1795_58_end: ;
}
void Frames::event_func_12771()
{
    // event 1796_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1796_58_end;
        if (!(((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.is_off(0))) goto event_1796_58_end;
        if (!((((Active*)get_instance(bossdoor_3191_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1796_58_end;
        if (!((((Active*)get_instance(bossdoor_3191_instances))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-80))) goto event_1796_58_end;
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.enable(0);
    }
    event_1796_58_end: ;
}
void Frames::event_func_12772()
{
    // event 1797_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1797_58_end;
        if (!(((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.is_on(0))) goto event_1797_58_end;
        if (!((((Active*)get_instance(bossdoor_3191_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-80))) goto event_1797_58_end;
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.disable(0);
    }
    event_1797_58_end: ;
}
void Frames::event_func_12773()
{
    // event 1798_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1798_58_end;
        if (!((global_values->get(4)) < (5))) goto event_1798_58_end;
        if (!(((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.is_on(0))) goto event_1798_58_end;
        if (!((((Active*)get_instance(bossdoor_3191_instances))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1798_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1798_58_end;
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->flags.disable(0);
        if (!group_main_engine_level_specific_methods_bosses_boss_prepare_1) {
            group_main_engine_level_specific_methods_bosses_boss_prepare_1 = true;
        }
    }
    event_1798_58_end: ;
}
void Frames::event_func_12774()
{
    // event 1799_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prepare_1)) goto event_1799_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_off(2))) goto event_1799_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1799_58_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(get_min(frame_top()+global_values->get(16), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-4), ((Active*)get_instance(bossdoor_3191_instances))->get_y()+16));
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.add(4, 1);
    }
    event_1799_58_end: ;
}
void Frames::event_func_12775()
{
    // event 1800_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prepare_1)) goto event_1800_58_end;
        if (!((((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(4)) == (20))) goto event_1800_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.add(4, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) {
            group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1 = true;
        }
    }
    event_1800_58_end: ;
}
void Frames::event_func_12776()
{
    // event 1801_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1801_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(1, (((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+355)%math_helper%360);
    }
    event_1801_58_end: ;
}
void Frames::event_func_12777()
{
    // event 1802_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1802_58_end;
        if (!((((Active*)get_instance(bosscrystalbasherhead_3185_instances, default_active_instance))->alterables->values.get(3)%math_helper%2) == (0))) goto event_1802_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)+1, 20));
    }
    event_1802_58_end: ;
}
void Frames::event_func_12778()
{
    // event 1803_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1803_58_end;
        if (!((((Active*)get_instance(bosscrystalbasherhead_3185_instances, default_active_instance))->alterables->values.get(3)%math_helper%2) == (0))) goto event_1803_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (90))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1803_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1803_58_end: ;
}
void Frames::event_func_12779()
{
    // event 1804_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1804_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()-50))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1804_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1804_58_end: ;
}
void Frames::event_func_12780()
{
    // event 1805_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1805_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(bosscrystalbasherbase_3193_instances))->get_y()-50))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1805_58_end;
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosscrystalbasherhead_3185_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 50), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -36, parent->y + 50), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 36, parent->y + 50), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1805_58_end: ;
}
void Frames::event_func_12781()
{
    // event 1806_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1806_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1806_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1806_58_end: ;
}
void Frames::event_func_12782()
{
    // event 1807_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1807_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1807_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1807_58_0; single_instance_1807_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscrystalspike_3183_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -48, parent->y + -48), parent->layer);
                if (single_instance_1807_58_0 == NULL)
                    single_instance_1807_58_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1807_58_end: ;
}
void Frames::event_func_12783()
{
    // event 1808_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1808_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1808_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1808_58_0; single_instance_1808_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscrystalspike_3183_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 48, parent->y + 48), parent->layer);
                if (single_instance_1808_58_0 == NULL)
                    single_instance_1808_58_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1808_58_end: ;
}
void Frames::event_func_12784()
{
    // event 1809_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1809_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1809_58_end;
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1809_58_end: ;
}
void Frames::event_func_12785()
{
    // event 1810_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1810_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1810_58_end;
        FrameObject * single_instance_1810_58_0; single_instance_1810_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscrystalspike2_3184_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 48, parent->y + -48), parent->layer);
                if (single_instance_1810_58_0 == NULL)
                    single_instance_1810_58_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1810_58_end: ;
}
void Frames::event_func_12786()
{
    // event 1811_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1811_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1811_58_end;
        FrameObject * single_instance_1811_58_0; single_instance_1811_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscrystalspike2_3184_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -48, parent->y + 48), parent->layer);
                if (single_instance_1811_58_0 == NULL)
                    single_instance_1811_58_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1811_58_end: ;
}
void Frames::event_func_12787()
{
    // event 1812_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1812_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1812_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)-3, 0));
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1812_58_end: ;
}
void Frames::event_func_12788()
{
    // event 1813_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1813_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1813_58_end;
        media.play_id(SOUND_DRILL_ON_74, -1, 1);
    }
    event_1813_58_end: ;
}
void Frames::event_func_12789()
{
    // event 1814_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1814_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1814_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
    }
    event_1814_58_end: ;
}
void Frames::event_func_12790()
{
    // event 1815_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1815_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (90))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1815_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 100));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 100));
        }
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1815_58_end: ;
}
void Frames::event_func_12791()
{
    // event 1816_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1816_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (150))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1816_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, -100));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, -100));
        }
    }
    event_1816_58_end: ;
}
void Frames::event_func_12792()
{
    // event 1817_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1817_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (150))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1817_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 0));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 0));
        }
    }
    event_1817_58_end: ;
}
void Frames::event_func_12793()
{
    // event 1818_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1818_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1818_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1818_58_end: ;
}
void Frames::event_func_12794()
{
    // event 1819_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1819_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1819_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)-3, 0));
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1819_58_end: ;
}
void Frames::event_func_12795()
{
    // event 1820_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1820_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1820_58_end;
        media.play_id(SOUND_DRILL_ON_74, -1, 1);
    }
    event_1820_58_end: ;
}
void Frames::event_func_12796()
{
    // event 1821_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1821_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1821_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
    }
    event_1821_58_end: ;
}
void Frames::event_func_12797()
{
    // event 1822_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1822_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (90))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1822_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 100));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, -100));
        }
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1822_58_end: ;
}
void Frames::event_func_12798()
{
    // event 1823_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1823_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (150))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1823_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, -100));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 100));
        }
    }
    event_1823_58_end: ;
}
void Frames::event_func_12799()
{
    // event 1824_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1824_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (150))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1824_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, 0));
        }
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 0));
        }
    }
    event_1824_58_end: ;
}
void Frames::event_func_12800()
{
    // event 1825_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1825_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1825_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1825_58_end: ;
}
void Frames::event_func_12801()
{
    // event 1826_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1826_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1826_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1826_58_end: ;
}
void Frames::event_func_12802()
{
    // event 1827_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1827_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1827_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)+1, 90));
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3)-0.2, 10));
    }
    event_1827_58_end: ;
}
void Frames::event_func_12803()
{
    // event 1828_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1828_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1828_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)-2, 30));
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3)+0.4, 20));
    }
    event_1828_58_end: ;
}
void Frames::event_func_12804()
{
    // event 1829_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1829_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (210))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1829_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1829_58_end: ;
}
void Frames::event_func_12805()
{
    // event 1830_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1830_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1830_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1830_58_end: ;
}
void Frames::event_func_12806()
{
    // event 1831_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1831_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1831_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1831_58_end: ;
}
void Frames::event_func_12807()
{
    // event 1832_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1832_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosscrystalspike_3183_instances, playercharactersensor_383_instances)) goto event_1832_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1832_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1832_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1832_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1832_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1832_58_end: ;
}
void Frames::event_func_12808()
{
    // event 1833_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1833_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosscrystalspike2_3184_instances, playercharactersensor_383_instances)) goto event_1833_58_end;
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1833_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1833_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1833_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1833_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1833_58_end: ;
}
void Frames::event_func_12809()
{
    // event 1834_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1834_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosscrystalbasherhead_3185_instances, playercharactersensor_383_instances)) goto event_1834_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1834_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1834_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1834_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1834_58_end: ;
}
void Frames::event_func_12810()
{
    // event 1835_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1835_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosscrystalbashersegment_3182_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosscrystalbashersegment_3182_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosscrystalbashersegment_3182_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_front();
        }
    }
    event_1835_58_end: ;
}
void Frames::event_func_12811()
{
    // event 1836_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1836_58_end;
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherface_3192_instances.has_selection()) goto event_1836_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1836_58_end;
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 9);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1836_58_end: ;
}
void Frames::event_func_12812()
{
    // event 1837_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1837_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1837_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1837_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+20, 0));
        }
    }
    event_1837_58_end: ;
}
void Frames::event_func_12813()
{
    // event 1838_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1838_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1838_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1838_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-20, 0));
        }
    }
    event_1838_58_end: ;
}
void Frames::event_func_12814()
{
    // event 1839_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1839_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1839_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1839_58_end;
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+20, 0));
        }
    }
    event_1839_58_end: ;
}
void Frames::event_func_12815()
{
    // event 1840_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1840_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1840_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1840_58_end;
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-20, 0));
        }
    }
    event_1840_58_end: ;
}
void Frames::event_func_12816()
{
    // event 1841_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1841_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1841_58_end;
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(1, (((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(1)+355)%math_helper%360);
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(2)-2, 30));
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->values.get(3)+1, 20));
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bosscrystalbasherhead_3185_instances, it.current_index, default_active_instance))->alterables->values.get(4)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1841_58_end: ;
}
void Frames::event_func_12817()
{
    // event 1842_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1842_58_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1842_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1842_58_end;
        FrameObject * single_instance_1842_58_0; single_instance_1842_58_0 = NULL;
        // select single: true false false
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator p_it(bosscrystalbasherface_3192_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1842_58_0 == NULL)
                    single_instance_1842_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1842_58_0))->set_x(((Active*)single_instance_1842_58_0)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1842_58_0))->set_y(((Active*)single_instance_1842_58_0)->get_y()-50+randrange(101));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1842_58_1_end;
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
        dynamic_1842_58_1_end: ;
    }
    event_1842_58_end: ;
}
void Frames::event_func_12818()
{
    // event 1843_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1843_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (120))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1843_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -8);
            ((Active*)*it)->alterables->values.set(23, -8);
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -8);
            ((Active*)*it)->alterables->values.set(23, 8);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -14);
            ((Active*)*it)->alterables->values.set(23, -4);
        }
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->alterables->values.get(0)*-2);
            ((Active*)*it)->alterables->values.set(23, -9+((Active*)*it)->alterables->values.get(0)*3.5);
        }
        ((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.enable(2);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1843_58_end: ;
}
void Frames::event_func_12819()
{
    // event 1844_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1)) goto event_1844_58_end;
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (160))) { it.deselect(); continue; }
        }
        if (!bosscrystalbasherhead_3185_instances.has_selection()) goto event_1844_58_end;
        if (once_condition_1844_58) goto event_1844_58_end;
        once_condition_1844_58 = true;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
            group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        global_values->set(4, 5);
        global_values->set(5, 560);
        global_values->set(6, 170);
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
    }
    event_1844_58_end: ;
}
void Frames::event_func_12820()
{
    // event 1845_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1845_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_on(2))) goto event_1845_58_end;
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
        }
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
        }
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
        }
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
    }
    event_1845_58_end: ;
}
void Frames::event_func_12821()
{
    // event 1846_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1846_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_on(2))) goto event_1846_58_end;
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-150))) { it.deselect(); continue; }
        }
        if (!bosscrystalbashersegment_3182_instances.has_selection()) goto event_1846_58_end;
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1846_58_end: ;
}
void Frames::event_func_12822()
{
    // event 1847_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1847_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_on(2))) goto event_1847_58_end;
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-150))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_3183_instances.has_selection()) goto event_1847_58_end;
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1847_58_end: ;
}
void Frames::event_func_12823()
{
    // event 1848_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1848_58_end;
        if (!(((Active*)get_instance(bosscrystalbasherbase_3193_instances))->alterables->flags.is_on(2))) goto event_1848_58_end;
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-150))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike2_3184_instances.has_selection()) goto event_1848_58_end;
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1848_58_end: ;
}
void Frames::event_func_12824()
{
    // event 1850_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1850_58_end;
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1 = false;
    
    }
    event_1850_58_end: ;
}
void Frames::event_func_12825()
{
    // event 1851_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1851_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1851_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1 = true;
        }
    }
    event_1851_58_end: ;
}
void Frames::event_func_12826()
{
    // event 1852_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1)) goto event_1852_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1852_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 15);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1852_58_end: ;
}
void Frames::event_func_12827()
{
    // event 1853_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1)) goto event_1853_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)*it)->alterables->values.get(4)-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (11900))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1853_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 128);
        }
    }
    event_1853_58_end: ;
}
void Frames::event_func_12828()
{
    // event 1854_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1)) goto event_1854_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)*it)->alterables->values.get(4)-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (12600))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1854_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 128);
        }
    }
    event_1854_58_end: ;
}
void Frames::event_func_12829()
{
    // event 1855_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1)) goto event_1855_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1855_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1855_58_end: ;
}
void Frames::event_func_12830()
{
    // event 1856_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1)) goto event_1856_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (40))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1856_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(10, 9);
            ((Active*)*it)->alterables->values.set(8, -1);
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1856_58_end: ;
}
void Frames::event_func_12831()
{
    // event 1857_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1857_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1857_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = true;
        }
    }
    event_1857_58_end: ;
}
void Frames::event_func_12832()
{
    // event 1858_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1858_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1858_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
        }
    }
    event_1858_58_end: ;
}
void Frames::event_func_12833()
{
    // event 1859_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1859_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1859_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
        }
    }
    event_1859_58_end: ;
}
void Frames::event_func_12834()
{
    // event 1860_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1860_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) != (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1860_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1860_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(5, 3);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1860_58_end: ;
}
void Frames::event_func_12835()
{
    // event 1861_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1861_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (-2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1861_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -2);
        }
    }
    event_1861_58_end: ;
}
void Frames::event_func_12836()
{
    // event 1862_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1862_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1862_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, -5));
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1862_58_end: ;
}
