#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_6_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_83();
}
void Frames::loop_wrapper_sound_go0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_process_call_me_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_68();
}
void Frames::loop_wrapper_sound_explode3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_19148()
{
    // event 1617_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1617_83_end;
        if (!((((Active*)foreach_instance_sgs)->alterables->values.get(3)) == (1))) goto event_1617_83_end;
        if (!((((Active*)foreach_instance_sgs)->get_frame()) == (1))) goto event_1617_83_end;
        if (!(((Active*)foreach_instance_sgs)->alterables->flags.is_off(2))) goto event_1617_83_end;
        ((Active*)((Active*)foreach_instance_sgs))->alterables->flags.enable(2);
        FrameObject * single_instance_1617_83_0; single_instance_1617_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypellet_863(((Active*)foreach_instance_sgs)->get_action_x() - ((Active*)foreach_instance_sgs)->layer->off_x + 0, ((Active*)foreach_instance_sgs)->get_action_y() - ((Active*)foreach_instance_sgs)->layer->off_y + 0), ((Active*)foreach_instance_sgs)->layer);
            if (single_instance_1617_83_0 == NULL)
                single_instance_1617_83_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1617_83_0))->set_direction(((Active*)foreach_instance_sgs)->get_direction()-1);
        ((Active*)((Active*)single_instance_1617_83_0))->get_movement()->set_speed(100);
        ((Active*)((Active*)single_instance_1617_83_0))->alterables->flags.enable(2);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1617_83_0))->get_movement()->set_gravity(0);
    }
    event_1617_83_end: ;
}
void Frames::foreach_sgs_83()
{
    event_func_19148();
}
void Frames::event_func_19149()
{
    // event 1821_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1821_83_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1821_83_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(2)) != (0))) goto event_1821_83_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) < (5))) goto event_1821_83_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(1);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_max(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8, 20));
    }
    event_1821_83_end: ;
}
void Frames::event_func_19150()
{
    // event 1822_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1822_83_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1822_83_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) >= (5))) goto event_1822_83_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(2);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8);
    }
    event_1822_83_end: ;
}
void Frames::event_func_19151()
{
    // event 1852_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1852_83_end;
        if (!(((Active*)foreach_instance_elite)->test_animation(12))) goto event_1852_83_end;
        if (!((((Active*)foreach_instance_elite)->get_frame()) == (1))) goto event_1852_83_end;
        if (!(((Active*)foreach_instance_elite)->alterables->flags.is_off(2))) goto event_1852_83_end;
        FrameObject * single_instance_1852_83_0; single_instance_1852_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)foreach_instance_elite)->get_action_x() - ((Active*)foreach_instance_elite)->layer->off_x + 0, ((Active*)foreach_instance_elite)->get_action_y() - ((Active*)foreach_instance_elite)->layer->off_y + 0), ((Active*)foreach_instance_elite)->layer);
            if (single_instance_1852_83_0 == NULL)
                single_instance_1852_83_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1852_83_0))->alterables->values.set(0, 12);
        ((Active*)single_instance_1852_83_0)->move_back(((Active*)foreach_instance_elite));
        ((Active*)((Active*)single_instance_1852_83_0))->alterables->values.set(1, (((Active*)foreach_instance_elite)->alterables->values.get(1)+1)*90-180);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)((Active*)single_instance_1852_83_0))->set_direction(4);
        ((Active*)((Active*)foreach_instance_elite))->alterables->flags.enable(2);
    }
    event_1852_83_end: ;
}
void Frames::foreach_elite_83()
{
    event_func_19149();
    event_func_19150();
    event_func_19151();
}
void Frames::event_func_19152()
{
    // event 1889_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1889_83_end;
        if (!((((Active*)foreach_instance_esp)->alterables->values.get(1)) == (1))) goto event_1889_83_end;
        FrameObject * single_instance_1889_83_0; single_instance_1889_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsspadeimage_321(((Active*)foreach_instance_esp)->x + 0, ((Active*)foreach_instance_esp)->y + 0), ((Active*)foreach_instance_esp)->layer);
            if (single_instance_1889_83_0 == NULL)
                single_instance_1889_83_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1889_83_0))->set_direction(12);
    }
    event_1889_83_end: ;
}
void Frames::foreach_esp_83()
{
    event_func_19152();
}
void Frames::event_func_19153()
{
    // event 1622_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1622_83_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(2))) goto event_1622_83_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) <= (0))) goto event_1622_83_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(5))) goto event_1622_83_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1622_83_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1622_83_0; single_instance_1622_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1622_83_0 == NULL)
                single_instance_1622_83_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -4);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, 0);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 4);
        {
            ((Active*)col_instance_2)->set_shader(Render::INVERT);
        }
    }
    event_1622_83_end: ;
}
void Frames::col_2_83()
{
    event_func_19153();
}
void Frames::event_func_19154()
{
    // event 1915_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1915_83_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(7)) > (10))) goto event_1915_83_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1915_83_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
    }
    event_1915_83_end: ;
}
void Frames::col_3_83()
{
    event_func_19154();
}
void Frames::event_func_19155()
{
    // event 1679_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1679_83_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(1))) goto event_1679_83_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1679_83_0; single_instance_1679_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1679_83_0 == NULL)
                single_instance_1679_83_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        media.play_id(SOUND_ITEM_SHIELDHIT_317, -1, 1);
    }
    event_1679_83_end: ;
}
void Frames::col_8_83()
{
    event_func_19155();
}
void Frames::event_func_19156()
{
    // event 1715_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1715_83_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(1))) goto event_1715_83_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -7);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(20, 9);
    }
    event_1715_83_end: ;
}
void Frames::col_10_83()
{
    event_func_19156();
}
void Frames::event_func_19157()
{
    // event 1672_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1672_83_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -8);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -2);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(20, 9);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
    }
    event_1672_83_end: ;
}
void Frames::col_12_83()
{
    event_func_19157();
}
void Frames::event_func_19158()
{
    // event 1621_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1621_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1621_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1621_83_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1621_83_0; single_instance_1621_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1621_83_0 == NULL)
                single_instance_1621_83_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1621_83_end: ;
}
void Frames::col_14_83()
{
    event_func_19158();
}
void Frames::event_func_19159()
{
    // event 1791_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1791_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1791_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1791_83_end: ;
}
void Frames::col_15_83()
{
    event_func_19159();
}
void Frames::event_func_19160()
{
    // event 1881_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1881_83_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1881_83_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1881_83_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(1)+180);
    }
    event_1881_83_end: ;
}
void Frames::col_16_83()
{
    event_func_19160();
}
void Frames::event_func_19161()
{
    // event 1612_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1612_83_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) != (6))) goto event_1612_83_end;
        if (!((((Active*)col_instance_2)->get_x()) < (frame_left()+global_values->get(16)))) goto event_1612_83_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1612_83_0; single_instance_1612_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1612_83_0 == NULL)
                single_instance_1612_83_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, 6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(6, -4);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, cos_deg(((Active*)col_instance_1)->alterables->values.get(1))*((Active*)col_instance_1)->alterables->values.get(0)*0.5);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
    }
    event_1612_83_end: ;
}
void Frames::col_17_83()
{
    event_func_19161();
}
void Frames::event_func_19162()
{
    // event 1620_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1620_83_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(1))) goto event_1620_83_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1620_83_0; single_instance_1620_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1620_83_0 == NULL)
                single_instance_1620_83_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1620_83_end: ;
}
void Frames::col_19_83()
{
    event_func_19162();
}
void Frames::event_func_19163()
{
    // event 1787_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1787_83_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1787_83_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(16)) == (0))) goto event_1787_83_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(13, 0-((Active*)col_instance_2)->alterables->values.get(13));
    }
    event_1787_83_end: ;
}
void Frames::col_21_83()
{
    event_func_19163();
}
void Frames::event_func_19164()
{
    // event 1619_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1619_83_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1619_83_0; single_instance_1619_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1619_83_0 == NULL)
                single_instance_1619_83_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1619_83_end: ;
}
void Frames::col_25_83()
{
    event_func_19164();
}
void Frames::test_collisions_83()
{
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(enemypellet_863_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_2_83);
    test_collisions(player_389_instances, bossmissile_2023_instances, 1, 1, (EventFunction)&Frames::col_3_83);
    test_collisions(qualifier_8, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(enemypellet_863_instances, brevon_3683_instances, 2, 1, (EventFunction)&Frames::col_8_83);
    test_collisions(qualifier_7, playerreflect_447_instances, 67108864, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(hazardshockwave_1524_instances, enemyelitemask_2511_instances, 1, 2, (EventFunction)&Frames::col_10_83);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(bossmissile_2023_instances, enemyelitemask_2511_instances, 2, 4, (EventFunction)&Frames::col_12_83);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_14_83);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_15_83);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 4, 2, (EventFunction)&Frames::col_16_83);
    test_collisions(enemytrooperlaser_2508_instances, npcsgmerc_4021_instances, 4, 1, (EventFunction)&Frames::col_17_83);
    test_collisions(qualifier_20, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 4194304, 8, (EventFunction)&Frames::col_19_83);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 8, (EventFunction)&Frames::col_21_83);
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
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_25_83();
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
void Frames::event_func_19165()
{
    // event 1917_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1917_83_end;
        if (!(((Active*)foreach_instance_m)->alterables->flags.is_on(6))) goto event_1917_83_end;
        if (!((((Active*)foreach_instance_m)->alterables->values.get(4)) < (45))) goto event_1917_83_end;
        FrameObject * single_instance_1917_83_0; single_instance_1917_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)foreach_instance_m)->x + 0, ((Active*)foreach_instance_m)->y + 0), ((Active*)foreach_instance_m)->layer);
            if (single_instance_1917_83_0 == NULL)
                single_instance_1917_83_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1917_83_0))->set_x(((Active*)foreach_instance_m)->get_x()+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*132)*(8+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_1917_83_0))->set_y(((Active*)foreach_instance_m)->get_y()-sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_1917_83_0))->force_speed(30+cos_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*143)*10);
        ((Active*)((Active*)foreach_instance_m))->alterables->values.add(4, 1);
        ((Active*)((Active*)foreach_instance_m))->set_visible(false);
        ((Active*)((Active*)foreach_instance_m))->force_animation(8);
        ((Active*)((Active*)foreach_instance_m))->get_movement()->stop(false);
    }
    event_1917_83_end: ;
}
void Frames::foreach_m_83()
{
    event_func_19165();
}
void Frames::event_func_19166()
{
    // event 2_83
    {
        if (!(frame_time <= 0.5)) goto event_2_83_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 0);
    }
    event_2_83_end: ;
}
void Frames::event_func_19167()
{
    // event 684_83
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_684_83_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_684_83_end;
        FrameObject * single_instance_684_83_0; single_instance_684_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_684_83_0 == NULL)
                    single_instance_684_83_0 = new_obj;
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
                loop_spawndebris_83();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_684_83_end: ;
}
void Frames::event_func_19168()
{
    // event 1401_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1401_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1401_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1401_83_end;
        if (not_always_1401_83 > loop_count) {
            not_always_1401_83 = loop_count + 2;
            goto event_1401_83_end;
        }
        not_always_1401_83 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
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
    }
    event_1401_83_end: ;
}
void Frames::event_func_19169()
{
    // event 1403_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1403_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1403_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1403_83_end: ;
}
void Frames::event_func_19170()
{
    // event 1404_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1404_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1404_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1404_83_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1404_83_end: ;
}
void Frames::event_func_19171()
{
    // event 1405_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1405_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1405_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1405_83_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1405_83_end: ;
}
void Frames::event_func_19172()
{
    // event 1448_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1448_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1448_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1448_83_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto event_1448_83_end;
        if (!media.is_channel_playing(20-1)) goto event_1448_83_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1448_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1448_83_end: ;
}
void Frames::event_func_19173()
{
    // event 1457_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1457_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1457_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (11))) goto event_1457_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto event_1457_83_end;
        if (!media.is_channel_playing(20-1)) goto event_1457_83_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1457_83_end;
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1457_83_end: ;
}
void Frames::event_func_19174()
{
    // event 1461_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1461_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1461_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (14))) goto event_1461_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1461_83_end;
        if (!media.is_channel_playing(20-1)) goto event_1461_83_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1461_83_end;
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1461_83_end: ;
}
void Frames::event_func_19175()
{
    // event 1462_83
    bool or_result_1462_83 = false;
    bool or_temp_result_1462_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1462_83_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1462_83_0_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto or_event_1462_83_0_end;
        if (!((((Active*)get_single(npcking_4099_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1462_83_0_end;
        or_result_1462_83 = true;
        or_temp_result_1462_83_0 = true;
    }
    or_event_1462_83_0_end: ;
    npcking_4099_instances.clear_saved_selection();
    if (or_temp_result_1462_83_0) {
        npcking_4099_instances.save_selection();
    }
    // event 1462_83
    bool or_temp_result_1462_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1462_83_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (14))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1462_83_1_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto or_event_1462_83_1_end;
        if (!((((Active*)get_single(npcking_4099_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1462_83_1_end;
        or_result_1462_83 = true;
        or_temp_result_1462_83_1 = true;
        or_event_1462_83_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1462_83_1) {
            npcking_4099_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1462_83) goto or_final_or_event_1462_83_1_end;
        dialogbox_566_instances.empty_selection();
        npcking_4099_instances.empty_selection();
        if (or_temp_result_1462_83_0 || or_temp_result_1462_83_1) {
            npcking_4099_instances.restore_selection();
        }
        if (or_temp_result_1462_83_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1462_83_1_end: ;
}
void Frames::event_func_19176()
{
    // event 1481_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1481_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1481_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1481_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1481_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1481_83_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1481_83_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1481_83_end: ;
}
void Frames::event_func_19177()
{
    // event 1490_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1490_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1490_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (11))) goto event_1490_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto event_1490_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1490_83_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1490_83_end;
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1490_83_end: ;
}
void Frames::event_func_19178()
{
    // event 1494_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1494_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1494_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (14))) goto event_1494_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1494_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1494_83_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1494_83_end;
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1494_83_end: ;
}
void Frames::event_func_19179()
{
    // event 1495_83
    bool or_result_1495_83 = false;
    bool or_temp_result_1495_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1495_83_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1495_83_0_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto or_event_1495_83_0_end;
        if (!((((Active*)get_single(npcking_4099_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1495_83_0_end;
        or_result_1495_83 = true;
        or_temp_result_1495_83_0 = true;
    }
    or_event_1495_83_0_end: ;
    npcking_4099_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1495_83_0) {
        npcking_4099_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1495_83
    bool or_temp_result_1495_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1495_83_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (14))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1495_83_1_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto or_event_1495_83_1_end;
        if (!((((Active*)get_single(npcking_4099_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1495_83_1_end;
        or_result_1495_83 = true;
        or_temp_result_1495_83_1 = true;
        or_event_1495_83_1_end: ;
        if (or_temp_result_1495_83_1) {
            npcking_4099_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1495_83) goto or_final_or_event_1495_83_1_end;
        dialogbox_566_instances.empty_selection();
        npcking_4099_instances.empty_selection();
        if (or_temp_result_1495_83_0 || or_temp_result_1495_83_1) {
            npcking_4099_instances.restore_selection();
        }
        if (or_temp_result_1495_83_0 || or_temp_result_1495_83_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1495_83_1_end: ;
}
void Frames::event_func_19180()
{
    // event 1503_83
    bool or_result_1503_83 = false;
    bool or_temp_result_1503_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto or_event_1503_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1503_83_0_end;
        or_result_1503_83 = true;
        or_temp_result_1503_83_0 = true;
    }
    or_event_1503_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1503_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1503_83
    bool or_temp_result_1503_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto or_event_1503_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1503_83_1_end;
        or_result_1503_83 = true;
        or_temp_result_1503_83_1 = true;
    }
    or_event_1503_83_1_end: ;
    if (or_temp_result_1503_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1503_83
    bool or_temp_result_1503_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto or_event_1503_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1503_83_2_end;
        or_result_1503_83 = true;
        or_temp_result_1503_83_2 = true;
        or_event_1503_83_2_end: ;
        if (or_temp_result_1503_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1503_83) goto or_final_or_event_1503_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1503_83_0 || or_temp_result_1503_83_1 || or_temp_result_1503_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1503_83_2_end: ;
}
void Frames::event_func_19181()
{
    // event 1504_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1504_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1504_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 400);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(488, 368+global_values->get(17)*0.5));
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_1504_83_end: ;
}
void Frames::event_func_19182()
{
    // event 1505_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1505_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1505_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (8))) goto event_1505_83_end;
        if (once_condition_1505_83) goto event_1505_83_end;
        once_condition_1505_83 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_royal_palace_313+newline_character+str_shang_tu_314);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_1505_83_end: ;
}
void Frames::event_func_19183()
{
    // event 1506_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1506_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1506_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1506_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_GONG_OPENDOOR_339, -1, 1);
    }
    event_1506_83_end: ;
}
void Frames::event_func_19184()
{
    // event 1507_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1507_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1507_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1507_83_end: ;
}
void Frames::event_func_19185()
{
    // event 1508_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1508_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1508_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1508_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1508_83_end: ;
}
void Frames::event_func_19186()
{
    // event 1509_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1509_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1509_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1509_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1509_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1509_83_end: ;
}
void Frames::event_func_19187()
{
    // event 1510_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1510_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1510_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-2, 340));
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->force_speed(35);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+5);
    }
    event_1510_83_end: ;
}
void Frames::event_func_19188()
{
    // event 1511_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1511_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_1511_83_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1511_83_0: ;
        }
    }
    event_1511_83_end: ;
}
void Frames::event_func_19189()
{
    // event 1512_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1512_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1512_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1512_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(4);
    }
    event_1512_83_end: ;
}
void Frames::event_func_19190()
{
    // event 1513_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1513_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1513_83_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) > (((Active*)get_instance(themagister_2115_instances))->get_x()-150))) goto event_1513_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(gongshield_633_instances))->force_animation(0);
    }
    event_1513_83_end: ;
}
void Frames::event_func_19191()
{
    // event 1514_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1514_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1514_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1514_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (3))) goto event_1514_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1514_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1514_83_end: ;
}
void Frames::event_func_19192()
{
    // event 1515_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1515_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1515_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (3))) goto event_1515_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1515_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1515_83_end: ;
}
void Frames::event_func_19193()
{
    // event 1516_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1516_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1516_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1516_83_end: ;
}
void Frames::event_func_19194()
{
    // event 1517_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1517_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1517_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1517_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
    }
    event_1517_83_end: ;
}
void Frames::event_func_19195()
{
    // event 1518_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1518_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1518_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1518_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
    }
    event_1518_83_end: ;
}
void Frames::event_func_19196()
{
    // event 1519_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1519_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1519_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_1519_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_1519_83_end: ;
}
void Frames::event_func_19197()
{
    // event 1520_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1520_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1520_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (110))) goto event_1520_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1520_83_end: ;
}
void Frames::event_func_19198()
{
    // event 1521_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1521_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1521_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (4))) goto event_1521_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (8))) goto event_1521_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1521_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1521_83_end: ;
}
void Frames::event_func_19199()
{
    // event 1522_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1522_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1522_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1522_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(15);
    }
    event_1522_83_end: ;
}
void Frames::event_func_19200()
{
    // event 1523_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1523_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1523_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1523_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1523_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1523_83_end: ;
}
void Frames::event_func_19201()
{
    // event 1524_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1524_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1524_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1524_83_end: ;
}
void Frames::event_func_19202()
{
    // event 1525_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1525_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1525_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1525_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 934);
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(636, 984);
            pos_end_1525_83_0: ;
        }
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1525_83_end: ;
}
void Frames::event_func_19203()
{
    // event 1526_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1526_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1526_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-3);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(gongshield_633_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_speed(20);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_direction(16);
    }
    event_1526_83_end: ;
}
void Frames::event_func_19204()
{
    // event 1527_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1527_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1527_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1527_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1527_83_end: ;
}
void Frames::event_func_19205()
{
    // event 1528_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1528_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1528_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1528_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
    }
    event_1528_83_end: ;
}
void Frames::event_func_19206()
{
    // event 1529_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1529_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1529_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (9))) goto event_1529_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (11))) goto event_1529_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1529_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1529_83_end: ;
}
void Frames::event_func_19207()
{
    // event 1530_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1530_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1530_83_end;
        if (not_always_1530_83 > loop_count) {
            not_always_1530_83 = loop_count + 2;
            goto event_1530_83_end;
        }
        not_always_1530_83 = loop_count + 2;
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
    }
    event_1530_83_end: ;
}
void Frames::event_func_19208()
{
    // event 1531_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1531_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1531_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1531_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1531_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_1531_83_end: ;
}
void Frames::event_func_19209()
{
    // event 1532_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1532_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1532_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1532_83_end: ;
}
void Frames::event_func_19210()
{
    // event 1533_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1533_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1533_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (12))) goto event_1533_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1533_83_end: ;
}
void Frames::event_func_19211()
{
    // event 1534_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1534_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1534_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1534_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1534_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1534_83_end: ;
}
void Frames::event_func_19212()
{
    // event 1535_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1535_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1535_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1535_83_end: ;
}
void Frames::event_func_19213()
{
    // event 1536_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1536_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1536_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1536_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(5);
        media.play_id(SOUND_WANGH_2_364, -1, 1);
    }
    event_1536_83_end: ;
}
void Frames::event_func_19214()
{
    // event 1537_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1537_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1537_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (33))) goto event_1537_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(0);
    }
    event_1537_83_end: ;
}
void Frames::event_func_19215()
{
    // event 1538_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1538_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1538_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1538_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1538_83_end: ;
}
void Frames::event_func_19216()
{
    // event 1539_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1539_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1539_83_end;
        if (not_always_1539_83 > loop_count) {
            not_always_1539_83 = loop_count + 2;
            goto event_1539_83_end;
        }
        not_always_1539_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1539_83_end: ;
}
void Frames::event_func_19217()
{
    // event 1540_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1540_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1540_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1540_83_end: ;
}
void Frames::event_func_19218()
{
    // event 1541_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1)) goto event_1541_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1541_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1541_83_end;
        next_frame = 15 + 0;    
    
        global_values->set(4, 11);
    }
    event_1541_83_end: ;
}
void Frames::event_func_19219()
{
    // event 1543_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1543_83_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(global_values->get(3)*1.5)*4);
        }
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1543_83_end: ;
}
void Frames::event_func_19220()
{
    // event 1544_83
    bool or_result_1544_83 = false;
    bool or_temp_result_1544_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto or_event_1544_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1544_83_0_end;
        or_result_1544_83 = true;
        or_temp_result_1544_83_0 = true;
    }
    or_event_1544_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1544_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1544_83
    bool or_temp_result_1544_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto or_event_1544_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1544_83_1_end;
        or_result_1544_83 = true;
        or_temp_result_1544_83_1 = true;
    }
    or_event_1544_83_1_end: ;
    if (or_temp_result_1544_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1544_83
    bool or_temp_result_1544_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto or_event_1544_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1544_83_2_end;
        or_result_1544_83 = true;
        or_temp_result_1544_83_2 = true;
        or_event_1544_83_2_end: ;
        if (or_temp_result_1544_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1544_83) goto or_final_or_event_1544_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1544_83_0 || or_temp_result_1544_83_1 || or_temp_result_1544_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1544_83_2_end: ;
}
