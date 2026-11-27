#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7936()
{
    // event 29_34
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_milla_and_torque_1)) goto event_29_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(14, 15);
        scrollingfloor_2021_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor_2021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15);
            ((Active*)*it)->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->get_x()-((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->move_back();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_29_34_end: ;
}
void Frames::event_func_7937()
{
    // event 30_34
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_milla_and_torque_1)) goto event_30_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(14)) >= (128))) goto event_30_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(14, 128);
        FrameObject * single_instance_30_34_0; single_instance_30_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthervalues_2003_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_scrollingfloor_2021(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_30_34_0 == NULL)
                    single_instance_30_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_30_34_0))->alterables->values.set(0, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(14));
    }
    event_30_34_end: ;
}
void Frames::event_func_7938()
{
    // event 31_34
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_milla_and_torque_1)) goto event_31_34_end;
        scrollingfloor_2021_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor_2021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (800))) { it.deselect(); continue; }
        }
        if (!scrollingfloor_2021_instances.has_selection()) goto event_31_34_end;
        for (ObjectIterator it(scrollingfloor_2021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_31_34_end: ;
}
void Frames::event_func_7939()
{
    // event 581_34
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_581_34_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (210))) goto event_581_34_end;
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
                loop_death_34();
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
    event_581_34_end: ;
}
void Frames::event_func_7940()
{
    // event 599_34
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_599_34_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (220))) goto event_599_34_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_34();
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
    event_599_34_end: ;
}
void Frames::event_func_7941()
{
    // event 1471_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1471_34_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1471_34_end;
        if (not_always_1471_34 > loop_count) {
            not_always_1471_34 = loop_count + 2;
            goto event_1471_34_end;
        }
        not_always_1471_34 = loop_count + 2;
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
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
    }
    event_1471_34_end: ;
}
void Frames::event_func_7942()
{
    // event 1482_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1482_34_end;
        if (once_condition_1482_34) goto event_1482_34_end;
        once_condition_1482_34 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_group_teamlilac_madeit_ogg_156, 28-1);
    }
    event_1482_34_end: ;
}
void Frames::event_func_7943()
{
    // event 1495_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1495_34_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1495_34_end;
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
    }
    event_1495_34_end: ;
}
void Frames::event_func_7944()
{
    // event 1496_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1496_34_end;
        if (not_always_1496_34 > loop_count) {
            not_always_1496_34 = loop_count + 2;
            goto event_1496_34_end;
        }
        not_always_1496_34 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1496_34_end: ;
}
void Frames::event_func_7945()
{
    // event 1497_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1497_34_end;
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
    }
    event_1497_34_end: ;
}
void Frames::event_func_7946()
{
    // event 1498_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1498_34_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1498_34_end;
        next_frame = 8 + 0;    
    
    }
    event_1498_34_end: ;
}
void Frames::event_func_7947()
{
    // event 1505_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1505_34_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1505_34_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), 400));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1505_34_end: ;
}
void Frames::event_func_7948()
{
    // event 1508_34
    {
        if (!(group_main_engine_1)) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1508_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1508_34_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0-((Active*)*it)->alterables->values.get(5));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
    }
    event_1508_34_end: ;
}
void Frames::event_func_7949()
{
    // event 1509_34
    {
        if (!(group_main_engine_1)) goto event_1509_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-24))) goto event_1509_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1509_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1509_34_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, width-24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 10));
    }
    event_1509_34_end: ;
}
void Frames::event_func_7950()
{
    // event 1510_34
    {
        if (!(group_main_engine_1)) goto event_1510_34_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+(106-global_values->get(19)*53));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
    }
    event_1510_34_end: ;
}
void Frames::event_func_7951()
{
    // event 1511_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1511_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*32);
            ((Active*)*it)->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*32-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20);
        }
    }
    event_1511_34_end: ;
}
void Frames::event_func_7952()
{
    // event 1512_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1512_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(0, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-110)*math_helper*2*-140+100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-130)*math_helper*2*-140+60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*120-70);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*100-100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(6, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*160-140);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(4, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-70)*math_helper*2*120-60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(5, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*-60+10);
    }
    event_1512_34_end: ;
}
void Frames::event_func_7953()
{
    // event 1513_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1513_34_end;
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(2)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(5)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(1)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(4)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(3)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(6)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        }
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)*0.5-45+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)+((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(0), 1);
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_angle()-22.5, 0);
        }
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)+((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0), 1);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)+((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0), 1);
    }
    event_1513_34_end: ;
}
void Frames::event_func_7954()
{
    // event 1514_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1514_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1514_34_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1514_34_0;
            ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1514_34_0: ;
        }
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*32);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*32-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20);
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1514_34_1;
            ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1514_34_1: ;
        }
    }
    event_1514_34_end: ;
}
void Frames::event_func_7955()
{
    // event 1515_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1515_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1515_34_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1515_34_0;
            ((Active*)get_instance(bosspantherhipf_1995_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1515_34_0: ;
        }
    }
    event_1515_34_end: ;
}
void Frames::event_func_7956()
{
    // event 1516_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1516_34_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1516_34_0;
            ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfr_2001_instances));
            if (parent == NULL) goto pos_end_1516_34_1;
            ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_1: ;
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspantherhipf_1995_instances))->get_x()+cos_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-24);
            ((Active*)*it)->set_y(((Active*)get_instance(bosspantherhipf_1995_instances))->get_y()+sin_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-24);
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhipf_1995_instances));
            if (parent == NULL) goto pos_end_1516_34_2;
            ((Active*)get_instance(bosspantherkneef_1996_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherkneef_1996_instances));
            if (parent == NULL) goto pos_end_1516_34_3;
            ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfl_1997_instances));
            if (parent == NULL) goto pos_end_1516_34_4;
            ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1516_34_5;
            ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1516_34_5: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhead_1992_instances));
            if (parent == NULL) goto pos_end_1516_34_6;
            ((Active*)get_instance(bosspantherrider_1989_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_6: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(2));
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1516_34_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1516_34_7: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherrider_1989_instances));
            if (parent == NULL) goto pos_end_1516_34_8;
            ((Active*)get_instance(shieldserpentine_1868_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1516_34_8: ;
        }
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(2));
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosspantherjaw_1993_instances));
            if (parent == NULL) goto pos_end_1516_34_9;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1516_34_9: ;
        }
    }
    event_1516_34_end: ;
}
void Frames::event_func_7957()
{
    // event 1517_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1517_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)%math_helper%360);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)%math_helper%360);
    }
    event_1517_34_end: ;
}
void Frames::event_func_7958()
{
    // event 1518_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1518_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1) goto event_1518_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) > (get_min(((Active*)get_instance(player_389_instances))->get_x()-180, frame_right()-180)))) goto event_1518_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) > (-2))) goto event_1518_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) < (3))) goto event_1518_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(10, 1);
    }
    event_1518_34_end: ;
}
void Frames::event_func_7959()
{
    // event 1519_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1519_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1) goto event_1519_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) < (get_min(((Active*)get_instance(player_389_instances))->get_x()-220, frame_right()-180)))) goto event_1519_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) > (-2))) goto event_1519_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) < (3))) goto event_1519_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 1);
    }
    event_1519_34_end: ;
}
void Frames::event_func_7960()
{
    // event 1520_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1520_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1) goto event_1520_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) > (frame_right()-240))) goto event_1520_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) >= (3))) goto event_1520_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(10, 1);
    }
    event_1520_34_end: ;
}
void Frames::event_func_7961()
{
    // event 1521_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1521_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1) goto event_1521_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) < (frame_right()-250))) goto event_1521_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) >= (3))) goto event_1521_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 1);
    }
    event_1521_34_end: ;
}
void Frames::event_func_7962()
{
    // event 1522_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1522_34_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1522_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(1)) == (0))) goto event_1522_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) > (frame_right()-190))) goto event_1522_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(10, 2);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, -60);
    }
    event_1522_34_end: ;
}
void Frames::event_func_7963()
{
    // event 1523_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1523_34_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1523_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(1)) == (0))) goto event_1523_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) < (frame_right()-210))) goto event_1523_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 2);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, -60);
    }
    event_1523_34_end: ;
}
void Frames::event_func_7964()
{
    // event 1524_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1524_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1524_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) <= (150))) goto event_1524_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (7))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1524_34_end;
        if (!(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.is_off(3))) goto event_1524_34_end;
        if (once_condition_1524_34) goto event_1524_34_end;
        once_condition_1524_34 = true;
        media.play_id(SOUND_SERP_CROSSBREVON_2_263, -1, 1);
    }
    event_1524_34_end: ;
}
void Frames::event_func_7965()
{
    // event 1525_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1525_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1525_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) <= (150))) goto event_1525_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (7))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1525_34_end;
        if (!(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.is_off(3))) goto event_1525_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.enable(3);
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 = true;
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1 = true;
        }
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1525_34_end: ;
}
void Frames::event_func_7966()
{
    // event 1526_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1526_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1526_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1526_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
    }
    event_1526_34_end: ;
}
void Frames::event_func_7967()
{
    // event 1527_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1527_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1527_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) > (150))) goto event_1527_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(5)) < (3))) goto event_1527_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(5, 1+randrange(2));
    }
    event_1527_34_end: ;
}
void Frames::event_func_7968()
{
    // event 1528_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1528_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) <= (0))) goto event_1528_34_end;
        if (!((bossplasmashot_2022_instances.size()) == (0))) goto event_1528_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (4))) goto event_1528_34_end;
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_x(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x()+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x())*2);
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_y(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y()+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y())*2);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, get_angle_int(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x(), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y())+30);
    }
    event_1528_34_end: ;
}
void Frames::event_func_7969()
{
    // event 1529_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1529_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (0))) goto event_1529_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1529_34_end: ;
}
void Frames::event_func_7970()
{
    // event 1530_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1530_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (1))) goto event_1530_34_end;
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(get_max(2.0-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*0.08, 0.1));
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(get_max(128-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*5, 0));
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1530_34_0;
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1530_34_0: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
    }
    event_1530_34_end: ;
}
void Frames::event_func_7971()
{
    // event 1531_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1531_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (1))) goto event_1531_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (25))) goto event_1531_34_end;
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(-128, 0);
            pos_end_1531_34_0: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
    }
    event_1531_34_end: ;
}
void Frames::event_func_7972()
{
    // event 1532_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1532_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (2))) goto event_1532_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1532_34_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1532_34_end;
        FrameObject * single_instance_1532_34_0; single_instance_1532_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossplasmashot_2022(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1532_34_0 == NULL)
                    single_instance_1532_34_0 = new_obj;
            }
        }
        FrameObject * single_instance_1532_34_1; single_instance_1532_34_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1532_34_1 == NULL)
                    single_instance_1532_34_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1532_34_0))->set_direction(get_direction_int(((Active*)single_instance_1532_34_0)->x, ((Active*)single_instance_1532_34_0)->y, ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->x + 0, ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->y + 0));
        ((Active*)((Active*)single_instance_1532_34_0))->set_direction(((Active*)single_instance_1532_34_0)->get_direction()+16);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
        ((Active*)((Active*)single_instance_1532_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1532_34_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        media.play_id(SOUND_COMMON_BLASTER5_438, -1, 1);
    }
    event_1532_34_end: ;
}
void Frames::event_func_7973()
{
    // event 1533_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1533_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (4))) goto event_1533_34_end;
        bossplasmashot_2022_instances.clear_selection();
        for (ObjectIterator it(bossplasmashot_2022_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1533_34_end: ;
}
void Frames::event_func_7974()
{
    // event 1534_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1534_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (2))) goto event_1534_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (12))) goto event_1534_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, randrange(60));
    }
    event_1534_34_end: ;
}
void Frames::event_func_7975()
{
    // event 1535_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1535_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1535_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) > (0))) goto event_1535_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(5)) >= (3))) goto event_1535_34_end;
        if (!(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.is_on(3))) goto event_1535_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, 3);
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(1);
        media.play_id(SOUND_BIGCHARGE_200, -1, 1);
    }
    event_1535_34_end: ;
}
void Frames::event_func_7976()
{
    // event 1536_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1536_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) >= (3))) goto event_1536_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(6, (((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(6)+3)%math_helper%360);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, cos_deg(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(6))*70-70);
    }
    event_1536_34_end: ;
}
void Frames::event_func_7977()
{
    // event 1537_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1537_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (3))) goto event_1537_34_end;
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(get_max(2.0-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*0.02, 0.1));
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(get_max(128-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*1.25, 0));
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1537_34_0;
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1537_34_0: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
    }
    event_1537_34_end: ;
}
void Frames::event_func_7978()
{
    // event 1538_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1538_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (3))) goto event_1538_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (100))) goto event_1538_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(-128, 0);
            pos_end_1538_34_0: ;
        }
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_x_scale(16);
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_visible(true);
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1538_34_end: ;
}
void Frames::event_func_7979()
{
    // event 1539_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1539_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (4))) goto event_1539_34_end;
        FrameObject * single_instance_1539_34_0; single_instance_1539_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1539_34_0 == NULL)
                    single_instance_1539_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1539_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1539_34_1;
            ((Active*)get_instance(bosspantherlaser_2036_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_34_1: ;
        }
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_angle(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_angle()-22.5, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(bosspantherlaser_2036_instances))->move_back();
    }
    event_1539_34_end: ;
}
void Frames::event_func_7980()
{
    // event 1540_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1540_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (4))) goto event_1540_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (200))) goto event_1540_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, 5);
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_x_scale(1);
        {
            ((Active*)get_instance(bosspantherlaser_2036_instances))->set_global_position(329, 718);
            pos_end_1540_34_0: ;
        }
    }
    event_1540_34_end: ;
}
void Frames::event_func_7981()
{
    // event 1541_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1541_34_end;
        bosspantherlaser_2036_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosspantherlaser_2036_instances, playercharactersensor_383_instances)) goto event_1541_34_end;
        if (!(((Active*)get_instance(bosspantherlaser_2036_instances))->flags & VISIBLE)) goto event_1541_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1541_34_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1541_34_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1541_34_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1541_34_end: ;
}
void Frames::event_func_7982()
{
    // event 1542_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1542_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (5))) goto event_1542_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(6)) <= (3))) goto event_1542_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.disable(3);
    }
    event_1542_34_end: ;
}
void Frames::event_func_7983()
{
    // event 1543_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1543_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1543_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) > (0))) goto event_1543_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(5)) >= (3))) goto event_1543_34_end;
        if (!(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.is_off(2))) goto event_1543_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(5, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1) {
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1 = true;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.toggle(2);
    }
    event_1543_34_end: ;
}
void Frames::event_func_7984()
{
    // event 1544_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1544_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(1)) == (0))) goto event_1544_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) >= (frame_right()-210))) goto event_1544_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->alterables->flags.is_off(3))) goto event_1544_34_end;
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->flags.enable(3);
        media.play_id(SOUND_SERP_MADLAUGH_193, -1, 1);
    }
    event_1544_34_end: ;
}
void Frames::event_func_7985()
{
    // event 1545_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1545_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(1)) == (0))) goto event_1545_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) >= (frame_right()-210))) goto event_1545_34_end;
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(bosspantherrider_1989_instances))->force_animation(12);
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(shieldserpentine_1868_instances))->set_visible(true);
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherrider_1989_instances));
            if (parent == NULL) goto pos_end_1545_34_0;
            ((Active*)get_instance(shieldserpentine_1868_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1545_34_0: ;
        }
    }
    event_1545_34_end: ;
}
void Frames::event_func_7986()
{
    // event 1546_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1546_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->is_animation_finished(12))) goto event_1546_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->alterables->flags.is_off(1))) goto event_1546_34_end;
        ((Active*)get_instance(bosspantherrider_1989_instances))->force_animation(13);
    }
    event_1546_34_end: ;
}
void Frames::event_func_7987()
{
    // event 1547_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1547_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->test_animation(13))) goto event_1547_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->get_frame()) == (5))) goto event_1547_34_end;
        if (not_always_1547_34 > loop_count) {
            not_always_1547_34 = loop_count + 2;
            goto event_1547_34_end;
        }
        not_always_1547_34 = loop_count + 2;
        FrameObject * single_instance_1547_34_0; single_instance_1547_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherrider_1989_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1547_34_0 == NULL)
                    single_instance_1547_34_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
        ((Active*)((Active*)single_instance_1547_34_0))->alterables->values.set(2, ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1547_34_0))->alterables->values.set(3, (((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.add(4, 1);
        ((Active*)((Active*)single_instance_1547_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1547_34_end: ;
}
void Frames::event_func_7988()
{
    // event 1548_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1548_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->test_animation(13))) goto event_1548_34_end;
        if (!((((Active*)get_instance(bosspantherrider_1989_instances))->get_frame()) == (8))) goto event_1548_34_end;
        if (not_always_1548_34 > loop_count) {
            not_always_1548_34 = loop_count + 2;
            goto event_1548_34_end;
        }
        not_always_1548_34 = loop_count + 2;
        FrameObject * single_instance_1548_34_0; single_instance_1548_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherrider_1989_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1548_34_0 == NULL)
                    single_instance_1548_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1548_34_0))->alterables->values.set(2, ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1548_34_0))->alterables->values.set(3, (((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
        ((Active*)((Active*)single_instance_1548_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1548_34_end: ;
}
void Frames::event_func_7989()
{
    // event 1549_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1549_34_end;
        if (!(((Active*)get_instance(bosspantherrider_1989_instances))->is_animation_finished(13))) goto event_1549_34_end;
        ((Active*)get_instance(bosspantherrider_1989_instances))->force_animation(12);
        ((Active*)get_instance(bosspantherrider_1989_instances))->alterables->flags.enable(1);
    }
    event_1549_34_end: ;
}
void Frames::event_func_7990()
{
    // event 1550_34
    bool or_result_1550_34 = false;
    bool or_temp_result_1550_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto or_event_1550_34_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) >= (((Active*)get_instance(bosspantherrider_1989_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(bosspantherrider_1989_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1550_34_0_end;
        or_result_1550_34 = true;
        or_temp_result_1550_34_0 = true;
    }
    or_event_1550_34_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1550_34_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1550_34
    bool or_temp_result_1550_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto or_event_1550_34_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(bosspantherrider_1989_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(bosspantherrider_1989_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1550_34_1_end;
        or_result_1550_34 = true;
        or_temp_result_1550_34_1 = true;
        or_event_1550_34_1_end: ;
        if (or_temp_result_1550_34_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1550_34) goto or_final_or_event_1550_34_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1550_34_0 || or_temp_result_1550_34_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
    }
    or_final_or_event_1550_34_1_end: ;
}
void Frames::event_func_7991()
{
    // event 1551_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1551_34_end;
        bosspantherrider_1989_instances.clear_selection();
        for (ObjectIterator it(bosspantherrider_1989_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(12))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosspantherrider_1989_instances.has_selection()) goto event_1551_34_end;
        for (ObjectIterator it(bosspantherrider_1989_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-80, 0);
            pos_end_1551_34_0: ;
        }
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1 = false;
    
    }
    event_1551_34_end: ;
}
void Frames::event_func_7992()
{
    // event 1552_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1)) goto event_1552_34_end;
        bosspantherrider_1989_instances.clear_selection();
        for (ObjectIterator it(bosspantherrider_1989_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!bosspantherrider_1989_instances.has_selection()) goto event_1552_34_end;
        for (ObjectIterator it(bosspantherrider_1989_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-80, 0);
            pos_end_1552_34_0: ;
        }
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1 = false;
    
    }
    event_1552_34_end: ;
}
void Frames::event_func_7993()
{
    // event 1553_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1553_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (-1))) goto event_1553_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) > (0))) goto event_1553_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(5)) >= (3))) goto event_1553_34_end;
        if (!(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.is_on(2))) goto event_1553_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.toggle(2);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, -120);
        media.play_id(SOUND_LOAD_WEAPON_256, -1, 1);
    }
    event_1553_34_end: ;
}
void Frames::event_func_7994()
{
    // event 1554_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1554_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (0))) goto event_1554_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0)) > (0))) goto event_1554_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.sub(0, 10);
    }
    event_1554_34_end: ;
}
void Frames::event_func_7995()
{
    // event 1555_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1555_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (0))) goto event_1555_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0)) <= (0))) goto event_1555_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1555_34_end;
        if (once_condition_1555_34) goto event_1555_34_end;
        once_condition_1555_34 = true;
        media.play_id(SOUND_SERP_BYELILAC_2_260, -1, 1);
    }
    event_1555_34_end: ;
}
void Frames::event_func_7996()
{
    // event 1556_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1556_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (0))) goto event_1556_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0)) <= (0))) goto event_1556_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_1556_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (4))) goto event_1556_34_end;
        if (once_condition_1556_34) goto event_1556_34_end;
        once_condition_1556_34 = true;
        media.play_id(SOUND_SERP_BYECAROL_2_261, -1, 1);
    }
    event_1556_34_end: ;
}
void Frames::event_func_7997()
{
    // event 1557_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1557_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (0))) goto event_1557_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0)) <= (0))) goto event_1557_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_direction(1);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.set(5, 0);
    }
    event_1557_34_end: ;
}
void Frames::event_func_7998()
{
    // event 1558_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1558_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) != (0))) goto event_1558_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(4, 1);
    }
    event_1558_34_end: ;
}
void Frames::event_func_7999()
{
    // event 1559_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1559_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (1))) goto event_1559_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(4)) > (60))) goto event_1559_34_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1559_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(5, 1);
        FrameObject * single_instance_1559_34_0; single_instance_1559_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherbackcannon_2031_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2023(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1559_34_0 == NULL)
                    single_instance_1559_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1559_34_0))->set_direction((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(5)%math_helper%6)+3);
        ((Active*)((Active*)single_instance_1559_34_0))->move_back();
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1559_34_end: ;
}
void Frames::event_func_8000()
{
    // event 1560_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1560_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (1))) goto event_1560_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(4)) > (120))) goto event_1560_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(5)) > (10))) goto event_1560_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.set(4, 0);
    }
    event_1560_34_end: ;
}
void Frames::event_func_8001()
{
    // event 1561_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1561_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (2))) goto event_1561_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(4)) > (60))) goto event_1561_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.add(0, 10);
    }
    event_1561_34_end: ;
}
void Frames::event_func_8002()
{
    // event 1562_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1)) goto event_1562_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(3)) == (2))) goto event_1562_34_end;
        if (!((((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0)) >= (180))) goto event_1562_34_end;
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.set(4, 0);
    }
    event_1562_34_end: ;
}
void Frames::event_func_8003()
{
    // event 1563_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1)) goto event_1563_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) < (90))) goto event_1563_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(13, 0.1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(11, 0.35);
    }
    event_1563_34_end: ;
}
void Frames::event_func_8004()
{
    // event 1564_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1)) goto event_1564_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) >= (45))) goto event_1564_34_end;
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_scale(get_min(((Active*)get_instance(bosspantherwheel_2027_instances))->x_scale+0.1, 1));
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_visible(true);
    }
    event_1564_34_end: ;
}
void Frames::event_func_8005()
{
    // event 1565_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1)) goto event_1565_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) >= (90))) goto event_1565_34_end;
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_enter_mode_1 = false;
    
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->force_animation(7);
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_1565_34_end: ;
}
void Frames::event_func_8006()
{
    // event 1566_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1566_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*32);
            ((Active*)*it)->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+((Active*)*it)->alterables->values.get(0)*20)*32-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)*it)->alterables->values.get(0)*-20);
        }
    }
    event_1566_34_end: ;
}
void Frames::event_func_8007()
{
    // event 1567_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1567_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(0, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-110)*math_helper*2*-140+100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-130)*math_helper*2*-140+60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*120-70);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-90)*math_helper*2*100-100);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(6, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*160-140);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(4, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-70)*math_helper*2*120-60);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(5, sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)*0.5-80)*math_helper*2*-60+10);
    }
    event_1567_34_end: ;
}
void Frames::event_func_8008()
{
    // event 1568_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1568_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(1, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(1)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(4, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(4)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(3, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(3)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(6, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(6)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)*2);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(0, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(15));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(2, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(2)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)*0.8-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(15)*0.5);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(5, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(5)*(30-get_max(0, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)-40, 30)))/math_helper/30.0-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)*1.3);
    }
    event_1568_34_end: ;
}
void Frames::event_func_8009()
{
    // event 1569_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1569_34_end;
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(2)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(5)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(1)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(4)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(3)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(6)+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 0);
        }
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(0)*0.5-45+((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8), 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_angle(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(0), 1);
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_angle()-22.5, 0);
        }
        ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_angle(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)+((Active*)get_instance(bosspantherbackcannon_2031_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_angle(((Active*)get_instance(bosspantherwheel_2027_instances))->get_angle()-27, 1);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_angle(((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0), 1);
    }
    event_1569_34_end: ;
}
void Frames::event_func_8010()
{
    // event 1570_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1570_34_end;
        if (!(((Active*)get_instance(bosspantherwheel_2027_instances))->flags & VISIBLE)) goto event_1570_34_end;
        if (!((((Active*)get_instance(bosspantherwheel_2027_instances))->x_scale) > (0.9))) goto event_1570_34_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1570_34_end;
        FrameObject * single_instance_1570_34_0; single_instance_1570_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherwheel_2027_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgroundspark_2025(parent->x + 0, parent->y + 40), parent->layer);
                if (single_instance_1570_34_0 == NULL)
                    single_instance_1570_34_0 = new_obj;
            }
        }
    }
    event_1570_34_end: ;
}
void Frames::event_func_8011()
{
    // event 1571_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1571_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1571_34_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1571_34_0;
            ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1571_34_0: ;
        }
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20+sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*32);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+cos_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)+(((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)-1)*20)*32-sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8))*((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->alterables->values.get(0)*-20-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)*0.5);
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1571_34_1;
            ((Active*)get_instance(bosspantherbackcannon_2031_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1571_34_1: ;
        }
    }
    event_1571_34_end: ;
}
void Frames::event_func_8012()
{
    // event 1572_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1572_34_end;
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosspantherribs_1990_instances.has_selection()) goto event_1572_34_end;
        {
            FrameObject * parent = ((Active*)get_single(bosspantherribs_1990_instances));
            if (parent == NULL) goto pos_end_1572_34_0;
            ((Active*)get_instance(bosspantherhipf_1995_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1572_34_0: ;
        }
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_y(((Active*)get_instance(bosspantherhipf_1995_instances))->get_y()+global_values->get(3)%math_helper%3);
    }
    event_1572_34_end: ;
}
void Frames::event_func_8013()
{
    // event 1573_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1573_34_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1573_34_0;
            ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfr_2001_instances));
            if (parent == NULL) goto pos_end_1573_34_1;
            ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_1: ;
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosspantherhipf_1995_instances))->get_x()+cos_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-0)*((Active*)*it)->alterables->values.get(0)*-24);
            ((Active*)*it)->set_y(((Active*)get_instance(bosspantherhipf_1995_instances))->get_y()+sin_deg(sin_deg(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(0)*20)*30-0)*((Active*)*it)->alterables->values.get(0)*-24-((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)*0.5);
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhipf_1995_instances));
            if (parent == NULL) goto pos_end_1573_34_2;
            ((Active*)get_instance(bosspantherkneef_1996_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherkneef_1996_instances));
            if (parent == NULL) goto pos_end_1573_34_3;
            ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherlegfl_1997_instances));
            if (parent == NULL) goto pos_end_1573_34_4;
            ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspanthershoulderf_1998_instances));
            if (parent == NULL) goto pos_end_1573_34_5;
            ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1573_34_5: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhead_1992_instances));
            if (parent == NULL) goto pos_end_1573_34_6;
            ((Active*)get_instance(bosspantherrider_1989_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_6: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()+((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(2));
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1573_34_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1573_34_7: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherrider_1989_instances));
            if (parent == NULL) goto pos_end_1573_34_8;
            ((Active*)get_instance(shieldserpentine_1868_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1573_34_8: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherhipf_1995_instances));
            if (parent == NULL) goto pos_end_1573_34_9;
            ((Active*)get_instance(bosspantherwheel_2027_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1573_34_9: ;
        }
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_x(((Active*)get_instance(bosspantherhead_1992_instances))->get_x()+((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_y(((Active*)get_instance(bosspantherhead_1992_instances))->get_y()+((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(2));
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosspantherjaw_1993_instances));
            if (parent == NULL) goto pos_end_1573_34_10;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1573_34_10: ;
        }
    }
    event_1573_34_end: ;
}
void Frames::event_func_8014()
{
    // event 1574_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1574_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(12, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(12)%math_helper%360);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(9, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(9)%math_helper%360);
    }
    event_1574_34_end: ;
}
void Frames::event_func_8015()
{
    // event 1575_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1575_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) > (-2))) goto event_1575_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) > (get_min(((Active*)get_instance(player_389_instances))->get_x()-180, frame_right()-160)))) goto event_1575_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(10, 2);
    }
    event_1575_34_end: ;
}
void Frames::event_func_8016()
{
    // event 1576_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1576_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) > (-2))) goto event_1576_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) < (get_min(((Active*)get_instance(player_389_instances))->get_x()-220, frame_right()-160)))) goto event_1576_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 2);
    }
    event_1576_34_end: ;
}
void Frames::event_func_8017()
{
    // event 1577_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1577_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) >= (90))) goto event_1577_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) < (0))) goto event_1577_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->flags.toggle(1);
    }
    event_1577_34_end: ;
}
void Frames::event_func_8018()
{
    // event 1578_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1578_34_end;
        if (!(((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->flags.is_off(1))) goto event_1578_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(0)+4, 0));
    }
    event_1578_34_end: ;
}
void Frames::event_func_8019()
{
    // event 1579_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1579_34_end;
        if (!(((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->flags.is_on(1))) goto event_1579_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(0)-4, -20));
    }
    event_1579_34_end: ;
}
void Frames::event_func_8020()
{
    // event 1580_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1580_34_end;
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.add(0, 1);
    }
    event_1580_34_end: ;
}
void Frames::event_func_8021()
{
    // event 1581_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1581_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(0)) > (120))) goto event_1581_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(1)) < (24))) goto event_1581_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(1)%math_helper%6) <= (2))) goto event_1581_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(15, 30);
        FrameObject * single_instance_1581_34_0; single_instance_1581_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfootfr_2000_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1581_34_0 == NULL)
                    single_instance_1581_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1581_34_0))->force_speed(100);
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
        FrameObject * single_instance_1581_34_1; single_instance_1581_34_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfootfr_2000_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2023(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1581_34_1 == NULL)
                    single_instance_1581_34_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1581_34_1))->set_direction(31);
        ((Active*)((Active*)single_instance_1581_34_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1581_34_1))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1581_34_1))->get_movement()->set_speed(120);
    }
    event_1581_34_end: ;
}
void Frames::event_func_8022()
{
    // event 1582_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1582_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(0)) > (120))) goto event_1582_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(1)) < (24))) goto event_1582_34_end;
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.add(1, 1);
    }
    event_1582_34_end: ;
}
void Frames::event_func_8023()
{
    // event 1583_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1583_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(15)) > (0))) goto event_1583_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(15, 2);
    }
    event_1583_34_end: ;
}
void Frames::event_func_8024()
{
    // event 1584_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1584_34_end;
        if (!((((Active*)get_instance(bosspantherhead_1992_instances))->alterables->values.get(0)) <= (0))) goto event_1584_34_end;
        if (!((((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.get(0)) > (150))) goto event_1584_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1) goto event_1584_34_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1 = true;
        }
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1584_34_end: ;
}
void Frames::event_func_8025()
{
    // event 1585_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1585_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) <= (0))) goto event_1585_34_end;
        if (!((bossplasmashot_2022_instances.size()) == (0))) goto event_1585_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (4))) goto event_1585_34_end;
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_x(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x()+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x())*2);
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_y(((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y()+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y())*2);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(0, get_angle_int(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_x(), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->get_y())+30);
    }
    event_1585_34_end: ;
}
void Frames::event_func_8026()
{
    // event 1586_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_plasma_cannon_2_1)) goto event_1586_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (0))) goto event_1586_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1586_34_end: ;
}
void Frames::event_func_8027()
{
    // event 1587_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_plasma_cannon_2_1)) goto event_1587_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (1))) goto event_1587_34_end;
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(get_max(2.0-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*0.08, 0.1));
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(get_max(128-((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)*5, 0));
        }
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            if (parent == NULL) goto pos_end_1587_34_0;
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1587_34_0: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
    }
    event_1587_34_end: ;
}
void Frames::event_func_8028()
{
    // event 1588_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_plasma_cannon_2_1)) goto event_1588_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (1))) goto event_1588_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (25))) goto event_1588_34_end;
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(-128, 0);
            pos_end_1588_34_0: ;
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, 0);
    }
    event_1588_34_end: ;
}
void Frames::event_func_8029()
{
    // event 1589_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_plasma_cannon_2_1)) goto event_1589_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (2))) goto event_1589_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1589_34_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1589_34_end;
        FrameObject * single_instance_1589_34_0; single_instance_1589_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossplasmashot_2022(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1589_34_0 == NULL)
                    single_instance_1589_34_0 = new_obj;
            }
        }
        FrameObject * single_instance_1589_34_1; single_instance_1589_34_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherfrontcannon_1994_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1589_34_1 == NULL)
                    single_instance_1589_34_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1589_34_0))->set_direction(get_direction_int(((Active*)single_instance_1589_34_0)->x, ((Active*)single_instance_1589_34_0)->y, ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->x + 0, ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->y + 0));
        ((Active*)((Active*)single_instance_1589_34_0))->set_direction(((Active*)single_instance_1589_34_0)->get_direction()+16);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.add(4, 1);
        ((Active*)((Active*)single_instance_1589_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1589_34_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1589_34_end: ;
}
void Frames::event_func_8030()
{
    // event 1590_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_plasma_cannon_2_1)) goto event_1590_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) == (2))) goto event_1590_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(4)) >= (12))) goto event_1590_34_end;
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.set(4, randrange(60));
    }
    event_1590_34_end: ;
}
void Frames::event_func_8031()
{
    // event 1591_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1)) goto event_1591_34_end;
        if (((Active*)get_instance(bosspantherfootfr_2000_instances))->test_animation(0)) goto event_1591_34_end;
        if (((Active*)get_instance(bosspantherfootfr_2000_instances))->test_animation(8)) goto event_1591_34_end;
        if (not_always_1591_34 > loop_count) {
            not_always_1591_34 = loop_count + 2;
            goto event_1591_34_end;
        }
        not_always_1591_34 = loop_count + 2;
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->force_animation(8);
    }
    event_1591_34_end: ;
}
void Frames::event_func_8032()
{
    // event 1592_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1)) goto event_1592_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) > (0))) goto event_1592_34_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(8, -2);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(11, -0.7);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(13, get_min(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13)+0.2, 16));
    }
    event_1592_34_end: ;
}
void Frames::event_func_8033()
{
    // event 1593_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1)) goto event_1593_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) >= (45))) goto event_1593_34_end;
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_scale(get_max(((Active*)get_instance(bosspantherwheel_2027_instances))->x_scale-0.1, 0.4));
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_visible(true);
    }
    event_1593_34_end: ;
}
void Frames::event_func_8034()
{
    // event 1594_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1)) goto event_1594_34_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(8)) <= (0))) goto event_1594_34_end;
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_exit_mode_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_1 = true;
        }
        ((Active*)get_instance(bosspantherwheel_2027_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1 = false;
    
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_1594_34_end: ;
}
void Frames::event_func_8035()
{
    // event 1595_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1595_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1595_34_end;
        if (!((((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)) < (0))) goto event_1595_34_end;
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (5))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1595_34_end;
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        ((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)+4, 0));
    }
    event_1595_34_end: ;
}
