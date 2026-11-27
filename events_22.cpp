#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1818()
{
    // event 590_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_590_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_590_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_590_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_590_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_590_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_590_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_590_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(18))) goto event_590_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 22);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(29);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 30);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_590_13_end: ;
}
void Frames::event_func_1819()
{
    // event 591_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_591_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_591_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_591_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_591_13_end;
        FrameObject * single_instance_591_13_0; single_instance_591_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_591_13_0 == NULL)
                    single_instance_591_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_591_13_0))->alterables->values.set(0, ((Active*)single_instance_591_13_0)->get_x()+sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*8);
        ((Active*)((Active*)single_instance_591_13_0))->alterables->values.set(1, ((Active*)single_instance_591_13_0)->get_y()+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*-8);
        ((Active*)((Active*)single_instance_591_13_0))->alterables->values.set(2, cos_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_591_13_0))->alterables->values.set(3, sin_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_591_13_0))->force_animation(8);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(20, 0);
    }
    event_591_13_end: ;
}
void Frames::event_func_1820()
{
    // event 592_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_592_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_592_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_592_13_end;
        FrameObject * single_instance_592_13_0; single_instance_592_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_592_13_0 == NULL)
                    single_instance_592_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKEN_2_21, -1, 1);
        ((Active*)((Active*)single_instance_592_13_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction());
        ((Active*)((Active*)single_instance_592_13_0))->force_speed(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)single_instance_592_13_0)->move_back(((Active*)get_instance(playerskinsash_418_instances)));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(6)));
            if (dyn_it == (*loops).end()) goto dynamic_592_13_1_end;
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
        dynamic_592_13_1_end: ;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(2);
    }
    event_592_13_end: ;
}
void Frames::event_func_1821()
{
    // event 593_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_593_13_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction());
        }
    }
    event_593_13_end: ;
}
void Frames::event_func_1822()
{
    // event 594_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_594_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) != (2))) goto event_594_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(2);
    }
    event_594_13_end: ;
}
void Frames::event_func_1823()
{
    // event 595_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_595_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(25))) goto event_595_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
    }
    event_595_13_end: ;
}
void Frames::event_func_1824()
{
    // event 596_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_596_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(26))) goto event_596_13_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.toggle(18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
    }
    event_596_13_end: ;
}
void Frames::event_func_1825()
{
    // event 597_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_597_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(29))) goto event_597_13_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.toggle(18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
    }
    event_597_13_end: ;
}
void Frames::event_func_1826()
{
    // event 598_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_598_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(25)) goto event_598_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(26)) goto event_598_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(29)) goto event_598_13_end;
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
    }
    event_598_13_end: ;
}
void Frames::event_func_1827()
{
    // event 599_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_599_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_599_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_599_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
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
    event_599_13_end: ;
}
void Frames::event_func_1828()
{
    // event 600_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_600_13_end;
        if (not_always_600_13 > loop_count) {
            not_always_600_13 = loop_count + 2;
            goto event_600_13_end;
        }
        not_always_600_13 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(28);
    }
    event_600_13_end: ;
}
void Frames::event_func_1829()
{
    // event 601_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_601_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_601_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_601_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_601_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_601_13_0_end;
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
        dynamic_601_13_0_end: ;
    }
    event_601_13_end: ;
}
void Frames::event_func_1830()
{
    // event 602_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_602_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_602_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_602_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_602_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -2));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_602_13_0_end;
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
        dynamic_602_13_0_end: ;
    }
    event_602_13_end: ;
}
void Frames::event_func_1831()
{
    // event 603_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_603_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) == (2))) goto event_603_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(2))) goto event_603_13_end;
        FrameObject * single_instance_603_13_0; single_instance_603_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_603_13_0 == NULL)
                    single_instance_603_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_LILAC_STRIKEU_291, -1, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        ((Active*)((Active*)single_instance_603_13_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction()+1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(2);
    }
    event_603_13_end: ;
}
void Frames::event_func_1832()
{
    // event 604_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_604_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) != (2))) goto event_604_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(2);
    }
    event_604_13_end: ;
}
void Frames::event_func_1833()
{
    // event 605_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_605_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(28))) goto event_605_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_605_13_end: ;
}
void Frames::event_func_1834()
{
    // event 606_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_606_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(28)) goto event_606_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_606_13_end: ;
}
void Frames::event_func_1835()
{
    // event 607_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1)) goto event_607_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_607_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_607_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) > (4))) goto event_607_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    
    }
    event_607_13_end: ;
}
void Frames::event_func_1836()
{
    // event 608_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_608_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 14);
    }
    event_608_13_end: ;
}
void Frames::event_func_1837()
{
    // event 609_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_609_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-0.25, 0));
    }
    event_609_13_end: ;
}
void Frames::event_func_1838()
{
    // event 610_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_610_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8)) == (1))) goto event_610_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(13)) <= (0))) goto event_610_13_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_cyclone_73+number_to_string(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.get(22)));
            if (dyn_it == (*loops).end()) goto dynamic_610_13_0_end;
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
        dynamic_610_13_0_end: ;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(13, 600);
    }
    event_610_13_end: ;
}
void Frames::event_func_1839()
{
    // event 611_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_611_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8)) == (1))) goto event_611_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(8, 1);
    }
    event_611_13_end: ;
}
void Frames::event_func_1840()
{
    // event 612_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_612_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_612_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_612_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_612_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-0.15);
    }
    event_612_13_end: ;
}
void Frames::event_func_1841()
{
    // event 613_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_613_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_613_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_613_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), 2));
    }
    event_613_13_end: ;
}
void Frames::event_func_1842()
{
    // event 614_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_614_13_end;
        if (!((shieldinstashield_359_instances.size()) == (0))) goto event_614_13_end;
        FrameObject * single_instance_614_13_0; single_instance_614_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_614_13_0 == NULL)
                    single_instance_614_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_614_13_0))->set_direction(8);
        ((Active*)((Active*)single_instance_614_13_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_614_13_0))->set_visible(false);
        FrameObject * single_instance_614_13_1; single_instance_614_13_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_614_13_1 == NULL)
                    single_instance_614_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_614_13_1))->set_x(((Active*)single_instance_614_13_1)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_614_13_1))->set_y(((Active*)single_instance_614_13_1)->get_y()-20+randrange(41));
    }
    event_614_13_end: ;
}
void Frames::event_func_1843()
{
    // event 615_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_615_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8)) >= (80))) goto event_615_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_615_13_end: ;
}
void Frames::event_func_1844()
{
    // event 616_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_616_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_616_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_616_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0)*0.7)-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
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
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_616_13_end: ;
}
void Frames::event_func_1845()
{
    // event 617_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_617_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_617_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_617_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_617_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        {
            loop_stop_voices_running = true;
            int times = int(1);
            loop_stop_voices_index = 0;
            while (loop_stop_voices_index < times) {
                loop_stop_voices_8();
                if (!loop_stop_voices_running) break;
                loop_stop_voices_index++;
            }
        }
        media.stop_sample(SOUND_LILAC_CYCLONE_2_290);
    }
    event_617_13_end: ;
}
void Frames::event_func_1846()
{
    // event 618_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_618_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_618_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_618_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_618_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_618_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (43))) goto event_618_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
    }
    event_618_13_end: ;
}
void Frames::event_func_1847()
{
    // event 619_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_619_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_619_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_619_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_619_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
    }
    event_619_13_end: ;
}
void Frames::event_func_1848()
{
    // event 620_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1)) goto event_620_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) == (0))) goto event_620_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(11)) > (0))) goto event_620_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(11, 1);
    }
    event_620_13_end: ;
}
void Frames::event_func_1849()
{
    // event 621_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_621_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!guipowercard_457_instances.has_selection()) goto event_621_13_end;
        spread_value(guipowercard_457_instances, 0, 1);
    }
    event_621_13_end: ;
}
void Frames::event_func_1850()
{
    // event 622_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_622_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) >= (5))) goto event_622_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
    }
    event_622_13_end: ;
}
void Frames::event_func_1851()
{
    // event 623_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_623_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_623_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)) < (5))) goto event_623_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(2, 1);
    }
    event_623_13_end: ;
}
void Frames::event_func_1852()
{
    // event 624_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_624_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!guipowercard_457_instances.has_selection()) goto event_624_13_end;
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_624_13_end: ;
}
void Frames::event_func_1853()
{
    // event 625_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_625_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!guipowercard_457_instances.has_selection()) goto event_625_13_end;
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_625_13_end: ;
}
void Frames::event_func_1854()
{
    // event 626_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_626_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!guipowercard_457_instances.has_selection()) goto event_626_13_end;
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_626_13_end: ;
}
void Frames::event_func_1855()
{
    // event 627_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1)) goto event_627_13_end;
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (120))) { it.deselect(); continue; }
        }
        if (!guipowercard_457_instances.has_selection()) goto event_627_13_end;
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, randrange(60)-100);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_627_13_end: ;
}
void Frames::event_func_1856()
{
    // event 628_13
    bool or_result_628_13 = false;
    bool or_temp_result_628_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto or_event_628_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_628_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (23))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_628_13_0_end;
        or_result_628_13 = true;
        or_temp_result_628_13_0 = true;
    }
    or_event_628_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_628_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 628_13
    bool or_temp_result_628_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto or_event_628_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_628_13_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) >= (3))) goto or_event_628_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (24))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_628_13_1_end;
        or_result_628_13 = true;
        or_temp_result_628_13_1 = true;
        or_event_628_13_1_end: ;
        if (or_temp_result_628_13_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_628_13) goto or_final_or_event_628_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_628_13_0 || or_temp_result_628_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_628_13_0 || or_temp_result_628_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    or_final_or_event_628_13_1_end: ;
}
void Frames::event_func_1857()
{
    // event 629_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_629_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_629_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_629_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_629_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_629_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_629_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_629_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (24))) goto event_629_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_629_13_end: ;
}
void Frames::event_func_1858()
{
    // event 630_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_630_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_630_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_630_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_630_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_630_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_630_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_630_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (24))) goto event_630_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
    }
    event_630_13_end: ;
}
void Frames::event_func_1859()
{
    // event 631_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_631_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (2))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_631_13_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_631_13_end: ;
}
void Frames::event_func_1860()
{
    // event 632_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_632_13_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*0.25))) == (0))) goto event_632_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)*10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_632_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(2, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(2)-1, 0));
    }
    event_632_13_end: ;
}
void Frames::event_func_1861()
{
    // event 633_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_633_13_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*0.25))) == (0))) goto event_633_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_633_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_633_13_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)*10))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_633_13_end;
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        FrameObject * single_instance_633_13_0; single_instance_633_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_633_13_0 == NULL)
                    single_instance_633_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_633_13_0))->alterables->values.set(0, ((Active*)single_instance_633_13_0)->get_x());
        ((Active*)((Active*)single_instance_633_13_0))->alterables->values.set(1, ((Active*)single_instance_633_13_0)->get_y());
        ((Active*)((Active*)single_instance_633_13_0))->alterables->values.set(2, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*2-((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(0)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_633_13_0))->alterables->values.set(3, sin_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*2-((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(0)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*45+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*45)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
        }
        ((Active*)((Active*)single_instance_633_13_0))->set_layer(((Active*)get_single(playerskinspade_419_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_633_13_0))->alterables->values.set(8, ((Active*)single_instance_633_13_0)->alterables->values.get(8)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->flags.get(1)*2);
    }
    event_633_13_end: ;
}
void Frames::event_func_1862()
{
    // event 634_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_634_13_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*0.25))) == (0))) goto event_634_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_634_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) != (1))) goto event_634_13_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)*10))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_634_13_end;
        FrameObject * single_instance_634_13_0; single_instance_634_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_634_13_0 == NULL)
                    single_instance_634_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_634_13_0))->alterables->values.set(0, ((Active*)single_instance_634_13_0)->get_x());
        ((Active*)((Active*)single_instance_634_13_0))->alterables->values.set(1, ((Active*)single_instance_634_13_0)->get_y());
        ((Active*)((Active*)single_instance_634_13_0))->alterables->values.set(2, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*-2+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(0)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*30-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*30)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*-0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        ((Active*)((Active*)single_instance_634_13_0))->alterables->values.set(3, sin_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(1)*-2+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->values.get(0)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*30-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*30)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*-0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
        }
        ((Active*)((Active*)single_instance_634_13_0))->set_layer(((Active*)get_single(playerskinspade_419_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_634_13_0))->alterables->values.set(8, ((Active*)single_instance_634_13_0)->alterables->values.get(8)+((Active*)get_single(playerskinspade_419_instances, default_active_instance))->alterables->flags.get(1)*2);
    }
    event_634_13_end: ;
}
void Frames::event_func_1863()
{
    // event 635_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_635_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(25))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_635_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_635_13_end: ;
}
void Frames::event_func_1864()
{
    // event 636_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_636_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(26))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_636_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.toggle(18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_636_13_end: ;
}
void Frames::event_func_1865()
{
    // event 637_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_637_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(28))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_637_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.toggle(18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_637_13_end: ;
}
void Frames::event_func_1866()
{
    // event 638_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_638_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_638_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
            group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_638_13_end: ;
}
void Frames::event_func_1867()
{
    // event 639_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1)) goto event_639_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_639_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_639_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
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
    event_639_13_end: ;
}
void Frames::event_func_1868()
{
    // event 640_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_640_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (20))) goto event_640_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
    }
    event_640_13_end: ;
}
void Frames::event_func_1869()
{
    // event 641_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_641_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (20))) goto event_641_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 22);
    }
    event_641_13_end: ;
}
void Frames::event_func_1870()
{
    // event 642_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_642_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (20))) goto event_642_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_642_13_end: ;
}
void Frames::event_func_1871()
{
    // event 643_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_643_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (20))) goto event_643_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-2)+2+(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16))-(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)));
    }
    event_643_13_end: ;
}
void Frames::event_func_1872()
{
    // event 644_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_644_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (20))) goto event_644_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) > (0))) goto event_644_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 2-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)*((1-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0))+1)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)*((1-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0))+1));
    }
    event_644_13_end: ;
}
void Frames::event_func_1873()
{
    // event 645_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_645_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (20))) goto event_645_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) > (0))) goto event_645_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 6+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)*((1-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1))+1)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)*((1-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1))+1));
    }
    event_645_13_end: ;
}
void Frames::event_func_1874()
{
    // event 646_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_646_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (20))) goto event_646_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
        FrameObject * single_instance_646_13_0; single_instance_646_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -12), parent->layer);
                if (single_instance_646_13_0 == NULL)
                    single_instance_646_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_646_13_0))->set_scale(0.75);
        ((Active*)((Active*)single_instance_646_13_0))->force_speed(50);
        {
            ((Active*)single_instance_646_13_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_646_13_end: ;
}
void Frames::event_func_1875()
{
    // event 647_13
    bool or_result_647_13 = false;
    bool or_temp_result_647_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_647_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_647_13_0_end;
        or_result_647_13 = true;
        or_temp_result_647_13_0 = true;
    }
    or_event_647_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_647_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 647_13
    bool or_temp_result_647_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_647_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (8))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_647_13_1_end;
        or_result_647_13 = true;
        or_temp_result_647_13_1 = true;
        or_event_647_13_1_end: ;
        if (or_temp_result_647_13_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_647_13) goto or_final_or_event_647_13_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_647_13_0 || or_temp_result_647_13_1) {
            playerothers_123_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
            ((Active*)*it)->alterables->values.set(1, 16);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(25, 1);
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    or_final_or_event_647_13_1_end: ;
}
void Frames::event_func_1876()
{
    // event 648_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_648_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_648_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (1))) goto event_648_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_648_13_end: ;
}
void Frames::event_func_1877()
{
    // event 649_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_649_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_649_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (2))) goto event_649_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
    }
    event_649_13_end: ;
}
void Frames::event_func_1878()
{
    // event 650_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_650_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_650_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (3))) goto event_650_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_650_13_end: ;
}
void Frames::event_func_1879()
{
    // event 651_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_651_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_651_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (4))) goto event_651_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_651_13_end: ;
}
void Frames::event_func_1880()
{
    // event 652_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_652_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_652_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (5))) goto event_652_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_652_13_end: ;
}
void Frames::event_func_1881()
{
    // event 653_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_653_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_653_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (6))) goto event_653_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(25, 1);
    }
    event_653_13_end: ;
}
void Frames::event_func_1882()
{
    // event 654_13
    bool or_result_654_13 = false;
    bool or_temp_result_654_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_654_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (7))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_654_13_0_end;
        or_result_654_13 = true;
        or_temp_result_654_13_0 = true;
    }
    or_event_654_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_654_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 654_13
    bool or_temp_result_654_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_654_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_654_13_1_end;
        or_result_654_13 = true;
        or_temp_result_654_13_1 = true;
        or_event_654_13_1_end: ;
        if (or_temp_result_654_13_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_654_13) goto or_final_or_event_654_13_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_654_13_0 || or_temp_result_654_13_1) {
            playerothers_123_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
            ((Active*)*it)->alterables->values.set(1, 10);
            ((Active*)*it)->alterables->values.set(6, 10);
            ((Active*)*it)->alterables->values.set(25, 1);
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    or_final_or_event_654_13_1_end: ;
}
void Frames::event_func_1883()
{
    // event 655_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_655_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_655_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)%math_helper%2) == (0))) goto event_655_13_end;
        FrameObject * single_instance_655_13_0; single_instance_655_13_0 = NULL;
        // select single: true false false
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_655_13_0 == NULL)
                    single_instance_655_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_655_13_0))->set_direction(((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_direction());
        ((Active*)single_instance_655_13_0)->move_back(((Active*)get_single(playerskinspade_419_instances)));
    }
    event_655_13_end: ;
}
void Frames::event_func_1884()
{
    // event 656_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_656_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_656_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
    }
    event_656_13_end: ;
}
void Frames::event_func_1885()
{
    // event 657_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto event_657_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_657_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) > (20))) goto event_657_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) < (2))) goto event_657_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_657_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.add(14, 1);
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_657_13_end: ;
}
void Frames::event_func_1886()
{
    // event 658_13
    bool or_result_658_13 = false;
    bool or_temp_result_658_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_658_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (28))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_658_13_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_658_13_0_end;
        or_result_658_13 = true;
        or_temp_result_658_13_0 = true;
    }
    or_event_658_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_658_13_0) {
        playerothers_123_instances.save_selection();
        playerskinspade_419_instances.save_selection();
    }
    // event 658_13
    bool or_temp_result_658_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_658_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) < (4))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_658_13_1_end;
        playersensortopbig_395_instances.clear_selection();
        for (ObjectIterator it(playersensortopbig_395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensortopbig_395_instances.has_selection()) goto or_event_658_13_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_658_13_1_end;
        or_result_658_13 = true;
        or_temp_result_658_13_1 = true;
        or_event_658_13_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_658_13_1) {
            playerskinspade_419_instances.save_selection();
            playerothers_123_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_658_13) goto or_final_or_event_658_13_1_end;
        playerskinspade_419_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        if (or_temp_result_658_13_0 || or_temp_result_658_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_658_13_0 || or_temp_result_658_13_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_658_13_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -12);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(-3, get_min(((Active*)*it)->alterables->values.get(1), 3)));
            ((Active*)*it)->alterables->values.set(6, get_max(-3, get_min(((Active*)*it)->alterables->values.get(6), 3)));
        }
    }
    or_final_or_event_658_13_1_end: ;
}
void Frames::event_func_1887()
{
    // event 659_13
    bool or_result_659_13 = false;
    bool or_temp_result_659_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_659_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (28))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_659_13_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_659_13_0_end;
        or_result_659_13 = true;
        or_temp_result_659_13_0 = true;
    }
    or_event_659_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_659_13_0) {
        playerothers_123_instances.save_selection();
        playerskinspade_419_instances.save_selection();
    }
    // event 659_13
    bool or_temp_result_659_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1)) goto or_event_659_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) < (4))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_659_13_1_end;
        playersensortopbig_395_instances.clear_selection();
        for (ObjectIterator it(playersensortopbig_395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensortopbig_395_instances.has_selection()) goto or_event_659_13_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_659_13_1_end;
        or_result_659_13 = true;
        or_temp_result_659_13_1 = true;
        or_event_659_13_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_659_13_1) {
            playerskinspade_419_instances.save_selection();
            playerothers_123_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_659_13) goto or_final_or_event_659_13_1_end;
        playerskinspade_419_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        if (or_temp_result_659_13_0 || or_temp_result_659_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_659_13_0 || or_temp_result_659_13_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_659_13_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(1, get_max(-5, get_min(((Active*)*it)->alterables->values.get(1), 5)));
            ((Active*)*it)->alterables->values.set(6, get_max(-3, get_min(((Active*)*it)->alterables->values.get(6), 3)));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 3);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->restore_frame();
        }
    }
    or_final_or_event_659_13_1_end: ;
}
void Frames::event_func_1888()
{
    // event 660_13
    bool or_result_660_13 = false;
    bool or_temp_result_660_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_660_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_660_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (90))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_660_13_0_end;
        or_result_660_13 = true;
        or_temp_result_660_13_0 = true;
    }
    or_event_660_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_660_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 660_13
    bool or_temp_result_660_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_660_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_660_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (270))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_660_13_1_end;
        or_result_660_13 = true;
        or_temp_result_660_13_1 = true;
        or_event_660_13_1_end: ;
        if (or_temp_result_660_13_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_660_13) goto or_final_or_event_660_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_660_13_0 || or_temp_result_660_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_660_13_0 || or_temp_result_660_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -7);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 0);
        }
    }
    or_final_or_event_660_13_1_end: ;
}
void Frames::event_func_1889()
{
    // event 661_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_661_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (44))) goto event_661_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_661_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) >= (90))) goto event_661_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) <= (270))) goto event_661_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
    }
    event_661_13_end: ;
}
void Frames::event_func_1890()
{
    // event 662_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_662_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (44))) goto event_662_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) >= (90))) goto event_662_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) <= (270))) goto event_662_13_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(2)));
            if (dyn_it == (*loops).end()) goto dynamic_662_13_0_end;
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
        dynamic_662_13_0_end: ;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 44);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, get_max(((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14), 1));
    }
    event_662_13_end: ;
}
void Frames::event_func_1891()
{
    // event 663_13
    bool or_result_663_13 = false;
    bool or_temp_result_663_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_663_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_663_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (90))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_663_13_0_end;
        or_result_663_13 = true;
        or_temp_result_663_13_0 = true;
    }
    or_event_663_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_663_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 663_13
    bool or_temp_result_663_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_663_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_663_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (270))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_663_13_1_end;
        or_result_663_13 = true;
        or_temp_result_663_13_1 = true;
        or_event_663_13_1_end: ;
        if (or_temp_result_663_13_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_663_13) goto or_final_or_event_663_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_663_13_0 || or_temp_result_663_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_663_13_0 || or_temp_result_663_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(2)));
            if (dyn_it == (*loops).end()) goto dynamic_663_13_0_end;
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
        dynamic_663_13_0_end: ;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 44);
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, get_max(((Active*)*it)->alterables->values.get(14), 1));
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(-5, ((Active*)*it)->alterables->values.get(6)));
        }
    }
    or_final_or_event_663_13_1_end: ;
}
void Frames::event_func_1892()
{
    // event 664_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_664_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (3))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_664_13_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_664_13_end: ;
}
void Frames::event_func_1893()
{
    // event 665_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_665_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_665_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_665_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_665_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.5, 0));
    }
    event_665_13_end: ;
}
void Frames::event_func_1894()
{
    // event 666_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_666_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_666_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_666_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_666_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-0.5, 0));
    }
    event_666_13_end: ;
}
void Frames::event_func_1895()
{
    // event 667_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_667_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_667_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_667_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -3));
    }
    event_667_13_end: ;
}
void Frames::event_func_1896()
{
    // event 668_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto event_668_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_668_13_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_668_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 3));
    }
    event_668_13_end: ;
}
void Frames::event_func_1897()
{
    // event 669_13
    bool or_result_669_13 = false;
    bool or_temp_result_669_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_669_13_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_669_13_0_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_669_13_0_end;
        or_result_669_13 = true;
        or_temp_result_669_13_0 = true;
    }
    or_event_669_13_0_end: ;
    guienergy_124_instances.clear_saved_selection();
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_669_13_0) {
        guienergy_124_instances.save_selection();
        playerskinspade_419_instances.save_selection();
    }
    // event 669_13
    bool or_temp_result_669_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_669_13_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_669_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_669_13_1_end;
        or_result_669_13 = true;
        or_temp_result_669_13_1 = true;
        or_event_669_13_1_end: ;
        if (or_temp_result_669_13_1) {
            guienergy_124_instances.save_selection();
            playerskinspade_419_instances.save_selection();
        }
        if (!or_result_669_13) goto or_final_or_event_669_13_1_end;
        playerskinspade_419_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        if (or_temp_result_669_13_0 || or_temp_result_669_13_1) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_669_13_0 || or_temp_result_669_13_1) {
            playerskinspade_419_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_669_13_0; single_instance_669_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_669_13_0 == NULL)
                    single_instance_669_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_669_13_0))->alterables->values.set(0, ((Active*)single_instance_669_13_0)->get_x());
        ((Active*)((Active*)single_instance_669_13_0))->alterables->values.set(1, ((Active*)single_instance_669_13_0)->get_y());
        ((Active*)((Active*)single_instance_669_13_0))->alterables->values.set(2, 8*((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_669_13_0))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_669_13_0))->set_layer(((Active*)get_single(playerskinspade_419_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_669_13_0))->alterables->values.set(6, 1);
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 0.25);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6), 0));
        }
    }
    or_final_or_event_669_13_1_end: ;
}
void Frames::event_func_1898()
{
    // event 670_13
    bool or_result_670_13 = false;
    bool or_temp_result_670_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_670_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_670_13_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (7))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_670_13_0_end;
        or_result_670_13 = true;
        or_temp_result_670_13_0 = true;
    }
    or_event_670_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_670_13_0) {
        playerinput_19_instances.save_selection();
        playerskinspade_419_instances.save_selection();
    }
    // event 670_13
    bool or_temp_result_670_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_1 && group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1)) goto or_event_670_13_1_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_670_13_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (7))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_670_13_1_end;
        or_result_670_13 = true;
        or_temp_result_670_13_1 = true;
        or_event_670_13_1_end: ;
        guienergy_124_instances.clear_saved_selection();
        if (or_temp_result_670_13_1) {
            guienergy_124_instances.save_selection();
            playerskinspade_419_instances.save_selection();
        }
        if (!or_result_670_13) goto or_final_or_event_670_13_1_end;
        playerskinspade_419_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_670_13_1) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_670_13_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_670_13_0 || or_temp_result_670_13_1) {
            playerskinspade_419_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 40);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    or_final_or_event_670_13_1_end: ;
}
void Frames::event_func_1899()
{
    // event 671_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_671_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_671_13_end;
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_671_13_end;
            group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    
        media.unlock(10-1);
        media.unlock(11-1);
        media.stop_channel(10-1);
        media.stop_channel(11-1);
    }
    event_671_13_end: ;
}
void Frames::event_func_1900()
{
    // event 672_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_672_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_672_13_end;
        if (group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto event_672_13_end;
        if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) {
            group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = true;
        }
        media.lock(10-1);
        media.lock(11-1);
        media.play_id(SOUND_CAROL_BIKEIDLE_2_159, 10-1, 0);
        media.play_id(SOUND_CAROL_BIKEMOVE2_160, 11-1, 0);
    }
    event_672_13_end: ;
}
void Frames::event_func_1901()
{
    // event 673_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_673_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_673_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
    }
    event_673_13_end: ;
}
void Frames::event_func_1902()
{
    // event 674_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_674_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_674_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(18, 1);
        }
    }
    event_674_13_end: ;
}
void Frames::event_func_1903()
{
    // event 675_13
    bool or_result_675_13 = false;
    bool or_temp_result_675_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto or_event_675_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_675_13_0_end;
        if (not_always_675_13 > loop_count) {
            not_always_675_13 = loop_count + 2;
            goto or_event_675_13_0_end;
        }
        not_always_675_13 = loop_count + 2;
        or_result_675_13 = true;
        or_temp_result_675_13_0 = true;
    }
    or_event_675_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_675_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 675_13
    bool or_temp_result_675_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto or_event_675_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_675_13_1_end;
        if (not_always_675_13 > loop_count) {
            not_always_675_13 = loop_count + 2;
            goto or_event_675_13_1_end;
        }
        not_always_675_13 = loop_count + 2;
        or_result_675_13 = true;
        or_temp_result_675_13_1 = true;
        or_event_675_13_1_end: ;
        if (or_temp_result_675_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_675_13) goto or_final_or_event_675_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_675_13_0 || or_temp_result_675_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_675_13_1_end: ;
}
void Frames::event_func_1904()
{
    // event 676_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_676_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_676_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_676_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_676_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_676_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 12);
    }
    event_676_13_end: ;
}
void Frames::event_func_1905()
{
    // event 677_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_677_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_677_13_end;
        if (!check_not_overlap(objectbike_322_instances, playersensorbottombig_397_instances)) goto event_677_13_end;
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_677_13_end: ;
}
void Frames::event_func_1906()
{
    // event 678_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_678_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_678_13_end;
        playersensorbottombig_397_instances.clear_selection();
        objectbike_322_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectbike_322_instances)) goto event_678_13_end;
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_678_13_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(objectbike_322_instances, default_active_instance))->get_x()-24))) goto event_678_13_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(objectbike_322_instances, default_active_instance))->get_x()+24))) goto event_678_13_end;
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, ((Active*)get_single(objectbike_322_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objectbike_322_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objectbike_322_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, ((Active*)get_single(objectbike_322_instances, default_active_instance))->get_angle());
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_single(objectbike_322_instances, default_active_instance))->get_angle());
        global_values->set(1, 3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 12);
    }
    event_678_13_end: ;
}
void Frames::event_func_1907()
{
    // event 679_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_679_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_679_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_679_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_679_13_0; single_instance_679_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_679_13_0 == NULL)
                    single_instance_679_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_679_13_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_679_13_0))->set_direction(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_679_13_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        global_values->set(1, 2);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_679_13_0))->alterables->flags.enable(1);
    }
    event_679_13_end: ;
}
void Frames::event_func_1908()
{
    // event 680_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_680_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_680_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (9))) goto event_680_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (10))) goto event_680_13_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_680_13_0; single_instance_680_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_680_13_0 == NULL)
                    single_instance_680_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_680_13_0))->alterables->flags.enable(6);
    }
    event_680_13_end: ;
}
void Frames::event_func_1909()
{
    // event 682_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_682_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_682_13_end;
        FrameObject * single_instance_682_13_0; single_instance_682_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_682_13_0 == NULL)
                    single_instance_682_13_0 = new_obj;
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
                loop_spawndebris_13();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_682_13_end: ;
}
void Frames::event_func_1910()
{
    // event 684_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_684_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_684_13_end;
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_684_13_end: ;
}
void Frames::event_func_1911()
{
    // event 685_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_685_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_685_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_685_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_685_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.2, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))));
        }
    }
    event_685_13_end: ;
}
void Frames::event_func_1912()
{
    // event 686_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_686_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_686_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_686_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_686_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.2, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))));
        }
    }
    event_686_13_end: ;
}
void Frames::event_func_1913()
{
    // event 687_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_687_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_687_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 8)))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_687_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.1, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 8)));
        }
    }
    event_687_13_end: ;
}
void Frames::event_func_1914()
{
    // event 688_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_688_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_688_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 8)))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_688_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.2, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 8)));
        }
    }
    event_688_13_end: ;
}
void Frames::event_func_1915()
{
    // event 689_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_689_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (47))) goto event_689_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_689_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.2, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))));
        }
    }
    event_689_13_end: ;
}
void Frames::event_func_1916()
{
    // event 690_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_690_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (47))) goto event_690_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_690_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.2, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))));
        }
    }
    event_690_13_end: ;
}
void Frames::event_func_1917()
{
    // event 691_13
    bool or_result_691_13 = false;
    bool or_temp_result_691_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_691_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (44))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_691_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_691_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_691_13_0_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_691_13_0_end;
        or_result_691_13 = true;
        or_temp_result_691_13_0 = true;
    }
    or_event_691_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskincarolbike_382_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_691_13_0) {
        playerinput_19_instances.save_selection();
        playerskincarolbike_382_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 691_13
    bool or_temp_result_691_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_691_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (44))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_691_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_691_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_691_13_1_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_691_13_1_end;
        or_result_691_13 = true;
        or_temp_result_691_13_1 = true;
        or_event_691_13_1_end: ;
        if (or_temp_result_691_13_1) {
            playerinput_19_instances.save_selection();
            playerskincarolbike_382_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_691_13) goto or_final_or_event_691_13_1_end;
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerskincarolbike_382_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_691_13_0 || or_temp_result_691_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_691_13_0 || or_temp_result_691_13_1) {
            playerskincarolbike_382_instances.restore_selection();
        }
        if (or_temp_result_691_13_0 || or_temp_result_691_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_691_13_0 || or_temp_result_691_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 30);
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        FrameObject * single_instance_691_13_0; single_instance_691_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_691_13_0 == NULL)
                    single_instance_691_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_691_13_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_691_13_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1), 10));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
        media.play_id(SOUND_CAROL_BIKEBOOST_2_389, -1, 1);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_691_13_1_end: ;
}
