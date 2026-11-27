#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_camera_mode1_19(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_19(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_19(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_19(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_19(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_19(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_19(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_19(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_19(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_19();
}
void Frames::loop_wrapper_play_music_5_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_18();
}
void Frames::loop_wrapper_play_music_6_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_18();
}
void Frames::loop_wrapper_sound_go0_19(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_19(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_18();
}
void Frames::loop_wrapper_sound_explode3_19(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_19(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_19(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_19(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_19(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_4184()
{
    // event 1615_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1615_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) != (1))) goto event_1615_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(10)) <= (0))) goto event_1615_19_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1615_19_0; single_instance_1615_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_thunderspark_339(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1615_19_0 == NULL)
                single_instance_1615_19_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1615_19_end: ;
}
void Frames::col_2_19()
{
    event_func_4184();
}
void Frames::event_func_4185()
{
    // event 1609_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1609_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (0))) goto event_1609_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1609_19_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(10);
    }
    event_1609_19_end: ;
}
void Frames::col_7_19()
{
    event_func_4185();
}
void Frames::event_func_4186()
{
    // event 1608_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1608_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (0))) goto event_1608_19_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1608_19_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(10);
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1608_19_end: ;
}
void Frames::col_10_19()
{
    event_func_4186();
}
void Frames::test_collisions_19()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playerprojectile_320_instances, bossbubblebomb_838_instances, 1, 1, (EventFunction)&Frames::col_2_19);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(playersensorleftbig_391_instances, breakableaquabrick_743_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 1, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(playersensorrightbig_393_instances, breakableaquabrick_743_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(minibossacid_658_instances, slimefloor_839_instances, 1, 1, (EventFunction)&Frames::col_7_19);
    test_collisions(playerreflect_447_instances, minibossacid_658_instances, 1, 2, (EventFunction)&Frames::col_6_17);
    test_collisions(qualifier_7, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(minibossacid_658_instances, slimeraft_843_instances, 4, 1, (EventFunction)&Frames::col_10_19);
    test_collisions(qualifier_8, playerreflect_447_instances, 268435456, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 2, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 4, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
    for (it1 = minibossacid_658_instances.begin(); it1 != minibossacid_658_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_19_17();
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
void Frames::event_func_4187()
{
    // event 3_19
    {
        // group: Steam Leaderboards
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->update();
    }
    event_3_19_end: ;
}
void Frames::event_func_4188()
{
    // event 4_19
    {
        // group: Steam Leaderboards
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_4_19_end;
        if (once_condition_4_19) goto event_4_19_end;
        once_condition_4_19 = true;
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload_crystal(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload_time(int(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)));
#endif
    }
    event_4_19_end: ;
}
void Frames::event_func_4189()
{
    // event 1430_19
    {
        if (!(group_main_engine_1)) goto event_1430_19_end;
        if (!((global_values->get(3)%math_helper%60) == (0))) goto event_1430_19_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
        FrameObject * single_instance_1430_19_0; single_instance_1430_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(axelplatformmaker2_747_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelaxelplatform2_654(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1430_19_0 == NULL)
                    single_instance_1430_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1430_19_0))->alterables->values.set(8, ((Active*)single_instance_1430_19_0)->get_x());
        ((Active*)((Active*)single_instance_1430_19_0))->alterables->values.set(9, ((Active*)single_instance_1430_19_0)->get_y());
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)((Active*)single_instance_1430_19_0))->move_back();
    }
    event_1430_19_end: ;
}
void Frames::event_func_4190()
{
    // event 1439_19
    {
        if (!(group_main_engine_1)) goto event_1439_19_end;
        slimefloor_839_instances.clear_selection();
        for (ObjectIterator it(slimefloor_839_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)get_instance(player_389_instances))->layer->index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!slimefloor_839_instances.has_selection()) goto event_1439_19_end;
        for (ObjectIterator it(slimefloor_839_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1439_19_end: ;
}
void Frames::event_func_4191()
{
    // event 1440_19
    {
        if (!(group_main_engine_1)) goto event_1440_19_end;
        slimefloor_839_instances.clear_selection();
        for (ObjectIterator it(slimefloor_839_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)-((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+4)%math_helper%128);
        }
    }
    event_1440_19_end: ;
}
void Frames::event_func_4192()
{
    // event 1441_19
    {
        if (!(group_main_engine_1)) goto event_1441_19_end;
        playersensorbottombig_397_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, slimefloor_839_instances)) goto event_1441_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1441_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1441_19_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1441_19_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
    }
    event_1441_19_end: ;
}
void Frames::event_func_4193()
{
    // event 1442_19
    bool or_result_1442_19 = false;
    bool or_temp_result_1442_19_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1442_19_0_end;
        playersensorbottombig_397_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, slimeraft_843_instances)) goto or_event_1442_19_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto or_event_1442_19_0_end;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto or_event_1442_19_0_end;
        or_result_1442_19 = true;
        or_temp_result_1442_19_0 = true;
    }
    or_event_1442_19_0_end: ;
    slimeraft_843_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_1442_19_0) {
        slimeraft_843_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1442_19
    bool or_temp_result_1442_19_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1442_19_1_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playersensorbottombig_397_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto or_event_1442_19_1_end;
        or_result_1442_19 = true;
        or_temp_result_1442_19_1 = true;
        or_event_1442_19_1_end: ;
        if (or_temp_result_1442_19_1) {
            slimeraft_843_instances.save_selection();
        }
        if (!or_result_1442_19) goto or_final_or_event_1442_19_1_end;
        playersensorbottombig_397_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        if (or_temp_result_1442_19_0 || or_temp_result_1442_19_1) {
            slimeraft_843_instances.restore_selection();
        }
        if (or_temp_result_1442_19_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    or_final_or_event_1442_19_1_end: ;
}
void Frames::event_func_4194()
{
    // event 1443_19
    {
        if (!(group_main_engine_1)) goto event_1443_19_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1443_19_end;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->alterables->values.sub(1, 4);
        }
    }
    event_1443_19_end: ;
}
void Frames::event_func_4195()
{
    // event 1444_19
    {
        if (!(group_main_engine_1)) goto event_1444_19_end;
        playersensorbottombig_397_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, slimeraft_843_instances)) goto event_1444_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1444_19_end;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1444_19_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 4);
    }
    event_1444_19_end: ;
}
void Frames::event_func_4196()
{
    // event 1445_19
    {
        if (!(group_main_engine_1)) goto event_1445_19_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1445_19_end;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1445_19_end: ;
}
void Frames::event_func_4197()
{
    // event 1505_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1505_19_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(0))) goto event_1505_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) < (200))) goto event_1505_19_end;
        ((Active*)get_instance(sign_351_instances))->alterables->values.add(1, 1);
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
        global_values->set(4, 0);
    }
    event_1505_19_end: ;
}
void Frames::event_func_4198()
{
    // event 1506_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1506_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (140))) goto event_1506_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->get_frame()) == (0))) goto event_1506_19_end;
        ((Active*)get_instance(sign_351_instances))->force_animation(12);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
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
    event_1506_19_end: ;
}
void Frames::event_func_4199()
{
    // event 1507_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1507_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1507_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1507_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1507_19_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 48);
    }
    event_1507_19_end: ;
}
void Frames::event_func_4200()
{
    // event 1508_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1508_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1508_19_end;
        if (not_always_1508_19 > loop_count) {
            not_always_1508_19 = loop_count + 2;
            goto event_1508_19_end;
        }
        not_always_1508_19 = loop_count + 2;
        if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) {
            group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = true;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(3)+str_1_128);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(10, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
    }
    event_1508_19_end: ;
}
void Frames::event_func_4201()
{
    // event 1509_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1509_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1509_19_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1509_19_end: ;
}
void Frames::event_func_4202()
{
    // event 1510_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1510_19_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (180))) goto event_1510_19_end;
        if (not_always_1510_19 > loop_count) {
            not_always_1510_19 = loop_count + 2;
            goto event_1510_19_end;
        }
        not_always_1510_19 = loop_count + 2;
        ((Active*)get_instance(levelcardactclear1_847_instances))->force_animation(7);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(true);
    }
    event_1510_19_end: ;
}
void Frames::event_func_4203()
{
    // event 1511_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1511_19_end;
        if (!(((Active*)get_instance(levelcardactclear1_847_instances))->is_animation_finished(7))) goto event_1511_19_end;
        ((Active*)get_instance(levelcardactclear1_847_instances))->force_animation(8);
    }
    event_1511_19_end: ;
}
void Frames::event_func_4204()
{
    // event 1512_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1512_19_end;
        if (!(((Active*)get_instance(levelcardactclear1_847_instances))->test_animation(7))) goto event_1512_19_end;
        if (!((((Active*)get_instance(levelcardactclear1_847_instances))->get_frame()) == (21))) goto event_1512_19_end;
        FrameObject * single_instance_1512_19_0; single_instance_1512_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear1_847_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 80, parent->y + 8), parent->layer);
                if (single_instance_1512_19_0 == NULL)
                    single_instance_1512_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1512_19_0))->set_x(((Active*)single_instance_1512_19_0)->get_x()+randrange(160));
        ((Active*)((Active*)single_instance_1512_19_0))->set_y(((Active*)single_instance_1512_19_0)->get_y()+randrange(32));
    }
    event_1512_19_end: ;
}
void Frames::event_func_4205()
{
    // event 1513_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1513_19_end;
        if (!(((Active*)get_instance(levelcardactclear1_847_instances))->is_animation_finished(8))) goto event_1513_19_end;
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.enable(0);
    }
    event_1513_19_end: ;
}
void Frames::event_func_4206()
{
    // event 1514_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1514_19_end;
        if (!(((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.is_on(0))) goto event_1514_19_end;
        if (!((((Active*)get_instance(levelcardactclear1_847_instances))->get_movement()->get_speed()) == (0))) goto event_1514_19_end;
        if (not_always_1514_19 > loop_count) {
            not_always_1514_19 = loop_count + 2;
            goto event_1514_19_end;
        }
        not_always_1514_19 = loop_count + 2;
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(true);
        ((Active*)get_instance(levelcardactclear3_849_instances))->force_animation(7);
        ((Active*)get_instance(levelcardactclear3_849_instances))->force_frame(0);
        ((Active*)get_instance(levelcardactclear3_849_instances))->restore_frame();
    }
    event_1514_19_end: ;
}
void Frames::event_func_4207()
{
    // event 1515_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1515_19_end;
        if (!((((Active*)get_instance(levelcardactclear3_849_instances))->get_frame()) == (2))) goto event_1515_19_end;
        if (not_always_1515_19 > loop_count) {
            not_always_1515_19 = loop_count + 2;
            goto event_1515_19_end;
        }
        not_always_1515_19 = loop_count + 2;
        media.play_id(SOUND_UI_SCOREDISPLAY_34, -1, 1);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(true);
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(true);
    }
    event_1515_19_end: ;
}
void Frames::event_func_4208()
{
    // event 1516_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1516_19_end;
        if (!((((Active*)get_instance(levelcardactclear3_849_instances))->get_frame()) == (3))) goto event_1516_19_end;
        if (not_always_1516_19 > loop_count) {
            not_always_1516_19 = loop_count + 2;
            goto event_1516_19_end;
        }
        not_always_1516_19 = loop_count + 2;
        media.play_id(SOUND_UI_SCOREDISPLAY_34, -1, 1);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(true);
    }
    event_1516_19_end: ;
}
void Frames::event_func_4209()
{
    // event 1517_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1517_19_end;
        if (!((((Active*)get_instance(levelcardactclear3_849_instances))->get_frame()) == (4))) goto event_1517_19_end;
        if (not_always_1517_19 > loop_count) {
            not_always_1517_19 = loop_count + 2;
            goto event_1517_19_end;
        }
        not_always_1517_19 = loop_count + 2;
        media.play_id(SOUND_UI_SCOREDISPLAY_34, -1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_0;
            ((Counter*)get_instance(guitimerm2_365_instances))->set_global_position(parent->get_x() + 85, parent->get_y() + 40);
            pos_end_1517_19_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_1;
            ((Counter*)get_instance(guitimerm_364_instances))->set_global_position(parent->get_x() + 95, parent->get_y() + 40);
            pos_end_1517_19_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_2;
            ((Counter*)get_instance(guitimers2_363_instances))->set_global_position(parent->get_x() + 111, parent->get_y() + 40);
            pos_end_1517_19_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_3;
            ((Counter*)get_instance(guitimers_362_instances))->set_global_position(parent->get_x() + 121, parent->get_y() + 40);
            pos_end_1517_19_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_4;
            ((Counter*)get_instance(guitimermilli2_361_instances))->set_global_position(parent->get_x() + 138, parent->get_y() + 40);
            pos_end_1517_19_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelcardactclear3_849_instances));
            if (parent == NULL) goto pos_end_1517_19_5;
            ((Counter*)get_instance(guitimermilli_360_instances))->set_global_position(parent->get_x() + 148, parent->get_y() + 40);
            pos_end_1517_19_5: ;
        }
        ((Counter*)get_instance(guitimermilli_360_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
        ((Counter*)get_instance(guitimers_362_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_layer(((Active*)get_instance(levelcardactclear2_848_instances))->layer->index+1-1);
    }
    event_1517_19_end: ;
}
void Frames::event_func_4210()
{
    // event 1518_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1518_19_end;
        if (!((((Active*)get_instance(levelcardactclear3_849_instances))->get_frame()) == (5))) goto event_1518_19_end;
        if (not_always_1518_19 > loop_count) {
            not_always_1518_19 = loop_count + 2;
            goto event_1518_19_end;
        }
        not_always_1518_19 = loop_count + 2;
        media.play_id(SOUND_UI_SCOREDISPLAY_34, -1, 1);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(true);
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(true);
    }
    event_1518_19_end: ;
}
void Frames::event_func_4211()
{
    // event 1519_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1519_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (0))) goto event_1519_19_end;
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(14));
    }
    event_1519_19_end: ;
}
void Frames::event_func_4212()
{
    // event 1520_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1520_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1520_19_end;
        if (once_condition_1520_19) goto event_1520_19_end;
        once_condition_1520_19 = true;
        media.play(str_data_voices_eng_mi_milla_yay_ogg_129, 28-1);
    }
    event_1520_19_end: ;
}
void Frames::event_func_4213()
{
    // event 1521_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1521_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1521_19_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(37))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (12))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1521_19_end;
        if (once_condition_1521_19) goto event_1521_19_end;
        once_condition_1521_19 = true;
        media.play(str_data_voices_eng_mi_milla_thatwasfun_ogg_130, 28-1);
    }
    event_1521_19_end: ;
}
void Frames::event_func_4214()
{
    // event 1522_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1522_19_end;
        if (!((global_values->get(0)) > (0))) goto event_1522_19_end;
        if (once_condition_1522_19) goto event_1522_19_end;
        once_condition_1522_19 = true;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(int(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)), 3, 1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9), 3, 2);
    }
    event_1522_19_end: ;
}
void Frames::event_func_4215()
{
    // event 1523_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1523_19_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.add(2, 1);
    }
    event_1523_19_end: ;
}
void Frames::event_func_4216()
{
    // event 1524_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1524_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(2)) == (220))) goto event_1524_19_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.set(0, 1);
    }
    event_1524_19_end: ;
}
void Frames::event_func_4217()
{
    // event 1525_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1525_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (1))) goto event_1525_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(1)) >= (120))) goto event_1525_19_end;
        if (not_always_1525_19 > loop_count) {
            not_always_1525_19 = loop_count + 2;
            goto event_1525_19_end;
        }
        not_always_1525_19 = loop_count + 2;
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 0);
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.set(4, get_floor(((Counter*)get_instance(levelcardbonus1_850_instances))->value/math_helper/100)+1);
    }
    event_1525_19_end: ;
}
void Frames::event_func_4218()
{
    // event 1526_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1526_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (1))) goto event_1526_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(1)) >= (120))) goto event_1526_19_end;
        {
            loop_tally_running = true;
            int times = int(get_max(((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(4), 1));
            loop_tally_index = 0;
            while (loop_tally_index < times) {
                loop_tally_19();
                if (!loop_tally_running) break;
                loop_tally_index++;
            }
        }
    }
    event_1526_19_end: ;
}
void Frames::event_func_4219()
{
    // event 1528_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1528_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (1))) goto event_1528_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(1)) >= (120))) goto event_1528_19_end;
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
    }
    event_1528_19_end: ;
}
void Frames::event_func_4220()
{
    // event 1529_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1529_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (1))) goto event_1529_19_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.add(1, 1);
    }
    event_1529_19_end: ;
}
void Frames::event_func_4221()
{
    // event 1530_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1530_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (1))) goto event_1530_19_end;
        if (!((((Counter*)get_instance(levelcardbonus1_850_instances))->value) == (0))) goto event_1530_19_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.set(0, 2);
    }
    event_1530_19_end: ;
}
void Frames::event_func_4222()
{
    // event 1531_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1531_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (2))) goto event_1531_19_end;
        if (not_always_1531_19 > loop_count) {
            not_always_1531_19 = loop_count + 2;
            goto event_1531_19_end;
        }
        not_always_1531_19 = loop_count + 2;
        media.play_id(SOUND_COMMON_RESULT_16, -1, 1);
        ((Active*)get_instance(levelcardactclear4_846_instances))->force_animation(7);
        media.stop_sample(SOUND_UI_SCORETALLY_15);
    }
    event_1531_19_end: ;
}
void Frames::event_func_4223()
{
    // event 1532_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1532_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (2))) goto event_1532_19_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.add(3, 1);
    }
    event_1532_19_end: ;
}
void Frames::event_func_4224()
{
    // event 1533_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1533_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1533_19_end;
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
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_1533_19_end: ;
}
void Frames::event_func_4225()
{
    // event 1534_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1534_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(slimeraft_843_instances, default_active_instance))->get_box_index(2)-32))) goto event_1534_19_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1534_19_end: ;
}
void Frames::event_func_4226()
{
    // event 1535_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1535_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(slimeraft_843_instances, default_active_instance))->get_box_index(2)-32))) goto event_1535_19_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_bosses_1 = false;
    
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 300);
        }
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1535_19_end: ;
}
void Frames::event_func_4227()
{
    // event 1536_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1536_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(slimeraft_843_instances, default_active_instance))->get_box_index(2)-32))) goto event_1536_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-16))) goto event_1536_19_end;
        if (not_always_1536_19 > loop_count) {
            not_always_1536_19 = loop_count + 2;
            goto event_1536_19_end;
        }
        not_always_1536_19 = loop_count + 2;
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
    }
    event_1536_19_end: ;
}
void Frames::event_func_4228()
{
    // event 1537_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1537_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-16))) goto event_1537_19_end;
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1537_19_end: ;
}
void Frames::event_func_4229()
{
    // event 1538_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1538_19_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1538_19_end;
        global_values->set(4, 0);
        next_frame = 8 + 0;    
    
    }
    event_1538_19_end: ;
}
void Frames::event_func_4230()
{
    // event 1541_19
    {
        if (!(group_main_engine_1)) goto event_1541_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)) < (frame_right()+64))) goto event_1541_19_end;
        ((Active*)get_instance(waterjetright_673_instances))->set_x(((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)+(global_values->get(3)%math_helper%8)*8);
    }
    event_1541_19_end: ;
}
void Frames::event_func_4231()
{
    // event 1542_19
    {
        if (!(group_main_engine_1)) goto event_1542_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-16))) goto event_1542_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) goto event_1542_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-100))) goto event_1542_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+40))) goto event_1542_19_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (8))) goto event_1542_19_end;
        if (not_always_1542_19 > loop_count) {
            not_always_1542_19 = loop_count + 2;
            goto event_1542_19_end;
        }
        not_always_1542_19 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_SPLASH_14);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1542_19_end: ;
}
void Frames::event_func_4232()
{
    // event 1543_19
    {
        if (!(group_main_engine_1)) goto event_1543_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-16))) goto event_1543_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) goto event_1543_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-100))) goto event_1543_19_end;
        if (!((((Active*)get_instance(waterjetright_673_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+40))) goto event_1543_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1543_19_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        FrameObject * single_instance_1543_19_0; single_instance_1543_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1543_19_0 == NULL)
                    single_instance_1543_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1543_19_0))->alterables->values.set(0, -16+randrange(33));
        ((Active*)((Active*)single_instance_1543_19_0))->alterables->values.set(1, -16+randrange(33));
        ((Active*)((Active*)single_instance_1543_19_0))->alterables->flags.enable(0);
    }
    event_1543_19_end: ;
}
void Frames::event_func_4233()
{
    // event 1573_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1573_19_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1573_19_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1573_19_end;
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
    event_1573_19_end: ;
}
void Frames::event_func_4234()
{
    // event 1578_19
    {
        if (!(group_main_engine_1)) goto event_1578_19_end;
        if (!((global_values->get(4)) < (2))) goto event_1578_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3264))) goto event_1578_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (3364))) goto event_1578_19_end;
        global_values->set(4, 2);
        global_values->set(5, 3264);
        global_values->set(6, 200);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1578_19_end: ;
}
void Frames::event_func_4235()
{
    // event 1581_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1581_19_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1581_19_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1581_19_end;
        if (!((global_values->get(4)) < (10))) goto event_1581_19_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1581_19_end: ;
}
void Frames::event_func_4236()
{
    // event 1582_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1582_19_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (360))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (320))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1582_19_end;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1784);
        }
    }
    event_1582_19_end: ;
}
void Frames::event_func_4237()
{
    // event 1583_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1583_19_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (360))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1583_19_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 = true;
        }
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->set_visible(true);
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, (1-((SystemBox*)*it)->alterables->values.get(3))*-4);
        }
    }
    event_1583_19_end: ;
}
void Frames::event_func_4238()
{
    // event 1584_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1584_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) >= (0))) goto event_1584_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) <= (3))) goto event_1584_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) != (2))) goto event_1584_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(5, (((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)+5)%math_helper%360);
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+5)%math_helper%360);
        }
    }
    event_1584_19_end: ;
}
void Frames::event_func_4239()
{
    // event 1585_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1585_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1585_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(5, (((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)+2.5)%math_helper%360);
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+2.5)%math_helper%360);
        }
    }
    event_1585_19_end: ;
}
void Frames::event_func_4240()
{
    // event 1586_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1586_19_end;
        slimeraft_843_instances.clear_selection();
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (400))) { it.deselect(); continue; }
        }
        if (!slimeraft_843_instances.has_selection()) goto event_1586_19_end;
        if (not_always_1586_19 > loop_count) {
            not_always_1586_19 = loop_count + 2;
            goto event_1586_19_end;
        }
        not_always_1586_19 = loop_count + 2;
        for (ObjectIterator it(slimeraft_843_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1586_19_end: ;
}
void Frames::event_func_4241()
{
    // event 1587_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1587_19_end;
        if (!((monitorbroken_330_instances.size()) > (0))) goto event_1587_19_end;
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1587_19_end: ;
}
void Frames::event_func_4242()
{
    // event 1588_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1588_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1588_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->get_x()) > (((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(10)))) goto event_1588_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()-3);
    }
    event_1588_19_end: ;
}
void Frames::event_func_4243()
{
    // event 1589_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1589_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1589_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->get_x()) <= (((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(10)))) goto event_1589_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(8, 1);
    }
    event_1589_19_end: ;
}
void Frames::event_func_4244()
{
    // event 1590_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1590_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1590_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) > (3))) goto event_1590_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) < (160))) goto event_1590_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 1);
    }
    event_1590_19_end: ;
}
void Frames::event_func_4245()
{
    // event 1591_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1591_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1591_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) == (30))) goto event_1591_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) > (0))) goto event_1591_19_end;
        FrameObject * single_instance_1591_19_0; single_instance_1591_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossbubblebomb_838(parent->x + 34, parent->y + 15), parent->layer);
                if (single_instance_1591_19_0 == NULL)
                    single_instance_1591_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1591_19_0))->alterables->values.set(0, 4+randrange(4));
        ((Active*)((Active*)single_instance_1591_19_0))->alterables->values.set(2, ((Active*)single_instance_1591_19_0)->get_x());
        ((Active*)((Active*)single_instance_1591_19_0))->alterables->values.set(3, ((Active*)single_instance_1591_19_0)->get_y());
        ((Active*)((Active*)single_instance_1591_19_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1591_19_end: ;
}
void Frames::event_func_4246()
{
    // event 1592_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1592_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1592_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) == (60))) goto event_1592_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) > (0))) goto event_1592_19_end;
        FrameObject * single_instance_1592_19_0; single_instance_1592_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossbubblebomb_838(parent->x + 34, parent->y + 15), parent->layer);
                if (single_instance_1592_19_0 == NULL)
                    single_instance_1592_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1592_19_0))->alterables->values.set(0, 4+randrange(4));
        ((Active*)((Active*)single_instance_1592_19_0))->alterables->values.set(2, ((Active*)single_instance_1592_19_0)->get_x());
        ((Active*)((Active*)single_instance_1592_19_0))->alterables->values.set(3, ((Active*)single_instance_1592_19_0)->get_y());
        ((Active*)((Active*)single_instance_1592_19_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1592_19_end: ;
}
void Frames::event_func_4247()
{
    // event 1593_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1593_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1593_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) == (90))) goto event_1593_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) > (0))) goto event_1593_19_end;
        FrameObject * single_instance_1593_19_0; single_instance_1593_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossbubblebomb_838(parent->x + 34, parent->y + 15), parent->layer);
                if (single_instance_1593_19_0 == NULL)
                    single_instance_1593_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1593_19_0))->alterables->values.set(0, 4+randrange(3));
        ((Active*)((Active*)single_instance_1593_19_0))->alterables->values.set(2, ((Active*)single_instance_1593_19_0)->get_x());
        ((Active*)((Active*)single_instance_1593_19_0))->alterables->values.set(3, ((Active*)single_instance_1593_19_0)->get_y());
        ((Active*)((Active*)single_instance_1593_19_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1593_19_0))->alterables->flags.enable(5);
    }
    event_1593_19_end: ;
}
void Frames::event_func_4248()
{
    // event 1594_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1594_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1594_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) == (160))) goto event_1594_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 0);
    }
    event_1594_19_end: ;
}
void Frames::event_func_4249()
{
    // event 1595_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1595_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (0))) goto event_1595_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(8)) > (260))) goto event_1595_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(8, 0);
    }
    event_1595_19_end: ;
}
void Frames::event_func_4250()
{
    // event 1596_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1596_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (1))) goto event_1596_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)) > (330))) goto event_1596_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 1);
    }
    event_1596_19_end: ;
}
