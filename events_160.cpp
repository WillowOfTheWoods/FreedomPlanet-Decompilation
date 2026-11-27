#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12597()
{
    // event 2162_58
    {
        if (!(group_main_engine_1)) goto event_2162_58_end;
        if (!((global_values->get(4)) < (5))) goto event_2162_58_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_midboss_ogg_50, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2162_58_end: ;
}
void Frames::event_func_12598()
{
    // event 2163_58
    {
        if (!(group_main_engine_1)) goto event_2163_58_end;
        if (!((global_values->get(4)) >= (5))) goto event_2163_58_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss2_ogg_127, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2163_58_end: ;
}
void Frames::loop_play_music_4_58()
{
    event_func_12597();
    event_func_12598();
}
void Frames::event_func_12599()
{
    // event 1724_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1724_58_end;
        if (!((global_values->get(26)) == (0))) goto event_1724_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1724_58_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1724_58_end: ;
}
void Frames::event_func_12600()
{
    // event 1725_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1725_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1725_58_end: ;
}
void Frames::event_func_12601()
{
    // event 1726_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1726_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1726_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1726_58_end: ;
}
void Frames::event_func_12602()
{
    // event 1758_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1758_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1758_58_end: ;
}
void Frames::loop_voice_58()
{
    event_func_12599();
    event_func_12600();
    event_func_12601();
    event_func_12602();
}
void Frames::loop_wrapper_sound_hurt1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_58(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_58(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_58(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_58(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_58(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_58(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_58(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_58(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_58(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_58();
}
void Frames::loop_wrapper_play_music_5_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_56();
}
void Frames::loop_wrapper_play_music_6_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_56();
}
void Frames::loop_wrapper_sound_go0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_58(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_56();
}
void Frames::loop_wrapper_sound_explode3_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_58(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_58(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_58(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_12603()
{
    // event 1441_58
    {
        if (!(group_main_engine_1)) goto event_1441_58_end;
        if (!((((Active*)get_instance(hazardshurikenturn_3156_instances))->get_x()) == (((Active*)foreach_instance_s)->get_x()))) goto event_1441_58_end;
        if (!((((Active*)get_instance(hazardshurikenturn_3156_instances))->get_y()) == (((Active*)foreach_instance_s)->get_y()))) goto event_1441_58_end;
        ((Active*)((Active*)foreach_instance_s))->alterables->values.set(0, (((Active*)foreach_instance_s)->alterables->values.get(0)+270)%math_helper%360);
        ((Active*)((Active*)foreach_instance_s))->set_x(((Active*)foreach_instance_s)->get_x()+cos_deg(((Active*)foreach_instance_s)->alterables->values.get(0))*((Active*)foreach_instance_s)->alterables->values.get(1));
        ((Active*)((Active*)foreach_instance_s))->set_y(((Active*)foreach_instance_s)->get_y()+sin_deg(((Active*)foreach_instance_s)->alterables->values.get(0))*((Active*)foreach_instance_s)->alterables->values.get(1)*-1);
    }
    event_1441_58_end: ;
}
void Frames::foreach_s_58()
{
    event_func_12603();
}
void Frames::event_func_12604()
{
    // event 1650_58
    {
        if (!(group_main_engine_1)) goto event_1650_58_end;
        if (((Active*)foreach_instance_biker)->is_near_border(-60)) goto event_1650_58_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1650_58_end;
        FrameObject * single_instance_1650_58_0; single_instance_1650_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust01_332(((Active*)foreach_instance_biker)->get_action_x() - ((Active*)foreach_instance_biker)->layer->off_x + 0, ((Active*)foreach_instance_biker)->get_action_y() - ((Active*)foreach_instance_biker)->layer->off_y + 0), ((Active*)foreach_instance_biker)->layer);
            if (single_instance_1650_58_0 == NULL)
                single_instance_1650_58_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1650_58_0))->get_movement()->set_speed(8);
        ((Active*)((Active*)single_instance_1650_58_0))->set_direction(get_direction_int(((Active*)single_instance_1650_58_0)->x, ((Active*)single_instance_1650_58_0)->y, ((Active*)foreach_instance_biker)->x + 0, ((Active*)foreach_instance_biker)->y + 9));
        ((Active*)((Active*)single_instance_1650_58_0))->set_direction(((Active*)single_instance_1650_58_0)->get_direction()+16);
        ((Active*)((Active*)single_instance_1650_58_0))->set_scale(0.7);
    }
    event_1650_58_end: ;
}
void Frames::foreach_biker_58()
{
    event_func_12604();
}
void Frames::event_func_12605()
{
    // event 1629_58
    {
        if (!(group_main_engine_1)) goto event_1629_58_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(2))) goto event_1629_58_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        ((Active*)((Active*)col_instance_1))->alterables->values.sub(0, 5);
    }
    event_1629_58_end: ;
}
void Frames::col_7_58()
{
    event_func_12605();
}
void Frames::test_collisions_58()
{
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(objectcrystal_279_instances, gimmickbarrel_3159_instances, 4, 1, (EventFunction)&Frames::col_5_57);
    test_collisions(qualifier_19, enemybikeninjamask_3171_instances, 268435456, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(enemybikeninjamask_3171_instances, enemyninjastar_3173_instances, 2, 1, (EventFunction)&Frames::col_7_58);
    test_collisions(qualifier_19, enemybladeorbiterright_3152_instances, 134217728, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(gimmickbarrel_3159_instances, enemyrocketpunchershield_3162_instances, 2, 1, (EventFunction)&Frames::col_7_57);
    test_collisions(qualifier_19, enemyrocketpuncherhand_3161_instances, 67108864, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_19, enemybladeorbiterleft_3151_instances, 33554432, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 33554432, 8, (EventFunction)&Frames::col_1_13);
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
void Frames::event_func_12606()
{
    // event 540_58
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_540_58_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_540_58_end;
        FrameObject * single_instance_540_58_0; single_instance_540_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_540_58_0 == NULL)
                    single_instance_540_58_0 = new_obj;
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
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_540_58_end: ;
}
void Frames::event_func_12607()
{
    // event 557_58
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_58_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_557_58_end;
        FrameObject * single_instance_557_58_0; single_instance_557_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_557_58_0 == NULL)
                    single_instance_557_58_0 = new_obj;
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
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_557_58_end: ;
}
void Frames::event_func_12608()
{
    // event 691_58
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_691_58_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_691_58_end;
        FrameObject * single_instance_691_58_0; single_instance_691_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_691_58_0 == NULL)
                    single_instance_691_58_0 = new_obj;
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
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_691_58_end: ;
}
void Frames::event_func_12609()
{
    // event 1410_58
    {
        if (!(group_main_engine_1)) goto event_1410_58_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1410_58_end;
        if (not_always_1410_58 > loop_count) {
            not_always_1410_58 = loop_count + 2;
            goto event_1410_58_end;
        }
        not_always_1410_58 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1410_58_end: ;
}
void Frames::event_func_12610()
{
    // event 1413_58
    {
        if (!(group_main_engine_1)) goto event_1413_58_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1413_58_end;
        if (not_always_1413_58 > loop_count) {
            not_always_1413_58 = loop_count + 2;
            goto event_1413_58_end;
        }
        not_always_1413_58 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1413_58_end: ;
}
void Frames::event_func_12611()
{
    // event 1414_58
    {
        if (!(group_main_engine_1)) goto event_1414_58_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1414_58_end;
        if (not_always_1414_58 > loop_count) {
            not_always_1414_58 = loop_count + 2;
            goto event_1414_58_end;
        }
        not_always_1414_58 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1414_58_end: ;
}
void Frames::event_func_12612()
{
    // event 1417_58
    {
        if (!(group_main_engine_1)) goto event_1417_58_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1417_58_end;
        if (not_always_1417_58 > loop_count) {
            not_always_1417_58 = loop_count + 2;
            goto event_1417_58_end;
        }
        not_always_1417_58 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1417_58_end: ;
}
void Frames::event_func_12613()
{
    // event 1440_58
    {
        if (!(group_main_engine_1)) goto event_1440_58_end;
        hazardshurikenbase_3155_instances.clear_selection();
        for (ObjectIterator it(hazardshurikenbase_3155_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*-1);
        }
        {
            SavedSelection extra_hazardshurikenbase_3155_instances(hazardshurikenbase_3155_instances);
            for (SavedIterator it(extra_hazardshurikenbase_3155_instances); !it.end(); ++it) {
                foreach_instance_s = ((Active*)*it);
                foreach_s_58();
            }
        }
        levelhideoutplatformflame_3158_instances.clear_selection();
        for (ObjectIterator it(levelhideoutplatformflame_3158_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelhideoutplatform1_3157_instances, it.current_index));
            if (parent == NULL) goto pos_end_1440_58_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 64);
            pos_end_1440_58_0: ;
        }
    }
    event_1440_58_end: ;
}
void Frames::event_func_12614()
{
    // event 1452_58
    {
        if (!(group_main_engine_1)) goto event_1452_58_end;
        gimmickbarrel_3159_instances.clear_selection();
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbarrel_3159_instances.has_selection()) goto event_1452_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(4)-54);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), (get_abs(((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(5))-5)*0.2));
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_14();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
    }
    event_1452_58_end: ;
}
void Frames::event_func_12615()
{
    // event 1453_58
    {
        if (!(group_main_engine_1)) goto event_1453_58_end;
        gimmickbarrel_3159_instances.clear_selection();
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbarrel_3159_instances.has_selection()) goto event_1453_58_end;
        if (!((get_abs(((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(5))) > (2))) goto event_1453_58_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
    }
    event_1453_58_end: ;
}
void Frames::event_func_12616()
{
    // event 1454_58
    {
        if (!(group_main_engine_1)) goto event_1454_58_end;
        gimmickbarrel_3159_instances.clear_selection();
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbarrel_3159_instances.has_selection()) goto event_1454_58_end;
        if (!((get_abs(((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(5))) <= (2))) goto event_1454_58_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) > (0))) goto event_1454_58_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8-2);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(gimmickbarrel_3159_instances, it.current_index, default_active_instance))->alterables->values.get(5))*3);
        }
    }
    event_1454_58_end: ;
}
void Frames::event_func_12617()
{
    // event 1455_58
    {
        if (!(group_main_engine_1)) goto event_1455_58_end;
        gimmickbarrel_3159_instances.clear_selection();
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbarrel_3159_instances.has_selection()) goto event_1455_58_end;
        if (!((get_abs(((Active*)get_single(gimmickbarrel_3159_instances, default_active_instance))->alterables->values.get(5))) <= (2))) goto event_1455_58_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_1455_58_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_1455_58_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 99);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_animation();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*-8);
        }
    }
    event_1455_58_end: ;
}
void Frames::event_func_12618()
{
    // event 1508_58
    {
        if (!(group_main_engine_1)) goto event_1508_58_end;
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1508_58_end;
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        FrameObject * single_instance_1508_58_0; single_instance_1508_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytotematic_3103_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1508_58_0 == NULL)
                    single_instance_1508_58_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1508_58_end: ;
}
void Frames::event_func_12619()
{
    // event 1581_58
    {
        if (!(group_main_engine_1)) goto event_1581_58_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1581_58_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1581_58_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1581_58_0_end: ;
    }
    event_1581_58_end: ;
}
void Frames::event_func_12620()
{
    // event 1588_58
    {
        if (!(group_main_engine_1)) goto event_1588_58_end;
        {
            enemybikeninja_3172_instances.clear_selection();
            SavedSelection extra_enemybikeninja_3172_instances(enemybikeninja_3172_instances);
            for (SavedIterator it(extra_enemybikeninja_3172_instances); !it.end(); ++it) {
                foreach_instance_biker = ((Active*)*it);
                foreach_biker_58();
            }
        }
    }
    event_1588_58_end: ;
}
void Frames::event_func_12621()
{
    // event 1589_58
    {
        if (!(group_main_engine_1)) goto event_1589_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1589_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1589_58_end: ;
}
void Frames::event_func_12622()
{
    // event 1590_58
    {
        if (!(group_main_engine_1)) goto event_1590_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1590_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1590_58_end: ;
}
void Frames::event_func_12623()
{
    // event 1591_58
    {
        if (!(group_main_engine_1)) goto event_1591_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1591_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1591_58_end: ;
}
void Frames::event_func_12624()
{
    // event 1592_58
    {
        if (!(group_main_engine_1)) goto event_1592_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1592_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1592_58_end: ;
}
void Frames::event_func_12625()
{
    // event 1593_58
    {
        if (!(group_main_engine_1)) goto event_1593_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1593_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_1593_58_end: ;
}
void Frames::event_func_12626()
{
    // event 1594_58
    {
        if (!(group_main_engine_1)) goto event_1594_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1594_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1594_58_end: ;
}
void Frames::event_func_12627()
{
    // event 1595_58
    bool or_result_1595_58 = false;
    bool or_temp_result_1595_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_58_0_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto or_event_1595_58_0_end;
        or_result_1595_58 = true;
        or_temp_result_1595_58_0 = true;
    }
    or_event_1595_58_0_end: ;
    enemybikeninja_3172_instances.clear_saved_selection();
    if (or_temp_result_1595_58_0) {
        enemybikeninja_3172_instances.save_selection();
    }
    // event 1595_58
    bool or_temp_result_1595_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_58_1_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto or_event_1595_58_1_end;
        or_result_1595_58 = true;
        or_temp_result_1595_58_1 = true;
        or_event_1595_58_1_end: ;
        if (or_temp_result_1595_58_1) {
            enemybikeninja_3172_instances.save_selection();
        }
        if (!or_result_1595_58) goto or_final_or_event_1595_58_1_end;
        enemybikeninja_3172_instances.empty_selection();
        if (or_temp_result_1595_58_0 || or_temp_result_1595_58_1) {
            enemybikeninja_3172_instances.restore_selection();
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_1595_58_1_end: ;
}
void Frames::event_func_12628()
{
    // event 1596_58
    {
        if (!(group_main_engine_1)) goto event_1596_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1596_58_end: ;
}
void Frames::event_func_12629()
{
    // event 1597_58
    {
        if (!(group_main_engine_1)) goto event_1597_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)+230))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1597_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1597_58_end: ;
}
void Frames::event_func_12630()
{
    // event 1598_58
    {
        if (!(group_main_engine_1)) goto event_1598_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-230))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1598_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1598_58_end: ;
}
void Frames::event_func_12631()
{
    // event 1599_58
    {
        if (!(group_main_engine_1)) goto event_1599_58_end;
        effectbikeninjawarning_3170_instances.clear_selection();
        for (ObjectIterator it(effectbikeninjawarning_3170_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(16));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_max(frame_left()+20, get_min(((Active*)*it)->alterables->values.get(0), frame_left()+global_values->get(16)-20)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1599_58_end: ;
}
void Frames::event_func_12632()
{
    // event 1600_58
    {
        if (!(group_main_engine_1)) goto event_1600_58_end;
        effectbikeninjawarning_3170_instances.clear_selection();
        for (ObjectIterator it(effectbikeninjawarning_3170_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!effectbikeninjawarning_3170_instances.has_selection()) goto event_1600_58_end;
        for (ObjectIterator it(effectbikeninjawarning_3170_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1600_58_end: ;
}
void Frames::event_func_12633()
{
    // event 1601_58
    {
        if (!(group_main_engine_1)) goto event_1601_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemybikeninja_3172_instances.has_selection()) goto event_1601_58_end;
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1601_58_end: ;
}
void Frames::event_func_12634()
{
    // event 1602_58
    {
        if (!(group_main_engine_1)) goto event_1602_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1602_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(8, 15);
        }
    }
    event_1602_58_end: ;
}
void Frames::event_func_12635()
{
    // event 1603_58
    {
        if (!(group_main_engine_1)) goto event_1603_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1603_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        FrameObject * single_instance_1603_58_0; single_instance_1603_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybikeninjamask_3171_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1603_58_0 == NULL)
                    single_instance_1603_58_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
    }
    event_1603_58_end: ;
}
void Frames::event_func_12636()
{
    // event 1604_58
    {
        if (!(group_main_engine_1)) goto event_1604_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1604_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        }
    }
    event_1604_58_end: ;
}
