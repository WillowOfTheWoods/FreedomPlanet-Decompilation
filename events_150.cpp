#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_hurt2_52(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_52(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_52(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_play_music_2_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_46();
}
void Frames::loop_wrapper_sound_attack1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_52(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_uppercut3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_52();
}
void Frames::loop_wrapper_play_music_6_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_52();
}
void Frames::loop_wrapper_sound_go0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_process_call_me_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_52(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_52();
}
void Frames::loop_wrapper_sound_explode3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::test_collisions_52()
{
    test_collisions(qualifier_7, playerprojectile_320_instances, 2147483648, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playersensorrightbig_393_instances, breakableplrock_2987_instances, 1, 1, (EventFunction)&Frames::col_6_16);
    test_collisions(gimmickbowarrow_2979_instances, breakableplrock_2987_instances, 1, 2, (EventFunction)&Frames::col_7_51);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 134217728, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(playersensorleftbig_391_instances, breakableplrock_2987_instances, 1, 4, (EventFunction)&Frames::col_3_16);
    test_collisions(enemysleepgas_2889_instances, enemyterreon_2985_instances, 1, 1, (EventFunction)&Frames::col_10_51);
    test_collisions(playercharactersensor_383_instances, enemysleepgas_2889_instances, 1, 2, (EventFunction)&Frames::col_6_50);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playersensorbottombig_397_instances, objectcyclonetop_2963_instances, 1, 1, (EventFunction)&Frames::col_8_50);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(player_389_instances, objecttimegate_2965_instances, 2, 1, (EventFunction)&Frames::col_9_50);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_20, gimmickbowarrow_2979_instances, 16777216, 2, (EventFunction)&Frames::col_17_51);
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
void Frames::event_func_11954()
{
    // event 4_52
    {
        if (!(group_main_engine_1)) goto event_4_52_end;
        {
            {
                foreach_instance_ba = ((Active*)get_instance(gimmickbowarrow_2979_instances));
                foreach_ba_51();
            }
        }
    }
    event_4_52_end: ;
}
void Frames::event_func_11955()
{
    // event 6_52
    {
        if (!(group_main_engine_1)) goto event_6_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_6_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_6_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_6_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_6_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (0))) goto event_6_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) goto event_6_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) goto event_6_52_end;
        gimmickbowarrow_2979_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickbowarrow_2979_instances, player_389_instances)) goto event_6_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 99);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(11, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(0));
    }
    event_6_52_end: ;
}
void Frames::event_func_11956()
{
    // event 7_52
    {
        if (!(group_main_engine_1)) goto event_7_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_7_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(10, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_7_52_end: ;
}
void Frames::event_func_11957()
{
    // event 8_52
    {
        if (!(group_main_engine_1)) goto event_8_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_8_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) > (0))) goto event_8_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) < (4))) goto event_8_52_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)*-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(6);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(6);
        }
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9));
    }
    event_8_52_end: ;
}
void Frames::event_func_11958()
{
    // event 9_52
    {
        if (!(group_main_engine_1)) goto event_9_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_9_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) > (0))) goto event_9_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) < (4))) goto event_9_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(10)) > (2))) goto event_9_52_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_9_52_end: ;
}
void Frames::event_func_11959()
{
    // event 10_52
    {
        if (!(group_main_engine_1)) goto event_10_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)) < (0))) goto event_10_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(11, get_min(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)+4, 0));
    }
    event_10_52_end: ;
}
void Frames::event_func_11960()
{
    // event 11_52
    {
        if (!(group_main_engine_1)) goto event_11_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)) > (0))) goto event_11_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(11, get_max(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(11)-4, 0));
    }
    event_11_52_end: ;
}
void Frames::event_func_11961()
{
    // event 12_52
    {
        if (!(group_main_engine_1)) goto event_12_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (1))) goto event_12_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.sub(6, 2);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.sub(0, 2);
    }
    event_12_52_end: ;
}
void Frames::event_func_11962()
{
    // event 13_52
    {
        if (!(group_main_engine_1)) goto event_13_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (1))) goto event_13_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) <= (-50))) goto event_13_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(7, 1);
        media.play_id(SOUND_ARROW_LAUNCH_327, -1, 1);
    }
    event_13_52_end: ;
}
void Frames::event_func_11963()
{
    // event 14_52
    {
        if (!(group_main_engine_1)) goto event_14_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (2))) goto event_14_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(6, 15);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(0, 15);
    }
    event_14_52_end: ;
}
void Frames::event_func_11964()
{
    // event 15_52
    {
        if (!(group_main_engine_1)) goto event_15_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (2))) goto event_15_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) >= (0))) goto event_15_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(7, 1);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(8, 10);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(2, 15);
    }
    event_15_52_end: ;
}
void Frames::event_func_11965()
{
    // event 16_52
    {
        if (!(group_main_engine_1)) goto event_16_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) >= (3))) goto event_16_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) > (0))) goto event_16_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(8, get_max(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(8)-1, -10));
    }
    event_16_52_end: ;
}
void Frames::event_func_11966()
{
    // event 17_52
    {
        if (!(group_main_engine_1)) goto event_17_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) >= (3))) goto event_17_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) < (0))) goto event_17_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(8, get_min(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(8)+1, 10));
    }
    event_17_52_end: ;
}
void Frames::event_func_11967()
{
    // event 18_52
    {
        if (!(group_main_engine_1)) goto event_18_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) >= (3))) goto event_18_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(6, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(8));
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(8, ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(8)*0.9);
    }
    event_18_52_end: ;
}
void Frames::event_func_11968()
{
    // event 19_52
    {
        if (!(group_main_engine_1)) goto event_19_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) >= (3))) goto event_19_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) > (-1))) goto event_19_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(6)) < (1))) goto event_19_52_end;
        if (!((get_abs(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(8))) < (1))) goto event_19_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(8, 0);
    }
    event_19_52_end: ;
}
void Frames::event_func_11969()
{
    // event 20_52
    {
        if (!(group_main_engine_1)) goto event_20_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(13)) > (0))) goto event_20_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.sub(13, 1);
    }
    event_20_52_end: ;
}
void Frames::event_func_11970()
{
    // event 21_52
    {
        if (!(group_main_engine_1)) goto event_21_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (3))) goto event_21_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(13)) <= (0))) goto event_21_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(0, cos_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.add(1, sin_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(2)*-1);
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.sub(9, 0.4);
    }
    event_21_52_end: ;
}
void Frames::event_func_11971()
{
    // event 24_52
    {
        if (!(group_main_engine_1)) goto event_24_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (3))) goto event_24_52_end;
        if (!(((Active*)get_instance(gimmickbowarrow_2979_instances))->overlaps_background())) goto event_24_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_24_52_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, cos_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, sin_deg(((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(9))*((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(2)*-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_24_52_end: ;
}
void Frames::event_func_11972()
{
    // event 25_52
    {
        if (!(group_main_engine_1)) goto event_25_52_end;
        if (!((((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.get(7)) == (3))) goto event_25_52_end;
        if (!(((Active*)get_instance(gimmickbowarrow_2979_instances))->overlaps_background())) goto event_25_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(7, 4);
        FrameObject * single_instance_25_52_0; single_instance_25_52_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(gimmickbowarrow_2979_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbowarrowplatform_2970(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_25_52_0 == NULL)
                    single_instance_25_52_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_25_52_0))->set_angle(((Active*)get_instance(gimmickbowarrow_2979_instances))->get_angle(), 0);
        media.play_id(SOUND_ARROW_LAND_328, -1, 1);
    }
    event_25_52_end: ;
}
void Frames::event_func_11973()
{
    // event 27_52
    {
        if (!(group_main_engine_1)) goto event_27_52_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmickhangingidleswitch_1257_instances));
            if (parent == NULL) goto pos_end_27_52_0;
            ((Active*)get_instance(gimmickhangingplswitch_2990_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_27_52_0: ;
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+(1-((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0))*64);
        }
    }
    event_27_52_end: ;
}
void Frames::event_func_11974()
{
    // event 28_52
    {
        if (!(group_main_engine_1)) goto event_28_52_end;
        ((Active*)get_instance(objectstonedoor1_2993_instances))->set_x_scale(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0));
        ((Active*)get_instance(objectstonedoor2_2996_instances))->set_x_scale(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0));
        ((Active*)get_instance(objectstonedoor3_2994_instances))->set_x_scale(1-((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0));
        ((Active*)get_instance(objectstonedoor4_2995_instances))->set_x_scale(1-((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0));
        {
            FrameObject * parent = ((Active*)get_instance(objectstonedoor1_2993_instances));
            if (parent == NULL) goto pos_end_28_52_0;
            ((Active*)get_instance(objectstonedoor3_2994_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_28_52_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(objectstonedoor2_2996_instances));
            if (parent == NULL) goto pos_end_28_52_1;
            ((Active*)get_instance(objectstonedoor4_2995_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_28_52_1: ;
        }
        ((Active*)get_instance(objectstonedoor1_2993_instances))->set_blend_color(make_color_int(127+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*128, 127+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*127, 191+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*64));
        ((Active*)get_instance(objectstonedoor2_2996_instances))->set_blend_color(make_color_int(127+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*128, 127+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*128, 191+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)*64));
    }
    event_28_52_end: ;
}
void Frames::event_func_11975()
{
    // event 29_52
    {
        if (!(group_main_engine_1)) goto event_29_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_off(1))) goto event_29_52_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_29_52_end;
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.toggle(1);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_DRAG2_62, 26-1, 0);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.disable(2);
    }
    event_29_52_end: ;
}
void Frames::event_func_11976()
{
    // event 30_52
    {
        if (!(group_main_engine_1)) goto event_30_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_on(1))) goto event_30_52_end;
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.set(0, get_max(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)-((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(1), 0));
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.add(1, 0.0005);
    }
    event_30_52_end: ;
}
void Frames::event_func_11977()
{
    // event 31_52
    {
        if (!(group_main_engine_1)) goto event_31_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_off(1))) goto event_31_52_end;
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.set(0, get_min(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)+((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(1), 1));
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.add(1, 0.0005);
    }
    event_31_52_end: ;
}
void Frames::event_func_11978()
{
    // event 32_52
    {
        if (!(group_main_engine_1)) goto event_32_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_on(1))) goto event_32_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)) <= (0))) goto event_32_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_off(2))) goto event_32_52_end;
        media.play_id(SOUND_COMMON_SLAM2_132, 26-1);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.enable(2);
    }
    event_32_52_end: ;
}
void Frames::event_func_11979()
{
    // event 33_52
    {
        if (!(group_main_engine_1)) goto event_33_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_off(1))) goto event_33_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)) >= (1))) goto event_33_52_end;
        if (!(((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.is_off(2))) goto event_33_52_end;
        media.play_id(SOUND_COMMON_SLAM2_132, 26-1);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.enable(2);
    }
    event_33_52_end: ;
}
void Frames::event_func_11980()
{
    // event 1463_52
    {
        if (!(group_main_engine_1)) goto event_1463_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1463_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1463_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1463_52_end;
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(0, get_max(get_min(get_floor(get_abs(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_instance(gimmickbridge12logs_353_instances))->get_x())/math_helper/16), 192), 0));
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(6)*get_max(1-(get_abs(get_floor(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_instance(gimmickbridge12logs_353_instances))->get_x()-96)/math_helper/96)), 0));
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(4, 180);
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(3, 90/math_helper/((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(5, 90/math_helper/(12-((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(0)));
    }
    event_1463_52_end: ;
}
void Frames::event_func_11981()
{
    // event 1464_52
    {
        if (!(group_main_engine_1)) goto event_1464_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1464_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1464_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1464_52_end;
        {
            loop_gimmik_bridge12_rightside_running = true;
            int times = int(get_max(12-((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(0), 0));
            loop_gimmik_bridge12_rightside_index = 0;
            while (loop_gimmik_bridge12_rightside_index < times) {
                loop_gimmik_bridge12_rightside_52();
                if (!loop_gimmik_bridge12_rightside_running) break;
                loop_gimmik_bridge12_rightside_index++;
            }
        }
    }
    event_1464_52_end: ;
}
void Frames::event_func_11982()
{
    // event 1465_52
    {
        if (!(group_main_engine_1)) goto event_1465_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1465_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1465_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1465_52_end;
        {
            loop_gimmik_bridge12_leftside_running = true;
            int times = int(((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(0));
            loop_gimmik_bridge12_leftside_index = 0;
            while (loop_gimmik_bridge12_leftside_index < times) {
                loop_gimmik_bridge12_leftside_52();
                if (!loop_gimmik_bridge12_leftside_running) break;
                loop_gimmik_bridge12_leftside_index++;
            }
        }
    }
    event_1465_52_end: ;
}
void Frames::event_func_11983()
{
    // event 1656_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1656_52_end;
        if (not_always_1656_52 > loop_count) {
            not_always_1656_52 = loop_count + 2;
            goto event_1656_52_end;
        }
        not_always_1656_52 = loop_count + 2;
        media.stop_channel(32-1);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1656_52_end: ;
}
void Frames::event_func_11984()
{
    // event 1657_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1657_52_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1657_52_end;
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
    event_1657_52_end: ;
}
void Frames::event_func_11985()
{
    // event 1658_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1658_52_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1658_52_end: ;
}
void Frames::event_func_11986()
{
    // event 1659_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1659_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1659_52_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(25);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2, ((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48));
    }
    event_1659_52_end: ;
}
void Frames::event_func_11987()
{
    // event 1660_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1660_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1660_52_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(25);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2, ((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1660_52_end: ;
}
void Frames::event_func_11988()
{
    // event 1661_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1661_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) == (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()+48))) goto event_1661_52_end;
        if (not_always_1661_52 > loop_count) {
            not_always_1661_52 = loop_count + 2;
            goto event_1661_52_end;
        }
        not_always_1661_52 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(24);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(objectstonedoor1_2993_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor3_2994_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor4_2995_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
        ((Active*)get_instance(objectstonedoor2_2996_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1+1-1);
    }
    event_1661_52_end: ;
}
void Frames::event_func_11989()
{
    // event 1662_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1662_52_end;
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.add(2, 1);
    }
    event_1662_52_end: ;
}
void Frames::event_func_11990()
{
    // event 1663_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1663_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(2)) == (120))) goto event_1663_52_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.add(2, 1);
    }
    event_1663_52_end: ;
}
void Frames::event_func_11991()
{
    // event 1664_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1664_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(2)) > (120))) goto event_1664_52_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1664_52_end: ;
}
void Frames::event_func_11992()
{
    // event 1665_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1665_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(2)) > (120))) goto event_1665_52_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1665_52_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1665_52_end: ;
}
void Frames::event_func_11993()
{
    // event 1673_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_big_door_1)) goto event_1673_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1673_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1673_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1673_52_end;
        if (not_always_1673_52 > loop_count) {
            not_always_1673_52 = loop_count + 2;
            goto event_1673_52_end;
        }
        not_always_1673_52 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_6000_122);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1673_52_end: ;
}
void Frames::event_func_11994()
{
    // event 1674_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_big_door_1)) goto event_1674_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+40))) goto event_1674_52_end;
        if (not_always_1674_52 > loop_count) {
            not_always_1674_52 = loop_count + 2;
            goto event_1674_52_end;
        }
        not_always_1674_52 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1674_52_end: ;
}
void Frames::event_func_11995()
{
    // event 1675_52
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_big_door_1)) goto event_1675_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()))) goto event_1675_52_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(objectstonedoor2_2996_instances))->get_x()))) goto event_1675_52_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)) < (0.4))) goto event_1675_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1675_52_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1675_52_end;
            group_main_engine_level_specific_methods_big_door_1 = false;
    
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
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
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.disable(1);
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1675_52_end: ;
}
void Frames::event_func_11996()
{
    // event 1884_52
    {
        if (!(group_pause_1)) goto event_1884_52_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1884_52_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1884_52_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1884_52_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1884_52_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_1884_52_end: ;
}
void Frames::handle_frame_53_events()
{
    test_collisions_52();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_11864();
    event_func_11954();
    event_func_11955();
    event_func_11956();
    event_func_11957();
    event_func_11958();
    event_func_11959();
    event_func_11960();
    event_func_11961();
    event_func_11962();
    event_func_11963();
    event_func_11964();
    event_func_11965();
    event_func_11966();
    event_func_11967();
    event_func_11968();
    event_func_11969();
    event_func_11970();
    event_func_11971();
    event_func_11972();
    event_func_11973();
    event_func_11974();
    event_func_11975();
    event_func_11976();
    event_func_11977();
    event_func_11978();
    event_func_11979();
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_1406();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_5410();
    event_func_5411();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_11756();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_11757();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_1866();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_11758();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_11759();
    event_func_11760();
    event_func_11761();
    event_func_11762();
    event_func_11763();
    event_func_11764();
    event_func_11765();
    event_func_11766();
    event_func_11767();
    event_func_11768();
    event_func_11769();
    event_func_2981();
    event_func_11980();
    event_func_11981();
    event_func_11982();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_11770();
    event_func_11771();
    event_func_11772();
    event_func_11773();
    event_func_11774();
    event_func_11775();
    event_func_11776();
    event_func_11777();
    event_func_11778();
    event_func_11779();
    event_func_11780();
    event_func_11781();
    event_func_11884();
    event_func_11885();
    event_func_11886();
    event_func_11887();
    event_func_11888();
    event_func_11889();
    event_func_11890();
    event_func_11891();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_11782();
    event_func_11783();
    event_func_11784();
    event_func_11785();
    event_func_11786();
    event_func_11787();
    event_func_11788();
    event_func_11789();
    event_func_11790();
    event_func_11791();
    event_func_11792();
    event_func_11793();
    event_func_11794();
    event_func_11795();
    event_func_11796();
    event_func_11797();
    event_func_11798();
    event_func_11799();
    event_func_11800();
    event_func_11801();
    event_func_11802();
    event_func_11803();
    event_func_11804();
    event_func_11805();
    event_func_11806();
    event_func_11807();
    event_func_11808();
    event_func_11809();
    event_func_11810();
    event_func_11811();
    event_func_11812();
    event_func_11813();
    event_func_11814();
    event_func_11815();
    event_func_11816();
    event_func_11817();
    event_func_11818();
    event_func_11819();
    event_func_11820();
    event_func_11821();
    event_func_11822();
    event_func_11823();
    event_func_11824();
    event_func_11825();
    event_func_11826();
    event_func_11827();
    event_func_11828();
    event_func_11829();
    event_func_11830();
    event_func_11831();
    event_func_11832();
    event_func_11833();
    event_func_11834();
    event_func_11835();
    event_func_4594();
    event_func_4595();
    event_func_4596();
    event_func_4597();
    event_func_4598();
    event_func_4599();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    event_func_4603();
    event_func_4604();
    event_func_4605();
    event_func_4606();
    event_func_4607();
    event_func_4608();
    event_func_4609();
    event_func_4610();
    event_func_4611();
    event_func_4612();
    event_func_4613();
    event_func_4614();
    event_func_4615();
    event_func_4616();
    event_func_4617();
    event_func_4618();
    event_func_4619();
    event_func_4620();
    event_func_4621();
    event_func_4622();
    event_func_11892();
    event_func_11893();
    event_func_11894();
    event_func_11895();
    event_func_11896();
    event_func_11897();
    event_func_11898();
    event_func_11899();
    event_func_11900();
    event_func_11901();
    event_func_11902();
    event_func_11903();
    event_func_11904();
    event_func_11905();
    event_func_11906();
    event_func_11907();
    event_func_11908();
    event_func_11909();
    event_func_11910();
    event_func_11911();
    event_func_11912();
    event_func_11913();
    event_func_11914();
    event_func_11915();
    event_func_11916();
    event_func_11917();
    event_func_11918();
    event_func_11919();
    event_func_11920();
    event_func_11921();
    event_func_11922();
    event_func_11923();
    event_func_11924();
    event_func_11925();
    event_func_11926();
    event_func_11927();
    event_func_11928();
    event_func_11929();
    event_func_11930();
    event_func_11931();
    event_func_11932();
    event_func_11933();
    event_func_11934();
    event_func_11935();
    event_func_11936();
    event_func_11937();
    event_func_11938();
    event_func_11939();
    event_func_11940();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_11983();
    event_func_11984();
    event_func_11985();
    event_func_11986();
    event_func_11987();
    event_func_11988();
    event_func_11989();
    event_func_11990();
    event_func_11991();
    event_func_11992();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_big_door_1) goto group_main_engine_level_specific_methods_big_door_1_end;
    event_func_11993();
    event_func_11994();
    event_func_11995();
    group_main_engine_level_specific_methods_big_door_1_end: ;
    event_func_11837();
    event_func_11838();
    event_func_11839();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_me_music_engine_1) goto group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end;
    event_func_11346();
    event_func_11347();
    event_func_11348();
    event_func_11349();
    event_func_11350();
    event_func_11351();
    event_func_11352();
    event_func_11353();
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end: ;
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_11996();
    event_func_11943();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_53_pre_events()
{
}
void Frames::event_func_11997()
{
    // event 2_52
    {
        if (!(group_main_engine_1)) goto event_2_52_end;
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(4, ((Active*)get_instance(gimmickbowarrow_2979_instances))->get_x());
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(5, ((Active*)get_instance(gimmickbowarrow_2979_instances))->get_y());
        gimmickbowstring_2974_instances.clear_selection();
        spread_value(gimmickbowstring_2974_instances, 0, 0);
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%10);
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickbowarrow_2979_instances))->get_x());
        ((Active*)get_instance(gimmickbowarrow_2979_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickbowarrow_2979_instances))->get_y());
        spread_value(gimmickbowstring_2974_instances, 1, 0);
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_floor(((Active*)*it)->alterables->values.get(1)/math_helper/10));
        }
        gimmickbowarrow_2979_instances.clear_selection();
        spread_value(gimmickbowarrow_2979_instances, 12, 0);
    }
    event_2_52_end: ;
}
void Frames::event_func_11998()
{
    // event 26_52
    {
        if (!(group_main_engine_1)) goto event_26_52_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.enable(2);
    }
    event_26_52_end: ;
}
void Frames::event_func_11999()
{
    // event 35_52
    {
        if (!(group_main_engine_1)) goto event_35_52_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 86);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 34);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_35_52_end: ;
}
void Frames::event_func_12000()
{
    // event 1460_52
    {
        if (!(group_main_engine_1)) goto event_1460_52_end;
        gimmickbridgelog_412_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(gimmickbridge12logs_353_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 176, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 160, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 144, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 128, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 112, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 96, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 80, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 64, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 48, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 32, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 16, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 0, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
        }
    }
    event_1460_52_end: ;
}
void Frames::on_frame_53_start_events()
{
    event_func_11842();
    event_func_11997();
    event_func_11998();
    event_func_4133();
    event_func_11999();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_11946();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_3271();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_11845();
    event_func_12000();
    event_func_3275();
    event_func_11846();
    event_func_11847();
    event_func_11848();
    event_func_11849();
    event_func_11850();
    event_func_11947();
    event_func_2686();
    event_func_2687();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_11948();
    event_func_4145();
    event_func_5573();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_53_init()
{
    index = 52;
    width = 8000;
    height = 1864;
    virtual_width = 8000;
    virtual_height = 1864;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &levellagoonplatform1_2967_instances, &gimmickbowarrowplatform_2970_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &levellagoonplatform1_2967_instances, &gimmickbowarrowplatform_2970_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemycacteon_990_instances, &enemystinger_2891_instances, &enemysunflora_2960_instances, &enemystingernest_2961_instances, &enemyterreonleftleg_2983_instances, &enemyterreonrightleg_2984_instances, &enemyterreon_2985_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece3_468_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(6, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &pllayer11_2957_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, &pllayer12_2964_instances, &breakableplrock_2987_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemycacteon_990_instances, &objecttimegatepiece_2966_instances, NULL};
    qualifier_4.set(36, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingidleswitch_1257_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer11_2957_instances, &pllayer12_2964_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levellagoonplatform1_2967_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_12.set(4, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levellagoonplatform1_2967_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2884(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2885(0, 120), 0);
    add_background_object(create_levelparallaxpiece2_2886(0, 40), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 144), 0);
    add_background_object(create_levelparallaxpiece5_2887(0, 136), 0);
    add_background_object(create_levelparallaxpiece6_2888(0, 136), 0);
    add_background_object(create_plbackwall7_2892(112, 1280), 1);
    add_background_object(create_plbackwall7_2892(176, 1120), 1);
    add_background_object(create_plbackwall7_2892(48, 1440), 1);
    add_background_object(create_plbackwall7_2892(240, 960), 1);
    add_background_object(create_plbackwall7_2892(304, 800), 1);
    add_background_object(create_plbackwall7_2892(368, 640), 1);
    add_background_object(create_plbackwall7_2892(432, 480), 1);
    add_background_object(create_plbackwall7_2892(496, 320), 1);
    add_background_object(create_plbackwall7_2892(560, 160), 1);
    add_background_object(create_plbackwall9_2893(560, 0), 1);
    add_background_object(create_plbackwall7_2892(392, 1280), 1);
    add_background_object(create_plbackwall7_2892(456, 1120), 1);
    add_background_object(create_plbackwall7_2892(328, 1440), 1);
    add_background_object(create_plbackwall7_2892(520, 960), 1);
    add_background_object(create_plbackwall7_2892(584, 800), 1);
    add_background_object(create_plbackwall7_2892(648, 640), 1);
    add_background_object(create_plbackwall7_2892(712, 480), 1);
    add_background_object(create_plbackwall7_2892(776, 320), 1);
    add_background_object(create_plbackwall7_2892(840, 160), 1);
    add_background_object(create_plbackwall9_2893(840, 0), 1);
    add_background_object(create_plbackwall7_2892(672, 1280), 1);
    add_background_object(create_plbackwall7_2892(736, 1120), 1);
    add_background_object(create_plbackwall7_2892(608, 1440), 1);
    add_background_object(create_plbackwall7_2892(800, 960), 1);
    add_background_object(create_plbackwall7_2892(864, 800), 1);
    add_background_object(create_plbackwall7_2892(928, 640), 1);
    add_background_object(create_plbackwall7_2892(992, 480), 1);
    add_background_object(create_plbackwall7_2892(1056, 320), 1);
    add_background_object(create_plbackwall7_2892(1120, 160), 1);
    add_background_object(create_plbackwall9_2893(1120, 0), 1);
    add_background_object(create_plbackwall7_2892(944, 1280), 1);
    add_background_object(create_plbackwall7_2892(1008, 1120), 1);
    add_background_object(create_plbackwall7_2892(880, 1440), 1);
    add_background_object(create_plbackwall7_2892(1072, 960), 1);
    add_background_object(create_plbackwall7_2892(1136, 800), 1);
    add_background_object(create_plbackwall7_2892(1200, 640), 1);
    add_background_object(create_plbackwall7_2892(1264, 480), 1);
    add_background_object(create_plbackwall7_2892(1328, 320), 1);
    add_background_object(create_plbackwall7_2892(1392, 160), 1);
    add_background_object(create_plbackwall9_2893(1368, 1440), 1);
    add_background_object(create_plbackwall9_2893(1304, 1280), 1);
    add_background_object(create_plbackwall7_2892(1304, 1120), 1);
    add_background_object(create_plbackwall9_2893(1304, 960), 1);
    add_background_object(create_plbackwall7_2892(1304, 800), 1);
    add_background_object(create_plbackwall7_2892(1368, 640), 1);
    add_background_object(create_plbackwall7_2892(1432, 480), 1);
    add_background_object(create_plbackwall9_2893(1432, 320), 1);
    add_background_object(create_plbackwall9_2893(1368, 160), 1);
    add_background_object(create_plbackwall7_2892(1456, 0), 1);
    add_background_object(create_plbackwall7_2892(1368, 0), 1);
    add_background_object(create_plbackwall9_2893(1720, 1440), 1);
    add_background_object(create_plbackwall9_2893(1656, 1280), 1);
    add_background_object(create_plbackwall7_2892(1656, 1120), 1);
    add_background_object(create_plbackwall9_2893(1656, 960), 1);
    add_background_object(create_plbackwall7_2892(1656, 800), 1);
    add_background_object(create_plbackwall7_2892(1720, 640), 1);
    add_background_object(create_plbackwall7_2892(1784, 480), 1);
    add_background_object(create_plbackwall9_2893(1784, 320), 1);
    add_background_object(create_plbackwall9_2893(1720, 160), 1);
    add_background_object(create_plbackwall7_2892(1720, 0), 1);
    add_background_object(create_plbackwall7_2892(1912, 1440), 1);
    add_background_object(create_plbackwall7_2892(1976, 1280), 1);
    add_background_object(create_plbackwall7_2892(2040, 1120), 1);
    add_background_object(create_plbackwall9_2893(2040, 960), 1);
    add_background_object(create_plbackwall7_2892(2040, 800), 1);
    add_background_object(create_plbackwall9_2893(2040, 640), 1);
    add_background_object(create_plbackwall7_2892(2040, 480), 1);
    add_background_object(create_plbackwall7_2892(2104, 320), 1);
    add_background_object(create_plbackwall9_2893(2104, 160), 1);
    add_background_object(create_plbackwall9_2893(2040, 0), 1);
    add_background_object(create_plbackwall9_2893(2456, 1440), 1);
    add_background_object(create_plbackwall7_2892(2456, 640), 1);
    add_background_object(create_plbackwall7_2892(2520, 480), 1);
    add_background_object(create_plbackwall9_2893(2520, 320), 1);
    add_background_object(create_plbackwall9_2893(2456, 160), 1);
    add_background_object(create_plbackwall7_2892(2456, 0), 1);
    add_background_object(create_plbackwall9_2893(2808, 1440), 1);
    add_background_object(create_plbackwall9_2893(2744, 1280), 1);
    add_background_object(create_plbackwall7_2892(2744, 1120), 1);
    add_background_object(create_plbackwall9_2893(2744, 960), 1);
    add_background_object(create_plbackwall7_2892(2744, 800), 1);
    add_background_object(create_plbackwall7_2892(2808, 640), 1);
    add_background_object(create_plbackwall7_2892(2872, 480), 1);
    add_background_object(create_plbackwall9_2893(2872, 320), 1);
    add_background_object(create_plbackwall9_2893(2808, 160), 1);
    add_background_object(create_plbackwall7_2892(2808, 0), 1);
    add_background_object(create_plbackwall7_2892(3064, 1280), 1);
    add_background_object(create_plbackwall7_2892(3128, 1120), 1);
    add_background_object(create_plbackwall9_2893(3128, 960), 1);
    add_background_object(create_plbackwall7_2892(3128, 800), 1);
    add_background_object(create_plbackwall9_2893(3128, 640), 1);
    add_background_object(create_plbackwall7_2892(3128, 480), 1);
    add_background_object(create_plbackwall7_2892(3192, 320), 1);
    add_background_object(create_plbackwall9_2893(3192, 160), 1);
    add_background_object(create_plbackwall9_2893(3128, 0), 1);
    add_background_object(create_plbackwall9_2893(2392, 1280), 1);
    add_background_object(create_plbackwall7_2892(2392, 1120), 1);
    add_background_object(create_plbackwall9_2893(2392, 960), 1);
    add_background_object(create_plbackwall7_2892(2392, 800), 1);
    add_background_object(create_plbackwall9_2893(3064, 1440), 1);
    add_background_object(create_plbackwall9_2893(3488, 1440), 1);
    add_background_object(create_plbackwall7_2892(3488, 640), 1);
    add_background_object(create_plbackwall7_2892(3552, 480), 1);
    add_background_object(create_plbackwall9_2893(3552, 320), 1);
    add_background_object(create_plbackwall9_2893(3488, 160), 1);
    add_background_object(create_plbackwall7_2892(3488, 0), 1);
    add_background_object(create_plbackwall9_2893(3840, 1440), 1);
    add_background_object(create_plbackwall9_2893(3776, 1280), 1);
    add_background_object(create_plbackwall7_2892(3776, 1120), 1);
    add_background_object(create_plbackwall9_2893(3776, 960), 1);
    add_background_object(create_plbackwall7_2892(3776, 800), 1);
    add_background_object(create_plbackwall7_2892(3840, 640), 1);
    add_background_object(create_plbackwall7_2892(3904, 480), 1);
    add_background_object(create_plbackwall9_2893(3904, 320), 1);
    add_background_object(create_plbackwall9_2893(3840, 160), 1);
    add_background_object(create_plbackwall7_2892(3840, 0), 1);
    add_background_object(create_plbackwall7_2892(4096, 1280), 1);
    add_background_object(create_plbackwall7_2892(4160, 1120), 1);
    add_background_object(create_plbackwall9_2893(4160, 960), 1);
    add_background_object(create_plbackwall7_2892(4160, 800), 1);
    add_background_object(create_plbackwall9_2893(4160, 640), 1);
    add_background_object(create_plbackwall7_2892(4160, 480), 1);
    add_background_object(create_plbackwall7_2892(4224, 320), 1);
    add_background_object(create_plbackwall9_2893(4224, 160), 1);
    add_background_object(create_plbackwall9_2893(4160, 0), 1);
    add_background_object(create_plbackwall9_2893(3424, 1280), 1);
    add_background_object(create_plbackwall7_2892(3424, 1120), 1);
    add_background_object(create_plbackwall9_2893(3424, 960), 1);
    add_background_object(create_plbackwall7_2892(3424, 800), 1);
    add_background_object(create_plbackwall9_2893(4096, 1440), 1);
    add_background_object(create_plruins5_2898(3816, 536), 1);
    add_background_object(create_plruins5_2898(3816, 408), 1);
    add_background_object(create_plruins5_2898(3816, 280), 1);
    add_background_object(create_plruins5_2898(3632, 544), 1);
    add_background_object(create_plruins5_2898(3632, 416), 1);
    add_background_object(create_plruins5_2898(3632, 672), 1);
    add_background_object(create_plruins5_2898(3432, 632), 1);
    add_background_object(create_plruins5_2898(3432, 504), 1);
    add_background_object(create_plruins5_2898(3432, 760), 1);
    add_background_object(create_plruins5_2898(4032, 424), 1);
    add_background_object(create_plruins5_2898(4032, 296), 1);
    add_background_object(create_plruins5_2898(4032, 168), 1);
    add_background_object(create_plruins5_2898(4248, 384), 1);
    add_background_object(create_plruins5_2898(4248, 256), 1);
    add_background_object(create_plruins5_2898(4248, 128), 1);
    add_background_object(create_plruins6_2910(4032, 104), 1);
    add_background_object(create_plruins6_2910(3816, 216), 1);
    add_background_object(create_plruins6_2910(4248, 64), 1);
    add_background_object(create_plruins6_2910(3632, 352), 1);
    add_background_object(create_plruins6_2910(3432, 440), 1);
    add_background_object(create_quickbackdrop_2988(4344, 0), 1);
    add_background_object(create_plruins5_2898(6200, 88), 2);
    add_background_object(create_plbackwall6_2897(2016, 840), 2);
    add_background_object(create_plbackwall5_2896(2248, 640), 2);
    add_background_object(create_plbackwall5_2896(2376, 768), 2);
    add_background_object(create_plbackwall1_2895(2120, 768), 2);
    add_background_object(create_plbackwall1_2895(2120, 896), 2);
    add_background_object(create_plbackwall1_2895(2120, 1024), 2);
    add_background_object(create_plbackwall6_2897(1736, 1024), 2);
    add_background_object(create_plbackwall1_2895(1592, 1008), 2);
    add_background_object(create_plbackwall1_2895(2656, 744), 2);
    add_background_object(create_plbackwall1_2895(2656, 360), 2);
    add_background_object(create_plbackwall1_2895(2656, 616), 2);
    add_background_object(create_plbackwall1_2895(2656, 488), 2);
    add_background_object(create_plbackwall6_2897(2528, 360), 2);
    add_background_object(create_plbackwall6_2897(2528, 744), 2);
    add_background_object(create_plbackwall2_2903(2400, 360), 2);
    add_background_object(create_plbackwall2_2903(2528, 488), 2);
    add_background_object(create_plbackwall3_2905(2528, 616), 2);
    add_background_object(create_plbackwall3_2905(2400, 744), 2);
    add_background_object(create_plruins5_2898(1008, 920), 2);
    add_background_object(create_plstonewall6_2912(1640, 1032), 2);
    add_background_object(create_plstonewall6_2912(1720, 1000), 2);
    add_background_object(create_plstonewall6_2912(1744, 1040), 2);
    add_background_object(create_plruins5_2898(1008, 600), 2);
    add_background_object(create_plruins5_2898(296, 600), 2);
    add_background_object(create_plruins5_2898(296, 472), 2);
    add_background_object(create_plruins6_2910(296, 408), 2);
    add_background_object(create_plruins5_2898(2648, 744), 2);
    add_background_object(create_plruins5_2898(2472, 488), 2);
    add_background_object(create_plruins5_2898(2472, 616), 2);
    add_background_object(create_plruins5_2898(2472, 744), 2);
    add_background_object(create_plruins5_2898(2216, 488), 2);
    add_background_object(create_plruins5_2898(2216, 616), 2);
    add_background_object(create_plruins5_2898(2216, 744), 2);
    add_background_object(create_plruins5_2898(2216, 872), 2);
    add_background_object(create_plruins5_2898(2216, 1000), 2);
    add_background_object(create_plbackwall2_2903(1336, 880), 2);
    add_background_object(create_plbackwall2_2903(1464, 1008), 2);
    add_background_object(create_plbackwall5_2896(1592, 880), 2);
    add_background_object(create_plbackwall6_2897(1464, 880), 2);
    add_background_object(create_plbackwall1_2895(1864, 1024), 2);
    add_background_object(create_plbackwall3_2905(1736, 896), 2);
    add_background_object(create_plbackwall1_2895(1864, 896), 2);
    add_background_object(create_plgrass_2904(8, 672), 2);
    add_background_object(create_plgrass_2904(120, 688), 2);
    add_background_object(create_plgrass_2904(360, 704), 2);
    add_background_object(create_plgrass_2904(664, 848), 2);
    add_background_object(create_plgrass_2904(584, 824), 2);
    add_background_object(create_plgrass_2904(960, 1008), 2);
    add_background_object(create_plgrass_2904(848, 984), 2);
    add_background_object(create_plgrass_2904(1088, 1016), 2);
    add_background_object(create_plgrass_2904(1344, 1144), 2);
    add_background_object(create_plgrass_2904(1248, 1136), 2);
    add_background_object(create_plgrass_2904(1448, 1128), 2);
    add_background_object(create_plgrass_2904(1280, 784), 2);
    add_background_object(create_plgrass_2904(1400, 792), 2);
    add_background_object(create_plgrass_2904(1672, 936), 2);
    add_background_object(create_plgrass_2904(1904, 848), 2);
    add_background_object(create_plgrass_2904(2128, 704), 2);
    add_background_object(create_plgrass_2904(1888, 1088), 2);
    add_background_object(create_plgrass_2904(2040, 1088), 2);
    add_background_object(create_plgrass_2904(2184, 1096), 2);
    add_background_object(create_plgrass_2904(2424, 832), 2);
    add_background_object(create_plgrass_2904(2688, 840), 2);
    add_background_object(create_plgrass_2904(2568, 712), 2);
    add_background_object(create_plgrass_2904(2424, 432), 2);
    add_background_object(create_plgrass_2904(2312, 424), 2);
    add_background_object(create_plgrass_2904(2216, 432), 2);
    add_background_object(create_plruins5_2898(2024, 448), 2);
    add_background_object(create_plruins5_2898(2024, 576), 2);
    add_background_object(create_plruins5_2898(2024, 704), 2);
    add_background_object(create_plruins5_2898(2256, 112), 2);
    add_background_object(create_plruins5_2898(2256, -16), 2);
    add_background_object(create_plbackwall1_2895(2912, 616), 2);
    add_background_object(create_plbackwall1_2895(2912, 488), 2);
    add_background_object(create_plbackwall5_2896(3168, 616), 2);
    add_background_object(create_plbackwall4_2894(3168, 488), 2);
    add_background_object(create_plbackwall3_2905(3264, 592), 2);
    add_background_object(create_plbackwall6_2897(3264, 720), 2);
    add_background_object(create_plbackwall3_2905(3392, 464), 2);
    add_background_object(create_plbackwall5_2896(3520, 464), 2);
    add_background_object(create_plbackwall1_2895(3392, 592), 2);
    add_background_object(create_plbackwall5_2896(3648, 592), 2);
    add_background_object(create_plgrass_2904(2384, 184), 2);
    add_background_object(create_plgrass_2904(2488, 136), 2);
    add_background_object(create_plgrass_2904(2776, 192), 2);
    add_background_object(create_plgrass_2904(3000, 336), 2);
    add_background_object(create_plgrass_2904(3112, 352), 2);
    add_background_object(create_plgrass_2904(3392, 368), 2);
    add_background_object(create_plruins2_2907(2904, 200), 2);
    add_background_object(create_plruins3_2902(3264, 248), 2);
    add_background_object(create_plbackwall5_2896(3776, 720), 2);
    add_background_object(create_plbackwall1_2895(3520, 720), 2);
    add_background_object(create_plruins5_2898(3880, 504), 2);
    add_background_object(create_plruins5_2898(4040, 504), 2);
    add_background_object(create_plruins5_2898(3880, 632), 2);
    add_background_object(create_plruins5_2898(4040, 632), 2);
    add_background_object(create_plruins5_2898(4240, 632), 2);
    add_background_object(create_plruins5_2898(4240, 504), 2);
    add_background_object(create_plruins5_2898(4240, 344), 2);
    add_background_object(create_plruins5_2898(4984, 88), 2);
    add_background_object(create_plruins5_2898(5240, 56), 2);
    add_background_object(create_plruins5_2898(5496, 56), 2);
    add_background_object(create_plruins5_2898(5752, 88), 2);
    add_background_object(create_plmask_2973(5000, 120), 2);
    add_background_object(create_plmask_2973(5256, 88), 2);
    add_background_object(create_plmask_2973(5512, 88), 2);
    add_background_object(create_plmask_2973(5768, 120), 2);
    add_background_object(create_plruinsentrace_2989(5952, 88), 2);
    add_background_object(create_plsignup_2916(4344, 640), 2);
    add_background_object(create_plsignup3_2901(4352, 672), 2);
    add_background_object(create_plsignup3_2901(4352, 704), 2);
    add_background_object(create_plgrass_2904(4528, 600), 2);
    add_background_object(create_plgrass_2904(4696, 480), 2);
    add_background_object(create_plsignup_2916(4816, 440), 2);
    add_background_object(create_plsignup3_2901(4824, 472), 2);
    add_background_object(create_plruins5_2898(4664, 8), 2);
    add_background_object(create_plruins5_2898(4664, 136), 2);
    add_background_object(create_plruins5_2898(4664, 264), 2);
    add_background_object(create_plruins5_2898(4664, 392), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(8000, -35), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_gimmickbowstring_2974(326, 502), 2);
    add_object(create_gimmickbowstring_2974(326, 518), 2);
    add_object(create_gimmickbowstring_2974(326, 534), 2);
    add_object(create_gimmickbowstring_2974(326, 550), 2);
    add_object(create_gimmickbowstring_2974(326, 566), 2);
    add_object(create_gimmickbowstring_2974(326, 582), 2);
    add_object(create_gimmickbowstring_2974(326, 598), 2);
    add_object(create_gimmickbowstring_2974(326, 614), 2);
    add_object(create_gimmickbowstring_2974(326, 630), 2);
    add_object(create_gimmickbowstring_2974(326, 646), 2);
    add_object(create_gimmickhangingplswitch_2990(6024, 48), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plvine1_2938(4356, 0), 3);
    add_background_object(create_plbrickwall4_2953(5904, 8), 3);
    add_background_object(create_plbrickwall5_2921(5936, 8), 3);
    add_background_object(create_plbrickwall6_2954(5968, 8), 3);
    add_background_object(create_plstonewall21_2952(4424, 728), 3);
    add_background_object(create_plbrickwall5_2921(4088, 448), 3);
    add_background_object(create_plbrickwall5_2921(4088, 480), 3);
    add_background_object(create_plbrickwall6_2954(4120, 480), 3);
    add_background_object(create_plbrickwall6_2954(4120, 448), 3);
    add_background_object(create_plbrickwall4_2953(3864, 480), 3);
    add_background_object(create_plbrickwall5_2921(3896, 480), 3);
    add_background_object(create_plbrickwall5_2921(3960, 480), 3);
    add_background_object(create_plbrickwall5_2921(4024, 480), 3);
    add_background_object(create_plbrickwall5_2921(3656, 760), 3);
    add_background_object(create_plvine2_2941(3184, 552), 3);
    add_background_object(create_plvine1_2938(3184, 480), 3);
    add_background_object(create_plstonewall3_2926(3264, 728), 3);
    add_background_object(create_plstonewall16_2933(3208, 736), 3);
    add_background_object(create_plstonewall16_2933(3144, 736), 3);
    add_background_object(create_plbrickwall1_2918(2720, 192), 3);
    add_background_object(create_plbrickwall6_2954(2816, 192), 3);
    add_background_object(create_plbrickwall6_2954(2816, 224), 3);
    add_background_object(create_plbrickwall1_2918(2592, 192), 3);
    add_background_object(create_plbrickwall1_2918(2464, 160), 3);
    add_background_object(create_plbrickwall3_2923(2464, 160), 3);
    add_background_object(create_plstonewall1_2913(3144, 768), 3);
    add_background_object(create_plstonewall21_2952(2888, 392), 3);
    add_background_object(create_plbrickwall6_2954(2280, 64), 3);
    add_background_object(create_plbrickwall1_2918(2152, -32), 3);
    add_background_object(create_plbrickwall1_2918(2024, -32), 3);
    add_background_object(create_plplant3_2922(2224, 392), 3);
    add_background_object(create_plpinwheelstalk_2920(1448, 1136), 3);
    add_background_object(create_plpinwheelstalk_2920(1448, 1088), 3);
    add_background_object(create_plpinwheelstalk_2920(1392, 1136), 3);
    add_background_object(create_plpinwheelstalk_2920(552, 712), 3);
    add_background_object(create_plpinwheelstalk_2920(624, 768), 3);
    add_background_object(create_plpinwheelstalk_2920(760, 848), 3);
    add_background_object(create_plpinwheelstalk_2920(760, 800), 3);
    add_background_object(create_plpinwheelstalk_2920(832, 872), 3);
    add_background_object(create_plpinwheelstalk_2920(944, 976), 3);
    add_background_object(create_plstonewall1_2913(896, 1168), 3);
    add_background_object(create_plstonewall1_2913(1152, 1200), 3);
    add_background_object(create_plstonewall10_2940(1280, 1120), 3);
    add_background_object(create_plstonewall15_2942(1152, 1040), 3);
    add_background_object(create_plstonewall21_2952(1024, 1040), 3);
    add_background_object(create_plstonewall1_2913(768, 1056), 3);
    add_background_object(create_plstonewall1_2913(512, 904), 3);
    add_background_object(create_plstonewall10_2940(896, 976), 3);
    add_background_object(create_plstonewall15_2942(768, 896), 3);
    add_background_object(create_plstonewall10_2940(640, 824), 3);
    add_background_object(create_plstonewall15_2942(512, 744), 3);
    add_background_object(create_plstonewall1_2913(3016, 392), 3);
    add_background_object(create_plstonewall10_2940(2976, 312), 3);
    add_background_object(create_plstonewall15_2942(2856, 248), 3);
    add_background_object(create_plstonewall21_2952(2888, 360), 3);
    add_background_object(create_plstonewall11_2924(2760, 792), 3);
    add_background_object(create_plstonewall1_2913(1408, 1200), 3);
    add_background_object(create_plstonewall1_2913(1920, 1256), 3);
    add_background_object(create_plstonewall1_2913(1664, 1256), 3);
    add_background_object(create_plstonewall1_2913(2176, 1256), 3);
    add_background_object(create_plstonewall11_2924(2248, 1048), 3);
    add_background_object(create_plbow_2975(320, 480), 3);
    add_background_object(create_plplant3_2922(-632, 1472), 3);
    add_background_object(create_dvceilingoverlay_915(-528, 936), 3);
    add_background_object(create_plbackwall1_2895(-528, 952), 3);
    add_background_object(create_plbackwall2_2903(-528, 960), 3);
    add_background_object(create_plbackwall3_2905(-408, 960), 3);
    add_background_object(create_plbackwall4_2894(-472, 968), 3);
    add_background_object(create_plbackwall5_2896(-464, 968), 3);
    add_background_object(create_plbackwall6_2897(-472, 968), 3);
    add_background_object(create_plbackwall7_2892(-544, 960), 3);
    add_background_object(create_plbackwall9_2893(-552, 960), 3);
    add_background_object(create_plbrickwall1_2918(-512, 976), 3);
    add_background_object(create_plbrickwall2_2919(-376, 976), 3);
    add_background_object(create_plbrickwall3_2923(-344, 968), 3);
    add_background_object(create_plgrass_2904(-472, 1032), 3);
    add_background_object(create_plground10_2948(-448, 984), 3);
    add_background_object(create_plground11_2950(-480, 976), 3);
    add_background_object(create_plground12_2949(-472, 984), 3);
    add_background_object(create_plground13_2936(-464, 1008), 3);
    add_background_object(create_plground2_2944(-464, 1024), 3);
    add_background_object(create_plground3_2939(-464, 1016), 3);
    add_background_object(create_plground4_2931(-456, 1000), 3);
    add_background_object(create_plground5_2945(-448, 1016), 3);
    add_background_object(create_plground6_2946(-408, 992), 3);
    add_background_object(create_plground7_2951(-496, 976), 3);
    add_background_object(create_plground8_2925(-440, 976), 3);
    add_background_object(create_plground9_2935(-448, 992), 3);
    add_background_object(create_plground1_2943(-456, 1016), 3);
    add_background_object(create_plplant1_2899(-432, 1024), 3);
    add_background_object(create_plplant2_2900(-400, 1008), 3);
    add_background_object(create_plplant3_2922(-464, 1008), 3);
    add_background_object(create_plruins1_2908(-456, 960), 3);
    add_background_object(create_plruins2_2907(-472, 952), 3);
    add_background_object(create_plruins3_2902(-440, 960), 3);
    add_background_object(create_plruins4_2906(-448, 960), 3);
    add_background_object(create_plruins5_2898(-480, 976), 3);
    add_background_object(create_plruins6_2910(-456, 1008), 3);
    add_background_object(create_plruins8_2911(-408, 1016), 3);
    add_background_object(create_plsignup_2916(-416, 1032), 3);
    add_background_object(create_plstonewall1_2913(-528, 1136), 3);
    add_background_object(create_plstonewall10_2940(-504, 1144), 3);
    add_background_object(create_plstonewall11_2924(-424, 1152), 3);
    add_background_object(create_plstonewall12_2914(-440, 1192), 3);
    add_background_object(create_plstonewall13_2915(-480, 1168), 3);
    add_background_object(create_plstonewall14_2934(-472, 1136), 3);
    add_background_object(create_plstonewall15_2942(-472, 1136), 3);
    add_background_object(create_plstonewall16_2933(-432, 1184), 3);
    add_background_object(create_plstonewall17_2969(-464, 1136), 3);
    add_background_object(create_plstonewall18_2968(-464, 1144), 3);
    add_background_object(create_plstonewall19_2955(-464, 1136), 3);
    add_background_object(create_plstonewall20_2930(-456, 1152), 3);
    add_background_object(create_plstonewall21_2952(-472, 1136), 3);
    add_background_object(create_plstonewall3_2926(-440, 1136), 3);
    add_background_object(create_plstonewall4_2937(-392, 1136), 3);
    add_background_object(create_plstonewall5_2932(-408, 1168), 3);
    add_background_object(create_plstonewall6_2912(-456, 1136), 3);
    add_background_object(create_plstonewall7_2947(-456, 1136), 3);
    add_background_object(create_plstonewall8_2927(-456, 1136), 3);
    add_background_object(create_plstonewall9_2928(-464, 1136), 3);
    add_background_object(create_plvine1_2938(-464, 1176), 3);
    add_background_object(create_plvine2_2941(-440, 1168), 3);
    add_background_object(create_plbrickwall6_2954(-304, 1264), 3);
    add_background_object(create_plbrickwall5_2921(-368, 1264), 3);
    add_background_object(create_plbrickwall4_2953(-400, 1264), 3);
    add_background_object(create_plground10_2948(-488, 1592), 3);
    add_background_object(create_plground11_2950(-360, 1592), 3);
    add_background_object(create_plground9_2935(-360, 1696), 3);
    add_background_object(create_plground12_2949(-488, 1696), 3);
    add_background_object(create_plpinwheelstalk_2920(-208, 1440), 3);
    add_background_object(create_plstonewall1_2913(0, 728), 3);
    add_background_object(create_plground1_2943(128, 712), 3);
    add_background_object(create_plbrickwall1_2918(992, 760), 3);
    add_background_object(create_plbrickwall2_2919(1088, 760), 3);
    add_background_object(create_plbrickwall3_2923(992, 760), 3);
    add_background_object(create_plbrickwall5_2921(1040, 728), 3);
    add_background_object(create_plbrickwall4_2953(1008, 728), 3);
    add_background_object(create_plbrickwall6_2954(1072, 728), 3);
    add_background_object(create_plbrickwall5_2921(1040, 888), 3);
    add_background_object(create_plbrickwall4_2953(1008, 888), 3);
    add_background_object(create_plbrickwall6_2954(1072, 888), 3);
    add_background_object(create_plbrickwall4_2953(1256, 808), 3);
    add_background_object(create_plbrickwall5_2921(1288, 808), 3);
    add_background_object(create_plbrickwall6_2954(1352, 872), 3);
    add_background_object(create_plstonewall1_2913(1920, 1128), 3);
    add_background_object(create_plstonewall1_2913(1664, 1128), 3);
    add_background_object(create_plstonewall12_2914(1920, 880), 3);
    add_background_object(create_plstonewall12_2914(1352, 888), 3);
    add_background_object(create_plstonewall12_2914(2048, 872), 3);
    add_background_object(create_plstonewall11_2924(1920, 800), 3);
    add_background_object(create_plstonewall11_2924(1408, 1120), 3);
    add_background_object(create_plstonewall10_2940(1856, 1048), 3);
    add_background_object(create_plstonewall5_2932(1664, 1064), 3);
    add_background_object(create_plstonewall5_2932(1792, 1064), 3);
    add_background_object(create_plstonewall5_2932(1352, 824), 3);
    add_background_object(create_plstonewall16_2933(1728, 1064), 3);
    add_background_object(create_plstonewall16_2933(1416, 824), 3);
    add_background_object(create_plstonewall14_2934(1536, 1040), 3);
    add_background_object(create_plstonewall14_2934(2048, 744), 3);
    add_background_object(create_plground1_2943(1352, 808), 3);
    add_background_object(create_plground9_2935(1408, 1104), 3);
    add_background_object(create_plground9_2935(1920, 800), 3);
    add_background_object(create_plground12_2949(1864, 1040), 3);
    add_background_object(create_plstonewall6_2912(1512, 1128), 3);
    add_background_object(create_plstonewall6_2912(1616, 1120), 3);
    add_background_object(create_plstonewall6_2912(1776, 1072), 3);
    add_background_object(create_plground10_2948(1536, 1032), 3);
    add_background_object(create_plstonewall7_2947(1512, 1144), 3);
    add_background_object(create_plstonewall7_2947(1608, 1064), 3);
    add_background_object(create_plstonewall7_2947(1728, 1040), 3);
    add_background_object(create_plstonewall7_2947(1848, 1128), 3);
    add_background_object(create_plstonewall7_2947(2000, 1144), 3);
    add_background_object(create_plground2_2944(1992, 1112), 3);
    add_background_object(create_plbrickwall4_2953(1256, 840), 3);
    add_background_object(create_plbrickwall5_2921(1288, 840), 3);
    add_background_object(create_plbrickwall4_2953(1256, 872), 3);
    add_background_object(create_plbrickwall5_2921(1288, 872), 3);
    add_background_object(create_plbrickwall1_2918(992, 440), 3);
    add_background_object(create_plbrickwall2_2919(1088, 440), 3);
    add_background_object(create_plbrickwall3_2923(992, 440), 3);
    add_background_object(create_plbrickwall5_2921(1040, 408), 3);
    add_background_object(create_plbrickwall4_2953(1008, 408), 3);
    add_background_object(create_plbrickwall6_2954(1072, 408), 3);
    add_background_object(create_plbrickwall5_2921(1040, 568), 3);
    add_background_object(create_plbrickwall4_2953(1008, 568), 3);
    add_background_object(create_plbrickwall6_2954(1072, 568), 3);
    add_background_object(create_plground1_2943(0, 704), 3);
    add_background_object(create_plstonewall1_2913(256, 744), 3);
    add_background_object(create_plground1_2943(256, 720), 3);
    add_background_object(create_plstonewall1_2913(0, 856), 3);
    add_background_object(create_plstonewall1_2913(2176, 1128), 3);
    add_background_object(create_plground1_2943(2120, 1112), 3);
    add_background_object(create_plground8_2925(2248, 1000), 3);
    add_background_object(create_plstonewall1_2913(2376, 1000), 3);
    add_background_object(create_plstonewall1_2913(2432, 1128), 3);
    add_background_object(create_plstonewall1_2913(2376, 872), 3);
    add_background_object(create_plground1_2943(2376, 848), 3);
    add_background_object(create_plstonewall6_2912(2352, 1072), 3);
    add_background_object(create_plstonewall1_2913(2432, 1256), 3);
    add_background_object(create_plstonewall7_2947(2136, 1144), 3);
    add_background_object(create_plstonewall7_2947(2272, 1136), 3);
    add_background_object(create_plstonewall7_2947(2368, 1024), 3);
    add_background_object(create_plstonewall7_2947(2376, 896), 3);
    add_background_object(create_plstonewall9_2928(2176, 744), 3);
    add_background_object(create_plstonewall6_2912(2088, 744), 3);
    add_background_object(create_plground4_2931(2280, 728), 3);
    add_background_object(create_plground13_2936(2168, 728), 3);
    add_background_object(create_plground13_2936(2224, 728), 3);
    add_background_object(create_plground10_2948(2048, 728), 3);
    add_background_object(create_dvceilingoverlay_915(2168, 768), 3);
    add_background_object(create_dvceilingoverlay_915(2144, 800), 3);
    add_background_object(create_dvceilingoverlay_915(2112, 832), 3);
    add_background_object(create_plstonewall22_2976(2760, 360), 3);
    add_background_object(create_plstonewall23_2977(-544, 752), 3);
    add_background_object(create_plstonewall1_2913(2632, 872), 3);
    add_background_object(create_plground1_2943(2504, 856), 3);
    add_background_object(create_plground8_2925(2760, 752), 3);
    add_background_object(create_plground1_2943(2632, 864), 3);
    add_background_object(create_plstonewall1_2913(2632, 1000), 3);
    add_background_object(create_plstonewall1_2913(2888, 872), 3);
    add_background_object(create_plstonewall1_2913(2888, 1000), 3);
    add_background_object(create_plstonewall1_2913(2888, 744), 3);
    add_background_object(create_plstonewall1_2913(2632, 232), 3);
    add_background_object(create_plstonewall8_2927(2248, 232), 3);
    add_background_object(create_plstonewall1_2913(2376, 232), 3);
    add_background_object(create_plground3_2939(2248, 208), 3);
    add_background_object(create_plground1_2943(2272, 208), 3);
    add_background_object(create_plstonewall1_2913(2248, -64), 3);
    add_background_object(create_plstonewall8_2927(2120, -64), 3);
    add_background_object(create_plstonewall1_2913(2504, -64), 3);
    add_background_object(create_plstonewall12_2914(2248, 64), 3);
    add_background_object(create_plstonewall13_2915(2376, 64), 3);
    add_background_object(create_plstonewall12_2914(2504, 64), 3);
    add_background_object(create_plstonewall13_2915(2632, 64), 3);
    add_background_object(create_plground12_2949(2976, 296), 3);
    add_background_object(create_plstonewall6_2912(2840, 272), 3);
    add_background_object(create_plground11_2950(2848, 224), 3);
    add_background_object(create_plbrickwall5_2921(2488, 456), 3);
    add_background_object(create_plbrickwall5_2921(2424, 456), 3);
    add_background_object(create_plbrickwall6_2954(2552, 456), 3);
    add_background_object(create_plbrickwall5_2921(2360, 456), 3);
    add_background_object(create_plbrickwall5_2921(2296, 456), 3);
    add_background_object(create_plbrickwall4_2953(2200, 456), 3);
    add_background_object(create_plbrickwall5_2921(2232, 456), 3);
    add_background_object(create_plbrickwall5_2921(2632, 744), 3);
    add_background_object(create_plbrickwall4_2953(2536, 744), 3);
    add_background_object(create_plbrickwall5_2921(2664, 712), 3);
    add_background_object(create_plbrickwall6_2954(2696, 744), 3);
    add_background_object(create_plbrickwall4_2953(2664, 712), 3);
    add_background_object(create_plbrickwall6_2954(2728, 712), 3);
    add_background_object(create_plbrickwall5_2921(2664, 680), 3);
    add_background_object(create_plbrickwall4_2953(2664, 680), 3);
    add_background_object(create_plbrickwall6_2954(2728, 680), 3);
    add_background_object(create_plbrickwall5_2921(2568, 744), 3);
    add_background_object(create_plbrickwall5_2921(2456, 488), 3);
    add_background_object(create_plbrickwall5_2921(2392, 488), 3);
    add_background_object(create_plbrickwall5_2921(2328, 488), 3);
    add_background_object(create_plbrickwall5_2921(2264, 488), 3);
    add_background_object(create_plbrickwall6_2954(2520, 488), 3);
    add_background_object(create_plbrickwall4_2953(2232, 488), 3);
    add_background_object(create_plstonewall1_2913(256, 872), 3);
    add_background_object(create_plstonewall6_2912(448, 744), 3);
    add_background_object(create_plground1_2943(384, 728), 3);
    add_background_object(create_plstonewall6_2912(568, 840), 3);
    add_background_object(create_plground11_2950(512, 736), 3);
    add_background_object(create_plstonewall6_2912(488, 832), 3);
    add_background_object(create_plstonewall6_2912(688, 896), 3);
    add_background_object(create_plground12_2949(640, 808), 3);
    add_background_object(create_plstonewall1_2913(512, 1032), 3);
    add_background_object(create_plstonewall1_2913(256, 1000), 3);
    add_background_object(create_plstonewall1_2913(0, 984), 3);
    add_background_object(create_plstonewall6_2912(736, 992), 3);
    add_background_object(create_plstonewall6_2912(832, 1000), 3);
    add_background_object(create_plstonewall6_2912(960, 1040), 3);
    add_background_object(create_plground11_2950(768, 888), 3);
    add_background_object(create_plground12_2949(896, 960), 3);
    add_background_object(create_plstonewall6_2912(1208, 1144), 3);
    add_background_object(create_plstonewall6_2912(1096, 1048), 3);
    add_background_object(create_plstonewall6_2912(1120, 1128), 3);
    add_background_object(create_plground2_2944(1024, 1032), 3);
    add_background_object(create_plground12_2949(1280, 1104), 3);
    add_background_object(create_plground11_2950(1152, 1032), 3);
    add_background_object(create_plstonewall1_2913(640, 1160), 3);
    add_background_object(create_plstonewall6_2912(800, 1128), 3);
    add_background_object(create_plstonewall6_2912(696, 1104), 3);
    add_background_object(create_plstonewall1_2913(1152, 1328), 3);
    add_background_object(create_plstonewall1_2913(1408, 1328), 3);
    add_background_object(create_plstonewall1_2913(896, 1296), 3);
    add_background_object(create_plstonewall1_2913(640, 1288), 3);
    add_background_object(create_plstonewall7_2947(1392, 1208), 3);
    add_background_object(create_plstonewall7_2947(1256, 1192), 3);
    add_background_object(create_plstonewall7_2947(1152, 1112), 3);
    add_background_object(create_plstonewall7_2947(1040, 1056), 3);
    add_background_object(create_plstonewall7_2947(904, 1056), 3);
    add_background_object(create_plstonewall7_2947(768, 968), 3);
    add_background_object(create_plstonewall7_2947(632, 904), 3);
    add_background_object(create_plstonewall7_2947(512, 800), 3);
    add_background_object(create_plstonewall7_2947(376, 760), 3);
    add_background_object(create_plstonewall7_2947(224, 752), 3);
    add_background_object(create_plstonewall7_2947(48, 744), 3);
    add_background_object(create_plstonewall7_2947(2520, 896), 3);
    add_background_object(create_plstonewall7_2947(2664, 904), 3);
    add_background_object(create_plstonewall7_2947(2808, 896), 3);
    add_background_object(create_plstonewall7_2947(2880, 792), 3);
    add_background_object(create_plbrickwall1_2918(2008, 288), 3);
    add_background_object(create_plbrickwall2_2919(2104, 288), 3);
    add_background_object(create_plbrickwall3_2923(2008, 288), 3);
    add_background_object(create_plbrickwall5_2921(1992, 128), 3);
    add_background_object(create_plbrickwall4_2953(1992, 128), 3);
    add_background_object(create_plbrickwall6_2954(2056, 128), 3);
    add_background_object(create_plbrickwall5_2921(2056, 416), 3);
    add_background_object(create_plbrickwall4_2953(2024, 416), 3);
    add_background_object(create_plbrickwall6_2954(2088, 416), 3);
    add_background_object(create_plbrickwall1_2918(2008, 160), 3);
    add_background_object(create_plbrickwall2_2919(2104, 160), 3);
    add_background_object(create_plbrickwall3_2923(2008, 160), 3);
    add_background_object(create_dvceilingoverlay_915(2184, 32), 3);
    add_background_object(create_dvceilingoverlay_915(2144, 0), 3);
    add_background_object(create_plbrickwall5_2921(1992, 96), 3);
    add_background_object(create_plbrickwall4_2953(1992, 96), 3);
    add_background_object(create_plbrickwall6_2954(2056, 96), 3);
    add_background_object(create_plbrickwall3_2923(1992, -32), 3);
    add_background_object(create_plstonewall9_2928(2760, -64), 3);
    add_background_object(create_plstonewall7_2947(2264, -48), 3);
    add_background_object(create_plstonewall7_2947(2392, -56), 3);
    add_background_object(create_plstonewall7_2947(2528, -48), 3);
    add_background_object(create_plstonewall7_2947(2664, -64), 3);
    add_background_object(create_plstonewall12_2914(3016, 520), 3);
    add_background_object(create_plstonewall13_2915(3144, 520), 3);
    add_background_object(create_plstonewall13_2915(2888, 520), 3);
    add_background_object(create_plground2_2944(3016, 728), 3);
    add_background_object(create_plstonewall1_2913(3144, 896), 3);
    add_background_object(create_plstonewall1_2913(3272, 392), 3);
    add_background_object(create_plstonewall12_2914(3272, 520), 3);
    add_background_object(create_plstonewall13_2915(3400, 520), 3);
    add_background_object(create_plstonewall3_2926(3528, 392), 3);
    add_background_object(create_plstonewall1_2913(3400, 664), 3);
    add_background_object(create_plstonewall1_2913(3144, 1024), 3);
    add_background_object(create_plstonewall1_2913(3400, 792), 3);
    add_background_object(create_plstonewall1_2913(3400, 920), 3);
    add_background_object(create_plstonewall4_2937(3376, 792), 3);
    add_background_object(create_plground2_2944(3144, 720), 3);
    add_background_object(create_plground4_2931(3264, 720), 3);
    add_background_object(create_plground3_2939(3280, 768), 3);
    add_background_object(create_plground13_2936(3304, 768), 3);
    add_background_object(create_plground4_2931(3360, 768), 3);
    add_background_object(create_plstonewall4_2937(3376, 664), 3);
    add_background_object(create_plground3_2939(3376, 648), 3);
    add_background_object(create_plground13_2936(3400, 648), 3);
    add_background_object(create_plground13_2936(3464, 648), 3);
    add_background_object(create_plground13_2936(3528, 648), 3);
    add_background_object(create_plground13_2936(3592, 648), 3);
    add_background_object(create_plground13_2936(3224, 384), 3);
    add_background_object(create_plground13_2936(3400, 392), 3);
    add_background_object(create_plground13_2936(3464, 392), 3);
    add_background_object(create_plground1_2943(3104, 376), 3);
    add_background_object(create_plground1_2943(3280, 384), 3);
    add_background_object(create_plground4_2931(3528, 392), 3);
    add_background_object(create_plground13_2936(2400, 216), 3);
    add_background_object(create_plbrickwall6_2954(2592, 160), 3);
    add_background_object(create_plstonewall6_2912(2424, 216), 3);
    add_background_object(create_plstonewall6_2912(2744, 216), 3);
    add_background_object(create_plstonewall7_2947(3024, 776), 3);
    add_background_object(create_plstonewall7_2947(3152, 760), 3);
    add_background_object(create_plstonewall3_2926(3656, 664), 3);
    add_background_object(create_plground4_2931(3656, 648), 3);
    add_background_object(create_plstonewall1_2913(3656, 792), 3);
    add_background_object(create_plstonewall7_2947(3272, 800), 3);
    add_background_object(create_plstonewall7_2947(3392, 688), 3);
    add_background_object(create_plstonewall7_2947(3536, 680), 3);
    add_background_object(create_plstonewall7_2947(3400, 808), 3);
    add_background_object(create_plstonewall7_2947(3048, 400), 3);
    add_background_object(create_plstonewall7_2947(3200, 400), 3);
    add_background_object(create_plstonewall7_2947(3368, 408), 3);
    add_background_object(create_plstonewall1_2913(3656, 920), 3);
    add_background_object(create_plstonewall1_2913(3400, 1048), 3);
    add_background_object(create_plstonewall1_2913(3656, 1048), 3);
    add_background_object(create_plstonewall16_2933(4056, 416), 3);
    add_background_object(create_plstonewall16_2933(3928, 416), 3);
    add_background_object(create_plstonewall16_2933(3688, 32), 3);
    add_background_object(create_plstonewall16_2933(3688, 160), 3);
    add_background_object(create_plstonewall5_2932(3992, 416), 3);
    add_background_object(create_plstonewall5_2932(3864, 416), 3);
    add_background_object(create_plstonewall5_2932(3688, 96), 3);
    add_background_object(create_plstonewall5_2932(3688, 224), 3);
    add_background_object(create_plstonewall11_2924(3880, 336), 3);
    add_background_object(create_plground3_2939(3856, 416), 3);
    add_background_object(create_plground8_2925(3880, 296), 3);
    add_background_object(create_plstonewall21_2952(4008, 288), 3);
    add_background_object(create_plstonewall21_2952(4008, 160), 3);
    add_background_object(create_plstonewall21_2952(4008, 32), 3);
    add_background_object(create_plstonewall22_2976(3880, 160), 3);
    add_background_object(create_plstonewall23_2977(3752, 160), 3);
    add_background_object(create_plstonewall1_2913(3752, 32), 3);
    add_background_object(create_plstonewall4_2937(3664, 160), 3);
    add_background_object(create_plstonewall4_2937(3664, 32), 3);
    add_background_object(create_plstonewall6_2912(3968, 32), 3);
    add_background_object(create_plstonewall6_2912(3672, 32), 3);
    add_background_object(create_plstonewall6_2912(4032, 352), 3);
    add_background_object(create_plstonewall7_2947(3864, 32), 3);
    add_background_object(create_plstonewall7_2947(4008, 40), 3);
    add_background_object(create_plstonewall7_2947(4000, 160), 3);
    add_background_object(create_plstonewall7_2947(3704, 40), 3);
    add_background_object(create_plstonewall7_2947(4008, 288), 3);
    add_background_object(create_plstonewall24_2978(3688, 288), 3);
    add_background_object(create_plstonewall12_2914(3864, 480), 3);
    add_background_object(create_plstonewall12_2914(3992, 480), 3);
    add_background_object(create_plstonewall3_2926(4136, 32), 3);
    add_background_object(create_plstonewall3_2926(4136, 160), 3);
    add_background_object(create_plstonewall3_2926(4136, 288), 3);
    add_background_object(create_plstonewall21_2952(4008, -96), 3);
    add_background_object(create_plstonewall1_2913(3688, -96), 3);
    add_background_object(create_plstonewall4_2937(3664, -96), 3);
    add_background_object(create_plstonewall3_2926(4136, -96), 3);
    add_background_object(create_plstonewall6_2912(3912, -80), 3);
    add_background_object(create_plstonewall1_2913(3912, 792), 3);
    add_background_object(create_plstonewall1_2913(3912, 920), 3);
    add_background_object(create_plstonewall1_2913(3912, 1048), 3);
    add_background_object(create_plbrickwall5_2921(3720, 760), 3);
    add_background_object(create_plbrickwall5_2921(3784, 760), 3);
    add_background_object(create_plbrickwall5_2921(3848, 760), 3);
    add_background_object(create_plbrickwall5_2921(3912, 760), 3);
    add_background_object(create_plbrickwall5_2921(3976, 760), 3);
    add_background_object(create_plbrickwall5_2921(3976, 728), 3);
    add_background_object(create_plstonewall1_2913(4168, 792), 3);
    add_background_object(create_plstonewall1_2913(4168, 920), 3);
    add_background_object(create_plstonewall1_2913(4168, 1048), 3);
    add_background_object(create_plstonewall21_2952(4040, 664), 3);
    add_background_object(create_plbrickwall5_2921(3976, 696), 3);
    add_background_object(create_plbrickwall5_2921(3976, 664), 3);
    add_background_object(create_plbrickwall5_2921(4040, 664), 3);
    add_background_object(create_plbrickwall5_2921(4104, 664), 3);
    add_background_object(create_plbrickwall5_2921(4168, 760), 3);
    add_background_object(create_plbrickwall5_2921(4168, 728), 3);
    add_background_object(create_plbrickwall5_2921(4168, 696), 3);
    add_background_object(create_plbrickwall5_2921(4168, 664), 3);
    add_background_object(create_plbrickwall5_2921(4232, 760), 3);
    add_background_object(create_plbrickwall5_2921(4296, 760), 3);
    add_background_object(create_plbrickwall5_2921(4360, 760), 3);
    add_background_object(create_plbrickwall4_2953(3976, 664), 3);
    add_background_object(create_plbrickwall4_2953(3976, 696), 3);
    add_background_object(create_plbrickwall4_2953(3976, 728), 3);
    add_background_object(create_plbrickwall6_2954(4200, 664), 3);
    add_background_object(create_plbrickwall6_2954(4200, 696), 3);
    add_background_object(create_plstonewall1_2913(4424, 792), 3);
    add_background_object(create_plstonewall1_2913(4424, 920), 3);
    add_background_object(create_plstonewall1_2913(4424, 1048), 3);
    add_background_object(create_plstonewall21_2952(4552, 664), 3);
    add_background_object(create_plstonewall6_2912(4456, 728), 3);
    add_background_object(create_plbrickwall5_2921(4360, 728), 3);
    add_background_object(create_plbrickwall5_2921(4360, 696), 3);
    add_background_object(create_plbrickwall5_2921(4424, 696), 3);
    add_background_object(create_plbrickwall5_2921(4488, 696), 3);
    add_background_object(create_plbrickwall5_2921(4488, 664), 3);
    add_background_object(create_plbrickwall5_2921(4488, 632), 3);
    add_background_object(create_plbrickwall5_2921(4552, 632), 3);
    add_background_object(create_plbrickwall5_2921(4616, 632), 3);
    add_background_object(create_plbrickwall4_2953(4360, 696), 3);
    add_background_object(create_plbrickwall4_2953(4488, 632), 3);
    add_background_object(create_plbrickwall4_2953(4488, 664), 3);
    add_background_object(create_plstonewall1_2913(4680, 664), 3);
    add_background_object(create_plstonewall1_2913(4680, 792), 3);
    add_background_object(create_plstonewall1_2913(4680, 920), 3);
    add_background_object(create_plstonewall1_2913(4680, 536), 3);
    add_background_object(create_plbrickwall5_2921(4616, 536), 3);
    add_background_object(create_plbrickwall5_2921(4616, 504), 3);
    add_background_object(create_plbrickwall5_2921(4680, 504), 3);
    add_background_object(create_plbrickwall5_2921(4744, 504), 3);
    add_background_object(create_plbrickwall4_2953(4616, 504), 3);
    add_background_object(create_plbrickwall4_2953(4616, 536), 3);
    add_background_object(create_plbrickwall5_2921(4616, 600), 3);
    add_background_object(create_plbrickwall5_2921(4616, 568), 3);
    add_background_object(create_plbrickwall4_2953(4616, 568), 3);
    add_background_object(create_plbrickwall4_2953(4616, 600), 3);
    add_background_object(create_plbrickwall5_2921(4256, 472), 3);
    add_background_object(create_plbrickwall4_2953(4224, 472), 3);
    add_background_object(create_plbrickwall6_2954(4320, 472), 3);
    add_background_object(create_plbrickwall5_2921(4256, 312), 3);
    add_background_object(create_plbrickwall4_2953(4224, 312), 3);
    add_background_object(create_plbrickwall6_2954(4320, 312), 3);
    add_background_object(create_plbrickwall5_2921(4872, 408), 3);
    add_background_object(create_plbrickwall5_2921(4872, 376), 3);
    add_background_object(create_plbrickwall5_2921(4808, 504), 3);
    add_background_object(create_plbrickwall4_2953(4872, 376), 3);
    add_background_object(create_plbrickwall4_2953(4872, 408), 3);
    add_background_object(create_plbrickwall5_2921(4872, 472), 3);
    add_background_object(create_plbrickwall5_2921(4872, 440), 3);
    add_background_object(create_plbrickwall4_2953(4872, 440), 3);
    add_background_object(create_plbrickwall4_2953(4872, 472), 3);
    add_background_object(create_plbrickwall5_2921(4872, 504), 3);
    add_background_object(create_plstonewall1_2913(4936, 664), 3);
    add_background_object(create_plstonewall1_2913(4936, 792), 3);
    add_background_object(create_plstonewall1_2913(4936, 536), 3);
    add_background_object(create_plstonewall1_2913(4936, 408), 3);
    add_background_object(create_plbrickwall5_2921(4872, 280), 3);
    add_background_object(create_plbrickwall5_2921(4872, 248), 3);
    add_background_object(create_plbrickwall5_2921(4936, 376), 3);
    add_background_object(create_plbrickwall4_2953(4872, 248), 3);
    add_background_object(create_plbrickwall4_2953(4872, 280), 3);
    add_background_object(create_plbrickwall5_2921(4872, 344), 3);
    add_background_object(create_plbrickwall5_2921(4872, 312), 3);
    add_background_object(create_plbrickwall4_2953(4872, 312), 3);
    add_background_object(create_plbrickwall4_2953(4872, 344), 3);
    add_background_object(create_plbrickwall5_2921(5000, 376), 3);
    add_background_object(create_plbrickwall5_2921(5064, 376), 3);
    add_background_object(create_plbrickwall5_2921(5128, 376), 3);
    add_background_object(create_plbrickwall1_2918(4936, 248), 3);
    add_background_object(create_plbrickwall1_2918(5064, 248), 3);
    add_background_object(create_plbrickwall5_2921(5192, 376), 3);
    add_background_object(create_plbrickwall5_2921(5256, 376), 3);
    add_background_object(create_plbrickwall5_2921(5320, 376), 3);
    add_background_object(create_plbrickwall5_2921(5384, 376), 3);
    add_background_object(create_plbrickwall1_2918(5192, 248), 3);
    add_background_object(create_plbrickwall1_2918(5320, 248), 3);
    add_background_object(create_plstonewall1_2913(5192, 536), 3);
    add_background_object(create_plstonewall1_2913(5192, 408), 3);
    add_background_object(create_plstonewall7_2947(3576, 808), 3);
    add_background_object(create_plstonewall7_2947(3712, 792), 3);
    add_background_object(create_plstonewall7_2947(3848, 792), 3);
    add_background_object(create_plstonewall7_2947(4040, 696), 3);
    add_background_object(create_plstonewall7_2947(4000, 800), 3);
    add_background_object(create_plstonewall7_2947(4160, 792), 3);
    add_background_object(create_plstonewall7_2947(4296, 792), 3);
    add_background_object(create_plstonewall7_2947(4424, 728), 3);
    add_background_object(create_plstonewall7_2947(4552, 664), 3);
    add_background_object(create_plstonewall7_2947(4680, 536), 3);
    add_background_object(create_plstonewall7_2947(4944, 536), 3);
    add_background_object(create_plstonewall7_2947(4816, 536), 3);
    add_background_object(create_plstonewall7_2947(4688, 664), 3);
    add_background_object(create_plstonewall7_2947(4952, 408), 3);
    add_background_object(create_plstonewall7_2947(5088, 408), 3);
    add_background_object(create_plstonewall7_2947(5224, 408), 3);
    add_background_object(create_plruins5_2898(4240, 184), 3);
    add_background_object(create_plbrickwall5_2921(4256, 152), 3);
    add_background_object(create_plbrickwall4_2953(4224, 152), 3);
    add_background_object(create_plbrickwall6_2954(4320, 152), 3);
    add_background_object(create_plbrickwall5_2921(5448, 376), 3);
    add_background_object(create_plbrickwall5_2921(5512, 376), 3);
    add_background_object(create_plbrickwall5_2921(5576, 376), 3);
    add_background_object(create_plbrickwall5_2921(5640, 376), 3);
    add_background_object(create_plbrickwall1_2918(5448, 248), 3);
    add_background_object(create_plbrickwall1_2918(5576, 248), 3);
    add_background_object(create_plstonewall1_2913(5448, 536), 3);
    add_background_object(create_plstonewall1_2913(5448, 408), 3);
    add_background_object(create_plbrickwall4_2953(4968, 216), 3);
    add_background_object(create_plbrickwall5_2921(5000, 216), 3);
    add_background_object(create_plbrickwall6_2954(5064, 216), 3);
    add_background_object(create_plbrickwall4_2953(5224, 216), 3);
    add_background_object(create_plbrickwall5_2921(5256, 216), 3);
    add_background_object(create_plbrickwall6_2954(5320, 216), 3);
    add_background_object(create_plbrickwall4_2953(5480, 216), 3);
    add_background_object(create_plbrickwall5_2921(5512, 216), 3);
    add_background_object(create_plbrickwall6_2954(5576, 216), 3);
    add_background_object(create_plbrickwall4_2953(5736, 216), 3);
    add_background_object(create_plbrickwall5_2921(5768, 216), 3);
    add_background_object(create_plbrickwall6_2954(5832, 216), 3);
    add_background_object(create_plbrickwall5_2921(5704, 376), 3);
    add_background_object(create_plbrickwall5_2921(5768, 376), 3);
    add_background_object(create_plbrickwall5_2921(5832, 376), 3);
    add_background_object(create_plbrickwall5_2921(5896, 376), 3);
    add_background_object(create_plbrickwall1_2918(5704, 248), 3);
    add_background_object(create_plbrickwall1_2918(5832, 248), 3);
    add_background_object(create_plstonewall1_2913(5704, 536), 3);
    add_background_object(create_plstonewall1_2913(5704, 408), 3);
    add_background_object(create_plbrickwall4_2953(5224, 184), 3);
    add_background_object(create_plbrickwall5_2921(5256, 184), 3);
    add_background_object(create_plbrickwall6_2954(5320, 184), 3);
    add_background_object(create_plbrickwall4_2953(5480, 184), 3);
    add_background_object(create_plbrickwall5_2921(5512, 184), 3);
    add_background_object(create_plbrickwall6_2954(5576, 184), 3);
    add_background_object(create_plbrickwall4_2953(5480, 24), 3);
    add_background_object(create_plbrickwall5_2921(5512, 24), 3);
    add_background_object(create_plbrickwall6_2954(5576, 24), 3);
    add_background_object(create_plbrickwall4_2953(4968, 56), 3);
    add_background_object(create_plbrickwall5_2921(5000, 56), 3);
    add_background_object(create_plbrickwall6_2954(5064, 56), 3);
    add_background_object(create_plbrickwall4_2953(4968, 24), 3);
    add_background_object(create_plbrickwall5_2921(5000, 24), 3);
    add_background_object(create_plbrickwall6_2954(5064, 24), 3);
    add_background_object(create_plbrickwall4_2953(4648, -8), 3);
    add_background_object(create_plbrickwall5_2921(5000, -8), 3);
    add_background_object(create_plbrickwall5_2921(5064, -8), 3);
    add_background_object(create_plbrickwall5_2921(5128, -8), 3);
    add_background_object(create_plbrickwall5_2921(5192, -8), 3);
    add_background_object(create_plbrickwall5_2921(5256, -8), 3);
    add_background_object(create_plbrickwall5_2921(5320, -8), 3);
    add_background_object(create_plbrickwall5_2921(5384, -8), 3);
    add_background_object(create_plbrickwall5_2921(5448, -8), 3);
    add_background_object(create_plbrickwall5_2921(5512, -8), 3);
    add_background_object(create_plbrickwall5_2921(5576, -8), 3);
    add_background_object(create_plbrickwall5_2921(5640, -8), 3);
    add_background_object(create_plbrickwall5_2921(5704, -8), 3);
    add_background_object(create_plbrickwall4_2953(5224, 24), 3);
    add_background_object(create_plbrickwall5_2921(5256, 24), 3);
    add_background_object(create_plbrickwall6_2954(5320, 24), 3);
    add_background_object(create_plbrickwall4_2953(5736, 56), 3);
    add_background_object(create_plbrickwall5_2921(5768, 56), 3);
    add_background_object(create_plbrickwall6_2954(5832, 56), 3);
    add_background_object(create_plbrickwall4_2953(5736, 24), 3);
    add_background_object(create_plbrickwall5_2921(5768, 24), 3);
    add_background_object(create_plbrickwall6_2954(5832, 24), 3);
    add_background_object(create_plbrickwall5_2921(5768, -8), 3);
    add_background_object(create_plbrickwall5_2921(5832, -8), 3);
    add_background_object(create_plbrickwall5_2921(5896, -8), 3);
    add_background_object(create_plbrickwall5_2921(5960, -8), 3);
    add_background_object(create_plbrickwall5_2921(5960, 376), 3);
    add_background_object(create_plbrickwall5_2921(6024, 376), 3);
    add_background_object(create_plbrickwall5_2921(6088, 376), 3);
    add_background_object(create_plbrickwall5_2921(6152, 376), 3);
    add_background_object(create_plbrickwall1_2918(5960, 248), 3);
    add_background_object(create_plbrickwall1_2918(6088, 248), 3);
    add_background_object(create_plstonewall1_2913(5960, 536), 3);
    add_background_object(create_plstonewall1_2913(5960, 408), 3);
    add_background_object(create_plbrickwall4_2953(6184, 216), 3);
    add_background_object(create_plbrickwall4_2953(6184, 56), 3);
    add_background_object(create_plbrickwall4_2953(6184, 24), 3);
    add_background_object(create_plbrickwall5_2921(6024, -8), 3);
    add_background_object(create_plbrickwall5_2921(6152, -8), 3);
    add_background_object(create_plbrickwall5_2921(6088, -8), 3);
    add_background_object(create_plbrickwall5_2921(6216, 376), 3);
    add_background_object(create_plbrickwall5_2921(6280, 376), 3);
    add_background_object(create_plbrickwall1_2918(6216, 248), 3);
    add_background_object(create_pldoorback_2991(5976, 152), 3);
    add_background_object(create_plrunestone_2992(5200, 168), 3);
    add_background_object(create_plrunestone_2992(5352, 168), 3);
    add_background_object(create_plrunestone_2992(5456, 168), 3);
    add_background_object(create_plrunestone_2992(5608, 168), 3);
    add_background_object(create_plrunestone_2992(5096, 168), 3);
    add_background_object(create_plrunestone_2992(4944, 168), 3);
    add_background_object(create_plrunestone_2992(5712, 168), 3);
    add_background_object(create_plrunestone_2992(5864, 168), 3);
    add_background_object(create_plrunestone_2992(6160, 168), 3);
    add_background_object(create_plbrickwall1_2918(6216, 120), 3);
    add_background_object(create_plbrickwall1_2918(6216, -8), 3);
    add_background_object(create_plbrickwall5_2921(6344, 376), 3);
    add_background_object(create_plbrickwall5_2921(6408, 376), 3);
    add_background_object(create_plbrickwall1_2918(6344, 248), 3);
    add_background_object(create_plbrickwall1_2918(6344, 120), 3);
    add_background_object(create_plbrickwall1_2918(6344, -8), 3);
    add_background_object(create_plbrickwall4_2953(6216, 120), 3);
    add_background_object(create_plbrickwall4_2953(6216, 88), 3);
    add_background_object(create_plbrickwall4_2953(6216, 184), 3);
    add_background_object(create_plbrickwall4_2953(6216, 152), 3);
    add_background_object(create_plstonewall1_2913(6216, 536), 3);
    add_background_object(create_plstonewall1_2913(6216, 408), 3);
    add_background_object(create_plbrickwall5_2921(4232, 728), 3);
    add_background_object(create_plbrickwall5_2921(4296, 728), 3);
    add_background_object(create_plstonewall12_2914(4136, 0), 3);
    add_background_object(create_plstonewall13_2915(4256, 0), 3);
    add_background_object(create_plstonewall12_2914(4384, 0), 3);
    add_background_object(create_plvine1_2938(4356, 72), 3);
    add_background_object(create_plvine1_2938(4356, 144), 3);
    add_background_object(create_plvine1_2938(4356, 216), 3);
    add_background_object(create_plvine1_2938(4356, 288), 3);
    add_background_object(create_plvine1_2938(4356, 360), 3);
    add_background_object(create_plvine1_2938(4356, 432), 3);
    add_background_object(create_plvine1_2938(4356, 504), 3);
    add_background_object(create_plvine2_2941(4356, 576), 3);
    add_background_object(create_plvine1_2938(4824, 0), 3);
    add_background_object(create_plvine1_2938(4824, 72), 3);
    add_background_object(create_plvine1_2938(4824, 144), 3);
    add_background_object(create_plvine2_2941(4824, 360), 3);
    add_background_object(create_plvine1_2938(4824, 216), 3);
    add_background_object(create_plvine1_2938(4824, 288), 3);
    add_background_object(create_plbrickwall5_2921(4872, -8), 3);
    add_background_object(create_plbrickwall5_2921(4936, -8), 3);
    add_background_object(create_plbrickwall5_2921(4744, -8), 3);
    add_background_object(create_plbrickwall5_2921(4808, -8), 3);
    add_background_object(create_plbrickwall5_2921(4680, -8), 3);
    add_object(create_playerstartingpoint_358(77, 685), 3);
    add_object(create_enemysleepgas_2889(-200, 888), 3);
    add_object(create_enemycacteon_990(-200, 1505), 3);
    add_object(create_gimmickbridgelog_2339(-440, 904), 3);
    add_object(create_enemystinger_2891(-585, 1296), 3);
    add_object(create_objectcyclonetop_2963(-600, 1752), 3);
    add_object(create_gimmickbridge12logs_353(-592, 1768), 3);
    add_object(create_enemysunflora_2960(-600, 1496), 3);
    add_object(create_pllayer01_2958(-360, 1984), 3);
    add_object(create_pllayer02_2959(-488, 2064), 3);
    add_object(create_pllayer11_2957(-488, 1792), 3);
    add_object(create_pllayer12_2964(-360, 1872), 3);
    add_object(create_objectpinwheel_2956(-192, 1440), 3);
    add_object(create_levellagoonplatform1_2967(128, 576), 3);
    add_object(create_gimmickbowarrow_2979(368, 576), 3);
    add_object(create_levellagoonplatform2_2980(-216, 1872), 3);
    add_object(create_objecttimegate_2965(1057, 984), 3);
    add_object(create_objecttimegatepiece_2966(1081, 985), 3);
    add_object(create_objecttimegatepiece_2966(1089, 985), 3);
    add_object(create_objecttimegatepiece_2966(1097, 985), 3);
    add_object(create_objecttimegatepiece_2966(1105, 985), 3);
    add_object(create_objecttimegatepiece_2966(1113, 985), 3);
    add_object(create_objecttimegatepiece_2966(1121, 985), 3);
    add_object(create_objecttimegatepiece_2966(1129, 985), 3);
    add_object(create_objecttimegatepiece_2966(1137, 985), 3);
    add_object(create_objecttimegatepiece_2966(1145, 985), 3);
    add_object(create_objecttimegatepiece_2966(1153, 985), 3);
    add_object(create_enemyterreonleftshoulder_2981(-508, 1428), 3);
    add_object(create_enemyterreonrightshoulder_2982(-460, 1428), 3);
    add_object(create_enemyterreonleftleg_2983(-525, 1422), 3);
    add_object(create_enemyterreonrightleg_2984(-444, 1422), 3);
    add_object(create_enemyterreon_2985(-485, 1422), 3);
    add_object(create_effectterreonwarning_2986(-484, 1368), 3);
    add_object(create_layerchangeswitch_404(7592, -88), 3);
    add_object(create_layerchangeswitch2_1239(7392, -72), 3);
    add_object(create_breakableplrock_2987(1008, 600), 3);
    add_object(create_enemystingernest_2961(-576, 1628), 3);
    add_object(create_pllayer01_2958(1664, 952), 3);
    add_object(create_pllayer02_2959(1792, 880), 3);
    add_object(create_pllayer11_2957(1608, 888), 3);
    add_object(create_pllayer12_2964(1480, 816), 3);
    add_object(create_pllayer12_2964(1736, 968), 3);
    add_object(create_layerchangeto0_405(1384, 1128), 3);
    add_object(create_layerchangeto0_405(1384, 1064), 3);
    add_object(create_layerchangeto0_405(1384, 1000), 3);
    add_object(create_layerchangeto0_405(1384, 936), 3);
    add_object(create_layerchangeswitch_404(1408, 752), 3);
    add_object(create_layerchangeswitch_404(1408, 688), 3);
    add_object(create_layerchangeswitch_404(1928, 816), 3);
    add_object(create_layerchangeswitch_404(1928, 752), 3);
    add_object(create_layerchangeswitch_404(1928, 688), 3);
    add_object(create_objectcrystal_279(1477, 794), 3);
    add_object(create_objectcrystal_279(1525, 802), 3);
    add_object(create_objectcrystal_279(1565, 818), 3);
    add_object(create_objectcrystal_279(1597, 850), 3);
    add_object(create_objectcrystal_279(1629, 882), 3);
    add_object(create_objectcrystal_279(1957, 842), 3);
    add_object(create_objectcrystal_279(1989, 818), 3);
    add_object(create_objectcrystal_279(2021, 794), 3);
    add_object(create_objectcrystal_279(2053, 762), 3);
    add_object(create_objectcrystal_279(2085, 730), 3);
    add_object(create_layerchangeswitch2_1239(1728, 640), 3);
    add_object(create_layerchangeswitch2_1239(1728, 712), 3);
    add_object(create_layerchangeswitch2_1239(1728, 776), 3);
    add_object(create_layerchangeswitch2_1239(1728, 840), 3);
    add_object(create_breakableplrock_2987(1056, 600), 3);
    add_object(create_objecttimegate_2965(2465, 416), 3);
    add_object(create_objecttimegatepiece_2966(2489, 417), 3);
    add_object(create_objecttimegatepiece_2966(2497, 417), 3);
    add_object(create_objecttimegatepiece_2966(2505, 417), 3);
    add_object(create_objecttimegatepiece_2966(2513, 417), 3);
    add_object(create_objecttimegatepiece_2966(2521, 417), 3);
    add_object(create_objecttimegatepiece_2966(2529, 417), 3);
    add_object(create_objecttimegatepiece_2966(2537, 417), 3);
    add_object(create_objecttimegatepiece_2966(2545, 417), 3);
    add_object(create_objecttimegatepiece_2966(2553, 417), 3);
    add_object(create_objecttimegatepiece_2966(2561, 417), 3);
    add_object(create_redspringup_440(2632, 728), 3);
    add_object(create_redspringup_440(2600, 728), 3);
    add_object(create_objectpinwheel_2956(568, 712), 3);
    add_object(create_objectpinwheel_2956(640, 768), 3);
    add_object(create_objectpinwheel_2956(776, 800), 3);
    add_object(create_objectpinwheel_2956(848, 872), 3);
    add_object(create_objectpinwheel_2956(960, 976), 3);
    add_object(create_objectpinwheel_2956(1408, 1136), 3);
    add_object(create_objectpinwheel_2956(1464, 1088), 3);
    add_object(create_enemysunflora_2960(2256, 416), 3);
    add_object(create_yellowspringright_435(2088, 128), 3);
    add_object(create_objectstonedoor1_2993(5976, 200), 3);
    add_object(create_objectstonedoor3_2994(5272, -72), 3);
    add_object(create_objectstonedoor4_2995(5303, -72), 3);
    add_object(create_objectstonedoor2_2996(6071, 200), 3);
    add_object(create_breakableplrock_2987(2888, 616), 3);
    add_object(create_breakableplrock_2987(2888, 488), 3);
    add_object(create_breakableplrock_2987(3504, 520), 3);
    add_object(create_enemycacteon_990(2552, 145), 3);
    add_object(create_enemycacteon_990(2728, 177), 3);
    add_object(create_yellowspringupright_433(2624, 160), 3);
    add_object(create_breakableplrock_2987(3376, 520), 3);
    add_object(create_objectcrystal_279(3429, 562), 3);
    add_object(create_objectcrystal_279(3493, 562), 3);
    add_object(create_objectcrystal_279(3493, 626), 3);
    add_object(create_objectcrystal_279(3429, 594), 3);
    add_object(create_objectcrystal_279(3429, 626), 3);
    add_object(create_objectcrystal_279(3493, 594), 3);
    add_object(create_objectcrystal_279(3461, 562), 3);
    add_object(create_objectcrystal_279(3461, 626), 3);
    add_object(create_objectcrystal_279(3461, 594), 3);
    add_object(create_objectcrystal_279(3445, 578), 3);
    add_object(create_objectcrystal_279(3477, 578), 3);
    add_object(create_objectcrystal_279(3477, 610), 3);
    add_object(create_objectcrystal_279(3445, 610), 3);
    add_object(create_objectcrystal_279(3445, 546), 3);
    add_object(create_objectcrystal_279(3477, 546), 3);
    add_object(create_objectcrystal_279(3477, 642), 3);
    add_object(create_objectcrystal_279(3445, 642), 3);
    add_object(create_objectcyclonetop_2963(3336, 736), 3);
    add_object(create_enemystingernest_2961(3200, 628), 3);
    add_object(create_enemystinger_2891(3143, 600), 3);
    add_object(create_enemystinger_2891(3255, 624), 3);
    add_object(create_objectcrystal_279(3773, 306), 3);
    add_object(create_objectcrystal_279(3773, 346), 3);
    add_object(create_objectcrystal_279(3773, 386), 3);
    add_object(create_objectcrystal_279(3773, 426), 3);
    add_object(create_objectcrystal_279(3773, 466), 3);
    add_object(create_objectcrystal_279(3773, 506), 3);
    add_object(create_objectcrystal_279(3773, 546), 3);
    add_object(create_yellowspringupright_433(4232, 696), 3);
    add_object(create_enemycacteon_990(4320, 713), 3);
    add_object(create_enemycacteon_990(4408, 681), 3);
    add_object(create_enemycacteon_990(4024, 649), 3);
    add_object(create_enemycacteon_990(3712, 745), 3);
    add_object(create_enemycacteon_990(4200, 649), 3);
    add_object(create_objectcrystal_279(4269, 202), 3);
    add_object(create_objectcrystal_279(4309, 202), 3);
    add_object(create_objectcrystal_279(4269, 234), 3);
    add_object(create_objectcrystal_279(4309, 234), 3);
    add_object(create_objectcrystal_279(4269, 266), 3);
    add_object(create_objectcrystal_279(4309, 266), 3);
    add_object(create_objectcrystal_279(4269, 298), 3);
    add_object(create_objectcrystal_279(4309, 298), 3);
    add_object(create_objectcrystal_279(4269, 362), 3);
    add_object(create_objectcrystal_279(4309, 362), 3);
    add_object(create_objectcrystal_279(4269, 394), 3);
    add_object(create_objectcrystal_279(4309, 394), 3);
    add_object(create_objectcrystal_279(4269, 426), 3);
    add_object(create_objectcrystal_279(4309, 426), 3);
    add_object(create_objectcrystal_279(4269, 458), 3);
    add_object(create_objectcrystal_279(4309, 458), 3);
    add_object(create_monitorkeystone_562(4272, 120), 3);
    add_object(create_monitorwoodshield_325(5144, 216), 3);
    add_object(create_monitorearthshield_326(5272, 152), 3);
    add_object(create_monitorwatershield_327(5400, 216), 3);
    add_object(create_monitorfireshield_328(5528, 152), 3);
    add_object(create_monitormetalshield_329(5656, 216), 3);
    add_object(create_gimmickhangingidleswitch_1257(6025, 48), 3);
    add_object(create_yellowspringupleft_432(6184, 184), 3);
    add_object(create_laddertop_357(3200, 511), 3);
    add_object(create_laddertop_357(4372, -25), 3);
    add_object(create_laddertop_357(4840, -9), 3);
    add_object(create_objecttaostone_532(4291, 74), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_plstonewall21_2952(2888, 616), 4);
    add_background_object(create_plstonewall21_2952(2888, 488), 4);
    add_background_object(create_plstonewall5_2932(1480, 832), 4);
    add_background_object(create_plstonewall12_2914(1480, 896), 4);
    add_background_object(create_plstonewall18_2968(1608, 912), 4);
    add_background_object(create_plstonewall17_2969(1480, 832), 4);
    add_background_object(create_plstonewall17_2969(1736, 984), 4);
    add_background_object(create_plground11_2950(1480, 816), 4);
    add_background_object(create_plground11_2950(1736, 968), 4);
    add_background_object(create_plground12_2949(1608, 888), 4);
    add_background_object(create_plstonewall4_2937(2352, 872), 4);
    add_background_object(create_plstonewall4_2937(2352, 1000), 4);
    add_background_object(create_plground3_2939(2352, 848), 4);
    add_background_object(create_plstonewall4_2937(2864, 744), 4);
    add_background_object(create_plstonewall4_2937(2864, 616), 4);
    add_background_object(create_plstonewall4_2937(2864, 488), 4);
    add_background_object(create_plstonewall4_2937(2864, 360), 4);
    add_background_object(create_plstonewall12_2914(2376, 360), 4);
    add_background_object(create_plstonewall13_2915(2504, 360), 4);
    add_background_object(create_plstonewall12_2914(2632, 360), 4);
    add_background_object(create_plstonewall13_2915(2760, 360), 4);
    add_background_object(create_plstonewall2_2997(2376, 296), 4);
    add_background_object(create_plstonewall2_2997(2632, 296), 4);
    add_background_object(create_plstonewall7_2947(2656, 240), 4);
    add_background_object(create_plstonewall7_2947(2800, 256), 4);
    add_background_object(create_plstonewall6_2912(2888, 432), 4);
    add_background_object(create_plstonewall7_2947(2904, 672), 4);
    add_background_object(create_plstonewall7_2947(2888, 552), 4);
    add_background_object(create_plstonewall7_2947(2904, 392), 4);
    add_background_object(create_plstonewall3_2926(3016, 616), 4);
    add_background_object(create_plstonewall3_2926(3016, 488), 4);
    add_background_object(create_plstonewall7_2947(2344, 232), 4);
    add_background_object(create_plstonewall7_2947(2496, 240), 4);
    add_background_object(create_plstonewall3_2926(3752, 160), 4);
    add_background_object(create_plstonewall12_2914(3752, 160), 4);
    add_background_object(create_plstonewall13_2915(3880, 160), 4);
    add_background_object(create_plstonewall4_2937(3984, 160), 4);
    add_background_object(create_plstonewall4_2937(3984, 288), 4);
    add_background_object(create_plbrickwall5_2921(5832, 248), 4);
    add_background_object(create_plbrickwall5_2921(5896, 248), 4);
    add_background_object(create_plbrickwall5_2921(5960, 248), 4);
    add_background_object(create_plbrickwall5_2921(6024, 248), 4);
    add_background_object(create_plbrickwall5_2921(6088, 248), 4);
    add_background_object(create_plbrickwall5_2921(6152, 248), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(6024, 279), 5);
    add_object(create_cameralimitbossleft_421(4976, 128), 5);
    add_object(create_cameralimitbossright_422(6247, 136), 5);
    add_object(create_cameralimitbosstop_423(6024, 8), 5);
    add_object(create_cameratriggerboss_424(5024, 48), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_cacteon_floor_running = false;
    loop_cacteon_floor_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_stinger_running = false;
    loop_stinger_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_cacteon_running = false;
    loop_cacteon_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_52, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_52, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_52, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_52, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_52, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_52, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_52, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_52, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_52, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_52, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_52, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_52, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_52, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_52, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_52, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_52, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_52, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_52, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_52, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_52, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_52, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_52, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_52, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_52, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_52, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_52, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_52, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_52, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_52, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_52, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_52, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_52, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_52, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_52, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_52, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_52, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_52, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_52, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_52, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_52, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_52, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_52, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_52, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_52, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_52, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_52, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_52, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_52, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_52, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_52, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_52, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_52, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_52, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_52, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1673_52 = loop_count;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1656_52 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1661_52 = loop_count;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    group_main_engine_level_specific_methods_big_door_1 = true;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_235_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    not_always_2136_46 = loop_count;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_1674_52 = loop_count;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_12001()
{
    // event 1874_53
    {
        if (!(group_main_engine_1)) goto event_1874_53_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage8b_ogg_206, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1874_53_end: ;
}
void Frames::loop_play_music_5_53()
{
    event_func_12001();
}
void Frames::loop_wrapper_sound_hurt1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_53(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_53(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_53(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_53(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_53(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
