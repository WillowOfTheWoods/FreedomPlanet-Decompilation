#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_uppercut3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_23();
}
void Frames::loop_wrapper_play_music_5_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_42();
}
void Frames::loop_wrapper_play_music_6_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_go0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_explode3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_10026()
{
    // event 2172_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2172_43_end;
        if (!(((Active*)foreach_instance_m)->alterables->flags.is_on(6))) goto event_2172_43_end;
        if (!((((Active*)foreach_instance_m)->alterables->values.get(4)) < (45))) goto event_2172_43_end;
        FrameObject * single_instance_2172_43_0; single_instance_2172_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)foreach_instance_m)->x + 0, ((Active*)foreach_instance_m)->y + 0), ((Active*)foreach_instance_m)->layer);
            if (single_instance_2172_43_0 == NULL)
                single_instance_2172_43_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_2172_43_0))->set_x(((Active*)foreach_instance_m)->get_x()+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*132)*(8+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_2172_43_0))->set_y(((Active*)foreach_instance_m)->get_y()-sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_2172_43_0))->force_speed(30+cos_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*143)*10);
        ((Active*)((Active*)foreach_instance_m))->alterables->values.add(4, 1);
        ((Active*)((Active*)foreach_instance_m))->set_visible(false);
        ((Active*)((Active*)foreach_instance_m))->force_animation(8);
        ((Active*)((Active*)foreach_instance_m))->get_movement()->stop(false);
    }
    event_2172_43_end: ;
}
void Frames::foreach_m_43()
{
    event_func_10026();
}
void Frames::event_func_10027()
{
    // event 2273_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2273_43_end;
        ((Active*)((Active*)foreach_instance_m_nearest))->alterables->values.set(7, get_abs(((Active*)foreach_instance_m_nearest)->get_x()-((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()));
    }
    event_2273_43_end: ;
}
void Frames::event_func_10028()
{
    // event 2274_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2274_43_end;
        if (!((((Active*)foreach_instance_m_nearest)->alterables->values.get(7)) <= (((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(12)))) goto event_2274_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(12, ((Active*)foreach_instance_m_nearest)->alterables->values.get(7));
    }
    event_2274_43_end: ;
}
void Frames::event_func_10029()
{
    // event 2275_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2275_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(12)) == (((Active*)foreach_instance_m_nearest)->alterables->values.get(7)))) goto event_2275_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) > (((Active*)foreach_instance_m_nearest)->get_x()))) goto event_2275_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, -1);
    }
    event_2275_43_end: ;
}
void Frames::event_func_10030()
{
    // event 2276_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2276_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(12)) == (((Active*)foreach_instance_m_nearest)->alterables->values.get(7)))) goto event_2276_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) < (((Active*)foreach_instance_m_nearest)->get_x()))) goto event_2276_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
    }
    event_2276_43_end: ;
}
void Frames::foreach_m_nearest_43()
{
    event_func_10027();
    event_func_10028();
    event_func_10029();
    event_func_10030();
}
void Frames::event_func_10031()
{
    // event 1602_43
    {
        if (!(group_main_engine_1)) goto event_1602_43_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1602_43_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(2)) != (0))) goto event_1602_43_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) < (5))) goto event_1602_43_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(1);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_max(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8, 20));
    }
    event_1602_43_end: ;
}
void Frames::event_func_10032()
{
    // event 1603_43
    {
        if (!(group_main_engine_1)) goto event_1603_43_end;
        if (!((((Active*)foreach_instance_elite)->alterables->values.get(0)) == (0))) goto event_1603_43_end;
        if (!((get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))) >= (5))) goto event_1603_43_end;
        ((Active*)((Active*)foreach_instance_elite))->force_animation(2);
        ((Active*)((Active*)foreach_instance_elite))->force_speed(get_abs(((Active*)foreach_instance_elite)->alterables->values.get(2))*8);
    }
    event_1603_43_end: ;
}
void Frames::event_func_10033()
{
    // event 1633_43
    {
        if (!(group_main_engine_1)) goto event_1633_43_end;
        if (!(((Active*)foreach_instance_elite)->test_animation(12))) goto event_1633_43_end;
        if (!((((Active*)foreach_instance_elite)->get_frame()) == (1))) goto event_1633_43_end;
        if (!(((Active*)foreach_instance_elite)->alterables->flags.is_off(2))) goto event_1633_43_end;
        FrameObject * single_instance_1633_43_0; single_instance_1633_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)foreach_instance_elite)->get_action_x() - ((Active*)foreach_instance_elite)->layer->off_x + 0, ((Active*)foreach_instance_elite)->get_action_y() - ((Active*)foreach_instance_elite)->layer->off_y + 0), ((Active*)foreach_instance_elite)->layer);
            if (single_instance_1633_43_0 == NULL)
                single_instance_1633_43_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1633_43_0))->alterables->values.set(0, 12);
        ((Active*)single_instance_1633_43_0)->move_back(((Active*)foreach_instance_elite));
        ((Active*)((Active*)single_instance_1633_43_0))->alterables->values.set(1, (((Active*)foreach_instance_elite)->alterables->values.get(1)+1)*90-180);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)((Active*)single_instance_1633_43_0))->set_direction(4);
        ((Active*)((Active*)foreach_instance_elite))->alterables->flags.enable(2);
    }
    event_1633_43_end: ;
}
void Frames::foreach_elite_43()
{
    event_func_10031();
    event_func_10032();
    event_func_10033();
}
void Frames::event_func_10034()
{
    // event 2154_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2154_43_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(3))) goto event_2154_43_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_2154_43_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -2+randrange(5));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -3);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 15);
    }
    event_2154_43_end: ;
}
void Frames::col_3_43()
{
    event_func_10034();
}
void Frames::event_func_10035()
{
    // event 2286_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2286_43_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (2))) goto event_2286_43_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 3);
        FrameObject * single_instance_2286_43_0; single_instance_2286_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_2286_43_0 == NULL)
                single_instance_2286_43_0 = new_obj;
        }
    }
    event_2286_43_end: ;
}
void Frames::col_4_43()
{
    event_func_1336();
    event_func_10035();
}
void Frames::event_func_10036()
{
    // event 2140_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2140_43_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_2140_43_end;
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_2140_43_0; single_instance_2140_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_2140_43_0 == NULL)
                single_instance_2140_43_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_2140_43_end: ;
}
void Frames::col_5_43()
{
    event_func_10036();
}
void Frames::event_func_10037()
{
    // event 2139_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2139_43_end;
        if (!check_not_overlap(((Active*)col_instance_2), playerreflect_447_instances)) goto event_2139_43_end;
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_2139_43_0; single_instance_2139_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_2139_43_0 == NULL)
                single_instance_2139_43_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
        ((Active*)((Active*)single_instance_2139_43_0))->set_angle(randrange(4)*90, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2139_43_end: ;
}
void Frames::event_func_10038()
{
    // event 2164_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2164_43_end;
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_2164_43_0; single_instance_2164_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_2164_43_0 == NULL)
                single_instance_2164_43_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)((Active*)single_instance_2164_43_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_2164_43_0))->set_layer(((Active*)col_instance_1)->layer->index+1-1);
    }
    event_2164_43_end: ;
}
void Frames::col_8_43()
{
    event_func_10037();
    event_func_10038();
}
void Frames::event_func_10039()
{
    // event 2151_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2151_43_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_2151_43_end;
        if (!check_not_overlap(((Active*)col_instance_2), playerreflect_447_instances)) goto event_2151_43_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 6);
    }
    event_2151_43_end: ;
}
void Frames::col_15_43()
{
    event_func_10039();
}
void Frames::event_func_10040()
{
    // event 1571_43
    {
        if (!(group_main_engine_1)) goto event_1571_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1571_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1571_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1571_43_end: ;
}
void Frames::col_16_43()
{
    event_func_10040();
}
void Frames::event_func_10041()
{
    // event 2161_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2161_43_end;
        if (!((((Active*)col_instance_2)->get_frame()) < (8))) goto event_2161_43_end;
        FrameObject * single_instance_2161_43_0; single_instance_2161_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2161_43_0 == NULL)
                single_instance_2161_43_0 = new_obj;
        }
        FrameObject * single_instance_2161_43_1; single_instance_2161_43_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2161_43_1 == NULL)
                single_instance_2161_43_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_2161_43_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_2161_43_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_2161_43_0))->move_back();
        ((Active*)((Active*)single_instance_2161_43_1))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(4));
    }
    event_2161_43_end: ;
}
void Frames::col_17_43()
{
    event_func_10041();
}
void Frames::event_func_10042()
{
    // event 2153_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2153_43_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_2153_43_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_2153_43_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 0-((Active*)col_instance_2)->alterables->values.get(5));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 0-((Active*)col_instance_2)->alterables->values.get(2));
    }
    event_2153_43_end: ;
}
void Frames::event_func_10043()
{
    // event 2169_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2169_43_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) == (4))) goto event_2169_43_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_2169_43_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 90);
    }
    event_2169_43_end: ;
}
void Frames::col_19_43()
{
    event_func_10042();
    event_func_10043();
}
void Frames::event_func_10044()
{
    // event 2170_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2170_43_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(3))) goto event_2170_43_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_2170_43_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -2+randrange(5));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -3);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 15);
    }
    event_2170_43_end: ;
}
void Frames::col_20_43()
{
    event_func_10044();
}
void Frames::event_func_10045()
{
    // event 1567_43
    {
        if (!(group_main_engine_1)) goto event_1567_43_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1567_43_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(16)) == (0))) goto event_1567_43_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(13, 0-((Active*)col_instance_2)->alterables->values.get(13));
    }
    event_1567_43_end: ;
}
void Frames::col_27_43()
{
    event_func_10045();
}
void Frames::event_func_10046()
{
    // event 2286_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2286_43_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) == (2))) goto event_2286_43_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 3);
        FrameObject * single_instance_2286_43_0; single_instance_2286_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2286_43_0 == NULL)
                single_instance_2286_43_0 = new_obj;
        }
    }
    event_2286_43_end: ;
}
void Frames::col_28_43()
{
    event_func_1348();
    event_func_10046();
}
void Frames::event_func_10047()
{
    // event 2150_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2150_43_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_2150_43_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 6);
    }
    event_2150_43_end: ;
}
void Frames::event_func_10048()
{
    // event 2168_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2168_43_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
    }
    event_2168_43_end: ;
}
void Frames::col_30_43()
{
    event_func_10047();
    event_func_10048();
}
void Frames::test_collisions_43()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 1, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(bossmissile_1835_instances, bossserphitbox_1867_instances, 1, 1, (EventFunction)&Frames::col_3_43);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_4_43);
    test_collisions(playerreflect_447_instances, bossrapidbullet_1834_instances, 4, 1, (EventFunction)&Frames::col_5_43);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 8, (EventFunction)&Frames::col_4_43);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(player_389_instances, bossrapidbullet_1834_instances, 1, 2, (EventFunction)&Frames::col_8_43);
    test_collisions(qualifier_20, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(enemyplantturretus_2365_instances, jcslidingplatform_2414_instances, 1, 1, (EventFunction)&Frames::col_12_39);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_7_20);
    test_collisions(player_389_instances, bossmissile_1835_instances, 2, 2, (EventFunction)&Frames::col_15_43);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(qualifier_19, minibossflame_1199_instances, 1073741824, 1, (EventFunction)&Frames::col_17_43);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 16, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(playerreflect_447_instances, bossmissile_1835_instances, 32, 4, (EventFunction)&Frames::col_19_43);
    test_collisions(bossmissile_1835_instances, bossgunshiphitbox_2536_instances, 8, 1, (EventFunction)&Frames::col_20_43);
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 8388608, 1, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, bossicemissile_2433_instances, 64, 1, (EventFunction)&Frames::col_25_40);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 2, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(qualifier_7, enemypellet_863_instances, 2097152, 2, (EventFunction)&Frames::col_8_20);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 4, (EventFunction)&Frames::col_8_13);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    ObjectList::iterator it1, it2;
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_43();
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
        col_30_43();
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
    for (it1 = minibosstreddbomb_1015_instances.begin(); it1 != minibosstreddbomb_1015_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_22();
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
void Frames::event_func_10049()
{
    // event 366_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_366_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_366_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_366_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_366_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_366_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_366_43_end: ;
}
void Frames::event_func_10050()
{
    // event 400_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_400_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_400_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_400_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_400_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_400_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_400_43_end: ;
}
void Frames::event_func_10051()
{
    // event 411_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_411_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_411_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_411_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_411_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_411_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_411_43_end: ;
}
void Frames::event_func_10052()
{
    // event 428_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_428_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_428_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_428_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_428_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_428_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_428_43_end: ;
}
void Frames::event_func_10053()
{
    // event 471_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_471_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_471_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_471_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_471_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_471_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_471_43_end: ;
}
void Frames::event_func_10054()
{
    // event 496_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_496_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_496_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_496_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_496_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_496_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_496_43_end: ;
}
void Frames::event_func_10055()
{
    // event 540_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_540_43_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_540_43_end;
        FrameObject * single_instance_540_43_0; single_instance_540_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_540_43_0 == NULL)
                    single_instance_540_43_0 = new_obj;
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
                loop_spawndebris_43();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_540_43_end: ;
}
void Frames::event_func_10056()
{
    // event 557_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_43_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_557_43_end;
        FrameObject * single_instance_557_43_0; single_instance_557_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_557_43_0 == NULL)
                    single_instance_557_43_0 = new_obj;
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
                loop_spawndebris_43();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_557_43_end: ;
}
void Frames::event_func_10057()
{
    // event 691_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_691_43_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_691_43_end;
        FrameObject * single_instance_691_43_0; single_instance_691_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_691_43_0 == NULL)
                    single_instance_691_43_0 = new_obj;
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
                loop_spawndebris_43();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_691_43_end: ;
}
void Frames::event_func_10058()
{
    // event 785_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_785_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_785_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_785_43_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_direction(4);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(8+(global_values->get(3)/math_helper/4)%math_helper%2);
    }
    event_785_43_end: ;
}
void Frames::event_func_10059()
{
    // event 792_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_792_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_792_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            if (parent == NULL) goto pos_end_792_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_792_43_0: ;
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_792_43_end: ;
}
void Frames::event_func_10060()
{
    // event 793_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_793_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_793_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_793_43_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_793_43_end: ;
}
void Frames::event_func_10061()
{
    // event 794_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_794_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_794_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_794_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-15);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-15);
            ((Active*)*it)->set_angle(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_794_43_end: ;
}
void Frames::event_func_10062()
{
    // event 795_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_795_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_795_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_795_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_MILLA_BLOCKSUMMON_417, -1, 1);
        media.stop_sample(SOUND_MILLA_BLOCKCHARGE_424);
    }
    event_795_43_end: ;
}
void Frames::event_func_10063()
{
    // event 797_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_797_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_797_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_797_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_797_43_end: ;
}
void Frames::event_func_10064()
{
    // event 798_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_798_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_798_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_x()+sin_deg(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-15);
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-15);
            ((Active*)*it)->set_angle(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
        }
    }
    event_798_43_end: ;
}
void Frames::event_func_10065()
{
    // event 799_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_799_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_799_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_799_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_799_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(0, 4);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_MILLA_BARRIERSUPER_2_423, -1, 1);
    }
    event_799_43_end: ;
}
void Frames::event_func_10066()
{
    // event 800_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_800_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_800_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_800_43_end: ;
}
void Frames::event_func_10067()
{
    // event 801_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_801_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_801_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_801_43_end: ;
}
void Frames::event_func_10068()
{
    // event 804_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_804_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_804_43_end;
        if (not_always_804_43 > loop_count) {
            not_always_804_43 = loop_count + 2;
            goto event_804_43_end;
        }
        not_always_804_43 = loop_count + 2;
        media.play_id(SOUND_MILLA_BLOCKBREAK_418, -1, 1);
    }
    event_804_43_end: ;
}
void Frames::event_func_10069()
{
    // event 805_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_805_43_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_805_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_805_43_end;
        FrameObject * single_instance_805_43_0; single_instance_805_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerreflect_447_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_805_43_0 == NULL)
                    single_instance_805_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_805_43_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_805_43_0))->set_x(((Active*)single_instance_805_43_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_805_43_0))->set_y(((Active*)single_instance_805_43_0)->get_y()-10+randrange(21));
    }
    event_805_43_end: ;
}
void Frames::event_func_10070()
{
    // event 806_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_806_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_806_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(9);
        }
    }
    event_806_43_end: ;
}
void Frames::event_func_10071()
{
    // event 807_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_807_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_807_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_807_43_end: ;
}
void Frames::event_func_10072()
{
    // event 808_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_808_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_808_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_808_43_end: ;
}
void Frames::event_func_10073()
{
    // event 809_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_809_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_809_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (31))) goto event_809_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_809_43_end: ;
}
void Frames::event_func_10074()
{
    // event 810_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_810_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_810_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_810_43_end: ;
}
void Frames::event_func_10075()
{
    // event 811_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_811_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_811_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 6);
        }
    }
    event_811_43_end: ;
}
void Frames::event_func_10076()
{
    // event 812_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_812_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_812_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
            ((Active*)*it)->alterables->values.add(5, 0.5);
        }
    }
    event_812_43_end: ;
}
void Frames::event_func_10077()
{
    // event 813_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_813_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_813_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_813_43_end: ;
}
void Frames::event_func_10078()
{
    // event 814_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_814_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_814_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_814_43_end: ;
}
void Frames::event_func_10079()
{
    // event 815_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_815_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (10))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_815_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_815_43_end: ;
}
void Frames::event_func_10080()
{
    // event 816_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_816_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_816_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 4);
        }
    }
    event_816_43_end: ;
}
void Frames::event_func_10081()
{
    // event 818_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_818_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_818_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_818_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_818_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*5));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*5));
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_818_43_end: ;
}
void Frames::event_func_10082()
{
    // event 865_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_865_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (6))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_865_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(0, 4);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->force_animation(11);
        }
        media.play_id(SOUND_MILLA_BARRIER_2_422, -1, 1);
    }
    event_865_43_end: ;
}
void Frames::event_func_10083()
{
    // event 870_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_870_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_870_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_870_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_870_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4);
        }
    }
    event_870_43_end: ;
}
void Frames::event_func_10084()
{
    // event 871_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_871_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_871_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_871_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_871_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4);
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        }
    }
    event_871_43_end: ;
}
void Frames::event_func_10085()
{
    // event 872_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_872_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_872_43_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 20);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle());
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-12);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_872_43_end: ;
}
void Frames::event_func_10086()
{
    // event 873_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_873_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_873_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_873_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        }
        media.play_id(SOUND_MILLA_SHOT_2_420, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_873_43_end: ;
}
void Frames::event_func_10087()
{
    // event 874_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_874_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_874_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_874_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_874_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+4, 4));
    }
    event_874_43_end: ;
}
void Frames::event_func_10088()
{
    // event 875_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_875_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_875_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_875_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_875_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-4, -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_875_43_end: ;
}
void Frames::event_func_10089()
{
    // event 876_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_876_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_876_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_876_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        }
        media.play_id(SOUND_MILLA_SHOTSUPER_421, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, ((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-6);
    }
    event_876_43_end: ;
}
