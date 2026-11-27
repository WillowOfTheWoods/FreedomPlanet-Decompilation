#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10590()
{
    // event 2187_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2187_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2187_43_end;
        FrameObject * single_instance_2187_43_0; single_instance_2187_43_0 = pick_random(bossgunshipflare_2509_instances);
        if (single_instance_2187_43_0 == NULL) goto event_2187_43_end;
        FrameObject * single_instance_2187_43_1; single_instance_2187_43_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_2187_43_0)->x + 0, ((Active*)single_instance_2187_43_0)->y + 0), ((Active*)single_instance_2187_43_0)->layer);
            if (single_instance_2187_43_1 == NULL)
                single_instance_2187_43_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_2187_43_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2187_43_1))->set_x(((Active*)single_instance_2187_43_1)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_2187_43_1))->set_y(((Active*)single_instance_2187_43_1)->get_y()-10+randrange(21));
    }
    event_2187_43_end: ;
}
void Frames::event_func_10591()
{
    // event 2188_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2188_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossgunshipflare_2509_instances, playercharactersensor_383_instances)) goto event_2188_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2188_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2188_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2188_43_end: ;
}
void Frames::event_func_10592()
{
    // event 2210_43
    {
        if (!(group_main_engine_1)) goto event_2210_43_end;
        if (!((effectstickyice_2431_instances.size()) > (0))) goto event_2210_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2210_43_end;
        effectstickyice_2431_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(effectstickyice_2431_instances, player_389_instances)) goto event_2210_43_end;
        for (ObjectIterator it(effectstickyice_2431_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (100))) { it.deselect(); continue; }
        }
        if (!effectstickyice_2431_instances.has_selection()) goto event_2210_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 5);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
    }
    event_2210_43_end: ;
}
void Frames::event_func_10593()
{
    // event 2211_43
    {
        if (!(group_main_engine_1)) goto event_2211_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_2211_43_end;
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
        }
    }
    event_2211_43_end: ;
}
void Frames::event_func_10594()
{
    // event 2225_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2225_43_end;
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1 = false;
    
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1 = false;
    
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1 = false;
    
    }
    event_2225_43_end: ;
}
void Frames::event_func_10595()
{
    // event 2226_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2226_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2226_43_end;
        if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1) {
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1 = true;
        }
    }
    event_2226_43_end: ;
}
void Frames::event_func_10596()
{
    // event 2227_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2227_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+100))) goto event_2227_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, -1);
    }
    event_2227_43_end: ;
}
void Frames::event_func_10597()
{
    // event 2228_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2228_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-100))) goto event_2228_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, 1);
    }
    event_2228_43_end: ;
}
void Frames::event_func_10598()
{
    // event 2229_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2229_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) goto event_2229_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) goto event_2229_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, 0);
    }
    event_2229_43_end: ;
}
void Frames::event_func_10599()
{
    // event 2230_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2230_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (-1))) goto event_2230_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) <= (0))) goto event_2230_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) > (-2))) goto event_2230_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, -2);
    }
    event_2230_43_end: ;
}
void Frames::event_func_10600()
{
    // event 2231_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2231_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (-1))) goto event_2231_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) > (0))) goto event_2231_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_max(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)-0.2, -5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, -1);
    }
    event_2231_43_end: ;
}
void Frames::event_func_10601()
{
    // event 2232_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2232_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (-1))) goto event_2232_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_max(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)-0.1, -5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, -1);
    }
    event_2232_43_end: ;
}
void Frames::event_func_10602()
{
    // event 2233_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2233_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (1))) goto event_2233_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) >= (0))) goto event_2233_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) < (2))) goto event_2233_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, 2);
    }
    event_2233_43_end: ;
}
void Frames::event_func_10603()
{
    // event 2234_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2234_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (1))) goto event_2234_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) < (0))) goto event_2234_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)+0.2, 5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
    }
    event_2234_43_end: ;
}
void Frames::event_func_10604()
{
    // event 2235_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2235_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (1))) goto event_2235_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)+0.1, 5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
    }
    event_2235_43_end: ;
}
void Frames::event_func_10605()
{
    // event 2236_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2236_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (0))) goto event_2236_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) < (0))) goto event_2236_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)+0.2, 0));
    }
    event_2236_43_end: ;
}
void Frames::event_func_10606()
{
    // event 2237_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2237_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (0))) goto event_2237_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) > (0))) goto event_2237_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_max(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_2237_43_end: ;
}
void Frames::event_func_10607()
{
    // event 2238_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2238_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) == (0))) goto event_2238_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.add(11, randrange(90));
    }
    event_2238_43_end: ;
}
void Frames::event_func_10608()
{
    // event 2239_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2239_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (0))) goto event_2239_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.add(11, 1);
    }
    event_2239_43_end: ;
}
void Frames::event_func_10609()
{
    // event 2240_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2240_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (120))) goto event_2240_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(3, -8);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(11, 0);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_2240_43_end: ;
}
void Frames::event_func_10610()
{
    // event 2241_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2241_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2241_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (20))) goto event_2241_43_end;
        if (!((bossrapidbullet_1834_instances.size()) == (0))) goto event_2241_43_end;
        if (!((bossgunshipflare_2509_instances.size()) > (0))) goto event_2241_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2241_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(3, -8);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(11, 1);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_2241_43_end: ;
}
void Frames::event_func_10611()
{
    // event 2242_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2242_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2242_43_end;
        playerassistmillamask_2557_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerassistmillamask_2557_instances, qualifier_20)) goto event_2242_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 1);
    }
    event_2242_43_end: ;
}
void Frames::event_func_10612()
{
    // event 2243_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2243_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2243_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (0))) goto event_2243_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) == (0))) goto event_2243_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 1);
    }
    event_2243_43_end: ;
}
void Frames::event_func_10613()
{
    // event 2244_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2244_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2244_43_end;
        playerassistmillaradar_2560_instances.clear_selection();
        enemytrooperlaser_2508_instances.clear_selection();
        if (!check_overlap(playerassistmillaradar_2560_instances, enemytrooperlaser_2508_instances)) goto event_2244_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 1);
    }
    event_2244_43_end: ;
}
void Frames::event_func_10614()
{
    // event 2245_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2245_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2245_43_end;
        playerassistmillaradar_2560_instances.clear_selection();
        bossrapidbullet_1834_instances.clear_selection();
        if (!check_overlap(playerassistmillaradar_2560_instances, bossrapidbullet_1834_instances)) goto event_2245_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 1);
    }
    event_2245_43_end: ;
}
void Frames::event_func_10615()
{
    // event 2246_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2246_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (0))) goto event_2246_43_end;
        playerassistmillaradar_2560_instances.clear_selection();
        bossmissile_1835_instances.clear_selection();
        if (!check_overlap(playerassistmillaradar_2560_instances, bossmissile_1835_instances)) goto event_2246_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 1);
    }
    event_2246_43_end: ;
}
void Frames::event_func_10616()
{
    // event 2247_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2247_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(4)))) goto event_2247_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (0))) goto event_2247_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) == (0))) goto event_2247_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(0);
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_frame();
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_speed();
    }
    event_2247_43_end: ;
}
void Frames::event_func_10617()
{
    // event 2248_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2248_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(4)))) goto event_2248_43_end;
        if (!((get_abs(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2))) > (0))) goto event_2248_43_end;
        if (!((get_abs(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2))) < (5))) goto event_2248_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(1);
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_speed(14+get_abs(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2))*5);
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_frame();
    }
    event_2248_43_end: ;
}
void Frames::event_func_10618()
{
    // event 2249_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1)) goto event_2249_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(4)))) goto event_2249_43_end;
        if (!((get_abs(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2))) >= (5))) goto event_2249_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(2);
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_speed(27+get_abs(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2))*2);
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_frame();
    }
    event_2249_43_end: ;
}
void Frames::event_func_10619()
{
    // event 2250_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2250_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (1))) goto event_2250_43_end;
        if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1) {
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1 = true;
        }
    }
    event_2250_43_end: ;
}
void Frames::event_func_10620()
{
    // event 2251_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2251_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2251_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2251_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, -1);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(11, 0);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_2251_43_end: ;
}
void Frames::event_func_10621()
{
    // event 2252_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2252_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2252_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2252_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(11, 0);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_2252_43_end: ;
}
void Frames::event_func_10622()
{
    // event 2253_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2253_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) > (0))) goto event_2253_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_max(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_2253_43_end: ;
}
void Frames::event_func_10623()
{
    // event 2254_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2254_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)) < (0))) goto event_2254_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)+0.2, 0));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
    }
    event_2254_43_end: ;
}
void Frames::event_func_10624()
{
    // event 2255_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2255_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(25);
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_frame(0);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.add(11, 1);
    }
    event_2255_43_end: ;
}
void Frames::event_func_10625()
{
    // event 2256_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2256_43_end;
        playerassistmillaradar_2560_instances.clear_selection();
        bossmissile_1835_instances.clear_selection();
        if (!check_overlap(playerassistmillaradar_2560_instances, bossmissile_1835_instances)) goto event_2256_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_frame(1);
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 45*((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(7));
        }
    }
    event_2256_43_end: ;
}
void Frames::event_func_10626()
{
    // event 2257_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2257_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2257_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(6, 1);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2257_43_end: ;
}
void Frames::event_func_10627()
{
    // event 2258_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2258_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2258_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playerassistmilla_2558_instances))->get_direction());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(playerassistmilla_2558_instances))->get_angle());
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(playerassistmillamask_2557_instances))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y()-12);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(7));
        }
    }
    event_2258_43_end: ;
}
void Frames::event_func_10628()
{
    // event 2259_43
    bool or_result_2259_43 = false;
    bool or_temp_result_2259_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto or_event_2259_43_0_end;
        playerassistmillamask_2557_instances.clear_selection();
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (10))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2259_43_0_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_2259_43_0_end;
        qualifier_20.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_20)) goto or_event_2259_43_0_end;
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2259_43_0_end;
        or_result_2259_43 = true;
        or_temp_result_2259_43_0 = true;
    }
    or_event_2259_43_0_end: ;
    playerreflect_447_instances.clear_saved_selection();
    playerassistmillamask_2557_instances.clear_saved_selection();
    qualifier_20.clear_saved_selection();
    if (or_temp_result_2259_43_0) {
        qualifier_20.save_selection();
        playerreflect_447_instances.save_selection();
        playerassistmillamask_2557_instances.save_selection();
    }
    // event 2259_43
    bool or_temp_result_2259_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto or_event_2259_43_1_end;
        playerassistmillamask_2557_instances.clear_selection();
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (10))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2259_43_1_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_2259_43_1_end;
        qualifier_20.clear_selection();
        if (!check_overlap(playerassistmillamask_2557_instances, qualifier_20)) goto or_event_2259_43_1_end;
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2259_43_1_end;
        or_result_2259_43 = true;
        or_temp_result_2259_43_1 = true;
        or_event_2259_43_1_end: ;
        if (or_temp_result_2259_43_1) {
            qualifier_20.save_selection();
            playerreflect_447_instances.save_selection();
            playerassistmillamask_2557_instances.save_selection();
        }
        if (!or_result_2259_43) goto or_final_or_event_2259_43_1_end;
        playerassistmillamask_2557_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        qualifier_20.empty_selection();
        if (or_temp_result_2259_43_0 || or_temp_result_2259_43_1) {
            qualifier_20.restore_selection();
        }
        if (or_temp_result_2259_43_0 || or_temp_result_2259_43_1) {
            playerassistmillamask_2557_instances.restore_selection();
        }
        if (or_temp_result_2259_43_0 || or_temp_result_2259_43_1) {
            playerreflect_447_instances.restore_selection();
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    or_final_or_event_2259_43_1_end: ;
}
void Frames::event_func_10629()
{
    // event 2260_43
    bool or_result_2260_43 = false;
    bool or_temp_result_2260_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto or_event_2260_43_0_end;
        playerassistmillamask_2557_instances.clear_selection();
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (10))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2260_43_0_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_2260_43_0_end;
        qualifier_20.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_20)) goto or_event_2260_43_0_end;
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2260_43_0_end;
        or_result_2260_43 = true;
        or_temp_result_2260_43_0 = true;
    }
    or_event_2260_43_0_end: ;
    playerreflect_447_instances.clear_saved_selection();
    playerassistmillamask_2557_instances.clear_saved_selection();
    qualifier_20.clear_saved_selection();
    if (or_temp_result_2260_43_0) {
        qualifier_20.save_selection();
        playerreflect_447_instances.save_selection();
        playerassistmillamask_2557_instances.save_selection();
    }
    // event 2260_43
    bool or_temp_result_2260_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto or_event_2260_43_1_end;
        playerassistmillamask_2557_instances.clear_selection();
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (10))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2260_43_1_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_2260_43_1_end;
        qualifier_20.clear_selection();
        if (!check_overlap(playerassistmillamask_2557_instances, qualifier_20)) goto or_event_2260_43_1_end;
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerassistmillamask_2557_instances.has_selection()) goto or_event_2260_43_1_end;
        or_result_2260_43 = true;
        or_temp_result_2260_43_1 = true;
        or_event_2260_43_1_end: ;
        if (or_temp_result_2260_43_1) {
            qualifier_20.save_selection();
            playerreflect_447_instances.save_selection();
            playerassistmillamask_2557_instances.save_selection();
        }
        if (!or_result_2260_43) goto or_final_or_event_2260_43_1_end;
        playerassistmillamask_2557_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        qualifier_20.empty_selection();
        if (or_temp_result_2260_43_0 || or_temp_result_2260_43_1) {
            qualifier_20.restore_selection();
        }
        if (or_temp_result_2260_43_0 || or_temp_result_2260_43_1) {
            playerassistmillamask_2557_instances.restore_selection();
        }
        if (or_temp_result_2260_43_0 || or_temp_result_2260_43_1) {
            playerreflect_447_instances.restore_selection();
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        for (ObjectIterator it(playerassistmillamask_2557_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    or_final_or_event_2260_43_1_end: ;
}
void Frames::event_func_10630()
{
    // event 2261_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2261_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2261_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (30))) goto event_2261_43_end;
        if (!((enemytrooperlaser_2508_instances.size()) == (0))) goto event_2261_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_2261_43_end: ;
}
void Frames::event_func_10631()
{
    // event 2262_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2262_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2262_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (30))) goto event_2262_43_end;
        if (!((bossgunshipflare_2509_instances.size()) > (0))) goto event_2262_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_2262_43_end: ;
}
void Frames::event_func_10632()
{
    // event 2263_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2263_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2263_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (30))) goto event_2263_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-200))) goto event_2263_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_2263_43_end: ;
}
void Frames::event_func_10633()
{
    // event 2264_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2264_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2264_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(11)) > (30))) goto event_2264_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+200))) goto event_2264_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 5);
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_2264_43_end: ;
}
void Frames::event_func_10634()
{
    // event 2265_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1)) goto event_2265_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2265_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, 0-((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(7));
    }
    event_2265_43_end: ;
}
void Frames::event_func_10635()
{
    // event 2266_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2266_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (2))) goto event_2266_43_end;
        if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1) {
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1 = true;
        }
    }
    event_2266_43_end: ;
}
void Frames::event_func_10636()
{
    // event 2267_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1)) goto event_2267_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(24);
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_frame();
        ((Active*)get_instance(playerassistmilla_2558_instances))->restore_speed();
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(3, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(3)+0.3, 15));
    }
    event_2267_43_end: ;
}
void Frames::event_func_10637()
{
    // event 2268_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1)) goto event_2268_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (0))) goto event_2268_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(8, randrange(2)*2-1);
    }
    event_2268_43_end: ;
}
void Frames::event_func_10638()
{
    // event 2269_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1)) goto event_2269_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (-1))) goto event_2269_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_max(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)-0.1, -5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, -1);
    }
    event_2269_43_end: ;
}
void Frames::event_func_10639()
{
    // event 2270_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1)) goto event_2270_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(8)) == (1))) goto event_2270_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(2, get_min(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2)+0.1, 5));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(7, 1);
    }
    event_2270_43_end: ;
}
void Frames::event_func_10640()
{
    // event 2271_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1)) goto event_2271_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(3)) >= (0))) goto event_2271_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(4)))) goto event_2271_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(1, ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(4));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerassistmilla_2558_instances))->force_animation(0);
    }
    event_2271_43_end: ;
}
void Frames::event_func_10641()
{
    // event 2272_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2272_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(5)) == (1))) goto event_2272_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2272_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(12, 999);
        {
            enemytrooperlaser_2508_instances.clear_selection();
            SavedSelection extra_enemytrooperlaser_2508_instances(enemytrooperlaser_2508_instances);
            for (SavedIterator it(extra_enemytrooperlaser_2508_instances); !it.end(); ++it) {
                foreach_instance_m_nearest = ((Active*)*it);
                foreach_m_nearest_43();
            }
        }
    }
    event_2272_43_end: ;
}
void Frames::event_func_10642()
{
    // event 2277_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2277_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2277_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            if (parent == NULL) goto pos_end_2277_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2277_43_0: ;
        }
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_2277_43_end: ;
}
void Frames::event_func_10643()
{
    // event 2278_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2278_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2278_43_end;
        if (!((((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.get(5)) == (0))) goto event_2278_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.set(6, 0);
    }
    event_2278_43_end: ;
}
void Frames::event_func_10644()
{
    // event 2279_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2279_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2279_43_end;
        if (!((((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.get(5)) == (2))) goto event_2279_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(((Active*)get_instance(playerassistmilla_2558_instances))->get_action_x()+sin_deg(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle())*-15);
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmilla_2558_instances))->get_action_y()+cos_deg(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle())*-15);
            ((Active*)*it)->set_angle(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle(), 0);
        }
    }
    event_2279_43_end: ;
}
void Frames::event_func_10645()
{
    // event 2280_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2280_43_end;
        if (!((((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.get(5)) == (2))) goto event_2280_43_end;
        if (!((((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.get(6)) == (40))) goto event_2280_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2280_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
    }
    event_2280_43_end: ;
}
void Frames::event_func_10646()
{
    // event 2281_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2281_43_end;
        if (!((((Active*)get_instance(playerassistmilla_2558_instances))->alterables->values.get(5)) == (0))) goto event_2281_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2281_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_2281_43_end: ;
}
void Frames::event_func_10647()
{
    // event 2282_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2282_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2282_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(((Active*)get_instance(playerassistmilla_2558_instances))->get_action_x()+sin_deg(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle())*-15);
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmilla_2558_instances))->get_action_y()+cos_deg(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle())*-15);
            ((Active*)*it)->set_angle(((Active*)get_instance(playerassistmilla_2558_instances))->get_angle(), 0);
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
        }
    }
    event_2282_43_end: ;
}
void Frames::event_func_10648()
{
    // event 2283_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2283_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(6)) == (1))) goto event_2283_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2283_43_end;
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
    }
    event_2283_43_end: ;
}
void Frames::event_func_10649()
{
    // event 2284_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2284_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2284_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2284_43_end: ;
}
void Frames::event_func_10650()
{
    // event 2285_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2285_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2285_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_2285_43_end: ;
}
void Frames::event_func_10651()
{
    // event 2287_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2287_43_end;
        playerreflect_447_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_20)) goto event_2287_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2287_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        FrameObject * single_instance_2287_43_0; single_instance_2287_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerreflect_447_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2287_43_0 == NULL)
                    single_instance_2287_43_0 = new_obj;
            }
        }
    }
    event_2287_43_end: ;
}
void Frames::event_func_10652()
{
    // event 2288_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2288_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2288_43_end;
        if (not_always_2288_43 > loop_count) {
            not_always_2288_43 = loop_count + 2;
            goto event_2288_43_end;
        }
        not_always_2288_43 = loop_count + 2;
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
    }
    event_2288_43_end: ;
}
void Frames::event_func_10653()
{
    // event 2289_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2289_43_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2289_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2289_43_end;
        FrameObject * single_instance_2289_43_0; single_instance_2289_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerreflect_447_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2289_43_0 == NULL)
                    single_instance_2289_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2289_43_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2289_43_0))->set_x(((Active*)single_instance_2289_43_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_2289_43_0))->set_y(((Active*)single_instance_2289_43_0)->get_y()-10+randrange(21));
    }
    event_2289_43_end: ;
}
void Frames::event_func_10654()
{
    // event 2290_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2290_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2290_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(9);
        }
    }
    event_2290_43_end: ;
}
void Frames::event_func_10655()
{
    // event 2291_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2291_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2291_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2291_43_end: ;
}
void Frames::event_func_10656()
{
    // event 2292_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2292_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2292_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_2292_43_end: ;
}
void Frames::event_func_10657()
{
    // event 2293_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2293_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2293_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(6)) == (0))) goto event_2293_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_2293_43_end: ;
}
void Frames::event_func_10658()
{
    // event 2294_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2294_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2294_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_2294_43_end: ;
}
void Frames::event_func_10659()
{
    // event 2295_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2295_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2295_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 6);
        }
    }
    event_2295_43_end: ;
}
void Frames::event_func_10660()
{
    // event 2296_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2296_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2296_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerassistmillamask_2557_instances))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y()-12);
            ((Active*)*it)->alterables->values.add(5, 0.5);
        }
    }
    event_2296_43_end: ;
}
void Frames::event_func_10661()
{
    // event 2297_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2297_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2297_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2297_43_end: ;
}
void Frames::event_func_10662()
{
    // event 2298_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2298_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2298_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_2298_43_end: ;
}
void Frames::event_func_10663()
{
    // event 2299_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2299_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (10))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2299_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_2299_43_end: ;
}
void Frames::event_func_10664()
{
    // event 2300_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2300_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2300_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 4);
        }
    }
    event_2300_43_end: ;
}
void Frames::event_func_10665()
{
    // event 2301_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2301_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(0)) > (width-48))) goto event_2301_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(0, width-48);
    }
    event_2301_43_end: ;
}
void Frames::event_func_10666()
{
    // event 2302_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2302_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.add(0, ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(2));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.add(1, ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(3));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->set_x(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerassistmillamask_2557_instances))->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(1));
        {
            FrameObject * parent = ((Active*)get_instance(playerassistmillamask_2557_instances));
            if (parent == NULL) goto pos_end_2302_43_0;
            ((Active*)get_instance(playerassistmillaradar_2560_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2302_43_0: ;
        }
    }
    event_2302_43_end: ;
}
void Frames::event_func_10667()
{
    // event 2303_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2303_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(7)) == (1))) goto event_2303_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->set_direction(0);
    }
    event_2303_43_end: ;
}
void Frames::event_func_10668()
{
    // event 2304_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2304_43_end;
        if (!((((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.get(7)) == (-1))) goto event_2304_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->set_direction(16);
    }
    event_2304_43_end: ;
}
void Frames::event_func_10669()
{
    // event 2305_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1)) goto event_2305_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->set_x(((Active*)get_instance(playerassistmillamask_2557_instances))->get_x());
        ((Active*)get_instance(playerassistmilla_2558_instances))->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y());
        ((Active*)get_instance(playerassistmillatail_2554_instances))->set_x(((Active*)get_instance(playerassistmillamask_2557_instances))->get_x());
        ((Active*)get_instance(playerassistmillatail_2554_instances))->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y());
        ((Active*)get_instance(playerassistmillatail_2554_instances))->force_animation(((Active*)get_instance(playerassistmilla_2558_instances))->current_animation);
        ((Active*)get_instance(playerassistmillatail_2554_instances))->set_direction(((Active*)get_instance(playerassistmilla_2558_instances))->get_direction());
    }
    event_2305_43_end: ;
}
void Frames::event_func_10670()
{
    // event 2306_43
    {
        if (!(group_main_engine_1)) goto event_2306_43_end;
        if (!((frame_left()) < (1000))) goto event_2306_43_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(5-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(0)+sin_deg(global_values->get(3)%math_helper%360)*40);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(5-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(6-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(0)+sin_deg(global_values->get(3)%math_helper%360)*40);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(6-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1));
    }
    event_2306_43_end: ;
}
void Frames::event_func_10671()
{
    // event 2307_43
    {
        if (!(group_main_engine_1)) goto event_2307_43_end;
        if (!((frame_left()) >= (1000))) goto event_2307_43_end;
        if (not_always_2307_43 > loop_count) {
            not_always_2307_43 = loop_count + 2;
            goto event_2307_43_end;
        }
        not_always_2307_43 = loop_count + 2;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(5-1, 0);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(5-1, 0);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(6-1, 0);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(6-1, 0);
    }
    event_2307_43_end: ;
}
void Frames::event_func_10672()
{
    // event 2308_43
    {
        if (!(group_main_engine_1)) goto event_2308_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (560))) goto event_2308_43_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_2308_43_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(5-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_43();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_2308_43_end: ;
}
void Frames::event_func_10673()
{
    // event 2309_43
    {
        if (!(group_main_engine_1)) goto event_2309_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (560))) goto event_2309_43_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) >= (5))) goto event_2309_43_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(4-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_43();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_2309_43_end: ;
}
void Frames::event_func_10674()
{
    // event 2312_43
    {
        if (!(group_main_engine_1)) goto event_2312_43_end;
        if (!((levelrain_2506_instances.size()) < (get_min((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-200+global_values->get(3))/math_helper/120, 50)))) goto event_2312_43_end;
        levelrain_2506_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelrain_2506(0, 0), 5);
            levelrain_2506_instances.add_back();
        }
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+(levelrain_2506_instances.size()*31)%math_helper%global_values->get(16));
            ((Active*)*it)->alterables->values.set(0, frame_top()-randrange(200));
            ((Active*)*it)->alterables->values.set(1, 12+randrange(80)*0.1);
        }
    }
    event_2312_43_end: ;
}
void Frames::event_func_10675()
{
    // event 2313_43
    {
        if (!(group_main_engine_1)) goto event_2313_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-10))) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2313_43_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)+20);
        }
    }
    event_2313_43_end: ;
}
void Frames::event_func_10676()
{
    // event 2314_43
    {
        if (!(group_main_engine_1)) goto event_2314_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+10))) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2314_43_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-global_values->get(16)-20);
        }
    }
    event_2314_43_end: ;
}
void Frames::event_func_10677()
{
    // event 2315_43
    {
        if (!(group_main_engine_1)) goto event_2315_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_rgb(1-1, make_color_int(255-get_min(get_max(0, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-400+global_values->get(3))/math_helper/25), 255), 255-get_min(get_max(0, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-400+global_values->get(3))/math_helper/25), 255), 255));
        media.set_channel_volume(30-1, levelrain_2506_instances.size()*2);
    }
    event_2315_43_end: ;
}
void Frames::event_func_10678()
{
    // event 2316_43
    {
        if (!(group_main_engine_1)) goto event_2316_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_top()+global_values->get(17)+40))) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2316_43_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+randrange(global_values->get(16)));
            ((Active*)*it)->alterables->values.set(0, frame_top()-randrange(50));
            ((Active*)*it)->alterables->values.set(1, 12+randrange(80)*0.1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2316_43_end: ;
}
void Frames::event_func_10679()
{
    // event 2317_43
    {
        if (!(group_main_engine_1)) goto event_2317_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2317_43_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2317_43_end: ;
}
void Frames::event_func_10680()
{
    // event 2318_43
    {
        if (!(group_main_engine_1)) goto event_2318_43_end;
        levelrain_2506_instances.clear_selection();
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelrain_2506_instances.has_selection()) goto event_2318_43_end;
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        }
        FrameObject * single_instance_2318_43_0; single_instance_2318_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelrain_2506_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2318_43_0 == NULL)
                    single_instance_2318_43_0 = new_obj;
            }
        }
        for (ObjectIterator it(levelrain_2506_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2318_43_end: ;
}
void Frames::event_func_10681()
{
    // event 2319_43
    {
        if (!(group_main_engine_1)) goto event_2319_43_end;
        if (!((levelrain_2506_instances.size()) > (40))) goto event_2319_43_end;
        ((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.add(2, 1);
    }
    event_2319_43_end: ;
}
void Frames::event_func_10682()
{
    // event 2320_43
    {
        if (!(group_main_engine_1)) goto event_2320_43_end;
        if (!((((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.get(2)) == (10))) goto event_2320_43_end;
        ((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.add(2, 1);
        media.play_id(SOUND_THUNDER_294, -1, 1);
        ((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.set(1, 100);
        ((Active*)get_instance(levellightningbolt_2512_instances))->set_y(frame_top()-randrange(100));
        ((Active*)get_instance(levellightningbolt_2512_instances))->set_x(frame_left()+50+randrange(global_values->get(16)-100));
        ((Active*)get_instance(levellightningbolt_2512_instances))->set_direction(pick_random(2, 0, 16));
        ((Active*)get_instance(levellightningbolt_2512_instances))->set_visible(true);
    }
    event_2320_43_end: ;
}
void Frames::event_func_10683()
{
    // event 2321_43
    {
        if (!(group_main_engine_1)) goto event_2321_43_end;
        if (!((((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.get(2)) > (14))) goto event_2321_43_end;
        ((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.set(2, -100-randrange(300));
        ((Active*)get_instance(levellightningbolt_2512_instances))->set_visible(false);
    }
    event_2321_43_end: ;
}
void Frames::event_func_10684()
{
    // event 2322_43
    {
        if (!(group_main_engine_1)) goto event_2322_43_end;
        if (!((((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.get(1)) > (0))) goto event_2322_43_end;
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(128-((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.get(1));
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(true);
        ((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.sub(1, 10);
    }
    event_2322_43_end: ;
}
void Frames::event_func_10685()
{
    // event 2323_43
    {
        if (!(group_main_engine_1)) goto event_2323_43_end;
        if (!((((Active*)get_instance(leveldarksky_2069_instances))->alterables->values.get(1)) <= (0))) goto event_2323_43_end;
        if (!(((Active*)get_instance(leveldarksky_2069_instances))->flags & VISIBLE)) goto event_2323_43_end;
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(false);
    }
    event_2323_43_end: ;
}
void Frames::event_func_10686()
{
    // event 2326_43
    {
        if (!(group_main_engine_1)) goto event_2326_43_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2326_43_end;
        if (once_condition_2326_43) goto event_2326_43_end;
        once_condition_2326_43 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 48)) == (0))) goto event_2326_43_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (480000))) goto event_2326_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 48);
    }
    event_2326_43_end: ;
}
void Frames::event_func_10687()
{
    // event 2327_43
    {
        if (!(group_main_engine_1)) goto event_2327_43_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2327_43_end;
        if (once_condition_2327_43) goto event_2327_43_end;
        once_condition_2327_43 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 28)) == (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 51)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 52)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 53)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 54)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 55)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 56)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 57)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 58)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 59)) > (0))) goto event_2327_43_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 60)) > (0))) goto event_2327_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 28);
    }
    event_2327_43_end: ;
}
void Frames::event_func_10688()
{
    // event 2328_43
    {
        if (!(group_main_engine_1)) goto event_2328_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2328_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2328_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_2328_43_end: ;
}
void Frames::event_func_10689()
{
    // event 2329_43
    {
        if (!(group_main_engine_1)) goto event_2329_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2329_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2329_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_2329_43_end: ;
}
