#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_3_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_80();
}
void Frames::loop_wrapper_play_music_5_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_80();
}
void Frames::loop_wrapper_play_music_6_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_80();
}
void Frames::loop_wrapper_sound_go0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_80(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_80();
}
void Frames::loop_wrapper_process_call_unqueue_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_80(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_80(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_80()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 536870912, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 268435456, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 67108864, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 33554432, 2, (EventFunction)&Frames::col_1_13);
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
void Frames::event_func_18030()
{
    // event 1394_80
    {
        if (!(group_main_engine_1)) goto event_1394_80_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1394_80_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1394_80_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(2)) < (16))) goto event_1394_80_end;
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(2, 1);
    }
    event_1394_80_end: ;
}
void Frames::event_func_18031()
{
    // event 1395_80
    bool or_result_1395_80 = false;
    bool or_temp_result_1395_80_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1395_80_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1395_80_0_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1395_80_0_end;
        or_result_1395_80 = true;
        or_temp_result_1395_80_0 = true;
    }
    or_event_1395_80_0_end: ;
    guiicon_452_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_1395_80_0) {
        guiicon_452_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 1395_80
    bool or_temp_result_1395_80_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1395_80_1_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1395_80_1_end;
        or_result_1395_80 = true;
        or_temp_result_1395_80_1 = true;
        or_event_1395_80_1_end: ;
        if (or_temp_result_1395_80_1) {
            guiicon_452_instances.save_selection();
        }
        if (!or_result_1395_80) goto or_final_or_event_1395_80_1_end;
        guiicon_452_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1395_80_0 || or_temp_result_1395_80_1) {
            guiicon_452_instances.restore_selection();
        }
        if (or_temp_result_1395_80_0) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    or_final_or_event_1395_80_1_end: ;
}
void Frames::event_func_18032()
{
    // event 1401_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1401_80_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1401_80_end;
        FrameObject * single_instance_1401_80_0; single_instance_1401_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1401_80_0 == NULL)
                    single_instance_1401_80_0 = new_obj;
            }
        }
    }
    event_1401_80_end: ;
}
void Frames::event_func_18033()
{
    // event 1402_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1402_80_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1402_80_end;
        FrameObject * single_instance_1402_80_0; single_instance_1402_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1402_80_0 == NULL)
                    single_instance_1402_80_0 = new_obj;
            }
        }
    }
    event_1402_80_end: ;
}
void Frames::event_func_18034()
{
    // event 1403_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1403_80_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1403_80_end;
        FrameObject * single_instance_1403_80_0; single_instance_1403_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1403_80_0 == NULL)
                    single_instance_1403_80_0 = new_obj;
            }
        }
    }
    event_1403_80_end: ;
}
void Frames::event_func_18035()
{
    // event 1404_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1404_80_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1404_80_end;
        FrameObject * single_instance_1404_80_0; single_instance_1404_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1404_80_0 == NULL)
                    single_instance_1404_80_0 = new_obj;
            }
        }
    }
    event_1404_80_end: ;
}
void Frames::event_func_18036()
{
    // event 1405_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1405_80_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1405_80_end;
        FrameObject * single_instance_1405_80_0; single_instance_1405_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1405_80_0 == NULL)
                    single_instance_1405_80_0 = new_obj;
            }
        }
    }
    event_1405_80_end: ;
}
void Frames::event_func_18037()
{
    // event 1406_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1406_80_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1406_80_end;
        FrameObject * single_instance_1406_80_0; single_instance_1406_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1406_80_0 == NULL)
                    single_instance_1406_80_0 = new_obj;
            }
        }
    }
    event_1406_80_end: ;
}
void Frames::event_func_18038()
{
    // event 1407_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1407_80_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1407_80_end;
        FrameObject * single_instance_1407_80_0; single_instance_1407_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1407_80_0 == NULL)
                    single_instance_1407_80_0 = new_obj;
            }
        }
    }
    event_1407_80_end: ;
}
void Frames::event_func_18039()
{
    // event 1408_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1408_80_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1408_80_end;
        FrameObject * single_instance_1408_80_0; single_instance_1408_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1408_80_0 == NULL)
                    single_instance_1408_80_0 = new_obj;
            }
        }
    }
    event_1408_80_end: ;
}
void Frames::event_func_18040()
{
    // event 1409_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1409_80_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1409_80_end;
        FrameObject * single_instance_1409_80_0; single_instance_1409_80_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1409_80_0 == NULL)
                    single_instance_1409_80_0 = new_obj;
            }
        }
    }
    event_1409_80_end: ;
}
void Frames::event_func_18041()
{
    // event 1410_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1410_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1410_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1410_80_end: ;
}
void Frames::event_func_18042()
{
    // event 1411_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1411_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1411_80_end;
        if (not_always_1411_80 > loop_count) {
            not_always_1411_80 = loop_count + 2;
            goto event_1411_80_end;
        }
        not_always_1411_80 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1411_80_end: ;
}
void Frames::event_func_18043()
{
    // event 1412_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1412_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1412_80_end;
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
                loop_voice_80();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1412_80_end: ;
}
void Frames::event_func_18044()
{
    // event 1413_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1413_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1413_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1413_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1413_80_end: ;
}
void Frames::event_func_18045()
{
    // event 1414_80
    bool or_result_1414_80 = false;
    bool or_temp_result_1414_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto or_event_1414_80_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1414_80_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1414_80_0_end;
        if (not_always_1414_80 > loop_count) {
            not_always_1414_80 = loop_count + 2;
            goto or_event_1414_80_0_end;
        }
        not_always_1414_80 = loop_count + 2;
        or_result_1414_80 = true;
        or_temp_result_1414_80_0 = true;
    }
    or_event_1414_80_0_end: ;
    // event 1414_80
    bool or_temp_result_1414_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto or_event_1414_80_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1414_80_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1414_80_1_end;
        if (not_always_1414_80 > loop_count) {
            not_always_1414_80 = loop_count + 2;
            goto or_event_1414_80_1_end;
        }
        not_always_1414_80 = loop_count + 2;
        or_result_1414_80 = true;
        or_temp_result_1414_80_1 = true;
        or_event_1414_80_1_end: ;
        if (!or_result_1414_80) goto or_final_or_event_1414_80_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1414_80_1_end: ;
}
void Frames::event_func_18046()
{
    // event 1415_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1415_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1415_80_end;
        if (not_always_1415_80 > loop_count) {
            not_always_1415_80 = loop_count + 2;
            goto event_1415_80_end;
        }
        not_always_1415_80 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1415_80_end: ;
}
void Frames::event_func_18047()
{
    // event 1416_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1416_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1416_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1416_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1416_80_end: ;
}
void Frames::event_func_18048()
{
    // event 1417_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1417_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1417_80_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1417_80_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1417_80_end: ;
}
void Frames::event_func_18049()
{
    // event 1418_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1418_80_end;
        if (!((global_values->get(27)) == (0))) goto event_1418_80_end;
        if (not_always_1418_80 > loop_count) {
            not_always_1418_80 = loop_count + 2;
            goto event_1418_80_end;
        }
        not_always_1418_80 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1418_80_end: ;
}
void Frames::event_func_18050()
{
    // event 1422_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1422_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1422_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1422_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1422_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1422_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1422_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1422_80_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1422_80_end: ;
}
void Frames::event_func_18051()
{
    // event 1423_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1423_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1423_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1423_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1423_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1423_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1423_80_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1423_80_end: ;
}
void Frames::event_func_18052()
{
    // event 1424_80
    bool or_result_1424_80 = false;
    bool or_temp_result_1424_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1424_80_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1424_80_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1424_80_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1424_80_0_end;
        or_result_1424_80 = true;
        or_temp_result_1424_80_0 = true;
    }
    or_event_1424_80_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1424_80_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1424_80
    bool or_temp_result_1424_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1424_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1424_80_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1424_80_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1424_80_1_end;
        or_result_1424_80 = true;
        or_temp_result_1424_80_1 = true;
        or_event_1424_80_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1424_80_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1424_80) goto or_final_or_event_1424_80_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1424_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1424_80_0 || or_temp_result_1424_80_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1424_80_1_end: ;
}
void Frames::event_func_18053()
{
    // event 1425_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1425_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1425_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1425_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1425_80_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1425_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1425_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1425_80_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1425_80_end: ;
}
void Frames::event_func_18054()
{
    // event 1426_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1426_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1426_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1426_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1426_80_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1426_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1426_80_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1426_80_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1426_80_end: ;
}
void Frames::event_func_18055()
{
    // event 1427_80
    bool or_result_1427_80 = false;
    bool or_temp_result_1427_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1427_80_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1427_80_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1427_80_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1427_80_0_end;
        or_result_1427_80 = true;
        or_temp_result_1427_80_0 = true;
    }
    or_event_1427_80_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1427_80_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1427_80
    bool or_temp_result_1427_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1427_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1427_80_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1427_80_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1427_80_1_end;
        or_result_1427_80 = true;
        or_temp_result_1427_80_1 = true;
        or_event_1427_80_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1427_80_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1427_80) goto or_final_or_event_1427_80_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1427_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1427_80_0 || or_temp_result_1427_80_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1427_80_1_end: ;
}
void Frames::event_func_18056()
{
    // event 1428_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1428_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1428_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1428_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1428_80_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1428_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1428_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1428_80_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1428_80_end: ;
}
void Frames::event_func_18057()
{
    // event 1429_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1429_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1429_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1429_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1429_80_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1429_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1429_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1429_80_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1429_80_end: ;
}
void Frames::event_func_18058()
{
    // event 1430_80
    bool or_result_1430_80 = false;
    bool or_temp_result_1430_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1430_80_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1430_80_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1430_80_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1430_80_0_end;
        or_result_1430_80 = true;
        or_temp_result_1430_80_0 = true;
    }
    or_event_1430_80_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1430_80_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1430_80
    bool or_temp_result_1430_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1430_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1430_80_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1430_80_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1430_80_1_end;
        or_result_1430_80 = true;
        or_temp_result_1430_80_1 = true;
        or_event_1430_80_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1430_80_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1430_80) goto or_final_or_event_1430_80_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1430_80_0 || or_temp_result_1430_80_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1430_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1430_80_1_end: ;
}
void Frames::event_func_18059()
{
    // event 1431_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1431_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1431_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1431_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1431_80_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1431_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1431_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1431_80_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1431_80_end: ;
}
void Frames::event_func_18060()
{
    // event 1432_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1432_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1432_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1432_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1432_80_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1432_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1432_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1432_80_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1432_80_end: ;
}
void Frames::event_func_18061()
{
    // event 1433_80
    bool or_result_1433_80 = false;
    bool or_temp_result_1433_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1433_80_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1433_80_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1433_80_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1433_80_0_end;
        or_result_1433_80 = true;
        or_temp_result_1433_80_0 = true;
    }
    or_event_1433_80_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1433_80_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1433_80
    bool or_temp_result_1433_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1433_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1433_80_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1433_80_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1433_80_1_end;
        or_result_1433_80 = true;
        or_temp_result_1433_80_1 = true;
        or_event_1433_80_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1433_80_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1433_80) goto or_final_or_event_1433_80_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1433_80_0 || or_temp_result_1433_80_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1433_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1433_80_1_end: ;
}
void Frames::event_func_18062()
{
    // event 1434_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1434_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1434_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1434_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1434_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1434_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1434_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1434_80_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1434_80_end: ;
}
void Frames::event_func_18063()
{
    // event 1435_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1435_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1435_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1435_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1435_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1435_80_end;
        if (!media.is_channel_playing(20-1)) goto event_1435_80_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1435_80_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1435_80_end: ;
}
void Frames::event_func_18064()
{
    // event 1436_80
    bool or_result_1436_80 = false;
    bool or_temp_result_1436_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1436_80_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1436_80_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1436_80_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1436_80_0_end;
        or_result_1436_80 = true;
        or_temp_result_1436_80_0 = true;
    }
    or_event_1436_80_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1436_80_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1436_80
    bool or_temp_result_1436_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1436_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1436_80_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1436_80_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1436_80_1_end;
        or_result_1436_80 = true;
        or_temp_result_1436_80_1 = true;
        or_event_1436_80_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1436_80_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1436_80) goto or_final_or_event_1436_80_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1436_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1436_80_0 || or_temp_result_1436_80_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1436_80_1_end: ;
}
void Frames::event_func_18065()
{
    // event 1437_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1)) goto event_1437_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1437_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (9))) goto event_1437_80_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->test_animation(5))) goto event_1437_80_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6));
    }
    event_1437_80_end: ;
}
void Frames::event_func_18066()
{
    // event 1438_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1438_80_end;
        if (!((global_values->get(27)) == (1))) goto event_1438_80_end;
        if (not_always_1438_80 > loop_count) {
            not_always_1438_80 = loop_count + 2;
            goto event_1438_80_end;
        }
        not_always_1438_80 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1438_80_end: ;
}
void Frames::event_func_18067()
{
    // event 1439_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1439_80_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1439_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1439_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1439_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1439_80_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1439_80_end: ;
}
void Frames::event_func_18068()
{
    // event 1440_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1440_80_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1440_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1440_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1440_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1440_80_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1440_80_end: ;
}
void Frames::event_func_18069()
{
    // event 1441_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1441_80_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1441_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1441_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1441_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1441_80_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1441_80_end: ;
}
void Frames::event_func_18070()
{
    // event 1442_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1442_80_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1442_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1442_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1442_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1442_80_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1442_80_end: ;
}
void Frames::event_func_18071()
{
    // event 1443_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1443_80_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1443_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1443_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1443_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1443_80_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1443_80_end: ;
}
void Frames::event_func_18072()
{
    // event 1444_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1444_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1444_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1444_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1444_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1444_80_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1444_80_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1444_80_end: ;
}
void Frames::event_func_18073()
{
    // event 1445_80
    bool or_result_1445_80 = false;
    bool or_temp_result_1445_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1445_80_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1445_80_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1445_80_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1445_80_0_end;
        or_result_1445_80 = true;
        or_temp_result_1445_80_0 = true;
    }
    or_event_1445_80_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1445_80_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1445_80
    bool or_temp_result_1445_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1445_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1445_80_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1445_80_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1445_80_1_end;
        or_result_1445_80 = true;
        or_temp_result_1445_80_1 = true;
        or_event_1445_80_1_end: ;
        if (or_temp_result_1445_80_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1445_80) goto or_final_or_event_1445_80_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1445_80_0 || or_temp_result_1445_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1445_80_0 || or_temp_result_1445_80_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1445_80_1_end: ;
}
void Frames::event_func_18074()
{
    // event 1446_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1446_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1446_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1446_80_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1446_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1446_80_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1446_80_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1446_80_end: ;
}
void Frames::event_func_18075()
{
    // event 1447_80
    bool or_result_1447_80 = false;
    bool or_temp_result_1447_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1447_80_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1447_80_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1447_80_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1447_80_0_end;
        or_result_1447_80 = true;
        or_temp_result_1447_80_0 = true;
    }
    or_event_1447_80_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1447_80_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1447_80
    bool or_temp_result_1447_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1447_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1447_80_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1447_80_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1447_80_1_end;
        or_result_1447_80 = true;
        or_temp_result_1447_80_1 = true;
        or_event_1447_80_1_end: ;
        if (or_temp_result_1447_80_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1447_80) goto or_final_or_event_1447_80_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1447_80_0 || or_temp_result_1447_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1447_80_0 || or_temp_result_1447_80_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1447_80_1_end: ;
}
void Frames::event_func_18076()
{
    // event 1448_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1448_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1448_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1448_80_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1448_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1448_80_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1448_80_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1448_80_end: ;
}
void Frames::event_func_18077()
{
    // event 1449_80
    bool or_result_1449_80 = false;
    bool or_temp_result_1449_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1449_80_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1449_80_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1449_80_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1449_80_0_end;
        or_result_1449_80 = true;
        or_temp_result_1449_80_0 = true;
    }
    or_event_1449_80_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1449_80_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1449_80
    bool or_temp_result_1449_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1449_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1449_80_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1449_80_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1449_80_1_end;
        or_result_1449_80 = true;
        or_temp_result_1449_80_1 = true;
        or_event_1449_80_1_end: ;
        if (or_temp_result_1449_80_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1449_80) goto or_final_or_event_1449_80_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1449_80_0 || or_temp_result_1449_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1449_80_0 || or_temp_result_1449_80_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1449_80_1_end: ;
}
void Frames::event_func_18078()
{
    // event 1450_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1450_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1450_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1450_80_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1450_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1450_80_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1450_80_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1450_80_end: ;
}
void Frames::event_func_18079()
{
    // event 1451_80
    bool or_result_1451_80 = false;
    bool or_temp_result_1451_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1451_80_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1451_80_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1451_80_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1451_80_0_end;
        or_result_1451_80 = true;
        or_temp_result_1451_80_0 = true;
    }
    or_event_1451_80_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1451_80_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1451_80
    bool or_temp_result_1451_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1451_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1451_80_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1451_80_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1451_80_1_end;
        or_result_1451_80 = true;
        or_temp_result_1451_80_1 = true;
        or_event_1451_80_1_end: ;
        if (or_temp_result_1451_80_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1451_80) goto or_final_or_event_1451_80_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1451_80_0 || or_temp_result_1451_80_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1451_80_0 || or_temp_result_1451_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1451_80_1_end: ;
}
void Frames::event_func_18080()
{
    // event 1452_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto event_1452_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1452_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1452_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1452_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1452_80_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1452_80_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1452_80_end: ;
}
void Frames::event_func_18081()
{
    // event 1453_80
    bool or_result_1453_80 = false;
    bool or_temp_result_1453_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1453_80_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1453_80_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1453_80_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1453_80_0_end;
        or_result_1453_80 = true;
        or_temp_result_1453_80_0 = true;
    }
    or_event_1453_80_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1453_80_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1453_80
    bool or_temp_result_1453_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_dialog_system_dialog_voices_blips_1)) goto or_event_1453_80_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1453_80_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1453_80_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1453_80_1_end;
        or_result_1453_80 = true;
        or_temp_result_1453_80_1 = true;
        or_event_1453_80_1_end: ;
        if (or_temp_result_1453_80_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1453_80) goto or_final_or_event_1453_80_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1453_80_0 || or_temp_result_1453_80_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1453_80_0 || or_temp_result_1453_80_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1453_80_1_end: ;
}
void Frames::event_func_18082()
{
    // event 1455_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1455_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1455_80_end: ;
}
void Frames::event_func_18083()
{
    // event 1456_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1456_80_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1456_80_end: ;
}
void Frames::event_func_18084()
{
    // event 1457_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1457_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1457_80_end;
        if (once_condition_1457_80) goto event_1457_80_end;
        once_condition_1457_80 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1912);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 330);
    }
    event_1457_80_end: ;
}
void Frames::event_func_18085()
{
    // event 1458_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1458_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1458_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8);
            ((Active*)*it)->set_x(frame_left()-100);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-50);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(30);
            ((Active*)*it)->set_visible(true);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(24);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)get_instance(npccarolcling_3961_instances))->get_x()-40);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)/math_helper/2)%math_helper%6);
        }
    }
    event_1458_80_end: ;
}
void Frames::event_func_18086()
{
    // event 1459_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1459_80_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1459_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1459_80_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1459_80_end: ;
}
void Frames::event_func_18087()
{
    // event 1460_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1460_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1460_80_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+80))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1460_80_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->force_frame((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)/math_helper/2)%math_helper%6);
        }
    }
    event_1460_80_end: ;
}
void Frames::event_func_18088()
{
    // event 1461_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1461_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1461_80_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+80))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1461_80_end;
        if (not_always_1461_80 > loop_count) {
            not_always_1461_80 = loop_count + 2;
            goto event_1461_80_end;
        }
        not_always_1461_80 = loop_count + 2;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1461_80_end: ;
}
void Frames::event_func_18089()
{
    // event 1462_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1462_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1462_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1462_80_end;
        ((Active*)get_instance(npccarolcling_3961_instances))->force_frame(1);
    }
    event_1462_80_end: ;
}
void Frames::event_func_18090()
{
    // event 1463_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1463_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1463_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_1463_80_end;
        ((Active*)get_instance(npccarolcling_3961_instances))->force_frame(2);
    }
    event_1463_80_end: ;
}
void Frames::event_func_18091()
{
    // event 1464_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1464_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1464_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1464_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()-70))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1464_80_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1464_80_end: ;
}
void Frames::event_func_18092()
{
    // event 1465_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1465_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1465_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1465_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()-70))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1465_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(3)) == (0))) goto event_1465_80_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(2, -8);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(3, 1);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        FrameObject * single_instance_1465_80_0; single_instance_1465_80_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1465_80_0 == NULL)
                    single_instance_1465_80_0 = new_obj;
            }
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
    }
    event_1465_80_end: ;
}
void Frames::event_func_18093()
{
    // event 1466_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1466_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(3)) == (1))) goto event_1466_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 0.3);
    }
    event_1466_80_end: ;
}
void Frames::event_func_18094()
{
    // event 1467_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1467_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(3)) == (1))) goto event_1467_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (0))) goto event_1467_80_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(shipplatform2_2094_instances, default_active_instance))->get_y()-14))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1467_80_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(3, 2);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1467_80_end: ;
}
void Frames::event_func_18095()
{
    // event 1468_80
    bool or_result_1468_80 = false;
    bool or_temp_result_1468_80_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto or_event_1468_80_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1468_80_0_end;
        or_result_1468_80 = true;
        or_temp_result_1468_80_0 = true;
    }
    or_event_1468_80_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1468_80_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1468_80
    bool or_temp_result_1468_80_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto or_event_1468_80_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1468_80_1_end;
        or_result_1468_80 = true;
        or_temp_result_1468_80_1 = true;
    }
    or_event_1468_80_1_end: ;
    if (or_temp_result_1468_80_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1468_80
    bool or_temp_result_1468_80_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto or_event_1468_80_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1468_80_2_end;
        or_result_1468_80 = true;
        or_temp_result_1468_80_2 = true;
        or_event_1468_80_2_end: ;
        if (or_temp_result_1468_80_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1468_80) goto or_final_or_event_1468_80_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1468_80_0 || or_temp_result_1468_80_1 || or_temp_result_1468_80_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1468_80_2_end: ;
}
void Frames::event_func_18096()
{
    // event 1469_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1469_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1469_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_1469_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1469_80_end: ;
}
void Frames::event_func_18097()
{
    // event 1470_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1470_80_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1470_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1470_80_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1470_80_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(1);
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
    event_1470_80_end: ;
}
void Frames::event_func_18098()
{
    // event 1471_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1471_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1471_80_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_1471_80_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1471_80_end: ;
}
void Frames::event_func_18099()
{
    // event 1472_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1472_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1472_80_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_1472_80_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1472_80_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npccarolcling_3961_instances))->set_visible(false);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(1420);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(51);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(1540);
            ((Active*)*it)->set_visible(true);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1460);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(1500);
        }
    }
    event_1472_80_end: ;
}
void Frames::event_func_18100()
{
    // event 1473_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1473_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (3))) goto event_1473_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1473_80_end: ;
}
void Frames::event_func_18101()
{
    // event 1474_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1474_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1474_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1474_80_end: ;
}
void Frames::event_func_18102()
{
    // event 1475_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1475_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1475_80_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(1420);
        }
    }
    event_1475_80_end: ;
}
void Frames::event_func_18103()
{
    // event 1476_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1476_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1476_80_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1476_80_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1476_80_end: ;
}
void Frames::event_func_18104()
{
    // event 1477_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1477_80_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1477_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1477_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (6))) goto event_1477_80_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1477_80_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1477_80_end: ;
}
void Frames::event_func_18105()
{
    // event 1478_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1478_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (3))) goto event_1478_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (4))) goto event_1478_80_end;
        if (!((media.get_channel_position(-1 +20)) > (2700))) goto event_1478_80_end;
        if (once_condition_1478_80) goto event_1478_80_end;
        once_condition_1478_80 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1478_80_end: ;
}
void Frames::event_func_18106()
{
    // event 1479_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1479_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (3))) goto event_1479_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (4))) goto event_1479_80_end;
        if (!((media.get_channel_position(-1 +20)) > (2700))) goto event_1479_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 12);
    }
    event_1479_80_end: ;
}
void Frames::event_func_18107()
{
    // event 1480_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1480_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (3))) goto event_1480_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (4))) goto event_1480_80_end;
        if (!((media.get_channel_position(-1 +20)) > (5000))) goto event_1480_80_end;
        if (once_condition_1480_80) goto event_1480_80_end;
        once_condition_1480_80 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(54);
        }
    }
    event_1480_80_end: ;
}
void Frames::event_func_18108()
{
    // event 1481_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1481_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (3))) goto event_1481_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (4))) goto event_1481_80_end;
        if (!((media.get_channel_position(-1 +20)) > (5000))) goto event_1481_80_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 54);
    }
    event_1481_80_end: ;
}
void Frames::event_func_18109()
{
    // event 1482_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1482_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1482_80_end;
        if (once_condition_1482_80) goto event_1482_80_end;
        once_condition_1482_80 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(5);
            ((Active*)*it)->force_speed(0);
        }
        media.stop_channel(20-1);
    }
    event_1482_80_end: ;
}
void Frames::event_func_18110()
{
    // event 1483_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1483_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1483_80_end;
        if (!((media.get_channel_position(-1 +20)) > (1700))) goto event_1483_80_end;
        if (once_condition_1483_80) goto event_1483_80_end;
        once_condition_1483_80 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1483_80_end: ;
}
void Frames::event_func_18111()
{
    // event 1484_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1484_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1484_80_end;
        if (!((media.get_channel_position(-1 +20)) > (3500))) goto event_1484_80_end;
        if (once_condition_1484_80) goto event_1484_80_end;
        once_condition_1484_80 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 42);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(42);
        }
    }
    event_1484_80_end: ;
}
void Frames::event_func_18112()
{
    // event 1485_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1485_80_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1485_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1485_80_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1485_80_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(42);
        }
    }
    event_1485_80_end: ;
}
void Frames::event_func_18113()
{
    // event 1486_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1486_80_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1486_80_end;
        if (once_condition_1486_80) goto event_1486_80_end;
        once_condition_1486_80 = true;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1486_80_end: ;
}
void Frames::event_func_18114()
{
    // event 1487_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1487_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1487_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1487_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1487_80_end: ;
}
void Frames::event_func_18115()
{
    // event 1488_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1488_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1488_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1488_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (120))) goto event_1488_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1488_80_end: ;
}
void Frames::event_func_18116()
{
    // event 1489_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1489_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1489_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1489_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1489_80_end: ;
}
void Frames::event_func_18117()
{
    // event 1490_80
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_route_to_shang_tu_1)) goto event_1490_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1490_80_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1490_80_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1490_80_end: ;
}
