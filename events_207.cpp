#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16265()
{
    // event 723_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_723_73_end;
        if (!((shieldinstashield_359_instances.size()) == (0))) goto event_723_73_end;
        FrameObject * single_instance_723_73_0; single_instance_723_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_723_73_0 == NULL)
                    single_instance_723_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_723_73_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_723_73_0))->set_direction(24);
    }
    event_723_73_end: ;
}
void Frames::event_func_16266()
{
    // event 724_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_724_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (1))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_724_73_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
        }
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        media.play_id(SOUND_CAROL_BIKESPIN_2_411, -1, 1);
    }
    event_724_73_end: ;
}
void Frames::event_func_16267()
{
    // event 725_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_725_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_725_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_725_73_end: ;
}
void Frames::event_func_16268()
{
    // event 726_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_726_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_726_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        media.stop_sample(SOUND_CAROL_BIKESPIN_2_411);
    }
    event_726_73_end: ;
}
void Frames::event_func_16269()
{
    // event 727_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_727_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_727_73_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (20))) goto event_727_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 44);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_kick_67+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_727_73_0_end;
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
        dynamic_727_73_0_end: ;
        media.stop_sample(SOUND_CAROL_BIKESPIN_2_411);
    }
    event_727_73_end: ;
}
void Frames::event_func_16270()
{
    // event 729_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_729_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), 4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 7);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_729_73_end: ;
}
void Frames::event_func_16271()
{
    // event 734_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_734_73_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()-12);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()-12);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_x(((Active*)get_instance(playersensorleftbig_391_instances))->get_x()-2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_x(((Active*)get_instance(playersensorrightbig_393_instances))->get_x()+2);
    }
    event_734_73_end: ;
}
void Frames::event_func_16272()
{
    // event 736_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_736_73_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()+24);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()+24);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_736_73_end: ;
}
void Frames::event_func_16273()
{
    // event 740_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_740_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_740_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_740_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
        media.play_id(SOUND_CAROL_WALLJUMP_2_117, -1, 1);
    }
    event_740_73_end: ;
}
void Frames::event_func_16274()
{
    // event 741_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_741_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_741_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_741_73_end: ;
}
void Frames::event_func_16275()
{
    // event 813_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_813_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_813_73_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_813_73_end: ;
}
void Frames::event_func_16276()
{
    // event 814_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_814_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_814_73_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_814_73_end: ;
}
void Frames::event_func_16277()
{
    // event 816_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_816_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_816_73_end;
        if (not_always_816_73 > loop_count) {
            not_always_816_73 = loop_count + 2;
            goto event_816_73_end;
        }
        not_always_816_73 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGB_185, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_816_73_end: ;
}
void Frames::event_func_16278()
{
    // event 817_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_817_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_817_73_end;
        if (not_always_817_73 > loop_count) {
            not_always_817_73 = loop_count + 2;
            goto event_817_73_end;
        }
        not_always_817_73 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGA_184, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_817_73_end: ;
}
void Frames::event_func_16279()
{
    // event 821_73
    bool or_result_821_73 = false;
    bool or_temp_result_821_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_821_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (355))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_821_73_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_821_73_0_end;
        or_result_821_73 = true;
        or_temp_result_821_73_0 = true;
    }
    or_event_821_73_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_821_73_0) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 821_73
    bool or_temp_result_821_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_821_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (-5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_821_73_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_821_73_1_end;
        or_result_821_73 = true;
        or_temp_result_821_73_1 = true;
    }
    or_event_821_73_1_end: ;
    if (or_temp_result_821_73_1) {
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 821_73
    bool or_temp_result_821_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_821_73_2_end;
        if (test_obstacle(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+16*((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16), ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_box_index(3)+2)) goto or_event_821_73_2_end;
        or_result_821_73 = true;
        or_temp_result_821_73_2 = true;
        or_event_821_73_2_end: ;
        if (!or_result_821_73) goto or_final_or_event_821_73_2_end;
        playerskinmilla_446_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_821_73_0 || or_temp_result_821_73_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_821_73_0 || or_temp_result_821_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_821_73_2_end: ;
}
void Frames::event_func_16280()
{
    // event 825_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_825_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_825_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 5);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->restore_frame();
        }
    }
    event_825_73_end: ;
}
void Frames::event_func_16281()
{
    // event 826_73
    bool or_result_826_73 = false;
    bool or_temp_result_826_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_826_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_826_73_0_end;
        or_result_826_73 = true;
        or_temp_result_826_73_0 = true;
    }
    or_event_826_73_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_826_73_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 826_73
    bool or_temp_result_826_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_826_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_826_73_1_end;
        or_result_826_73 = true;
        or_temp_result_826_73_1 = true;
        or_event_826_73_1_end: ;
        if (or_temp_result_826_73_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_826_73) goto or_final_or_event_826_73_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_826_73_0 || or_temp_result_826_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_826_73_1_end: ;
}
void Frames::event_func_16282()
{
    // event 834_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1)) goto event_834_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_834_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_834_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances, default_active_instance))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_834_73_end: ;
}
void Frames::event_func_16283()
{
    // event 845_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_845_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_845_73_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_845_73_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(2))) goto event_845_73_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_845_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-4, -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    event_845_73_end: ;
}
void Frames::event_func_16284()
{
    // event 914_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_914_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_914_73_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_914_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.75-2.2*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.75-4.2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(global_values->get(12)*30+30, 60));
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Counter*)get_instance(guirings_122_instances))->subtract((((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)*(1+get_max(1-global_values->get(12), -0.75)))/math_helper/5);
        {
            loop_petal_loss_running = true;
            int times = int(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)/math_helper/2);
            loop_petal_loss_index = 0;
            while (loop_petal_loss_index < times) {
                loop_petal_loss_73();
                if (!loop_petal_loss_running) break;
                loop_petal_loss_index++;
            }
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)%math_helper%5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_hurt_77+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_914_73_0_end;
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
        dynamic_914_73_0_end: ;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(11, 2);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_914_73_end: ;
}
void Frames::event_func_16285()
{
    // event 929_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_929_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_929_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_929_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_929_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_929_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_929_73_end: ;
}
void Frames::event_func_16286()
{
    // event 930_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_930_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_930_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_930_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_930_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_930_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_930_73_end: ;
}
void Frames::event_func_16287()
{
    // event 931_73
    bool or_result_931_73 = false;
    bool or_temp_result_931_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_931_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_931_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_931_73_0_end;
        or_result_931_73 = true;
        or_temp_result_931_73_0 = true;
    }
    or_event_931_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_931_73_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 931_73
    bool or_temp_result_931_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_931_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (21))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_931_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_931_73_1_end;
        or_result_931_73 = true;
        or_temp_result_931_73_1 = true;
    }
    or_event_931_73_1_end: ;
    if (or_temp_result_931_73_1) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 931_73
    bool or_temp_result_931_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_931_73_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (7))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_931_73_2_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_931_73_2_end;
        or_result_931_73 = true;
        or_temp_result_931_73_2 = true;
        or_event_931_73_2_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_931_73_2) {
            playerothers_123_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_931_73) goto or_final_or_event_931_73_2_end;
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_931_73_0 || or_temp_result_931_73_1 || or_temp_result_931_73_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_931_73_0 || or_temp_result_931_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_931_73_2) {
            playerskinsash_418_instances.restore_selection();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    or_final_or_event_931_73_2_end: ;
}
void Frames::event_func_16288()
{
    // event 932_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_932_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_932_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_932_73_end: ;
}
void Frames::event_func_16289()
{
    // event 933_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_933_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_933_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_933_73_end: ;
}
void Frames::event_func_16290()
{
    // event 934_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_934_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_934_73_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (9.5))) goto event_934_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(2);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
    }
    event_934_73_end: ;
}
void Frames::event_func_16291()
{
    // event 935_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_935_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_935_73_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (9.5))) goto event_935_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(23);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
    }
    event_935_73_end: ;
}
void Frames::event_func_16292()
{
    // event 937_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_937_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (3))) goto event_937_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
    }
    event_937_73_end: ;
}
void Frames::event_func_16293()
{
    // event 938_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_938_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (4))) goto event_938_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(11);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_938_73_end: ;
}
void Frames::event_func_16294()
{
    // event 939_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_939_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (5))) goto event_939_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(10);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(10);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_939_73_end: ;
}
void Frames::event_func_16295()
{
    // event 940_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_940_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (6))) goto event_940_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
    }
    event_940_73_end: ;
}
void Frames::event_func_16296()
{
    // event 941_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_941_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_941_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(13);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
    }
    event_941_73_end: ;
}
void Frames::event_func_16297()
{
    // event 942_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_942_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_942_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(7);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_942_73_end: ;
}
void Frames::event_func_16298()
{
    // event 943_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_943_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (9))) goto event_943_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(8);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(guiicon_452_instances))->force_animation(8);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_943_73_end: ;
}
void Frames::event_func_16299()
{
    // event 944_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_944_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (10))) goto event_944_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(38);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
    }
    event_944_73_end: ;
}
void Frames::event_func_16300()
{
    // event 945_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_945_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_945_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(5);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_945_73_end: ;
}
void Frames::event_func_16301()
{
    // event 946_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_946_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (12))) goto event_946_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_946_73_end: ;
}
void Frames::event_func_16302()
{
    // event 948_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_948_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (13))) goto event_948_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(12);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    event_948_73_end: ;
}
void Frames::event_func_16303()
{
    // event 949_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_949_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_949_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(18);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
    }
    event_949_73_end: ;
}
void Frames::event_func_16304()
{
    // event 950_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_950_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (15))) goto event_950_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(26);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_950_73_end: ;
}
void Frames::event_func_16305()
{
    // event 951_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_951_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (16))) goto event_951_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(22);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_951_73_end: ;
}
void Frames::event_func_16306()
{
    // event 952_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_952_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (19))) goto event_952_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(22);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_952_73_end: ;
}
void Frames::event_func_16307()
{
    // event 953_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_953_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_953_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(25);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_953_73_end: ;
}
void Frames::event_func_16308()
{
    // event 954_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_954_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (21))) goto event_954_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(26);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_954_73_end: ;
}
void Frames::event_func_16309()
{
    // event 955_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_955_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (22))) goto event_955_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(29);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_955_73_end: ;
}
void Frames::event_func_16310()
{
    // event 956_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_956_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_956_73_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(30);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
    }
    event_956_73_end: ;
}
void Frames::event_func_16311()
{
    // event 957_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_957_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (24))) goto event_957_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(28);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
    }
    event_957_73_end: ;
}
void Frames::event_func_16312()
{
    // event 958_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_958_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (25))) goto event_958_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(27);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
    }
    event_958_73_end: ;
}
void Frames::event_func_16313()
{
    // event 959_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_959_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_959_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(39);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
    }
    event_959_73_end: ;
}
void Frames::event_func_16314()
{
    // event 960_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_960_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (27))) goto event_960_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(9);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_960_73_end: ;
}
void Frames::event_func_16315()
{
    // event 961_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_961_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (28))) goto event_961_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(36);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
    }
    event_961_73_end: ;
}
void Frames::event_func_16316()
{
    // event 962_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_962_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (29))) goto event_962_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(35);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
    }
    event_962_73_end: ;
}
void Frames::event_func_16317()
{
    // event 963_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_963_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_963_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0.0))) goto event_963_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(14);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
    }
    event_963_73_end: ;
}
void Frames::event_func_16318()
{
    // event 964_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_964_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_964_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0.0))) goto event_964_73_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(24)) goto event_964_73_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_964_73_end: ;
}
void Frames::event_func_16319()
{
    // event 965_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_965_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (41))) goto event_965_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(15);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
    }
    event_965_73_end: ;
}
void Frames::event_func_16320()
{
    // event 966_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_966_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (42))) goto event_966_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(17);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_966_73_end: ;
}
void Frames::event_func_16321()
{
    // event 967_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_967_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (43))) goto event_967_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_967_73_end: ;
}
void Frames::event_func_16322()
{
    // event 968_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_968_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (44))) goto event_968_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(21);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
    }
    event_968_73_end: ;
}
void Frames::event_func_16323()
{
    // event 969_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_969_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (45))) goto event_969_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(32);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
    }
    event_969_73_end: ;
}
void Frames::event_func_16324()
{
    // event 970_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_970_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (46))) goto event_970_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(31);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
    }
    event_970_73_end: ;
}
void Frames::event_func_16325()
{
    // event 971_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_971_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_971_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(33);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
    }
    event_971_73_end: ;
}
void Frames::event_func_16326()
{
    // event 972_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_972_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (48))) goto event_972_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(37);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(37);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
    }
    event_972_73_end: ;
}
void Frames::event_func_16327()
{
    // event 973_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_973_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (50))) goto event_973_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_973_73_end: ;
}
void Frames::event_func_16328()
{
    // event 974_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_974_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (51))) goto event_974_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(41);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(41);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
    }
    event_974_73_end: ;
}
void Frames::event_func_16329()
{
    // event 994_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (2))) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (8))) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (15))) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (26))) goto event_994_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (40))) goto event_994_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_speed();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_994_73_end: ;
}
void Frames::event_func_16330()
{
    // event 995_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_995_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_995_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_995_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_995_73_end: ;
}
void Frames::event_func_16331()
{
    // event 996_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_996_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_996_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_996_73_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
    }
    event_996_73_end: ;
}
void Frames::event_func_16332()
{
    // event 997_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_997_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (6))) goto event_997_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_997_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(35+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_997_73_end: ;
}
void Frames::event_func_16333()
{
    // event 998_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_998_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_998_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
    }
    event_998_73_end: ;
}
void Frames::event_func_16334()
{
    // event 999_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_999_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_999_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_999_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
    }
    event_999_73_end: ;
}
void Frames::event_func_16335()
{
    // event 1000_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1000_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_1000_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
    }
    event_1000_73_end: ;
}
void Frames::event_func_16336()
{
    // event 1001_73
    bool or_result_1001_73 = false;
    bool or_temp_result_1001_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1001_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (27))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1001_73_0_end;
        or_result_1001_73 = true;
        or_temp_result_1001_73_0 = true;
    }
    or_event_1001_73_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_1001_73_0) {
        playerothers_123_instances.save_selection();
    }
    // event 1001_73
    bool or_temp_result_1001_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1001_73_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (29))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1001_73_1_end;
        or_result_1001_73 = true;
        or_temp_result_1001_73_1 = true;
        or_event_1001_73_1_end: ;
        if (or_temp_result_1001_73_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_1001_73) goto or_final_or_event_1001_73_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1001_73_0 || or_temp_result_1001_73_1) {
            playerothers_123_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1001_73_1_end: ;
}
void Frames::event_func_16337()
{
    // event 1002_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1002_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_1002_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
    }
    event_1002_73_end: ;
}
void Frames::event_func_16338()
{
    // event 1003_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1003_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) >= (45))) goto event_1003_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) <= (46))) goto event_1003_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
    }
    event_1003_73_end: ;
}
void Frames::event_func_16339()
{
    // event 1004_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1004_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_1004_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
    }
    event_1004_73_end: ;
}
void Frames::event_func_16340()
{
    // event 1012_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1012_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1012_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_1012_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(21)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(22)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_73();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, ((Active*)get_instance(mastergroupsa_384_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1012_73_end: ;
}
void Frames::event_func_16341()
{
    // event 1013_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1013_73_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
    }
    event_1013_73_end: ;
}
void Frames::event_func_16342()
{
    // event 1015_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1015_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1015_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1015_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1015_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1015_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
    }
    event_1015_73_end: ;
}
void Frames::event_func_16343()
{
    // event 1016_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1016_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1016_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1016_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1016_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
    }
    event_1016_73_end: ;
}
void Frames::event_func_16344()
{
    // event 1018_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1018_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) == (1))) goto event_1018_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(17, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 255, 255));
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 255, 255));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
    }
    event_1018_73_end: ;
}
void Frames::event_func_16345()
{
    // event 1020_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1020_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (0))) goto event_1020_73_end;
        if (not_always_1020_73 > loop_count) {
            not_always_1020_73 = loop_count + 2;
            goto event_1020_73_end;
        }
        not_always_1020_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(true);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1020_73_end: ;
}
void Frames::event_func_16346()
{
    // event 1021_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1021_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1021_73_end;
        if (not_always_1021_73 > loop_count) {
            not_always_1021_73 = loop_count + 2;
            goto event_1021_73_end;
        }
        not_always_1021_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1021_73_end: ;
}
void Frames::event_func_16347()
{
    // event 1022_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1022_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1022_73_end;
        if (not_always_1022_73 > loop_count) {
            not_always_1022_73 = loop_count + 2;
            goto event_1022_73_end;
        }
        not_always_1022_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1022_73_end: ;
}
void Frames::event_func_16348()
{
    // event 1023_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1023_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1023_73_end;
        if (not_always_1023_73 > loop_count) {
            not_always_1023_73 = loop_count + 2;
            goto event_1023_73_end;
        }
        not_always_1023_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1023_73_end: ;
}
void Frames::event_func_16349()
{
    // event 1024_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1024_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1024_73_end;
        if (not_always_1024_73 > loop_count) {
            not_always_1024_73 = loop_count + 2;
            goto event_1024_73_end;
        }
        not_always_1024_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1024_73_end: ;
}
void Frames::event_func_16350()
{
    // event 1025_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1025_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (5))) goto event_1025_73_end;
        if (not_always_1025_73 > loop_count) {
            not_always_1025_73 = loop_count + 2;
            goto event_1025_73_end;
        }
        not_always_1025_73 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1025_73_end: ;
}
void Frames::event_func_16351()
{
    // event 1035_73
    {
        if (!(group_main_engine_1)) goto event_1035_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1035_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1035_73_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1035_73_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_73();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1035_73_end: ;
}
void Frames::event_func_16352()
{
    // event 1038_73
    bool or_result_1038_73 = false;
    bool or_temp_result_1038_73_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1038_73_0_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto or_event_1038_73_0_end;
        guirings_122_instances.clear_selection();
        if (!check_overlap(objectpetal_302_instances, guirings_122_instances)) goto or_event_1038_73_0_end;
        FrameObject * single_instance_1038_73_0; single_instance_1038_73_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1038_73_0 == NULL) goto or_event_1038_73_0_end;
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) >= (14))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1038_73_0_end;
        or_result_1038_73 = true;
        or_temp_result_1038_73_0 = true;
    }
    or_event_1038_73_0_end: ;
    guirings_122_instances.clear_saved_selection();
    objectpetal_302_instances.clear_saved_selection();
    if (or_temp_result_1038_73_0) {
        guirings_122_instances.save_selection();
        objectpetal_302_instances.save_selection();
    }
    // event 1038_73
    bool or_temp_result_1038_73_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1038_73_1_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto or_event_1038_73_1_end;
        guirings_122_instances.clear_selection();
        if (!check_overlap(objectpetal_302_instances, guirings_122_instances)) goto or_event_1038_73_1_end;
        FrameObject * single_instance_1038_73_0; single_instance_1038_73_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1038_73_0 == NULL) goto or_event_1038_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1038_73_1_end;
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) >= (8))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1038_73_1_end;
        or_result_1038_73 = true;
        or_temp_result_1038_73_1 = true;
        or_event_1038_73_1_end: ;
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_1038_73_1) {
            guirings_122_instances.save_selection();
            objectpetal_302_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1038_73) goto or_final_or_event_1038_73_1_end;
        playermovementvalues_245_instances.empty_selection();
        guirings_122_instances.empty_selection();
        objectpetal_302_instances.empty_selection();
        if (or_temp_result_1038_73_0 || or_temp_result_1038_73_1) {
            guirings_122_instances.restore_selection();
        }
        if (or_temp_result_1038_73_0 || or_temp_result_1038_73_1) {
            objectpetal_302_instances.restore_selection();
        }
        if (or_temp_result_1038_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        FrameObject * single_instance_1038_73_1; single_instance_1038_73_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(guirings_122_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Counter*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guilinkbonus_280(parent->x + -4, parent->y + 34), parent->layer);
                if (single_instance_1038_73_1 == NULL)
                    single_instance_1038_73_1 = new_obj;
            }
        }
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        ((Active*)((Active*)single_instance_1038_73_1))->force_animation(7);
        ((Active*)((Active*)single_instance_1038_73_1))->set_y(((Active*)single_instance_1038_73_1)->get_y()+(((Active*)get_instance(guiscoretimerings_451_instances, default_active_instance))->alterables->values.get(7)%math_helper%14)*12);
        guiscoretimerings_451_instances.clear_selection();
        for (ObjectIterator it(guiscoretimerings_451_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+5, 100));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1038_73_1_end: ;
}
void Frames::event_func_16353()
{
    // event 1057_73
    {
        if (!(group_main_engine_1)) goto event_1057_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1057_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1057_73_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1057_73_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_73();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1057_73_end: ;
}
void Frames::event_func_16354()
{
    // event 1078_73
    {
        if (!(group_main_engine_1)) goto event_1078_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1078_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1078_73_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1078_73_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_73();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1078_73_end: ;
}
void Frames::event_func_16355()
{
    // event 1080_73
    {
        if (!(group_main_engine_1)) goto event_1080_73_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1080_73_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(0, 10);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.add(14, 1);
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(7);
        }
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 15+((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction())+1, 1, 15+((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(guiscoretimerings_451_instances))->alterables->values.set(10, ((Active*)get_single(objectkeystone_311_instances))->get_fixed());
        ((Active*)get_instance(guienergy_124_instances))->alterables->flags.enable(1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction()+1, 1, 11);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.stop_sample(SOUND_ITEM_KEYSTONE1_39);
        media.play_id(SOUND_ITEM_KEYSTONE1_39, -1, 1);
    }
    event_1080_73_end: ;
}
void Frames::event_func_16356()
{
    // event 1285_73
    {
        if (!(group_main_engine_1)) goto event_1285_73_end;
        qualifier_14.clear_selection();
        spread_value(qualifier_14, 8, 0);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, get_max(((Active*)*it)->alterables->values.get(18)-1, 0));
        }
    }
    event_1285_73_end: ;
}
void Frames::event_func_16357()
{
    // event 1295_73
    {
        if (!(group_main_engine_1)) goto event_1295_73_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1295_73_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(11, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_73();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 4);
        }
    }
    event_1295_73_end: ;
}
void Frames::event_func_16358()
{
    // event 1297_73
    {
        if (!(group_main_engine_1)) goto event_1297_73_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1297_73_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(11, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_73();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 4);
        }
    }
    event_1297_73_end: ;
}
void Frames::event_func_16359()
{
    // event 1351_73
    {
        if (!(group_main_engine_1)) goto event_1351_73_end;
        levelmovingplatform1_3840_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_3840_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_3840_instances.has_selection()) goto event_1351_73_end;
        for (ObjectIterator it(levelmovingplatform1_3840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
    }
    event_1351_73_end: ;
}
void Frames::event_func_16360()
{
    // event 1352_73
    {
        if (!(group_main_engine_1)) goto event_1352_73_end;
        levelmovingplatform2_940_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform2_940_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform2_940_instances.has_selection()) goto event_1352_73_end;
        for (ObjectIterator it(levelmovingplatform2_940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
    }
    event_1352_73_end: ;
}
void Frames::event_func_16361()
{
    // event 1362_73
    {
        if (!(group_main_engine_1)) goto event_1362_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1362_73_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_13)) goto event_1362_73_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1362_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(15));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_1362_73_end: ;
}
void Frames::event_func_16362()
{
    // event 1364_73
    {
        if (!(group_main_engine_1)) goto event_1364_73_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1364_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_23, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+28);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1364_73_end: ;
}
void Frames::event_func_16363()
{
    // event 1365_73
    {
        if (!(group_main_engine_1)) goto event_1365_73_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1365_73_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_12, default_active_instance))->get_y()+28+get_floor(((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(18)));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1365_73_end: ;
}
void Frames::event_func_16364()
{
    // event 1369_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1369_73_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1369_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1369_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1369_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1369_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
    }
    event_1369_73_end: ;
}
