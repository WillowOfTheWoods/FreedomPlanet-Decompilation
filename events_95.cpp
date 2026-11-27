#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_reset_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_petal_loss_33(void * frame)
{
    ((Frames*)frame)->loop_petal_loss_13();
}
void Frames::loop_wrapper_player01down_33(void * frame)
{
    ((Frames*)frame)->loop_player01down_13();
}
void Frames::loop_wrapper_spawn_rings_33(void * frame)
{
    ((Frames*)frame)->loop_spawn_rings_13();
}
void Frames::loop_wrapper_camera_mode1_33(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_player01slopesup_33(void * frame)
{
    ((Frames*)frame)->loop_player01slopesup_13();
}
void Frames::loop_wrapper_lamp_33(void * frame)
{
    ((Frames*)frame)->loop_lamp_29();
}
void Frames::loop_wrapper_player01detectsensoredges_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensoredges_13();
}
void Frames::loop_wrapper_player01detectsensorbottom_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorbottom_13();
}
void Frames::loop_wrapper_player01detectsensorleft_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorleft_13();
}
void Frames::loop_wrapper_iterate_query_me_stop_33(void * frame)
{
    ((Frames*)frame)->loop_iterate_query_me_stop_13();
}
void Frames::loop_wrapper_plaftorms_updateposition_33(void * frame)
{
    ((Frames*)frame)->loop_plaftorms_updateposition_14();
}
void Frames::loop_wrapper_process_call_fadeout_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_record_inputs_33(void * frame)
{
    ((Frames*)frame)->loop_record_inputs_0();
}
void Frames::loop_wrapper_stop_player_33(void * frame)
{
    ((Frames*)frame)->loop_stop_player_13();
}
void Frames::loop_wrapper_reposition_skin_33(void * frame)
{
    ((Frames*)frame)->loop_reposition_skin_13();
}
void Frames::loop_wrapper_sound_explode8_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_sound_uppercut3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_process_call_lock_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_sound_go0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_weapon_33(void * frame)
{
    ((Frames*)frame)->loop_weapon_13();
}
void Frames::loop_wrapper_player01wallcollision_33(void * frame)
{
    ((Frames*)frame)->loop_player01wallcollision_13();
}
void Frames::loop_wrapper_sound_explode3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_player01detectcharactersensor_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectcharactersensor_13();
}
void Frames::loop_wrapper_p2_33(void * frame)
{
    ((Frames*)frame)->loop_p2_32();
}
void Frames::loop_wrapper_sound_cyclone0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_player01detectsensorright_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorright_13();
}
void Frames::loop_wrapper_p4_33(void * frame)
{
    ((Frames*)frame)->loop_p4_32();
}
void Frames::loop_wrapper_player01detectsensortop_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensortop_13();
}
void Frames::loop_wrapper_sound_explode1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_33()
{
    test_collisions(qualifier_20, enemypellet_863_instances, 2147483648, 1, (EventFunction)&Frames::col_11_30);
    test_collisions(qualifier_7, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 2, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 268435456, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_1_30);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 2, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 33554432, 8, (EventFunction)&Frames::col_8_20);
    test_collisions(qualifier_8, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(shieldflamefront_316_instances, enemyflare_1787_instances, 1, 1, (EventFunction)&Frames::col_18_30);
    test_collisions(player_389_instances, enemyflare_1787_instances, 1, 2, (EventFunction)&Frames::col_19_30);
    test_collisions(qualifier_8, enemyflare_1787_instances, 8388608, 4, (EventFunction)&Frames::col_7_30);
    test_collisions(qualifier_20, playerprojectile_320_instances, 4194304, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 2097152, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 1048576, 4, (EventFunction)&Frames::col_1_13);
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
    for (it1 = enemyflare_1787_instances.begin(); it1 != enemyflare_1787_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_26_30();
    }
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
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
    for (it1 = enemylaser_1626_instances.begin(); it1 != enemylaser_1626_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_29();
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
void Frames::event_func_7744()
{
    // event 1416_33
    {
        if (!(group_main_engine_1)) goto event_1416_33_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1416_33_end;
        if (not_always_1416_33 > loop_count) {
            not_always_1416_33 = loop_count + 2;
            goto event_1416_33_end;
        }
        not_always_1416_33 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1416_33_end: ;
}
void Frames::event_func_7745()
{
    // event 1459_33
    {
        if (!(group_main_engine_1)) goto event_1459_33_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1459_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+cos_deg(((Active*)get_single(qualifier_23, default_active_instance))->get_angle())*32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x()+sin_deg(((Active*)get_single(qualifier_23, default_active_instance))->get_angle())*32);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_single(qualifier_23, default_active_instance))->get_angle());
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_13();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
    }
    event_1459_33_end: ;
}
void Frames::event_func_7746()
{
    // event 1461_33
    bool or_result_1461_33 = false;
    bool or_temp_result_1461_33_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1461_33_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1461_33_0_end;
        or_result_1461_33 = true;
        or_temp_result_1461_33_0 = true;
    }
    or_event_1461_33_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1461_33_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1461_33
    bool or_temp_result_1461_33_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1461_33_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1461_33_1_end;
        or_result_1461_33 = true;
        or_temp_result_1461_33_1 = true;
        or_event_1461_33_1_end: ;
        if (or_temp_result_1461_33_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1461_33) goto or_final_or_event_1461_33_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1461_33_0 || or_temp_result_1461_33_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakablewall_1748_instances.clear_selection();
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1461_33_1_end: ;
}
void Frames::event_func_7747()
{
    // event 1469_33
    {
        if (!(group_main_engine_1)) goto event_1469_33_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor1_1760_instances.has_selection()) goto event_1469_33_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece_1625_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor1_1760_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1469_33_end: ;
}
void Frames::event_func_7748()
{
    // event 1470_33
    {
        if (!(group_main_engine_1)) goto event_1470_33_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1470_33_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece_1625_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor2_1761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1980(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1470_33_end: ;
}
void Frames::event_func_7749()
{
    // event 1491_33
    {
        if (!(group_main_engine_1)) goto event_1491_33_end;
        carousel_1988_instances.clear_selection();
        for (ObjectIterator it(carousel_1988_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+cos_deg(((Active*)*it)->alterables->values.get(1)-90)*112);
            ((Active*)*it)->set_x_scale(0.5+cos_deg(((Active*)*it)->alterables->values.get(1)*2)*0.5);
            ((Active*)*it)->move_back();
            ((Active*)*it)->force_frame(7+sin_deg(((Active*)*it)->alterables->values.get(1)+5)*7);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+359)%math_helper%360);
        }
    }
    event_1491_33_end: ;
}
void Frames::event_func_7750()
{
    // event 1492_33
    {
        if (!(group_main_engine_1)) goto event_1492_33_end;
        carousel_1988_instances.clear_selection();
        for (ObjectIterator it(carousel_1988_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (270))) { it.deselect(); continue; }
        }
        if (!carousel_1988_instances.has_selection()) goto event_1492_33_end;
        for (ObjectIterator it(carousel_1988_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1492_33_end: ;
}
void Frames::event_func_7751()
{
    // event 1506_33
    {
        if (!(group_main_engine_1)) goto event_1506_33_end;
        enemyballoon_1947_instances.clear_selection();
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyballoon_1947_instances.has_selection()) goto event_1506_33_end;
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_animation(8);
        }
        FrameObject * single_instance_1506_33_0; single_instance_1506_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectextralife_304(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1506_33_0 == NULL)
                    single_instance_1506_33_0 = new_obj;
            }
        }
    }
    event_1506_33_end: ;
}
void Frames::event_func_7752()
{
    // event 1559_33
    {
        if (!(group_main_engine_1)) goto event_1559_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1559_33_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1559_33_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 10);
        ((Active*)get_instance(playerskinsash_418_instances))->move_back();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_back();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1559_33_end: ;
}
void Frames::event_func_7753()
{
    // event 1560_33
    {
        if (!(group_main_engine_1)) goto event_1560_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1560_33_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1560_33_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 10);
        ((Active*)get_instance(playerskinsash_418_instances))->move_back();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_back();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1560_33_end: ;
}
void Frames::event_func_7754()
{
    // event 1590_33
    {
        if (!(group_main_engine_1)) goto event_1590_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1590_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, -0.7*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)));
        }
    }
    event_1590_33_end: ;
}
void Frames::event_func_7755()
{
    // event 1591_33
    {
        if (!(group_main_engine_1)) goto event_1591_33_end;
        player_389_instances.clear_selection();
        gimmickelevatordoor_2019_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickelevatordoor_2019_instances)) goto event_1591_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1591_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_1591_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_single(gimmickelevatordoor_2019_instances, default_active_instance))->get_x()))) goto event_1591_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 43);
        media.play_id(SOUND_DINGDONG_251, -1, 1);
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1591_33_end: ;
}
void Frames::event_func_7756()
{
    // event 1592_33
    {
        if (!(group_main_engine_1)) goto event_1592_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1592_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(10));
        }
    }
    event_1592_33_end: ;
}
void Frames::event_func_7757()
{
    // event 1593_33
    {
        if (!(group_main_engine_1)) goto event_1593_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1593_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(10));
        }
    }
    event_1593_33_end: ;
}
void Frames::event_func_7758()
{
    // event 1594_33
    {
        if (!(group_main_engine_1)) goto event_1594_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1594_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(9, ((((Active*)*it)->alterables->values.get(6)%math_helper%360)+360)%math_helper%360);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(4)-32*sin_deg(((Active*)*it)->alterables->values.get(6)+90));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(5)-((Active*)*it)->alterables->values.get(6)/math_helper/((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1594_33_end: ;
}
void Frames::event_func_7759()
{
    // event 1595_33
    {
        if (!(group_main_engine_1)) goto event_1595_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (-360*2-180))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1595_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(gimmickelevatordoor_2019_instances, default_active_instance))->alterables->values.get(1)*-0.5);
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1595_33_end: ;
}
void Frames::event_func_7760()
{
    // event 1596_33
    {
        if (!(group_main_engine_1)) goto event_1596_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1596_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1596_33_end: ;
}
void Frames::event_func_7761()
{
    // event 1597_33
    {
        if (!(group_main_engine_1)) goto event_1597_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1597_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_frame(12-12*(((((Active*)*it)->alterables->values.get(9)+15)%math_helper%360)/math_helper/360));
        }
    }
    event_1597_33_end: ;
}
void Frames::event_func_7762()
{
    // event 1598_33
    {
        if (!(group_main_engine_1)) goto event_1598_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1598_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_frame((0+12*((((360*((Active*)*it)->alterables->values.get(8))+15)%math_helper%360)/math_helper/360))+1);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1598_33_end: ;
}
void Frames::event_func_7763()
{
    // event 1599_33
    {
        if (!(group_main_engine_1)) goto event_1599_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1599_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_frame(0+12*(((((Active*)*it)->alterables->values.get(9)+15)%math_helper%360)/math_helper/360));
        }
    }
    event_1599_33_end: ;
}
void Frames::event_func_7764()
{
    // event 1600_33
    {
        if (!(group_main_engine_1)) goto event_1600_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1600_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickelevatordoor_2019_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickelevatordoor_2019_instances, default_active_instance))->alterables->values.get(3)+10);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1600_33_end: ;
}
void Frames::event_func_7765()
{
    // event 1601_33
    {
        if (!(group_main_engine_1)) goto event_1601_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        if (!check_overlap(gimmickelevatordoor_2019_instances, gimmickelevator_2020_instances)) goto event_1601_33_end;
        for (ObjectIterator it(gimmickelevator_2020_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickelevatordoor_2019_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickelevatordoor_2019_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1601_33_end: ;
}
void Frames::event_func_7766()
{
    // event 1602_33
    {
        if (!(group_main_engine_1)) goto event_1602_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        gimmickpolepodcaseinner_2013_instances.clear_selection();
        if (!check_overlap(gimmickelevatordoor_2019_instances, gimmickpolepodcaseinner_2013_instances)) goto event_1602_33_end;
        for (ObjectIterator it(gimmickpolepodcaseinner_2013_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickelevatordoor_2019_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickelevatordoor_2019_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1602_33_end: ;
}
void Frames::event_func_7767()
{
    // event 1603_33
    {
        if (!(group_main_engine_1)) goto event_1603_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1603_33_end: ;
}
void Frames::event_func_7768()
{
    // event 1604_33
    {
        if (!(group_main_engine_1)) goto event_1604_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1604_33_end;
        gimmickelevator_2020_instances.clear_selection();
        if (!check_overlap(gimmickelevatordoor_2019_instances, gimmickelevator_2020_instances)) goto event_1604_33_end;
        if (!check_not_overlap(gimmickelevator_2020_instances, playersensorbottombig_397_instances)) goto event_1604_33_end;
        for (ObjectIterator it(gimmickelevator_2020_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1604_33_end: ;
}
void Frames::event_func_7769()
{
    // event 1605_33
    {
        if (!(group_main_engine_1)) goto event_1605_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (1))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1605_33_end;
        gimmickelevator_2020_instances.clear_selection();
        if (!check_overlap(gimmickelevatordoor_2019_instances, gimmickelevator_2020_instances)) goto event_1605_33_end;
        for (ObjectIterator it(gimmickelevator_2020_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1605_33_end: ;
}
void Frames::event_func_7770()
{
    // event 1606_33
    {
        if (!(group_main_engine_1)) goto event_1606_33_end;
        gimmickelevatorpole_2012_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatorpole_2012_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1606_33_end: ;
}
void Frames::event_func_7771()
{
    // event 1607_33
    {
        if (!(group_main_engine_1)) goto event_1607_33_end;
        gimmickelevator_2020_instances.clear_selection();
        gimmickelevatorpole_2012_instances.clear_selection();
        if (!check_overlap(gimmickelevator_2020_instances, gimmickelevatorpole_2012_instances)) goto event_1607_33_end;
        gimmickelevatordoor_2019_instances.clear_selection();
        if (!check_overlap(gimmickelevator_2020_instances, gimmickelevatordoor_2019_instances)) goto event_1607_33_end;
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (90.0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (270.0))) { it.deselect(); continue; }
        }
        if (!gimmickelevatordoor_2019_instances.has_selection()) goto event_1607_33_end;
        for (ObjectIterator it(gimmickelevatorpole_2012_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1607_33_end: ;
}
void Frames::event_func_7772()
{
    // event 1765_33
    {
        if (!(group_main_engine_1)) goto event_1765_33_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 6986, 1025, 7093, 1072)) > (0))) goto event_1765_33_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1765_33_end: ;
}
void Frames::event_func_7773()
{
    // event 1766_33
    {
        if (!(group_main_engine_1)) goto event_1766_33_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 6667, 713, 7028, 760)) > (0))) goto event_1766_33_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1766_33_end: ;
}
void Frames::event_func_7774()
{
    // event 1773_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1773_33_end;
        if (!((frame_right()) > (((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)))) goto event_1773_33_end;
        if (not_always_1773_33 > loop_count) {
            not_always_1773_33 = loop_count + 2;
            goto event_1773_33_end;
        }
        not_always_1773_33 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
        ((Active*)get_instance(ship1_1982_instances))->set_visible(true);
        ((Active*)get_instance(ship2_1985_instances))->set_visible(true);
        ((Active*)get_instance(shipcable_1983_instances))->set_visible(true);
        ((Active*)get_instance(shipcable2_1979_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1773_33_end: ;
}
void Frames::event_func_7775()
{
    // event 1774_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1774_33_end;
        if (!((frame_left()) < (11400))) goto event_1774_33_end;
        if (not_always_1774_33 > loop_count) {
            not_always_1774_33 = loop_count + 2;
            goto event_1774_33_end;
        }
        not_always_1774_33 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(true);
        ((Active*)get_instance(ship1_1982_instances))->set_visible(false);
        ((Active*)get_instance(ship2_1985_instances))->set_visible(false);
        ((Active*)get_instance(shipcable_1983_instances))->set_visible(false);
        ((Active*)get_instance(shipcable2_1979_instances))->set_visible(false);
    }
    event_1774_33_end: ;
}
void Frames::event_func_7776()
{
    // event 1775_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1775_33_end;
        if (!(((Active*)get_instance(ship2_1985_instances))->flags & VISIBLE)) goto event_1775_33_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1775_33_end;
        ((Active*)get_instance(ship2_1985_instances))->set_x(((Active*)get_instance(ship2_1985_instances))->get_x()+1);
    }
    event_1775_33_end: ;
}
void Frames::event_func_7777()
{
    // event 1776_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1776_33_end;
        if (!(((Active*)get_instance(ship2_1985_instances))->flags & VISIBLE)) goto event_1776_33_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1776_33_end;
        ((Active*)get_instance(ship1_1982_instances))->set_x(((Active*)get_instance(ship1_1982_instances))->get_x()+1);
    }
    event_1776_33_end: ;
}
void Frames::event_func_7778()
{
    // event 1777_33
    bool or_result_1777_33 = false;
    bool or_temp_result_1777_33_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto or_event_1777_33_0_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1777_33_0_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto or_event_1777_33_0_end;
        or_result_1777_33 = true;
        or_temp_result_1777_33_0 = true;
    }
    or_event_1777_33_0_end: ;
    ship2_1985_instances.clear_saved_selection();
    if (or_temp_result_1777_33_0) {
        ship2_1985_instances.save_selection();
    }
    // event 1777_33
    bool or_temp_result_1777_33_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto or_event_1777_33_1_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1777_33_1_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto or_event_1777_33_1_end;
        or_result_1777_33 = true;
        or_temp_result_1777_33_1 = true;
        or_event_1777_33_1_end: ;
        if (or_temp_result_1777_33_1) {
            ship2_1985_instances.save_selection();
        }
        if (!or_result_1777_33) goto or_final_or_event_1777_33_1_end;
        ship2_1985_instances.empty_selection();
        if (or_temp_result_1777_33_0 || or_temp_result_1777_33_1) {
            ship2_1985_instances.restore_selection();
        }
        FrameObject * single_instance_1777_33_0; single_instance_1777_33_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ship2_1985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_1984(parent->x + -56, parent->y + 18), parent->layer);
                if (single_instance_1777_33_0 == NULL)
                    single_instance_1777_33_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1777_33_0))->set_x(((Active*)single_instance_1777_33_0)->get_x()+randrange(120));
        ((Active*)((Active*)single_instance_1777_33_0))->set_angle(30-randrange(61), 0);
    }
    or_final_or_event_1777_33_1_end: ;
}
void Frames::event_func_7779()
{
    // event 1778_33
    bool or_result_1778_33 = false;
    bool or_temp_result_1778_33_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto or_event_1778_33_0_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1778_33_0_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto or_event_1778_33_0_end;
        or_result_1778_33 = true;
        or_temp_result_1778_33_0 = true;
    }
    or_event_1778_33_0_end: ;
    ship2_1985_instances.clear_saved_selection();
    if (or_temp_result_1778_33_0) {
        ship2_1985_instances.save_selection();
    }
    // event 1778_33
    bool or_temp_result_1778_33_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto or_event_1778_33_1_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1778_33_1_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto or_event_1778_33_1_end;
        or_result_1778_33 = true;
        or_temp_result_1778_33_1 = true;
        or_event_1778_33_1_end: ;
        if (or_temp_result_1778_33_1) {
            ship2_1985_instances.save_selection();
        }
        if (!or_result_1778_33) goto or_final_or_event_1778_33_1_end;
        ship2_1985_instances.empty_selection();
        if (or_temp_result_1778_33_0 || or_temp_result_1778_33_1) {
            ship2_1985_instances.restore_selection();
        }
        FrameObject * single_instance_1778_33_0; single_instance_1778_33_0 = NULL;
        // select single: true false false
        ship1_1982_instances.clear_selection();
        for (ObjectIterator p_it(ship1_1982_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_1984(parent->x + -31, parent->y + 9), parent->layer);
                if (single_instance_1778_33_0 == NULL)
                    single_instance_1778_33_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1778_33_0))->set_x(((Active*)single_instance_1778_33_0)->get_x()+randrange(60));
        ((Active*)((Active*)single_instance_1778_33_0))->set_angle(30-randrange(61), 0);
        ((Active*)((Active*)single_instance_1778_33_0))->set_direction(1);
    }
    or_final_or_event_1778_33_1_end: ;
}
void Frames::event_func_7780()
{
    // event 1779_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1779_33_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (0))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1779_33_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8-((Active*)*it)->get_direction()*4);
            ((Active*)*it)->alterables->values.add(0, 1-((Active*)*it)->get_direction()*0.5);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)*it)->get_angle())*(4-((Active*)*it)->get_direction()*2));
        }
    }
    event_1779_33_end: ;
}
void Frames::event_func_7781()
{
    // event 1780_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1780_33_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1780_33_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1780_33_end: ;
}
void Frames::event_func_7782()
{
    // event 1781_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1781_33_end;
        if (!(((Active*)get_instance(ship2_1985_instances))->flags & VISIBLE)) goto event_1781_33_end;
        ((Active*)get_instance(ship2_1985_instances))->set_y(frame_top()*0.95+50);
        ((Active*)get_instance(shipcable_1983_instances))->set_x(((Active*)get_instance(ship2_1985_instances))->get_x());
        ((Active*)get_instance(shipcable_1983_instances))->set_y(((Active*)get_instance(ship2_1985_instances))->get_action_y()+((Active*)get_instance(ship2_1985_instances))->alterables->values.get(0));
        {
            FrameObject * parent = ((Active*)get_instance(shipcable_1983_instances));
            if (parent == NULL) goto pos_end_1781_33_0;
            ((Active*)get_instance(shipcable2_1979_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1781_33_0: ;
        }
        ((Active*)get_instance(ship1_1982_instances))->set_y(frame_top()*0.97+50);
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.set(0, get_max(((Active*)get_instance(ship2_1985_instances))->alterables->values.get(0)-0.2, 0));
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.add(1, 1);
    }
    event_1781_33_end: ;
}
void Frames::event_func_7783()
{
    // event 1782_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1782_33_end;
        if (!(((Active*)get_instance(shipcable_1983_instances))->flags & VISIBLE)) goto event_1782_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(0)) > (20))) goto event_1782_33_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1782_33_end;
        FrameObject * single_instance_1782_33_0; single_instance_1782_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(shipcable_1983_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1782_33_0 == NULL)
                    single_instance_1782_33_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1782_33_0))->set_scale(0.3);
        ((Active*)((Active*)single_instance_1782_33_0))->alterables->values.set(0, -10+randrange(21));
        ((Active*)((Active*)single_instance_1782_33_0))->alterables->values.set(1, -10+randrange(21));
        ((Active*)((Active*)single_instance_1782_33_0))->alterables->values.set(2, 1);
    }
    event_1782_33_end: ;
}
void Frames::event_func_7784()
{
    // event 1783_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1)) goto event_1783_33_end;
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!ringsparkle_139_instances.has_selection()) goto event_1783_33_end;
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(shipcable_1983_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(shipcable_1983_instances))->get_action_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1783_33_end: ;
}
void Frames::event_func_7785()
{
    // event 1784_33
    {
        if (!(group_main_engine_1)) goto event_1784_33_end;
        if (!((frame_right()) > (((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)))) goto event_1784_33_end;
        if (not_always_1784_33 > loop_count) {
            not_always_1784_33 = loop_count + 2;
            goto event_1784_33_end;
        }
        not_always_1784_33 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->flags.enable(1);
    }
    event_1784_33_end: ;
}
void Frames::event_func_7786()
{
    // event 1785_33
    {
        if (!(group_main_engine_1)) goto event_1785_33_end;
        if (!((frame_left()) < (11400))) goto event_1785_33_end;
        if (not_always_1785_33 > loop_count) {
            not_always_1785_33 = loop_count + 2;
            goto event_1785_33_end;
        }
        not_always_1785_33 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(true);
    }
    event_1785_33_end: ;
}
void Frames::event_func_7787()
{
    // event 1786_33
    {
        if (!(group_main_engine_1)) goto event_1786_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-300-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*20))) goto event_1786_33_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1) goto event_1786_33_end;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        if (!group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1) {
            group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1 = true;
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
    }
    event_1786_33_end: ;
}
void Frames::event_func_7788()
{
    // event 1787_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1787_33_end;
        if (once_condition_1787_33) goto event_1787_33_end;
        once_condition_1787_33 = true;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1787_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(10, frame_left()+global_values->get(16)+1000);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_visible(true);
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_visible(true);
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_visible(true);
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_visible(true);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(11, 10);
    }
    event_1787_33_end: ;
}
void Frames::event_func_7789()
{
    // event 1788_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1788_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) < (60))) goto event_1788_33_end;
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.add(1, 1);
    }
    event_1788_33_end: ;
}
void Frames::event_func_7790()
{
    // event 1789_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1789_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (20))) goto event_1789_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        media.play(str_data_voices_eng_mi_milla_gasp_ogg_155, 28-1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1789_33_end: ;
}
void Frames::event_func_7791()
{
    // event 1790_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1790_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) >= (60))) goto event_1790_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) <= (61))) goto event_1790_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 15);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
    }
    event_1790_33_end: ;
}
void Frames::event_func_7792()
{
    // event 1791_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1791_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (60))) goto event_1791_33_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+global_values->get(16)))) goto event_1791_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+200);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(10);
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.add(1, 1);
    }
    event_1791_33_end: ;
}
void Frames::event_func_7793()
{
    // event 1792_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1792_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (61))) goto event_1792_33_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1792_33_end;
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.set(1, 439);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1792_33_end: ;
}
void Frames::event_func_7794()
{
    // event 1793_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1793_33_end;
        if (once_condition_1793_33) goto event_1793_33_end;
        once_condition_1793_33 = true;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1793_33_end;
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.set(1, 270);
    }
    event_1793_33_end: ;
}
void Frames::event_func_7795()
{
    // event 1794_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1794_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) >= (270))) goto event_1794_33_end;
        ((Active*)get_instance(ship2_1985_instances))->alterables->values.add(1, 1);
    }
    event_1794_33_end: ;
}
void Frames::event_func_7796()
{
    // event 1795_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1795_33_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1795_33_end;
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
    event_1795_33_end: ;
}
void Frames::event_func_7797()
{
    // event 1796_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1796_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1796_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) < (360))) goto event_1796_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.9);
    }
    event_1796_33_end: ;
}
void Frames::event_func_7798()
{
    // event 1797_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1797_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1797_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1797_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1797_33_end;
        global_values->set(1, 2);
        FrameObject * single_instance_1797_33_0; single_instance_1797_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1797_33_0 == NULL)
                    single_instance_1797_33_0 = new_obj;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_1797_33_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1797_33_0))->set_direction(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1797_33_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        ((Active*)((Active*)single_instance_1797_33_0))->move_back();
    }
    event_1797_33_end: ;
}
void Frames::event_func_7799()
{
    // event 1798_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1798_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1798_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1798_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1798_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1798_33_end: ;
}
void Frames::event_func_7800()
{
    // event 1799_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1799_33_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*(32-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*32));
            ((Active*)*it)->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*(32-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*32)-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20);
        }
    }
    event_1799_33_end: ;
}
void Frames::event_func_7801()
{
    // event 1800_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1800_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(0, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-110)*math_helper*2*-140+100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-130)*math_helper*2*-140+60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*120-70);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*100-100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(6, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*160-140);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(4, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-70)*math_helper*2*120-60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(5, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*-60+10);
    }
    event_1800_33_end: ;
}
void Frames::event_func_7802()
{
    // event 1801_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1801_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(0, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(2, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(2)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(1, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(1)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(3, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(3)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(6, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(6)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(4, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(4)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(5, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(5)*(1-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)));
    }
    event_1801_33_end: ;
}
void Frames::event_func_7803()
{
    // event 1802_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1802_33_end;
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(2)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(5)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(1)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(4)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(3)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(6)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        }
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)*0.5-45+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)+((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(0), 0);
    }
    event_1802_33_end: ;
}
void Frames::event_func_7804()
{
    // event 1803_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1803_33_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1803_33_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1803_33_0;
            ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1803_33_0: ;
        }
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*(32-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*32));
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*(32-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*32)-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20);
    }
    event_1803_33_end: ;
}
void Frames::event_func_7805()
{
    // event 1804_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1804_33_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1804_33_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1804_33_0;
            ((Active*)get_instance(bosspantherhipf_1995_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1804_33_0: ;
        }
    }
    event_1804_33_end: ;
}
void Frames::event_func_7806()
{
    // event 1805_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1805_33_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1805_33_0;
            ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfr_2001_instances));
            if (parent == NULL) goto pos_end_1805_33_1;
            ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_1: ;
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspantherhipf_1995_instances))->get_x()+cos_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-24);
            ((Active*)*it)->set_y(((Active*)get_instance(bosspantherhipf_1995_instances))->get_y()+sin_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-24);
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhipf_1995_instances));
            if (parent == NULL) goto pos_end_1805_33_2;
            ((Active*)get_instance(bosspantherkneef_1996_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherkneef_1996_instances));
            if (parent == NULL) goto pos_end_1805_33_3;
            ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfl_1997_instances));
            if (parent == NULL) goto pos_end_1805_33_4;
            ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1805_33_5;
            ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1805_33_5: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhead_1992_instances));
            if (parent == NULL) goto pos_end_1805_33_6;
            ((Active*)get_instance(bosspantherrider_1989_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1805_33_6: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(2));
    }
    event_1805_33_end: ;
}
void Frames::event_func_7807()
{
    // event 1806_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1806_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)%math_helper%360);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)%math_helper%360);
    }
    event_1806_33_end: ;
}
