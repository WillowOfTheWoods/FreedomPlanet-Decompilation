#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16607()
{
    // event 9_75
    {
        if (!(group_countdown_1)) goto event_9_75_end;
        if (!((((Active*)get_instance(marker_3885_instances))->alterables->values.get(0)) == (0))) goto event_9_75_end;
        marker_3885_instances.clear_selection();
        countdowncrystal_3884_instances.clear_selection();
        if (!check_overlap(marker_3885_instances, countdowncrystal_3884_instances)) goto event_9_75_end;
        ((Active*)get_instance(marker_3885_instances))->alterables->values.set(0, 120);
        ((Active*)get_instance(marker_3885_instances))->alterables->flags.enable(0);
    }
    event_9_75_end: ;
}
void Frames::event_func_16608()
{
    // event 10_75
    {
        if (!(group_countdown_1)) goto event_10_75_end;
        if (!(((Active*)get_instance(marker_3885_instances))->alterables->flags.is_on(0))) goto event_10_75_end;
        {
            double check_value = ((Active*)get_instance(marker_3885_instances, default_active_instance))->alterables->values.get(1)+100;
            countdowncrystal_3884_instances.clear_selection();
            for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(2) < check_value)) it.deselect();
            }
            marker_3885_instances.clear_selection();
            for (ObjectIterator it(marker_3885_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(2) < check_value)) it.deselect();
            }
        }
        {
            double check_value = 0;
            for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
            for (ObjectIterator it(marker_3885_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)get_single(marker_3885_instances, it.current_index, default_active_instance))->alterables->values.get(1)+110);
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_10_75_end: ;
}
void Frames::event_func_16609()
{
    // event 11_75
    {
        if (!(group_countdown_1)) goto event_11_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!countdowncrystal_3884_instances.has_selection()) goto event_11_75_end;
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-8, 0));
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_11_75_end: ;
}
void Frames::event_func_16610()
{
    // event 12_75
    {
        if (!(group_countdown_1)) goto event_12_75_end;
        if (!((((Active*)get_instance(marker_3885_instances))->alterables->values.get(0)) > (1))) goto event_12_75_end;
        ((Active*)get_instance(marker_3885_instances))->alterables->values.sub(0, 1);
    }
    event_12_75_end: ;
}
void Frames::event_func_16611()
{
    // event 13_75
    {
        if (!(group_countdown_1)) goto event_13_75_end;
        if (!((((Active*)get_instance(marker_3885_instances))->alterables->values.get(0)) == (1))) goto event_13_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!countdowncrystal_3884_instances.has_selection()) goto event_13_75_end;
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_13_75_end: ;
}
void Frames::event_func_16612()
{
    // event 14_75
    {
        if (!(group_countdown_1)) goto event_14_75_end;
        if (!((((Active*)get_instance(marker_3885_instances))->alterables->values.get(0)) == (1))) goto event_14_75_end;
        ((Active*)get_instance(marker_3885_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(marker_3885_instances))->alterables->values.add(1, 80);
    }
    event_14_75_end: ;
}
void Frames::event_func_16613()
{
    // event 15_75
    {
        if (!(group_countdown_1)) goto event_15_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!countdowncrystal_3884_instances.has_selection()) goto event_15_75_end;
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+8, 128));
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_15_75_end: ;
}
void Frames::event_func_16614()
{
    // event 16_75
    {
        if (!(group_countdown_1)) goto event_16_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!countdowncrystal_3884_instances.has_selection()) goto event_16_75_end;
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_16_75_end: ;
}
void Frames::event_func_16615()
{
    // event 17_75
    {
        if (!(group_countdown_1)) goto event_17_75_end;
        if (!((((Active*)get_instance(marker_3885_instances))->alterables->values.get(1)) > (500))) goto event_17_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(15+(((Active*)get_instance(marker_3885_instances))->alterables->values.get(1)-500)*0.1);
        }
    }
    event_17_75_end: ;
}
void Frames::event_func_16616()
{
    // event 18_75
    {
        if (!(group_countdown_1)) goto event_18_75_end;
        if (!((countdowncrystal_3884_instances.size()) < (12))) goto event_18_75_end;
        every_18_75 += manager.dt;
        if (every_18_75 < 0.05) goto event_18_75_end;
        every_18_75 -= 0.05;
        media.set_channel_volume(32-1, get_max(media.get_channel_volume(-1 +32)-1, 0));
    }
    event_18_75_end: ;
}
void Frames::event_func_16617()
{
    // event 19_75
    {
        if (!(group_countdown_1)) goto event_19_75_end;
        if (!((countdowncrystal_3884_instances.size()) == (0))) goto event_19_75_end;
        if (!((global_values->get(1)) == (1))) goto event_19_75_end;
        if (not_always_19_75 > loop_count) {
            not_always_19_75 = loop_count + 2;
            goto event_19_75_end;
        }
        not_always_19_75 = loop_count + 2;
        media.play(str_voices_sp_spade_kiddingme_ogg_273, 30-1);
    }
    event_19_75_end: ;
}
void Frames::event_func_16618()
{
    // event 20_75
    {
        if (!(group_countdown_1)) goto event_20_75_end;
        if (!((countdowncrystal_3884_instances.size()) == (0))) goto event_20_75_end;
        if (!((global_values->get(1)) == (2))) goto event_20_75_end;
        if (not_always_20_75 > loop_count) {
            not_always_20_75 = loop_count + 2;
            goto event_20_75_end;
        }
        not_always_20_75 = loop_count + 2;
        media.play(str_voices_ca_carol_quietno_ogg_274, 30-1);
    }
    event_20_75_end: ;
}
void Frames::event_func_16619()
{
    // event 21_75
    {
        if (!(group_countdown_1)) goto event_21_75_end;
        if (!((countdowncrystal_3884_instances.size()) == (0))) goto event_21_75_end;
            group_continue_1 = false;
    
        if (!group_game_over_1) {
            group_game_over_1 = true;
        }
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_21_75_end: ;
}
void Frames::event_func_16620()
{
    // event 22_75
    {
        if (!(group_game_over_1)) goto event_22_75_end;
        every_22_75 += manager.dt;
        if (every_22_75 < 0.05) goto event_22_75_end;
        every_22_75 -= 0.05;
        media.set_channel_volume(32-1, get_max(media.get_channel_volume(-1 +32)-1, 0));
    }
    event_22_75_end: ;
}
void Frames::event_func_16621()
{
    // event 23_75
    {
        if (!(group_game_over_1)) goto event_23_75_end;
        set_display_center(-1, frame_top()+122);
        ((Active*)get_instance(floorlight_3883_instances))->set_y(((Active*)get_instance(floorlight_3883_instances))->get_y()+2);
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_23_75_end: ;
}
void Frames::event_func_16622()
{
    // event 24_75
    {
        if (!(group_game_over_1)) goto event_24_75_end;
        if (!((frame_bottom()) > (320))) goto event_24_75_end;
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+1);
        }
        {
            ((Active*)get_instance(floorlight_3883_instances))->blend_color.set_semi_transparency(((Active*)get_instance(floorlight_3883_instances))->blend_color.get_semi_transparency()+1);
        }
    }
    event_24_75_end: ;
}
void Frames::event_func_16623()
{
    // event 25_75
    {
        if (!(group_game_over_1)) goto event_25_75_end;
        if (!((frame_bottom()) > (580))) goto event_25_75_end;
        set_lives(global_values->get(8));
        restart();
    }
    event_25_75_end: ;
}
void Frames::event_func_16624()
{
    // event 26_75
    {
        if (!(group_get_back_up_1)) goto event_26_75_end;
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!countdowncrystal_3884_instances.has_selection()) goto event_26_75_end;
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_26_75_end: ;
}
void Frames::event_func_16625()
{
    // event 27_75
    {
        if (!(group_get_back_up_1)) goto event_27_75_end;
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
        }
        if (!fallencharacter_3882_instances.has_selection()) goto event_27_75_end;
        if (once_condition_27_75) goto event_27_75_end;
        once_condition_27_75 = true;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_continue_275+number_to_string(randrange(2)));
            if (dyn_it == (*loops).end()) goto dynamic_27_75_0_end;
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
        dynamic_27_75_0_end: ;
    }
    event_27_75_end: ;
}
void Frames::event_func_16626()
{
    // event 36_75
    {
        if (!(group_get_back_up_1)) goto event_36_75_end;
        if (!((global_values->get(1)) == (0))) goto event_36_75_end;
        ((Active*)get_instance(playerskincarol_445_instances))->set_visible(false);
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_visible(false);
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(true);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(true);
        ((Active*)get_instance(playerskinspade_419_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmillatail_381_instances))->set_visible(false);
    }
    event_36_75_end: ;
}
void Frames::event_func_16627()
{
    // event 37_75
    {
        if (!(group_get_back_up_1)) goto event_37_75_end;
        if (!((global_values->get(1)) == (1))) goto event_37_75_end;
        ((Active*)get_instance(playerskincarol_445_instances))->set_visible(false);
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_visible(false);
        ((Active*)get_instance(playerskinspade_419_instances))->set_visible(true);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmillatail_381_instances))->set_visible(false);
    }
    event_37_75_end: ;
}
void Frames::event_func_16628()
{
    // event 38_75
    {
        if (!(group_get_back_up_1)) goto event_38_75_end;
        if (!((global_values->get(1)) == (2))) goto event_38_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        ((Active*)get_instance(playerskincarol_445_instances))->set_visible(true);
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_visible(true);
        ((Active*)get_instance(playerskinspade_419_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmillatail_381_instances))->set_visible(false);
    }
    event_38_75_end: ;
}
void Frames::event_func_16629()
{
    // event 39_75
    {
        if (!(group_get_back_up_1)) goto event_39_75_end;
        if (!((global_values->get(1)) == (4))) goto event_39_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        ((Active*)get_instance(playerskinspade_419_instances))->set_visible(false);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_visible(true);
        ((Active*)get_instance(playerskinmillatail_381_instances))->set_visible(true);
        ((Active*)get_instance(playerskincarol_445_instances))->set_visible(false);
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_visible(false);
    }
    event_39_75_end: ;
}
void Frames::event_func_16630()
{
    // event 40_75
    {
        if (!(group_get_back_up_1)) goto event_40_75_end;
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(11))) { it.deselect(); continue; }
        }
        if (!fallencharacter_3882_instances.has_selection()) goto event_40_75_end;
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_single(fallencharacter_3882_instances, default_active_instance))->get_x()+8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(1);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(1);
        ((Active*)get_instance(playerskincaroltail_444_instances))->force_animation(1);
        ((Active*)get_instance(playerskincarol_445_instances))->set_x(((Active*)get_single(fallencharacter_3882_instances, default_active_instance))->get_x()+8);
        ((Active*)get_instance(playerskincarol_445_instances))->force_animation(1);
        ((Active*)get_instance(playerskinspade_419_instances))->set_x(((Active*)get_single(fallencharacter_3882_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playerskinspade_419_instances))->force_animation(1);
        ((Active*)get_instance(playerskinmillatail_381_instances))->force_animation(1);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_x(((Active*)get_single(fallencharacter_3882_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playerskinmilla_446_instances))->force_animation(1);
    }
    event_40_75_end: ;
}
void Frames::event_func_16631()
{
    // event 41_75
    {
        if (!(group_get_back_up_1)) goto event_41_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (0))) goto event_41_75_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_x()) > (0))) goto event_41_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, get_min(((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)+0.25, 7));
        ((Active*)get_instance(floorlight_3883_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x());
        ((Active*)get_instance(playerskincarol_445_instances))->set_x(((Active*)get_instance(playerskincarol_445_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinspade_419_instances))->set_x(((Active*)get_instance(playerskinspade_419_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinmilla_446_instances))->set_x(((Active*)get_instance(playerskinmilla_446_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
    }
    event_41_75_end: ;
}
void Frames::event_func_16632()
{
    // event 42_75
    {
        if (!(group_get_back_up_1)) goto event_42_75_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x());
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y());
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_x(((Active*)get_instance(playerskincarol_445_instances))->get_x());
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_y(((Active*)get_instance(playerskincarol_445_instances))->get_y());
    }
    event_42_75_end: ;
}
void Frames::event_func_16633()
{
    // event 43_75
    {
        if (!(group_get_back_up_1)) goto event_43_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)) > (6))) goto event_43_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(2);
        ((Active*)get_instance(playerskinspade_419_instances))->force_animation(2);
        ((Active*)get_instance(playerskinmilla_446_instances))->force_animation(2);
        ((Active*)get_instance(playerskincarol_445_instances))->force_animation(2);
    }
    event_43_75_end: ;
}
void Frames::event_func_16634()
{
    // event 44_75
    {
        if (!(group_get_back_up_1)) goto event_44_75_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->test_animation(1))) goto event_44_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskincaroltail_444_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskincarol_445_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinspade_419_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinmilla_446_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinmillatail_381_instances))->force_speed(25+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
    }
    event_44_75_end: ;
}
void Frames::event_func_16635()
{
    // event 45_75
    {
        if (!(group_get_back_up_1)) goto event_45_75_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->test_animation(2))) goto event_45_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskincarol_445_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskincaroltail_444_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinspade_419_instances))->force_speed(20+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinmillatail_381_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
        ((Active*)get_instance(playerskinmilla_446_instances))->force_speed(10+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)*3);
    }
    event_45_75_end: ;
}
void Frames::event_func_16636()
{
    // event 46_75
    {
        if (!(group_get_back_up_1)) goto event_46_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) >= (1))) goto event_46_75_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1));
        ((Active*)get_instance(playerskincarol_445_instances))->set_x(((Active*)get_instance(playerskincarol_445_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskincarol_445_instances))->set_y(((Active*)get_instance(playerskincarol_445_instances))->get_y()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1));
        ((Active*)get_instance(playerskinspade_419_instances))->set_x(((Active*)get_instance(playerskinspade_419_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinspade_419_instances))->set_y(((Active*)get_instance(playerskinspade_419_instances))->get_y()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1));
        ((Active*)get_instance(playerskinmilla_446_instances))->set_x(((Active*)get_instance(playerskinmilla_446_instances))->get_x()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinmilla_446_instances))->set_y(((Active*)get_instance(playerskinmilla_446_instances))->get_y()+((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1));
    }
    event_46_75_end: ;
}
void Frames::event_func_16637()
{
    // event 47_75
    {
        if (!(group_get_back_up_1)) goto event_47_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (1))) goto event_47_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, get_min(((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)+0.25, 0));
    }
    event_47_75_end: ;
}
void Frames::event_func_16638()
{
    // event 48_75
    {
        if (!(group_get_back_up_1)) goto event_48_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) > (1))) goto event_48_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) < (50))) goto event_48_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
    }
    event_48_75_end: ;
}
void Frames::event_func_16639()
{
    // event 49_75
    {
        if (!(group_get_back_up_1)) goto event_49_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (0))) goto event_49_75_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_x()) > (640))) goto event_49_75_end;
        if (!((global_values->get(1)) == (0))) goto event_49_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_speed();
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -5);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(16);
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(frame_right()+32);
        media.play_id(SOUND_LILAC_LETSGO_2_79, -1, 1);
    }
    event_49_75_end: ;
}
void Frames::event_func_16640()
{
    // event 50_75
    {
        if (!(group_get_back_up_1)) goto event_50_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (1))) goto event_50_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)) == (0))) goto event_50_75_end;
        if (!((global_values->get(1)) == (0))) goto event_50_75_end;
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(7);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(7);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, 0);
        if (!group_stars_1) {
            group_stars_1 = true;
        }
    }
    event_50_75_end: ;
}
void Frames::event_func_16641()
{
    // event 51_75
    {
        if (!(group_get_back_up_1)) goto event_51_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (50))) goto event_51_75_end;
        if (!((global_values->get(1)) == (0))) goto event_51_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
        media.play_id(SOUND_LILAC_COMETDASH_53, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(13);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -15);
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(180, 0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(13);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(180, 0);
        if (!group_boost_sparkle_1) {
            group_boost_sparkle_1 = true;
        }
    }
    event_51_75_end: ;
}
void Frames::event_func_16642()
{
    // event 52_75
    {
        if (!(group_get_back_up_1)) goto event_52_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (0))) goto event_52_75_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_x()) > (640))) goto event_52_75_end;
        if (!((global_values->get(1)) == (1))) goto event_52_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -13);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, -6);
        ((Active*)get_instance(playerskinspade_419_instances))->set_direction(16);
        ((Active*)get_instance(playerskinspade_419_instances))->force_animation(21);
        ((Active*)get_instance(playerskinspade_419_instances))->stop_animation();
    }
    event_52_75_end: ;
}
void Frames::event_func_16643()
{
    // event 53_75
    {
        if (!(group_get_back_up_1)) goto event_53_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (1))) goto event_53_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)) >= (0))) goto event_53_75_end;
        if (!((global_values->get(1)) == (1))) goto event_53_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 2);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerskinspade_419_instances))->start_animation();
    }
    event_53_75_end: ;
}
void Frames::event_func_16644()
{
    // event 54_75
    {
        if (!(group_get_back_up_1)) goto event_54_75_end;
        if (!((global_values->get(1)) == (1))) goto event_54_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) > (1))) goto event_54_75_end;
        if (!((((Active*)get_instance(playerskinspade_419_instances))->get_frame()) == (5))) goto event_54_75_end;
        if (not_always_54_75 > loop_count) {
            not_always_54_75 = loop_count + 2;
            goto event_54_75_end;
        }
        not_always_54_75 = loop_count + 2;
        effectsspadeimage_321_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinspade_419_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + -8), parent->layer);
                effectsspadeimage_321_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + -8), parent->layer);
                effectsspadeimage_321_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + -8), parent->layer);
                effectsspadeimage_321_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + -8), parent->layer);
                effectsspadeimage_321_instances.add_back();
            }
        }
        media.play_id(SOUND_SHIELD_SUMMON_2_66, -1, 1);
        spread_value(effectsspadeimage_321_instances, 1, 0);
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->set_direction(2+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->move_back();
        }
    }
    event_54_75_end: ;
}
void Frames::event_func_16645()
{
    // event 55_75
    {
        if (!(group_get_back_up_1)) goto event_55_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (50))) goto event_55_75_end;
        if (!((global_values->get(1)) == (1))) goto event_55_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, get_min(((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)+0.25, 12));
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -12);
    }
    event_55_75_end: ;
}
void Frames::event_func_16646()
{
    // event 56_75
    {
        if (!(group_get_back_up_1)) goto event_56_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (50))) goto event_56_75_end;
        if (!((((Active*)get_instance(playerskinspade_419_instances))->get_x()) < (120))) goto event_56_75_end;
        if (!((global_values->get(1)) == (1))) goto event_56_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
    }
    event_56_75_end: ;
}
void Frames::event_func_16647()
{
    // event 57_75
    {
        if (!(group_get_back_up_1)) goto event_57_75_end;
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->alterables->values.get(0)*4-64, 0));
        }
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.2+((Active*)*it)->alterables->values.get(0)*0.025);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+cos_deg(((Active*)*it)->alterables->values.get(1)*90+((Active*)*it)->alterables->values.get(0)*8)*((Active*)*it)->alterables->values.get(0)*2);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(1)*90+((Active*)*it)->alterables->values.get(0)*8)*((Active*)*it)->alterables->values.get(0)*2);
        }
    }
    event_57_75_end: ;
}
void Frames::event_func_16648()
{
    // event 58_75
    {
        if (!(group_get_back_up_1)) goto event_58_75_end;
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
        }
        if (!effectsspadeimage_321_instances.has_selection()) goto event_58_75_end;
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_58_75_end: ;
}
void Frames::event_func_16649()
{
    // event 59_75
    {
        if (!(group_get_back_up_1)) goto event_59_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (0))) goto event_59_75_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_x()) > (640))) goto event_59_75_end;
        if (!((global_values->get(1)) == (2))) goto event_59_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, 0);
    }
    event_59_75_end: ;
}
void Frames::event_func_16650()
{
    // event 60_75
    {
        if (!(group_get_back_up_1)) goto event_60_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (1))) goto event_60_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)) == (0))) goto event_60_75_end;
        if (!((global_values->get(1)) == (2))) goto event_60_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 2);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
    }
    event_60_75_end: ;
}
void Frames::event_func_16651()
{
    // event 61_75
    {
        if (!(group_get_back_up_1)) goto event_61_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (50))) goto event_61_75_end;
        if (!((global_values->get(1)) == (2))) goto event_61_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -12);
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_61_75_end: ;
}
void Frames::event_func_16652()
{
    // event 62_75
    {
        if (!(group_get_back_up_1)) goto event_62_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) >= (50))) goto event_62_75_end;
        if (!((global_values->get(1)) == (2))) goto event_62_75_end;
        ((Active*)get_instance(playerskincarol_445_instances))->set_visible(false);
        ((Active*)get_instance(playerskincaroltail_444_instances))->set_visible(false);
        ((Active*)get_instance(playerskincarolbike_382_instances))->force_animation(2);
        ((Active*)get_instance(playerskincarolbike_382_instances))->set_direction(16);
        {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances));
            if (parent == NULL) goto pos_end_62_75_0;
            ((Active*)get_instance(playerskincarolbike_382_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_62_75_0: ;
        }
        ((Active*)get_instance(playerskincarolbike_382_instances))->set_visible(true);
    }
    event_62_75_end: ;
}
void Frames::event_func_16653()
{
    // event 63_75
    {
        if (!(group_get_back_up_1)) goto event_63_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (0))) goto event_63_75_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_x()) > (640))) goto event_63_75_end;
        if (!((global_values->get(1)) == (4))) goto event_63_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, -5);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playerskinmilla_446_instances))->force_animation(24);
        ((Active*)get_instance(playerskinmilla_446_instances))->restore_speed();
        ((Active*)get_instance(playerskinmilla_446_instances))->set_direction(16);
        ((Active*)get_instance(playerskinmilla_446_instances))->set_x(frame_right()+32);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_63_75_end: ;
}
void Frames::event_func_16654()
{
    // event 64_75
    {
        if (!(group_get_back_up_1)) goto event_64_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (1))) goto event_64_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)) == (0))) goto event_64_75_end;
        if (!((global_values->get(1)) == (4))) goto event_64_75_end;
        ((Active*)get_instance(playerskinmilla_446_instances))->force_animation(18);
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(2, 2);
        ((Active*)get_instance(playerskinmilla_446_instances))->restore_speed();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(18);
    }
    event_64_75_end: ;
}
void Frames::event_func_16655()
{
    // event 65_75
    {
        if (!(group_get_back_up_1)) goto event_65_75_end;
        every_65_75 += manager.dt;
        if (every_65_75 < 0.1) goto event_65_75_end;
        every_65_75 -= 0.1;
        if (!((global_values->get(1)) == (4))) goto event_65_75_end;
        if (!(((Active*)get_instance(playerskinmilla_446_instances))->test_animation(18))) goto event_65_75_end;
        if (!((((Active*)get_instance(playerskinmilla_446_instances))->get_y()) > (0))) goto event_65_75_end;
        media.play_id(SOUND_MILLA_FLY_2_170, -1, 1);
    }
    event_65_75_end: ;
}
void Frames::event_func_16656()
{
    // event 66_75
    {
        if (!(group_get_back_up_1)) goto event_66_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) >= (2))) goto event_66_75_end;
        if (!((global_values->get(1)) == (4))) goto event_66_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(1, get_max(((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(1)-0.1, -5));
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.set(0, get_max(((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(0)-0.1, -8));
    }
    event_66_75_end: ;
}
void Frames::event_func_16657()
{
    // event 67_75
    {
        if (!(group_get_back_up_1)) goto event_67_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) == (50))) goto event_67_75_end;
        if (!((global_values->get(1)) == (4))) goto event_67_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
    }
    event_67_75_end: ;
}
void Frames::event_func_16658()
{
    // event 68_75
    {
        if (!(group_get_back_up_1)) goto event_68_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) > (50))) goto event_68_75_end;
        ((Active*)get_instance(floorlight_3883_instances))->alterables->values.add(2, 1);
    }
    event_68_75_end: ;
}
void Frames::event_func_16659()
{
    // event 69_75
    {
        if (!(group_get_back_up_1)) goto event_69_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) > (200))) goto event_69_75_end;
        set_display_center(-1, frame_top()+124);
    }
    event_69_75_end: ;
}
void Frames::event_func_16660()
{
    // event 70_75
    {
        if (!(group_get_back_up_1)) goto event_70_75_end;
        if (!((((Active*)get_instance(floorlight_3883_instances))->alterables->values.get(2)) > (250))) goto event_70_75_end;
        if (!group_get_back_up_jump_to_last_checkpoint_1) {
            group_get_back_up_jump_to_last_checkpoint_1 = true;
        }
    }
    event_70_75_end: ;
}
void Frames::event_func_16661()
{
    // event 71_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_71_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (1))) goto event_71_75_end;
        next_frame = 20 + 0;    
    
    }
    event_71_75_end: ;
}
void Frames::event_func_16662()
{
    // event 72_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_72_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (2))) goto event_72_75_end;
        next_frame = 21 + 0;    
    
    }
    event_72_75_end: ;
}
void Frames::event_func_16663()
{
    // event 73_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_73_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (3))) goto event_73_75_end;
        next_frame = 22 + 0;    
    
    }
    event_73_75_end: ;
}
void Frames::event_func_16664()
{
    // event 74_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_74_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (4))) goto event_74_75_end;
        next_frame = 24 + 0;    
    
    }
    event_74_75_end: ;
}
void Frames::event_func_16665()
{
    // event 75_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_75_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (5))) goto event_75_75_end;
        next_frame = 26 + 0;    
    
    }
    event_75_75_end: ;
}
void Frames::event_func_16666()
{
    // event 76_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_76_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (6))) goto event_76_75_end;
        next_frame = 27 + 0;    
    
    }
    event_76_75_end: ;
}
void Frames::event_func_16667()
{
    // event 77_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_77_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (7))) goto event_77_75_end;
        next_frame = 28 + 0;    
    
    }
    event_77_75_end: ;
}
void Frames::event_func_16668()
{
    // event 78_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_78_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (8))) goto event_78_75_end;
        next_frame = 16 + 0;    
    
    }
    event_78_75_end: ;
}
void Frames::event_func_16669()
{
    // event 79_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_79_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (9))) goto event_79_75_end;
        next_frame = 17 + 0;    
    
    }
    event_79_75_end: ;
}
void Frames::event_func_16670()
{
    // event 80_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_80_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (10))) goto event_80_75_end;
        next_frame = 18 + 0;    
    
    }
    event_80_75_end: ;
}
void Frames::event_func_16671()
{
    // event 81_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_81_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (11))) goto event_81_75_end;
        next_frame = 19 + 0;    
    
    }
    event_81_75_end: ;
}
void Frames::event_func_16672()
{
    // event 82_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_82_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (12))) goto event_82_75_end;
        next_frame = 29 + 0;    
    
    }
    event_82_75_end: ;
}
void Frames::event_func_16673()
{
    // event 83_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_83_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (13))) goto event_83_75_end;
        next_frame = 30 + 0;    
    
    }
    event_83_75_end: ;
}
void Frames::event_func_16674()
{
    // event 84_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_84_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (14))) goto event_84_75_end;
        next_frame = 31 + 0;    
    
    }
    event_84_75_end: ;
}
void Frames::event_func_16675()
{
    // event 85_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_85_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (15))) goto event_85_75_end;
        next_frame = 32 + 0;    
    
    }
    event_85_75_end: ;
}
void Frames::event_func_16676()
{
    // event 86_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_86_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (16))) goto event_86_75_end;
        next_frame = 33 + 0;    
    
    }
    event_86_75_end: ;
}
void Frames::event_func_16677()
{
    // event 87_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_87_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (17))) goto event_87_75_end;
        next_frame = 35 + 0;    
    
    }
    event_87_75_end: ;
}
void Frames::event_func_16678()
{
    // event 88_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_88_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (18))) goto event_88_75_end;
        next_frame = 36 + 0;    
    
    }
    event_88_75_end: ;
}
void Frames::event_func_16679()
{
    // event 89_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_89_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (19))) goto event_89_75_end;
        next_frame = 37 + 0;    
    
    }
    event_89_75_end: ;
}
void Frames::event_func_16680()
{
    // event 90_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_90_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (20))) goto event_90_75_end;
        next_frame = 38 + 0;    
    
    }
    event_90_75_end: ;
}
void Frames::event_func_16681()
{
    // event 91_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_91_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (21))) goto event_91_75_end;
        next_frame = 39 + 0;    
    
    }
    event_91_75_end: ;
}
void Frames::event_func_16682()
{
    // event 92_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_92_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (22))) goto event_92_75_end;
        next_frame = 40 + 0;    
    
    }
    event_92_75_end: ;
}
void Frames::event_func_16683()
{
    // event 93_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_93_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (23))) goto event_93_75_end;
        next_frame = 41 + 0;    
    
    }
    event_93_75_end: ;
}
void Frames::event_func_16684()
{
    // event 94_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_94_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (24))) goto event_94_75_end;
        next_frame = 42 + 0;    
    
    }
    event_94_75_end: ;
}
void Frames::event_func_16685()
{
    // event 95_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_95_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (25))) goto event_95_75_end;
        next_frame = 43 + 0;    
    
    }
    event_95_75_end: ;
}
void Frames::event_func_16686()
{
    // event 96_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_96_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (26))) goto event_96_75_end;
        next_frame = 44 + 0;    
    
    }
    event_96_75_end: ;
}
void Frames::event_func_16687()
{
    // event 97_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_97_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (27))) goto event_97_75_end;
        next_frame = 45 + 0;    
    
    }
    event_97_75_end: ;
}
void Frames::event_func_16688()
{
    // event 98_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_98_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (28))) goto event_98_75_end;
        next_frame = 46 + 0;    
    
    }
    event_98_75_end: ;
}
void Frames::event_func_16689()
{
    // event 99_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_99_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (29))) goto event_99_75_end;
        next_frame = 47 + 0;    
    
    }
    event_99_75_end: ;
}
void Frames::event_func_16690()
{
    // event 100_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_100_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (30))) goto event_100_75_end;
        next_frame = 48 + 0;    
    
    }
    event_100_75_end: ;
}
void Frames::event_func_16691()
{
    // event 101_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_101_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (31))) goto event_101_75_end;
        next_frame = 49 + 0;    
    
    }
    event_101_75_end: ;
}
void Frames::event_func_16692()
{
    // event 102_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_102_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (32))) goto event_102_75_end;
        next_frame = 50 + 0;    
    
    }
    event_102_75_end: ;
}
void Frames::event_func_16693()
{
    // event 103_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_103_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (33))) goto event_103_75_end;
        next_frame = 51 + 0;    
    
    }
    event_103_75_end: ;
}
void Frames::event_func_16694()
{
    // event 104_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_104_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (34))) goto event_104_75_end;
        next_frame = 52 + 0;    
    
    }
    event_104_75_end: ;
}
void Frames::event_func_16695()
{
    // event 105_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_105_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (35))) goto event_105_75_end;
        next_frame = 53 + 0;    
    
    }
    event_105_75_end: ;
}
void Frames::event_func_16696()
{
    // event 106_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_106_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (36))) goto event_106_75_end;
        next_frame = 54 + 0;    
    
    }
    event_106_75_end: ;
}
void Frames::event_func_16697()
{
    // event 107_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_107_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (37))) goto event_107_75_end;
        next_frame = 55 + 0;    
    
    }
    event_107_75_end: ;
}
void Frames::event_func_16698()
{
    // event 108_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_108_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (38))) goto event_108_75_end;
        next_frame = 56 + 0;    
    
    }
    event_108_75_end: ;
}
void Frames::event_func_16699()
{
    // event 109_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_109_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (39))) goto event_109_75_end;
        next_frame = 57 + 0;    
    
    }
    event_109_75_end: ;
}
void Frames::event_func_16700()
{
    // event 110_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_110_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (40))) goto event_110_75_end;
        next_frame = 58 + 0;    
    
    }
    event_110_75_end: ;
}
void Frames::event_func_16701()
{
    // event 111_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_111_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (41))) goto event_111_75_end;
        next_frame = 85 + 0;    
    
    }
    event_111_75_end: ;
}
void Frames::event_func_16702()
{
    // event 112_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_112_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (42))) goto event_112_75_end;
        next_frame = 59 + 0;    
    
    }
    event_112_75_end: ;
}
void Frames::event_func_16703()
{
    // event 113_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_113_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (43))) goto event_113_75_end;
        next_frame = 60 + 0;    
    
    }
    event_113_75_end: ;
}
void Frames::event_func_16704()
{
    // event 114_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_114_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (44))) goto event_114_75_end;
        next_frame = 61 + 0;    
    
    }
    event_114_75_end: ;
}
void Frames::event_func_16705()
{
    // event 115_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_115_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (45))) goto event_115_75_end;
        next_frame = 62 + 0;    
    
    }
    event_115_75_end: ;
}
void Frames::event_func_16706()
{
    // event 116_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_116_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (46))) goto event_116_75_end;
        next_frame = 63 + 0;    
    
    }
    event_116_75_end: ;
}
