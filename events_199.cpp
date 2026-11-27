#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15532()
{
    // event 1714_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1714_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1714_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1714_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1714_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1714_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1714_72_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1714_72_end: ;
}
void Frames::event_func_15533()
{
    // event 1715_72
    bool or_result_1715_72 = false;
    bool or_temp_result_1715_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1715_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1715_72_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1715_72_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1715_72_0_end;
        or_result_1715_72 = true;
        or_temp_result_1715_72_0 = true;
    }
    or_event_1715_72_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1715_72_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1715_72
    bool or_temp_result_1715_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1715_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1715_72_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1715_72_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1715_72_1_end;
        or_result_1715_72 = true;
        or_temp_result_1715_72_1 = true;
        or_event_1715_72_1_end: ;
        if (or_temp_result_1715_72_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1715_72) goto or_final_or_event_1715_72_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1715_72_0 || or_temp_result_1715_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1715_72_0 || or_temp_result_1715_72_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1715_72_1_end: ;
}
void Frames::event_func_15534()
{
    // event 1716_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1716_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1716_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1716_72_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1716_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1716_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1716_72_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1716_72_end: ;
}
void Frames::event_func_15535()
{
    // event 1717_72
    bool or_result_1717_72 = false;
    bool or_temp_result_1717_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1717_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1717_72_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1717_72_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1717_72_0_end;
        or_result_1717_72 = true;
        or_temp_result_1717_72_0 = true;
    }
    or_event_1717_72_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1717_72_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1717_72
    bool or_temp_result_1717_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1717_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1717_72_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1717_72_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1717_72_1_end;
        or_result_1717_72 = true;
        or_temp_result_1717_72_1 = true;
        or_event_1717_72_1_end: ;
        if (or_temp_result_1717_72_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1717_72) goto or_final_or_event_1717_72_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1717_72_0 || or_temp_result_1717_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1717_72_0 || or_temp_result_1717_72_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1717_72_1_end: ;
}
void Frames::event_func_15536()
{
    // event 1718_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1718_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1718_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1718_72_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1718_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1718_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1718_72_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1718_72_end: ;
}
void Frames::event_func_15537()
{
    // event 1719_72
    bool or_result_1719_72 = false;
    bool or_temp_result_1719_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1719_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1719_72_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1719_72_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1719_72_0_end;
        or_result_1719_72 = true;
        or_temp_result_1719_72_0 = true;
    }
    or_event_1719_72_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1719_72_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1719_72
    bool or_temp_result_1719_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1719_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1719_72_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1719_72_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1719_72_1_end;
        or_result_1719_72 = true;
        or_temp_result_1719_72_1 = true;
        or_event_1719_72_1_end: ;
        if (or_temp_result_1719_72_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1719_72) goto or_final_or_event_1719_72_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1719_72_0 || or_temp_result_1719_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1719_72_0 || or_temp_result_1719_72_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1719_72_1_end: ;
}
void Frames::event_func_15538()
{
    // event 1720_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1720_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1720_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1720_72_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1720_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1720_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1720_72_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1720_72_end: ;
}
void Frames::event_func_15539()
{
    // event 1721_72
    bool or_result_1721_72 = false;
    bool or_temp_result_1721_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1721_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1721_72_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1721_72_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1721_72_0_end;
        or_result_1721_72 = true;
        or_temp_result_1721_72_0 = true;
    }
    or_event_1721_72_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1721_72_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1721_72
    bool or_temp_result_1721_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1721_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1721_72_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1721_72_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1721_72_1_end;
        or_result_1721_72 = true;
        or_temp_result_1721_72_1 = true;
        or_event_1721_72_1_end: ;
        if (or_temp_result_1721_72_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1721_72) goto or_final_or_event_1721_72_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1721_72_0 || or_temp_result_1721_72_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1721_72_0 || or_temp_result_1721_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1721_72_1_end: ;
}
void Frames::event_func_15540()
{
    // event 1722_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1722_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1722_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1722_72_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1722_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1722_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1722_72_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1722_72_end: ;
}
void Frames::event_func_15541()
{
    // event 1723_72
    bool or_result_1723_72 = false;
    bool or_temp_result_1723_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1723_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1723_72_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1723_72_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1723_72_0_end;
        or_result_1723_72 = true;
        or_temp_result_1723_72_0 = true;
    }
    or_event_1723_72_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1723_72_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1723_72
    bool or_temp_result_1723_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1723_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1723_72_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1723_72_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1723_72_1_end;
        or_result_1723_72 = true;
        or_temp_result_1723_72_1 = true;
        or_event_1723_72_1_end: ;
        if (or_temp_result_1723_72_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1723_72) goto or_final_or_event_1723_72_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1723_72_0 || or_temp_result_1723_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1723_72_0 || or_temp_result_1723_72_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1723_72_1_end: ;
}
void Frames::event_func_15542()
{
    // event 1724_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1724_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1724_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1724_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_1724_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1724_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1724_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_1724_72_end: ;
}
void Frames::event_func_15543()
{
    // event 1725_72
    bool or_result_1725_72 = false;
    bool or_temp_result_1725_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1725_72_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1725_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1725_72_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1725_72_0_end;
        or_result_1725_72 = true;
        or_temp_result_1725_72_0 = true;
    }
    or_event_1725_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1725_72_0) {
        brevon_3683_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1725_72
    bool or_temp_result_1725_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1725_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1725_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1725_72_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1725_72_1_end;
        or_result_1725_72 = true;
        or_temp_result_1725_72_1 = true;
        or_event_1725_72_1_end: ;
        if (or_temp_result_1725_72_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1725_72) goto or_final_or_event_1725_72_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1725_72_0 || or_temp_result_1725_72_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_1725_72_0 || or_temp_result_1725_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1725_72_1_end: ;
}
void Frames::event_func_15544()
{
    // event 1727_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1727_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1727_72_end: ;
}
void Frames::event_func_15545()
{
    // event 1728_72
    {
        if (!(group_main_engine_1)) goto event_1728_72_end;
        if (!((brevoncrosshair_3789_instances.size()) == (0))) goto event_1728_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (384))) goto event_1728_72_end;
        if (!((global_values->get(4)) <= (1))) goto event_1728_72_end;
        if (once_condition_1728_72) goto event_1728_72_end;
        once_condition_1728_72 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1728_72_end: ;
}
void Frames::event_func_15546()
{
    // event 1729_72
    {
        if (!(group_main_engine_1)) goto event_1729_72_end;
        if (!((brevoncrosshair_3789_instances.size()) == (0))) goto event_1729_72_end;
        if (!(((Active*)get_instance(redflash_3737_instances))->alterables->flags.is_off(1))) goto event_1729_72_end;
        ((Active*)get_instance(redflash_3737_instances))->alterables->values.add(0, 2);
        ((Active*)get_instance(redflash_3737_instances))->blend_color.set_alpha_coefficient(((Active*)get_instance(redflash_3737_instances))->alterables->values.get(0));
    }
    event_1729_72_end: ;
}
void Frames::event_func_15547()
{
    // event 1730_72
    {
        if (!(group_main_engine_1)) goto event_1730_72_end;
        if (!((((Active*)get_instance(redflash_3737_instances))->alterables->values.get(0)) >= (255))) goto event_1730_72_end;
        if (!(((Active*)get_instance(redflash_3737_instances))->alterables->flags.is_off(1))) goto event_1730_72_end;
        ((Active*)get_instance(redflash_3737_instances))->set_visible(false);
        ((Active*)get_instance(redflash_3737_instances))->alterables->flags.enable(1);
    }
    event_1730_72_end: ;
}
void Frames::event_func_15548()
{
    // event 1731_72
    {
        if (!(group_main_engine_1)) goto event_1731_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (0))) goto event_1731_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 32);
    }
    event_1731_72_end: ;
}
void Frames::event_func_15549()
{
    // event 1734_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1734_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1734_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+357)%math_helper%360);
        }
    }
    event_1734_72_end: ;
}
void Frames::event_func_15550()
{
    // event 1735_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1735_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1735_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+3)%math_helper%360);
        }
    }
    event_1735_72_end: ;
}
void Frames::event_func_15551()
{
    // event 1736_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1736_72_end;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1736_72_end: ;
}
void Frames::event_func_15552()
{
    // event 1737_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1737_72_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1737_72_end: ;
}
void Frames::event_func_15553()
{
    // event 1738_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1738_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1738_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1738_72_end: ;
}
void Frames::event_func_15554()
{
    // event 1739_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1739_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1739_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_1739_72_end;
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(6, 3);
            ((Active*)*it)->alterables->values.sub(3, 100);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(3));
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, -1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, frame_right()+1000);
        }
    }
    event_1739_72_end: ;
}
void Frames::event_func_15555()
{
    // event 1740_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1740_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1740_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.02, 1));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.02, 0));
        }
    }
    event_1740_72_end: ;
}
void Frames::event_func_15556()
{
    // event 1741_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1741_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1741_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1741_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (2))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1741_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1741_72_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1741_72_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1741_72_end: ;
}
void Frames::event_func_15557()
{
    // event 1742_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1742_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1742_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1742_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (2))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1742_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1742_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(1)*-90);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 3);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_ABSOLUTION_CHARGE_344, -1, 1);
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1742_72_end: ;
}
void Frames::event_func_15558()
{
    // event 1743_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1743_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1743_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1743_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (2))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1743_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1743_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_single(brevonmechturret_3333_instances, it.current_index, default_active_instance))->alterables->flags.get(1));
        }
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 540);
        }
    }
    event_1743_72_end: ;
}
void Frames::event_func_15559()
{
    // event 1744_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1744_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1744_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1744_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
    }
    event_1744_72_end: ;
}
void Frames::event_func_15560()
{
    // event 1745_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1745_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1745_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1745_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
    }
    event_1745_72_end: ;
}
void Frames::event_func_15561()
{
    // event 1746_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1746_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1746_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1746_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1746_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.04, 1));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.04, 0));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*8);
        }
    }
    event_1746_72_end: ;
}
void Frames::event_func_15562()
{
    // event 1747_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1747_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1747_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1747_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1747_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1747_72_end: ;
}
void Frames::event_func_15563()
{
    // event 1748_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1748_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1748_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1748_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1748_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1748_72_end: ;
}
void Frames::event_func_15564()
{
    // event 1749_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1749_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1749_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*40);
            ((Active*)*it)->set_y(((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(0, 270+cos_deg(((Active*)*it)->alterables->values.get(1))*-60);
            ((Active*)*it)->move_back();
        }
    }
    event_1749_72_end: ;
}
void Frames::event_func_15565()
{
    // event 1750_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1750_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1750_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+2);
        }
    }
    event_1750_72_end: ;
}
void Frames::event_func_15566()
{
    // event 1751_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1751_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (60))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1751_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
        }
        media.stop_sample(SOUND_ROTATEBIG_165);
    }
    event_1751_72_end: ;
}
void Frames::event_func_15567()
{
    // event 1752_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1752_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1752_72_end;
        if (!((((Active*)get_single(brevonmechturret_3333_instances, default_active_instance))->alterables->values.get(1)%math_helper%15) == (0))) goto event_1752_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1752_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1752_72_end;
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        FrameObject * single_instance_1752_72_0; single_instance_1752_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechturret_3333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1752_72_0 == NULL)
                    single_instance_1752_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1752_72_0))->set_direction(get_direction_int(((Active*)single_instance_1752_72_0)->x, ((Active*)single_instance_1752_72_0)->y, ((Active*)get_single(brevonmechturret_3333_instances))->x + 0, ((Active*)get_single(brevonmechturret_3333_instances))->y + 0));
        ((Active*)((Active*)single_instance_1752_72_0))->set_direction(((Active*)single_instance_1752_72_0)->get_direction()+16);
        ((Active*)((Active*)single_instance_1752_72_0))->get_movement()->set_speed(100);
    }
    event_1752_72_end: ;
}
void Frames::event_func_15568()
{
    // event 1753_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1753_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1753_72_end;
        if (!((((Active*)get_single(brevonmechturret_3333_instances, default_active_instance))->alterables->values.get(1)%math_helper%45) == (0))) goto event_1753_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1753_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1753_72_end;
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(brevonmechturret_3333_instances, it.current_index))->x + 0, ((Active*)get_single(brevonmechturret_3333_instances, it.current_index))->y + 0));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->get_movement()->set_speed(100);
        }
        FrameObject * single_instance_1753_72_0; single_instance_1753_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechturret_3333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossboostmissile_3739(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1753_72_0 == NULL)
                    single_instance_1753_72_0 = new_obj;
            }
        }
        media.play_id(SOUND_MORPHER2_385, -1, 1);
        ((Active*)((Active*)single_instance_1753_72_0))->move_back();
        FrameObject * single_instance_1753_72_1; single_instance_1753_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechturret_3333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectmissilewarning_3740(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1753_72_1 == NULL)
                    single_instance_1753_72_1 = new_obj;
            }
        }
    }
    event_1753_72_end: ;
}
void Frames::event_func_15569()
{
    // event 1754_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1754_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1754_72_end;
        if (!((((Active*)get_single(brevonmechturret_3333_instances, default_active_instance))->alterables->values.get(1)%math_helper%9) == (0))) goto event_1754_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1754_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1754_72_end;
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        FrameObject * single_instance_1754_72_0; single_instance_1754_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechturret_3333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacid_658(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1754_72_0 == NULL)
                    single_instance_1754_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1754_72_0))->alterables->values.set(0, cos_deg(((Active*)get_single(brevonmechturret_3333_instances, default_active_instance))->alterables->values.get(0))*10);
        ((Active*)((Active*)single_instance_1754_72_0))->alterables->values.set(1, sin_deg(((Active*)get_single(brevonmechturret_3333_instances, default_active_instance))->alterables->values.get(0))*-10);
        ((Active*)((Active*)single_instance_1754_72_0))->alterables->flags.enable(1);
    }
    event_1754_72_end: ;
}
void Frames::event_func_15570()
{
    // event 1755_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1755_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1755_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-3, 1));
        }
    }
    event_1755_72_end: ;
}
void Frames::event_func_15571()
{
    // event 1756_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1756_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1756_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1756_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
    }
    event_1756_72_end: ;
}
void Frames::event_func_15572()
{
    // event 1757_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1757_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1757_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1757_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_1757_72_end: ;
}
void Frames::event_func_15573()
{
    // event 1758_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1758_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1758_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-3, 0));
        }
    }
    event_1758_72_end: ;
}
void Frames::event_func_15574()
{
    // event 1759_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1759_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1759_72_end;
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(-90);
        }
    }
    event_1759_72_end: ;
}
void Frames::event_func_15575()
{
    // event 1760_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1760_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1760_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1760_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1760_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1760_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(3));
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 10));
    }
    event_1760_72_end: ;
}
void Frames::event_func_15576()
{
    // event 1761_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1761_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1761_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1761_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1761_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 5*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1761_72_end: ;
}
void Frames::event_func_15577()
{
    // event 1762_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1762_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1762_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1762_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1762_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 30*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1762_72_end: ;
}
void Frames::event_func_15578()
{
    // event 1763_72
    bool or_result_1763_72 = false;
    bool or_temp_result_1763_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1763_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1763_72_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1763_72_0_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1763_72_0_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1763_72_0_end;
        or_result_1763_72 = true;
        or_temp_result_1763_72_0 = true;
    }
    or_event_1763_72_0_end: ;
    brevonmechweakspot_3316_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1763_72_0) {
        brevonmechweakspot_3316_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1763_72
    bool or_temp_result_1763_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1763_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1763_72_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1763_72_1_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1763_72_1_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1763_72_1_end;
        or_result_1763_72 = true;
        or_temp_result_1763_72_1 = true;
        or_event_1763_72_1_end: ;
        if (or_temp_result_1763_72_1) {
            brevonmechweakspot_3316_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1763_72) goto or_final_or_event_1763_72_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechweakspot_3316_instances.empty_selection();
        if (or_temp_result_1763_72_0 || or_temp_result_1763_72_1) {
            brevonmechweakspot_3316_instances.restore_selection();
        }
        if (or_temp_result_1763_72_0 || or_temp_result_1763_72_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1763_72_0 || or_temp_result_1763_72_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4)+50);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(2, -800);
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction((((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)+1)*8);
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(-90);
        }
    }
    or_final_or_event_1763_72_1_end: ;
}
void Frames::event_func_15579()
{
    // event 1764_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1764_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1764_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*-20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
        }
    }
    event_1764_72_end: ;
}
void Frames::event_func_15580()
{
    // event 1765_72
    bool or_result_1765_72 = false;
    bool or_temp_result_1765_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1765_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1765_72_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1765_72_0_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1765_72_0_end;
        or_result_1765_72 = true;
        or_temp_result_1765_72_0 = true;
    }
    or_event_1765_72_0_end: ;
    brevonmechbackground_2513_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1765_72_0) {
        brevonmechbackground_2513_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1765_72
    bool or_temp_result_1765_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1765_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1765_72_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1765_72_1_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1765_72_1_end;
        or_result_1765_72 = true;
        or_temp_result_1765_72_1 = true;
        or_event_1765_72_1_end: ;
        if (or_temp_result_1765_72_1) {
            brevonmechbackground_2513_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1765_72) goto or_final_or_event_1765_72_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechbackground_2513_instances.empty_selection();
        if (or_temp_result_1765_72_0 || or_temp_result_1765_72_1) {
            brevonmechbackground_2513_instances.restore_selection();
        }
        if (or_temp_result_1765_72_0 || or_temp_result_1765_72_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1765_72_0 || or_temp_result_1765_72_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(brevonmechbackground_2513_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    or_final_or_event_1765_72_1_end: ;
}
void Frames::event_func_15581()
{
    // event 1766_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1766_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1766_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1766_72_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
        }
    }
    event_1766_72_end: ;
}
void Frames::event_func_15582()
{
    // event 1767_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1767_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1767_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1767_72_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
        }
    }
    event_1767_72_end: ;
}
void Frames::event_func_15583()
{
    // event 1768_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1768_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1768_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)+100))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1768_72_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1768_72_end: ;
}
void Frames::event_func_15584()
{
    // event 1769_72
    bool or_result_1769_72 = false;
    bool or_temp_result_1769_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1769_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1769_72_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1769_72_0_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1200))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1769_72_0_end;
        or_result_1769_72 = true;
        or_temp_result_1769_72_0 = true;
    }
    or_event_1769_72_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1769_72_0) {
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1769_72
    bool or_temp_result_1769_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1769_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1769_72_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1769_72_1_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1200))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1769_72_1_end;
        or_result_1769_72 = true;
        or_temp_result_1769_72_1 = true;
        or_event_1769_72_1_end: ;
        if (or_temp_result_1769_72_1) {
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1769_72) goto or_final_or_event_1769_72_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        if (or_temp_result_1769_72_0 || or_temp_result_1769_72_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1769_72_0 || or_temp_result_1769_72_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0-((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4)+50);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    or_final_or_event_1769_72_1_end: ;
}
void Frames::event_func_15585()
{
    // event 1770_72
    bool or_result_1770_72 = false;
    bool or_temp_result_1770_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1770_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1770_72_0_end;
        or_result_1770_72 = true;
        or_temp_result_1770_72_0 = true;
    }
    or_event_1770_72_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    if (or_temp_result_1770_72_0) {
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1770_72
    bool or_temp_result_1770_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1770_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1770_72_1_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1770_72_1_end;
        or_result_1770_72 = true;
        or_temp_result_1770_72_1 = true;
    }
    or_event_1770_72_1_end: ;
    brevonmechbackground_2513_instances.clear_saved_selection();
    if (or_temp_result_1770_72_1) {
        brevonmechbackground_2513_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1770_72
    bool or_temp_result_1770_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1770_72_2_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1770_72_2_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1770_72_2_end;
        or_result_1770_72 = true;
        or_temp_result_1770_72_2 = true;
        or_event_1770_72_2_end: ;
        if (or_temp_result_1770_72_2) {
            brevonmechbackground_2513_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1770_72) goto or_final_or_event_1770_72_2_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechbackground_2513_instances.empty_selection();
        if (or_temp_result_1770_72_1 || or_temp_result_1770_72_2) {
            brevonmechbackground_2513_instances.restore_selection();
        }
        if (or_temp_result_1770_72_0 || or_temp_result_1770_72_1 || or_temp_result_1770_72_2) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 5));
        }
    }
    or_final_or_event_1770_72_2_end: ;
}
void Frames::event_func_15586()
{
    // event 1771_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1771_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1771_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1771_72_end: ;
}
void Frames::event_func_15587()
{
    // event 1772_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1772_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()-300))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1772_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1772_72_end: ;
}
void Frames::event_func_15588()
{
    // event 1773_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1773_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1773_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.04, 1));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.04, 0));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*8);
            ((Active*)*it)->alterables->values.add(2, 10*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1773_72_end: ;
}
void Frames::event_func_15589()
{
    // event 1774_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1774_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1774_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1774_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(1)*-90);
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_LAND1_408, -1, 1);
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 20);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        {
            loop_shockwave_running = true;
            int times = int(6);
            loop_shockwave_index = 0;
            while (loop_shockwave_index < times) {
                loop_shockwave_72();
                if (!loop_shockwave_running) break;
                loop_shockwave_index++;
            }
        }
    }
    event_1774_72_end: ;
}
void Frames::event_func_15590()
{
    // event 1775_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1775_72_end;
        brevonmechhead_2544_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechhead_2544_instances, playercharactersensor_383_instances)) goto event_1775_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1775_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1775_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1775_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1775_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1775_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1775_72_end: ;
}
void Frames::event_func_15591()
{
    // event 1776_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1776_72_end;
        brevonmechhead_2544_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechhead_2544_instances, playercharactersensor_383_instances)) goto event_1776_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1776_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1776_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1776_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1776_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1776_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*15);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_single(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(11), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_single(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(12))));
    }
    event_1776_72_end: ;
}
void Frames::event_func_15592()
{
    // event 1777_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1777_72_end;
        brevonmechhead_2544_instances.clear_selection();
        enemyelitemask_2511_instances.clear_selection();
        if (!check_overlap(brevonmechhead_2544_instances, enemyelitemask_2511_instances)) goto event_1777_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1777_72_end;
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechturret_3333_instances.has_selection()) goto event_1777_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1777_72_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*15);
        }
    }
    event_1777_72_end: ;
}
void Frames::event_func_15593()
{
    // event 1778_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1778_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1778_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1778_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1778_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)get_instance(player_389_instances))->get_x()+((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*-250-((Active*)*it)->alterables->values.get(2))*0.03+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(8, get_max(-7, get_min(((Active*)*it)->alterables->values.get(8), 7)));
        }
    }
    event_1778_72_end: ;
}
void Frames::event_func_15594()
{
    // event 1779_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1779_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1779_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1779_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1779_72_end: ;
}
void Frames::event_func_15595()
{
    // event 1780_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1780_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1780_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(9), get_min(((Active*)*it)->alterables->values.get(2), ((Active*)*it)->alterables->values.get(10))));
        }
    }
    event_1780_72_end: ;
}
void Frames::event_func_15596()
{
    // event 1781_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1781_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1781_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1781_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1781_72_end: ;
}
void Frames::event_func_15597()
{
    // event 1782_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1782_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1782_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (10))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1782_72_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -10);
        }
        FrameObject * single_instance_1782_72_0; single_instance_1782_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonmechlaser_3254(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1782_72_0 == NULL)
                    single_instance_1782_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1782_72_0))->alterables->values.set(4, 90+((Active*)get_instance(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*-120);
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
        FrameObject * single_instance_1782_72_1; single_instance_1782_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbrevonmechwarning_3255(parent->x + 0, parent->y + -800), parent->layer);
                if (single_instance_1782_72_1 == NULL)
                    single_instance_1782_72_1 = new_obj;
            }
        }
    }
    event_1782_72_end: ;
}
void Frames::event_func_15598()
{
    // event 1783_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1783_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1783_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1783_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+358.5)%math_helper%360);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.5);
        }
    }
    event_1783_72_end: ;
}
void Frames::event_func_15599()
{
    // event 1784_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1784_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1784_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1784_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1.5)%math_helper%360);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.5);
        }
    }
    event_1784_72_end: ;
}
void Frames::event_func_15600()
{
    // event 1785_72
    bool or_result_1785_72 = false;
    bool or_temp_result_1785_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1785_72_0_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1785_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1785_72_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1785_72_0_end;
        or_result_1785_72 = true;
        or_temp_result_1785_72_0 = true;
    }
    or_event_1785_72_0_end: ;
    brevonmechweakspot_3316_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1785_72_0) {
        brevonmechweakspot_3316_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1785_72
    bool or_temp_result_1785_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1785_72_1_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1785_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1785_72_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1785_72_1_end;
        or_result_1785_72 = true;
        or_temp_result_1785_72_1 = true;
        or_event_1785_72_1_end: ;
        if (or_temp_result_1785_72_1) {
            brevonmechweakspot_3316_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1785_72) goto or_final_or_event_1785_72_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechweakspot_3316_instances.empty_selection();
        if (or_temp_result_1785_72_0 || or_temp_result_1785_72_1) {
            brevonmechweakspot_3316_instances.restore_selection();
        }
        if (or_temp_result_1785_72_0 || or_temp_result_1785_72_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1785_72_0 || or_temp_result_1785_72_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        FrameObject * single_instance_1785_72_0; single_instance_1785_72_0 = NULL;
        // select single: true false false
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonmechlaser_3254(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1785_72_0 == NULL)
                    single_instance_1785_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1785_72_0))->alterables->values.set(4, 90+((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*-120);
        FrameObject * single_instance_1785_72_1; single_instance_1785_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbrevonmechwarning_3255(parent->x + 0, parent->y + -800), parent->layer);
                if (single_instance_1785_72_1 == NULL)
                    single_instance_1785_72_1 = new_obj;
            }
        }
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
    }
    or_final_or_event_1785_72_1_end: ;
}
void Frames::event_func_15601()
{
    // event 1786_72
    bool or_result_1786_72 = false;
    bool or_temp_result_1786_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1786_72_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1786_72_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1786_72_0_end;
        or_result_1786_72 = true;
        or_temp_result_1786_72_0 = true;
    }
    or_event_1786_72_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1786_72_0) {
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1786_72
    bool or_temp_result_1786_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1786_72_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1786_72_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1786_72_1_end;
        or_result_1786_72 = true;
        or_temp_result_1786_72_1 = true;
        or_event_1786_72_1_end: ;
        if (or_temp_result_1786_72_1) {
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1786_72) goto or_final_or_event_1786_72_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        if (or_temp_result_1786_72_0 || or_temp_result_1786_72_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1786_72_0 || or_temp_result_1786_72_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LAND2_409, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 5));
        }
    }
    or_final_or_event_1786_72_1_end: ;
}
void Frames::event_func_15602()
{
    // event 1787_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1787_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1787_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1787_72_end: ;
}
void Frames::event_func_15603()
{
    // event 1788_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1788_72_end;
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1788_72_0: ;
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1788_72_1: ;
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1788_72_2: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechfrontarm_2548_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_3: ;
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontknee_2542_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_4: ;
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg2_2541_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_5: ;
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg_2539_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_6;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_6: ;
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackarm_2516_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_7: ;
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_8;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1788_72_8: ;
        }
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->alterables->values.get(3)+56);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1788_72_9;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1788_72_9: ;
        }
    }
    event_1788_72_end: ;
}
void Frames::event_func_15604()
{
    // event 1789_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1789_72_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1789_72_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1789_72_0: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1789_72_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1789_72_1: ;
        }
    }
    event_1789_72_end: ;
}
void Frames::event_func_15605()
{
    // event 1790_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1790_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1790_72_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1790_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + 17);
            pos_end_1790_72_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1790_72_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 86, parent->get_y() + 17);
            pos_end_1790_72_1: ;
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1790_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 74, parent->get_y() + -10);
            pos_end_1790_72_2: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+(((Active*)get_instance(brevonmechweakspot_3316_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1790_72_end: ;
}
void Frames::event_func_15606()
{
    // event 1791_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1791_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1791_72_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1791_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 20, parent->get_y() + 17);
            pos_end_1791_72_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1791_72_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -86, parent->get_y() + 17);
            pos_end_1791_72_1: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        brevonmechabdomen_2540_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(brevonmechweakspot_3316_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1791_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -74, parent->get_y() + -10);
            pos_end_1791_72_2: ;
        }
    }
    event_1791_72_end: ;
}
void Frames::event_func_15607()
{
    // event 1792_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1792_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1792_72_end: ;
}
void Frames::event_func_15608()
{
    // event 1793_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1793_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-12)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
    }
    event_1793_72_end: ;
}
void Frames::event_func_15609()
{
    // event 1794_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1794_72_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 353*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 335*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 75*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 194*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1794_72_end: ;
}
void Frames::event_func_15610()
{
    // event 1795_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1795_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1795_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-12)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*50*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1795_72_end: ;
}
void Frames::event_func_15611()
{
    // event 1796_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1796_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1796_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*40)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-60)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*40)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*128*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1796_72_end: ;
}
void Frames::event_func_15612()
{
    // event 1797_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1797_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1797_72_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1797_72_end: ;
}
void Frames::event_func_15613()
{
    // event 1798_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1798_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1798_72_end;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1798_72_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1798_72_0_end: ;
        {
            ObjectIterator other_it(brevonmechfrontshoulder_2547_instances);
            brevonmechfrontwing_2546_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1798_72_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1798_72_1_end: ;
    }
    event_1798_72_end: ;
}
void Frames::event_func_15614()
{
    // event 1799_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1799_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1799_72_end;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1799_72_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1799_72_0_end: ;
        {
            ObjectIterator other_it(brevonmechfrontshoulder_2547_instances);
            brevonmechfrontwing_2546_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1799_72_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1799_72_1_end: ;
    }
    event_1799_72_end: ;
}
void Frames::event_func_15615()
{
    // event 1800_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1800_72_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)-1)*8+((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_frame());
            ((Active*)*it)->set_x(((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1800_72_end: ;
}
void Frames::event_func_15616()
{
    // event 1801_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1801_72_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1801_72_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)*it)->alterables->values.get(2)));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)-8));
        }
    }
    event_1801_72_end: ;
}
void Frames::event_func_15617()
{
    // event 1802_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1802_72_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1802_72_end: ;
}
void Frames::event_func_15618()
{
    // event 1803_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1803_72_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (30))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1803_72_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-50);
            ((Active*)*it)->destroy();
        }
    }
    event_1803_72_end: ;
}
void Frames::event_func_15619()
{
    // event 1804_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1804_72_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1804_72_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1804_72_end: ;
}
void Frames::event_func_15620()
{
    // event 1805_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1805_72_end;
        hazardshockwave_1524_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardshockwave_1524_instances, playercharactersensor_383_instances)) goto event_1805_72_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1805_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1805_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1805_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(hazardshockwave_1524_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1805_72_end: ;
}
void Frames::event_func_15621()
{
    // event 1809_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1809_72_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1809_72_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1809_72_end: ;
}
void Frames::event_func_15622()
{
    // event 1810_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1810_72_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1810_72_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
    }
    event_1810_72_end: ;
}
void Frames::event_func_15623()
{
    // event 1811_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1811_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1811_72_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.5);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1811_72_end: ;
}
void Frames::event_func_15624()
{
    // event 1812_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1812_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1812_72_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, -0.5);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1812_72_end: ;
}
void Frames::event_func_15625()
{
    // event 1813_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1813_72_end;
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1813_72_end: ;
}
void Frames::event_func_15626()
{
    // event 1814_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1814_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (3))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1814_72_end;
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechhead_2544_instances, it.current_index));
            if (parent == NULL) goto pos_end_1814_72_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1814_72_0: ;
        }
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1814_72_end: ;
}
void Frames::event_func_15627()
{
    // event 1815_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1815_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1815_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 50);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 50);
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1815_72_end: ;
}
void Frames::event_func_15628()
{
    // event 1816_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1816_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1816_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_1816_72_end: ;
}
void Frames::event_func_15629()
{
    // event 1817_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1817_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1817_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1817_72_end: ;
}
void Frames::event_func_15630()
{
    // event 1818_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1818_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1818_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(3, 99999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        global_values->set(4, 2);
        global_values->set(5, 2496);
        global_values->set(6, 304);
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
    event_1818_72_end: ;
}
void Frames::event_func_15631()
{
    // event 1819_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1819_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1819_72_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1819_72_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1819_72_end: ;
}
