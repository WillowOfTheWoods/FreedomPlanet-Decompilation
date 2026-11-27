#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_dig0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_53(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_53(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_53(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_53(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_play_music_6_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_sound_go0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_53(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_sound_explode3_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_53(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_53(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_53(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_12002()
{
    // event 1549_53
    {
        if (!(group_main_engine_1)) goto event_1549_53_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1549_53_end;
        if (!(((Active*)foreach_instance_nest)->alterables->flags.is_on(1))) goto event_1549_53_end;
        if (!((((Active*)foreach_instance_nest)->alterables->values.get(6)) > (0))) goto event_1549_53_end;
        FrameObject * single_instance_1549_53_0; single_instance_1549_53_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemystinger_2891(((Active*)foreach_instance_nest)->x + 0, ((Active*)foreach_instance_nest)->y + 0), ((Active*)foreach_instance_nest)->layer);
            if (single_instance_1549_53_0 == NULL)
                single_instance_1549_53_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1549_53_0))->alterables->values.set(3, 1);
        ((Active*)((Active*)single_instance_1549_53_0))->alterables->values.set(4, (randrange(2)*2-1)*4);
        ((Active*)((Active*)single_instance_1549_53_0))->set_x(((Active*)single_instance_1549_53_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1549_53_0))->set_y(((Active*)single_instance_1549_53_0)->get_y()-30+randrange(61));
        ((Active*)((Active*)foreach_instance_nest))->alterables->values.sub(6, 1);
        ((Active*)((Active*)single_instance_1549_53_0))->alterables->values.set(5, ((Active*)single_instance_1549_53_0)->get_x());
        ((Active*)((Active*)single_instance_1549_53_0))->alterables->values.set(6, ((Active*)single_instance_1549_53_0)->get_y());
        media.play_id(SOUND_SWARM_325, -1, 1);
    }
    event_1549_53_end: ;
}
void Frames::foreach_nest_53()
{
    event_func_12002();
}
void Frames::event_func_12003()
{
    // event 1497_53
    {
        if (!(group_main_engine_1)) goto event_1497_53_end;
        gimmickbreakoutwallleft_3040_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutwallleft_3040_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ball)->get_x()-64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ball)->get_x()))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutwallleft_3040_instances.has_selection()) goto event_1497_53_end;
        ((Active*)((Active*)foreach_instance_ball))->alterables->values.set(2, 64-(((Active*)foreach_instance_ball)->get_x()-((Active*)get_single(gimmickbreakoutwallleft_3040_instances, default_active_instance))->get_x()));
    }
    event_1497_53_end: ;
}
void Frames::event_func_12004()
{
    // event 1498_53
    {
        if (!(group_main_engine_1)) goto event_1498_53_end;
        gimmickbreakoutwallright_3036_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutwallright_3036_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ball)->get_x()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ball)->get_x()))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutwallright_3036_instances.has_selection()) goto event_1498_53_end;
        ((Active*)((Active*)foreach_instance_ball))->alterables->values.set(2, -64+(((Active*)get_single(gimmickbreakoutwallright_3036_instances, default_active_instance))->get_x()-((Active*)foreach_instance_ball)->get_x()));
    }
    event_1498_53_end: ;
}
void Frames::event_func_12005()
{
    // event 1505_53
    {
        if (!(group_main_engine_1)) goto event_1505_53_end;
        if (!((((Active*)foreach_instance_ball)->alterables->values.get(1)) > (0))) goto event_1505_53_end;
        gimmickbreakoutplatform_3037_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutplatform_3037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ball)->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ball)->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_ball)->get_y()+22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_ball)->get_y()))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutplatform_3037_instances.has_selection()) goto event_1505_53_end;
        ((Active*)((Active*)foreach_instance_ball))->alterables->values.set(1, -2);
        for (ObjectIterator it(gimmickbreakoutplatform_3037_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)((Active*)foreach_instance_ball))->force_animation(0);
        ((Active*)((Active*)foreach_instance_ball))->force_animation(7);
    }
    event_1505_53_end: ;
}
void Frames::event_func_12006()
{
    // event 1506_53
    {
        if (!(group_main_engine_1)) goto event_1506_53_end;
        if (!((((Active*)foreach_instance_ball)->alterables->values.get(0)) < (0))) goto event_1506_53_end;
        gimmickbreakoutwallleft_3040_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutwallleft_3040_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ball)->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ball)->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_ball)->get_y()-80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_ball)->get_y()+80))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutwallleft_3040_instances.has_selection()) goto event_1506_53_end;
        ((Active*)((Active*)foreach_instance_ball))->alterables->values.set(0, 0-((Active*)foreach_instance_ball)->alterables->values.get(0));
        FrameObject * single_instance_1506_53_0; single_instance_1506_53_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectrebound_3003(((Active*)foreach_instance_ball)->x + -16, ((Active*)foreach_instance_ball)->y + 0), ((Active*)foreach_instance_ball)->layer);
            if (single_instance_1506_53_0 == NULL)
                single_instance_1506_53_0 = new_obj;
        }
        ((Active*)((Active*)foreach_instance_ball))->force_animation(0);
        ((Active*)((Active*)foreach_instance_ball))->force_animation(7);
    }
    event_1506_53_end: ;
}
void Frames::event_func_12007()
{
    // event 1507_53
    {
        if (!(group_main_engine_1)) goto event_1507_53_end;
        if (!((((Active*)foreach_instance_ball)->alterables->values.get(0)) > (0))) goto event_1507_53_end;
        gimmickbreakoutwallright_3036_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutwallright_3036_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ball)->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ball)->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_ball)->get_y()-80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_ball)->get_y()+80))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutwallright_3036_instances.has_selection()) goto event_1507_53_end;
        ((Active*)((Active*)foreach_instance_ball))->alterables->values.set(0, 0-((Active*)foreach_instance_ball)->alterables->values.get(0));
        FrameObject * single_instance_1507_53_0; single_instance_1507_53_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectrebound2_3004(((Active*)foreach_instance_ball)->x + 16, ((Active*)foreach_instance_ball)->y + 0), ((Active*)foreach_instance_ball)->layer);
            if (single_instance_1507_53_0 == NULL)
                single_instance_1507_53_0 = new_obj;
        }
        ((Active*)((Active*)foreach_instance_ball))->force_animation(0);
        ((Active*)((Active*)foreach_instance_ball))->force_animation(7);
    }
    event_1507_53_end: ;
}
void Frames::foreach_ball_53()
{
    event_func_12003();
    event_func_12004();
    event_func_12005();
    event_func_12006();
    event_func_12007();
}
void Frames::event_func_12008()
{
    // event 1670_53
    {
        if (!(group_main_engine_1)) goto event_1670_53_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1670_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1670_53_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1670_53_end: ;
}
void Frames::col_7_53()
{
    event_func_12008();
}
void Frames::test_collisions_53()
{
    test_collisions(qualifier_7, playerprojectile_320_instances, 2147483648, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_19, enemyobelisklaser_3002_instances, 1073741824, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(qualifier_19, qualifier_19, 536870912, 536870912, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playercharactersensor_383_instances, enemyobelisklaser_3002_instances, 1, 2, (EventFunction)&Frames::col_7_53);
    test_collisions(playersensorrightbig_393_instances, breakableplrock_2987_instances, 1, 1, (EventFunction)&Frames::col_6_16);
    test_collisions(gimmickbowarrow_2979_instances, breakableplrock_2987_instances, 1, 2, (EventFunction)&Frames::col_7_51);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 134217728, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(playersensorleftbig_391_instances, breakableplrock_2987_instances, 1, 4, (EventFunction)&Frames::col_3_16);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playersensorbottombig_397_instances, objectcyclonetop_2963_instances, 1, 1, (EventFunction)&Frames::col_8_50);
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
void Frames::event_func_12009()
{
    // event 1479_53
    {
        if (!(group_main_engine_1)) goto event_1479_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%210);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1479_53_end: ;
}
void Frames::event_func_12010()
{
    // event 1480_53
    {
        if (!(group_main_engine_1)) goto event_1480_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-32)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (60))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1480_53_end;
        if (not_always_1480_53 > loop_count) {
            not_always_1480_53 = loop_count + 2;
            goto event_1480_53_end;
        }
        not_always_1480_53 = loop_count + 2;
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
    }
    event_1480_53_end: ;
}
void Frames::event_func_12011()
{
    // event 1481_53
    {
        if (!(group_main_engine_1)) goto event_1481_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1481_53_end;
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-1, 0));
        }
    }
    event_1481_53_end: ;
}
void Frames::event_func_12012()
{
    // event 1482_53
    {
        if (!(group_main_engine_1)) goto event_1482_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-32)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (150))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1482_53_end;
        if (not_always_1482_53 > loop_count) {
            not_always_1482_53 = loop_count + 2;
            goto event_1482_53_end;
        }
        not_always_1482_53 = loop_count + 2;
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_1482_53_end: ;
}
void Frames::event_func_12013()
{
    // event 1483_53
    {
        if (!(group_main_engine_1)) goto event_1483_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (150))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1483_53_end;
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+1, 14));
        }
    }
    event_1483_53_end: ;
}
void Frames::event_func_12014()
{
    // event 1484_53
    {
        if (!(group_main_engine_1)) goto event_1484_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (14))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1484_53_end;
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1484_53_end: ;
}
void Frames::event_func_12015()
{
    // event 1485_53
    {
        if (!(group_main_engine_1)) goto event_1485_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1485_53_end;
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1485_53_end: ;
}
void Frames::event_func_12016()
{
    // event 1486_53
    {
        if (!(group_main_engine_1)) goto event_1486_53_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (14))) { it.deselect(); continue; }
        }
        if (!objectvanishingblock_3034_instances.has_selection()) goto event_1486_53_end;
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1486_53_end: ;
}
void Frames::event_func_12017()
{
    // event 1488_53
    {
        if (!(group_main_engine_1)) goto event_1488_53_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*120);
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*-120);
        ((Active*)get_instance(gimmickspinballchain_3030_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain_3030_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain_3030_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain_3030_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain2_3031_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain2_3031_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain2_3031_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain2_3031_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain3_3032_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain3_3032_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain3_3032_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain3_3032_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinballchain4_3033_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain4_3033_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickspinballchain4_3033_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinballchain4_3033_instances))->alterables->values.get(0)*-1);
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.set(3, (((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)+2)%math_helper%360);
    }
    event_1488_53_end: ;
}
void Frames::event_func_12018()
{
    // event 1489_53
    {
        if (!(group_main_engine_1)) goto event_1489_53_end;
        gimmickspinball_1175_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickspinball_1175_instances, player_389_instances)) goto event_1489_53_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1489_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1489_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1489_53_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1489_53_end: ;
}
void Frames::event_func_12019()
{
    // event 1490_53
    {
        if (!(group_main_engine_1)) goto event_1490_53_end;
        gimmickbreakoutplatform_3037_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutplatform_3037_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        gimmickbreakoutplatformmask_3038_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutplatformmask_3038_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(gimmickbreakoutplatform_3037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->alterables->values.get(0)*(1-get_min(1, get_abs(((Active*)get_instance(gimmickbreakoutball_3039_instances, it.current_index, default_active_instance))->alterables->values.get(2)))));
        }
    }
    event_1490_53_end: ;
}
void Frames::event_func_12020()
{
    // event 1491_53
    {
        if (!(group_main_engine_1)) goto event_1491_53_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1491_53_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickbreakoutplatform_3037_instances)) goto event_1491_53_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(gimmickbreakoutplatform_3037_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1491_53_end: ;
}
void Frames::event_func_12021()
{
    // event 1492_53
    {
        if (!(group_main_engine_1)) goto event_1492_53_end;
        gimmickbreakoutplatformmask_3038_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickbreakoutplatformmask_3038_instances, player_389_instances)) goto event_1492_53_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1492_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1492_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1492_53_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1492_53_end: ;
}
void Frames::event_func_12022()
{
    // event 1493_53
    {
        if (!(group_main_engine_1)) goto event_1493_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickbreakoutball_3039_instances, player_389_instances)) goto event_1493_53_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1493_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1493_53_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1493_53_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1493_53_end: ;
}
void Frames::event_func_12023()
{
    // event 1494_53
    {
        if (!(group_main_engine_1)) goto event_1494_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-70)) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutball_3039_instances.has_selection()) goto event_1494_53_end;
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1494_53_end: ;
}
void Frames::event_func_12024()
{
    // event 1495_53
    {
        if (!(group_main_engine_1)) goto event_1495_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-180)) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutball_3039_instances.has_selection()) goto event_1495_53_end;
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1495_53_end: ;
}
void Frames::event_func_12025()
{
    // event 1496_53
    {
        if (!(group_main_engine_1)) goto event_1496_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        {
            SavedSelection extra_gimmickbreakoutball_3039_instances(gimmickbreakoutball_3039_instances);
            for (SavedIterator it(extra_gimmickbreakoutball_3039_instances); !it.end(); ++it) {
                foreach_instance_ball = ((Active*)*it);
                foreach_ball_53();
            }
        }
    }
    event_1496_53_end: ;
}
void Frames::event_func_12026()
{
    // event 1499_53
    {
        if (!(group_main_engine_1)) goto event_1499_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(2);
        }
    }
    event_1499_53_end: ;
}
void Frames::event_func_12027()
{
    // event 1500_53
    {
        if (!(group_main_engine_1)) goto event_1500_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutball_3039_instances.has_selection()) goto event_1500_53_end;
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -2);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1500_53_end: ;
}
void Frames::event_func_12028()
{
    // event 1501_53
    {
        if (!(group_main_engine_1)) goto event_1501_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(1);
        }
    }
    event_1501_53_end: ;
}
void Frames::event_func_12029()
{
    // event 1502_53
    {
        if (!(group_main_engine_1)) goto event_1502_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutball_3039_instances.has_selection()) goto event_1502_53_end;
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1502_53_end: ;
}
void Frames::event_func_12030()
{
    // event 1503_53
    {
        if (!(group_main_engine_1)) goto event_1503_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(0);
        }
        effectrebound_3003_instances.clear_selection();
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->alterables->values.get(0));
        }
        effectrebound2_3004_instances.clear_selection();
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->alterables->values.get(0));
        }
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
    }
    event_1503_53_end: ;
}
void Frames::event_func_12031()
{
    // event 1504_53
    {
        if (!(group_main_engine_1)) goto event_1504_53_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbreakoutball_3039_instances.has_selection()) goto event_1504_53_end;
        gimmickbreakoutplatform_3037_instances.clear_selection();
        if (!check_overlap(gimmickbreakoutball_3039_instances, gimmickbreakoutplatform_3037_instances)) goto event_1504_53_end;
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -2);
        }
        for (ObjectIterator it(gimmickbreakoutplatform_3037_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(gimmickbreakoutball_3039_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1504_53_end: ;
}
void Frames::event_func_12032()
{
    // event 1508_53
    {
        if (!(group_main_engine_1)) goto event_1508_53_end;
        effectrebound_3003_instances.clear_selection();
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (255))) { it.deselect(); continue; }
        }
        if (!effectrebound_3003_instances.has_selection()) goto event_1508_53_end;
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1508_53_end: ;
}
void Frames::event_func_12033()
{
    // event 1509_53
    {
        if (!(group_main_engine_1)) goto event_1509_53_end;
        effectrebound2_3004_instances.clear_selection();
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (255))) { it.deselect(); continue; }
        }
        if (!effectrebound2_3004_instances.has_selection()) goto event_1509_53_end;
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1509_53_end: ;
}
void Frames::event_func_12034()
{
    // event 1548_53
    {
        if (!(group_main_engine_1)) goto event_1548_53_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1548_53_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1548_53_end;
        {
            SavedSelection extra_enemystingernest_2961_instances(enemystingernest_2961_instances);
            for (SavedIterator it(extra_enemystingernest_2961_instances); !it.end(); ++it) {
                foreach_instance_nest = ((Active*)*it);
                foreach_nest_53();
            }
        }
    }
    event_1548_53_end: ;
}
void Frames::event_func_12035()
{
    // event 1556_53
    {
        if (!(group_main_engine_1)) goto event_1556_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1556_53_end;
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(3, randrange(360));
            ((Active*)*it)->alterables->values.set(7, randrange(50));
        }
    }
    event_1556_53_end: ;
}
void Frames::event_func_12036()
{
    // event 1557_53
    {
        if (!(group_main_engine_1)) goto event_1557_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1557_53_end;
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(5, cos_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(6, sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(4)*-1);
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
    }
    event_1557_53_end: ;
}
void Frames::event_func_12037()
{
    // event 1558_53
    {
        if (!(group_main_engine_1)) goto event_1558_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1558_53_end;
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 4);
        }
    }
    event_1558_53_end: ;
}
void Frames::event_func_12038()
{
    // event 1559_53
    {
        if (!(group_main_engine_1)) goto event_1559_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1559_53_end;
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, -4);
        }
    }
    event_1559_53_end: ;
}
void Frames::event_func_12039()
{
    // event 1560_53
    {
        if (!(group_main_engine_1)) goto event_1560_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (50))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1560_53_end;
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0-randrange(50));
            ((Active*)*it)->alterables->flags.toggle(2);
        }
    }
    event_1560_53_end: ;
}
void Frames::event_func_12040()
{
    // event 1561_53
    {
        if (!(group_main_engine_1)) goto event_1561_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (180))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1561_53_end;
        FrameObject * single_instance_1561_53_0; single_instance_1561_53_0 = pick_random(enemywallstinger_3006_instances);
        if (single_instance_1561_53_0 == NULL) goto event_1561_53_end;
        ((Active*)((Active*)single_instance_1561_53_0))->destroy();
        FrameObject * single_instance_1561_53_1; single_instance_1561_53_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemystinger_2891(((Active*)single_instance_1561_53_0)->x + 0, ((Active*)single_instance_1561_53_0)->y + 0), ((Active*)single_instance_1561_53_0)->layer);
            if (single_instance_1561_53_1 == NULL)
                single_instance_1561_53_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1561_53_1))->alterables->values.set(6, ((Active*)single_instance_1561_53_1)->get_y()-100);
        ((Active*)((Active*)single_instance_1561_53_1))->alterables->values.set(3, 4);
        ((Active*)((Active*)single_instance_1561_53_1))->alterables->values.set(7, 10);
        FrameObject * single_instance_1561_53_2; single_instance_1561_53_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemywallstingerspawn_3005(((Active*)single_instance_1561_53_0)->x + 0, ((Active*)single_instance_1561_53_0)->y + 0), ((Active*)single_instance_1561_53_0)->layer);
            if (single_instance_1561_53_2 == NULL)
                single_instance_1561_53_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1561_53_2))->set_x(((Active*)single_instance_1561_53_0)->alterables->values.get(8));
        ((Active*)((Active*)single_instance_1561_53_2))->set_y(((Active*)single_instance_1561_53_0)->alterables->values.get(9));
    }
    event_1561_53_end: ;
}
void Frames::event_func_12041()
{
    // event 1562_53
    {
        if (!(group_main_engine_1)) goto event_1562_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (180))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1562_53_end;
        FrameObject * single_instance_1562_53_0; single_instance_1562_53_0 = pick_random(enemywallstinger_3006_instances);
        if (single_instance_1562_53_0 == NULL) goto event_1562_53_end;
        ((Active*)((Active*)single_instance_1562_53_0))->destroy();
        FrameObject * single_instance_1562_53_1; single_instance_1562_53_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemystinger_2891(((Active*)single_instance_1562_53_0)->x + 0, ((Active*)single_instance_1562_53_0)->y + 0), ((Active*)single_instance_1562_53_0)->layer);
            if (single_instance_1562_53_1 == NULL)
                single_instance_1562_53_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1562_53_1))->alterables->values.set(6, ((Active*)single_instance_1562_53_1)->get_y());
        FrameObject * single_instance_1562_53_2; single_instance_1562_53_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemywallstingerspawn_3005(((Active*)single_instance_1562_53_0)->x + 0, ((Active*)single_instance_1562_53_0)->y + 0), ((Active*)single_instance_1562_53_0)->layer);
            if (single_instance_1562_53_2 == NULL)
                single_instance_1562_53_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1562_53_2))->set_x(((Active*)single_instance_1562_53_0)->alterables->values.get(8));
        ((Active*)((Active*)single_instance_1562_53_2))->set_y(((Active*)single_instance_1562_53_0)->alterables->values.get(9));
    }
    event_1562_53_end: ;
}
void Frames::event_func_12042()
{
    // event 1563_53
    {
        if (!(group_main_engine_1)) goto event_1563_53_end;
        enemywallstinger_3006_instances.clear_selection();
        for (ObjectIterator it(enemywallstinger_3006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemywallstinger_3006_instances.has_selection()) goto event_1563_53_end;
        FrameObject * single_instance_1563_53_0; single_instance_1563_53_0 = pick_random(enemywallstinger_3006_instances);
        if (single_instance_1563_53_0 == NULL) goto event_1563_53_end;
        ((Active*)((Active*)single_instance_1563_53_0))->destroy();
        FrameObject * single_instance_1563_53_1; single_instance_1563_53_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemystinger_2891(((Active*)single_instance_1563_53_0)->x + 0, ((Active*)single_instance_1563_53_0)->y + 0), ((Active*)single_instance_1563_53_0)->layer);
            if (single_instance_1563_53_1 == NULL)
                single_instance_1563_53_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1563_53_1))->alterables->flags.enable(6);
        ((Active*)((Active*)single_instance_1563_53_1))->alterables->values.set(23, ((Active*)single_instance_1563_53_0)->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1563_53_1))->alterables->values.set(24, ((Active*)single_instance_1563_53_0)->alterables->values.get(24));
        ((Active*)((Active*)single_instance_1563_53_1))->alterables->values.set(0, 0);
        FrameObject * single_instance_1563_53_2; single_instance_1563_53_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemywallstingerspawn_3005(((Active*)single_instance_1563_53_0)->x + 0, ((Active*)single_instance_1563_53_0)->y + 0), ((Active*)single_instance_1563_53_0)->layer);
            if (single_instance_1563_53_2 == NULL)
                single_instance_1563_53_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1563_53_2))->set_x(((Active*)single_instance_1563_53_0)->alterables->values.get(8));
        ((Active*)((Active*)single_instance_1563_53_2))->set_y(((Active*)single_instance_1563_53_0)->alterables->values.get(9));
    }
    event_1563_53_end: ;
}
void Frames::event_func_12043()
{
    // event 1564_53
    {
        if (!(group_main_engine_1)) goto event_1564_53_end;
        enemywallstingerspawn_3005_instances.clear_selection();
        for (ObjectIterator it(enemywallstingerspawn_3005_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-200))) { it.deselect(); continue; }
        }
        if (!enemywallstingerspawn_3005_instances.has_selection()) goto event_1564_53_end;
        for (ObjectIterator it(enemywallstingerspawn_3005_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1564_53_0; single_instance_1564_53_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemywallstingerspawn_3005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemywallstinger_3006(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1564_53_0 == NULL)
                    single_instance_1564_53_0 = new_obj;
            }
        }
    }
    event_1564_53_end: ;
}
void Frames::event_func_12044()
{
    // event 1656_53
    {
        if (!(group_main_engine_1)) goto event_1656_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1656_53_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemyobelisk_3035_instances, enemylimiter_350_instances)) goto event_1656_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0-((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1656_53_end: ;
}
void Frames::event_func_12045()
{
    // event 1657_53
    {
        if (!(group_main_engine_1)) goto event_1657_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1657_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1657_53_end: ;
}
void Frames::event_func_12046()
{
    // event 1658_53
    {
        if (!(group_main_engine_1)) goto event_1658_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1658_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1658_53_end: ;
}
void Frames::event_func_12047()
{
    // event 1659_53
    {
        if (!(group_main_engine_1)) goto event_1659_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1659_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1659_53_end: ;
}
void Frames::event_func_12048()
{
    // event 1660_53
    {
        if (!(group_main_engine_1)) goto event_1660_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1660_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1660_53_end: ;
}
void Frames::event_func_12049()
{
    // event 1661_53
    {
        if (!(group_main_engine_1)) goto event_1661_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1661_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1661_53_end: ;
}
void Frames::event_func_12050()
{
    // event 1662_53
    {
        if (!(group_main_engine_1)) goto event_1662_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1662_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1662_53_end: ;
}
void Frames::event_func_12051()
{
    // event 1663_53
    {
        if (!(group_main_engine_1)) goto event_1663_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1663_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1663_53_end: ;
}
void Frames::event_func_12052()
{
    // event 1664_53
    {
        if (!(group_main_engine_1)) goto event_1664_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1664_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1664_53_end: ;
}
void Frames::event_func_12053()
{
    // event 1665_53
    {
        if (!(group_main_engine_1)) goto event_1665_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1665_53_end;
        FrameObject * single_instance_1665_53_0; single_instance_1665_53_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyobelisk_3035_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyobelisklaser_3002(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1665_53_0 == NULL)
                    single_instance_1665_53_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_BLASTER_E_329, -1, 1);
    }
    event_1665_53_end: ;
}
void Frames::event_func_12054()
{
    // event 1666_53
    {
        if (!(group_main_engine_1)) goto event_1666_53_end;
        enemyobelisk_3035_instances.clear_selection();
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyobelisk_3035_instances.has_selection()) goto event_1666_53_end;
        for (ObjectIterator it(enemyobelisk_3035_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(4, -80);
        }
    }
    event_1666_53_end: ;
}
