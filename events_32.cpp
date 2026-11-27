#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2756()
{
    // event 406_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1)) goto event_406_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_406_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_406_14_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_406_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
    }
    event_406_14_end: ;
}
void Frames::event_func_2757()
{
    // event 414_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_414_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_414_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_414_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_414_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 23);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 100);
            ((Active*)*it)->force_animation(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(19);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_414_14_end: ;
}
void Frames::event_func_2758()
{
    // event 415_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_415_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_415_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_415_14_end;
        FrameObject * single_instance_415_14_0; single_instance_415_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_415_14_0 == NULL)
                    single_instance_415_14_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKED_292, -1, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)((Active*)single_instance_415_14_0))->set_direction(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_direction()-1);
        ((Active*)((Active*)single_instance_415_14_0))->force_speed(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)single_instance_415_14_0)->move_back(((Active*)get_single(playerskinsash_418_instances)));
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_415_14_1_end;
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
        dynamic_415_14_1_end: ;
    }
    event_415_14_end: ;
}
void Frames::event_func_2759()
{
    // event 416_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_416_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_416_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_416_14_end: ;
}
void Frames::event_func_2760()
{
    // event 417_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_417_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_417_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 5);
    }
    event_417_14_end: ;
}
void Frames::event_func_2761()
{
    // event 421_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1)) goto event_421_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_421_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_421_14_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_421_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
    }
    event_421_14_end: ;
}
void Frames::event_func_2762()
{
    // event 446_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1)) goto event_446_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_446_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_446_14_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_446_14_end;
        if (!((((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(24)) != (1))) goto event_446_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
    }
    event_446_14_end: ;
}
void Frames::event_func_2763()
{
    // event 448_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_448_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_448_14_end: ;
}
void Frames::event_func_2764()
{
    // event 450_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_450_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_450_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_450_14_end: ;
}
void Frames::event_func_2765()
{
    // event 451_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1)) goto event_451_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_451_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_451_14_end: ;
}
void Frames::event_func_2766()
{
    // event 463_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1)) goto event_463_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_463_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_463_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_463_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (20))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_463_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_463_14_end;
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_463_14_end: ;
}
void Frames::event_func_2767()
{
    // event 467_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1)) goto event_467_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(27))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_467_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        ((Active*)get_instance(guiicon_452_instances))->restore_animation();
    }
    event_467_14_end: ;
}
void Frames::event_func_2768()
{
    // event 469_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1)) goto event_469_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_469_14_end: ;
}
void Frames::event_func_2769()
{
    // event 470_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1)) goto event_470_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (7))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_470_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_470_14_end: ;
}
void Frames::event_func_2770()
{
    // event 472_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_472_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_472_14_end: ;
}
void Frames::event_func_2771()
{
    // event 473_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_473_14_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_473_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_473_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2, ((Active*)get_single(qualifier_22, default_active_instance))->get_x()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 1);
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
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_473_14_end: ;
}
void Frames::event_func_2772()
{
    // event 474_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_474_14_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_474_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_474_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2, ((Active*)get_single(qualifier_22, default_active_instance))->get_x()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_474_14_end: ;
}
void Frames::event_func_2773()
{
    // event 475_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto event_475_14_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto event_475_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) == (((Active*)get_single(qualifier_22, default_active_instance))->get_x()))) goto event_475_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_475_14_end: ;
}
void Frames::event_func_2774()
{
    // event 476_14
    bool or_result_476_14 = false;
    bool or_temp_result_476_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto or_event_476_14_0_end;
        player_389_instances.clear_selection();
        if (!check_not_overlap(player_389_instances, qualifier_22)) goto or_event_476_14_0_end;
        or_result_476_14 = true;
        or_temp_result_476_14_0 = true;
    }
    or_event_476_14_0_end: ;
    player_389_instances.clear_saved_selection();
    if (or_temp_result_476_14_0) {
        player_389_instances.save_selection();
    }
    // event 476_14
    bool or_temp_result_476_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto or_event_476_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_476_14_1_end;
        or_result_476_14 = true;
        or_temp_result_476_14_1 = true;
    }
    or_event_476_14_1_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_476_14_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 476_14
    bool or_temp_result_476_14_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1)) goto or_event_476_14_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_476_14_2_end;
        or_result_476_14 = true;
        or_temp_result_476_14_2 = true;
        or_event_476_14_2_end: ;
        if (or_temp_result_476_14_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_476_14) goto or_final_or_event_476_14_2_end;
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_476_14_1 || or_temp_result_476_14_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_476_14_0) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
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
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_476_14_2_end: ;
}
void Frames::event_func_2775()
{
    // event 479_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_479_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_479_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_479_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_479_14_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_479_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_479_14_end: ;
}
void Frames::event_func_2776()
{
    // event 505_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_505_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(33))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_505_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_505_14_end: ;
}
void Frames::event_func_2777()
{
    // event 506_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_506_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(33))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_506_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
    }
    event_506_14_end: ;
}
void Frames::event_func_2778()
{
    // event 519_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_519_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_519_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_519_14_end;
        ((Active*)get_instance(laddertop_357_instances))->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_frame());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
    }
    event_519_14_end: ;
}
void Frames::event_func_2779()
{
    // event 520_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_520_14_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_520_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_520_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_520_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_520_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(laddertop_357_instances))->alterables->flags.enable(1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_520_14_end: ;
}
void Frames::event_func_2780()
{
    // event 521_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_521_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (28))) goto event_521_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_521_14_end: ;
}
void Frames::event_func_2781()
{
    // event 522_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_522_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (7))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_522_14_end;
        if (!(((Active*)get_instance(laddertop_357_instances))->alterables->flags.is_on(1))) goto event_522_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(laddertop_357_instances))->get_y()-36);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(7, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(laddertop_357_instances))->alterables->flags.disable(1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_522_14_end: ;
}
void Frames::event_func_2782()
{
    // event 527_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_527_14_end;
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_527_14_end: ;
}
void Frames::event_func_2783()
{
    // event 552_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_14_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_552_14_end: ;
}
void Frames::event_func_2784()
{
    // event 557_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_557_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_557_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_557_14_end: ;
}
void Frames::event_func_2785()
{
    // event 558_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_558_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_558_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_558_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+0.05);
    }
    event_558_14_end: ;
}
void Frames::event_func_2786()
{
    // event 560_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_560_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_560_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_560_14_end;
        if (not_always_560_14 > loop_count) {
            not_always_560_14 = loop_count + 2;
            goto event_560_14_end;
        }
        not_always_560_14 = loop_count + 2;
        media.play_id(SOUND_DROWN_19, -1, 1);
    }
    event_560_14_end: ;
}
void Frames::event_func_2787()
{
    // event 561_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_561_14_end;
        if (!((manager.lives) > (0))) goto event_561_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_561_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_561_14_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.enable(9);
    }
    event_561_14_end: ;
}
void Frames::event_func_2788()
{
    // event 569_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_569_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_569_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
    }
    event_569_14_end: ;
}
void Frames::event_func_2789()
{
    // event 571_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_571_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_571_14_end;
        if (!media.is_sample_playing(SOUND_LILAC_COMETSTART_9)) goto event_571_14_end;
        media.play_id(SOUND_LILAC_SCOMETSTART_399, -1, 1);
        media.stop_sample(SOUND_LILAC_COMETSTART_9);
    }
    event_571_14_end: ;
}
void Frames::event_func_2790()
{
    // event 572_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_572_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_572_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_572_14_end;
        FrameObject * single_instance_572_14_0; single_instance_572_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_572_14_0 == NULL)
                    single_instance_572_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_572_14_0))->force_animation(7);
        ((Active*)((Active*)single_instance_572_14_0))->set_direction(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_572_14_0))->set_angle(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_angle(), 0);
    }
    event_572_14_end: ;
}
void Frames::event_func_2791()
{
    // event 579_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_579_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_579_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_579_14_end;
        media.play_id(SOUND_LILAC_COMETDASH_53, -1, 1);
        media.stop_sample(SOUND_LILAC_COMETSTART_9);
    }
    event_579_14_end: ;
}
void Frames::event_func_2792()
{
    // event 580_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_580_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_580_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_580_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_580_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_580_14_end: ;
}
void Frames::event_func_2793()
{
    // event 581_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_581_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_581_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_581_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_581_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_581_14_end: ;
}
void Frames::event_func_2794()
{
    // event 582_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_582_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_582_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (-1))) goto event_582_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_582_14_end: ;
}
void Frames::event_func_2795()
{
    // event 583_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_583_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_583_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (1))) goto event_583_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 8);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_583_14_end: ;
}
void Frames::event_func_2796()
{
    // event 586_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_586_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (31))) goto event_586_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_586_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*1.25);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        media.play_id(SOUND_LILAC_SCOMETDASH_324, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        media.stop_sample(SOUND_LILAC_SCOMETSTART_399);
    }
    event_586_14_end: ;
}
void Frames::event_func_2797()
{
    // event 590_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1)) goto event_590_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (15))) goto event_590_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(8)*0.5);
    }
    event_590_14_end: ;
}
void Frames::event_func_2798()
{
    // event 595_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_595_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_595_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_595_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_595_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_595_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_595_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_595_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(18))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_595_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 21);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
            ((Active*)*it)->alterables->values.set(8, 30);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_595_14_end: ;
}
void Frames::event_func_2799()
{
    // event 596_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_596_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_596_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_596_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_596_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_596_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_596_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_596_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(18))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_596_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 22);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
            ((Active*)*it)->alterables->values.set(8, 30);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_596_14_end: ;
}
void Frames::event_func_2800()
{
    // event 597_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_597_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_597_14_end;
        FrameObject * single_instance_597_14_0; single_instance_597_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_597_14_0 == NULL)
                    single_instance_597_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_597_14_0))->alterables->values.set(0, ((Active*)single_instance_597_14_0)->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*8);
        ((Active*)((Active*)single_instance_597_14_0))->alterables->values.set(1, ((Active*)single_instance_597_14_0)->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-8);
        ((Active*)((Active*)single_instance_597_14_0))->alterables->values.set(2, cos_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_597_14_0))->alterables->values.set(3, sin_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_597_14_0))->force_animation(8);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(20, 0);
    }
    event_597_14_end: ;
}
void Frames::event_func_2801()
{
    // event 598_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_598_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_598_14_end;
        FrameObject * single_instance_598_14_0; single_instance_598_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_598_14_0 == NULL)
                    single_instance_598_14_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKEN_2_21, -1, 1);
        ((Active*)((Active*)single_instance_598_14_0))->set_direction(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_598_14_0))->force_speed(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)single_instance_598_14_0)->move_back(((Active*)get_single(playerskinsash_418_instances)));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(6)));
            if (dyn_it == (*loops).end()) goto dynamic_598_14_1_end;
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
        dynamic_598_14_1_end: ;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_598_14_end: ;
}
void Frames::event_func_2802()
{
    // event 599_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_599_14_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_599_14_end: ;
}
void Frames::event_func_2803()
{
    // event 600_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_600_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_600_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_600_14_end: ;
}
void Frames::event_func_2804()
{
    // event 601_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_601_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(25))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_601_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_601_14_end: ;
}
void Frames::event_func_2805()
{
    // event 602_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_602_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(26))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_602_14_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(18);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_602_14_end: ;
}
void Frames::event_func_2806()
{
    // event 603_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_603_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(29))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_603_14_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(18);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_603_14_end: ;
}
void Frames::event_func_2807()
{
    // event 604_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_604_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(29)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_604_14_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_604_14_end: ;
}
void Frames::event_func_2808()
{
    // event 606_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_606_14_end;
        if (not_always_606_14 > loop_count) {
            not_always_606_14 = loop_count + 2;
            goto event_606_14_end;
        }
        not_always_606_14 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
    }
    event_606_14_end: ;
}
void Frames::event_func_2809()
{
    // event 607_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_607_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_607_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_607_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_607_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_607_14_0_end;
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
        dynamic_607_14_0_end: ;
    }
    event_607_14_end: ;
}
void Frames::event_func_2810()
{
    // event 608_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_608_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_608_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_608_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_608_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_608_14_0_end;
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
        dynamic_608_14_0_end: ;
    }
    event_608_14_end: ;
}
void Frames::event_func_2811()
{
    // event 609_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_609_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_609_14_end;
        FrameObject * single_instance_609_14_0; single_instance_609_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_609_14_0 == NULL)
                    single_instance_609_14_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKEU_291, -1, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        ((Active*)((Active*)single_instance_609_14_0))->set_direction(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_direction()+1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_609_14_end: ;
}
void Frames::event_func_2812()
{
    // event 610_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_610_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_610_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_610_14_end: ;
}
void Frames::event_func_2813()
{
    // event 611_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_611_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(28))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_611_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_611_14_end: ;
}
void Frames::event_func_2814()
{
    // event 612_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_612_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_612_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_612_14_end: ;
}
void Frames::event_func_2815()
{
    // event 613_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_613_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_613_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_613_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_613_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
    }
    event_613_14_end: ;
}
void Frames::event_func_2816()
{
    // event 615_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_615_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-0.25, 0));
    }
    event_615_14_end: ;
}
void Frames::event_func_2817()
{
    // event 616_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_616_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_616_14_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_cyclone_73+number_to_string(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->alterables->flags.get(22)));
            if (dyn_it == (*loops).end()) goto dynamic_616_14_0_end;
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
        dynamic_616_14_0_end: ;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 600);
        }
    }
    event_616_14_end: ;
}
void Frames::event_func_2818()
{
    // event 617_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_617_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_617_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_617_14_end: ;
}
void Frames::event_func_2819()
{
    // event 621_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_621_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (80))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_621_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_621_14_end: ;
}
void Frames::event_func_2820()
{
    // event 641_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_641_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(25))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_641_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_641_14_end: ;
}
void Frames::event_func_2821()
{
    // event 642_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_642_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(26))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_642_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(18);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_642_14_end: ;
}
void Frames::event_func_2822()
{
    // event 643_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_643_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(28))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_643_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(18);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_643_14_end: ;
}
void Frames::event_func_2823()
{
    // event 644_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_644_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_644_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_644_14_end: ;
}
void Frames::event_func_2824()
{
    // event 754_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_754_14_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()-12);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()-12);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_x(((Active*)get_instance(playersensorleftbig_391_instances))->get_x()-2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_x(((Active*)get_instance(playersensorrightbig_393_instances))->get_x()+2);
    }
    event_754_14_end: ;
}
void Frames::event_func_2825()
{
    // event 756_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_756_14_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()+24);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()+24);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_756_14_end: ;
}
void Frames::event_func_2826()
{
    // event 763_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_763_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_763_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) goto event_763_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, get_min(((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4), 0));
        FrameObject * single_instance_763_14_0; single_instance_763_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objectjumppad_530_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_763_14_0 == NULL)
                    single_instance_763_14_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_go_91+number_to_string(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->flags.get(8)));
            if (dyn_it == (*loops).end()) goto dynamic_763_14_1_end;
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
        dynamic_763_14_1_end: ;
    }
    event_763_14_end: ;
}
void Frames::event_func_2827()
{
    // event 764_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_764_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_764_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)+1))) goto event_764_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(objectjumppad_530_instances))->get_action_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(objectjumppad_530_instances))->get_action_y());
        }
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_764_14_end: ;
}
void Frames::event_func_2828()
{
    // event 772_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_772_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_772_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) goto event_772_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(3));
        }
    }
    event_772_14_end: ;
}
void Frames::event_func_2829()
{
    // event 774_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_774_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_774_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_774_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) goto event_774_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1))*-8.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, cos_deg(((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1))*-8.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 0);
        FrameObject * single_instance_774_14_0; single_instance_774_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objectjumppad_530_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_774_14_0 == NULL)
                    single_instance_774_14_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_go_91+number_to_string(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->flags.get(8)));
            if (dyn_it == (*loops).end()) goto dynamic_774_14_1_end;
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
        dynamic_774_14_1_end: ;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_774_14_end: ;
}
void Frames::event_func_2830()
{
    // event 777_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_777_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_777_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) goto event_777_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 0);
    }
    event_777_14_end: ;
}
void Frames::event_func_2831()
{
    // event 785_14
    bool or_result_785_14 = false;
    bool or_temp_result_785_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_785_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_785_14_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_785_14_0_end;
        playersensortopbig_395_instances.clear_selection();
        objectfuel_528_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, objectfuel_528_instances)) goto or_event_785_14_0_end;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_785_14_0_end;
        FrameObject * single_instance_785_14_0; single_instance_785_14_0 = pick_random(objectfuel_528_instances);
        if (single_instance_785_14_0 == NULL) goto or_event_785_14_0_end;
        or_result_785_14 = true;
        or_temp_result_785_14_0 = true;
    }
    or_event_785_14_0_end: ;
    playersensortopbig_395_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    objectfuel_528_instances.clear_saved_selection();
    if (or_temp_result_785_14_0) {
        playersensortopbig_395_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        objectfuel_528_instances.save_selection();
    }
    // event 785_14
    bool or_temp_result_785_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_785_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (30))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_785_14_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_785_14_1_end;
        playersensortopbig_395_instances.clear_selection();
        objectfuel_528_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, objectfuel_528_instances)) goto or_event_785_14_1_end;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_785_14_1_end;
        FrameObject * single_instance_785_14_0; single_instance_785_14_0 = pick_random(objectfuel_528_instances);
        if (single_instance_785_14_0 == NULL) goto or_event_785_14_1_end;
        or_result_785_14 = true;
        or_temp_result_785_14_1 = true;
        or_event_785_14_1_end: ;
        if (or_temp_result_785_14_1) {
            playersensortopbig_395_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            objectfuel_528_instances.save_selection();
        }
        if (!or_result_785_14) goto or_final_or_event_785_14_1_end;
        playerskinmilla_446_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectfuel_528_instances.empty_selection();
        if (or_temp_result_785_14_0 || or_temp_result_785_14_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_785_14_0 || or_temp_result_785_14_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_785_14_0 || or_temp_result_785_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_785_14_0 || or_temp_result_785_14_1) {
            objectfuel_528_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 30);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    or_final_or_event_785_14_1_end: ;
}
void Frames::event_func_2832()
{
    // event 787_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_787_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_787_14_end;
        {
            for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            objectfuel_528_instances.clear_selection();
            for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_x(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-31+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-16);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-31+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*16);
            ((Active*)*it)->set_angle(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        {
            ObjectIterator other_it(playerskinmilla_446_instances);
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (other_it.end()) goto action_787_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_787_14_0_end: ;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-11);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-11);
            ((Active*)*it)->set_angle(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        {
            ObjectIterator other_it(playerskinmilla_446_instances);
            for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_787_14_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_787_14_1_end: ;
    }
    event_787_14_end: ;
}
void Frames::event_func_2833()
{
    // event 788_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_788_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_788_14_end;
        {
            objectfuel_528_instances.clear_selection();
            for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_788_14_end: ;
}
void Frames::event_func_2834()
{
    // event 813_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_813_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_813_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_813_14_end;
        {
            for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            playermovementvalues_245_instances.clear_selection();
            for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            objectfuel_528_instances.clear_selection();
            for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(23, cos_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
            ((Active*)*it)->alterables->values.set(24, 0-sin_deg(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14))*(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16)*4));
        }
    }
    event_813_14_end: ;
}
void Frames::event_func_2835()
{
    // event 828_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1)) goto event_828_14_end;
        playersensorbottombig_397_instances.clear_selection();
        objectfuel_528_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectfuel_528_instances)) goto event_828_14_end;
        FrameObject * single_instance_828_14_0; single_instance_828_14_0 = pick_random(objectfuel_528_instances);
        if (single_instance_828_14_0 == NULL) goto event_828_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
        ((Active*)((Active*)single_instance_828_14_0))->alterables->flags.enable(2);
    }
    event_828_14_end: ;
}
void Frames::event_func_2836()
{
    // event 832_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_832_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(80-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)*2, 0));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 0.9);
        }
    }
    event_832_14_end: ;
}
void Frames::event_func_2837()
{
    // event 834_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_834_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_834_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_834_14_end: ;
}
void Frames::event_func_2838()
{
    // event 835_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1)) goto event_835_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_835_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_835_14_end: ;
}
void Frames::event_func_2839()
{
    // event 840_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_840_14_end;
        playersensorbottombig_397_instances.clear_selection();
        objectfuel_528_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectfuel_528_instances)) goto event_840_14_end;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_840_14_end;
        FrameObject * single_instance_840_14_0; single_instance_840_14_0 = pick_random(objectfuel_528_instances);
        if (single_instance_840_14_0 == NULL) goto event_840_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
        ((Active*)((Active*)single_instance_840_14_0))->alterables->flags.enable(2);
    }
    event_840_14_end: ;
}
void Frames::event_func_2840()
{
    // event 888_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1)) goto event_888_14_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_888_14_end;
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        spread_value(guikeystone_455_instances, 0, 0);
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10+((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->set_y(((Active*)get_instance(guitimer_564_instances))->get_action_y());
            ((Active*)*it)->set_x(((Active*)get_instance(guitimer_564_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0)*36);
        }
    }
    event_888_14_end: ;
}
void Frames::event_func_2841()
{
    // event 891_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_891_14_end;
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskintorque_450_instances, it.current_index));
            if (parent == NULL) goto pos_end_891_14_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_891_14_0: ;
        }
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_angle()+((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->alterables->values.get(1)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), 0);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            playerskintorque_450_instances.clear_selection();
            ObjectIterator other_it(playerskintorque_450_instances);
            for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_891_14_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_891_14_1_end: ;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-1, 0));
            ((Active*)*it)->alterables->flags.disable(3);
        }
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(guitimer_564_instances))->get_action_y());
            ((Active*)*it)->set_x(((Active*)get_instance(guitimer_564_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0)*36);
        }
    }
    event_891_14_end: ;
}
void Frames::event_func_2842()
{
    // event 940_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_940_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_940_14_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_940_14_end;
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
                loop_petal_loss_13();
                if (!loop_petal_loss_running) break;
                loop_petal_loss_index++;
            }
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)%math_helper%5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_hurt_77+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_940_14_0_end;
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
        dynamic_940_14_0_end: ;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(11, 2);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_940_14_end: ;
}
void Frames::event_func_2843()
{
    // event 955_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_955_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_955_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_955_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_955_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_955_14_end;
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_955_14_end: ;
}
void Frames::event_func_2844()
{
    // event 956_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_956_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_956_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_956_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_956_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_956_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_956_14_end: ;
}
void Frames::event_func_2845()
{
    // event 958_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_958_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_958_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_958_14_end: ;
}
void Frames::event_func_2846()
{
    // event 959_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_959_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_959_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_959_14_end: ;
}
void Frames::event_func_2847()
{
    // event 960_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_960_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_960_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (9.5))) goto event_960_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
    }
    event_960_14_end: ;
}
void Frames::event_func_2848()
{
    // event 961_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_961_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_961_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (9.5))) goto event_961_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
    }
    event_961_14_end: ;
}
void Frames::event_func_2849()
{
    // event 963_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_963_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (3))) goto event_963_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
    }
    event_963_14_end: ;
}
void Frames::event_func_2850()
{
    // event 964_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_964_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (4))) goto event_964_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_964_14_end: ;
}
void Frames::event_func_2851()
{
    // event 965_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_965_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (5))) goto event_965_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_965_14_end: ;
}
void Frames::event_func_2852()
{
    // event 966_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_966_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (6))) goto event_966_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
    }
    event_966_14_end: ;
}
void Frames::event_func_2853()
{
    // event 967_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_967_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_967_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_967_14_end: ;
}
void Frames::event_func_2854()
{
    // event 968_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_968_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_968_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_968_14_end: ;
}
void Frames::event_func_2855()
{
    // event 969_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_969_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (9))) goto event_969_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(guiicon_452_instances))->force_animation(8);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
    event_969_14_end: ;
}
