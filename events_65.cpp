#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_dig2_25(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_25(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_25(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_25(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_25(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_25(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_25(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_25(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_25(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_25(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_25(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_25(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_25(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_25(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_play_music_6_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_sound_go0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_process_call_unqueue_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_25(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_5393()
{
    // event 1597_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1597_25_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) > (0))) goto event_1597_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1597_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1597_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1597_25_end: ;
}
void Frames::col_6_25()
{
    event_func_5393();
}
void Frames::event_func_5394()
{
    // event 1630_25
    {
        if (!(group_main_engine_1)) goto event_1630_25_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1630_25_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1630_25_end;
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1630_25_end: ;
}
void Frames::col_9_25()
{
    event_func_5394();
}
void Frames::event_func_5395()
{
    // event 1631_25
    {
        if (!(group_main_engine_1)) goto event_1631_25_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1631_25_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1631_25_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1631_25_end: ;
}
void Frames::col_11_25()
{
    event_func_5395();
}
void Frames::event_func_5396()
{
    // event 1601_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1601_25_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(11)) > (0))) goto event_1601_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1601_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1601_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1601_25_end: ;
}
void Frames::col_14_25()
{
    event_func_5396();
}
void Frames::event_func_5397()
{
    // event 1620_25
    {
        if (!(group_main_engine_1)) goto event_1620_25_end;
        if (!((((Active*)col_instance_2)->get_frame()) < (8))) goto event_1620_25_end;
        FrameObject * single_instance_1620_25_0; single_instance_1620_25_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1620_25_0 == NULL)
                single_instance_1620_25_0 = new_obj;
        }
        FrameObject * single_instance_1620_25_1; single_instance_1620_25_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1620_25_1 == NULL)
                single_instance_1620_25_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1620_25_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1620_25_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1620_25_0))->move_back();
        ((Active*)((Active*)single_instance_1620_25_1))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(4));
    }
    event_1620_25_end: ;
}
void Frames::col_17_25()
{
    event_func_5397();
}
void Frames::event_func_5398()
{
    // event 1629_25
    {
        if (!(group_main_engine_1)) goto event_1629_25_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(7))) goto event_1629_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1629_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1629_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1629_25_end;
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
    event_1629_25_end: ;
}
void Frames::col_21_25()
{
    event_func_5398();
}
void Frames::test_collisions_25()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_19, enemyiris_1183_instances, 1073741824, 1, (EventFunction)&Frames::col_12_24);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playercharactersensor_383_instances, minibossgolempiece2_1249_instances, 1, 1, (EventFunction)&Frames::col_6_25);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(shieldwater_318_instances, badnikgolemshot_1197_instances, 1, 1, (EventFunction)&Frames::col_9_25);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(playerreflect_447_instances, badnikgolemshot_1197_instances, 2, 2, (EventFunction)&Frames::col_11_25);
    test_collisions(qualifier_7, playerreflect_447_instances, 67108864, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(playercharactersensor_383_instances, minibossgolem_1252_instances, 4, 1, (EventFunction)&Frames::col_14_25);
    test_collisions(playercharactersensor_383_instances, minibossgolempiece1_1250_instances, 8, 1, (EventFunction)&Frames::col_6_25);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_19, minibossflame_1199_instances, 536870912, 1, (EventFunction)&Frames::col_17_25);
    test_collisions(qualifier_20, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 8, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playercharactersensor_383_instances, badnikgolemshot_1197_instances, 16, 4, (EventFunction)&Frames::col_21_25);
    test_collisions(enemyiris_1183_instances, objectpot_1185_instances, 2, 1, (EventFunction)&Frames::col_25_24);
    ObjectList::iterator it1, it2;
    for (it1 = gimmickfireball_1096_instances.begin(); it1 != gimmickfireball_1096_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background_save()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_24();
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
void Frames::event_func_5399()
{
    // event 3_25
    {
        if (!(group_main_engine_1)) goto event_3_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_3_25_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_3_25_end: ;
}
void Frames::event_func_5400()
{
    // event 4_25
    {
        if (!(group_main_engine_1)) goto event_4_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_4_25_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
    }
    event_4_25_end: ;
}
void Frames::event_func_5401()
{
    // event 5_25
    {
        if (!(group_main_engine_1)) goto event_5_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_5_25_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_5_25_end: ;
}
void Frames::event_func_5402()
{
    // event 6_25
    {
        if (!(group_main_engine_1)) goto event_6_25_end;
        gimmickrelicflippanel2_1242_instances.clear_selection();
        gimmickhangingidlemover_1259_instances.clear_selection();
        if (!check_overlap(gimmickrelicflippanel2_1242_instances, gimmickhangingidlemover_1259_instances)) goto event_6_25_end;
        for (ObjectIterator it(gimmickrelicflippanel2_1242_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+280);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_6_25_end: ;
}
void Frames::event_func_5403()
{
    // event 7_25
    {
        if (!(group_main_engine_1)) goto event_7_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_7_25_end;
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_7_25_end: ;
}
void Frames::event_func_5404()
{
    // event 8_25
    {
        if (!(group_main_engine_1)) goto event_8_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_8_25_end;
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_8_25_end: ;
}
void Frames::event_func_5405()
{
    // event 9_25
    {
        if (!(group_main_engine_1)) goto event_9_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_9_25_end;
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-3, ((Active*)*it)->alterables->values.get(0)));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-3);
    }
    event_9_25_end: ;
}
void Frames::event_func_5406()
{
    // event 10_25
    {
        if (!(group_main_engine_1)) goto event_10_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+280))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_10_25_end;
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+3, ((Active*)*it)->alterables->values.get(0)+280));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+3);
    }
    event_10_25_end: ;
}
void Frames::event_func_5407()
{
    // event 11_25
    {
        if (!(group_main_engine_1)) goto event_11_25_end;
        gimmickhangingmover_1258_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmover_1258_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickhangingidlemover_1259_instances, it.current_index));
            if (parent == NULL) goto pos_end_11_25_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_11_25_0: ;
        }
        gimmickhangingswitch_1256_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickhangingidleswitch_1257_instances, it.current_index));
            if (parent == NULL) goto pos_end_11_25_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_11_25_1: ;
        }
    }
    event_11_25_end: ;
}
void Frames::event_func_5408()
{
    // event 12_25
    {
        if (!(group_main_engine_1)) goto event_12_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_12_25_end;
        if (not_always_12_25 > loop_count) {
            not_always_12_25 = loop_count + 2;
            goto event_12_25_end;
        }
        not_always_12_25 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_12_25_end: ;
}
void Frames::event_func_5409()
{
    // event 13_25
    {
        if (!(group_main_engine_1)) goto event_13_25_end;
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)+280))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidlemover_1259_instances.has_selection()) goto event_13_25_end;
        if (not_always_13_25 > loop_count) {
            not_always_13_25 = loop_count + 2;
            goto event_13_25_end;
        }
        not_always_13_25 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_13_25_end: ;
}
void Frames::event_func_5410()
{
    // event 210_25
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_210_25_end;
        player_389_instances.clear_selection();
        layerchangeswitch2_1239_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeswitch2_1239_instances)) goto event_210_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0.0))) goto event_210_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
    }
    event_210_25_end: ;
}
void Frames::event_func_5411()
{
    // event 211_25
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_211_25_end;
        player_389_instances.clear_selection();
        layerchangeswitch2_1239_instances.clear_selection();
        if (!check_overlap(player_389_instances, layerchangeswitch2_1239_instances)) goto event_211_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0.0))) goto event_211_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 0);
    }
    event_211_25_end: ;
}
void Frames::event_func_5412()
{
    // event 562_25
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_562_25_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (210))) goto event_562_25_end;
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
                loop_death_25();
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
    event_562_25_end: ;
}
void Frames::event_func_5413()
{
    // event 580_25
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_580_25_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (220))) goto event_580_25_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_25();
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
    event_580_25_end: ;
}
void Frames::event_func_5414()
{
    // event 1407_25
    {
        if (!(group_main_engine_1)) goto event_1407_25_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_25_end;
        if (not_always_1407_25 > loop_count) {
            not_always_1407_25 = loop_count + 2;
            goto event_1407_25_end;
        }
        not_always_1407_25 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1407_25_end: ;
}
void Frames::event_func_5415()
{
    // event 1408_25
    {
        if (!(group_main_engine_1)) goto event_1408_25_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_25_end;
        if (not_always_1408_25 > loop_count) {
            not_always_1408_25 = loop_count + 2;
            goto event_1408_25_end;
        }
        not_always_1408_25 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1408_25_end: ;
}
void Frames::event_func_5416()
{
    // event 1445_25
    {
        if (!(group_main_engine_1)) goto event_1445_25_end;
        qualifier_14.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(qualifier_14, switchpressureplate_752_instances)) goto event_1445_25_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1445_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1445_25_end;
        {
            loop_floorswitch_running = true;
            int times = int(1);
            loop_floorswitch_index = 0;
            while (loop_floorswitch_index < times) {
                loop_floorswitch_25();
                if (!loop_floorswitch_running) break;
                loop_floorswitch_index++;
            }
        }
    }
    event_1445_25_end: ;
}
void Frames::event_func_5417()
{
    // event 1446_25
    {
        if (!(group_main_engine_1)) goto event_1446_25_end;
        playersensorbottombig_397_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1446_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1446_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1446_25_end;
        {
            loop_floorswitch_running = true;
            int times = int(1);
            loop_floorswitch_index = 0;
            while (loop_floorswitch_index < times) {
                loop_floorswitch_25();
                if (!loop_floorswitch_running) break;
                loop_floorswitch_index++;
            }
        }
    }
    event_1446_25_end: ;
}
void Frames::event_func_5418()
{
    // event 1448_25
    {
        if (!(group_main_engine_1)) goto event_1448_25_end;
        qualifier_14.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(qualifier_14, switchpressureplate_752_instances)) goto event_1448_25_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1448_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1448_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.set(0, (((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.get(0)+90)%math_helper%360);
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_DRAG2_62, -1, 0);
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->flags.enable(1);
    }
    event_1448_25_end: ;
}
void Frames::event_func_5419()
{
    // event 1449_25
    {
        if (!(group_main_engine_1)) goto event_1449_25_end;
        playersensorbottombig_397_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1449_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1449_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1449_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_DRAG2_62, -1, 0);
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.set(0, (((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.get(0)+90)%math_helper%360);
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->flags.enable(1);
    }
    event_1449_25_end: ;
}
void Frames::event_func_5420()
{
    // event 1450_25
    {
        if (!(group_main_engine_1)) goto event_1450_25_end;
        if (!((((Active*)get_instance(gimmickaxletunnel_1262_instances))->get_angle()) != (((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.get(0)))) goto event_1450_25_end;
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->set_angle(((Active*)get_instance(gimmickaxletunnel_1262_instances))->get_angle()+5, 0);
    }
    event_1450_25_end: ;
}
void Frames::event_func_5421()
{
    // event 1451_25
    {
        if (!(group_main_engine_1)) goto event_1451_25_end;
        if (!((((Active*)get_instance(gimmickaxletunnel_1262_instances))->get_angle()) == (((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.get(0)))) goto event_1451_25_end;
        if (!(((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->flags.is_on(1))) goto event_1451_25_end;
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->flags.disable(1);
    }
    event_1451_25_end: ;
}
void Frames::event_func_5422()
{
    // event 1453_25
    bool or_result_1453_25 = false;
    bool or_temp_result_1453_25_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1453_25_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1453_25_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1453_25_0_end;
        or_result_1453_25 = true;
        or_temp_result_1453_25_0 = true;
    }
    or_event_1453_25_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    switchwallplate_814_instances.clear_saved_selection();
    if (or_temp_result_1453_25_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchwallplate_814_instances.save_selection();
    }
    // event 1453_25
    bool or_temp_result_1453_25_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1453_25_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1453_25_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1453_25_1_end;
        or_result_1453_25 = true;
        or_temp_result_1453_25_1 = true;
        or_event_1453_25_1_end: ;
        if (or_temp_result_1453_25_1) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            switchwallplate_814_instances.save_selection();
        }
        if (!or_result_1453_25) goto or_final_or_event_1453_25_1_end;
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1453_25_0 || or_temp_result_1453_25_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1453_25_0 || or_temp_result_1453_25_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1453_25_0 || or_temp_result_1453_25_1) {
            switchwallplate_814_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1453_25_1_end: ;
}
void Frames::event_func_5423()
{
    // event 1476_25
    {
        if (!(group_main_engine_1)) goto event_1476_25_end;
        gimmickrelicflippanel2_1242_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        if (!check_overlap(gimmickrelicflippanel2_1242_instances, gimmickrelicflippanel_1240_instances)) goto event_1476_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 90);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(gimmickrelicflippanel2_1242_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1476_25_end: ;
}
void Frames::event_func_5424()
{
    // event 1477_25
    {
        if (!(group_main_engine_1)) goto event_1477_25_end;
        gimmickrelicflippanel3_1243_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        if (!check_overlap(gimmickrelicflippanel3_1243_instances, gimmickrelicflippanel_1240_instances)) goto event_1477_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 180);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(gimmickrelicflippanel3_1243_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1477_25_end: ;
}
void Frames::event_func_5425()
{
    // event 1478_25
    {
        if (!(group_main_engine_1)) goto event_1478_25_end;
        gimmickrelicflippanel4_1244_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        if (!check_overlap(gimmickrelicflippanel4_1244_instances, gimmickrelicflippanel_1240_instances)) goto event_1478_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 270);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(gimmickrelicflippanel4_1244_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1478_25_end: ;
}
void Frames::event_func_5426()
{
    // event 1479_25
    {
        if (!(group_main_engine_1)) goto event_1479_25_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto event_1479_25_end;
        if (not_always_1479_25 > loop_count) {
            not_always_1479_25 = loop_count + 2;
            goto event_1479_25_end;
        }
        not_always_1479_25 = loop_count + 2;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_DRAG2_62, -1, 0);
    }
    event_1479_25_end: ;
}
void Frames::event_func_5427()
{
    // event 1480_25
    {
        if (!(group_main_engine_1)) goto event_1480_25_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (99))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto event_1480_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(1)*0.1, 0);
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1480_25_end: ;
}
void Frames::event_func_5428()
{
    // event 1481_25
    bool or_result_1481_25 = false;
    bool or_temp_result_1481_25_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1481_25_0_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto or_event_1481_25_0_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) != (0))) goto or_event_1481_25_0_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) <= (270))) goto or_event_1481_25_0_end;
        or_result_1481_25 = true;
        or_temp_result_1481_25_0 = true;
    }
    or_event_1481_25_0_end: ;
    gimmickrelicflippanel_1240_instances.clear_saved_selection();
    if (or_temp_result_1481_25_0) {
        gimmickrelicflippanel_1240_instances.save_selection();
    }
    // event 1481_25
    bool or_temp_result_1481_25_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1481_25_1_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto or_event_1481_25_1_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) <= (((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->alterables->values.get(2)-90))) goto or_event_1481_25_1_end;
        or_result_1481_25 = true;
        or_temp_result_1481_25_1 = true;
    }
    or_event_1481_25_1_end: ;
    if (or_temp_result_1481_25_1) {
        gimmickrelicflippanel_1240_instances.save_selection();
    }
    // event 1481_25
    bool or_temp_result_1481_25_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1481_25_2_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (90))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto or_event_1481_25_2_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) <= (360))) goto or_event_1481_25_2_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) >= (270))) goto or_event_1481_25_2_end;
        or_result_1481_25 = true;
        or_temp_result_1481_25_2 = true;
        or_event_1481_25_2_end: ;
        if (or_temp_result_1481_25_2) {
            gimmickrelicflippanel_1240_instances.save_selection();
        }
        if (!or_result_1481_25) goto or_final_or_event_1481_25_2_end;
        gimmickrelicflippanel_1240_instances.empty_selection();
        if (or_temp_result_1481_25_0 || or_temp_result_1481_25_1 || or_temp_result_1481_25_2) {
            gimmickrelicflippanel_1240_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)-90+360)%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(4, 30);
        }
        media.stop_sample(SOUND_COMMON_SLAM1_51);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
    }
    or_final_or_event_1481_25_2_end: ;
}
void Frames::event_func_5429()
{
    // event 1482_25
    bool or_result_1482_25 = false;
    bool or_temp_result_1482_25_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1482_25_0_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (270))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto or_event_1482_25_0_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) >= (0))) goto or_event_1482_25_0_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) < (90))) goto or_event_1482_25_0_end;
        or_result_1482_25 = true;
        or_temp_result_1482_25_0 = true;
    }
    or_event_1482_25_0_end: ;
    gimmickrelicflippanel_1240_instances.clear_saved_selection();
    if (or_temp_result_1482_25_0) {
        gimmickrelicflippanel_1240_instances.save_selection();
    }
    // event 1482_25
    bool or_temp_result_1482_25_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1482_25_1_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (270))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto or_event_1482_25_1_end;
        if (!((((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->get_angle()) >= (((Active*)get_single(gimmickrelicflippanel_1240_instances, default_active_instance))->alterables->values.get(2)+90))) goto or_event_1482_25_1_end;
        or_result_1482_25 = true;
        or_temp_result_1482_25_1 = true;
        or_event_1482_25_1_end: ;
        if (or_temp_result_1482_25_1) {
            gimmickrelicflippanel_1240_instances.save_selection();
        }
        if (!or_result_1482_25) goto or_final_or_event_1482_25_1_end;
        gimmickrelicflippanel_1240_instances.empty_selection();
        if (or_temp_result_1482_25_0 || or_temp_result_1482_25_1) {
            gimmickrelicflippanel_1240_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+90)%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
            ((Active*)*it)->alterables->values.set(0, 99);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(4, 30);
        }
        media.stop_sample(SOUND_COMMON_SLAM1_51);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
    }
    or_final_or_event_1482_25_1_end: ;
}
void Frames::event_func_5430()
{
    // event 1483_25
    {
        if (!(group_main_engine_1)) goto event_1483_25_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (99))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto event_1483_25_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickrelicflippanel_1240_instances)) goto event_1483_25_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickrelicflippanel_1240_instances)) goto event_1483_25_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_not_overlap(playersensortopbig_395_instances, gimmickrelicflippanel_1240_instances)) goto event_1483_25_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrelicflippanel_1240_instances)) goto event_1483_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1483_25_end: ;
}
void Frames::event_func_5431()
{
    // event 1484_25
    {
        if (!(group_main_engine_1)) goto event_1484_25_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_angle());
        }
    }
    event_1484_25_end: ;
}
void Frames::event_func_5432()
{
    // event 1485_25
    {
        if (!(group_main_engine_1)) goto event_1485_25_end;
        gimmickrelicflippanel_1240_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicflippanel_1240_instances.has_selection()) goto event_1485_25_end;
        for (ObjectIterator it(gimmickrelicflippanel_1240_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1485_25_end: ;
}
void Frames::event_func_5433()
{
    // event 1486_25
    bool or_result_1486_25 = false;
    bool or_temp_result_1486_25_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1486_25_0_end;
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!gimmickfireballspawner_1179_instances.has_selection()) goto or_event_1486_25_0_end;
        or_result_1486_25 = true;
        or_temp_result_1486_25_0 = true;
    }
    or_event_1486_25_0_end: ;
    gimmickfireballspawner_1179_instances.clear_saved_selection();
    if (or_temp_result_1486_25_0) {
        gimmickfireballspawner_1179_instances.save_selection();
    }
    // event 1486_25
    bool or_temp_result_1486_25_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1486_25_1_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto or_event_1486_25_1_end;
        or_result_1486_25 = true;
        or_temp_result_1486_25_1 = true;
        or_event_1486_25_1_end: ;
        gimmickfireballturretback_1166_instances.clear_saved_selection();
        if (or_temp_result_1486_25_1) {
            gimmickfireballturretback_1166_instances.save_selection();
        }
        if (!or_result_1486_25) goto or_final_or_event_1486_25_1_end;
        gimmickfireballturretback_1166_instances.empty_selection();
        gimmickfireballspawner_1179_instances.empty_selection();
        if (or_temp_result_1486_25_0) {
            gimmickfireballspawner_1179_instances.restore_selection();
        }
        if (or_temp_result_1486_25_1) {
            gimmickfireballturretback_1166_instances.restore_selection();
        }
        {
            loop_fireball_launcher_running = true;
            int times = int(1);
            loop_fireball_launcher_index = 0;
            while (loop_fireball_launcher_index < times) {
                loop_fireball_launcher_25();
                if (!loop_fireball_launcher_running) break;
                loop_fireball_launcher_index++;
            }
        }
    }
    or_final_or_event_1486_25_1_end: ;
}
void Frames::event_func_5434()
{
    // event 1493_25
    {
        if (!(group_main_engine_1)) goto event_1493_25_end;
        gimmickfireball_1096_instances.clear_selection();
        gimmickfireballturretback_1166_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1493_25_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_single(gimmickfireballturretback_1166_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1493_25_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->set_y(((Active*)get_single(gimmickfireballturretback_1166_instances, it.current_index, default_active_instance))->get_y());
        }
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1493_25_end: ;
}
void Frames::event_func_5435()
{
    // event 1494_25
    {
        if (!(group_main_engine_1)) goto event_1494_25_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto event_1494_25_end;
        gimmickfireball_1096_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1494_25_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->set_direction(((Active*)get_single(gimmickfireballturretback_1166_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickfireballturretback_1166_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_single(gimmickfireballturretback_1166_instances, it.current_index, default_active_instance))->get_action_y());
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1494_25_end: ;
}
void Frames::event_func_5436()
{
    // event 1495_25
    {
        if (!(group_main_engine_1)) goto event_1495_25_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto event_1495_25_end;
        gimmickfireball_1096_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1495_25_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->set_direction(((Active*)get_single(gimmickfireballturretback_1166_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1495_25_end: ;
}
void Frames::event_func_5437()
{
    // event 1496_25
    {
        if (!(group_main_engine_1)) goto event_1496_25_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(6))) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto event_1496_25_end;
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1496_25_end: ;
}
void Frames::event_func_5438()
{
    // event 1529_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1529_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1529_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1529_25_end;
        if (not_always_1529_25 > loop_count) {
            not_always_1529_25 = loop_count + 2;
            goto event_1529_25_end;
        }
        not_always_1529_25 = loop_count + 2;
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
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
            group_pause_1 = false;
    
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1529_25_end: ;
}
void Frames::event_func_5439()
{
    // event 1530_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1530_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (-20))) goto event_1530_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1530_25_end: ;
}
void Frames::event_func_5440()
{
    // event 1532_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1532_25_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1532_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1532_25_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -2);
    }
    event_1532_25_end: ;
}
void Frames::event_func_5441()
{
    // event 1533_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1533_25_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1533_25_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1533_25_end;
        global_values->set(4, -1);
        next_frame = index - 1 + 0;    
    
    }
    event_1533_25_end: ;
}
void Frames::event_func_5442()
{
    // event 1547_25
    {
        if (!(group_main_engine_1)) goto event_1547_25_end;
        ((Active*)get_instance(clockdial2_1246_instances))->set_angle(0-(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/(80000/math_helper/360.0))%math_helper%360, 0);
        ((Active*)get_instance(clockdial1_1245_instances))->set_angle(0-(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/(10000/math_helper/360.0))%math_helper%360, 0);
    }
    event_1547_25_end: ;
}
void Frames::event_func_5443()
{
    // event 1548_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1548_25_end;
        if (not_always_1548_25 > loop_count) {
            not_always_1548_25 = loop_count + 2;
            goto event_1548_25_end;
        }
        not_always_1548_25 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 48);
    }
    event_1548_25_end: ;
}
void Frames::event_func_5444()
{
    // event 1550_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1550_25_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1550_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(1))) goto event_1550_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (1000))) goto event_1550_25_end;
        minibossrailing_923_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossrailing_923(116, 336), 2);
            minibossrailing_923_instances.add_back();
        }
        minibossbarrier_924_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossbarrier_924(116, 336), 2);
            minibossbarrier_924_instances.add_back();
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(116, 360), 2);
            effectswhiteburst_5_instances.add_back();
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1550_25_end: ;
}
void Frames::event_func_5445()
{
    // event 1551_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1551_25_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1551_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(2))) goto event_1551_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1000))) goto event_1551_25_end;
        minibossrailing2_1165_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossrailing2_1165(116, 1424), 2);
            minibossrailing2_1165_instances.add_back();
        }
        minibossbarrier_924_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossbarrier_924(116, 1424), 2);
            minibossbarrier_924_instances.add_back();
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(116, 1448), 2);
            effectswhiteburst_5_instances.add_back();
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1551_25_end: ;
}
void Frames::event_func_5446()
{
    // event 1553_25
    {
        if (!(group_main_engine_1)) goto event_1553_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (100))) goto event_1553_25_end;
        global_values->set(4, 2);
        global_values->set(5, 6360);
        global_values->set(6, 256);
    }
    event_1553_25_end: ;
}
void Frames::event_func_5447()
{
    // event 1556_25
    {
        if (!(group_main_engine_1)) goto event_1556_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(2))) goto event_1556_25_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 587, 2328, 825, 2567)) > (0))) goto event_1556_25_end;
        if (!((((Active*)get_instance(gimmickaxletunnel_1262_instances))->get_angle()) != (((Active*)get_instance(gimmickaxletunnel_1262_instances))->alterables->values.get(0)))) goto event_1556_25_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing2_1165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(2);
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
        ((Active*)get_instance(guicompass_1270_instances))->alterables->flags.enable(0);
    }
    event_1556_25_end: ;
}
