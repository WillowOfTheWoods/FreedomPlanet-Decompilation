#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_2_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_46();
}
void Frames::loop_wrapper_sound_attack1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_46(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_uppercut3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_46();
}
void Frames::loop_wrapper_play_music_6_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_46();
}
void Frames::loop_wrapper_sound_go0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_process_call_me_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_46(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_46();
}
void Frames::loop_wrapper_sound_explode3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_11104()
{
    // event 1948_46
    {
        if (!(group_main_engine_1)) goto event_1948_46_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1948_46_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1948_46_end;
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, ((Active*)col_instance_2)->alterables->values.get(0)-180);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
    }
    event_1948_46_end: ;
}
void Frames::col_17_46()
{
    event_func_11104();
}
void Frames::event_func_11105()
{
    // event 1458_46
    {
        if (!(group_main_engine_1)) goto event_1458_46_end;
        if (((Active*)col_instance_2)->test_animation(7)) goto event_1458_46_end;
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        media.play_id(SOUND_COMMON_BOMBACTIVATE_172, -1, 1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(1);
    }
    event_1458_46_end: ;
}
void Frames::col_21_46()
{
    event_func_11105();
}
void Frames::event_func_11106()
{
    // event 1950_46
    {
        if (!(group_main_engine_1)) goto event_1950_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1950_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1950_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1950_46_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) == (2))) goto event_1950_46_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1950_46_0; single_instance_1950_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->get_action_x() - ((Active*)col_instance_2)->layer->off_x + 0, ((Active*)col_instance_2)->get_action_y() - ((Active*)col_instance_2)->layer->off_y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1950_46_0 == NULL)
                single_instance_1950_46_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1950_46_end: ;
}
void Frames::event_func_11107()
{
    // event 1951_46
    {
        if (!(group_main_engine_1)) goto event_1951_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1951_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1951_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1951_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1951_46_end: ;
}
void Frames::col_23_46()
{
    event_func_11106();
    event_func_11107();
}
void Frames::event_func_11108()
{
    // event 1930_46
    {
        if (!(group_main_engine_1)) goto event_1930_46_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1930_46_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) > (0))) goto event_1930_46_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        {
            FrameObject * parent = ((Active*)col_instance_2);
            if (parent == NULL) goto pos_end_1930_46_0;
            ((Active*)get_instance(bosslavasplash1_2745_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1930_46_0: ;
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_visible(true);
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1930_46_end: ;
}
void Frames::event_func_11109()
{
    // event 1931_46
    {
        if (!(group_main_engine_1)) goto event_1931_46_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1931_46_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) < (0))) goto event_1931_46_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        {
            FrameObject * parent = ((Active*)col_instance_2);
            if (parent == NULL) goto pos_end_1931_46_0;
            ((Active*)get_instance(bosslavasplash2_2746_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1931_46_0: ;
        }
        ((Active*)get_instance(bosslavasplash2_2746_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_visible(true);
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1931_46_end: ;
}
void Frames::col_24_46()
{
    event_func_11108();
    event_func_11109();
}
void Frames::event_func_11110()
{
    // event 1947_46
    {
        if (!(group_main_engine_1)) goto event_1947_46_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (2))) goto event_1947_46_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1947_46_0; single_instance_1947_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->get_action_x() - ((Active*)col_instance_1)->layer->off_x + 0, ((Active*)col_instance_1)->get_action_y() - ((Active*)col_instance_1)->layer->off_y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1947_46_0 == NULL)
                single_instance_1947_46_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1947_46_end: ;
}
void Frames::col_29_46()
{
    event_func_11110();
}
void Frames::event_func_11111()
{
    // event 1744_46
    {
        if (!(group_main_engine_1)) goto event_1744_46_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) == (1))) goto event_1744_46_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(1))) goto event_1744_46_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_1))->set_visible(false);
        FrameObject * single_instance_1744_46_0; single_instance_1744_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1744_46_0 == NULL)
                single_instance_1744_46_0 = new_obj;
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    event_1744_46_end: ;
}
void Frames::col_33_46()
{
    event_func_11111();
}
void Frames::test_collisions_46()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemylavasquidlaser_2676_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 2, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 8, 1, (EventFunction)&Frames::col_8_44);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 33554432, 2, (EventFunction)&Frames::col_7_44);
    test_collisions(playerreflect_447_instances, enemypushuplaser2_2571_instances, 16, 1, (EventFunction)&Frames::col_16_44);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser_2570_instances, 2, 1, (EventFunction)&Frames::col_12_44);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 2, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(playerreflect_447_instances, enemylavasquidlaser_2676_instances, 32, 2, (EventFunction)&Frames::col_16_45);
    test_collisions(shieldmagnetic_317_instances, bossspikelauncher_2725_instances, 1, 1, (EventFunction)&Frames::col_17_46);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser3_2572_instances, 4, 1, (EventFunction)&Frames::col_1_44);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playercharactersensor_383_instances, bosssyntaxspiderweb_2747_instances, 8, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(playersensorbottombig_397_instances, hazardfloortrap_2748_instances, 1, 1, (EventFunction)&Frames::col_21_46);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 16, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(playercharactersensor_383_instances, bossspikelauncher_2725_instances, 32, 2, (EventFunction)&Frames::col_23_46);
    test_collisions(hazardlavafall2_2724_instances, bosssyntaxspiderlavacannon_2742_instances, 1, 1, (EventFunction)&Frames::col_24_46);
    test_collisions(playerreflect_447_instances, enemypushuplaser_2570_instances, 64, 2, (EventFunction)&Frames::col_9_44);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    ObjectList::iterator it1, it2;
    for (it1 = bossrobosquidleftarm_2749_instances.begin(); it1 != bossrobosquidleftarm_2749_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_46();
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
    for (it1 = bossspikelauncher_2725_instances.begin(); it1 != bossspikelauncher_2725_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_29_46();
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
    for (it1 = bossrobosquidrightarm_2750_instances.begin(); it1 != bossrobosquidrightarm_2750_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_46();
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
void Frames::event_func_11112()
{
    // event 534_46
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_534_46_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_534_46_end;
        FrameObject * single_instance_534_46_0; single_instance_534_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_534_46_0 == NULL)
                    single_instance_534_46_0 = new_obj;
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
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_534_46_end: ;
}
void Frames::event_func_11113()
{
    // event 551_46
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_551_46_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_551_46_end;
        FrameObject * single_instance_551_46_0; single_instance_551_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_551_46_0 == NULL)
                    single_instance_551_46_0 = new_obj;
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
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_551_46_end: ;
}
void Frames::event_func_11114()
{
    // event 685_46
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_685_46_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_685_46_end;
        FrameObject * single_instance_685_46_0; single_instance_685_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_685_46_0 == NULL)
                    single_instance_685_46_0 = new_obj;
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
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_685_46_end: ;
}
void Frames::event_func_11115()
{
    // event 1428_46
    {
        if (!(group_main_engine_1)) goto event_1428_46_end;
        levelpistonplatformmask_2685_instances.clear_selection();
        for (ObjectIterator it(levelpistonplatformmask_2685_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelpistonplatform1_2717_instances, it.current_index));
            if (parent == NULL) goto pos_end_1428_46_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1428_46_0: ;
        }
    }
    event_1428_46_end: ;
}
void Frames::event_func_11116()
{
    // event 1430_46
    {
        if (!(group_main_engine_1)) goto event_1430_46_end;
        if (((Active*)get_instance(hazardfireup_2226_instances))->is_near_border(-50)) goto event_1430_46_end;
        if (!(((Active*)get_instance(hazardfireup_2226_instances))->test_directions(1))) goto event_1430_46_end;
        hazardfireup_2226_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, player_389_instances)) goto event_1430_46_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, playersensortopbig_395_instances)) goto event_1430_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1430_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1430_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1430_46_end;
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
    event_1430_46_end: ;
}
void Frames::event_func_11117()
{
    // event 1459_46
    {
        if (!(group_main_engine_1)) goto event_1459_46_end;
        hazardfloortrap_2748_instances.clear_selection();
        for (ObjectIterator it(hazardfloortrap_2748_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!hazardfloortrap_2748_instances.has_selection()) goto event_1459_46_end;
        if (not_always_1459_46 > loop_count) {
            not_always_1459_46 = loop_count + 2;
            goto event_1459_46_end;
        }
        not_always_1459_46 = loop_count + 2;
        media.play_id(SOUND_COMMON_BOMBTICK_173, -1, 1);
    }
    event_1459_46_end: ;
}
void Frames::event_func_11118()
{
    // event 1460_46
    {
        if (!(group_main_engine_1)) goto event_1460_46_end;
        hazardfloortrap_2748_instances.clear_selection();
        for (ObjectIterator it(hazardfloortrap_2748_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!hazardfloortrap_2748_instances.has_selection()) goto event_1460_46_end;
        for (ObjectIterator it(hazardfloortrap_2748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1460_46_end: ;
}
void Frames::event_func_11119()
{
    // event 1461_46
    {
        if (!(group_main_engine_1)) goto event_1461_46_end;
        hazardfloortrap_2748_instances.clear_selection();
        for (ObjectIterator it(hazardfloortrap_2748_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (35))) { it.deselect(); continue; }
        }
        if (!hazardfloortrap_2748_instances.has_selection()) goto event_1461_46_end;
        for (ObjectIterator it(hazardfloortrap_2748_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1461_46_0; single_instance_1461_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardfloortrap_2748_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 16, parent->y + -16), parent->layer);
                if (single_instance_1461_46_0 == NULL)
                    single_instance_1461_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1461_46_0))->force_frame(9);
        FrameObject * single_instance_1461_46_1; single_instance_1461_46_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardfloortrap_2748_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 32, parent->y + 0), parent->layer);
                if (single_instance_1461_46_1 == NULL)
                    single_instance_1461_46_1 = new_obj;
            }
        }
    }
    event_1461_46_end: ;
}
void Frames::event_func_11120()
{
    // event 1564_46
    {
        if (!(group_main_engine_1)) goto event_1564_46_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1564_46_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1564_46_0; single_instance_1564_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1564_46_0 == NULL)
                    single_instance_1564_46_0 = new_obj;
            }
        }
        FrameObject * single_instance_1564_46_1; single_instance_1564_46_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1564_46_1 == NULL)
                    single_instance_1564_46_1 = new_obj;
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
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1564_46_end: ;
}
void Frames::event_func_11121()
{
    // event 1596_46
    {
        if (!(group_main_engine_1)) goto event_1596_46_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1596_46_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1596_46_end;
        FrameObject * single_instance_1596_46_0; single_instance_1596_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1596_46_0 == NULL)
                    single_instance_1596_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1596_46_0))->set_direction(2);
        FrameObject * single_instance_1596_46_1; single_instance_1596_46_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1596_46_1 == NULL)
                    single_instance_1596_46_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1596_46_2; single_instance_1596_46_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1596_46_2 == NULL)
                    single_instance_1596_46_2 = new_obj;
            }
        }
        FrameObject * single_instance_1596_46_3; single_instance_1596_46_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1596_46_3 == NULL)
                    single_instance_1596_46_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1596_46_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1596_46_2))->move_back();
        ((Active*)((Active*)single_instance_1596_46_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1596_46_end: ;
}
void Frames::event_func_11122()
{
    // event 1597_46
    bool or_result_1597_46 = false;
    bool or_temp_result_1597_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1597_46_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1597_46_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1597_46_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1597_46_0_end;
        or_result_1597_46 = true;
        or_temp_result_1597_46_0 = true;
    }
    or_event_1597_46_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1597_46_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1597_46
    bool or_temp_result_1597_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1597_46_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1597_46_1_end;
        or_result_1597_46 = true;
        or_temp_result_1597_46_1 = true;
        or_event_1597_46_1_end: ;
        if (or_temp_result_1597_46_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1597_46) goto or_final_or_event_1597_46_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1597_46_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1597_46_0 || or_temp_result_1597_46_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1597_46_0; single_instance_1597_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1597_46_0 == NULL)
                    single_instance_1597_46_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1597_46_1_end: ;
}
void Frames::event_func_11123()
{
    // event 1607_46
    {
        if (!(group_main_engine_1)) goto event_1607_46_end;
        enemypushup_2656_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemypushup_2656_instances, enemylimiter_350_instances)) goto event_1607_46_end;
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(enemypushup_2656_instances))->set_direction((((Active*)get_instance(enemypushup_2656_instances))->get_direction()+1)%math_helper%2);
    }
    event_1607_46_end: ;
}
void Frames::event_func_11124()
{
    // event 1608_46
    {
        if (!(group_main_engine_1)) goto event_1608_46_end;
        {
            {
                foreach_instance_pushup = ((Active*)get_instance(enemypushup_2656_instances));
                foreach_pushup_44();
            }
        }
    }
    event_1608_46_end: ;
}
void Frames::event_func_11125()
{
    // event 1609_46
    {
        if (!(group_main_engine_1)) goto event_1609_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(6))) goto event_1609_46_end;
        if (((Active*)get_instance(enemypushup_2656_instances))->is_near_border(-80)) goto event_1609_46_end;
        if (((Active*)get_instance(enemypushup_2656_instances))->test_animation(5)) goto event_1609_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.disable(2);
    }
    event_1609_46_end: ;
}
void Frames::event_func_11126()
{
    // event 1610_46
    {
        if (!(group_main_engine_1)) goto event_1610_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(6))) goto event_1610_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(3)) > (80))) goto event_1610_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->set_direction((((Active*)get_instance(enemypushup_2656_instances))->get_direction()+1)%math_helper%2);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(enemypushup_2656_instances))->force_animation(5);
        ((Active*)get_instance(enemypushup_2656_instances))->force_animation(0);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.disable(1);
    }
    event_1610_46_end: ;
}
void Frames::event_func_11127()
{
    // event 1611_46
    {
        if (!(group_main_engine_1)) goto event_1611_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(6))) goto event_1611_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(3)) == (20))) goto event_1611_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(1))) goto event_1611_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->force_animation(5);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->values.add(3, 1);
    }
    event_1611_46_end: ;
}
void Frames::event_func_11128()
{
    // event 1612_46
    {
        if (!(group_main_engine_1)) goto event_1612_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->is_animation_finished(5))) goto event_1612_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->force_animation(0);
        ((Active*)get_instance(enemypushup_2656_instances))->force_frame(7);
        ((Active*)get_instance(enemypushup_2656_instances))->restore_frame();
    }
    event_1612_46_end: ;
}
void Frames::event_func_11129()
{
    // event 1613_46
    {
        if (!(group_main_engine_1)) goto event_1613_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->test_animation(5))) goto event_1613_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->get_frame()) == (0))) goto event_1613_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(2))) goto event_1613_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->test_directions(1))) goto event_1613_46_end;
        enemypushup_2656_instances.clear_selection();
        FrameObject * single_instance_1613_46_0; single_instance_1613_46_0 = pick_random(enemypushup_2656_instances);
        if (single_instance_1613_46_0 == NULL) goto event_1613_46_end;
        ((Active*)((Active*)single_instance_1613_46_0))->alterables->flags.enable(2);
        media.play_id(SOUND_COMMON_BLASTER6_439, -1, 1);
        FrameObject * single_instance_1613_46_1; single_instance_1613_46_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser_2570(((Active*)single_instance_1613_46_0)->get_action_x() - ((Active*)single_instance_1613_46_0)->layer->off_x + 0, ((Active*)single_instance_1613_46_0)->get_action_y() - ((Active*)single_instance_1613_46_0)->layer->off_y + 20), ((Active*)single_instance_1613_46_0)->layer);
            if (single_instance_1613_46_1 == NULL)
                single_instance_1613_46_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1613_46_1))->set_direction(24);
    }
    event_1613_46_end: ;
}
void Frames::event_func_11130()
{
    // event 1614_46
    {
        if (!(group_main_engine_1)) goto event_1614_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->test_animation(5))) goto event_1614_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->get_frame()) == (0))) goto event_1614_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(2))) goto event_1614_46_end;
        if (((Active*)get_instance(enemypushup_2656_instances))->test_directions(1)) goto event_1614_46_end;
        enemypushup_2656_instances.clear_selection();
        FrameObject * single_instance_1614_46_0; single_instance_1614_46_0 = pick_random(enemypushup_2656_instances);
        if (single_instance_1614_46_0 == NULL) goto event_1614_46_end;
        ((Active*)((Active*)single_instance_1614_46_0))->alterables->flags.enable(2);
        FrameObject * single_instance_1614_46_1; single_instance_1614_46_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser_2570(((Active*)single_instance_1614_46_0)->get_action_x() - ((Active*)single_instance_1614_46_0)->layer->off_x + 0, ((Active*)single_instance_1614_46_0)->get_action_y() - ((Active*)single_instance_1614_46_0)->layer->off_y + -16), ((Active*)single_instance_1614_46_0)->layer);
            if (single_instance_1614_46_1 == NULL)
                single_instance_1614_46_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1614_46_1))->set_direction(8);
        media.play_id(SOUND_COMMON_BLASTER6_439, -1, 1);
    }
    event_1614_46_end: ;
}
void Frames::event_func_11131()
{
    // event 1615_46
    {
        if (!(group_main_engine_1)) goto event_1615_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_on(2))) goto event_1615_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->test_animation(5))) goto event_1615_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->get_frame()) > (0))) goto event_1615_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.disable(2);
    }
    event_1615_46_end: ;
}
void Frames::event_func_11132()
{
    // event 1618_46
    {
        if (!(group_main_engine_1)) goto event_1618_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(2)) == (0))) goto event_1618_46_end;
        {
            ((Active*)get_instance(enemypushup_2656_instances))->set_shader(NULL);
        }
    }
    event_1618_46_end: ;
}
void Frames::event_func_11133()
{
    // event 1619_46
    {
        if (!(group_main_engine_1)) goto event_1619_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(2)) > (0))) goto event_1619_46_end;
        {
            ((Active*)get_instance(enemypushup_2656_instances))->set_shader(Render::INVERT);
        }
    }
    event_1619_46_end: ;
}
void Frames::event_func_11134()
{
    // event 1620_46
    {
        if (!(group_main_engine_1)) goto event_1620_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(0)) <= (0))) goto event_1620_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_off(6))) goto event_1620_46_end;
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.enable(6);
        ((Active*)get_instance(enemypushup_2656_instances))->force_animation(0);
        ((Active*)get_instance(enemypushup_2656_instances))->set_visible(false);
        {
            loop_p_debris_running = true;
            int times = int(6);
            loop_p_debris_index = 0;
            while (loop_p_debris_index < times) {
                loop_p_debris_46();
                if (!loop_p_debris_running) break;
                loop_p_debris_index++;
            }
        }
    }
    event_1620_46_end: ;
}
void Frames::event_func_11135()
{
    // event 1655_46
    bool or_result_1655_46 = false;
    bool or_temp_result_1655_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1655_46_0_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1655_46_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemylavasquiddebris_2677_instances, qualifier_7)) goto or_event_1655_46_0_end;
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1655_46_0_end;
        or_result_1655_46 = true;
        or_temp_result_1655_46_0 = true;
    }
    or_event_1655_46_0_end: ;
    enemylavasquiddebris_2677_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1655_46_0) {
        qualifier_7.save_selection();
        enemylavasquiddebris_2677_instances.save_selection();
    }
    // event 1655_46
    bool or_temp_result_1655_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1655_46_1_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1655_46_1_end;
        or_result_1655_46 = true;
        or_temp_result_1655_46_1 = true;
        or_event_1655_46_1_end: ;
        if (or_temp_result_1655_46_1) {
            enemylavasquiddebris_2677_instances.save_selection();
        }
        if (!or_result_1655_46) goto or_final_or_event_1655_46_1_end;
        enemylavasquiddebris_2677_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1655_46_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1655_46_0 || or_temp_result_1655_46_1) {
            enemylavasquiddebris_2677_instances.restore_selection();
        }
        FrameObject * single_instance_1655_46_0; single_instance_1655_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquiddebris_2677_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1655_46_0 == NULL)
                    single_instance_1655_46_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_46();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1655_46_1_end: ;
}
void Frames::event_func_11136()
{
    // event 1663_46
    {
        if (!(group_main_engine_1)) goto event_1663_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1663_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1663_46_end;
        if (not_always_1663_46 > loop_count) {
            not_always_1663_46 = loop_count + 2;
            goto event_1663_46_end;
        }
        not_always_1663_46 = loop_count + 2;
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
        media.stop_channel(29-1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1663_46_end: ;
}
void Frames::event_func_11137()
{
    // event 1670_46
    {
        if (!(group_main_engine_1)) goto event_1670_46_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1670_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1670_46_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1) goto event_1670_46_end;
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
    event_1670_46_end: ;
}
void Frames::event_func_11138()
{
    // event 1709_46
    {
        if (!(group_main_engine_1)) goto event_1709_46_end;
        ((Active*)get_instance(tbwalllightanim_2603_instances))->force_frame((global_values->get(3)/math_helper/4)%math_helper%12);
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1709_46_end: ;
}
void Frames::event_func_11139()
{
    // event 1728_46
    {
        if (!(group_main_engine_1)) goto event_1728_46_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (49))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1728_46_end;
        hazardfloortrap_2748_instances.clear_selection();
        if (!((objects_in_zone(hazardfloortrap_2748_instances, 2407, 2276, 2913, 2603)) > (0))) goto event_1728_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (3000))) goto event_1728_46_end;
        if (!((global_values->get(23)) == (1))) goto event_1728_46_end;
        if (once_condition_1728_46) goto event_1728_46_end;
        once_condition_1728_46 = true;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        media.play(str_data_voices_eng_sx_sx_door_ogg_198, 20-1);
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1728_46_end: ;
}
void Frames::event_func_11140()
{
    // event 1729_46
    {
        if (!(group_main_engine_1)) goto event_1729_46_end;
        hazardfloortrap_2748_instances.clear_selection();
        if (!((objects_in_zone(hazardfloortrap_2748_instances, 2407, 2276, 2913, 2603)) == (0))) goto event_1729_46_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1729_46_end;
        if (!((global_values->get(23)) == (1))) goto event_1729_46_end;
        if (once_condition_1729_46) goto event_1729_46_end;
        once_condition_1729_46 = true;
        media.play(str_data_voices_eng_sx_sx_kidding_ogg_199, 20-1);
    }
    event_1729_46_end: ;
}
void Frames::event_func_11141()
{
    // event 1734_46
    {
        if (!(group_main_engine_1)) goto event_1734_46_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3678, 1713, 4680, 2271)) > (0))) goto event_1734_46_end;
        if (not_always_1734_46 > loop_count) {
            not_always_1734_46 = loop_count + 2;
            goto event_1734_46_end;
        }
        not_always_1734_46 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 2136);
    }
    event_1734_46_end: ;
}
void Frames::event_func_11142()
{
    // event 1735_46
    {
        if (!(group_main_engine_1)) goto event_1735_46_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3678, 1713, 4680, 2271)) == (0))) goto event_1735_46_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) < (2300))) goto event_1735_46_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1735_46_end: ;
}
void Frames::event_func_11143()
{
    // event 1736_46
    {
        if (!(group_main_engine_1)) goto event_1736_46_end;
        if (!((global_values->get(4)) < (2))) goto event_1736_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3048))) goto event_1736_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (3248))) goto event_1736_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (3200))) goto event_1736_46_end;
        global_values->set(4, 2);
        global_values->set(5, 3333);
        global_values->set(6, 3440);
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
    event_1736_46_end: ;
}
void Frames::event_func_11144()
{
    // event 1738_46
    {
        if (!(group_main_engine_1)) goto event_1738_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1738_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1738_46_end: ;
}
void Frames::event_func_11145()
{
    // event 1739_46
    {
        if (!(group_main_engine_1)) goto event_1739_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1739_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(5))%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(10)+cos_deg(((Active*)*it)->alterables->values.get(3)*2)*((Active*)*it)->alterables->values.get(16));
        }
        {
            FrameObject * parent = ((Active*)get_single(bossrobosquid_2752_instances));
            if (parent == NULL) goto pos_end_1739_46_0;
            ((Active*)get_instance(bossrobosquidglass_2751_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1739_46_0: ;
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.add(10, ((Active*)*it)->alterables->values.get(12));
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->alterables->values.set(1, ((Active*)get_single(bossrobosquid_2752_instances, default_active_instance))->alterables->values.get(14));
    }
    event_1739_46_end: ;
}
void Frames::event_func_11146()
{
    // event 1740_46
    {
        if (!(group_main_engine_1)) goto event_1740_46_end;
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->set_direction(0);
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->alterables->values.set(2, ((Active*)get_instance(bossrobosquid_2752_instances, default_active_instance))->alterables->values.get(17));
        bossrobosquidleftarm_2749_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        bossrobosquidrightarm_2750_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
    }
    event_1740_46_end: ;
}
void Frames::event_func_11147()
{
    // event 1741_46
    {
        if (!(group_main_engine_1)) goto event_1741_46_end;
        if (!((((Active*)get_instance(bossrobosquidglass_2751_instances))->alterables->values.get(2)) == (1))) goto event_1741_46_end;
        if (!(((Active*)get_instance(bossrobosquidglass_2751_instances))->flags & VISIBLE)) goto event_1741_46_end;
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->set_visible(false);
    }
    event_1741_46_end: ;
}
void Frames::event_func_11148()
{
    // event 1742_46
    {
        if (!(group_main_engine_1)) goto event_1742_46_end;
        bossrobosquidleftarm_2749_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquidleftarm_2749_instances.has_selection()) goto event_1742_46_end;
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0))-10);
            ((Active*)*it)->set_y(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.set(23, (((Active*)*it)->get_x()-((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->alterables->values.set(24, (((Active*)*it)->get_y()-((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_y())*0.1-5);
        }
    }
    event_1742_46_end: ;
}
void Frames::event_func_11149()
{
    // event 1743_46
    {
        if (!(group_main_engine_1)) goto event_1743_46_end;
        bossrobosquidleftarm_2749_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossrobosquidleftarm_2749_instances.has_selection()) goto event_1743_46_end;
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.2);
        }
    }
    event_1743_46_end: ;
}
void Frames::event_func_11150()
{
    // event 1745_46
    {
        if (!(group_main_engine_1)) goto event_1745_46_end;
        bossrobosquidleftarm_2749_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!bossrobosquidleftarm_2749_instances.has_selection()) goto event_1745_46_end;
        for (ObjectIterator it(bossrobosquidleftarm_2749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1745_46_end: ;
}
void Frames::event_func_11151()
{
    // event 1746_46
    {
        if (!(group_main_engine_1)) goto event_1746_46_end;
        bossrobosquidrightarm_2750_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquidrightarm_2750_instances.has_selection()) goto event_1746_46_end;
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0))+10);
            ((Active*)*it)->set_y(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.set(23, (((Active*)*it)->get_x()-((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->alterables->values.set(24, (((Active*)*it)->get_y()-((Active*)get_instance(bossrobosquid_2752_instances, it.current_index, default_active_instance))->get_y())*0.1-5);
        }
    }
    event_1746_46_end: ;
}
void Frames::event_func_11152()
{
    // event 1747_46
    {
        if (!(group_main_engine_1)) goto event_1747_46_end;
        bossrobosquidrightarm_2750_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossrobosquidrightarm_2750_instances.has_selection()) goto event_1747_46_end;
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.2);
        }
    }
    event_1747_46_end: ;
}
void Frames::event_func_11153()
{
    // event 1749_46
    {
        if (!(group_main_engine_1)) goto event_1749_46_end;
        bossrobosquidrightarm_2750_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!bossrobosquidrightarm_2750_instances.has_selection()) goto event_1749_46_end;
        for (ObjectIterator it(bossrobosquidrightarm_2750_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1749_46_end: ;
}
void Frames::event_func_11154()
{
    // event 1750_46
    {
        if (!(group_main_engine_1)) goto event_1750_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) < (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1750_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+0.1, 0));
        }
    }
    event_1750_46_end: ;
}
void Frames::event_func_11155()
{
    // event 1751_46
    {
        if (!(group_main_engine_1)) goto event_1751_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1751_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
        }
    }
    event_1751_46_end: ;
}
void Frames::event_func_11156()
{
    // event 1752_46
    bool or_result_1752_46 = false;
    bool or_temp_result_1752_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1752_46_0_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossrobosquidglass_2751_instances, default_active_instance))->alterables->values.get(3)+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1752_46_0_end;
        or_result_1752_46 = true;
        or_temp_result_1752_46_0 = true;
    }
    or_event_1752_46_0_end: ;
    bossrobosquid_2752_instances.clear_saved_selection();
    if (or_temp_result_1752_46_0) {
        bossrobosquid_2752_instances.save_selection();
    }
    // event 1752_46
    bool or_temp_result_1752_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1752_46_1_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossrobosquidglass_2751_instances, default_active_instance))->alterables->values.get(3)-240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1752_46_1_end;
        or_result_1752_46 = true;
        or_temp_result_1752_46_1 = true;
        or_event_1752_46_1_end: ;
        if (or_temp_result_1752_46_1) {
            bossrobosquid_2752_instances.save_selection();
        }
        if (!or_result_1752_46) goto or_final_or_event_1752_46_1_end;
        bossrobosquid_2752_instances.empty_selection();
        if (or_temp_result_1752_46_0 || or_temp_result_1752_46_1) {
            bossrobosquid_2752_instances.restore_selection();
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 4);
        }
    }
    or_final_or_event_1752_46_1_end: ;
}
void Frames::event_func_11157()
{
    // event 1753_46
    bool or_result_1753_46 = false;
    bool or_temp_result_1753_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1753_46_0_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossrobosquidglass_2751_instances, default_active_instance))->alterables->values.get(3)+240))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1753_46_0_end;
        or_result_1753_46 = true;
        or_temp_result_1753_46_0 = true;
    }
    or_event_1753_46_0_end: ;
    bossrobosquid_2752_instances.clear_saved_selection();
    if (or_temp_result_1753_46_0) {
        bossrobosquid_2752_instances.save_selection();
    }
    // event 1753_46
    bool or_temp_result_1753_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1753_46_1_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossrobosquidglass_2751_instances, default_active_instance))->alterables->values.get(3)-240))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1753_46_1_end;
        or_result_1753_46 = true;
        or_temp_result_1753_46_1 = true;
        or_event_1753_46_1_end: ;
        if (or_temp_result_1753_46_1) {
            bossrobosquid_2752_instances.save_selection();
        }
        if (!or_result_1753_46) goto or_final_or_event_1753_46_1_end;
        bossrobosquid_2752_instances.empty_selection();
        if (or_temp_result_1753_46_0 || or_temp_result_1753_46_1) {
            bossrobosquid_2752_instances.restore_selection();
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    or_final_or_event_1753_46_1_end: ;
}
void Frames::event_func_11158()
{
    // event 1754_46
    {
        if (!(group_main_engine_1)) goto event_1754_46_end;
        if (!((global_values->get(3)%math_helper%100) == (0))) goto event_1754_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1754_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 2);
        }
    }
    event_1754_46_end: ;
}
void Frames::event_func_11159()
{
    // event 1755_46
    bool or_result_1755_46 = false;
    bool or_temp_result_1755_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1755_46_0_end;
        if (!((global_values->get(3)%math_helper%30) == (0))) goto or_event_1755_46_0_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1755_46_0_end;
        or_result_1755_46 = true;
        or_temp_result_1755_46_0 = true;
    }
    or_event_1755_46_0_end: ;
    bossrobosquid_2752_instances.clear_saved_selection();
    if (or_temp_result_1755_46_0) {
        bossrobosquid_2752_instances.save_selection();
    }
    // event 1755_46
    bool or_temp_result_1755_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1755_46_1_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto or_event_1755_46_1_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1755_46_1_end;
        or_result_1755_46 = true;
        or_temp_result_1755_46_1 = true;
        or_event_1755_46_1_end: ;
        if (or_temp_result_1755_46_1) {
            bossrobosquid_2752_instances.save_selection();
        }
        if (!or_result_1755_46) goto or_final_or_event_1755_46_1_end;
        bossrobosquid_2752_instances.empty_selection();
        if (or_temp_result_1755_46_0 || or_temp_result_1755_46_1) {
            bossrobosquid_2752_instances.restore_selection();
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, -4);
        }
        bossrobosquidjet_2753_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidjet_2753_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(315, 0);
            ((Active*)*it)->alterables->values.set(0, 30);
            ((Active*)*it)->alterables->values.set(1, -10);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1755_46_0; single_instance_1755_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyhomingbullet_2568(parent->x + 30, parent->y + -10), parent->layer);
                if (single_instance_1755_46_0 == NULL)
                    single_instance_1755_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1755_46_0))->set_direction(28);
        ((Active*)((Active*)single_instance_1755_46_0))->get_movement()->set_speed(50);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(20, 1);
        }
    }
    or_final_or_event_1755_46_1_end: ;
}
void Frames::event_func_11160()
{
    // event 1756_46
    bool or_result_1756_46 = false;
    bool or_temp_result_1756_46_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_46_0_end;
        if (!((global_values->get(3)%math_helper%30) == (0))) goto or_event_1756_46_0_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1756_46_0_end;
        or_result_1756_46 = true;
        or_temp_result_1756_46_0 = true;
    }
    or_event_1756_46_0_end: ;
    bossrobosquid_2752_instances.clear_saved_selection();
    if (or_temp_result_1756_46_0) {
        bossrobosquid_2752_instances.save_selection();
    }
    // event 1756_46
    bool or_temp_result_1756_46_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_46_1_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto or_event_1756_46_1_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(20)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto or_event_1756_46_1_end;
        or_result_1756_46 = true;
        or_temp_result_1756_46_1 = true;
        or_event_1756_46_1_end: ;
        if (or_temp_result_1756_46_1) {
            bossrobosquid_2752_instances.save_selection();
        }
        if (!or_result_1756_46) goto or_final_or_event_1756_46_1_end;
        bossrobosquid_2752_instances.empty_selection();
        if (or_temp_result_1756_46_0 || or_temp_result_1756_46_1) {
            bossrobosquid_2752_instances.restore_selection();
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 4);
        }
        bossrobosquidjet_2753_instances.clear_selection();
        for (ObjectIterator it(bossrobosquidjet_2753_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(215, 0);
            ((Active*)*it)->alterables->values.set(0, -30);
            ((Active*)*it)->alterables->values.set(1, -10);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1756_46_0; single_instance_1756_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyhomingbullet_2568(parent->x + -30, parent->y + -10), parent->layer);
                if (single_instance_1756_46_0 == NULL)
                    single_instance_1756_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1756_46_0))->set_direction(20);
        ((Active*)((Active*)single_instance_1756_46_0))->get_movement()->set_speed(50);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(20, 1);
        }
    }
    or_final_or_event_1756_46_1_end: ;
}
void Frames::event_func_11161()
{
    // event 1757_46
    {
        if (!(group_main_engine_1)) goto event_1757_46_end;
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->set_x(((Active*)get_instance(bossrobosquid_2752_instances, default_active_instance))->get_x()+((Active*)get_instance(bossrobosquidjet_2753_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->set_y(((Active*)get_instance(bossrobosquid_2752_instances, default_active_instance))->get_y()+((Active*)get_instance(bossrobosquidjet_2753_instances))->alterables->values.get(1));
    }
    event_1757_46_end: ;
}
void Frames::event_func_11162()
{
    // event 1758_46
    {
        if (!(group_main_engine_1)) goto event_1758_46_end;
        if (!(((Active*)get_instance(bossrobosquidjet_2753_instances))->is_animation_finished(7))) goto event_1758_46_end;
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->set_visible(false);
    }
    event_1758_46_end: ;
}
void Frames::event_func_11163()
{
    // event 1759_46
    {
        if (!(group_main_engine_1)) goto event_1759_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1759_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        FrameObject * single_instance_1759_46_0; single_instance_1759_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeycard_2643(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1759_46_0 == NULL)
                    single_instance_1759_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1759_46_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_1759_46_0))->alterables->values.set(1, -4);
        media.play_id(SOUND_COMMON_GLASSBREAK_2_134, -1, 1);
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 5);
        }
    }
    event_1759_46_end: ;
}
void Frames::event_func_11164()
{
    // event 1760_46
    {
        if (!(group_main_engine_1)) goto event_1760_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (0))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1760_46_end;
        FrameObject * single_instance_1760_46_0; single_instance_1760_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1760_46_0 == NULL)
                    single_instance_1760_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1760_46_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1760_46_0))->force_frame(35+((Active*)get_single(bossrobosquid_2752_instances, default_active_instance))->alterables->values.get(19));
        ((Active*)((Active*)single_instance_1760_46_0))->set_direction(4+((Active*)get_single(bossrobosquid_2752_instances, default_active_instance))->alterables->values.get(19)*2);
        {
            ((Active*)single_instance_1760_46_0)->set_shader(Render::ADDITIVE);
        }
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(19, 1);
        }
    }
    event_1760_46_end: ;
}
void Frames::event_func_11165()
{
    // event 1761_46
    {
        if (!(group_main_engine_1)) goto event_1761_46_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1761_46_end;
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.4);
        }
    }
    event_1761_46_end: ;
}
void Frames::event_func_11166()
{
    // event 1762_46
    {
        if (!(group_main_engine_1)) goto event_1762_46_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1762_46_end;
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1762_46_end: ;
}
void Frames::event_func_11167()
{
    // event 1763_46
    {
        if (!(group_main_engine_1)) goto event_1763_46_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1763_46_end;
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1763_46_end: ;
}
void Frames::event_func_11168()
{
    // event 1765_46
    {
        if (!(group_main_engine_1)) goto event_1765_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1765_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(15, 1);
        }
    }
    event_1765_46_end: ;
}
void Frames::event_func_11169()
{
    // event 1766_46
    {
        if (!(group_main_engine_1)) goto event_1766_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1766_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -30, parent->y + -10), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 30, parent->y + -10), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
    }
    event_1766_46_end: ;
}
void Frames::event_func_11170()
{
    // event 1767_46
    {
        if (!(group_main_engine_1)) goto event_1767_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) > (60))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1767_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 30);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(5, 8);
            ((Active*)*it)->alterables->values.set(16, 2);
            ((Active*)*it)->alterables->values.set(14, 2);
        }
    }
    event_1767_46_end: ;
}
