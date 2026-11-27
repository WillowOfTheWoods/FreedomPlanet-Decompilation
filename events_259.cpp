#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20886()
{
    // event 262_85
    {
        if (!(group_main_engine_1)) goto event_262_85_end;
        ((Counter*)get_instance(guilives_454_instances))->set(manager.lives);
        set_display_center(-1, 120+randrange(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(9)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(9, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(9)-0.2, 0));
    }
    event_262_85_end: ;
}
void Frames::event_func_20887()
{
    // event 264_85
    {
        if (!(group_main_engine_1)) goto event_264_85_end;
        if (!((global_values->get(1)) == (0))) goto event_264_85_end;
        ((Active*)get_instance(guienergy_124_instances))->set_x_scale(get_max((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(4)-20)*0.0077, 0));
    }
    event_264_85_end: ;
}
void Frames::event_func_20888()
{
    // event 265_85
    {
        if (!(group_main_engine_1)) goto event_265_85_end;
        if (!((global_values->get(1)) != (0))) goto event_265_85_end;
        ((Active*)get_instance(guienergy_124_instances))->set_x_scale(get_max(0, get_min(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)*0.01, 1)));
    }
    event_265_85_end: ;
}
void Frames::event_func_20889()
{
    // event 267_85
    {
        if (!(group_main_engine_1)) goto event_267_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) <= (0))) goto event_267_85_end;
        if (not_always_267_85 > loop_count) {
            not_always_267_85 = loop_count + 2;
            goto event_267_85_end;
        }
        not_always_267_85 = loop_count + 2;
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_animation(7);
    }
    event_267_85_end: ;
}
void Frames::event_func_20890()
{
    // event 268_85
    {
        if (!(group_main_engine_1 && group_main_engine_distance_1)) goto event_268_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) > (0))) goto event_268_85_end;
        if (!((levelcardfade_461_instances.size()) == (0))) goto event_268_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_268_85_end;
        ((Counter*)get_instance(guidistance_4172_instances))->subtract(1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(10, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*0.2, 0));
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*-0.2, 0));
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*-0.2, 0));
        }
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*-0.2, 0));
        }
    }
    event_268_85_end: ;
}
void Frames::event_func_20891()
{
    // event 269_85
    {
        if (!(group_main_engine_1 && group_main_engine_distance_1)) goto event_269_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(10)) >= (1))) goto event_269_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.sub(10, 1);
        ((Counter*)get_instance(guidistance_4172_instances))->subtract(1);
    }
    event_269_85_end: ;
}
void Frames::event_func_20892()
{
    // event 270_85
    {
        if (!(group_main_engine_1)) goto event_270_85_end;
        if (!(manager.player_died)) goto event_270_85_end;
        if (not_always_270_85 > loop_count) {
            not_always_270_85 = loop_count + 2;
            goto event_270_85_end;
        }
        not_always_270_85 = loop_count + 2;
        ((Active*)get_instance(levelcardgameover_462_instances))->get_movement()->start();
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(8);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.set(4, 0);
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
        ((Active*)get_instance(levelcardgameover_462_instances))->set_visible(true);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        media.play(str_data_bgm_m_gameover_ogg_53, 32-1, 0);
        ((Active*)get_instance(levelcardgameover_462_instances))->move_front();
    }
    event_270_85_end: ;
}
void Frames::event_func_20893()
{
    // event 271_85
    {
        if (!(group_main_engine_1)) goto event_271_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(8))) goto event_271_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.add(5, 1);
    }
    event_271_85_end: ;
}
void Frames::event_func_20894()
{
    // event 272_85
    {
        if (!(group_main_engine_1)) goto event_272_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(5)) < (200))) goto event_272_85_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) > (64))) goto event_272_85_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-1);
        }
    }
    event_272_85_end: ;
}
void Frames::event_func_20895()
{
    // event 273_85
    {
        if (!(group_main_engine_1)) goto event_273_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(5)) >= (200))) goto event_273_85_end;
        {
            ((Active*)get_instance(levelcardgameover_462_instances))->blend_color.set_semi_transparency(((Active*)get_instance(levelcardgameover_462_instances))->blend_color.get_semi_transparency()+2);
        }
    }
    event_273_85_end: ;
}
void Frames::event_func_20896()
{
    // event 274_85
    {
        if (!(group_main_engine_1)) goto event_274_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(5)) >= (200))) goto event_274_85_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_274_85_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_274_85_end: ;
}
void Frames::event_func_20897()
{
    // event 275_85
    {
        if (!(group_main_engine_1)) goto event_275_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(5)) >= (280))) goto event_275_85_end;
        next_frame = 75 + 0;    
    
    }
    event_275_85_end: ;
}
void Frames::event_func_20898()
{
    // event 279_85
    {
        if (!(group_pause_1)) goto event_279_85_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_279_85_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_279_85_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(playerdragonhead_3984_instances))->stop_animation();
        ((Active*)get_instance(playerdragonrider_3985_instances))->stop_animation();
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemythundercarrierarm_4154_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierarm_4154_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosscancerforcelaser_4158_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcelaser_4158_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectstinyexplosion_3746_instances.clear_selection();
        for (ObjectIterator it(effectstinyexplosion_3746_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerzaotank_4014_instances))->stop_animation();
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_279_85_end: ;
}
void Frames::event_func_20899()
{
    // event 280_85
    bool or_result_280_85 = false;
    bool or_temp_result_280_85_0 = false;
    {
        if (!(group_pause_1)) goto or_event_280_85_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_280_85_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_280_85_0_end;
        or_result_280_85 = true;
        or_temp_result_280_85_0 = true;
    }
    or_event_280_85_0_end: ;
    // event 280_85
    bool or_temp_result_280_85_1 = false;
    {
        if (!(group_pause_1)) goto or_event_280_85_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_280_85_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_280_85_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_280_85_1_end;
        or_result_280_85 = true;
        or_temp_result_280_85_1 = true;
        or_event_280_85_1_end: ;
        if (!or_result_280_85) goto or_final_or_event_280_85_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        ((Active*)get_instance(playerdragonhead_3984_instances))->start_animation();
        ((Active*)get_instance(playerdragonrider_3985_instances))->start_animation();
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemythundercarrierarm_4154_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierarm_4154_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosscancerforcelaser_4158_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcelaser_4158_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectstinyexplosion_3746_instances.clear_selection();
        for (ObjectIterator it(effectstinyexplosion_3746_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerzaotank_4014_instances))->start_animation();
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_280_85_1_end: ;
}
void Frames::event_func_20900()
{
    // event 470_85
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_470_85_end;
        if (!(is_key_pressed_once(SDLK_3))) goto event_470_85_end;
        ((Counter*)get_instance(guirings_122_instances))->add(99);
    }
    event_470_85_end: ;
}
void Frames::handle_frame_86_events()
{
    test_collisions_85();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_20650();
    if (!group_main_engine_startup_1) goto group_main_engine_startup_1_end;
    event_func_20651();
    event_func_20652();
    group_main_engine_startup_1_end: ;
    if (!group_main_engine_player_player_ship_dragon_1) goto group_main_engine_player_player_ship_dragon_1_end;
    event_func_20653();
    event_func_20654();
    event_func_20655();
    event_func_20656();
    event_func_20657();
    event_func_20658();
    event_func_20659();
    event_func_20660();
    if (!group_main_engine_player_player_ship_dragon_dragon_movement_1) goto group_main_engine_player_player_ship_dragon_dragon_movement_1_end;
    event_func_20661();
    event_func_20662();
    event_func_20663();
    event_func_20664();
    event_func_20665();
    event_func_20666();
    event_func_20667();
    event_func_20668();
    event_func_20669();
    event_func_20670();
    event_func_20671();
    event_func_20672();
    event_func_20673();
    event_func_20674();
    event_func_20675();
    event_func_20676();
    event_func_20677();
    group_main_engine_player_player_ship_dragon_dragon_movement_1_end: ;
    event_func_20678();
    event_func_20679();
    event_func_20680();
    event_func_20681();
    event_func_20682();
    event_func_20683();
    event_func_20684();
    event_func_20685();
    event_func_20686();
    event_func_20687();
    event_func_20688();
    event_func_20689();
    event_func_20690();
    event_func_20691();
    event_func_20692();
    group_main_engine_player_player_ship_dragon_1_end: ;
    if (!group_main_engine_player_player_ship_tank_1) goto group_main_engine_player_player_ship_tank_1_end;
    event_func_20693();
    if (!group_main_engine_player_player_ship_tank_zao_s_explanation_1) goto group_main_engine_player_player_ship_tank_zao_s_explanation_1_end;
    event_func_20694();
    event_func_20695();
    event_func_20696();
    group_main_engine_player_player_ship_tank_zao_s_explanation_1_end: ;
    event_func_20697();
    event_func_20698();
    event_func_20699();
    event_func_20700();
    event_func_20701();
    event_func_20702();
    event_func_20703();
    event_func_20704();
    if (!group_main_engine_player_player_ship_tank_tank_movement_1) goto group_main_engine_player_player_ship_tank_tank_movement_1_end;
    event_func_20705();
    event_func_20706();
    event_func_20707();
    event_func_20708();
    event_func_20709();
    event_func_20710();
    group_main_engine_player_player_ship_tank_tank_movement_1_end: ;
    event_func_20711();
    event_func_20712();
    event_func_20713();
    event_func_20714();
    event_func_20715();
    event_func_20716();
    event_func_20717();
    event_func_20718();
    event_func_20719();
    event_func_20720();
    event_func_20721();
    event_func_20722();
    event_func_20723();
    event_func_20724();
    event_func_20725();
    event_func_20726();
    event_func_20727();
    group_main_engine_player_player_ship_tank_1_end: ;
    event_func_20728();
    event_func_20729();
    event_func_20730();
    event_func_20731();
    event_func_20732();
    event_func_20733();
    event_func_20734();
    event_func_20735();
    event_func_20736();
    event_func_20737();
    event_func_20737();
    event_func_20737();
    event_func_20737();
    event_func_20738();
    event_func_20739();
    event_func_20740();
    event_func_20741();
    event_func_20742();
    event_func_20743();
    event_func_20744();
    event_func_20745();
    event_func_20746();
    event_func_20747();
    event_func_20748();
    event_func_20749();
    event_func_20750();
    event_func_20751();
    event_func_20752();
    event_func_20753();
    if (!group_main_engine_enemies_enemy_spawning_1) goto group_main_engine_enemies_enemy_spawning_1_end;
    event_func_20754();
    event_func_20755();
    event_func_20756();
    event_func_20757();
    event_func_20758();
    event_func_20759();
    event_func_20760();
    event_func_20761();
    event_func_20762();
    event_func_20763();
    event_func_20764();
    event_func_20765();
    event_func_20766();
    group_main_engine_enemies_enemy_spawning_1_end: ;
    event_func_20767();
    event_func_20768();
    event_func_20769();
    event_func_20770();
    event_func_20771();
    event_func_20772();
    event_func_20773();
    event_func_20774();
    event_func_20775();
    event_func_20776();
    event_func_20777();
    event_func_20778();
    event_func_20779();
    event_func_20780();
    event_func_20781();
    event_func_20782();
    event_func_20783();
    event_func_20784();
    event_func_20785();
    event_func_20786();
    event_func_20787();
    event_func_20788();
    event_func_20789();
    event_func_20790();
    event_func_13411();
    event_func_20791();
    event_func_13413();
    event_func_20792();
    event_func_20793();
    event_func_20794();
    event_func_20795();
    event_func_20796();
    event_func_20797();
    event_func_20798();
    event_func_20799();
    event_func_20800();
    event_func_20801();
    event_func_20802();
    event_func_20803();
    event_func_20804();
    event_func_20805();
    event_func_20806();
    event_func_20807();
    event_func_20808();
    event_func_20809();
    event_func_20810();
    event_func_20811();
    event_func_20812();
    event_func_20813();
    event_func_20814();
    event_func_20815();
    event_func_20816();
    event_func_20817();
    if (!group_main_engine_bosses_boss_syntax_1) goto group_main_engine_bosses_boss_syntax_1_end;
    if (!group_main_engine_bosses_boss_syntax_boss_intro_1) goto group_main_engine_bosses_boss_syntax_boss_intro_1_end;
    event_func_20818();
    event_func_20819();
    event_func_20820();
    event_func_20821();
    event_func_20822();
    event_func_20823();
    event_func_20824();
    event_func_20825();
    event_func_20826();
    event_func_20827();
    event_func_20828();
    event_func_20829();
    event_func_20830();
    event_func_20831();
    event_func_20832();
    group_main_engine_bosses_boss_syntax_boss_intro_1_end: ;
    if (!group_main_engine_bosses_boss_syntax_boss_main_1) goto group_main_engine_bosses_boss_syntax_boss_main_1_end;
    event_func_20833();
    event_func_20834();
    event_func_20835();
    event_func_20836();
    event_func_20837();
    event_func_20838();
    event_func_20839();
    event_func_20840();
    event_func_20841();
    event_func_20842();
    event_func_20843();
    event_func_20844();
    event_func_20845();
    event_func_20846();
    event_func_20847();
    event_func_20848();
    event_func_20849();
    event_func_20850();
    event_func_20851();
    event_func_20852();
    event_func_20853();
    event_func_20854();
    event_func_20855();
    event_func_20856();
    event_func_20857();
    event_func_20858();
    event_func_20859();
    event_func_20860();
    event_func_20861();
    event_func_20862();
    event_func_20863();
    event_func_20864();
    event_func_20865();
    event_func_20866();
    event_func_20867();
    event_func_20868();
    event_func_20869();
    event_func_20870();
    event_func_20871();
    event_func_20872();
    event_func_20873();
    event_func_20874();
    event_func_20875();
    event_func_20876();
    event_func_20877();
    event_func_20878();
    event_func_20879();
    event_func_20880();
    event_func_20881();
    event_func_20882();
    event_func_20883();
    event_func_20884();
    event_func_20885();
    group_main_engine_bosses_boss_syntax_boss_main_1_end: ;
    group_main_engine_bosses_boss_syntax_1_end: ;
    event_func_20886();
    event_func_2608();
    event_func_20887();
    event_func_20888();
    event_func_2617();
    event_func_20889();
    if (!group_main_engine_distance_1) goto group_main_engine_distance_1_end;
    event_func_20890();
    event_func_20891();
    group_main_engine_distance_1_end: ;
    event_func_20893();
    event_func_20894();
    event_func_20895();
    event_func_20896();
    event_func_20897();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_20898();
    event_func_20899();
    event_func_2644();
    event_func_2645();
    event_func_2646();
    event_func_2647();
    event_func_2648();
    event_func_2649();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_648();
    event_func_20900();
    event_func_225();
    event_func_652();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_20892();
}
void Frames::handle_frame_86_pre_events()
{
}
void Frames::event_func_20901()
{
    // event 2_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_2_85_end;
        playerdragontail_3983_instances.clear_selection();
        spread_value(playerdragontail_3983_instances, 0, 1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, ((Active*)get_instance(playerdragonhead_3984_instances))->get_x());
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, ((Active*)get_instance(playerdragonhead_3984_instances))->get_y());
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(42);
        }
        global_values->set(3, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        media.lock(32-1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 41);
    }
    event_2_85_end: ;
}
void Frames::event_func_20902()
{
    // event 3_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_3_85_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_3_85_end: ;
}
void Frames::event_func_20903()
{
    // event 4_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_4_85_end;
        if (!((global_values->get(4)) < (2))) goto event_4_85_end;
        media.play(str_data_bgm_m_schmup_ogg_52, 32-1, 0);
    }
    event_4_85_end: ;
}
void Frames::event_func_20904()
{
    // event 5_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_5_85_end;
        if (!((global_values->get(4)) >= (2))) goto event_5_85_end;
        ((Counter*)get_instance(guidistance_4172_instances))->set(1);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(5, 0);
            group_main_engine_enemies_enemy_spawning_1 = false;
    
        ((Counter*)get_instance(guidistance_4172_instances))->set_visible(false);
        ((Active*)get_instance(guimeters_4173_instances))->set_visible(false);
        media.play(str_data_bgm_m_midboss_ogg_50, 32-1, 0);
    }
    event_5_85_end: ;
}
void Frames::event_func_20905()
{
    // event 9_85
    {
        if (!(group_main_engine_1)) goto event_9_85_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.6);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, -1);
    }
    event_9_85_end: ;
}
void Frames::event_func_20906()
{
    // event 11_85
    {
        if (!(group_main_engine_1)) goto event_11_85_end;
        if (!((global_values->get(1)) != (0))) goto event_11_85_end;
            group_main_engine_player_player_ship_dragon_1 = false;
    
        if (!group_main_engine_player_player_ship_tank_1) {
            group_main_engine_player_player_ship_tank_1 = true;
        }
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_visible(false);
        playerdragontail_3983_instances.clear_selection();
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(playerzaotank_4014_instances))->set_visible(true);
        ((Active*)get_instance(playerzaotank2_4013_instances))->set_visible(true);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(0, ((Active*)get_instance(playerzaotank_4014_instances))->get_x());
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(1, ((Active*)get_instance(playerzaotank_4014_instances))->get_y());
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(2, ((Active*)get_instance(playerzaotank_4014_instances))->get_y());
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(3, 0);
        subtitletext_3433_instances.clear_selection();
        for (ObjectIterator it(subtitletext_3433_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->load(str_data_font_bmp_7);
        }
    }
    event_11_85_end: ;
}
void Frames::event_func_20907()
{
    // event 186_85
    {
        if (!(group_main_engine_1)) goto event_186_85_end;
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(3, ((Active*)get_instance(bosscancerforcehead_4170_instances))->get_x());
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.set(4, ((Active*)get_instance(bosscancerforcehead_4170_instances))->get_y());
    }
    event_186_85_end: ;
}
void Frames::on_frame_86_start_events()
{
    event_func_20901();
    event_func_20902();
    event_func_20903();
    event_func_20904();
    event_func_3267();
    event_func_20905();
    event_func_3269();
    event_func_20906();
    event_func_20907();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_86_init()
{
    index = 85;
    width = 426;
    height = 260;
    virtual_width = 426;
    virtual_height = 260;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(4);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, NULL};
    qualifier_0.set(4, &qualifier_0_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&enemyorbshot_3293_instances, &enemythundercarrierbolt_3294_instances, &bosscancerforcelaser_4158_instances, NULL};
    qualifier_17.set(3, &qualifier_17_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyorb_4152_instances, &enemythundercarrier_4153_instances, &enemyufo_4156_instances, &enemyorb2_4162_instances, &syntax_4163_instances, &bosscancerforcehead_4170_instances, NULL};
    qualifier_20.set(6, &qualifier_20_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&effectsexplosion06_312_instances, &guiicon_452_instances, &effectstinyexplosion_3746_instances, NULL};
    qualifier_4.set(3, &qualifier_4_instances[0]);
    add_background_object(create_levelparallaxpiece0_3197(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_3199(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 184), 0);
    add_object(create_windowcontrol_27(-200, -72), 0);
    add_object(create_playerholodragonlaser_4160(-200, 204), 1);
    add_object(create_playerdragontail_3983(68, 116), 1);
    add_object(create_playerdragontail_3983(36, 116), 1);
    add_object(create_playerdragontail_3983(4, 116), 1);
    add_object(create_playerdragontail_3983(-28, 116), 1);
    add_object(create_playerdragontail_3983(-60, 116), 1);
    add_object(create_playerdragontail_3983(-92, 116), 1);
    add_object(create_playerdragontail_3983(-124, 116), 1);
    add_object(create_playerdragontail_3983(-156, 116), 1);
    add_object(create_playerdragontail_3983(-188, 116), 1);
    add_object(create_playerdragontail_3983(-220, 116), 1);
    add_object(create_playerdragonhead_3984(91, 113), 1);
    add_object(create_playerdragonrider_3985(79, 91), 1);
    add_object(create_dragontailpath_3995(-262, 162), 1);
    add_object(create_syntax_4163(824, 136), 1);
    add_object(create_bosscancerforcehandtop_4164(356, -232), 1);
    add_object(create_bosscancerforcehandbottom_4165(356, -120), 1);
    add_object(create_bosscancerforceclawtop1_4166(362, -232), 1);
    add_object(create_bosscancerforceclawbottom1_4167(362, -120), 1);
    add_object(create_bosscancerforceclawtop2_4168(362, -233), 1);
    add_object(create_bosscancerforceclawbottom2_4169(362, -121), 1);
    add_object(create_bosscancerforcehead_4170(352, -176), 1);
    add_object(create_playerairplane_4171(-208, 284), 1);
    add_object(create_playerreflect_447(-200, 320), 1);
    add_object(create_playerzaotank2_4013(51, 198), 1);
    add_object(create_playerzaotank_4014(64, 204), 1);
    add_object(create_schmupfloor_4016(0, 224), 1);
    add_object(create_schmupfloor_4016(64, 224), 1);
    add_object(create_schmupfloor_4016(128, 224), 1);
    add_object(create_schmupfloor_4016(192, 224), 1);
    add_object(create_schmupfloor_4016(256, 224), 1);
    add_object(create_schmupfloor_4016(320, 224), 1);
    add_object(create_schmupfloor_4016(384, 224), 1);
    add_object(create_schmupfloor_4016(448, 224), 1);
    add_object(create_effectflareburst_1788(-304, 56), 1);
    add_background_object(create_separatormasterobjects2_12(-168, -136), 2);
    add_object(create_playerinput_19(-152, -112), 2);
    add_object(create_masterinput_20(-128, -112), 2);
    add_object(create_inputsp1_21(-104, -112), 2);
    add_object(create_globalinputdata_22(-80, -112), 2);
    add_object(create_guiscoretimerings_451(8, 8), 2);
    add_object(create_guienergy_124(16, 10), 2);
    add_object(create_guirings_122(8, 19), 2);
    add_object(create_guiicon_452(135, 12), 2);
    add_object(create_guilives_454(164, 19), 2);
    add_object(create_guicrystal_121(206, 19), 2);
    add_object(create_guidistance_4172(408, 19), 2);
    add_object(create_guimeters_4173(349, 13), 2);
    add_object(create_guipause_453(0, 101), 2);
    add_object(create_crystal_456(-45, 141), 2);
    add_object(create_masterlevel_37(-192, -40), 2);
    add_object(create_subtitletext_3433(53, 24), 2);
    add_object(create_subtitledata_4174(-192, 400), 2);
    add_object(create_mapdata_30(-120, -56), 2);
    add_object(create_mapdata2_32(-120, -48), 2);
    add_object(create_levelcardfade_461(0, 0), 3);
    add_object(create_levelcardfade2_24(0, 0), 3);
    add_object(create_levelcardgameover_462(0, 256), 3);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_xplode_running = false;
    loop_xplode_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_85, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_85, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_85, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_85, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_85, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_85, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_85, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_85, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_85, &loop_sound_explode4_running, &loop_sound_explode4_index);
        loops_initialized = true;
    }
    not_always_195_85 = loop_count;
    once_condition_126_85 = false;
    once_condition_55_85 = false;
    once_condition_138_0 = false;
    group_sound_events_torque_1 = false;
    once_condition_133_85 = false;
    group_main_engine_enemies_enemy_spawning_1 = true;
    not_always_121_0 = loop_count;
    not_always_140_0 = loop_count;
    once_condition_130_85 = false;
    group_debug_mode_debugging_1 = false;
    not_always_86_85 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_267_85 = loop_count;
    not_always_95_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    once_condition_97_85 = false;
    group_main_engine_distance_1 = true;
    group_sound_events_milla_1 = false;
    group_main_engine_player_player_ship_tank_1 = false;
    once_condition_53_85 = false;
    group_sound_events_carol_1 = false;
    once_condition_131_85 = false;
    group_sound_events_lilac_1 = false;
    once_condition_125_85 = false;
    group_main_engine_bosses_boss_syntax_boss_intro_1 = true;
    group_main_engine_1 = true;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_player_player_ship_dragon_1 = true;
    not_always_87_85 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    not_always_101_0 = loop_count;
    group_debug_mode_1 = false;
    not_always_270_85 = loop_count;
    not_always_130_0 = loop_count;
    not_always_103_0 = loop_count;
    not_always_194_85 = loop_count;
    group_main_engine_startup_1 = true;
    group_main_engine_player_player_ship_tank_zao_s_explanation_1 = false;
    group_main_engine_player_player_ship_dragon_dragon_movement_1 = true;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    once_condition_187_85 = false;
    once_condition_188_85 = false;
    not_always_64_0 = loop_count;
    not_always_1528_13 = loop_count;
    not_always_106_85 = loop_count;
    once_condition_54_85 = false;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    once_condition_124_85 = false;
    group_main_engine_bosses_boss_syntax_boss_main_1 = false;
    group_pause_1 = true;
    not_always_66_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    group_main_engine_bosses_boss_syntax_1 = false;
    group_main_engine_player_player_ship_tank_tank_movement_1 = true;
    once_condition_127_85 = false;
    not_always_88_85 = loop_count;
}
void Frames::event_func_20908()
{
    // event 58_86
    {
        // group: Number placement (Stage)
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/60000) > (9))) goto event_58_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(1, number_to_string(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/60000));
    }
    event_58_86_end: ;
}
void Frames::event_func_20909()
{
    // event 59_86
    {
        // group: Number placement (Stage)
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/60000) <= (9))) goto event_59_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(1, str_0_348+number_to_string(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/60000));
    }
    event_59_86_end: ;
}
void Frames::event_func_20910()
{
    // event 60_86
    {
        // group: Number placement (Stage)
        if (!(((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/1000)%math_helper%60) > (9))) goto event_60_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(2, number_to_string((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/1000)%math_helper%60));
    }
    event_60_86_end: ;
}
void Frames::event_func_20911()
{
    // event 61_86
    {
        // group: Number placement (Stage)
        if (!(((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/1000)%math_helper%60) <= (9))) goto event_61_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(2, str_0_348+number_to_string((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/1000)%math_helper%60));
    }
    event_61_86_end: ;
}
void Frames::event_func_20912()
{
    // event 62_86
    {
        // group: Number placement (Stage)
        if (!(((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/10)%math_helper%100) > (9))) goto event_62_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(3, number_to_string((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/10)%math_helper%100));
    }
    event_62_86_end: ;
}
void Frames::event_func_20913()
{
    // event 63_86
    {
        // group: Number placement (Stage)
        if (!(((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/10)%math_helper%100) <= (9))) goto event_63_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(3, str_0_348+number_to_string((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)/math_helper/10)%math_helper%100));
    }
    event_63_86_end: ;
}
void Frames::event_func_20914()
{
    // event 64_86
    {
        // group: Load statistics
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+1)) > (0))) goto event_64_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.set(0, ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.get(0)+((Text*)get_instance(creditsstagenames_4190_instances))->get_paragraph(loop_stages_index)+newline_character+str_time_349+((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.get(1)+str__350+((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.get(2)+str__350+((TextBlitter*)get_instance(statistics_4188_instances))->alterables->strings.get(3)+newline_character+str_crystals_351+number_to_string(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+2))+newline_character+str_deaths_352+number_to_string(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, (loop_stages_index+1)*5+3))+newline_character+newline_character);
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->values.add(0, 1);
    }
    event_64_86_end: ;
}
void Frames::loop_stages_86()
{
    event_func_20908();
    event_func_20909();
    event_func_20910();
    event_func_20911();
    event_func_20912();
    event_func_20913();
    event_func_20914();
}
void Frames::test_collisions_86()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_20915()
{
    // event 2_86
    {
        // group: Scrolling effects
        global_values->add(3, 1);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->get_x(), frame_top()+((SystemBox*)*it)->alterables->values.get(1));
            ((SystemBox*)*it)->alterables->values.add(1, ((SystemBox*)*it)->alterables->values.get(0));
        }
        set_display_center(-1, ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(0));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(1-1, -850+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(0)*0.2);
    }
    event_2_86_end: ;
}
void Frames::event_func_20916()
{
    // event 3_86
    {
        // group: Scrolling effects
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(1)) > (240))) { it.deselect(); continue; }
        }
        if (!qualifier_0.has_selection()) goto event_3_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(0)) < (3500))) goto event_3_86_end;
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(1, ((SystemBox*)*it)->height*-1);
            ((SystemBox*)*it)->set_global_position((((SystemBox*)*it)->width*-0.5)+randrange(426+((SystemBox*)*it)->width*0.5), ((SystemBox*)*it)->get_y());
        }
    }
    event_3_86_end: ;
}
void Frames::event_func_20917()
{
    // event 4_86
    {
        // group: Scrolling effects
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_4_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(0, 1);
        titlestar_50_instances.clear_selection();
        for (ObjectIterator it(titlestar_50_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%21);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_4_86_end: ;
}
void Frames::event_func_20918()
{
    // event 5_86
    {
        // group: Scrolling effects
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_5_86_end;
        star_63_instances.clear_selection();
        for (ObjectIterator it(star_63_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-8)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!star_63_instances.has_selection()) goto event_5_86_end;
        FrameObject * single_instance_5_86_0; single_instance_5_86_0 = pick_random(star_63_instances);
        if (single_instance_5_86_0 == NULL) goto event_5_86_end;
        ((Active*)((Active*)single_instance_5_86_0))->force_animation(7);
    }
    event_5_86_end: ;
}
void Frames::event_func_20919()
{
    // event 6_86
    {
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) > (0))) goto event_6_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(0, 10);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(1, 10);
        }
    }
    event_6_86_end: ;
}
void Frames::event_func_20920()
{
    // event 7_86
    {
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(0)) > (6000))) goto event_7_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(0, 6000);
    }
    event_7_86_end: ;
}
void Frames::event_func_20921()
{
    // event 10_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcking_4099_instances))->get_y()) < (frame_bottom()-50))) goto event_10_86_end;
        if (once_condition_10_86) goto event_10_86_end;
        once_condition_10_86 = true;
        ((Active*)get_instance(npcking_4099_instances))->start_animation();
    }
    event_10_86_end: ;
}
void Frames::event_func_20922()
{
    // event 11_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcking_4099_instances))->get_y()) < (frame_bottom()-40))) goto event_11_86_end;
        if (once_condition_11_86) goto event_11_86_end;
        once_condition_11_86 = true;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(1);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_chuckle_ogg_240, 19-1);
    }
    event_11_86_end: ;
}
void Frames::event_func_20923()
{
    // event 12_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcdail_4017_instances))->get_y()) < (frame_bottom()-60))) goto event_12_86_end;
        if (once_condition_12_86) goto event_12_86_end;
        once_condition_12_86 = true;
        ((Active*)get_instance(npcdail_4017_instances))->force_animation(8);
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_01_02_ogg_318, 19-1);
    }
    event_12_86_end: ;
}
void Frames::event_func_20924()
{
    // event 13_86
    {
        // group: Characters
        if (!((((Active*)get_instance(themagister_2115_instances))->get_y()) < (frame_bottom()-70))) goto event_13_86_end;
        if (once_condition_13_86) goto event_13_86_end;
        once_condition_13_86 = true;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(4);
    }
    event_13_86_end: ;
}
void Frames::event_func_20925()
{
    // event 14_86
    {
        // group: Characters
        if (!((((Active*)get_instance(themagister_2115_instances))->get_y()) < (frame_bottom()-100))) goto event_14_86_end;
        if (once_condition_14_86) goto event_14_86_end;
        once_condition_14_86 = true;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(5);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
    }
    event_14_86_end: ;
}
void Frames::event_func_20926()
{
    // event 15_86
    {
        // group: Characters
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_y()) < (frame_bottom()-100))) goto event_15_86_end;
        if (once_condition_15_86) goto event_15_86_end;
        once_condition_15_86 = true;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(37);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
    }
    event_15_86_end: ;
}
void Frames::event_func_20927()
{
    // event 16_86
    {
        // group: Characters
        if (!((((Active*)get_instance(playerskincarol_445_instances))->get_y()) < (frame_bottom()-60))) goto event_16_86_end;
        if (once_condition_16_86) goto event_16_86_end;
        once_condition_16_86 = true;
        ((Active*)get_instance(playerskincarol_445_instances))->alterables->flags.enable(1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_45_01_ogg_353, 19-1);
        ((Active*)get_instance(playerskincarol_445_instances))->force_animation(40);
        ((Active*)get_instance(playerskincaroltail_444_instances))->force_animation(40);
        ((Active*)get_instance(playerskincarol_445_instances))->force_frame(81);
    }
    event_16_86_end: ;
}
void Frames::event_func_20928()
{
    // event 17_86
    {
        // group: Characters
        if (!(((Active*)get_instance(playerskincarol_445_instances))->alterables->flags.is_on(1))) goto event_17_86_end;
        if (!((((Active*)get_instance(playerskincarol_445_instances))->alterables->values.get(14)) < (120))) goto event_17_86_end;
        ((Active*)get_instance(playerskincarol_445_instances))->alterables->values.add(14, 1);
    }
    event_17_86_end: ;
}
void Frames::event_func_20929()
{
    // event 18_86
    {
        // group: Characters
        if (!(((Active*)get_instance(playerskincarol_445_instances))->alterables->flags.is_on(1))) goto event_18_86_end;
        if (!((((Active*)get_instance(playerskincarol_445_instances))->alterables->values.get(14)) < (120))) goto event_18_86_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_18_86_end;
        ((Active*)get_instance(playerskincarol_445_instances))->alterables->values.set(15, (((Active*)get_instance(playerskincarol_445_instances))->alterables->values.get(15)+1+randrange(2))%math_helper%3);
        ((Active*)get_instance(playerskincarol_445_instances))->force_frame(81+((Active*)get_instance(playerskincarol_445_instances))->alterables->values.get(15));
    }
    event_18_86_end: ;
}
void Frames::event_func_20930()
{
    // event 19_86
    {
        // group: Characters
        if (!(((Active*)get_instance(playerskincarol_445_instances))->alterables->flags.is_on(1))) goto event_19_86_end;
        if (!((((Active*)get_instance(playerskincarol_445_instances))->alterables->values.get(14)) == (120))) goto event_19_86_end;
        ((Active*)get_instance(playerskincarol_445_instances))->force_animation(37);
        ((Active*)get_instance(playerskincarol_445_instances))->restore_speed();
        ((Active*)get_instance(playerskincaroltail_444_instances))->force_animation(37);
        ((Active*)get_instance(playerskincaroltail_444_instances))->restore_speed();
        ((Active*)get_instance(playerskincarol_445_instances))->restore_frame();
    }
    event_19_86_end: ;
}
void Frames::event_func_20931()
{
    // event 20_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) < (frame_bottom()-90))) goto event_20_86_end;
        if (once_condition_20_86) goto event_20_86_end;
        once_condition_20_86 = true;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->force_speed(25);
        media.play(str_data_voices_88+global_strings->get(11)+str_se_se_07_01_ogg_354, 20-1);
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
    }
    event_20_86_end: ;
}
void Frames::event_func_20932()
{
    // event 21_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_21_86_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
    }
    event_21_86_end: ;
}
void Frames::event_func_20933()
{
    // event 22_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_22_86_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (40))) goto event_22_86_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(21);
    }
    event_22_86_end: ;
}
void Frames::event_func_20934()
{
    // event 23_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_23_86_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
    }
    event_23_86_end: ;
}
void Frames::event_func_20935()
{
    // event 24_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_24_86_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) < (240))) goto event_24_86_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_24_86_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(21+randrange(3));
    }
    event_24_86_end: ;
}
void Frames::event_func_20936()
{
    // event 25_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_25_86_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (240))) goto event_25_86_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(21);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
    }
    event_25_86_end: ;
}
void Frames::event_func_20937()
{
    // event 26_86
    {
        // group: Characters
        if (!((((Active*)get_instance(playerskintorque_450_instances))->get_y()) < (frame_bottom()-110))) goto event_26_86_end;
        if (once_condition_26_86) goto event_26_86_end;
        once_condition_26_86 = true;
        ((Active*)get_instance(playerskintorque_450_instances))->force_animation(37);
    }
    event_26_86_end: ;
}
void Frames::event_func_20938()
{
    // event 27_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcgong_634_instances))->get_y()) < (frame_bottom()-100))) goto event_27_86_end;
        if (once_condition_27_86) goto event_27_86_end;
        once_condition_27_86 = true;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(18);
    }
    event_27_86_end: ;
}
void Frames::event_func_20939()
{
    // event 28_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_y()) < (frame_bottom()-100))) goto event_28_86_end;
        if (once_condition_28_86) goto event_28_86_end;
        once_condition_28_86 = true;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(13);
        ((Active*)get_instance(npcneera_2464_instances))->force_speed(14);
    }
    event_28_86_end: ;
}
void Frames::event_func_20940()
{
    // event 29_86
    {
        // group: Characters
        if (!((((Active*)get_instance(playerskinspade_419_instances))->get_y()) < (frame_bottom()-100))) goto event_29_86_end;
        if (once_condition_29_86) goto event_29_86_end;
        once_condition_29_86 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_sp_spade_hmph_ogg_355, 19-1);
    }
    event_29_86_end: ;
}
void Frames::event_func_20941()
{
    // event 30_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcstofficer_3941_instances))->get_y()) < (frame_bottom()-80))) goto event_30_86_end;
        if (once_condition_30_86) goto event_30_86_end;
        once_condition_30_86 = true;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(5);
        ((Active*)get_instance(npcstofficer_3941_instances))->alterables->values.set(0, 30);
        media.play_id(SOUND_WANGH_LOUD_441, -1, 1);
    }
    event_30_86_end: ;
}
void Frames::event_func_20942()
{
    // event 31_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcstofficer_3941_instances))->alterables->values.get(0)) == (0))) goto event_31_86_end;
        if (not_always_31_86 > loop_count) {
            not_always_31_86 = loop_count + 2;
            goto event_31_86_end;
        }
        not_always_31_86 = loop_count + 2;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(0);
    }
    event_31_86_end: ;
}
void Frames::event_func_20943()
{
    // event 32_86
    {
        // group: Characters
        if (!((((Active*)get_instance(playerskinmilla_446_instances))->get_y()) < (frame_bottom()-100))) goto event_32_86_end;
        if (once_condition_32_86) goto event_32_86_end;
        once_condition_32_86 = true;
        ((Active*)get_instance(playerskinmilla_446_instances))->force_animation(37);
        ((Active*)get_instance(playerskinmillatail_381_instances))->force_animation(37);
    }
    event_32_86_end: ;
}
void Frames::event_func_20944()
{
    // event 33_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->get_y()) < (frame_bottom()-70))) goto event_33_86_end;
        if (once_condition_33_86) goto event_33_86_end;
        once_condition_33_86 = true;
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->force_animation(7);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_visible(true);
    }
    event_33_86_end: ;
}
void Frames::event_func_20945()
{
    // event 34_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (1))) goto event_34_86_end;
        if (((Active*)get_instance(npcsyntax_2519_instances))->test_animation(7)) goto event_34_86_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_sx_sx_08_02_ogg_356, 19-1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, -1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(4, 180);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(5, 180);
    }
    event_34_86_end: ;
}
void Frames::event_func_20946()
{
    // event 35_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (2))) goto event_35_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 10);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 10);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, 10);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, 10);
    }
    event_35_86_end: ;
}
void Frames::event_func_20947()
{
    // event 36_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (2))) goto event_36_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)) == (45))) goto event_36_86_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_sx_sx_08_01_ogg_357, 20-1);
    }
    event_36_86_end: ;
}
void Frames::event_func_20948()
{
    // event 37_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_y()) < (frame_bottom()-100))) goto event_37_86_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->get_y()) > (frame_bottom()-80))) goto event_37_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(4)) == (0))) goto event_37_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(5)) == (0))) goto event_37_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(6)) == (0))) goto event_37_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_37_86_end;
        if (once_condition_37_86) goto event_37_86_end;
        once_condition_37_86 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        media.play(str_data_voices_88+global_strings->get(11)+str_za_za_08_01_ogg_358, 20-1);
    }
    event_37_86_end: ;
}
void Frames::event_func_20949()
{
    // event 38_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npchologram1_3060_instances))->get_y()) < (frame_bottom()-80))) goto event_38_86_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->get_y()) > (frame_bottom()-240))) goto event_38_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(4)) == (0))) goto event_38_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(5)) == (0))) goto event_38_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(6)) == (0))) goto event_38_86_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_38_86_end;
        if (once_condition_38_86) goto event_38_86_end;
        once_condition_38_86 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_sc_sc_02_01_ogg_359, 20-1);
        ((Active*)get_instance(npchologram1_3060_instances))->alterables->values.set(0, 1);
    }
    event_38_86_end: ;
}
void Frames::event_func_20950()
{
    // event 39_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(0)) == (1))) goto event_39_86_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(1)) < (230))) goto event_39_86_end;
        ((Active*)get_instance(npchologram1_3060_instances))->alterables->values.add(1, 1);
    }
    event_39_86_end: ;
}
void Frames::event_func_20951()
{
    // event 40_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(0)) == (1))) goto event_40_86_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(1)) < (230))) goto event_40_86_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_40_86_end;
        ((Active*)get_instance(npchologram1_3060_instances))->alterables->values.set(2, (((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(2)+1+randrange(3))%math_helper%4);
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(4+(((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(2)));
    }
    event_40_86_end: ;
}
void Frames::event_func_20952()
{
    // event 41_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(0)) == (1))) goto event_41_86_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->alterables->values.get(1)) == (230))) goto event_41_86_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(4);
        ((Active*)get_instance(npchologram1_3060_instances))->alterables->values.add(1, 1);
    }
    event_41_86_end: ;
}
void Frames::event_func_20953()
{
    // event 42_86
    {
        // group: Characters
        if (!((((Active*)get_instance(npchologram1_3060_instances))->get_y()) < (frame_bottom()-240))) goto event_42_86_end;
        if (once_condition_42_86) goto event_42_86_end;
        once_condition_42_86 = true;
        media.stop_channel(19-1);
        media.stop_channel(20-1);
    }
    event_42_86_end: ;
}
void Frames::event_func_20954()
{
    // event 43_86
    {
        // group: Characters
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            if (parent == NULL) goto pos_end_43_86_0;
            ((Active*)get_instance(playerskinsashhair_417_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_43_86_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances));
            if (parent == NULL) goto pos_end_43_86_1;
            ((Active*)get_instance(playerskincaroltail_444_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_43_86_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_43_86_2;
            ((Active*)get_instance(playerskinmillatail_381_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_43_86_2: ;
        }
        ((Active*)get_instance(npcstofficer_3941_instances))->alterables->values.set(0, get_max(((Active*)get_instance(npcstofficer_3941_instances))->alterables->values.get(0)-1, 0));
    }
    event_43_86_end: ;
}
void Frames::event_func_20955()
{
    // event 44_86
    {
        if (!(group_syntax_1)) goto event_44_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9))*8);
    }
    event_44_86_end: ;
}
void Frames::event_func_20956()
{
    // event 45_86
    {
        if (!(group_syntax_1)) goto event_45_86_end;
        if (!(((Active*)get_instance(npcsyntax_2519_instances))->alterables->flags.is_off(1))) goto event_45_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(9, 2);
    }
    event_45_86_end: ;
}
void Frames::event_func_20957()
{
    // event 46_86
    {
        if (!(group_syntax_1)) goto event_46_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_46_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(get_min(((Active*)get_instance(npcsyntax_2519_instances))->get_y(), 1765));
    }
    event_46_86_end: ;
}
void Frames::event_func_20958()
{
    // event 47_86
    {
        if (!(group_syntax_1)) goto event_47_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_47_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_47_86_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(0);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_47_86_end: ;
}
void Frames::event_func_20959()
{
    // event 48_86
    {
        if (!(group_syntax_1)) goto event_48_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_48_86_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (-1))) goto event_48_86_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(16);
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_48_86_end: ;
}
void Frames::event_func_20960()
{
    // event 49_86
    {
        if (!(group_syntax_1)) goto event_49_86_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxleftarm_2517_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxleftarm_2517_instances.has_selection()) goto event_49_86_end;
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_49_86_end: ;
}
void Frames::event_func_20961()
{
    // event 50_86
    {
        if (!(group_syntax_1)) goto event_50_86_end;
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxrightarm_2518_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxrightarm_2518_instances.has_selection()) goto event_50_86_end;
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_50_86_end: ;
}
void Frames::event_func_20962()
{
    // event 51_86
    {
        // group: Pangu
        ((Active*)get_instance(npcpangu_3073_instances))->set_y(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(9))*8);
    }
    event_51_86_end: ;
}
void Frames::event_func_20963()
{
    // event 52_86
    {
        // group: Pangu
        if (!(((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.is_off(1))) goto event_52_86_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 2);
    }
    event_52_86_end: ;
}
void Frames::event_func_20964()
{
    // event 53_86
    {
        // group: Pangu
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_53_86_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (1))) goto event_53_86_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(0);
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_53_86_end: ;
}
void Frames::event_func_20965()
{
    // event 54_86
    {
        // group: Pangu
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_54_86_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (-1))) goto event_54_86_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(16);
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_54_86_end: ;
}
void Frames::event_func_20966()
{
    // event 55_86
    {
        // group: Pangu
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpanguleftarm_3075_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpanguleftarm_3075_instances.has_selection()) goto event_55_86_end;
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_55_86_end: ;
}
void Frames::event_func_20967()
{
    // event 56_86
    {
        // group: Pangu
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpangurightarm_3076_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpangurightarm_3076_instances.has_selection()) goto event_56_86_end;
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_56_86_end: ;
}
void Frames::event_func_20968()
{
    // event 73_86
    {
        if (!((((TextBlitter*)get_instance(statistics_4188_instances))->get_y()) < (frame_bottom()-((TextBlitter*)get_instance(statistics_4188_instances))->height-20))) goto event_73_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->alterables->flags.enable(0);
        {
            ((Active*)get_instance(active_93_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(active_93_instances))->set_visible(true);
    }
    event_73_86_end: ;
}
void Frames::event_func_20969()
{
    // event 74_86
    {
        if (!(((TextBlitter*)get_instance(statistics_4188_instances))->alterables->flags.is_on(0))) goto event_74_86_end;
        ((TextBlitter*)get_instance(statistics_4188_instances))->set_y(frame_bottom()-((TextBlitter*)get_instance(statistics_4188_instances))->height-20);
        {
            ((Active*)get_instance(active_93_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(active_93_instances))->blend_color.get_semi_transparency()-((Active*)get_instance(active_93_instances))->alterables->values.get(0), 0));
        }
        ((Active*)get_instance(active_93_instances))->alterables->values.add(0, 1);
    }
    event_74_86_end: ;
}
void Frames::event_func_20970()
{
    // event 75_86
    {
        if (!((((Active*)get_instance(active_93_instances))->alterables->values.get(0)) == (180))) goto event_75_86_end;
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(continue_252_instances))->set_visible(true);
    }
    event_75_86_end: ;
}
void Frames::event_func_20971()
{
    // event 76_86
    bool or_result_76_86 = false;
    bool or_temp_result_76_86_0 = false;
    {
        if (!(group_continue_1)) goto or_event_76_86_0_end;
        if (!((((Active*)get_instance(active_93_instances))->alterables->values.get(0)) > (180))) goto or_event_76_86_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_76_86_0_end;
        or_result_76_86 = true;
        or_temp_result_76_86_0 = true;
    }
    or_event_76_86_0_end: ;
    // event 76_86
    bool or_temp_result_76_86_1 = false;
    {
        if (!(group_continue_1)) goto or_event_76_86_1_end;
        if (!((((Active*)get_instance(active_93_instances))->alterables->values.get(0)) > (180))) goto or_event_76_86_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_76_86_1_end;
        or_result_76_86 = true;
        or_temp_result_76_86_1 = true;
        or_event_76_86_1_end: ;
        if (!or_result_76_86) goto or_final_or_event_76_86_1_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 1);
            fadeedge_57_instances.add_back();
        }
        ((Active*)get_instance(fade_54_instances))->set_x(frame_left()-global_values->get(16)-120);
        ((Active*)get_instance(fade_54_instances))->set_y(frame_top());
        ((Active*)get_instance(fade_54_instances))->set_x_scale(global_values->get(16));
        ((Active*)get_instance(fade_54_instances))->set_y_scale(global_values->get(17));
        {
            ((Active*)get_instance(fade_54_instances))->blend_color.set_semi_transparency(0);
        }
        if (!group_transition_1) {
            group_transition_1 = true;
        }
            group_syntax_1 = false;
    
        media.stop_channel(32-1);
            group_continue_1 = false;
    
    }
    or_final_or_event_76_86_1_end: ;
}
void Frames::event_func_20972()
{
    // event 78_86
    {
        if (!(group_transition_1)) goto event_78_86_end;
        if (!((((Active*)get_instance(fade_54_instances))->alterables->values.get(5)) > (50))) goto event_78_86_end;
        next_frame = 3 + 0;    
    
    }
    event_78_86_end: ;
}
void Frames::event_func_20973()
{
    // event 79_86
    {
        if (!((global_values->get(0)) == (1))) goto event_79_86_end;
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_79_86_end: ;
}
void Frames::event_func_20974()
{
    // event 80_86
    {
        if (!((creditstorquerocket_579_instances.size()) > (0))) goto event_80_86_end;
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+120-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(0)*0.5);
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_80_86_end: ;
}
void Frames::event_func_20975()
{
    // event 81_86
    {
        if (!((creditstorquerocket_579_instances.size()) > (0))) goto event_81_86_end;
        FrameObject * single_instance_81_86_0; single_instance_81_86_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + -6, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_81_86_0 == NULL)
                    single_instance_81_86_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_81_86_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_81_86_0))->set_x(((Active*)single_instance_81_86_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_81_86_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_81_86_0))->force_speed(15);
        ((Active*)((Active*)single_instance_81_86_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_81_86_0))->restore_frame();
        ((Active*)((Active*)single_instance_81_86_0))->set_angle(randrange(4)*90, 0);
    }
    event_81_86_end: ;
}
void Frames::event_func_20976()
{
    // event 82_86
    {
        if (!((creditstorquerocket_579_instances.size()) > (0))) goto event_82_86_end;
        FrameObject * single_instance_82_86_0; single_instance_82_86_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 6, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_82_86_0 == NULL)
                    single_instance_82_86_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_82_86_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_82_86_0))->set_x(((Active*)single_instance_82_86_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_82_86_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_82_86_0))->force_speed(15);
        ((Active*)((Active*)single_instance_82_86_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_82_86_0))->restore_frame();
        ((Active*)((Active*)single_instance_82_86_0))->set_angle(randrange(4)*90, 0);
    }
    event_82_86_end: ;
}
void Frames::event_func_20977()
{
    // event 83_86
    {
        if (!((creditstorquerocket_579_instances.size()) > (0))) goto event_83_86_end;
        FrameObject * single_instance_83_86_0; single_instance_83_86_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_83_86_0 == NULL)
                    single_instance_83_86_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_83_86_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_83_86_0))->set_x(((Active*)single_instance_83_86_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_83_86_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_83_86_0))->force_speed(15);
        ((Active*)((Active*)single_instance_83_86_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_83_86_0))->restore_frame();
        ((Active*)((Active*)single_instance_83_86_0))->set_angle(randrange(4)*90, 0);
    }
    event_83_86_end: ;
}
void Frames::handle_frame_87_events()
{
    test_collisions_86();
    event_func_20915();
    event_func_20916();
    event_func_20917();
    event_func_20918();
    event_func_20919();
    event_func_20920();
    event_func_20921();
    event_func_20922();
    event_func_20923();
    event_func_20924();
    event_func_20925();
    event_func_20926();
    event_func_20927();
    event_func_20928();
    event_func_20929();
    event_func_20930();
    event_func_20931();
    event_func_20932();
    event_func_20933();
    event_func_20934();
    event_func_20935();
    event_func_20936();
    event_func_20937();
    event_func_20938();
    event_func_20939();
    event_func_20940();
    event_func_20941();
    event_func_20942();
    event_func_20943();
    event_func_20944();
    event_func_20945();
    event_func_20946();
    event_func_20947();
    event_func_20948();
    event_func_20949();
    event_func_20950();
    event_func_20951();
    event_func_20952();
    event_func_20953();
    event_func_20954();
    if (!group_syntax_1) goto group_syntax_1_end;
    event_func_20955();
    event_func_20956();
    event_func_20957();
    event_func_20958();
    event_func_20959();
    event_func_20960();
    event_func_20961();
    group_syntax_1_end: ;
    event_func_20962();
    event_func_20963();
    event_func_20964();
    event_func_20965();
    event_func_20966();
    event_func_20967();
    event_func_20968();
    event_func_20969();
    event_func_20970();
    if (!group_continue_1) goto group_continue_1_end;
    event_func_20971();
    group_continue_1_end: ;
    if (!group_transition_1) goto group_transition_1_end;
    event_func_967();
    event_func_20972();
    group_transition_1_end: ;
    event_func_20973();
    event_func_20974();
    event_func_20975();
    event_func_20976();
    event_func_20977();
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_225();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_87_pre_events()
{
}
