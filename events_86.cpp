#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_explode0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_31(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_31(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_31(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_play_music_6_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_31();
}
void Frames::loop_wrapper_sound_go0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_31(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_28();
}
void Frames::loop_wrapper_sound_explode3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_7074()
{
    // event 1958_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1958_31_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) == (3))) goto event_1958_31_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(1))) goto event_1958_31_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
        media.play_id(SOUND_COMMON_EXPLODE6_319, -1, 1);
            group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1 = false;
    
    }
    event_1958_31_end: ;
}
void Frames::col_0_31()
{
    event_func_7074();
}
void Frames::event_func_7075()
{
    // event 2085_31
    {
        if (!(group_main_engine_1)) goto event_2085_31_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_2085_31_end: ;
}
void Frames::col_8_31()
{
    event_func_7075();
}
void Frames::event_func_7076()
{
    // event 2081_31
    {
        if (!(group_main_engine_1)) goto event_2081_31_end;
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_2081_31_0; single_instance_2081_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_2081_31_0 == NULL)
                single_instance_2081_31_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
        ((Active*)((Active*)single_instance_2081_31_0))->set_angle(randrange(4)*90, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2081_31_end: ;
}
void Frames::col_14_31()
{
    event_func_7076();
}
void Frames::event_func_7077()
{
    // event 2093_31
    {
        if (!(group_main_engine_1)) goto event_2093_31_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_2093_31_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 6);
    }
    event_2093_31_end: ;
}
void Frames::col_19_31()
{
    event_func_7077();
}
void Frames::event_func_7078()
{
    // event 2084_31
    {
        if (!(group_main_engine_1)) goto event_2084_31_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
    }
    event_2084_31_end: ;
}
void Frames::col_24_31()
{
    event_func_7078();
}
void Frames::event_func_7079()
{
    // event 2092_31
    {
        if (!(group_main_engine_1)) goto event_2092_31_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_2092_31_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 6);
    }
    event_2092_31_end: ;
}
void Frames::col_29_31()
{
    event_func_7079();
}
void Frames::test_collisions_31()
{
    test_collisions(minibossufo_1763_instances, largecolumn2_1862_instances, 1, 1, (EventFunction)&Frames::col_0_31);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(playersensorleftbig_391_instances, breakablewall_1748_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 2, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_19, minibossflame_1199_instances, 1073741824, 1, (EventFunction)&Frames::col_17_25);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(minibossflame_1199_instances, lamppostfront_1778_instances, 2, 1, (EventFunction)&Frames::col_8_31);
    test_collisions(qualifier_8, enemyflare_1787_instances, 536870912, 1, (EventFunction)&Frames::col_7_30);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 134217728, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 33554432, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(player_389_instances, bossrapidbullet_1834_instances, 1, 1, (EventFunction)&Frames::col_14_31);
    test_collisions(qualifier_7, effectsdebris_319_instances, 16777216, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(player_389_instances, bossmissile_1835_instances, 2, 1, (EventFunction)&Frames::col_19_31);
    test_collisions(playersensorrightbig_393_instances, breakablewall_1748_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(shieldflamefront_316_instances, enemyflare_1787_instances, 1, 2, (EventFunction)&Frames::col_18_30);
    test_collisions(player_389_instances, enemyflare_1787_instances, 4, 4, (EventFunction)&Frames::col_19_30);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(lamppostfront_1778_instances, bossrapidbullet_1834_instances, 2, 2, (EventFunction)&Frames::col_24_31);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 8, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
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
    for (it1 = bossmissile_1835_instances.begin(); it1 != bossmissile_1835_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_29_31();
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
void Frames::event_func_7080()
{
    // event 1401_31
    {
        if (!(group_main_engine_1)) goto event_1401_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1401_31_end;
        if (not_always_1401_31 > loop_count) {
            not_always_1401_31 = loop_count + 2;
            goto event_1401_31_end;
        }
        not_always_1401_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1401_31_end: ;
}
void Frames::event_func_7081()
{
    // event 1403_31
    {
        if (!(group_main_engine_1)) goto event_1403_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1403_31_end;
        if (not_always_1403_31 > loop_count) {
            not_always_1403_31 = loop_count + 2;
            goto event_1403_31_end;
        }
        not_always_1403_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1403_31_end: ;
}
void Frames::event_func_7082()
{
    // event 1404_31
    {
        if (!(group_main_engine_1)) goto event_1404_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1404_31_end;
        if (not_always_1404_31 > loop_count) {
            not_always_1404_31 = loop_count + 2;
            goto event_1404_31_end;
        }
        not_always_1404_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1404_31_end: ;
}
void Frames::event_func_7083()
{
    // event 1405_31
    {
        if (!(group_main_engine_1)) goto event_1405_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1405_31_end;
        if (not_always_1405_31 > loop_count) {
            not_always_1405_31 = loop_count + 2;
            goto event_1405_31_end;
        }
        not_always_1405_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1405_31_end: ;
}
void Frames::event_func_7084()
{
    // event 1406_31
    {
        if (!(group_main_engine_1)) goto event_1406_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_31_end;
        if (not_always_1406_31 > loop_count) {
            not_always_1406_31 = loop_count + 2;
            goto event_1406_31_end;
        }
        not_always_1406_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1406_31_end: ;
}
void Frames::event_func_7085()
{
    // event 1407_31
    {
        if (!(group_main_engine_1)) goto event_1407_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_31_end;
        if (not_always_1407_31 > loop_count) {
            not_always_1407_31 = loop_count + 2;
            goto event_1407_31_end;
        }
        not_always_1407_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1407_31_end: ;
}
void Frames::event_func_7086()
{
    // event 1409_31
    {
        if (!(group_main_engine_1)) goto event_1409_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1409_31_end;
        if (not_always_1409_31 > loop_count) {
            not_always_1409_31 = loop_count + 2;
            goto event_1409_31_end;
        }
        not_always_1409_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1409_31_end: ;
}
void Frames::event_func_7087()
{
    // event 1410_31
    {
        if (!(group_main_engine_1)) goto event_1410_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1410_31_end;
        if (not_always_1410_31 > loop_count) {
            not_always_1410_31 = loop_count + 2;
            goto event_1410_31_end;
        }
        not_always_1410_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1410_31_end: ;
}
void Frames::event_func_7088()
{
    // event 1411_31
    {
        if (!(group_main_engine_1)) goto event_1411_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1411_31_end;
        if (not_always_1411_31 > loop_count) {
            not_always_1411_31 = loop_count + 2;
            goto event_1411_31_end;
        }
        not_always_1411_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1411_31_end: ;
}
void Frames::event_func_7089()
{
    // event 1412_31
    {
        if (!(group_main_engine_1)) goto event_1412_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1412_31_end;
        if (not_always_1412_31 > loop_count) {
            not_always_1412_31 = loop_count + 2;
            goto event_1412_31_end;
        }
        not_always_1412_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1412_31_end: ;
}
void Frames::event_func_7090()
{
    // event 1413_31
    {
        if (!(group_main_engine_1)) goto event_1413_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (15))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1413_31_end;
        if (not_always_1413_31 > loop_count) {
            not_always_1413_31 = loop_count + 2;
            goto event_1413_31_end;
        }
        not_always_1413_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1413_31_end: ;
}
void Frames::event_func_7091()
{
    // event 1414_31
    {
        if (!(group_main_engine_1)) goto event_1414_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (16))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1414_31_end;
        if (not_always_1414_31 > loop_count) {
            not_always_1414_31 = loop_count + 2;
            goto event_1414_31_end;
        }
        not_always_1414_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1414_31_end: ;
}
void Frames::event_func_7092()
{
    // event 1415_31
    {
        if (!(group_main_engine_1)) goto event_1415_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (17))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1415_31_end;
        if (not_always_1415_31 > loop_count) {
            not_always_1415_31 = loop_count + 2;
            goto event_1415_31_end;
        }
        not_always_1415_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1415_31_end: ;
}
void Frames::event_func_7093()
{
    // event 1416_31
    {
        if (!(group_main_engine_1)) goto event_1416_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (18))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1416_31_end;
        if (not_always_1416_31 > loop_count) {
            not_always_1416_31 = loop_count + 2;
            goto event_1416_31_end;
        }
        not_always_1416_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1416_31_end: ;
}
void Frames::event_func_7094()
{
    // event 1417_31
    {
        if (!(group_main_engine_1)) goto event_1417_31_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (19))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1417_31_end;
        if (not_always_1417_31 > loop_count) {
            not_always_1417_31 = loop_count + 2;
            goto event_1417_31_end;
        }
        not_always_1417_31 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1417_31_end: ;
}
void Frames::event_func_7095()
{
    // event 1439_31
    {
        if (!(group_main_engine_1)) goto event_1439_31_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1439_31_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_1439_31_end: ;
}
void Frames::event_func_7096()
{
    // event 1441_31
    {
        if (!(group_main_engine_1)) goto event_1441_31_end;
        gimmickhangingswitch_1256_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickhangingidleswitch_1257_instances, it.current_index));
            if (parent == NULL) goto pos_end_1441_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1441_31_0: ;
        }
    }
    event_1441_31_end: ;
}
void Frames::event_func_7097()
{
    // event 1447_31
    bool or_result_1447_31 = false;
    bool or_temp_result_1447_31_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1447_31_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1447_31_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1447_31_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakablewall_1748_instances)) goto or_event_1447_31_0_end;
        or_result_1447_31 = true;
        or_temp_result_1447_31_0 = true;
    }
    or_event_1447_31_0_end: ;
    breakablewall_1748_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1447_31_0) {
        breakablewall_1748_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1447_31
    bool or_temp_result_1447_31_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1447_31_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1447_31_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1447_31_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakablewall_1748_instances)) goto or_event_1447_31_1_end;
        or_result_1447_31 = true;
        or_temp_result_1447_31_1 = true;
    }
    or_event_1447_31_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1447_31_1) {
        playersensorrightbig_393_instances.save_selection();
        breakablewall_1748_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1447_31
    bool or_temp_result_1447_31_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1447_31_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakablewall_1748_instances)) goto or_event_1447_31_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1447_31_2_end;
        or_result_1447_31 = true;
        or_temp_result_1447_31_2 = true;
        or_event_1447_31_2_end: ;
        shieldinstashield_359_instances.clear_saved_selection();
        if (or_temp_result_1447_31_2) {
            breakablewall_1748_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            shieldinstashield_359_instances.save_selection();
        }
        if (!or_result_1447_31) goto or_final_or_event_1447_31_2_end;
        playerothers_123_instances.empty_selection();
        breakablewall_1748_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1447_31_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1447_31_0 || or_temp_result_1447_31_1 || or_temp_result_1447_31_2) {
            breakablewall_1748_instances.restore_selection();
        }
        if (or_temp_result_1447_31_0 || or_temp_result_1447_31_1 || or_temp_result_1447_31_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1447_31_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1447_31_0 || or_temp_result_1447_31_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1447_31_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1447_31_2_end: ;
}
void Frames::event_func_7098()
{
    // event 1448_31
    bool or_result_1448_31 = false;
    bool or_temp_result_1448_31_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_31_0_end;
        playerreflect_447_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakablewall_1748_instances)) goto or_event_1448_31_0_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1448_31_0_end;
        or_result_1448_31 = true;
        or_temp_result_1448_31_0 = true;
    }
    or_event_1448_31_0_end: ;
    breakablewall_1748_instances.clear_saved_selection();
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1448_31_0) {
        breakablewall_1748_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1448_31
    bool or_temp_result_1448_31_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_31_1_end;
        thunderspark_339_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakablewall_1748_instances)) goto or_event_1448_31_1_end;
        or_result_1448_31 = true;
        or_temp_result_1448_31_1 = true;
        or_event_1448_31_1_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1448_31_1) {
            breakablewall_1748_instances.save_selection();
            thunderspark_339_instances.save_selection();
        }
        if (!or_result_1448_31) goto or_final_or_event_1448_31_1_end;
        thunderspark_339_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        breakablewall_1748_instances.empty_selection();
        if (or_temp_result_1448_31_0 || or_temp_result_1448_31_1) {
            breakablewall_1748_instances.restore_selection();
        }
        if (or_temp_result_1448_31_1) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1448_31_0) {
            playerreflect_447_instances.restore_selection();
        }
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1448_31_1_end: ;
}
void Frames::event_func_7099()
{
    // event 1461_31
    {
        if (!(group_main_engine_1)) goto event_1461_31_end;
        playersensorrightbig_393_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1461_31_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarchbase_1725_instances)) goto event_1461_31_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1461_31_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1461_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1461_31_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (175))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1461_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 90);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 90);
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
    }
    event_1461_31_end: ;
}
void Frames::event_func_7100()
{
    // event 1462_31
    {
        if (!(group_main_engine_1)) goto event_1462_31_end;
        playersensorleftbig_391_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1462_31_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarchbase_1725_instances)) goto event_1462_31_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1462_31_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1462_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1462_31_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (5))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1462_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 270);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 270);
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
    }
    event_1462_31_end: ;
}
void Frames::event_func_7101()
{
    // event 1469_31
    {
        if (!(group_main_engine_1)) goto event_1469_31_end;
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/150)%math_helper%4);
        }
        strobelight_1840_instances.clear_selection();
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(0))*30, 0);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%360);
        }
    }
    event_1469_31_end: ;
}
void Frames::event_func_7102()
{
    // event 1471_31
    {
        if (!(group_main_engine_1)) goto event_1471_31_end;
        if (((Active*)get_instance(signyield_1738_instances))->is_near_border(-30)) goto event_1471_31_end;
        ((Active*)get_instance(signyield_1738_instances))->force_speed(((Active*)get_instance(signyield_1738_instances))->alterables->values.get(0));
    }
    event_1471_31_end: ;
}
void Frames::event_func_7103()
{
    // event 1472_31
    {
        if (!(group_main_engine_1)) goto event_1472_31_end;
        if (!(((Active*)get_instance(signyield_1738_instances))->is_near_border(-30))) goto event_1472_31_end;
        ((Active*)get_instance(signyield_1738_instances))->force_frame(0);
        ((Active*)get_instance(signyield_1738_instances))->restore_frame();
    }
    event_1472_31_end: ;
}
void Frames::event_func_7104()
{
    // event 1473_31
    {
        if (!(group_main_engine_1)) goto event_1473_31_end;
        playercharactersensor_383_instances.clear_selection();
        signyield_1738_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, signyield_1738_instances)) goto event_1473_31_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (5))) goto event_1473_31_end;
        ((Active*)get_instance(signyield_1738_instances))->alterables->values.set(0, get_floor(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*10));
    }
    event_1473_31_end: ;
}
void Frames::event_func_7105()
{
    // event 1474_31
    {
        if (!(group_main_engine_1)) goto event_1474_31_end;
        if (!((((Active*)get_instance(signyield_1738_instances))->alterables->values.get(0)) > (20))) goto event_1474_31_end;
        ((Active*)get_instance(signyield_1738_instances))->alterables->values.sub(0, 1);
    }
    event_1474_31_end: ;
}
void Frames::event_func_7106()
{
    // event 1475_31
    {
        if (!(group_main_engine_1)) goto event_1475_31_end;
        if (!((((Active*)get_instance(signyield_1738_instances))->alterables->values.get(0)) == (20))) goto event_1475_31_end;
        if (!((((Active*)get_instance(signyield_1738_instances))->get_frame()) == (0))) goto event_1475_31_end;
        ((Active*)get_instance(signyield_1738_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(signyield_1738_instances))->force_speed(0);
    }
    event_1475_31_end: ;
}
void Frames::event_func_7107()
{
    // event 1476_31
    {
        if (!(group_main_engine_1)) goto event_1476_31_end;
        if (((Active*)get_instance(signstop_1716_instances))->is_near_border(-30)) goto event_1476_31_end;
        ((Active*)get_instance(signstop_1716_instances))->force_speed(((Active*)get_instance(signstop_1716_instances))->alterables->values.get(0));
    }
    event_1476_31_end: ;
}
void Frames::event_func_7108()
{
    // event 1477_31
    {
        if (!(group_main_engine_1)) goto event_1477_31_end;
        if (!(((Active*)get_instance(signstop_1716_instances))->is_near_border(-30))) goto event_1477_31_end;
        ((Active*)get_instance(signstop_1716_instances))->force_frame(0);
        ((Active*)get_instance(signstop_1716_instances))->restore_frame();
    }
    event_1477_31_end: ;
}
void Frames::event_func_7109()
{
    // event 1478_31
    {
        if (!(group_main_engine_1)) goto event_1478_31_end;
        playercharactersensor_383_instances.clear_selection();
        signstop_1716_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, signstop_1716_instances)) goto event_1478_31_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (5))) goto event_1478_31_end;
        ((Active*)get_instance(signstop_1716_instances))->alterables->values.set(0, get_floor(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*10));
    }
    event_1478_31_end: ;
}
void Frames::event_func_7110()
{
    // event 1479_31
    {
        if (!(group_main_engine_1)) goto event_1479_31_end;
        if (!((((Active*)get_instance(signstop_1716_instances))->alterables->values.get(0)) > (20))) goto event_1479_31_end;
        ((Active*)get_instance(signstop_1716_instances))->alterables->values.sub(0, 1);
    }
    event_1479_31_end: ;
}
void Frames::event_func_7111()
{
    // event 1480_31
    {
        if (!(group_main_engine_1)) goto event_1480_31_end;
        if (!((((Active*)get_instance(signstop_1716_instances))->alterables->values.get(0)) == (20))) goto event_1480_31_end;
        if (!((((Active*)get_instance(signstop_1716_instances))->get_frame()) == (0))) goto event_1480_31_end;
        ((Active*)get_instance(signstop_1716_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(signstop_1716_instances))->force_speed(0);
    }
    event_1480_31_end: ;
}
void Frames::event_func_7112()
{
    // event 1493_31
    {
        if (!(group_main_engine_1)) goto event_1493_31_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1493_31_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index));
            if (parent == NULL) goto pos_end_1493_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 80, parent->get_y() + -80);
            pos_end_1493_31_0: ;
        }
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index))->get_fixed());
        }
    }
    event_1493_31_end: ;
}
void Frames::event_func_7113()
{
    // event 1494_31
    {
        if (!(group_main_engine_1)) goto event_1494_31_end;
        gimmickhangingswitch_1256_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingswitch_1256_instances.has_selection()) goto event_1494_31_end;
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index));
            if (parent == NULL) goto pos_end_1494_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 80, parent->get_y() + -80);
            pos_end_1494_31_0: ;
        }
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1494_31_end: ;
}
void Frames::event_func_7114()
{
    // event 1495_31
    {
        if (!(group_main_engine_1)) goto event_1495_31_end;
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index));
            if (parent == NULL) goto pos_end_1495_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 39, parent->get_y() + -39);
            pos_end_1495_31_0: ;
        }
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->set_direction(0);
        }
        gachapondoor_1858_instances.clear_selection();
        for (ObjectIterator it(gachapondoor_1858_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index));
            if (parent == NULL) goto pos_end_1495_31_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1495_31_1: ;
        }
        for (ObjectIterator it(gachapondoor_1858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(gachaponwheel_1843_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
    }
    event_1495_31_end: ;
}
void Frames::event_func_7115()
{
    // event 1496_31
    {
        if (!(group_main_engine_1)) goto event_1496_31_end;
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!gachaponfront_1859_instances.has_selection()) goto event_1496_31_end;
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1496_31_end: ;
}
void Frames::event_func_7116()
{
    // event 1497_31
    {
        if (!(group_main_engine_1)) goto event_1497_31_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1497_31_end;
        {
            FrameObject * fixed = get_object_from_fixed(((Active*)get_single(gimmickhangingidleswitch_1257_instances, default_active_instance))->alterables->values.get(1));
            gachaponwheel_1843_instances.clear_selection();
            for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
                if ((*it) != fixed) it.deselect();
            }
        }
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1497_31_end: ;
}
void Frames::event_func_7117()
{
    // event 1498_31
    {
        if (!(group_main_engine_1)) goto event_1498_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1498_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        media.play_id(SOUND_COMMON_GACHAPONSTART_187, -1, 1);
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 20+randrange(20));
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1498_31_end: ;
}
void Frames::event_func_7118()
{
    // event 1499_31
    {
        if (!(group_main_engine_1)) goto event_1499_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1499_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.4, 20));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 1);
            ((Active*)*it)->alterables->values.set(2, int(((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(1)));
        }
    }
    event_1499_31_end: ;
}
void Frames::event_func_7119()
{
    // event 1500_31
    {
        if (!(group_main_engine_1)) goto event_1500_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (20))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1500_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1500_31_end: ;
}
void Frames::event_func_7120()
{
    // event 1501_31
    {
        if (!(group_main_engine_1)) goto event_1501_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1501_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1501_31_end: ;
}
void Frames::event_func_7121()
{
    // event 1502_31
    {
        if (!(group_main_engine_1)) goto event_1502_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1502_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.4, 3));
            ((Active*)*it)->alterables->values.set(2, int(((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(1))%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 1);
        }
    }
    event_1502_31_end: ;
}
void Frames::event_func_7122()
{
    // event 1503_31
    {
        if (!(group_main_engine_1)) goto event_1503_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (3))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1503_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(2)%math_helper%45) <= (2))) goto event_1503_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)/math_helper/45);
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1503_31_end: ;
}
void Frames::event_func_7123()
{
    // event 1504_31
    {
        if (!(group_main_engine_1)) goto event_1504_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1504_31_end;
        media.play_id(SOUND_COMMON_GACHAPONWIN_188, -1, 1);
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1504_31_end: ;
}
void Frames::event_func_7124()
{
    // event 1505_31
    {
        if (!(group_main_engine_1)) goto event_1505_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1505_31_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1505_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1505_31_0; single_instance_1505_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1505_31_0 == NULL)
                    single_instance_1505_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1505_31_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1505_31_0))->set_direction(20+((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)/math_helper/10);
        ((Active*)((Active*)single_instance_1505_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1505_31_0))->move_back();
        ((Active*)((Active*)single_instance_1505_31_0))->alterables->values.set(0, 2);
    }
    event_1505_31_end: ;
}
void Frames::event_func_7125()
{
    // event 1506_31
    {
        if (!(group_main_engine_1)) goto event_1506_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1506_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)%math_helper%10) == (0))) goto event_1506_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1506_31_0; single_instance_1506_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1506_31_0 == NULL)
                    single_instance_1506_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1506_31_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1506_31_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1506_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1506_31_0))->move_back();
    }
    event_1506_31_end: ;
}
void Frames::event_func_7126()
{
    // event 1507_31
    {
        if (!(group_main_engine_1)) goto event_1507_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1507_31_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1507_31_end;
        FrameObject * single_instance_1507_31_0; single_instance_1507_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1507_31_0 == NULL)
                    single_instance_1507_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1507_31_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1507_31_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1507_31_0))->set_direction(18+((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)/math_helper/7);
        ((Active*)((Active*)single_instance_1507_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1507_31_0))->move_back();
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
    }
    event_1507_31_end: ;
}
void Frames::event_func_7127()
{
    // event 1508_31
    {
        if (!(group_main_engine_1)) goto event_1508_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1508_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)%math_helper%10) == (0))) goto event_1508_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1508_31_0; single_instance_1508_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1508_31_0 == NULL)
                    single_instance_1508_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1508_31_0))->set_direction(1);
        ((Active*)((Active*)single_instance_1508_31_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1508_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1508_31_0))->move_back();
    }
    event_1508_31_end: ;
}
void Frames::event_func_7128()
{
    // event 1509_31
    {
        if (!(group_main_engine_1)) goto event_1509_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1509_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)%math_helper%10) == (0))) goto event_1509_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1509_31_0; single_instance_1509_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1509_31_0 == NULL)
                    single_instance_1509_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1509_31_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1509_31_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1509_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1509_31_0))->move_back();
    }
    event_1509_31_end: ;
}
void Frames::event_func_7129()
{
    // event 1510_31
    {
        if (!(group_main_engine_1)) goto event_1510_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1510_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)%math_helper%10) == (0))) goto event_1510_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1510_31_0; single_instance_1510_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1510_31_0 == NULL)
                    single_instance_1510_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1510_31_0))->set_direction(4);
        ((Active*)((Active*)single_instance_1510_31_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1510_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1510_31_0))->move_back();
    }
    event_1510_31_end: ;
}
void Frames::event_func_7130()
{
    // event 1511_31
    {
        if (!(group_main_engine_1)) goto event_1511_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1511_31_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1511_31_end;
        FrameObject * single_instance_1511_31_0; single_instance_1511_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1511_31_0 == NULL)
                    single_instance_1511_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1511_31_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1511_31_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1511_31_0))->set_direction(18+((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)/math_helper/7);
        ((Active*)((Active*)single_instance_1511_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1511_31_0))->move_back();
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
    }
    event_1511_31_end: ;
}
void Frames::event_func_7131()
{
    // event 1512_31
    {
        if (!(group_main_engine_1)) goto event_1512_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1512_31_end;
        if (!((((Active*)get_single(gachaponwheel_1843_instances, default_active_instance))->alterables->values.get(3)%math_helper%10) == (0))) goto event_1512_31_end;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 1);
        FrameObject * single_instance_1512_31_0; single_instance_1512_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gachaponwheel_1843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1512_31_0 == NULL)
                    single_instance_1512_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1512_31_0))->set_direction(2);
        ((Active*)((Active*)single_instance_1512_31_0))->alterables->values.set(1, 2);
        ((Active*)((Active*)single_instance_1512_31_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1512_31_0))->move_back();
    }
    event_1512_31_end: ;
}
void Frames::event_func_7132()
{
    // event 1513_31
    {
        if (!(group_main_engine_1)) goto event_1513_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1513_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->force_frame(8-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((global_values->get(3)/math_helper/5)%math_helper%2)+1);
        }
    }
    event_1513_31_end: ;
}
void Frames::event_func_7133()
{
    // event 1514_31
    {
        if (!(group_main_engine_1)) goto event_1514_31_end;
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (80))) { it.deselect(); continue; }
        }
        if (!gachaponwheel_1843_instances.has_selection()) goto event_1514_31_end;
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(4);
        }
    }
    event_1514_31_end: ;
}
void Frames::event_func_7134()
{
    // event 1515_31
    {
        if (!(group_main_engine_1)) goto event_1515_31_end;
        ((Active*)get_instance(gimmickverticalhalfpipe2_1825_instances))->alterables->flags.enable(0);
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        for (ObjectIterator it(gimmickverticalhalfpipe5_1826_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1515_31_end: ;
}
