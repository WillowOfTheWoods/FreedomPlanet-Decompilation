#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_5_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_44();
}
void Frames::loop_wrapper_play_music_6_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_44();
}
void Frames::loop_wrapper_sound_go0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_44();
}
void Frames::loop_wrapper_sound_explode3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_10737()
{
    // event 1640_44
    {
        if (!(group_main_engine_1)) goto event_1640_44_end;
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockeddoorseal_2672_instances.has_selection()) goto event_1640_44_end;
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1640_44_end: ;
}
void Frames::event_func_10738()
{
    // event 1641_44
    {
        if (!(group_main_engine_1)) goto event_1641_44_end;
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockeddoorback_2605_instances.has_selection()) goto event_1641_44_end;
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1641_44_end: ;
}
void Frames::event_func_10739()
{
    // event 1642_44
    {
        if (!(group_main_engine_1)) goto event_1642_44_end;
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockeddoorfront_2671_instances.has_selection()) goto event_1642_44_end;
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1642_44_end: ;
}
void Frames::event_func_10740()
{
    // event 1643_44
    {
        if (!(group_main_engine_1)) goto event_1643_44_end;
        lockeddoorbarrier_2667_instances.clear_selection();
        for (ObjectIterator it(lockeddoorbarrier_2667_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockeddoorbarrier_2667_instances.has_selection()) goto event_1643_44_end;
        for (ObjectIterator it(lockeddoorbarrier_2667_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1643_44_end: ;
}
void Frames::foreach_door_44()
{
    event_func_10737();
    event_func_10738();
    event_func_10739();
    event_func_10740();
}
void Frames::event_func_10741()
{
    // event 1601_44
    {
        if (!(group_main_engine_1)) goto event_1601_44_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (((Active*)foreach_instance_pushup)->alterables->values.get(4)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto event_1601_44_end;
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)foreach_instance_pushup);
            if (parent == NULL) goto pos_end_1601_44_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1601_44_0: ;
        }
    }
    event_1601_44_end: ;
}
void Frames::event_func_10742()
{
    // event 1602_44
    {
        if (!(group_main_engine_1)) goto event_1602_44_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (((Active*)foreach_instance_pushup)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto event_1602_44_end;
        ((Active*)((Active*)foreach_instance_pushup))->alterables->values.set(0, ((Active*)get_single(enemypushuphitbox_2653_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)foreach_instance_pushup))->alterables->values.set(2, ((Active*)get_single(enemypushuphitbox_2653_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1602_44_end: ;
}
void Frames::foreach_pushup_44()
{
    event_func_10741();
    event_func_10742();
}
void Frames::event_func_10743()
{
    // event 1621_44
    {
        if (!(group_main_engine_1)) goto event_1621_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1621_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1621_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        FrameObject * single_instance_1621_44_0; single_instance_1621_44_0 = NULL;
        // select single: true false false
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator p_it(enemypushuplaser_2570_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1621_44_0 == NULL)
                    single_instance_1621_44_0 = new_obj;
            }
        }
    }
    event_1621_44_end: ;
}
void Frames::col_1_44()
{
    event_func_10743();
}
void Frames::event_func_10744()
{
    // event 1589_44
    {
        if (!(group_main_engine_1)) goto event_1589_44_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1589_44_0; single_instance_1589_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1589_44_0 == NULL)
                single_instance_1589_44_0 = new_obj;
        }
    }
    event_1589_44_end: ;
}
void Frames::col_7_44()
{
    event_func_10744();
}
void Frames::event_func_10745()
{
    // event 1588_44
    {
        if (!(group_main_engine_1)) goto event_1588_44_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1588_44_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1588_44_0; single_instance_1588_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1588_44_0 == NULL)
                single_instance_1588_44_0 = new_obj;
        }
    }
    event_1588_44_end: ;
}
void Frames::col_8_44()
{
    event_func_10745();
}
void Frames::event_func_10746()
{
    // event 1620_44
    {
        if (!(group_main_engine_1)) goto event_1620_44_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1620_44_end;
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1620_44_0; single_instance_1620_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1620_44_0 == NULL)
                single_instance_1620_44_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_1620_44_end: ;
}
void Frames::col_9_44()
{
    event_func_10746();
}
void Frames::event_func_10747()
{
    // event 1590_44
    {
        if (!(group_main_engine_1)) goto event_1590_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1590_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1590_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1590_44_0; single_instance_1590_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1590_44_0 == NULL)
                single_instance_1590_44_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_1590_44_end: ;
}
void Frames::col_12_44()
{
    event_func_10747();
}
void Frames::event_func_10748()
{
    // event 1618_44
    {
        if (!(group_main_engine_1)) goto event_1618_44_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1618_44_end;
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_1618_44_end: ;
}
void Frames::col_16_44()
{
    event_func_10748();
}
void Frames::event_func_10749()
{
    // event 1608_44
    {
        if (!(group_main_engine_1)) goto event_1608_44_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1608_44_0; single_instance_1608_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust_305(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1608_44_0 == NULL)
                single_instance_1608_44_0 = new_obj;
        }
    }
    event_1608_44_end: ;
}
void Frames::col_24_44()
{
    event_func_10749();
}
void Frames::event_func_10750()
{
    // event 1613_44
    {
        if (!(group_main_engine_1)) goto event_1613_44_end;
        FrameObject * single_instance_1613_44_0; single_instance_1613_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser2_2571(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1613_44_0 == NULL)
                single_instance_1613_44_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1613_44_0))->set_direction(0);
    }
    event_1613_44_end: ;
}
void Frames::event_func_10751()
{
    // event 1614_44
    {
        if (!(group_main_engine_1)) goto event_1614_44_end;
        FrameObject * single_instance_1614_44_0; single_instance_1614_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser2_2571(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1614_44_0 == NULL)
                single_instance_1614_44_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1614_44_0))->set_direction(16);
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_1614_44_end: ;
}
void Frames::col_26_44()
{
    event_func_10750();
    event_func_10751();
}
void Frames::event_func_10752()
{
    // event 1587_44
    {
        if (!(group_main_engine_1)) goto event_1587_44_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1587_44_0; single_instance_1587_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1587_44_0 == NULL)
                single_instance_1587_44_0 = new_obj;
        }
    }
    event_1587_44_end: ;
}
void Frames::col_27_44()
{
    event_func_10752();
}
void Frames::test_collisions_44()
{
    test_collisions(qualifier_7, playerprojectile_320_instances, 2147483648, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser3_2572_instances, 1, 1, (EventFunction)&Frames::col_1_44);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 134217728, 1, (EventFunction)&Frames::col_7_44);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 1, 2, (EventFunction)&Frames::col_8_44);
    test_collisions(playerreflect_447_instances, enemypushuplaser_2570_instances, 2, 1, (EventFunction)&Frames::col_9_44);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 2, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(qualifier_8, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 8, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(playerreflect_447_instances, enemypushuplaser2_2571_instances, 16, 1, (EventFunction)&Frames::col_16_44);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser_2570_instances, 4, 2, (EventFunction)&Frames::col_12_44);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 32, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemypushupdebris_2569_instances.begin(); it1 != enemypushupdebris_2569_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_24_44();
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
    for (it1 = enemypushuplaser_2570_instances.begin(); it1 != enemypushuplaser_2570_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_26_44();
    }
    for (it1 = enemyhomingbullet_2568_instances.begin(); it1 != enemyhomingbullet_2568_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_44();
    }
}
void Frames::event_func_10753()
{
    // event 525_44
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_525_44_end;
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_525_44_end: ;
}
void Frames::event_func_10754()
{
    // event 535_44
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_535_44_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_535_44_end;
        FrameObject * single_instance_535_44_0; single_instance_535_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_535_44_0 == NULL)
                    single_instance_535_44_0 = new_obj;
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
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_535_44_end: ;
}
void Frames::event_func_10755()
{
    // event 550_44
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_550_44_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_550_44_end: ;
}
void Frames::event_func_10756()
{
    // event 552_44
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_44_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_552_44_end;
        FrameObject * single_instance_552_44_0; single_instance_552_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_552_44_0 == NULL)
                    single_instance_552_44_0 = new_obj;
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
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_552_44_end: ;
}
void Frames::event_func_10757()
{
    // event 686_44
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_686_44_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_686_44_end;
        FrameObject * single_instance_686_44_0; single_instance_686_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_686_44_0 == NULL)
                    single_instance_686_44_0 = new_obj;
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
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_686_44_end: ;
}
void Frames::event_func_10758()
{
    // event 1407_44
    {
        if (!(group_main_engine_1)) goto event_1407_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1407_44_end: ;
}
void Frames::event_func_10759()
{
    // event 1408_44
    {
        if (!(group_main_engine_1)) goto event_1408_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1408_44_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1408_44_end;
        playersensorbottombig_397_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1408_44_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_single(levellift_2647_instances, default_active_instance))->get_y()))) goto event_1408_44_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(levellift_2647_instances, default_active_instance))->get_x()-32))) goto event_1408_44_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(levellift_2647_instances, default_active_instance))->get_x()+32))) goto event_1408_44_end;
        if (!((((Active*)get_single(levellift_2647_instances, default_active_instance))->alterables->values.get(16)%math_helper%2) == (0))) goto event_1408_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1408_44_end: ;
}
void Frames::event_func_10760()
{
    // event 1409_44
    {
        if (!(group_main_engine_1)) goto event_1409_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1409_44_end;
        if (!((((Active*)get_single(levellift_2647_instances, default_active_instance))->alterables->values.get(16)%math_helper%2) == (0))) goto event_1409_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1409_44_end: ;
}
void Frames::event_func_10761()
{
    // event 1410_44
    {
        if (!(group_main_engine_1)) goto event_1410_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) <= (0))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1410_44_end;
        if (!((((Active*)get_single(levellift_2647_instances, default_active_instance))->alterables->values.get(16)%math_helper%2) == (0))) goto event_1410_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1410_44_end: ;
}
void Frames::event_func_10762()
{
    // event 1411_44
    {
        if (!(group_main_engine_1)) goto event_1411_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1411_44_end;
        if (!((((Active*)get_single(levellift_2647_instances, default_active_instance))->alterables->values.get(16)%math_helper%2) == (0))) goto event_1411_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1411_44_end: ;
}
void Frames::event_func_10763()
{
    // event 1412_44
    {
        if (!(group_main_engine_1)) goto event_1412_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1412_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)-8);
        }
    }
    event_1412_44_end: ;
}
void Frames::event_func_10764()
{
    // event 1413_44
    {
        if (!(group_main_engine_1)) goto event_1413_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1413_44_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1413_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1413_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 8);
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
    event_1413_44_end: ;
}
void Frames::event_func_10765()
{
    // event 1414_44
    {
        if (!(group_main_engine_1)) goto event_1414_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1414_44_end;
        levellifttop_2650_instances.clear_selection();
        if (!check_overlap(levellift_2647_instances, levellifttop_2650_instances)) goto event_1414_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (((Active*)get_single(levellifttop_2650_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1414_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)get_single(levellifttop_2650_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(17, 3);
        }
    }
    event_1414_44_end: ;
}
void Frames::event_func_10766()
{
    // event 1415_44
    {
        if (!(group_main_engine_1)) goto event_1415_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (3))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1415_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)+8);
        }
    }
    event_1415_44_end: ;
}
void Frames::event_func_10767()
{
    // event 1416_44
    {
        if (!(group_main_engine_1)) goto event_1416_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (3))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1416_44_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1416_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1416_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 8);
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
    event_1416_44_end: ;
}
void Frames::event_func_10768()
{
    // event 1417_44
    {
        if (!(group_main_engine_1)) goto event_1417_44_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (3))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1417_44_end;
        levelliftbottom_2651_instances.clear_selection();
        if (!check_overlap(levellift_2647_instances, levelliftbottom_2651_instances)) goto event_1417_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)get_single(levelliftbottom_2651_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!levellift_2647_instances.has_selection()) goto event_1417_44_end;
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)get_single(levelliftbottom_2651_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(16, 0);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(17, 3);
        }
    }
    event_1417_44_end: ;
}
void Frames::event_func_10769()
{
    // event 1419_44
    {
        if (!(group_main_engine_1)) goto event_1419_44_end;
        levelfireplatform1_2646_instances.clear_selection();
        for (ObjectIterator it(levelfireplatform1_2646_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(4)/math_helper/180+1)%math_helper%2);
        }
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1419_44_end: ;
}
void Frames::event_func_10770()
{
    // event 1420_44
    {
        if (!(group_main_engine_1)) goto event_1420_44_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index));
            if (parent == NULL) goto pos_end_1420_44_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + -52, parent->get_action_y() + 0);
            pos_end_1420_44_0: ;
        }
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->get_frame()*16);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_floor(((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->alterables->values.get(18)));
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index));
            if (parent == NULL) goto pos_end_1420_44_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 52, parent->get_action_y() + 0);
            pos_end_1420_44_1: ;
        }
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->get_frame()*16);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_floor(((Active*)get_instance(levelfireplatform1_2646_instances, it.current_index, default_active_instance))->alterables->values.get(18)));
        }
    }
    event_1420_44_end: ;
}
void Frames::event_func_10771()
{
    // event 1421_44
    {
        if (!(group_main_engine_1)) goto event_1421_44_end;
        levelfireplatform1_2646_instances.clear_selection();
        for (ObjectIterator it(levelfireplatform1_2646_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (12))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!levelfireplatform1_2646_instances.has_selection()) goto event_1421_44_end;
        if (not_always_1421_44 > loop_count) {
            not_always_1421_44 = loop_count + 2;
            goto event_1421_44_end;
        }
        not_always_1421_44 = loop_count + 2;
        media.play_id(SOUND_FIREPLATFORM_284, -1, 1);
    }
    event_1421_44_end: ;
}
void Frames::event_func_10772()
{
    // event 1422_44
    {
        if (!(group_main_engine_1)) goto event_1422_44_end;
        levelfireplatform1_2646_instances.clear_selection();
        for (ObjectIterator it(levelfireplatform1_2646_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (192))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!levelfireplatform1_2646_instances.has_selection()) goto event_1422_44_end;
        if (not_always_1422_44 > loop_count) {
            not_always_1422_44 = loop_count + 2;
            goto event_1422_44_end;
        }
        not_always_1422_44 = loop_count + 2;
        media.play_id(SOUND_FIREPLATFORM_284, -1, 1);
    }
    event_1422_44_end: ;
}
void Frames::event_func_10773()
{
    // event 1423_44
    {
        if (!(group_main_engine_1)) goto event_1423_44_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (190))) { it.deselect(); continue; }
        }
        if (!levelfireplatformflame1_2644_instances.has_selection()) goto event_1423_44_end;
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    event_1423_44_end: ;
}
void Frames::event_func_10774()
{
    // event 1424_44
    {
        if (!(group_main_engine_1)) goto event_1424_44_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (340))) { it.deselect(); continue; }
        }
        if (!levelfireplatformflame1_2644_instances.has_selection()) goto event_1424_44_end;
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    event_1424_44_end: ;
}
void Frames::event_func_10775()
{
    // event 1425_44
    {
        if (!(group_main_engine_1)) goto event_1425_44_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
        }
        if (!levelfireplatformflame1_2644_instances.has_selection()) goto event_1425_44_end;
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    event_1425_44_end: ;
}
void Frames::event_func_10776()
{
    // event 1426_44
    {
        if (!(group_main_engine_1)) goto event_1426_44_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!levelfireplatformflame1_2644_instances.has_selection()) goto event_1426_44_end;
        player_389_instances.clear_selection();
        if (!check_overlap(levelfireplatformflame1_2644_instances, player_389_instances)) goto event_1426_44_end;
        if (!((((Active*)get_single(levelfireplatformflame1_2644_instances, default_active_instance))->get_direction()%math_helper%8) == (0))) goto event_1426_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1426_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1426_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1426_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1426_44_end: ;
}
void Frames::event_func_10777()
{
    // event 1427_44
    {
        if (!(group_main_engine_1)) goto event_1427_44_end;
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!levelfireplatformflame2_2645_instances.has_selection()) goto event_1427_44_end;
        player_389_instances.clear_selection();
        if (!check_overlap(levelfireplatformflame2_2645_instances, player_389_instances)) goto event_1427_44_end;
        if (!((((Active*)get_single(levelfireplatformflame2_2645_instances, default_active_instance))->get_direction()%math_helper%8) == (0))) goto event_1427_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1427_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1427_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1427_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1427_44_end: ;
}
void Frames::event_func_10778()
{
    // event 1429_44
    {
        if (!(group_main_engine_1)) goto event_1429_44_end;
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index));
            if (parent == NULL) goto pos_end_1429_44_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1429_44_0: ;
        }
        levelscrollingplatformflame2_2655_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform2_2663_instances, it.current_index));
            if (parent == NULL) goto pos_end_1429_44_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1429_44_1: ;
        }
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(levelscrollingplatform2_2663_instances, it.current_index, default_active_instance))->alterables->values.get(16));
        }
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelscrollingplatformmask1_2607_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformmask1_2607_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index));
            if (parent == NULL) goto pos_end_1429_44_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1429_44_2: ;
        }
        levelscrollingplatformmask2_2608_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformmask2_2608_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform2_2663_instances, it.current_index));
            if (parent == NULL) goto pos_end_1429_44_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1429_44_3: ;
        }
    }
    event_1429_44_end: ;
}
void Frames::event_func_10779()
{
    // event 1430_44
    {
        if (!(group_main_engine_1)) goto event_1430_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1430_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(8, 3);
        }
    }
    event_1430_44_end: ;
}
void Frames::event_func_10780()
{
    // event 1431_44
    {
        if (!(group_main_engine_1)) goto event_1431_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1431_44_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, levelscrollingplatform1_2662_instances)) goto event_1431_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 3);
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
    event_1431_44_end: ;
}
void Frames::event_func_10781()
{
    // event 1432_44
    {
        if (!(group_main_engine_1)) goto event_1432_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(20)))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1432_44_end;
        media.play_id(SOUND_SCROLLINGPLATFORM_285, -1, 1);
    }
    event_1432_44_end: ;
}
void Frames::event_func_10782()
{
    // event 1433_44
    {
        if (!(group_main_engine_1)) goto event_1433_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(20)))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1433_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
    }
    event_1433_44_end: ;
}
void Frames::event_func_10783()
{
    // event 1434_44
    {
        if (!(group_main_engine_1)) goto event_1434_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1434_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 4);
        }
    }
    event_1434_44_end: ;
}
void Frames::event_func_10784()
{
    // event 1435_44
    {
        if (!(group_main_engine_1)) goto event_1435_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)*it)->alterables->values.get(19)+192))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1435_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(21));
            ((Active*)*it)->alterables->values.set(17, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1435_44_end: ;
}
void Frames::event_func_10785()
{
    // event 1436_44
    {
        if (!(group_main_engine_1)) goto event_1436_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1436_44_end;
        media.play_id(SOUND_SCROLLINGPLATFORM_285, -1, 1);
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1436_44_end: ;
}
void Frames::event_func_10786()
{
    // event 1437_44
    {
        if (!(group_main_engine_1)) goto event_1437_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1437_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, -4);
        }
    }
    event_1437_44_end: ;
}
void Frames::event_func_10787()
{
    // event 1438_44
    {
        if (!(group_main_engine_1)) goto event_1438_44_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (((Active*)*it)->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform1_2662_instances.has_selection()) goto event_1438_44_end;
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(19));
            ((Active*)*it)->alterables->values.set(17, 0);
        }
    }
    event_1438_44_end: ;
}
void Frames::event_func_10788()
{
    // event 1439_44
    {
        if (!(group_main_engine_1)) goto event_1439_44_end;
        player_389_instances.clear_selection();
        levelscrollingplatformplayerpush_2666_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelscrollingplatformplayerpush_2666_instances)) goto event_1439_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 8);
    }
    event_1439_44_end: ;
}
void Frames::event_func_10789()
{
    // event 1440_44
    {
        if (!(group_main_engine_1)) goto event_1440_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1440_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(8, 3);
        }
    }
    event_1440_44_end: ;
}
void Frames::event_func_10790()
{
    // event 1441_44
    {
        if (!(group_main_engine_1)) goto event_1441_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1441_44_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, levelscrollingplatform2_2663_instances)) goto event_1441_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 3);
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
    event_1441_44_end: ;
}
void Frames::event_func_10791()
{
    // event 1442_44
    {
        if (!(group_main_engine_1)) goto event_1442_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(20)))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1442_44_end;
        media.play_id(SOUND_SCROLLINGPLATFORM_285, -1, 1);
    }
    event_1442_44_end: ;
}
void Frames::event_func_10792()
{
    // event 1443_44
    {
        if (!(group_main_engine_1)) goto event_1443_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(20)))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1443_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
    }
    event_1443_44_end: ;
}
void Frames::event_func_10793()
{
    // event 1444_44
    {
        if (!(group_main_engine_1)) goto event_1444_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1444_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, -4);
        }
    }
    event_1444_44_end: ;
}
void Frames::event_func_10794()
{
    // event 1445_44
    {
        if (!(group_main_engine_1)) goto event_1445_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (((Active*)*it)->alterables->values.get(19)-192))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1445_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(21));
            ((Active*)*it)->alterables->values.set(17, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1445_44_end: ;
}
void Frames::event_func_10795()
{
    // event 1446_44
    {
        if (!(group_main_engine_1)) goto event_1446_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1446_44_end;
        media.play_id(SOUND_SCROLLINGPLATFORM_285, -1, 1);
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1446_44_end: ;
}
void Frames::event_func_10796()
{
    // event 1447_44
    {
        if (!(group_main_engine_1)) goto event_1447_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1447_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 4);
        }
    }
    event_1447_44_end: ;
}
void Frames::event_func_10797()
{
    // event 1448_44
    {
        if (!(group_main_engine_1)) goto event_1448_44_end;
        levelscrollingplatform2_2663_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)*it)->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatform2_2663_instances.has_selection()) goto event_1448_44_end;
        for (ObjectIterator it(levelscrollingplatform2_2663_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(19));
            ((Active*)*it)->alterables->values.set(17, 0);
        }
    }
    event_1448_44_end: ;
}
void Frames::event_func_10798()
{
    // event 1449_44
    {
        if (!(group_main_engine_1)) goto event_1449_44_end;
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame1_2654_instances.has_selection()) goto event_1449_44_end;
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1449_44_end: ;
}
void Frames::event_func_10799()
{
    // event 1450_44
    {
        if (!(group_main_engine_1)) goto event_1450_44_end;
        levelscrollingplatformflame2_2655_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame2_2655_instances.has_selection()) goto event_1450_44_end;
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1450_44_end: ;
}
void Frames::event_func_10800()
{
    // event 1451_44
    {
        if (!(group_main_engine_1)) goto event_1451_44_end;
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame1_2654_instances.has_selection()) goto event_1451_44_end;
        player_389_instances.clear_selection();
        if (!check_overlap(levelscrollingplatformflame1_2654_instances, player_389_instances)) goto event_1451_44_end;
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame1_2654_instances.has_selection()) goto event_1451_44_end;
        if (!((((Active*)get_single(levelscrollingplatformflame1_2654_instances, default_active_instance))->get_direction()%math_helper%8) == (0))) goto event_1451_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1451_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1451_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1451_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1451_44_end: ;
}
void Frames::event_func_10801()
{
    // event 1452_44
    {
        if (!(group_main_engine_1)) goto event_1452_44_end;
        levelscrollingplatformflame2_2655_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame2_2655_instances.has_selection()) goto event_1452_44_end;
        player_389_instances.clear_selection();
        if (!check_overlap(levelscrollingplatformflame2_2655_instances, player_389_instances)) goto event_1452_44_end;
        for (ObjectIterator it(levelscrollingplatformflame2_2655_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!levelscrollingplatformflame2_2655_instances.has_selection()) goto event_1452_44_end;
        if (!((((Active*)get_single(levelscrollingplatformflame2_2655_instances, default_active_instance))->get_direction()%math_helper%8) == (0))) goto event_1452_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1452_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1452_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1452_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1452_44_end: ;
}
void Frames::event_func_10802()
{
    // event 1532_44
    bool or_result_1532_44 = false;
    bool or_temp_result_1532_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1532_44_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1532_44_0_end;
        or_result_1532_44 = true;
        or_temp_result_1532_44_0 = true;
    }
    or_event_1532_44_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1532_44_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1532_44
    bool or_temp_result_1532_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1532_44_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1532_44_1_end;
        or_result_1532_44 = true;
        or_temp_result_1532_44_1 = true;
    }
    or_event_1532_44_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1532_44_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1532_44
    bool or_temp_result_1532_44_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1532_44_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1532_44_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1532_44_2_end;
        or_result_1532_44 = true;
        or_temp_result_1532_44_2 = true;
        or_event_1532_44_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1532_44_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1532_44) goto or_final_or_event_1532_44_2_end;
        qualifier_8.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1532_44_0 || or_temp_result_1532_44_1 || or_temp_result_1532_44_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        if (or_temp_result_1532_44_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1532_44_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    or_final_or_event_1532_44_2_end: ;
}
void Frames::event_func_10803()
{
    // event 1533_44
    bool or_result_1533_44 = false;
    bool or_temp_result_1533_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1533_44_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1533_44_0_end;
        or_result_1533_44 = true;
        or_temp_result_1533_44_0 = true;
    }
    or_event_1533_44_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1533_44_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1533_44
    bool or_temp_result_1533_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1533_44_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1533_44_1_end;
        or_result_1533_44 = true;
        or_temp_result_1533_44_1 = true;
    }
    or_event_1533_44_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1533_44_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1533_44
    bool or_temp_result_1533_44_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1533_44_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1533_44_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1533_44_2_end;
        or_result_1533_44 = true;
        or_temp_result_1533_44_2 = true;
        or_event_1533_44_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1533_44_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1533_44) goto or_final_or_event_1533_44_2_end;
        qualifier_8.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1533_44_0 || or_temp_result_1533_44_1 || or_temp_result_1533_44_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        if (or_temp_result_1533_44_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1533_44_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1533_44_2_end: ;
}
void Frames::event_func_10804()
{
    // event 1541_44
    bool or_result_1541_44 = false;
    bool or_temp_result_1541_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1541_44_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1541_44_0_end;
        or_result_1541_44 = true;
        or_temp_result_1541_44_0 = true;
    }
    or_event_1541_44_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1541_44_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1541_44
    bool or_temp_result_1541_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1541_44_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1541_44_1_end;
        or_result_1541_44 = true;
        or_temp_result_1541_44_1 = true;
        or_event_1541_44_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1541_44_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1541_44) goto or_final_or_event_1541_44_1_end;
        enemyelitemask_2511_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1541_44_0 || or_temp_result_1541_44_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        if (or_temp_result_1541_44_1) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1541_44_1_end: ;
}
void Frames::event_func_10805()
{
    // event 1543_44
    bool or_result_1543_44 = false;
    bool or_temp_result_1543_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1543_44_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1543_44_0_end;
        or_result_1543_44 = true;
        or_temp_result_1543_44_0 = true;
    }
    or_event_1543_44_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1543_44_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1543_44
    bool or_temp_result_1543_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1543_44_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1543_44_1_end;
        or_result_1543_44 = true;
        or_temp_result_1543_44_1 = true;
        or_event_1543_44_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1543_44_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1543_44) goto or_final_or_event_1543_44_1_end;
        enemyelitemask_2511_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1543_44_0 || or_temp_result_1543_44_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        if (or_temp_result_1543_44_1) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1543_44_1_end: ;
}
void Frames::event_func_10806()
{
    // event 1545_44
    bool or_result_1545_44 = false;
    bool or_temp_result_1545_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_44_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1545_44_0_end;
        or_result_1545_44 = true;
        or_temp_result_1545_44_0 = true;
    }
    or_event_1545_44_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1545_44_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1545_44
    bool or_temp_result_1545_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_44_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1545_44_1_end;
        or_result_1545_44 = true;
        or_temp_result_1545_44_1 = true;
        or_event_1545_44_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1545_44_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1545_44) goto or_final_or_event_1545_44_1_end;
        enemyelitemask_2511_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1545_44_0 || or_temp_result_1545_44_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        if (or_temp_result_1545_44_1) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_1545_44_1_end: ;
}
void Frames::event_func_10807()
{
    // event 1549_44
    {
        if (!(group_main_engine_1)) goto event_1549_44_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1549_44_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1549_44_0; single_instance_1549_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1549_44_0 == NULL)
                    single_instance_1549_44_0 = new_obj;
            }
        }
        FrameObject * single_instance_1549_44_1; single_instance_1549_44_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1549_44_1 == NULL)
                    single_instance_1549_44_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1549_44_end: ;
}
void Frames::event_func_10808()
{
    // event 1561_44
    {
        if (!(group_main_engine_1)) goto event_1561_44_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1561_44_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1561_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1561_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1561_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1561_44_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1561_44_0; single_instance_1561_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1561_44_0 == NULL)
                    single_instance_1561_44_0 = new_obj;
            }
        }
    }
    event_1561_44_end: ;
}
void Frames::event_func_10809()
{
    // event 1562_44
    {
        if (!(group_main_engine_1)) goto event_1562_44_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1562_44_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1562_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1562_44_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1562_44_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1562_44_0; single_instance_1562_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1562_44_0 == NULL)
                    single_instance_1562_44_0 = new_obj;
            }
        }
    }
    event_1562_44_end: ;
}
void Frames::event_func_10810()
{
    // event 1564_44
    {
        if (!(group_main_engine_1)) goto event_1564_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1564_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1564_44_end: ;
}
void Frames::event_func_10811()
{
    // event 1565_44
    {
        if (!(group_main_engine_1)) goto event_1565_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1565_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1565_44_end: ;
}
void Frames::event_func_10812()
{
    // event 1566_44
    {
        if (!(group_main_engine_1)) goto event_1566_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1566_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1566_44_end: ;
}
void Frames::event_func_10813()
{
    // event 1567_44
    {
        if (!(group_main_engine_1)) goto event_1567_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1567_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1567_44_end: ;
}
