#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_attack2_23(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_23();
}
void Frames::loop_wrapper_sound_uppercut3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_23();
}
void Frames::loop_wrapper_play_music_5_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_play_music_6_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_sound_go0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_23(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_sound_explode3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_4906()
{
    // event 1667_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1667_23_end;
        ((Active*)((Active*)col_instance_2))->get_movement()->bounce(true);
        ((Active*)((Active*)col_instance_2))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+4, 4));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1667_23_end: ;
}
void Frames::col_14_23()
{
    event_func_4906();
}
void Frames::event_func_4907()
{
    // event 1626_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1626_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (5))) goto event_1626_23_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1626_23_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
    }
    event_1626_23_end: ;
}
void Frames::col_16_23()
{
    event_func_4907();
}
void Frames::event_func_4908()
{
    // event 1666_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1666_23_end;
        ((Active*)((Active*)col_instance_1))->get_movement()->bounce(true);
        ((Active*)((Active*)col_instance_1))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+4, 4));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1666_23_end: ;
}
void Frames::col_25_23()
{
    event_func_4908();
}
void Frames::test_collisions_23()
{
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewright_942_instances, 1, 1, (EventFunction)&Frames::col_2_20);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(shieldflamefront_316_instances, bossfireball_967_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_7, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 33554432, 2, (EventFunction)&Frames::col_8_20);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewleft_941_instances, 2, 1, (EventFunction)&Frames::col_9_20);
    test_collisions(qualifier_8, playerreflect_447_instances, 16777216, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playersensorrightbig_393_instances, breakablerock2_1007_instances, 1, 1, (EventFunction)&Frames::col_6_16);
    test_collisions_save(qualifier_11, bossbouncemode_1082_instances, 1073741824, 1, (EventFunction)&Frames::col_14_23);
    test_collisions(playersensorleftbig_391_instances, breakablerock2_1007_instances, 1, 2, (EventFunction)&Frames::col_3_16);
    test_collisions(shieldearth_314_instances, bossboulder_1064_instances, 1, 1, (EventFunction)&Frames::col_16_23);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
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
    for (it1 = bossfireball_967_instances.begin(); it1 != bossfireball_967_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_29_22();
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
    for (it1 = bossbouncemode_1082_instances.begin(); it1 != bossbouncemode_1082_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background_save()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_25_23();
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
void Frames::event_func_4909()
{
    // event 562_23
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_562_23_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (210))) goto event_562_23_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_23();
                if (!loop_death_running) break;
                loop_death_index++;
            }
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_562_23_end: ;
}
void Frames::event_func_4910()
{
    // event 580_23
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_580_23_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (220))) goto event_580_23_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_23();
                if (!loop_death_running) break;
                loop_death_index++;
            }
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_580_23_end: ;
}
void Frames::event_func_4911()
{
    // event 1210_23
    {
        if (!(group_main_engine_1)) goto event_1210_23_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1210_23_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(1, ((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_x()+16);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(2, ((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_y()+8);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(9, 1);
        {
            loop_spawn_rings_running = true;
            int times = int(6);
            loop_spawn_rings_index = 0;
            while (loop_spawn_rings_index < times) {
                loop_spawn_rings_23();
                if (!loop_spawn_rings_running) break;
                loop_spawn_rings_index++;
            }
        }
        effectsheart_307_instances.empty_selection();
        // select single: false true false
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+randrange(16)-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
    }
    event_1210_23_end: ;
}
void Frames::event_func_4912()
{
    // event 1396_23
    {
        if (!(group_main_engine_1)) goto event_1396_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1396_23_end;
        if (not_always_1396_23 > loop_count) {
            not_always_1396_23 = loop_count + 2;
            goto event_1396_23_end;
        }
        not_always_1396_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1396_23_end: ;
}
void Frames::event_func_4913()
{
    // event 1397_23
    {
        if (!(group_main_engine_1)) goto event_1397_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (48))) goto event_1397_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1397_23_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        // select single: false false true
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
    }
    event_1397_23_end: ;
}
void Frames::event_func_4914()
{
    // event 1398_23
    {
        if (!(group_main_engine_1)) goto event_1398_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1398_23_end;
        if (not_always_1398_23 > loop_count) {
            not_always_1398_23 = loop_count + 2;
            goto event_1398_23_end;
        }
        not_always_1398_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1398_23_end: ;
}
void Frames::event_func_4915()
{
    // event 1400_23
    {
        if (!(group_main_engine_1)) goto event_1400_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1400_23_end;
        if (not_always_1400_23 > loop_count) {
            not_always_1400_23 = loop_count + 2;
            goto event_1400_23_end;
        }
        not_always_1400_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1400_23_end: ;
}
void Frames::event_func_4916()
{
    // event 1401_23
    {
        if (!(group_main_engine_1)) goto event_1401_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1401_23_end;
        if (not_always_1401_23 > loop_count) {
            not_always_1401_23 = loop_count + 2;
            goto event_1401_23_end;
        }
        not_always_1401_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1401_23_end: ;
}
void Frames::event_func_4917()
{
    // event 1403_23
    {
        if (!(group_main_engine_1)) goto event_1403_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1403_23_end;
        if (not_always_1403_23 > loop_count) {
            not_always_1403_23 = loop_count + 2;
            goto event_1403_23_end;
        }
        not_always_1403_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1403_23_end: ;
}
void Frames::event_func_4918()
{
    // event 1404_23
    {
        if (!(group_main_engine_1)) goto event_1404_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1404_23_end;
        if (not_always_1404_23 > loop_count) {
            not_always_1404_23 = loop_count + 2;
            goto event_1404_23_end;
        }
        not_always_1404_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1404_23_end: ;
}
void Frames::event_func_4919()
{
    // event 1405_23
    {
        if (!(group_main_engine_1)) goto event_1405_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1405_23_end;
        if (not_always_1405_23 > loop_count) {
            not_always_1405_23 = loop_count + 2;
            goto event_1405_23_end;
        }
        not_always_1405_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1405_23_end: ;
}
void Frames::event_func_4920()
{
    // event 1406_23
    {
        if (!(group_main_engine_1)) goto event_1406_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_23_end;
        if (not_always_1406_23 > loop_count) {
            not_always_1406_23 = loop_count + 2;
            goto event_1406_23_end;
        }
        not_always_1406_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(1, -4.5);
        }
    }
    event_1406_23_end: ;
}
void Frames::event_func_4921()
{
    // event 1407_23
    {
        if (!(group_main_engine_1)) goto event_1407_23_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1407_23_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1407_23_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-4.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1407_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1407_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1407_23_end: ;
}
void Frames::event_func_4922()
{
    // event 1408_23
    {
        if (!(group_main_engine_1)) goto event_1408_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_23_end;
        if (not_always_1408_23 > loop_count) {
            not_always_1408_23 = loop_count + 2;
            goto event_1408_23_end;
        }
        not_always_1408_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1408_23_end: ;
}
void Frames::event_func_4923()
{
    // event 1409_23
    {
        if (!(group_main_engine_1)) goto event_1409_23_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1409_23_end;
        if (not_always_1409_23 > loop_count) {
            not_always_1409_23 = loop_count + 2;
            goto event_1409_23_end;
        }
        not_always_1409_23 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1409_23_end: ;
}
void Frames::event_func_4924()
{
    // event 1429_23
    {
        if (!(group_main_engine_1)) goto event_1429_23_end;
        breakablerock2_1007_instances.clear_selection();
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1429_23_end: ;
}
void Frames::event_func_4925()
{
    // event 1430_23
    bool or_result_1430_23 = false;
    bool or_temp_result_1430_23_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1430_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1430_23_0_end;
        or_result_1430_23 = true;
        or_temp_result_1430_23_0 = true;
    }
    or_event_1430_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1430_23_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1430_23
    bool or_temp_result_1430_23_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1430_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1430_23_1_end;
        or_result_1430_23 = true;
        or_temp_result_1430_23_1 = true;
    }
    or_event_1430_23_1_end: ;
    if (or_temp_result_1430_23_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1430_23
    bool or_temp_result_1430_23_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1430_23_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1430_23_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) > (5))) goto or_event_1430_23_2_end;
        or_result_1430_23 = true;
        or_temp_result_1430_23_2 = true;
        or_event_1430_23_2_end: ;
        if (or_temp_result_1430_23_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1430_23) goto or_final_or_event_1430_23_2_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1430_23_0 || or_temp_result_1430_23_1 || or_temp_result_1430_23_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakablerock2_1007_instances.clear_selection();
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1430_23_2_end: ;
}
void Frames::event_func_4926()
{
    // event 1432_23
    bool or_result_1432_23 = false;
    bool or_temp_result_1432_23_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1432_23_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1432_23_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakablerock2_1007_instances)) goto or_event_1432_23_0_end;
        or_result_1432_23 = true;
        or_temp_result_1432_23_0 = true;
    }
    or_event_1432_23_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    breakablerock2_1007_instances.clear_saved_selection();
    if (or_temp_result_1432_23_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakablerock2_1007_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1432_23
    bool or_temp_result_1432_23_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1432_23_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1432_23_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakablerock2_1007_instances)) goto or_event_1432_23_1_end;
        or_result_1432_23 = true;
        or_temp_result_1432_23_1 = true;
    }
    or_event_1432_23_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1432_23_1) {
        playersensorrightbig_393_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakablerock2_1007_instances.save_selection();
    }
    // event 1432_23
    bool or_temp_result_1432_23_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_23_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakablerock2_1007_instances)) goto or_event_1432_23_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1432_23_2_end;
        or_result_1432_23 = true;
        or_temp_result_1432_23_2 = true;
    }
    or_event_1432_23_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1432_23_2) {
        playermovementvalues_245_instances.save_selection();
        breakablerock2_1007_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1432_23
    bool or_temp_result_1432_23_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_23_3_end;
        playerreflect_447_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakablerock2_1007_instances)) goto or_event_1432_23_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1432_23_3_end;
        or_result_1432_23 = true;
        or_temp_result_1432_23_3 = true;
    }
    or_event_1432_23_3_end: ;
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1432_23_3) {
        breakablerock2_1007_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1432_23
    bool or_temp_result_1432_23_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_23_4_end;
        thunderspark_339_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakablerock2_1007_instances)) goto or_event_1432_23_4_end;
        or_result_1432_23 = true;
        or_temp_result_1432_23_4 = true;
        or_event_1432_23_4_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1432_23_4) {
            thunderspark_339_instances.save_selection();
            breakablerock2_1007_instances.save_selection();
        }
        if (!or_result_1432_23) goto or_final_or_event_1432_23_4_end;
        breakablerock2_1007_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        thunderspark_339_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1432_23_0 || or_temp_result_1432_23_1 || or_temp_result_1432_23_2 || or_temp_result_1432_23_3 || or_temp_result_1432_23_4) {
            breakablerock2_1007_instances.restore_selection();
        }
        if (or_temp_result_1432_23_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1432_23_0 || or_temp_result_1432_23_1 || or_temp_result_1432_23_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1432_23_4) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1432_23_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1432_23_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1432_23_0 || or_temp_result_1432_23_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1432_23_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1432_23_4_end: ;
}
void Frames::event_func_4927()
{
    // event 1433_23
    bool or_result_1433_23 = false;
    bool or_temp_result_1433_23_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1433_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1433_23_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1433_23_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakablerock2_1007_instances)) goto or_event_1433_23_0_end;
        or_result_1433_23 = true;
        or_temp_result_1433_23_0 = true;
    }
    or_event_1433_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakablerock2_1007_instances.clear_saved_selection();
    if (or_temp_result_1433_23_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakablerock2_1007_instances.save_selection();
    }
    // event 1433_23
    bool or_temp_result_1433_23_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1433_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1433_23_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1433_23_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakablerock2_1007_instances)) goto or_event_1433_23_1_end;
        or_result_1433_23 = true;
        or_temp_result_1433_23_1 = true;
        or_event_1433_23_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1433_23_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            breakablerock2_1007_instances.save_selection();
        }
        if (!or_result_1433_23) goto or_final_or_event_1433_23_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakablerock2_1007_instances.empty_selection();
        if (or_temp_result_1433_23_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1433_23_0 || or_temp_result_1433_23_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1433_23_0 || or_temp_result_1433_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1433_23_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1433_23_0 || or_temp_result_1433_23_1) {
            breakablerock2_1007_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1433_23_1_end: ;
}
void Frames::event_func_4928()
{
    // event 1434_23
    {
        if (!(group_main_engine_1)) goto event_1434_23_end;
        monitoricon_331_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakablerock2_1007_instances)) goto event_1434_23_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1434_23_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1434_23_end: ;
}
void Frames::event_func_4929()
{
    // event 1438_23
    {
        if (!(group_main_engine_1)) goto event_1438_23_end;
        if (((Active*)get_instance(levelgeyserplate_998_instances))->is_near_border(-100)) goto event_1438_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) == (180))) goto event_1438_23_end;
        FrameObject * single_instance_1438_23_0; single_instance_1438_23_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(levelgeyserplate_998_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1438_23_0 == NULL)
                    single_instance_1438_23_0 = new_obj;
            }
        }
        media.play_id(SOUND_GEYSER_2_44, -1, 1);
        ((Active*)get_instance(levelgeyserplate_998_instances))->alterables->flags.enable(6);
    }
    event_1438_23_end: ;
}
void Frames::event_func_4930()
{
    // event 1439_23
    {
        if (!(group_main_engine_1)) goto event_1439_23_end;
        if (((Active*)get_instance(levelgeyserplate_998_instances))->is_near_border(-100)) goto event_1439_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1439_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1439_23_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (0))) goto event_1439_23_end;
        FrameObject * single_instance_1439_23_0; single_instance_1439_23_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(levelgeyserplate_998_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1439_23_0 == NULL)
                    single_instance_1439_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1439_23_0))->move_back();
        ((Active*)((Active*)single_instance_1439_23_0))->set_x(((Active*)get_instance(levelgeyserplate_998_instances))->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1439_23_0))->force_speed(10);
        ((Active*)((Active*)single_instance_1439_23_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1439_23_0))->set_scale((9+randrange(5))*0.1);
    }
    event_1439_23_end: ;
}
void Frames::event_func_4931()
{
    // event 1440_23
    {
        if (!(group_main_engine_1)) goto event_1440_23_end;
        if (((Active*)get_instance(levelgeyserplate_998_instances))->is_near_border(-100)) goto event_1440_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1440_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1440_23_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1440_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1440_23_end;
        FrameObject * single_instance_1440_23_0; single_instance_1440_23_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(levelgeyserplate_998_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1440_23_0 == NULL)
                    single_instance_1440_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1440_23_0))->move_back();
        ((Active*)((Active*)single_instance_1440_23_0))->set_x(((Active*)get_instance(levelgeyserplate_998_instances))->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1440_23_0))->force_speed(10);
        ((Active*)((Active*)single_instance_1440_23_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1440_23_0))->set_scale((9+randrange(5))*0.1);
    }
    event_1440_23_end: ;
}
void Frames::event_func_4932()
{
    // event 1441_23
    {
        if (!(group_main_engine_1)) goto event_1441_23_end;
        if (((Active*)get_instance(levelgeyserplate_998_instances))->is_near_border(-100)) goto event_1441_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1441_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1441_23_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1441_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->get_y()) >= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1441_23_end;
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_x(((Active*)get_instance(levelgeyserplate_998_instances))->get_x()-20+randrange(41));
            ((Active*)*it)->force_speed(10);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
        }
        FrameObject * single_instance_1441_23_0; single_instance_1441_23_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(levelgeyserplate_998_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_littlebubble_1068(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1441_23_0 == NULL)
                    single_instance_1441_23_0 = new_obj;
            }
        }
    }
    event_1441_23_end: ;
}
void Frames::event_func_4933()
{
    // event 1442_23
    {
        if (!(group_main_engine_1)) goto event_1442_23_end;
        effectsdust_305_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(effectsdust_305_instances, levelgeyserplate_998_instances)) goto event_1442_23_end;
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectsdust_305_instances.has_selection()) goto event_1442_23_end;
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_x(((Active*)get_instance(levelgeyserplate_998_instances))->get_x()-20+randrange(41));
            ((Active*)*it)->force_speed(10);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
        }
    }
    event_1442_23_end: ;
}
void Frames::event_func_4934()
{
    // event 1443_23
    {
        if (!(group_main_engine_1)) goto event_1443_23_end;
        littlebubble_1068_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(littlebubble_1068_instances, levelgeyserplate_998_instances)) goto event_1443_23_end;
        for (ObjectIterator it(littlebubble_1068_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!littlebubble_1068_instances.has_selection()) goto event_1443_23_end;
        for (ObjectIterator it(littlebubble_1068_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelgeyserplate_998_instances))->get_x()-20+randrange(41));
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y()-4-((Active*)get_instance(generalwater_414_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, -1);
            ((Active*)*it)->force_speed(20);
        }
    }
    event_1443_23_end: ;
}
void Frames::event_func_4935()
{
    // event 1445_23
    {
        if (!(group_main_engine_1)) goto event_1445_23_end;
        player_389_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelgeyserplate_998_instances)) goto event_1445_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1445_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) < (240))) goto event_1445_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -12+(((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360)-180)*0.1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1445_23_end: ;
}
void Frames::event_func_4936()
{
    // event 1446_23
    {
        if (!(group_main_engine_1)) goto event_1446_23_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.get(4)%math_helper%360) > (240))) goto event_1446_23_end;
        ((Active*)get_instance(levelgeyserplate_998_instances))->alterables->values.add(4, 2);
        ((Active*)get_instance(levelgeyserplate_998_instances))->alterables->flags.enable(6);
    }
    event_1446_23_end: ;
}
void Frames::event_func_4937()
{
    // event 1462_23
    bool or_result_1462_23 = false;
    bool or_temp_result_1462_23_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_23_0_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1462_23_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyturretus_938_instances, qualifier_7)) goto or_event_1462_23_0_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-1))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1462_23_0_end;
        or_result_1462_23 = true;
        or_temp_result_1462_23_0 = true;
    }
    or_event_1462_23_0_end: ;
    enemyturretus_938_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1462_23_0) {
        enemyturretus_938_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1462_23
    bool or_temp_result_1462_23_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_23_1_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-1))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1462_23_1_end;
        or_result_1462_23 = true;
        or_temp_result_1462_23_1 = true;
        or_event_1462_23_1_end: ;
        if (or_temp_result_1462_23_1) {
            enemyturretus_938_instances.save_selection();
        }
        if (!or_result_1462_23) goto or_final_or_event_1462_23_1_end;
        enemyturretus_938_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1462_23_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1462_23_0 || or_temp_result_1462_23_1) {
            enemyturretus_938_instances.restore_selection();
        }
        FrameObject * single_instance_1462_23_0; single_instance_1462_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1462_23_0 == NULL)
                    single_instance_1462_23_0 = new_obj;
            }
        }
        FrameObject * single_instance_1462_23_1; single_instance_1462_23_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1462_23_1 == NULL)
                    single_instance_1462_23_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_20();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1462_23_1_end: ;
}
void Frames::event_func_4938()
{
    // event 1498_23
    {
        if (!(group_main_engine_1)) goto event_1498_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1498_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1498_23_end;
        if (not_always_1498_23 > loop_count) {
            not_always_1498_23 = loop_count + 2;
            goto event_1498_23_end;
        }
        not_always_1498_23 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1498_23_end: ;
}
void Frames::event_func_4939()
{
    // event 1500_23
    {
        if (!(group_main_engine_1)) goto event_1500_23_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1500_23_end;
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
    event_1500_23_end: ;
}
void Frames::event_func_4940()
{
    // event 1502_23
    {
        if (!(group_main_engine_1)) goto event_1502_23_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1502_23_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1502_23_end;
        global_values->set(4, 0);
        next_frame = 8 + 0;    
    
    }
    event_1502_23_end: ;
}
void Frames::event_func_4941()
{
    // event 1503_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1503_23_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(0))) goto event_1503_23_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) < (200))) goto event_1503_23_end;
        ((Active*)get_instance(sign_351_instances))->alterables->values.add(1, 1);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        global_values->set(4, 0);
    }
    event_1503_23_end: ;
}
void Frames::event_func_4942()
{
    // event 1517_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1517_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1517_23_end;
        if (once_condition_1517_23) goto event_1517_23_end;
        once_condition_1517_23 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_woohoo_ogg_134, 28-1);
    }
    event_1517_23_end: ;
}
void Frames::event_func_4943()
{
    // event 1518_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1518_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1518_23_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (14))) goto event_1518_23_end;
        if (once_condition_1518_23) goto event_1518_23_end;
        once_condition_1518_23 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_yeah_ogg_135, 28-1);
    }
    event_1518_23_end: ;
}
void Frames::event_func_4944()
{
    // event 1519_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1519_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1519_23_end;
        if (once_condition_1519_23) goto event_1519_23_end;
        once_condition_1519_23 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_awesome_ogg_136, 28-1);
    }
    event_1519_23_end: ;
}
void Frames::event_func_4945()
{
    // event 1531_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1531_23_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1531_23_end;
        if (once_condition_1531_23) goto event_1531_23_end;
        once_condition_1531_23 = true;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_1531_23_end: ;
}
void Frames::event_func_4946()
{
    // event 1532_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1532_23_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1532_23_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
    }
    event_1532_23_end: ;
}
void Frames::event_func_4947()
{
    // event 1540_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1540_23_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1540_23_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(4, 2);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1540_23_end: ;
}
void Frames::event_func_4948()
{
    // event 1541_23
    {
        if (!(group_main_engine_1)) goto event_1541_23_end;
        if (!((global_values->get(1)) > (1))) goto event_1541_23_end;
        if (once_condition_1541_23) goto event_1541_23_end;
        once_condition_1541_23 = true;
        bosstunnel_1083_instances.clear_selection();
        for (ObjectIterator it(bosstunnel_1083_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1541_23_end: ;
}
void Frames::event_func_4949()
{
    // event 1542_23
    {
        if (!(group_main_engine_1)) goto event_1542_23_end;
        if (!((global_values->get(1)) < (2))) goto event_1542_23_end;
        if (once_condition_1542_23) goto event_1542_23_end;
        once_condition_1542_23 = true;
        bosstunnel3_1084_instances.clear_selection();
        for (ObjectIterator it(bosstunnel3_1084_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1542_23_end: ;
}
void Frames::event_func_4950()
{
    // event 1543_23
    {
        if (!(group_main_engine_1)) goto event_1543_23_end;
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/6)%math_helper%8);
        }
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(0)-1);
            ((Active*)*it)->force_frame(((global_values->get(3)+3)/math_helper/6)%math_helper%8);
        }
    }
    event_1543_23_end: ;
}
void Frames::event_func_4951()
{
    // event 1544_23
    {
        if (!(group_main_engine_1)) goto event_1544_23_end;
        if (!(!media.is_channel_playing(31-1))) goto event_1544_23_end;
        media.play_id(SOUND_WATERFALL_153, 31-1, 0);
        media.set_channel_volume(31-1, 10);
    }
    event_1544_23_end: ;
}
void Frames::event_func_4952()
{
    // event 1550_23
    {
        if (!(group_main_engine_1)) goto event_1550_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->get_box_index(2)))) goto event_1550_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_off(0))) goto event_1550_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.enable(0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, ((Active*)get_instance(bossgiantboulder_1087_instances))->get_x());
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, ((Active*)get_instance(bossgiantboulder_1087_instances))->get_y());
        if (!group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1) {
            group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, 8);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 10));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->move_front();
    }
    event_1550_23_end: ;
}
void Frames::event_func_4953()
{
    // event 1551_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1551_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(15, get_min((((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()+((Active*)get_instance(player_389_instances))->get_y())*0.5, ((Active*)get_instance(player_389_instances))->get_y()+100));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(14, get_min(((Active*)get_instance(player_389_instances))->get_x()+120, get_max((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+((Active*)get_instance(player_389_instances))->get_x())*0.5, ((Active*)get_instance(player_389_instances))->get_x()-120)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 640);
    }
    event_1551_23_end: ;
}
void Frames::event_func_4954()
{
    // event 1552_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1552_23_end;
        if (!((frame_left()) >= (10600))) goto event_1552_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 10600);
    }
    event_1552_23_end: ;
}
void Frames::event_func_4955()
{
    // event 1553_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1553_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_off(4))) goto event_1553_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(14), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1553_23_end: ;
}
void Frames::event_func_4956()
{
    // event 1554_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1554_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(4))) goto event_1554_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(14)))) goto event_1554_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-8, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1554_23_end: ;
}
void Frames::event_func_4957()
{
    // event 1555_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1555_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(4))) goto event_1555_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(14)))) goto event_1555_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+8);
    }
    event_1555_23_end: ;
}
void Frames::event_func_4958()
{
    // event 1556_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1556_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(4))) goto event_1556_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15)))) goto event_1556_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-3, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15)));
    }
    event_1556_23_end: ;
}
void Frames::event_func_4959()
{
    // event 1557_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1557_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(4))) goto event_1557_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15)))) goto event_1557_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+3, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15)));
    }
    event_1557_23_end: ;
}
void Frames::event_func_4960()
{
    // event 1558_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1558_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(4))) goto event_1558_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()) < (frame_right()))) goto event_1558_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) <= (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(14)))) goto event_1558_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) == (((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(15)))) goto event_1558_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.disable(4);
    }
    event_1558_23_end: ;
}
void Frames::event_func_4961()
{
    // event 1559_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1559_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(6)) <= (0))) goto event_1559_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->set_x(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->set_y(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(1));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(0, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(1, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(3));
    }
    event_1559_23_end: ;
}
void Frames::event_func_4962()
{
    // event 1560_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1560_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(6)) > (0))) goto event_1560_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.sub(6, 1);
    }
    event_1560_23_end: ;
}
void Frames::event_func_4963()
{
    // event 1561_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1561_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (0))) goto event_1561_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->set_angle(((Active*)get_instance(bossgiantboulder_1087_instances))->get_angle()-((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2), 0);
    }
    event_1561_23_end: ;
}
void Frames::event_func_4964()
{
    // event 1562_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1562_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (0))) goto event_1562_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(1)) > (2100))) goto event_1562_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1562_23_end;
        if (once_condition_1562_23) goto event_1562_23_end;
        once_condition_1562_23 = true;
        media.play_id(SOUND_LILAC_GASP1_95, -1, 1);
    }
    event_1562_23_end: ;
}
void Frames::event_func_4965()
{
    // event 1563_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1563_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (0))) goto event_1563_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(1)) > (2100))) goto event_1563_23_end;
        if (!(test_obstacle(((Active*)get_instance(bossgiantboulder_1087_instances))->get_x(), ((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()+64))) goto event_1563_23_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, 0);
    }
    event_1563_23_end: ;
}
void Frames::event_func_4966()
{
    // event 1564_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1564_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) > (0))) goto event_1564_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->set_angle(((Active*)get_instance(bossgiantboulder_1087_instances))->get_angle()-((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2), 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(5, 2+get_min(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)*0.1, 1));
    }
    event_1564_23_end: ;
}
void Frames::event_func_4967()
{
    // event 1565_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1565_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) > (0))) goto event_1565_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) < (11))) goto event_1565_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(5)) >= (20))) goto event_1565_23_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) < (90))) goto event_1565_23_end;
        media.play_id(SOUND_RUMBLE_78, -1, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(5, 0);
    }
    event_1565_23_end: ;
}
void Frames::event_func_4968()
{
    // event 1566_23
    bool or_result_1566_23 = false;
    bool or_temp_result_1566_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_0_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2592))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_0_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_0 = true;
    }
    or_event_1566_23_0_end: ;
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1566_23_0) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_1_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4320))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_1_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_1 = true;
    }
    or_event_1566_23_1_end: ;
    if (or_temp_result_1566_23_1) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_2_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5472))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_2_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_2 = true;
    }
    or_event_1566_23_2_end: ;
    if (or_temp_result_1566_23_2) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_3_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5920))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_3_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_3 = true;
    }
    or_event_1566_23_3_end: ;
    if (or_temp_result_1566_23_3) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_4_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (7072))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_4_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_4 = true;
    }
    or_event_1566_23_4_end: ;
    if (or_temp_result_1566_23_4) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_5 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_5_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (8480))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_5_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_5 = true;
    }
    or_event_1566_23_5_end: ;
    if (or_temp_result_1566_23_5) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1566_23
    bool or_temp_result_1566_23_6 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1566_23_6_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (9888))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1566_23_6_end;
        or_result_1566_23 = true;
        or_temp_result_1566_23_6 = true;
        or_event_1566_23_6_end: ;
        if (or_temp_result_1566_23_6) {
            bossgiantboulder_1087_instances.save_selection();
        }
        if (!or_result_1566_23) goto or_final_or_event_1566_23_6_end;
        bossgiantboulder_1087_instances.empty_selection();
        if (or_temp_result_1566_23_0 || or_temp_result_1566_23_1 || or_temp_result_1566_23_2 || or_temp_result_1566_23_3 || or_temp_result_1566_23_4 || or_temp_result_1566_23_5 || or_temp_result_1566_23_6) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    or_final_or_event_1566_23_6_end: ;
}
void Frames::event_func_4969()
{
    // event 1567_23
    bool or_result_1567_23 = false;
    bool or_temp_result_1567_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1567_23_0_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1567_23_0_end;
        or_result_1567_23 = true;
        or_temp_result_1567_23_0 = true;
    }
    or_event_1567_23_0_end: ;
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1567_23_0) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1567_23
    bool or_temp_result_1567_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1567_23_1_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (9))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1567_23_1_end;
        or_result_1567_23 = true;
        or_temp_result_1567_23_1 = true;
        or_event_1567_23_1_end: ;
        if (or_temp_result_1567_23_1) {
            bossgiantboulder_1087_instances.save_selection();
        }
        if (!or_result_1567_23) goto or_final_or_event_1567_23_1_end;
        bossgiantboulder_1087_instances.empty_selection();
        if (or_temp_result_1567_23_0 || or_temp_result_1567_23_1) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.05, get_max(8, ((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)-1)));
        }
    }
    or_final_or_event_1567_23_1_end: ;
}
void Frames::event_func_4970()
{
    // event 1568_23
    bool or_result_1568_23 = false;
    bool or_temp_result_1568_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1568_23_0_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1568_23_0_end;
        or_result_1568_23 = true;
        or_temp_result_1568_23_0 = true;
    }
    or_event_1568_23_0_end: ;
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1568_23_0) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1568_23
    bool or_temp_result_1568_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1568_23_1_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1568_23_1_end;
        or_result_1568_23 = true;
        or_temp_result_1568_23_1 = true;
    }
    or_event_1568_23_1_end: ;
    if (or_temp_result_1568_23_1) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1568_23
    bool or_temp_result_1568_23_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1568_23_2_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1568_23_2_end;
        or_result_1568_23 = true;
        or_temp_result_1568_23_2 = true;
    }
    or_event_1568_23_2_end: ;
    if (or_temp_result_1568_23_2) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1568_23
    bool or_temp_result_1568_23_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1568_23_3_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (10))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1568_23_3_end;
        or_result_1568_23 = true;
        or_temp_result_1568_23_3 = true;
        or_event_1568_23_3_end: ;
        if (or_temp_result_1568_23_3) {
            bossgiantboulder_1087_instances.save_selection();
        }
        if (!or_result_1568_23) goto or_final_or_event_1568_23_3_end;
        bossgiantboulder_1087_instances.empty_selection();
        if (or_temp_result_1568_23_0 || or_temp_result_1568_23_1 || or_temp_result_1568_23_2 || or_temp_result_1568_23_3) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2)*0.0625);
        }
    }
    or_final_or_event_1568_23_3_end: ;
}
void Frames::event_func_4971()
{
    // event 1569_23
    bool or_result_1569_23 = false;
    bool or_temp_result_1569_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1569_23_0_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1569_23_0_end;
        or_result_1569_23 = true;
        or_temp_result_1569_23_0 = true;
    }
    or_event_1569_23_0_end: ;
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1569_23_0) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1569_23
    bool or_temp_result_1569_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1569_23_1_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1569_23_1_end;
        or_result_1569_23 = true;
        or_temp_result_1569_23_1 = true;
    }
    or_event_1569_23_1_end: ;
    if (or_temp_result_1569_23_1) {
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1569_23
    bool or_temp_result_1569_23_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto or_event_1569_23_2_end;
        bossgiantboulder_1087_instances.clear_selection();
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1569_23_2_end;
        or_result_1569_23 = true;
        or_temp_result_1569_23_2 = true;
        or_event_1569_23_2_end: ;
        if (or_temp_result_1569_23_2) {
            bossgiantboulder_1087_instances.save_selection();
        }
        if (!or_result_1569_23) goto or_final_or_event_1569_23_2_end;
        bossgiantboulder_1087_instances.empty_selection();
        if (or_temp_result_1569_23_0 || or_temp_result_1569_23_1 || or_temp_result_1569_23_2) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    or_final_or_event_1569_23_2_end: ;
}
void Frames::event_func_4972()
{
    // event 1570_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1570_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (7))) goto event_1570_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)*-0.0625);
    }
    event_1570_23_end: ;
}
void Frames::event_func_4973()
{
    // event 1571_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1571_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (8))) goto event_1571_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, get_max(8-((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(7), 0));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(7)*-1.5);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(7, 0.2);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(5, 0);
    }
    event_1571_23_end: ;
}
void Frames::event_func_4974()
{
    // event 1572_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1572_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (8))) goto event_1572_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(7)) >= (8))) goto event_1572_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(4, 1);
    }
    event_1572_23_end: ;
}
void Frames::event_func_4975()
{
    // event 1573_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1573_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (9))) goto event_1573_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(3)+0.4, 12));
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(5, 0);
    }
    event_1573_23_end: ;
}
void Frames::event_func_4976()
{
    // event 1574_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1574_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (9))) goto event_1574_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(3)) > (5))) goto event_1574_23_end;
        if (!(test_obstacle(((Active*)get_instance(bossgiantboulder_1087_instances))->get_x(), ((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()+64))) goto event_1574_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1574_23_end: ;
}
void Frames::event_func_4977()
{
    // event 1575_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1575_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (10))) goto event_1575_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) >= (12320))) goto event_1575_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1575_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)-200);
    }
    event_1575_23_end: ;
}
void Frames::event_func_4978()
{
    // event 1576_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1576_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (10))) goto event_1576_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) >= (12320))) goto event_1576_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 12320);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+5, 5));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1576_23_end: ;
}
void Frames::event_func_4979()
{
    // event 1577_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1577_23_end;
        bossgiantboulder_1087_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        if (!check_overlap(bossgiantboulder_1087_instances, bosstunnel2_1077_instances)) goto event_1577_23_end;
        for (ObjectIterator it(bosstunnel2_1077_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosstunnel2_1077_instances.has_selection()) goto event_1577_23_end;
        for (ObjectIterator it(bosstunnel2_1077_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(true);
        }
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosstunnel2_1077_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 12), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 24), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 36), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 48), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 60), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 72), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 84), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 96), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 108), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 120), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, 6);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(6, 3);
        for (ObjectIterator it(bosstunnel2_1077_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1577_23_end: ;
}
