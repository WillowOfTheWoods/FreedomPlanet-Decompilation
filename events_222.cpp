#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17569()
{
    // event 1545_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1545_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1545_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1545_78_end: ;
}
void Frames::event_func_17570()
{
    // event 1586_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1586_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1586_78_end: ;
}
void Frames::loop_voice_78()
{
    event_func_17567();
    event_func_17568();
    event_func_17569();
    event_func_17570();
}
void Frames::loop_wrapper_sound_kick1_78(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_78(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_78(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_78(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_78(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_dig2_78(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_78(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_78(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_process_call_reset_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_78(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_78(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_78(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_78(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_camera_mode1_78(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_78(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_play_music_2_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_46();
}
void Frames::loop_wrapper_sound_attack1_78(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_78(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_78(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_78(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_78(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_78();
}
void Frames::loop_wrapper_play_music_6_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_78();
}
void Frames::loop_wrapper_sound_go0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_process_call_me_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_78(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_68();
}
void Frames::loop_wrapper_process_call_unqueue_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_sound_cyclone0_78(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_78(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::test_collisions_78()
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
void Frames::event_func_17571()
{
    // event 679_78
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_679_78_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_679_78_end;
        FrameObject * single_instance_679_78_0; single_instance_679_78_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_679_78_0 == NULL)
                    single_instance_679_78_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_78();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_679_78_end: ;
}
void Frames::event_func_17572()
{
    // event 1417_78
    {
        if (!(group_main_engine_1)) goto event_1417_78_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1417_78_end;
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1417_78_end: ;
}
void Frames::event_func_17573()
{
    // event 1418_78
    {
        if (!(group_main_engine_1)) goto event_1418_78_end;
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1418_78_end;
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        FrameObject * single_instance_1418_78_0; single_instance_1418_78_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytotematic_3103_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1418_78_0 == NULL)
                    single_instance_1418_78_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_78();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1418_78_end: ;
}
void Frames::event_func_17574()
{
    // event 1441_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1441_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1441_78_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2670);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 970);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            if (parent == NULL) goto pos_end_1441_78_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -80, parent->get_y() + 0);
            pos_end_1441_78_0: ;
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            if (parent == NULL) goto pos_end_1441_78_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -160, parent->get_y() + 0);
            pos_end_1441_78_1: ;
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            if (parent == NULL) goto pos_end_1441_78_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -200, parent->get_y() + 0);
            pos_end_1441_78_2: ;
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1441_78_end: ;
}
void Frames::event_func_17575()
{
    // event 1442_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1442_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1442_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1442_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1442_78_end: ;
}
void Frames::event_func_17576()
{
    // event 1443_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1443_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1443_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+4);
    }
    event_1443_78_end: ;
}
void Frames::event_func_17577()
{
    // event 1444_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1444_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1444_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)))) goto event_1444_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(18);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1444_78_end: ;
}
void Frames::event_func_17578()
{
    // event 1445_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1445_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1445_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1445_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcshellduck_533_instances))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1445_78_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1445_78_end: ;
}
void Frames::event_func_17579()
{
    // event 1446_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1446_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1446_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1446_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1446_78_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1446_78_end: ;
}
void Frames::event_func_17580()
{
    // event 1447_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1447_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1447_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1447_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcshellduck_533_instances))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1447_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1447_78_end: ;
}
void Frames::event_func_17581()
{
    // event 1448_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1448_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1448_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1448_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1448_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1448_78_end: ;
}
void Frames::event_func_17582()
{
    // event 1449_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1449_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1449_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1449_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcshellduck_533_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1449_78_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1449_78_end: ;
}
void Frames::event_func_17583()
{
    // event 1450_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1450_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (1))) goto event_1450_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1450_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1450_78_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1450_78_end: ;
}
void Frames::event_func_17584()
{
    // event 1451_78
    bool or_result_1451_78 = false;
    bool or_temp_result_1451_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1451_78_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1451_78_0_end;
        or_result_1451_78 = true;
        or_temp_result_1451_78_0 = true;
    }
    or_event_1451_78_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1451_78_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1451_78
    bool or_temp_result_1451_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1451_78_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1451_78_1_end;
        or_result_1451_78 = true;
        or_temp_result_1451_78_1 = true;
    }
    or_event_1451_78_1_end: ;
    if (or_temp_result_1451_78_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1451_78
    bool or_temp_result_1451_78_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1451_78_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1451_78_2_end;
        or_result_1451_78 = true;
        or_temp_result_1451_78_2 = true;
        or_event_1451_78_2_end: ;
        if (or_temp_result_1451_78_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1451_78) goto or_final_or_event_1451_78_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1451_78_0 || or_temp_result_1451_78_1 || or_temp_result_1451_78_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1451_78_2_end: ;
}
void Frames::event_func_17585()
{
    // event 1452_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1452_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1452_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1452_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1452_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1452_78_end: ;
}
void Frames::event_func_17586()
{
    // event 1453_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1453_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1453_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1453_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1453_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1453_78_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1453_78_end: ;
}
void Frames::event_func_17587()
{
    // event 1454_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1454_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1454_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1454_78_end: ;
}
void Frames::event_func_17588()
{
    // event 1455_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1455_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1455_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (15))) goto event_1455_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1455_78_end: ;
}
void Frames::event_func_17589()
{
    // event 1456_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1456_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1456_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1456_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1456_78_end: ;
}
void Frames::event_func_17590()
{
    // event 1457_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1457_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1457_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1457_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1457_78_end: ;
}
void Frames::event_func_17591()
{
    // event 1458_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1458_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1458_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1458_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1458_78_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1458_78_end: ;
}
void Frames::event_func_17592()
{
    // event 1459_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1459_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1459_78_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 3);
    }
    event_1459_78_end: ;
}
void Frames::event_func_17593()
{
    // event 1460_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1460_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1460_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1460_78_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 4);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1460_78_end: ;
}
void Frames::event_func_17594()
{
    // event 1461_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1461_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1461_78_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (776))) goto event_1461_78_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 1);
    }
    event_1461_78_end: ;
}
void Frames::event_func_17595()
{
    // event 1462_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1462_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1462_78_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (840))) goto event_1462_78_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
    }
    event_1462_78_end: ;
}
void Frames::event_func_17596()
{
    // event 1463_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1463_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1463_78_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (760))) goto event_1463_78_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
    }
    event_1463_78_end: ;
}
void Frames::event_func_17597()
{
    // event 1464_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1464_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1464_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1464_78_end: ;
}
void Frames::event_func_17598()
{
    // event 1465_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1465_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1465_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (160))) goto event_1465_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
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
    event_1465_78_end: ;
}
void Frames::event_func_17599()
{
    // event 1466_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1466_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1466_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1466_78_end: ;
}
void Frames::event_func_17600()
{
    // event 1467_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1467_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1467_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1467_78_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 8);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcgong_634_instances, it.current_index, default_active_instance))->get_y()+1);
            ((Active*)*it)->set_x(2600);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcgong_634_instances, it.current_index, default_active_instance))->get_y()+1);
            ((Active*)*it)->set_x(2680);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcgong_634_instances, it.current_index, default_active_instance))->get_y()+1);
            ((Active*)*it)->set_x(((Active*)get_instance(npcgong_634_instances, it.current_index, default_active_instance))->get_x()+160);
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(((Active*)get_instance(npcgong_634_instances, default_active_instance))->get_y());
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(2500);
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1467_78_end: ;
}
void Frames::event_func_17601()
{
    // event 1468_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1468_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1468_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2100);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 700);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1468_78_end: ;
}
void Frames::event_func_17602()
{
    // event 1469_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1469_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1469_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1469_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1469_78_end: ;
}
void Frames::event_func_17603()
{
    // event 1470_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1470_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (8))) goto event_1470_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (9))) goto event_1470_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-4);
    }
    event_1470_78_end: ;
}
void Frames::event_func_17604()
{
    // event 1471_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1471_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1471_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) < (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+160))) goto event_1471_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1471_78_end: ;
}
void Frames::event_func_17605()
{
    // event 1472_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1472_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1472_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1472_78_end: ;
}
void Frames::event_func_17606()
{
    // event 1473_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1473_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1473_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcshellduck_533_instances))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1473_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1473_78_end: ;
}
void Frames::event_func_17607()
{
    // event 1474_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1474_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1474_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1474_78_end: ;
}
void Frames::event_func_17608()
{
    // event 1475_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1475_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1475_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1475_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1475_78_end: ;
}
void Frames::event_func_17609()
{
    // event 1476_78
    bool or_result_1476_78 = false;
    bool or_temp_result_1476_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1476_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1476_78_0_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1476_78_0_end;
        or_result_1476_78 = true;
        or_temp_result_1476_78_0 = true;
    }
    or_event_1476_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    dialogarrow_568_instances.clear_saved_selection();
    if (or_temp_result_1476_78_0) {
        dialogbox_566_instances.save_selection();
        dialogarrow_568_instances.save_selection();
    }
    // event 1476_78
    bool or_temp_result_1476_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1476_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (19))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1476_78_1_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1476_78_1_end;
        or_result_1476_78 = true;
        or_temp_result_1476_78_1 = true;
        or_event_1476_78_1_end: ;
        if (or_temp_result_1476_78_1) {
            dialogbox_566_instances.save_selection();
            dialogarrow_568_instances.save_selection();
        }
        if (!or_result_1476_78) goto or_final_or_event_1476_78_1_end;
        dialogbox_566_instances.empty_selection();
        dialogarrow_568_instances.empty_selection();
        if (or_temp_result_1476_78_0 || or_temp_result_1476_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1476_78_0 || or_temp_result_1476_78_1) {
            dialogarrow_568_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.stop_channel(20-1);
    }
    or_final_or_event_1476_78_1_end: ;
}
void Frames::event_func_17610()
{
    // event 1477_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1477_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1477_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1477_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1477_78_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1477_78_end: ;
}
void Frames::event_func_17611()
{
    // event 1478_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1478_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1478_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
    }
    event_1478_78_end: ;
}
void Frames::event_func_17612()
{
    // event 1479_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1479_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1479_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (50))) goto event_1479_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1479_78_end: ;
}
void Frames::event_func_17613()
{
    // event 1480_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1480_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1480_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1480_78_end: ;
}
void Frames::event_func_17614()
{
    // event 1481_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1481_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1481_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1481_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1481_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1481_78_end: ;
}
void Frames::event_func_17615()
{
    // event 1482_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1482_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1482_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1482_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1482_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1482_78_end: ;
}
void Frames::event_func_17616()
{
    // event 1483_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1483_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1483_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1483_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-70))) goto event_1483_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-4);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_1483_78_end: ;
}
void Frames::event_func_17617()
{
    // event 1484_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1484_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1484_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1484_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) <= (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-70))) goto event_1484_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_1484_78_end: ;
}
void Frames::event_func_17618()
{
    // event 1485_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1485_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1485_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1485_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1485_78_end: ;
}
void Frames::event_func_17619()
{
    // event 1486_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1486_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1486_78_end;
        if (not_always_1486_78 > loop_count) {
            not_always_1486_78 = loop_count + 2;
            goto event_1486_78_end;
        }
        not_always_1486_78 = loop_count + 2;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1486_78_end: ;
}
void Frames::event_func_17620()
{
    // event 1487_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1487_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1487_78_end;
        if (not_always_1487_78 > loop_count) {
            not_always_1487_78 = loop_count + 2;
            goto event_1487_78_end;
        }
        not_always_1487_78 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1487_78_end: ;
}
void Frames::event_func_17621()
{
    // event 1488_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1488_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1488_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1488_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1488_78_end: ;
}
