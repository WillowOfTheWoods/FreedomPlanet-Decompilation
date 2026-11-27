#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_explode5_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_40(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_40(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_40(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_40(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_play_music_6_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_go0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_40(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_explode3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_9651()
{
    // event 1651_40
    {
        if (!(group_main_engine_1)) goto event_1651_40_end;
        if (!((((Active*)foreach_instance_bbl)->alterables->values.get(9)) != (1))) goto event_1651_40_end;
        FrameObject * fixed_test_1651_40_0 = get_object_from_fixed(((Active*)foreach_instance_bbl)->alterables->values.get(8));
        if (fixed_test_1651_40_0 == NULL) goto event_1651_40_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (!((*it) == fixed_test_1651_40_0)) it.deselect();
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto event_1651_40_end;
        ((Active*)((Active*)foreach_instance_bbl))->set_x(((Active*)get_single(enemybubblorbiter_2443_instances, default_active_instance))->get_action_x()+sin_deg(((Active*)foreach_instance_bbl)->alterables->values.get(6))*(60+sin_deg(((Active*)get_single(enemybubblorbiter_2443_instances, default_active_instance))->alterables->values.get(3))*30));
        ((Active*)((Active*)foreach_instance_bbl))->set_y(((Active*)get_single(enemybubblorbiter_2443_instances, default_active_instance))->alterables->values.get(4)+14);
        ((Active*)((Active*)foreach_instance_bbl))->alterables->values.set(6, (((Active*)foreach_instance_bbl)->alterables->values.get(6)+3)%math_helper%360);
        ((Active*)((Active*)foreach_instance_bbl))->set_scale(0.8+cos_deg(((Active*)foreach_instance_bbl)->alterables->values.get(6))*0.2);
        ((Active*)((Active*)foreach_instance_bbl))->alterables->values.set(9, ((Active*)get_single(enemybubblorbiter_2443_instances, default_active_instance))->alterables->flags.get(6));
    }
    event_1651_40_end: ;
}
void Frames::foreach_bbl_40()
{
    event_func_9651();
}
void Frames::event_func_9652()
{
    // event 1790_40
    {
        if (!(group_main_engine_1)) goto event_1790_40_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1790_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1790_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1790_40_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 0-((Active*)col_instance_2)->alterables->values.get(2));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, 0-((Active*)col_instance_2)->alterables->values.get(3));
    }
    event_1790_40_end: ;
}
void Frames::col_3_40()
{
    event_func_9652();
}
void Frames::event_func_9653()
{
    // event 1658_40
    {
        if (!(group_main_engine_1)) goto event_1658_40_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1658_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1658_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(4))) goto event_1658_40_end;
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1658_40_end: ;
}
void Frames::col_7_40()
{
    event_func_9653();
}
void Frames::event_func_9654()
{
    // event 1659_40
    {
        if (!(group_main_engine_1)) goto event_1659_40_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1659_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1659_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(4))) goto event_1659_40_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1659_40_end: ;
}
void Frames::col_10_40()
{
    event_func_9654();
}
void Frames::event_func_9655()
{
    // event 1484_40
    {
        if (!(group_main_engine_1)) goto event_1484_40_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, get_max(((Active*)col_instance_2)->alterables->values.get(5), 2));
    }
    event_1484_40_end: ;
}
void Frames::col_12_40()
{
    event_func_9655();
}
void Frames::event_func_9656()
{
    // event 1472_40
    {
        if (!(group_main_engine_1)) goto event_1472_40_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (0))) goto event_1472_40_end;
        if (!check_not_overlap(((Active*)col_instance_2), gimmickbubblespringspawner_2442_instances)) goto event_1472_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (99))) goto event_1472_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1472_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1472_40_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 99);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        ((Active*)((Active*)col_instance_2))->move_back();
    }
    event_1472_40_end: ;
}
void Frames::col_16_40()
{
    event_func_9656();
}
void Frames::event_func_9657()
{
    // event 1657_40
    {
        if (!(group_main_engine_1)) goto event_1657_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(4))) goto event_1657_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1657_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1657_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1657_40_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 60);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 128, 255));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 128, 255));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
    }
    event_1657_40_end: ;
}
void Frames::col_22_40()
{
    event_func_9657();
}
void Frames::event_func_9658()
{
    // event 1784_40
    {
        if (!(group_main_engine_1)) goto event_1784_40_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1784_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1784_40_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1784_40_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 0-((Active*)col_instance_2)->alterables->values.get(2));
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
    }
    event_1784_40_end: ;
}
void Frames::col_25_40()
{
    event_func_9658();
}
void Frames::event_func_9659()
{
    // event 1791_40
    {
        if (!(group_main_engine_1)) goto event_1791_40_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (((Active*)get_instance(bosshovercop_2332_instances))->get_action_y()))) goto event_1791_40_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1791_40_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1791_40_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_1))->set_visible(false);
        FrameObject * single_instance_1791_40_0; single_instance_1791_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectstickyice_2431(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1791_40_0 == NULL)
                single_instance_1791_40_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1791_40_0))->set_angle(-30+randrange(61), 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.add(4, 1);
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1791_40_end: ;
}
void Frames::col_33_40()
{
    event_func_9659();
}
void Frames::test_collisions_40()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playerreflect_447_instances, bossicecrystal_2430_instances, 2, 1, (EventFunction)&Frames::col_3_40);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(shieldwater_318_instances, badnikgolemshot_1197_instances, 1, 1, (EventFunction)&Frames::col_7_40);
    test_collisions(qualifier_20, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(shieldwater_318_instances, enemybullfragbubble_2324_instances, 2, 1, (EventFunction)&Frames::col_7_39);
    test_collisions(playerreflect_447_instances, badnikgolemshot_1197_instances, 8, 2, (EventFunction)&Frames::col_10_40);
    test_collisions(playercharactersensor_383_instances, enemybullfragbubble_2324_instances, 1, 2, (EventFunction)&Frames::col_5_39);
    test_collisions(layerchangeto0_405_instances, gimmickbubblespringback2_2428_instances, 1, 1, (EventFunction)&Frames::col_12_40);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemysharktorpedo2_2328_instances, 2, 1, (EventFunction)&Frames::col_1_39);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(player_389_instances, gimmickbubblespringback2_2428_instances, 1, 2, (EventFunction)&Frames::col_16_40);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 4, 1, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 8, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(playercharactersensor_383_instances, badnikgolemshot_1197_instances, 16, 4, (EventFunction)&Frames::col_22_40);
    test_collisions(playerreflect_447_instances, enemybullfragbubble_2324_instances, 16, 4, (EventFunction)&Frames::col_10_39);
    test_collisions(enemyplantturretus_2365_instances, jcslidingplatform_2414_instances, 1, 1, (EventFunction)&Frames::col_12_39);
    test_collisions(playerreflect_447_instances, bossicemissile_2433_instances, 32, 1, (EventFunction)&Frames::col_25_40);
    test_collisions(qualifier_7, enemypellet_863_instances, 4194304, 2, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
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
    for (it1 = effectfallingleaf_2323_instances.begin(); it1 != effectfallingleaf_2323_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_24_39();
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
    for (it1 = bossicecrystal_2430_instances.begin(); it1 != bossicecrystal_2430_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_40();
    }
}
void Frames::event_func_9660()
{
    // event 534_40
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_534_40_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_534_40_end;
        FrameObject * single_instance_534_40_0; single_instance_534_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_534_40_0 == NULL)
                    single_instance_534_40_0 = new_obj;
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
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_534_40_end: ;
}
void Frames::event_func_9661()
{
    // event 551_40
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_551_40_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_551_40_end;
        FrameObject * single_instance_551_40_0; single_instance_551_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_551_40_0 == NULL)
                    single_instance_551_40_0 = new_obj;
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
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_551_40_end: ;
}
void Frames::event_func_9662()
{
    // event 685_40
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_685_40_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_685_40_end;
        FrameObject * single_instance_685_40_0; single_instance_685_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_685_40_0 == NULL)
                    single_instance_685_40_0 = new_obj;
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
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_685_40_end: ;
}
void Frames::event_func_9663()
{
    // event 1391_40
    {
        if (!(group_main_engine_1)) goto event_1391_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1391_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1391_40_end;
        player_389_instances.clear_selection();
        levelslipperysurface_2450_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelslipperysurface_2450_instances)) goto event_1391_40_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12), 3));
        }
    }
    event_1391_40_end: ;
}
void Frames::event_func_9664()
{
    // event 1392_40
    {
        if (!(group_main_engine_1)) goto event_1392_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1392_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1392_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (47))) goto event_1392_40_end;
        player_389_instances.clear_selection();
        levelslipperysurface_2450_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelslipperysurface_2450_instances)) goto event_1392_40_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
    }
    event_1392_40_end: ;
}
void Frames::event_func_9665()
{
    // event 1404_40
    {
        if (!(group_main_engine_1)) goto event_1404_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1404_40_end;
        if (not_always_1404_40 > loop_count) {
            not_always_1404_40 = loop_count + 2;
            goto event_1404_40_end;
        }
        not_always_1404_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1404_40_end: ;
}
void Frames::event_func_9666()
{
    // event 1406_40
    {
        if (!(group_main_engine_1)) goto event_1406_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_40_end;
        if (not_always_1406_40 > loop_count) {
            not_always_1406_40 = loop_count + 2;
            goto event_1406_40_end;
        }
        not_always_1406_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1406_40_end: ;
}
void Frames::event_func_9667()
{
    // event 1407_40
    {
        if (!(group_main_engine_1)) goto event_1407_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_40_end;
        if (not_always_1407_40 > loop_count) {
            not_always_1407_40 = loop_count + 2;
            goto event_1407_40_end;
        }
        not_always_1407_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1407_40_end: ;
}
void Frames::event_func_9668()
{
    // event 1409_40
    {
        if (!(group_main_engine_1)) goto event_1409_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1409_40_end;
        if (not_always_1409_40 > loop_count) {
            not_always_1409_40 = loop_count + 2;
            goto event_1409_40_end;
        }
        not_always_1409_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1409_40_end: ;
}
void Frames::event_func_9669()
{
    // event 1410_40
    {
        if (!(group_main_engine_1)) goto event_1410_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1410_40_end;
        if (not_always_1410_40 > loop_count) {
            not_always_1410_40 = loop_count + 2;
            goto event_1410_40_end;
        }
        not_always_1410_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1410_40_end: ;
}
void Frames::event_func_9670()
{
    // event 1411_40
    {
        if (!(group_main_engine_1)) goto event_1411_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1411_40_end;
        if (not_always_1411_40 > loop_count) {
            not_always_1411_40 = loop_count + 2;
            goto event_1411_40_end;
        }
        not_always_1411_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1411_40_end: ;
}
void Frames::event_func_9671()
{
    // event 1412_40
    {
        if (!(group_main_engine_1)) goto event_1412_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1412_40_end;
        if (not_always_1412_40 > loop_count) {
            not_always_1412_40 = loop_count + 2;
            goto event_1412_40_end;
        }
        not_always_1412_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1412_40_end: ;
}
void Frames::event_func_9672()
{
    // event 1414_40
    {
        if (!(group_main_engine_1)) goto event_1414_40_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1414_40_end;
        if (not_always_1414_40 > loop_count) {
            not_always_1414_40 = loop_count + 2;
            goto event_1414_40_end;
        }
        not_always_1414_40 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1414_40_end: ;
}
void Frames::event_func_9673()
{
    // event 1443_40
    {
        if (!(group_main_engine_1)) goto event_1443_40_end;
        jcwaterstream1_2416_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream1_2416_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream2_2413_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream2_2413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream3_2410_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream3_2410_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream4_2409_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream4_2409_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream5_2412_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream5_2412_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream6_2411_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream6_2411_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream7_2362_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream7_2362_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        jcwaterstream8_2361_instances.clear_selection();
        for (ObjectIterator it(jcwaterstream8_2361_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
    }
    event_1443_40_end: ;
}
void Frames::event_func_9674()
{
    // event 1449_40
    {
        if (!(group_main_engine_1)) goto event_1449_40_end;
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!gimmickseedspawner_2422_instances.has_selection()) goto event_1449_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (97))) goto event_1449_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1449_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1449_40_end;
        FrameObject * single_instance_1449_40_0; single_instance_1449_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickflyingseed_2327(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1449_40_0 == NULL)
                    single_instance_1449_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1449_40_0))->move_back();
        ((Active*)((Active*)single_instance_1449_40_0))->alterables->values.set(0, ((Active*)single_instance_1449_40_0)->get_x());
        ((Active*)((Active*)single_instance_1449_40_0))->alterables->values.set(1, ((Active*)single_instance_1449_40_0)->get_y());
        ((Active*)((Active*)single_instance_1449_40_0))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.7);
        ((Active*)((Active*)single_instance_1449_40_0))->alterables->values.sub(3, 1);
        ((Active*)((Active*)single_instance_1449_40_0))->alterables->values.set(5, 2);
    }
    event_1449_40_end: ;
}
void Frames::event_func_9675()
{
    // event 1450_40
    {
        if (!(group_main_engine_1)) goto event_1450_40_end;
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!gimmickseedspawner_2422_instances.has_selection()) goto event_1450_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (97))) goto event_1450_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1450_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1450_40_end;
        FrameObject * single_instance_1450_40_0; single_instance_1450_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickflyingseed_2327(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1450_40_0 == NULL)
                    single_instance_1450_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1450_40_0))->move_back();
        ((Active*)((Active*)single_instance_1450_40_0))->alterables->values.set(0, ((Active*)single_instance_1450_40_0)->get_x());
        ((Active*)((Active*)single_instance_1450_40_0))->alterables->values.set(1, ((Active*)single_instance_1450_40_0)->get_y());
        ((Active*)((Active*)single_instance_1450_40_0))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.85);
        ((Active*)((Active*)single_instance_1450_40_0))->alterables->values.sub(3, 0.5);
        ((Active*)((Active*)single_instance_1450_40_0))->alterables->values.set(5, -2);
    }
    event_1450_40_end: ;
}
void Frames::event_func_9676()
{
    // event 1451_40
    {
        if (!(group_main_engine_1)) goto event_1451_40_end;
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!gimmickseedspawner_2422_instances.has_selection()) goto event_1451_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (97))) goto event_1451_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1451_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1451_40_end;
        FrameObject * single_instance_1451_40_0; single_instance_1451_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickflyingseed_2327(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1451_40_0 == NULL)
                    single_instance_1451_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1451_40_0))->move_back();
        ((Active*)((Active*)single_instance_1451_40_0))->alterables->values.set(0, ((Active*)single_instance_1451_40_0)->get_x());
        ((Active*)((Active*)single_instance_1451_40_0))->alterables->values.set(1, ((Active*)single_instance_1451_40_0)->get_y());
        ((Active*)((Active*)single_instance_1451_40_0))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.9);
        ((Active*)((Active*)single_instance_1451_40_0))->alterables->values.sub(3, 1.5);
        ((Active*)((Active*)single_instance_1451_40_0))->alterables->values.set(5, -2);
    }
    event_1451_40_end: ;
}
void Frames::event_func_9677()
{
    // event 1452_40
    {
        if (!(group_main_engine_1)) goto event_1452_40_end;
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!gimmickseedspawner_2422_instances.has_selection()) goto event_1452_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (97))) goto event_1452_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1452_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1452_40_end;
        FrameObject * single_instance_1452_40_0; single_instance_1452_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickflyingseed_2327(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1452_40_0 == NULL)
                    single_instance_1452_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1452_40_0))->move_back();
        ((Active*)((Active*)single_instance_1452_40_0))->alterables->values.set(0, ((Active*)single_instance_1452_40_0)->get_x());
        ((Active*)((Active*)single_instance_1452_40_0))->alterables->values.set(1, ((Active*)single_instance_1452_40_0)->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 97);
        ((Active*)((Active*)single_instance_1452_40_0))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1452_40_0))->alterables->flags.enable(1);
    }
    event_1452_40_end: ;
}
void Frames::event_func_9678()
{
    // event 1465_40
    {
        if (!(group_main_engine_1)) goto event_1465_40_end;
        gimmickbubblespringspawner_2442_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringspawner_2442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1465_40_end: ;
}
void Frames::event_func_9679()
{
    // event 1466_40
    {
        if (!(group_main_engine_1)) goto event_1466_40_end;
        gimmickbubblespringspawner_2442_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringspawner_2442_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (100))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringspawner_2442_instances.has_selection()) goto event_1466_40_end;
        for (ObjectIterator it(gimmickbubblespringspawner_2442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1466_40_0; single_instance_1466_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbubblespringspawner_2442_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbubblespringback2_2428(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1466_40_0 == NULL)
                    single_instance_1466_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1466_40_1; single_instance_1466_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbubblespringspawner_2442_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbubblespringfront2_2429(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1466_40_1 == NULL)
                    single_instance_1466_40_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1466_40_0))->move_back();
        ((Active*)((Active*)single_instance_1466_40_1))->move_back();
    }
    event_1466_40_end: ;
}
void Frames::event_func_9680()
{
    // event 1467_40
    {
        if (!(group_main_engine_1)) goto event_1467_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1467_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
        }
    }
    event_1467_40_end: ;
}
void Frames::event_func_9681()
{
    // event 1468_40
    {
        if (!(group_main_engine_1)) goto event_1468_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1468_40_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1468_40_end;
        FrameObject * single_instance_1468_40_0; single_instance_1468_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbubblespringback2_2428_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1468_40_0 == NULL)
                    single_instance_1468_40_0 = new_obj;
            }
        }
    }
    event_1468_40_end: ;
}
void Frames::event_func_9682()
{
    // event 1469_40
    {
        if (!(group_main_engine_1)) goto event_1469_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1469_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1469_40_end: ;
}
void Frames::event_func_9683()
{
    // event 1470_40
    {
        if (!(group_main_engine_1)) goto event_1470_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (-50))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1470_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1470_40_end: ;
}
void Frames::event_func_9684()
{
    // event 1471_40
    {
        if (!(group_main_engine_1)) goto event_1471_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (20))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1471_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(6, -60-randrange(60));
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1471_40_end: ;
}
void Frames::event_func_9685()
{
    // event 1473_40
    {
        if (!(group_main_engine_1)) goto event_1473_40_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1473_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_1473_40_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1473_40_end: ;
}
void Frames::event_func_9686()
{
    // event 1474_40
    {
        if (!(group_main_engine_1)) goto event_1474_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1474_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1474_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1474_40_0: ;
        }
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()+24);
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.2, 15));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
        gimmickleafplatform1_2359_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform1_2359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        gimmickleafplatform2_2360_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform2_2360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->alterables->values.get(3))*4);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->alterables->values.get(3))*4);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3))*4);
        }
    }
    event_1474_40_end: ;
}
void Frames::event_func_9687()
{
    // event 1475_40
    {
        if (!(group_main_engine_1)) goto event_1475_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1475_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1475_40_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 5);
    }
    event_1475_40_end: ;
}
void Frames::event_func_9688()
{
    // event 1476_40
    {
        if (!(group_main_engine_1)) goto event_1476_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1476_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1476_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (5))) goto event_1476_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1476_40_end;
        qualifier_20.clear_selection();
        if (!check_overlap(gimmickbubblespringback2_2428_instances, qualifier_20)) goto event_1476_40_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1476_40_end;
        FrameObject * single_instance_1476_40_0; single_instance_1476_40_0 = pick_random(qualifier_20);
        if (single_instance_1476_40_0 == NULL) goto event_1476_40_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1476_40_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1476_40_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1476_40_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1476_40_0))->alterables->values.sub(0, 1);
        {
            ((Active*)single_instance_1476_40_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1476_40_end: ;
}
void Frames::event_func_9689()
{
    // event 1477_40
    {
        if (!(group_main_engine_1)) goto event_1477_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1477_40_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1477_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, -8));
        }
    }
    event_1477_40_end: ;
}
void Frames::event_func_9690()
{
    // event 1478_40
    {
        if (!(group_main_engine_1)) goto event_1478_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1478_40_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1478_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 8));
        }
    }
    event_1478_40_end: ;
}
void Frames::event_func_9691()
{
    // event 1479_40
    {
        if (!(group_main_engine_1)) goto event_1479_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1479_40_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1479_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1479_40_end;
        media.play_id(SOUND_BUBBLEBOUNCE_2_72, -1, 1);
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0-((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1479_40_end: ;
}
void Frames::event_func_9692()
{
    // event 1480_40
    bool or_result_1480_40 = false;
    bool or_temp_result_1480_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1480_40_0_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto or_event_1480_40_0_end;
        playersensorbottombig_397_instances.clear_selection();
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1480_40_0_end;
        or_result_1480_40 = true;
        or_temp_result_1480_40_0 = true;
    }
    or_event_1480_40_0_end: ;
    gimmickbubblespringback2_2428_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_1480_40_0) {
        gimmickbubblespringback2_2428_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1480_40
    bool or_temp_result_1480_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1480_40_1_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto or_event_1480_40_1_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_7)) goto or_event_1480_40_1_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto or_event_1480_40_1_end;
        or_result_1480_40 = true;
        or_temp_result_1480_40_1 = true;
    }
    or_event_1480_40_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1480_40_1) {
        gimmickbubblespringback2_2428_instances.save_selection();
        qualifier_7.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1480_40
    bool or_temp_result_1480_40_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1480_40_2_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto or_event_1480_40_2_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_8)) goto or_event_1480_40_2_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto or_event_1480_40_2_end;
        or_result_1480_40 = true;
        or_temp_result_1480_40_2 = true;
        or_event_1480_40_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1480_40_2) {
            gimmickbubblespringback2_2428_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1480_40) goto or_final_or_event_1480_40_2_end;
        qualifier_8.empty_selection();
        gimmickbubblespringback2_2428_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1480_40_0 || or_temp_result_1480_40_1 || or_temp_result_1480_40_2) {
            gimmickbubblespringback2_2428_instances.restore_selection();
        }
        if (or_temp_result_1480_40_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1480_40_0 || or_temp_result_1480_40_1 || or_temp_result_1480_40_2) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1480_40_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), ((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(3)*0.25));
        }
        media.play_id(SOUND_BUBBLEBOUNCE_2_72, -1, 1);
    }
    or_final_or_event_1480_40_2_end: ;
}
void Frames::event_func_9693()
{
    // event 1481_40
    {
        if (!(group_main_engine_1)) goto event_1481_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1481_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)*it)->alterables->values.get(4))*0.6);
            ((Active*)*it)->alterables->values.add(4, 10);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->get_action_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->get_action_y());
    }
    event_1481_40_end: ;
}
void Frames::event_func_9694()
{
    // event 1482_40
    {
        if (!(group_main_engine_1)) goto event_1482_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (180))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1482_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(3, get_max(-4-((Active*)*it)->alterables->values.get(3), -15));
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_single(gimmickbubblespringback2_2428_instances, default_active_instance))->alterables->values.get(3));
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1482_40_end: ;
}
void Frames::event_func_9695()
{
    // event 1483_40
    {
        if (!(group_main_engine_1)) goto event_1483_40_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto event_1483_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (99))) goto event_1483_40_end;
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
        FrameObject * single_instance_1483_40_0; single_instance_1483_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbubblespringback2_2428_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1483_40_0 == NULL)
                    single_instance_1483_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1483_40_0))->move_back();
        gimmickleafplatform1_2359_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform1_2359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        gimmickleafplatform2_2360_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform2_2360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1483_40_end: ;
}
void Frames::event_func_9696()
{
    // event 1485_40
    bool or_result_1485_40 = false;
    bool or_temp_result_1485_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_40_0_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (2))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto or_event_1485_40_0_end;
        or_result_1485_40 = true;
        or_temp_result_1485_40_0 = true;
    }
    or_event_1485_40_0_end: ;
    gimmickbubblespringback2_2428_instances.clear_saved_selection();
    if (or_temp_result_1485_40_0) {
        gimmickbubblespringback2_2428_instances.save_selection();
    }
    // event 1485_40
    bool or_temp_result_1485_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_40_1_end;
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbubblespringback2_2428_instances.has_selection()) goto or_event_1485_40_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1485_40_1_end;
        or_result_1485_40 = true;
        or_temp_result_1485_40_1 = true;
        or_event_1485_40_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1485_40_1) {
            gimmickbubblespringback2_2428_instances.save_selection();
            playerinput_19_instances.save_selection();
        }
        if (!or_result_1485_40) goto or_final_or_event_1485_40_1_end;
        gimmickbubblespringback2_2428_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_1485_40_0 || or_temp_result_1485_40_1) {
            gimmickbubblespringback2_2428_instances.restore_selection();
        }
        if (or_temp_result_1485_40_1) {
            playerinput_19_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
        FrameObject * single_instance_1485_40_0; single_instance_1485_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbubblespringback2_2428_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1485_40_0 == NULL)
                    single_instance_1485_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1485_40_0))->move_back();
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        gimmickleafplatform2_2360_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform2_2360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        gimmickleafplatform1_2359_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatform1_2359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    or_final_or_event_1485_40_1_end: ;
}
void Frames::event_func_9697()
{
    // event 1486_40
    {
        if (!(group_main_engine_1)) goto event_1486_40_end;
        if (!((gimmickbubblespringfront2_2429_instances.size()) > (gimmickbubblespringback2_2428_instances.size()))) goto event_1486_40_end;
        gimmickbubblespringfront2_2429_instances.clear_selection();
        FrameObject * single_instance_1486_40_0; single_instance_1486_40_0 = pick_random(gimmickbubblespringfront2_2429_instances);
        if (single_instance_1486_40_0 == NULL) goto event_1486_40_end;
        ((Active*)((Active*)single_instance_1486_40_0))->destroy();
    }
    event_1486_40_end: ;
}
void Frames::event_func_9698()
{
    // event 1487_40
    {
        if (!(group_main_engine_1)) goto event_1487_40_end;
        gimmickbubblespringfront2_2429_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringfront2_2429_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickbubblespringback2_2428_instances, it.current_index));
            if (parent == NULL) goto pos_end_1487_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1487_40_0: ;
        }
        gimmickbubblespringback2_2428_instances.clear_selection();
        for (ObjectIterator it(gimmickbubblespringback2_2428_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(1+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y_scale(1-((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(gimmickbubblespringfront2_2429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(1+((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->set_y_scale(1-((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->set_direction(((Active*)get_single(gimmickbubblespringback2_2428_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1487_40_end: ;
}
void Frames::event_func_9699()
{
    // event 1488_40
    {
        if (!(group_main_engine_1)) goto event_1488_40_end;
        gimmickbubblespringfront2_2429_instances.clear_selection();
        if (!check_not_overlap(gimmickbubblespringfront2_2429_instances, gimmickbubblespringspawner_2442_instances)) goto event_1488_40_end;
        for (ObjectIterator it(gimmickbubblespringfront2_2429_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1488_40_end: ;
}
