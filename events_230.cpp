#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_camera_mode0_81(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_59();
}
void Frames::loop_wrapper_sound_attack1_81(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_81(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_81(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_81(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_81(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_81(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_81(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_81();
}
void Frames::loop_wrapper_play_music_5_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_81();
}
void Frames::loop_wrapper_play_music_6_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_81();
}
void Frames::loop_wrapper_sound_go0_81(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_81(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_process_call_unqueue_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_81(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_81(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_18189()
{
    // event 1683_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1683_81_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1683_81_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(2)) != (0))) goto event_1683_81_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) < (5))) goto event_1683_81_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(1);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_max(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8, 20));
    }
    event_1683_81_end: ;
}
void Frames::event_func_18190()
{
    // event 1684_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1684_81_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1684_81_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) >= (5))) goto event_1684_81_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(2);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8);
    }
    event_1684_81_end: ;
}
void Frames::event_func_18191()
{
    // event 1714_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1714_81_end;
        if (!(((Active*)foreach_instance_elite)->test_animation(12))) goto event_1714_81_end;
        if (!((((Active*)foreach_instance_elite)->get_frame()) == (1))) goto event_1714_81_end;
        if (!(((Active*)foreach_instance_elite)->alterables->flags.is_off(2))) goto event_1714_81_end;
        FrameObject * single_instance_1714_81_0; single_instance_1714_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)foreach_instance_elite)->get_action_x() - ((Active*)foreach_instance_elite)->layer->off_x + 0, ((Active*)foreach_instance_elite)->get_action_y() - ((Active*)foreach_instance_elite)->layer->off_y + 0), ((Active*)foreach_instance_elite)->layer);
            if (single_instance_1714_81_0 == NULL)
                single_instance_1714_81_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1714_81_0))->alterables->values.set(0, 12);
        ((Active*)single_instance_1714_81_0)->move_back(((Active*)foreach_instance_elite));
        ((Active*)((Active*)single_instance_1714_81_0))->alterables->values.set(1, (((Active*)foreach_instance_elite)->alterables->values.get(1)+1)*90-180);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)((Active*)single_instance_1714_81_0))->set_direction(4);
        ((Active*)((Active*)foreach_instance_elite))->alterables->flags.enable(2);
    }
    event_1714_81_end: ;
}
void Frames::foreach_elite_81()
{
    event_func_18189();
    event_func_18190();
    event_func_18191();
}
void Frames::event_func_18192()
{
    // event 1819_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1819_81_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1819_81_0; single_instance_1819_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_thunderspark_339(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1819_81_0 == NULL)
                single_instance_1819_81_0 = new_obj;
        }
    }
    event_1819_81_end: ;
}
void Frames::col_0_81()
{
    event_func_18192();
}
void Frames::event_func_18193()
{
    // event 1652_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1652_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1652_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1652_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1652_81_end: ;
}
void Frames::col_5_81()
{
    event_func_18193();
}
void Frames::event_func_18194()
{
    // event 1648_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1648_81_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1648_81_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(16)) == (0))) goto event_1648_81_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(13, 0-((Active*)col_instance_2)->alterables->values.get(13));
    }
    event_1648_81_end: ;
}
void Frames::col_6_81()
{
    event_func_18194();
}
void Frames::event_func_18195()
{
    // event 1743_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1743_81_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1743_81_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1743_81_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(1)+180);
    }
    event_1743_81_end: ;
}
void Frames::col_9_81()
{
    event_func_18195();
}
void Frames::test_collisions_81()
{
    test_collisions(playerprojectile_320_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_0_81);
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_5_81);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 2, (EventFunction)&Frames::col_6_81);
    test_collisions(qualifier_8, playerreflect_447_instances, 268435456, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 2, 2, (EventFunction)&Frames::col_9_81);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 4, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
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
void Frames::event_func_18196()
{
    // event 679_81
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_679_81_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_679_81_end;
        FrameObject * single_instance_679_81_0; single_instance_679_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_679_81_0 == NULL)
                    single_instance_679_81_0 = new_obj;
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
                loop_spawndebris_81();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_679_81_end: ;
}
void Frames::event_func_18197()
{
    // event 1403_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1403_81_end;
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
    event_1403_81_end: ;
}
void Frames::event_func_18198()
{
    // event 1404_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1404_81_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1404_81_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1404_81_end: ;
}
void Frames::event_func_18199()
{
    // event 1405_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1405_81_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1405_81_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1405_81_end: ;
}
void Frames::event_func_18200()
{
    // event 1406_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1406_81_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1406_81_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1406_81_end: ;
}
void Frames::event_func_18201()
{
    // event 1407_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1407_81_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1407_81_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
        }
    }
    event_1407_81_end: ;
}
void Frames::event_func_18202()
{
    // event 1408_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1408_81_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1408_81_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1408_81_end: ;
}
void Frames::event_func_18203()
{
    // event 1409_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1409_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1409_81_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1409_81_end: ;
}
void Frames::event_func_18204()
{
    // event 1410_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1410_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1410_81_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1410_81_end: ;
}
void Frames::event_func_18205()
{
    // event 1411_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1411_81_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1411_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1411_81_end: ;
}
void Frames::event_func_18206()
{
    // event 1412_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1412_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1412_81_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1412_81_end: ;
}
void Frames::event_func_18207()
{
    // event 1413_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1413_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1413_81_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1413_81_end: ;
}
void Frames::event_func_18208()
{
    // event 1414_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1414_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1414_81_end;
        if (not_always_1414_81 > loop_count) {
            not_always_1414_81 = loop_count + 2;
            goto event_1414_81_end;
        }
        not_always_1414_81 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1414_81_end: ;
}
void Frames::event_func_18209()
{
    // event 1415_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_scenery_1)) goto event_1415_81_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1415_81_end;
        if (not_always_1415_81 > loop_count) {
            not_always_1415_81 = loop_count + 2;
            goto event_1415_81_end;
        }
        not_always_1415_81 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_CLOSE_282, -1, 1);
    }
    event_1415_81_end: ;
}
void Frames::event_func_18210()
{
    // event 1455_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1455_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1455_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (9))) goto event_1455_81_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->test_animation(5))) goto event_1455_81_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6));
    }
    event_1455_81_end: ;
}
void Frames::event_func_18211()
{
    // event 1456_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1456_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1456_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1456_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_1456_81_end;
        if (!media.is_channel_playing(20-1)) goto event_1456_81_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1456_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_1456_81_end: ;
}
void Frames::event_func_18212()
{
    // event 1457_81
    bool or_result_1457_81 = false;
    bool or_temp_result_1457_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1457_81_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1457_81_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1457_81_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1457_81_0_end;
        or_result_1457_81 = true;
        or_temp_result_1457_81_0 = true;
    }
    or_event_1457_81_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_1457_81_0) {
        brevon_3683_instances.save_selection();
    }
    // event 1457_81
    bool or_temp_result_1457_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1457_81_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1457_81_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1457_81_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1457_81_1_end;
        or_result_1457_81 = true;
        or_temp_result_1457_81_1 = true;
        or_event_1457_81_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1457_81_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1457_81) goto or_final_or_event_1457_81_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1457_81_0 || or_temp_result_1457_81_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_1457_81_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1457_81_1_end: ;
}
void Frames::event_func_18213()
{
    // event 1476_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1476_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1476_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1476_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_1476_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1476_81_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1476_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_1476_81_end: ;
}
void Frames::event_func_18214()
{
    // event 1477_81
    bool or_result_1477_81 = false;
    bool or_temp_result_1477_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1477_81_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1477_81_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1477_81_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1477_81_0_end;
        or_result_1477_81 = true;
        or_temp_result_1477_81_0 = true;
    }
    or_event_1477_81_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1477_81_0) {
        brevon_3683_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1477_81
    bool or_temp_result_1477_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1477_81_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1477_81_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1477_81_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1477_81_1_end;
        or_result_1477_81 = true;
        or_temp_result_1477_81_1 = true;
        or_event_1477_81_1_end: ;
        if (or_temp_result_1477_81_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1477_81) goto or_final_or_event_1477_81_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1477_81_0 || or_temp_result_1477_81_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_1477_81_0 || or_temp_result_1477_81_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1477_81_1_end: ;
}
void Frames::event_func_18215()
{
    // event 1481_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1481_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1481_81_end: ;
}
void Frames::event_func_18216()
{
    // event 1482_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1482_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1482_81_end;
        if (once_condition_1482_81) goto event_1482_81_end;
        once_condition_1482_81 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
    }
    event_1482_81_end: ;
}
void Frames::event_func_18217()
{
    // event 1483_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1483_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1483_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_1483_81_end: ;
}
void Frames::event_func_18218()
{
    // event 1484_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1484_81_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1484_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1484_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(-50);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1484_81_end: ;
}
void Frames::event_func_18219()
{
    // event 1485_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1485_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1485_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcserpentine_947_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1485_81_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x()+70);
    }
    event_1485_81_end: ;
}
void Frames::event_func_18220()
{
    // event 1486_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1486_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1486_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcserpentine_947_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1486_81_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1486_81_end: ;
}
void Frames::event_func_18221()
{
    // event 1487_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1487_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1487_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (170))) goto event_1487_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1487_81_end: ;
}
void Frames::event_func_18222()
{
    // event 1488_81
    bool or_result_1488_81 = false;
    bool or_temp_result_1488_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto or_event_1488_81_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1488_81_0_end;
        or_result_1488_81 = true;
        or_temp_result_1488_81_0 = true;
    }
    or_event_1488_81_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1488_81_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1488_81
    bool or_temp_result_1488_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto or_event_1488_81_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1488_81_1_end;
        or_result_1488_81 = true;
        or_temp_result_1488_81_1 = true;
    }
    or_event_1488_81_1_end: ;
    if (or_temp_result_1488_81_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1488_81
    bool or_temp_result_1488_81_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto or_event_1488_81_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1488_81_2_end;
        or_result_1488_81 = true;
        or_temp_result_1488_81_2 = true;
        or_event_1488_81_2_end: ;
        if (or_temp_result_1488_81_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1488_81) goto or_final_or_event_1488_81_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1488_81_0 || or_temp_result_1488_81_1 || or_temp_result_1488_81_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1488_81_2_end: ;
}
void Frames::event_func_18223()
{
    // event 1489_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1489_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1489_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1489_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1489_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(1);
    }
    event_1489_81_end: ;
}
void Frames::event_func_18224()
{
    // event 1490_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1490_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1490_81_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_1490_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcserpentine_947_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1490_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1490_81_end: ;
}
void Frames::event_func_18225()
{
    // event 1491_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1491_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1491_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (20))) goto event_1491_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 3);
    }
    event_1491_81_end: ;
}
void Frames::event_func_18226()
{
    // event 1492_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1492_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1492_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1492_81_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(7);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, -4);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_speed();
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
    }
    event_1492_81_end: ;
}
void Frames::event_func_18227()
{
    // event 1493_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1493_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1493_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (45))) goto event_1493_81_end;
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1493_81_end: ;
}
void Frames::event_func_18228()
{
    // event 1494_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1494_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1494_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (45))) goto event_1494_81_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(get_min(((Active*)get_instance(npcserpentine_947_instances))->get_y()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3), ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-13));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(3, 0.3);
    }
    event_1494_81_end: ;
}
void Frames::event_func_18229()
{
    // event 1495_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1495_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1495_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_1495_81_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-13))) goto event_1495_81_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
    }
    event_1495_81_end: ;
}
void Frames::event_func_18230()
{
    // event 1496_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1496_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1496_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1496_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (90))) goto event_1496_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1496_81_end: ;
}
void Frames::event_func_18231()
{
    // event 1497_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1497_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1497_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_1497_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1497_81_end: ;
}
void Frames::event_func_18232()
{
    // event 1498_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1498_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1498_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1498_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (4))) goto event_1498_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1498_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1498_81_end: ;
}
void Frames::event_func_18233()
{
    // event 1499_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1499_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1499_81_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1499_81_end;
        if (!((media.get_channel_position(-1 +20)) < (2300))) goto event_1499_81_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(12);
        ((Active*)get_instance(npcserpentine_947_instances))->force_speed(16);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
    }
    event_1499_81_end: ;
}
void Frames::event_func_18234()
{
    // event 1500_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1500_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1500_81_end;
        if (!((media.get_channel_position(-1 +20)) > (2300))) goto event_1500_81_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
    }
    event_1500_81_end: ;
}
void Frames::event_func_18235()
{
    // event 1501_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1501_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1501_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_1501_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1501_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(player_389_instances))->set_x(990);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(15);
    }
    event_1501_81_end: ;
}
void Frames::event_func_18236()
{
    // event 1502_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1502_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(1))) goto event_1502_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_frame()) == (2))) goto event_1502_81_end;
        if (not_always_1502_81 > loop_count) {
            not_always_1502_81 = loop_count + 2;
            goto event_1502_81_end;
        }
        not_always_1502_81 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1502_81_end: ;
}
void Frames::event_func_18237()
{
    // event 1503_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1503_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(1))) goto event_1503_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_frame()) == (6))) goto event_1503_81_end;
        if (not_always_1503_81 > loop_count) {
            not_always_1503_81 = loop_count + 2;
            goto event_1503_81_end;
        }
        not_always_1503_81 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1503_81_end: ;
}
void Frames::event_func_18238()
{
    // event 1504_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1504_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1504_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1504_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (200))) goto event_1504_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()-2);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(1);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_1504_81_end: ;
}
void Frames::event_func_18239()
{
    // event 1505_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1505_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1505_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1505_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1505_81_end: ;
}
void Frames::event_func_18240()
{
    // event 1506_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1506_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1506_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1506_81_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1506_81_end: ;
}
void Frames::event_func_18241()
{
    // event 1507_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1507_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1507_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1507_81_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_gasp2_ogg_238, 19-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(90);
        }
    }
    event_1507_81_end: ;
}
void Frames::event_func_18242()
{
    // event 1508_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1508_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1508_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1508_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (90))) goto event_1508_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1508_81_end: ;
}
void Frames::event_func_18243()
{
    // event 1509_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1509_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1509_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (200))) goto event_1509_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(12);
    }
    event_1509_81_end: ;
}
void Frames::event_func_18244()
{
    // event 1510_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1510_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1510_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (230))) goto event_1510_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
    }
    event_1510_81_end: ;
}
void Frames::event_func_18245()
{
    // event 1511_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1511_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1511_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%5) == (1))) goto event_1511_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1511_81_end;
        FrameObject * single_instance_1511_81_0; single_instance_1511_81_0 = pick_random(enemyelite_2510_instances);
        if (single_instance_1511_81_0 == NULL) goto event_1511_81_end;
        ((Active*)((Active*)single_instance_1511_81_0))->force_animation(10);
    }
    event_1511_81_end: ;
}
void Frames::event_func_18246()
{
    // event 1512_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1512_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1512_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1512_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1512_81_end: ;
}
void Frames::event_func_18247()
{
    // event 1513_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1513_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1513_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1513_81_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
    }
    event_1513_81_end: ;
}
void Frames::event_func_18248()
{
    // event 1514_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1514_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1514_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1514_81_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1514_81_end: ;
}
void Frames::event_func_18249()
{
    // event 1515_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1515_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1515_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1515_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(9);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(17);
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()-10);
    }
    event_1515_81_end: ;
}
void Frames::event_func_18250()
{
    // event 1516_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1516_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1516_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1516_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+20))) goto event_1516_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(12);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(4);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
        media.play_id(SOUND_LILAC_DIE_2_91, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
    }
    event_1516_81_end: ;
}
void Frames::event_func_18251()
{
    // event 1517_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1517_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1517_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1517_81_end: ;
}
void Frames::event_func_18252()
{
    // event 1518_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1518_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1518_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (15))) goto event_1518_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_1518_81_end: ;
}
void Frames::event_func_18253()
{
    // event 1519_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1519_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1519_81_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1519_81_end: ;
}
void Frames::event_func_18254()
{
    // event 1520_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1520_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1520_81_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (512))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1520_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-280);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(30);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_x(712);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_y(1522);
        ((Active*)get_instance(brevon_3683_instances))->set_x(862);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(npclilactorture_3974_instances))->move_front();
    }
    event_1520_81_end: ;
}
void Frames::event_func_18255()
{
    // event 1521_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1521_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1521_81_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        ((Active*)get_instance(npclilactorture_3974_instances))->move_front();
    }
    event_1521_81_end: ;
}
void Frames::event_func_18256()
{
    // event 1522_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1522_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1522_81_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1522_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_28_03_ogg_292, 19-1);
    }
    event_1522_81_end: ;
}
void Frames::event_func_18257()
{
    // event 1523_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1523_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1523_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1523_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(1);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_x(712-2+randrange(5));
    }
    event_1523_81_end: ;
}
