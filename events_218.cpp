#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_stop_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_17179()
{
    // event 1748_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1748_77_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) >= (7))) goto event_1748_77_end;
        if (!((((Active*)col_instance_1)->get_y()) > (2140))) goto event_1748_77_end;
        if (!(((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.is_off(1))) goto event_1748_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) < (12))) goto event_1748_77_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(6+randrange(5)));
            if (dyn_it == (*loops).end()) goto dynamic_1748_77_0_end;
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
        dynamic_1748_77_0_end: ;
    }
    event_1748_77_end: ;
}
void Frames::event_func_17180()
{
    // event 1749_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1749_77_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) >= (7))) goto event_1749_77_end;
        if (!((((Active*)col_instance_1)->get_y()) > (2140))) goto event_1749_77_end;
        if (!(((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.is_off(1))) goto event_1749_77_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1749_77_0; single_instance_1749_77_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1749_77_0 == NULL)
                single_instance_1749_77_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1749_77_0))->force_speed(50);
    }
    event_1749_77_end: ;
}
void Frames::event_func_17181()
{
    // event 1750_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1750_77_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) < (7))) goto event_1750_77_end;
        if (!((((Active*)col_instance_1)->get_y()) > (2140))) goto event_1750_77_end;
        if (!(((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.is_off(1))) goto event_1750_77_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1750_77_0; single_instance_1750_77_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust_305(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1750_77_0 == NULL)
                single_instance_1750_77_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1750_77_0))->set_angle(randrange(360), 0);
    }
    event_1750_77_end: ;
}
void Frames::col_14_77()
{
    event_func_17179();
    event_func_17180();
    event_func_17181();
}
void Frames::test_collisions_77()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = breakableruinspiece_3904_instances.begin(); it1 != breakableruinspiece_3904_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_77();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
}
void Frames::event_func_17182()
{
    // event 1414_77
    {
        if (!(group_main_engine_1)) goto event_1414_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1414_77_end;
        if (once_condition_1414_77) goto event_1414_77_end;
        once_condition_1414_77 = true;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        media.stop_channel(10-1);
        media.stop_channel(11-1);
    }
    event_1414_77_end: ;
}
void Frames::event_func_17183()
{
    // event 1455_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1455_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1455_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1455_77_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1455_77_end;
        if (!media.is_channel_playing(20-1)) goto event_1455_77_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1455_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1455_77_end: ;
}
void Frames::event_func_17184()
{
    // event 1456_77
    bool or_result_1456_77 = false;
    bool or_temp_result_1456_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1456_77_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1456_77_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1456_77_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1456_77_0_end;
        or_result_1456_77 = true;
        or_temp_result_1456_77_0 = true;
    }
    or_event_1456_77_0_end: ;
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1456_77_0) {
        npcgong_634_instances.save_selection();
    }
    // event 1456_77
    bool or_temp_result_1456_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1456_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1456_77_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1456_77_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1456_77_1_end;
        or_result_1456_77 = true;
        or_temp_result_1456_77_1 = true;
        or_event_1456_77_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1456_77_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1456_77) goto or_final_or_event_1456_77_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1456_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1456_77_0 || or_temp_result_1456_77_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1456_77_1_end: ;
}
void Frames::event_func_17185()
{
    // event 1457_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1457_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1457_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1457_77_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->test_animation(5))) goto event_1457_77_end;
        if (!media.is_channel_playing(20-1)) goto event_1457_77_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1457_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcneera_2464_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1457_77_end: ;
}
void Frames::event_func_17186()
{
    // event 1458_77
    bool or_result_1458_77 = false;
    bool or_temp_result_1458_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1458_77_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1458_77_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1458_77_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1458_77_0_end;
        or_result_1458_77 = true;
        or_temp_result_1458_77_0 = true;
    }
    or_event_1458_77_0_end: ;
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1458_77_0) {
        npcneera_2464_instances.save_selection();
    }
    // event 1458_77
    bool or_temp_result_1458_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1458_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1458_77_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1458_77_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1458_77_1_end;
        or_result_1458_77 = true;
        or_temp_result_1458_77_1 = true;
        or_event_1458_77_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1458_77_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1458_77) goto or_final_or_event_1458_77_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1458_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1458_77_0 || or_temp_result_1458_77_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1458_77_1_end: ;
}
void Frames::event_func_17187()
{
    // event 1475_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1475_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1475_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1475_77_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1475_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1475_77_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1475_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1475_77_end: ;
}
void Frames::event_func_17188()
{
    // event 1476_77
    bool or_result_1476_77 = false;
    bool or_temp_result_1476_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1476_77_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1476_77_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1476_77_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1476_77_0_end;
        or_result_1476_77 = true;
        or_temp_result_1476_77_0 = true;
    }
    or_event_1476_77_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1476_77_0) {
        dialogbox_566_instances.save_selection();
        npcgong_634_instances.save_selection();
    }
    // event 1476_77
    bool or_temp_result_1476_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1476_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1476_77_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1476_77_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1476_77_1_end;
        or_result_1476_77 = true;
        or_temp_result_1476_77_1 = true;
        or_event_1476_77_1_end: ;
        if (or_temp_result_1476_77_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1476_77) goto or_final_or_event_1476_77_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1476_77_0 || or_temp_result_1476_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1476_77_0 || or_temp_result_1476_77_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1476_77_1_end: ;
}
void Frames::event_func_17189()
{
    // event 1477_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1477_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1477_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1477_77_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->test_animation(5))) goto event_1477_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1477_77_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1477_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcneera_2464_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1477_77_end: ;
}
void Frames::event_func_17190()
{
    // event 1478_77
    bool or_result_1478_77 = false;
    bool or_temp_result_1478_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1478_77_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1478_77_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1478_77_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1478_77_0_end;
        or_result_1478_77 = true;
        or_temp_result_1478_77_0 = true;
    }
    or_event_1478_77_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1478_77_0) {
        dialogbox_566_instances.save_selection();
        npcneera_2464_instances.save_selection();
    }
    // event 1478_77
    bool or_temp_result_1478_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1478_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1478_77_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1478_77_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1478_77_1_end;
        or_result_1478_77 = true;
        or_temp_result_1478_77_1 = true;
        or_event_1478_77_1_end: ;
        if (or_temp_result_1478_77_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1478_77) goto or_final_or_event_1478_77_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1478_77_0 || or_temp_result_1478_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1478_77_0 || or_temp_result_1478_77_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1478_77_1_end: ;
}
void Frames::event_func_17191()
{
    // event 1481_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1481_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) < (14))) goto event_1481_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -40);
    }
    event_1481_77_end: ;
}
void Frames::event_func_17192()
{
    // event 1482_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1482_77_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1482_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1482_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        monitorcrate_409_instances.clear_selection();
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
    }
    event_1482_77_end: ;
}
void Frames::event_func_17193()
{
    // event 1483_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1483_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1483_77_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(mrstumpy_3913_instances))->get_x()-120))) goto event_1483_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1483_77_end: ;
}
void Frames::event_func_17194()
{
    // event 1484_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1484_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1484_77_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(mrstumpy_3913_instances))->get_x()-120))) goto event_1484_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
    }
    event_1484_77_end: ;
}
void Frames::event_func_17195()
{
    // event 1485_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1485_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1485_77_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(mrstumpy_3913_instances))->get_x()-120))) goto event_1485_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1485_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
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
    }
    event_1485_77_end: ;
}
void Frames::event_func_17196()
{
    // event 1486_77
    bool or_result_1486_77 = false;
    bool or_temp_result_1486_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto or_event_1486_77_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1486_77_0_end;
        or_result_1486_77 = true;
        or_temp_result_1486_77_0 = true;
    }
    or_event_1486_77_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1486_77_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1486_77
    bool or_temp_result_1486_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto or_event_1486_77_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1486_77_1_end;
        or_result_1486_77 = true;
        or_temp_result_1486_77_1 = true;
    }
    or_event_1486_77_1_end: ;
    if (or_temp_result_1486_77_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1486_77
    bool or_temp_result_1486_77_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto or_event_1486_77_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1486_77_2_end;
        or_result_1486_77 = true;
        or_temp_result_1486_77_2 = true;
        or_event_1486_77_2_end: ;
        if (or_temp_result_1486_77_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1486_77) goto or_final_or_event_1486_77_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1486_77_0 || or_temp_result_1486_77_1 || or_temp_result_1486_77_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1486_77_2_end: ;
}
void Frames::event_func_17197()
{
    // event 1487_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1487_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1487_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1487_77_end: ;
}
void Frames::event_func_17198()
{
    // event 1488_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1488_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1488_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1488_77_end: ;
}
void Frames::event_func_17199()
{
    // event 1489_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1489_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1489_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (2))) goto event_1489_77_end;
        if (!((media.get_channel_position(-1 +20)) > (6200))) goto event_1489_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
    }
    event_1489_77_end: ;
}
void Frames::event_func_17200()
{
    // event 1490_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1490_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1490_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1490_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1490_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 3);
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
        media.stop_channel(20-1);
    }
    event_1490_77_end: ;
}
void Frames::event_func_17201()
{
    // event 1491_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1491_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1491_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1491_77_end: ;
}
void Frames::event_func_17202()
{
    // event 1492_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1492_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1492_77_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(mrstumpy_3913_instances))->get_x()+40))) goto event_1492_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 4);
    }
    event_1492_77_end: ;
}
void Frames::event_func_17203()
{
    // event 1493_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1493_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1493_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1493_77_end: ;
}
void Frames::event_func_17204()
{
    // event 1494_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1494_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1494_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (1))) goto event_1494_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
    }
    event_1494_77_end: ;
}
void Frames::event_func_17205()
{
    // event 1495_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1495_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1495_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (80))) goto event_1495_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 5);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
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
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1495_77_end: ;
}
void Frames::event_func_17206()
{
    // event 1496_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1496_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1496_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) > (0))) goto event_1496_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (3))) goto event_1496_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1496_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1496_77_end: ;
}
void Frames::event_func_17207()
{
    // event 1497_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1497_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1497_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (3))) goto event_1497_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1497_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 6);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1497_77_end: ;
}
void Frames::event_func_17208()
{
    // event 1498_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1498_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (6))) goto event_1498_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (7))) goto event_1498_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-5, -45));
    }
    event_1498_77_end: ;
}
void Frames::event_func_17209()
{
    // event 1499_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1499_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1499_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (100))) goto event_1499_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 7);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1499_77_end: ;
}
void Frames::event_func_17210()
{
    // event 1500_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1500_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1500_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1500_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1500_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(20-1);
    }
    event_1500_77_end: ;
}
void Frames::event_func_17211()
{
    // event 1501_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1501_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (8))) goto event_1501_77_end;
        if (!((((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)) < (-100))) goto event_1501_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)*0.02, 3));
    }
    event_1501_77_end: ;
}
void Frames::event_func_17212()
{
    // event 1502_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1502_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1502_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1502_77_end: ;
}
void Frames::event_func_17213()
{
    // event 1503_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1503_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1503_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (80))) goto event_1503_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 9);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1503_77_end: ;
}
void Frames::event_func_17214()
{
    // event 1504_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1504_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1504_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1504_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1504_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 10);
        media.stop_channel(20-1);
    }
    event_1504_77_end: ;
}
void Frames::event_func_17215()
{
    // event 1505_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1505_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1505_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1505_77_end: ;
}
void Frames::event_func_17216()
{
    // event 1506_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1506_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1506_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (80))) goto event_1506_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (100))) goto event_1506_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1506_77_end: ;
}
void Frames::event_func_17217()
{
    // event 1507_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1507_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1507_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (100))) goto event_1507_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (120))) goto event_1507_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1507_77_end: ;
}
void Frames::event_func_17218()
{
    // event 1508_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1508_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1508_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (120))) goto event_1508_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (150))) goto event_1508_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1508_77_end: ;
}
void Frames::event_func_17219()
{
    // event 1509_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1509_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1509_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (150))) goto event_1509_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (160))) goto event_1509_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1509_77_end: ;
}
void Frames::event_func_17220()
{
    // event 1510_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1510_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1510_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (160))) goto event_1510_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(10);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_01_07_ogg_221, 20-1);
    }
    event_1510_77_end: ;
}
void Frames::event_func_17221()
{
    // event 1511_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1511_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1511_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (180))) goto event_1511_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (280))) goto event_1511_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
        }
        {
            FrameObject * parent = ((Active*)get_single(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_1511_77_0;
            ((Active*)get_instance(player_389_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1511_77_0: ;
        }
    }
    event_1511_77_end: ;
}
void Frames::event_func_17222()
{
    // event 1512_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1512_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1512_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (200))) goto event_1512_77_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+16);
    }
    event_1512_77_end: ;
}
void Frames::event_func_17223()
{
    // event 1513_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1513_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1513_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (400))) goto event_1513_77_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 640);
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(2-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 11);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
    }
    event_1513_77_end: ;
}
void Frames::event_func_17224()
{
    // event 1514_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1514_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1514_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)), 1400));
    }
    event_1514_77_end: ;
}
void Frames::event_func_17225()
{
    // event 1515_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1515_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1515_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1700))) goto event_1515_77_end;
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
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 4);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1515_77_end: ;
}
void Frames::event_func_17226()
{
    // event 1516_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1516_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (12))) goto event_1516_77_end;
        if (not_always_1516_77 > loop_count) {
            not_always_1516_77 = loop_count + 2;
            goto event_1516_77_end;
        }
        not_always_1516_77 = loop_count + 2;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(7, global_values->get(25));
    }
    event_1516_77_end: ;
}
void Frames::event_func_17227()
{
    // event 1517_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1517_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (12))) goto event_1517_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(7)) > (global_values->get(25)*0.5))) goto event_1517_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.sub(7, global_values->get(25)*0.01);
    }
    event_1517_77_end: ;
}
void Frames::event_func_17228()
{
    // event 1518_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1518_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (12))) goto event_1518_77_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(7));
    }
    event_1518_77_end: ;
}
void Frames::event_func_17229()
{
    // event 1519_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1519_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1519_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 3);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1315, 470);
            pos_end_1519_77_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_layer(1-1);
        }
    }
    event_1519_77_end: ;
}
void Frames::event_func_17230()
{
    // event 1520_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1520_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1520_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (440))) goto event_1520_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1520_77_end: ;
}
void Frames::event_func_17231()
{
    // event 1521_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1521_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1521_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1521_77_end: ;
}
void Frames::event_func_17232()
{
    // event 1522_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1522_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1522_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (14))) goto event_1522_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 14);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1522_77_end: ;
}
void Frames::event_func_17233()
{
    // event 1523_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1523_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1523_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1523_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1523_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 15);
        media.stop_channel(20-1);
    }
    event_1523_77_end: ;
}
void Frames::event_func_17234()
{
    // event 1524_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1524_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1524_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
        }
    }
    event_1524_77_end: ;
}
void Frames::event_func_17235()
{
    // event 1525_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1525_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1525_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (5))) goto event_1525_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 16);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1525_77_end: ;
}
void Frames::event_func_17236()
{
    // event 1526_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1526_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1526_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1526_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1526_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 17);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(20-1);
    }
    event_1526_77_end: ;
}
void Frames::event_func_17237()
{
    // event 1527_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1527_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (17))) goto event_1527_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1700))) goto event_1527_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 18);
    }
    event_1527_77_end: ;
}
void Frames::event_func_17238()
{
    // event 1528_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1528_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1528_77_end;
        if (not_always_1528_77 > loop_count) {
            not_always_1528_77 = loop_count + 2;
            goto event_1528_77_end;
        }
        not_always_1528_77 = loop_count + 2;
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
    }
    event_1528_77_end: ;
}
void Frames::event_func_17239()
{
    // event 1529_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1529_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1529_77_end;
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
    event_1529_77_end: ;
}
void Frames::event_func_17240()
{
    // event 1530_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1)) goto event_1530_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1530_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1530_77_end;
        next_frame = 24 + 0;    
    
    }
    event_1530_77_end: ;
}
void Frames::event_func_17241()
{
    // event 1531_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1531_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1531_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 400);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1100);
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
    }
    event_1531_77_end: ;
}
void Frames::event_func_17242()
{
    // event 1532_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1532_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1532_77_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (8))) goto event_1532_77_end;
        if (once_condition_1532_77) goto event_1532_77_end;
        once_condition_1532_77 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, newline_character+str_ancient_temple_279);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_1532_77_end: ;
}
void Frames::event_func_17243()
{
    // event 1533_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1533_77_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1533_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1533_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1533_77_end: ;
}
void Frames::event_func_17244()
{
    // event 1534_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1534_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1534_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (804))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1534_77_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1534_77_end: ;
}
void Frames::event_func_17245()
{
    // event 1535_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1535_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (1))) goto event_1535_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1535_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (764))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1535_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1535_77_end: ;
}
void Frames::event_func_17246()
{
    // event 1536_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1536_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1536_77_end;
        if (!((global_values->get(1)) == (0))) goto event_1536_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()));
    }
    event_1536_77_end: ;
}
void Frames::event_func_17247()
{
    // event 1537_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1537_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1537_77_end;
        if (!((global_values->get(1)) != (0))) goto event_1537_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()));
    }
    event_1537_77_end: ;
}
void Frames::event_func_17248()
{
    // event 1538_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1538_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1538_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (804))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1538_77_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1538_77_end: ;
}
void Frames::event_func_17249()
{
    // event 1539_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1539_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (1))) goto event_1539_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1539_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (764))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1539_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1539_77_end: ;
}
void Frames::event_func_17250()
{
    // event 1540_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1540_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1540_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
    }
    event_1540_77_end: ;
}
void Frames::event_func_17251()
{
    // event 1541_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1541_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1541_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(npcgong_634_instances))->get_x()-180))) goto event_1541_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1541_77_end: ;
}
void Frames::event_func_17252()
{
    // event 1542_77
    bool or_result_1542_77 = false;
    bool or_temp_result_1542_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1542_77_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1542_77_0_end;
        or_result_1542_77 = true;
        or_temp_result_1542_77_0 = true;
    }
    or_event_1542_77_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1542_77_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1542_77
    bool or_temp_result_1542_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1542_77_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1542_77_1_end;
        or_result_1542_77 = true;
        or_temp_result_1542_77_1 = true;
    }
    or_event_1542_77_1_end: ;
    if (or_temp_result_1542_77_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1542_77
    bool or_temp_result_1542_77_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1542_77_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1542_77_2_end;
        or_result_1542_77 = true;
        or_temp_result_1542_77_2 = true;
        or_event_1542_77_2_end: ;
        if (or_temp_result_1542_77_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1542_77) goto or_final_or_event_1542_77_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1542_77_0 || or_temp_result_1542_77_1 || or_temp_result_1542_77_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1542_77_2_end: ;
}
void Frames::event_func_17253()
{
    // event 1543_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1543_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1543_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1543_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1543_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1543_77_end: ;
}
void Frames::event_func_17254()
{
    // event 1544_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1544_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1544_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-4);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1544_77_end: ;
}
void Frames::event_func_17255()
{
    // event 1545_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1545_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1545_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (20))) goto event_1545_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1545_77_end: ;
}
void Frames::event_func_17256()
{
    // event 1546_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1546_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1546_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (9))) goto event_1546_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (14))) goto event_1546_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1546_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1546_77_end: ;
}
void Frames::event_func_17257()
{
    // event 1547_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1547_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1547_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1547_77_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_y()) >= (((Active*)get_instance(npcgong_634_instances))->get_y()-8))) goto event_1547_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1547_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1547_77_end: ;
}
void Frames::event_func_17258()
{
    // event 1548_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1548_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1548_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1548_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(7);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1548_77_end: ;
}
void Frames::event_func_17259()
{
    // event 1549_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1549_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1549_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcneera_2464_instances))->get_y()+12);
    }
    event_1549_77_end: ;
}
void Frames::event_func_17260()
{
    // event 1550_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1550_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1550_77_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_y()) >= (((Active*)get_instance(npcgong_634_instances))->get_y()-8))) goto event_1550_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcgong_634_instances))->get_y()-8);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(10);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1550_77_end: ;
}
void Frames::event_func_17261()
{
    // event 1551_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1551_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (7))) goto event_1551_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (15))) goto event_1551_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
    }
    event_1551_77_end: ;
}
void Frames::event_func_17262()
{
    // event 1552_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1552_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (7))) goto event_1552_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (8))) goto event_1552_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1552_77_end: ;
}
void Frames::event_func_17263()
{
    // event 1553_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1553_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1553_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (15))) goto event_1553_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
    }
    event_1553_77_end: ;
}
void Frames::event_func_17264()
{
    // event 1554_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1554_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1554_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (45))) goto event_1554_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1554_77_end: ;
}
void Frames::event_func_17265()
{
    // event 1555_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1555_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1555_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1555_77_end;
        if (!media.is_channel_playing(20-1)) goto event_1555_77_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1555_77_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 21-1);
        media.stop_channel(20-1);
    }
    event_1555_77_end: ;
}
void Frames::event_func_17266()
{
    // event 1556_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1556_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1556_77_end;
        if (!media.is_channel_playing(21-1)) goto event_1556_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(36+(global_values->get(3)/math_helper/5)%math_helper%3);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1556_77_end: ;
}
void Frames::event_func_17267()
{
    // event 1557_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1557_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1557_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1557_77_end;
        if (!((media.get_channel_position(-1 +21)) > (2000))) goto event_1557_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1557_77_end: ;
}
void Frames::event_func_17268()
{
    // event 1558_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1558_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1558_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.stop_channel(21-1);
    }
    event_1558_77_end: ;
}
void Frames::event_func_17269()
{
    // event 1559_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1559_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1559_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (15))) goto event_1559_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (16))) goto event_1559_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1559_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1559_77_end: ;
}
void Frames::event_func_17270()
{
    // event 1560_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1560_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1560_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1560_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1560_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1560_77_end: ;
}
void Frames::event_func_17271()
{
    // event 1561_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1561_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1561_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (25))) goto event_1561_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1561_77_end: ;
}
void Frames::event_func_17272()
{
    // event 1562_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1562_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1562_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (1))) goto event_1562_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(42);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_03_04_ogg_280, 18-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_03_04_ogg_281, 19-1);
    }
    event_1562_77_end: ;
}
void Frames::event_func_17273()
{
    // event 1563_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1563_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1563_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (8))) goto event_1563_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (25))) goto event_1563_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(44);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
    }
    event_1563_77_end: ;
}
void Frames::event_func_17274()
{
    // event 1564_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1564_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1564_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (25))) goto event_1564_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(42);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 20);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1564_77_end: ;
}
void Frames::event_func_17275()
{
    // event 1565_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1565_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1565_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1565_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1565_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1565_77_end: ;
}
