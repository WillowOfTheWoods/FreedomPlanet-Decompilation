#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15064()
{
    // event 2084_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2084_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2084_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2084_70_end: ;
}
void Frames::event_func_15065()
{
    // event 2085_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2085_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2085_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_2085_70_end;
        media.play_id(SOUND_MUTANT_EYES_375, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_2085_70_end: ;
}
void Frames::event_func_15066()
{
    // event 2086_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2086_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2086_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (70))) goto event_2086_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2086_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_44_03_ogg_241, 19-1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2086_70_end: ;
}
void Frames::event_func_15067()
{
    // event 2087_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2087_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2087_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (70))) goto event_2087_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (80))) goto event_2087_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+10);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_2087_70_end: ;
}
void Frames::event_func_15068()
{
    // event 2088_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2088_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2088_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (70))) goto event_2088_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (100))) goto event_2088_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2088_70_end: ;
}
void Frames::event_func_15069()
{
    // event 2089_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2089_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2089_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (120))) goto event_2089_70_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(45);
        }
    }
    event_2089_70_end: ;
}
void Frames::event_func_15070()
{
    // event 2090_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2090_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2090_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (140))) goto event_2090_70_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 3);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2090_70_end: ;
}
void Frames::event_func_15071()
{
    // event 2091_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2091_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2091_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (140))) goto event_2091_70_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-3, 0));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2091_70_end: ;
}
void Frames::event_func_15072()
{
    // event 2092_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2092_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2092_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (170))) goto event_2092_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)%math_helper%20) == (10))) goto event_2092_70_end;
        if (not_always_2092_70 > loop_count) {
            not_always_2092_70 = loop_count + 2;
            goto event_2092_70_end;
        }
        not_always_2092_70 = loop_count + 2;
        media.play_id(SOUND_MUTANT_FORM_376, -1, 1);
    }
    event_2092_70_end: ;
}
void Frames::event_func_15073()
{
    // event 2093_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2093_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2093_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (170))) goto event_2093_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)%math_helper%10) == (0))) goto event_2093_70_end;
        FrameObject * single_instance_2093_70_0; single_instance_2093_70_0 = NULL;
        // select single: true false false
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator p_it(playerskinmilla_446_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_npctransformbubble_3555(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2093_70_0 == NULL)
                    single_instance_2093_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2093_70_0))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)*11);
    }
    event_2093_70_end: ;
}
void Frames::event_func_15074()
{
    // event 2094_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2094_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) < (9))) goto event_2094_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(2)*0.1);
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_2094_70_end: ;
}
void Frames::event_func_15075()
{
    // event 2095_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2095_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (2))) { it.deselect(); continue; }
        }
        if (!npctransformbubble_3555_instances.has_selection()) goto event_2095_70_end;
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 10);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-20, 0));
        }
    }
    event_2095_70_end: ;
}
void Frames::event_func_15076()
{
    // event 2096_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2096_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!npctransformbubble_3555_instances.has_selection()) goto event_2096_70_end;
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(brevonknifearm_3684_instances))->alterables->flags.enable(1);
    }
    event_2096_70_end: ;
}
void Frames::event_func_15077()
{
    // event 2097_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2097_70_end;
        if (!(((Active*)get_instance(brevonknifearm_3684_instances))->alterables->flags.is_on(1))) goto event_2097_70_end;
        if (!(((Active*)get_instance(brevonknifearm_3684_instances))->alterables->flags.is_off(2))) goto event_2097_70_end;
        ((Active*)get_instance(brevonknifearm_3684_instances))->alterables->flags.enable(2);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(3);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2097_70_end: ;
}
void Frames::event_func_15078()
{
    // event 2098_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2098_70_end;
        if (!(((Active*)get_instance(brevonknifearm_3684_instances))->alterables->flags.is_on(2))) goto event_2098_70_end;
        ((Active*)get_instance(brevonknifearm_3684_instances))->alterables->values.add(4, (((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)-230)*0.1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.2-cos_deg(((Active*)get_instance(brevonknifearm_3684_instances))->alterables->values.get(4))*0.2);
        }
    }
    event_2098_70_end: ;
}
void Frames::event_func_15079()
{
    // event 2099_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2099_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_2099_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (500))) goto event_2099_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 120);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_2099_70_end: ;
}
void Frames::event_func_15080()
{
    // event 2100_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2100_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2100_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2100_70_end: ;
}
void Frames::event_func_15081()
{
    // event 2101_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2101_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2101_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (60))) goto event_2101_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-10, 0));
        }
    }
    event_2101_70_end: ;
}
void Frames::event_func_15082()
{
    // event 2102_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2102_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2102_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_2102_70_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()-80);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_visible(true);
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_visible(true);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_visible(true);
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_visible(true);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
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
        if (!group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1) {
            group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 = true;
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
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
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1184);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_2102_70_end: ;
}
void Frames::event_func_15083()
{
    // event 2103_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2103_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2103_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2103_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_2103_70_end: ;
}
void Frames::event_func_15084()
{
    // event 2104_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2104_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2104_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2104_70_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2104_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2104_70_end: ;
}
void Frames::event_func_15085()
{
    // event 2105_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2105_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2105_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (130))) goto event_2105_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
    }
    event_2105_70_end: ;
}
void Frames::event_func_15086()
{
    // event 2106_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2106_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (8))) goto event_2106_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (170))) goto event_2106_70_end;
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(2);
    }
    event_2106_70_end: ;
}
void Frames::event_func_15087()
{
    // event 2108_70
    {
        if (!(group_main_engine_1)) goto event_2108_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1024))) goto event_2108_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()+360))) goto event_2108_70_end;
        if (!((global_values->get(1)) == (4))) goto event_2108_70_end;
        if (once_condition_2108_70) goto event_2108_70_end;
        once_condition_2108_70 = true;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_milla_finish_1) {
            group_main_engine_level_specific_methods_cutscenes_milla_finish_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2108_70_end: ;
}
void Frames::event_func_15088()
{
    // event 2109_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_milla_finish_1)) goto event_2109_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2109_70_end: ;
}
void Frames::event_func_15089()
{
    // event 2110_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_milla_finish_1)) goto event_2110_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (90))) goto event_2110_70_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_2110_70_end: ;
}
void Frames::event_func_15090()
{
    // event 2111_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_milla_finish_1)) goto event_2111_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (90))) goto event_2111_70_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
            group_main_engine_level_specific_methods_cutscenes_milla_finish_1 = false;
    
    }
    event_2111_70_end: ;
}
void Frames::event_func_15091()
{
    // event 2112_70
    {
        if (!(group_main_engine_1)) goto event_2112_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10300))) goto event_2112_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
    }
    event_2112_70_end: ;
}
void Frames::event_func_15092()
{
    // event 2113_70
    {
        if (!(group_main_engine_1)) goto event_2113_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10300))) goto event_2113_70_end;
        if (not_always_2113_70 > loop_count) {
            not_always_2113_70 = loop_count + 2;
            goto event_2113_70_end;
        }
        not_always_2113_70 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2113_70_end: ;
}
void Frames::event_func_15093()
{
    // event 2114_70
    {
        if (!(group_main_engine_1)) goto event_2114_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10300))) goto event_2114_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11400))) goto event_2114_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (320))) goto event_2114_70_end;
        if (not_always_2114_70 > loop_count) {
            not_always_2114_70 = loop_count + 2;
            goto event_2114_70_end;
        }
        not_always_2114_70 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 320);
    }
    event_2114_70_end: ;
}
void Frames::event_func_15094()
{
    // event 2115_70
    {
        if (!(group_main_engine_1)) goto event_2115_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (320))) goto event_2115_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11400))) goto event_2115_70_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) < (400))) goto event_2115_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2115_70_end: ;
}
void Frames::event_func_15095()
{
    // event 2116_70
    {
        if (!(group_main_engine_1)) goto event_2116_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1024))) goto event_2116_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_2116_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_2116_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x());
    }
    event_2116_70_end: ;
}
void Frames::event_func_15096()
{
    // event 2117_70
    {
        if (!(group_main_engine_1)) goto event_2117_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1024))) goto event_2117_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_2117_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_2117_70_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_2117_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+global_values->get(16)*0.5));
    }
    event_2117_70_end: ;
}
void Frames::event_func_15097()
{
    // event 2118_70
    {
        if (!(group_main_engine_1)) goto event_2118_70_end;
        if (!((global_values->get(4)) < (2))) goto event_2118_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11000))) goto event_2118_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11200))) goto event_2118_70_end;
        global_values->set(4, 2);
        global_values->set(5, 11000);
        global_values->set(6, 720);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_2118_70_end: ;
}
void Frames::event_func_15098()
{
    // event 2119_70
    {
        if (!(group_main_engine_1)) goto event_2119_70_end;
        if (!((global_values->get(4)) < (3))) goto event_2119_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (12800))) goto event_2119_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (12900))) goto event_2119_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1152))) goto event_2119_70_end;
        global_values->set(4, 3);
        global_values->set(5, 12800);
        global_values->set(6, 1296);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_2119_70_end: ;
}
void Frames::event_func_15099()
{
    // event 2120_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_2120_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (800))) goto event_2120_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_2120_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_2120_70_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2120_70_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2120_70_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(2))) goto event_2120_70_end;
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2120_70_end: ;
}
void Frames::event_func_15100()
{
    // event 2121_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_2121_70_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_2121_70_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_2121_70_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 3));
    }
    event_2121_70_end: ;
}
void Frames::event_func_15101()
{
    // event 2122_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_2122_70_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_2122_70_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_2122_70_end: ;
}
void Frames::event_func_15102()
{
    // event 2123_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_2123_70_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_2123_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_2123_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_2123_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_2123_70_end: ;
}
void Frames::event_func_15103()
{
    // event 2124_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_2124_70_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_2124_70_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_2124_70_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2124_70_end;
        global_values->set(4, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-48);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1296);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
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
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+global_values->get(16)*0.5);
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_2124_70_end: ;
}
void Frames::event_func_15104()
{
    // event 2127_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_2127_70_end;
        player_389_instances.clear_selection();
        minibossbulldozerclaw_1775_instances.clear_selection();
        if (!check_overlap(player_389_instances, minibossbulldozerclaw_1775_instances)) goto event_2127_70_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(2)) < (0))) goto event_2127_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(2));
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
    event_2127_70_end: ;
}
void Frames::event_func_15105()
{
    // event 2128_70
    bool or_result_2128_70 = false;
    bool or_temp_result_2128_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_2128_70_0_end;
        playersensorleftbig_391_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, minibossbulldozerhitbox_1776_instances)) goto or_event_2128_70_0_end;
        for (ObjectIterator it(minibossbulldozerhitbox_1776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerhitbox_1776_instances.has_selection()) goto or_event_2128_70_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2128_70_0_end;
        or_result_2128_70 = true;
        or_temp_result_2128_70_0 = true;
    }
    or_event_2128_70_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    minibossbulldozerhitbox_1776_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_2128_70_0) {
        playermovementvalues_245_instances.save_selection();
        minibossbulldozerhitbox_1776_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 2128_70
    bool or_temp_result_2128_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_2128_70_1_end;
        playersensorrightbig_393_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, minibossbulldozerhitbox_1776_instances)) goto or_event_2128_70_1_end;
        for (ObjectIterator it(minibossbulldozerhitbox_1776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerhitbox_1776_instances.has_selection()) goto or_event_2128_70_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2128_70_1_end;
        or_result_2128_70 = true;
        or_temp_result_2128_70_1 = true;
        or_event_2128_70_1_end: ;
        playersensorrightbig_393_instances.clear_saved_selection();
        if (or_temp_result_2128_70_1) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            minibossbulldozerhitbox_1776_instances.save_selection();
        }
        if (!or_result_2128_70) goto or_final_or_event_2128_70_1_end;
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        minibossbulldozerhitbox_1776_instances.empty_selection();
        if (or_temp_result_2128_70_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_2128_70_0 || or_temp_result_2128_70_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_2128_70_0 || or_temp_result_2128_70_1) {
            minibossbulldozerhitbox_1776_instances.restore_selection();
        }
        if (or_temp_result_2128_70_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23)+((Active*)get_single(minibossbulldozerhitbox_1776_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
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
    or_final_or_event_2128_70_1_end: ;
}
void Frames::event_func_15106()
{
    // event 2192_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2192_70_end;
        if (!((((Active*)get_instance(bossmmillapawfront_3681_instances))->alterables->values.get(0)) < (50))) goto event_2192_70_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_2192_70_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_44();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->alterables->values.add(0, 1);
    }
    event_2192_70_end: ;
}
void Frames::event_func_15107()
{
    // event 2193_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2193_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->move_back();
    }
    event_2193_70_end: ;
}
void Frames::event_func_15108()
{
    // event 2194_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2194_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (bossmmillatail_3675_instances.size()-3))) { it.deselect(); continue; }
        }
        if (!bossmmillatail_3675_instances.has_selection()) goto event_2194_70_end;
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2194_70_end: ;
}
void Frames::event_func_15109()
{
    // event 2195_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2195_70_end;
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->move_back();
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(bossmmillaearback_3674_instances))->move_back();
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->move_back();
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->move_back();
        ((Active*)get_instance(bossmmillafoot_3679_instances))->move_back();
        ((Active*)get_instance(bossmmillaleg_3677_instances))->move_back();
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2195_70_end: ;
}
void Frames::event_func_15110()
{
    // event 2196_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2196_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (bossmmillatail_3675_instances.size()-3))) { it.deselect(); continue; }
        }
        if (!bossmmillatail_3675_instances.has_selection()) goto event_2196_70_end;
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2196_70_end: ;
}
void Frames::event_func_15111()
{
    // event 2197_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2197_70_end;
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->move_back();
        ((Active*)get_instance(bossmmillapawback_3673_instances))->move_back();
        ((Active*)get_instance(bossmmillafootback_3671_instances))->move_back();
    }
    event_2197_70_end: ;
}
void Frames::event_func_15112()
{
    // event 2198_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2198_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) < (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2198_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
    }
    event_2198_70_end: ;
}
void Frames::event_func_15113()
{
    // event 2199_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2199_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2199_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_direction(0);
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_direction(0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_direction(0);
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_direction(0);
    }
    event_2199_70_end: ;
}
void Frames::event_func_15114()
{
    // event 2200_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2200_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2200_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_direction(16);
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_direction(16);
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_direction(16);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_direction(16);
    }
    event_2200_70_end: ;
}
void Frames::event_func_15115()
{
    // event 2201_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2201_70_end;
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_y(get_min(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(5)+32, ((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(6))*6*get_max(((Active*)*it)->alterables->values.get(7), ((Active*)*it)->alterables->values.get(10))+16*((Active*)*it)->alterables->values.get(8)-(-5+get_abs(sin_deg(((Active*)*it)->alterables->values.get(6)))*8)*((Active*)*it)->alterables->values.get(9));
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_y(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_y()-8);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_y(get_min(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(5)+32, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_y(((Active*)get_instance(bossmmillapawback_3673_instances))->get_y()-8);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_y(get_min(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(5)+32, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillafoot_3679_instances))->get_y()-12);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-92*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-36*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)+20*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(4)-84*((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12)+cos_deg(150-((Active*)*it)->alterables->values.get(0)*15)*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0))*((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->set_y(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(5)-sin_deg(150-((Active*)*it)->alterables->values.get(0)*15)*((Active*)*it)->alterables->values.get(0)*(20-((Active*)*it)->alterables->values.get(0)));
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+4)%math_helper%360);
        }
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(4)-(-4+((Active*)*it)->alterables->values.get(0)*32)*((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-84*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-52*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-4*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_y(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_y(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bossmmillatailend_3685_instances))->force_frame(0);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_y(get_min(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(5)+32, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_x(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(4)-36*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_angle(0, 0);
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_angle(0, 0);
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_2201_70_end: ;
}
void Frames::event_func_15116()
{
    // event 2202_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2202_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-90-((Active*)*it)->alterables->values.get(0)*10)*8*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_angle()+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*-10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(((Active*)get_instance(bossmmillaearback_3674_instances))->get_angle()+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_instance(bossmmillapawback_3673_instances))->get_x()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_y(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_y(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_x(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_x()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*-4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*30)*6*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillaleg_3677_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_instance(bossmmillafoot_3679_instances))->get_x()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*-4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_x(((Active*)get_instance(bossmmillafootback_3671_instances))->get_x()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*-4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_angle(0, 0);
    }
    event_2202_70_end: ;
}
void Frames::event_func_15117()
{
    // event 2203_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2203_70_end;
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_instance(bossmmillafoot_3679_instances))->get_x()-16*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillaleg_3677_instances))->get_y()+4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_x(((Active*)get_instance(bossmmillaleg_3677_instances))->get_x()-8*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)-get_abs(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*4)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_y(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_y()+4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_x(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_x()-16*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_instance(bossmmillapawback_3673_instances))->get_x()+16*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_x(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_x()+8*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)-get_abs(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*4)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-get_abs(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)*it)->alterables->values.get(0)*6)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-get_abs(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6))*8)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(8)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-get_abs(sin_deg(((Active*)*it)->alterables->values.get(6))*8)*((Active*)*it)->alterables->values.get(8)*((Active*)*it)->alterables->values.get(12));
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_x(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_x()-get_abs(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_x(((Active*)get_instance(bossmmillaearback_3674_instances))->get_x()-get_abs(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_angle()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*2)*6*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(((Active*)get_instance(bossmmillaearback_3674_instances))->get_angle()-sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*2)*6*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_x(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_x()-get_abs(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*4)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_x(((Active*)get_instance(bossmmillafootback_3671_instances))->get_x()-16*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(8)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
    }
    event_2203_70_end: ;
}
void Frames::event_func_15118()
{
    // event 2204_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2204_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2204_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+6)%math_helper%360);
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->force_frame(1);
    }
    event_2204_70_end: ;
}
void Frames::event_func_15119()
{
    // event 2205_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2205_70_end;
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_x(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_x()+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_y(get_min(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+get_abs(((Active*)*it)->alterables->values.get(13))*4*((Active*)*it)->alterables->values.get(9))%math_helper%360);
        }
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_instance(bossmmillafoot_3679_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_y(get_min(((Active*)get_instance(bossmmillafoot_3679_instances))->get_y()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_instance(bossmmillapawback_3673_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_y(get_min(((Active*)get_instance(bossmmillapawback_3673_instances))->get_y()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-(-5+get_abs(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*30))*8)*((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-90-((Active*)*it)->alterables->values.get(0)*10)*8*((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_x(((Active*)get_instance(bossmmillaleg_3677_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillaleg_3677_instances))->get_y()+get_min(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), 0));
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_x(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_y(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_y()+get_min(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), 0));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_x(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_y(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_y()+get_min(sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*5*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), 0));
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_angle()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*2)*6*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(((Active*)get_instance(bossmmillaearback_3674_instances))->get_angle()-sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*2)*6*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_x(((Active*)get_instance(bossmmillafootback_3671_instances))->get_x()+cos_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_y(get_min(((Active*)get_instance(bossmmillafootback_3671_instances))->get_y()+sin_deg(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6))*10*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(9), ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+32));
    }
    event_2205_70_end: ;
}
void Frames::event_func_15120()
{
    // event 2206_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2206_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2206_70_end;
        if (not_always_2206_70 > loop_count) {
            not_always_2206_70 = loop_count + 2;
            goto event_2206_70_end;
        }
        not_always_2206_70 = loop_count + 2;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_2206_70_end: ;
}
void Frames::event_func_15121()
{
    // event 2207_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2207_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (20))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2207_70_end;
        if (not_always_2207_70 > loop_count) {
            not_always_2207_70 = loop_count + 2;
            goto event_2207_70_end;
        }
        not_always_2207_70 = loop_count + 2;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_2207_70_end: ;
}
void Frames::event_func_15122()
{
    // event 2208_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2208_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(sin_deg(150-((Active*)*it)->alterables->values.get(0)*15)*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)*1.5)+20)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10)+(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*5)*((Active*)*it)->alterables->values.get(0)*2)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+(((Active*)*it)->alterables->values.get(0)*30-20)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_angle(((Active*)get_instance(bossmmillafoot_3679_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_instance(bossmmillafoot_3679_instances))->get_x()+((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_y(((Active*)get_instance(bossmmillafoot_3679_instances))->get_y()+15*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_x(((Active*)get_instance(bossmmillaleg_3677_instances))->get_x()+((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillaleg_3677_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_angle(((Active*)get_instance(bossmmillafootback_3671_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_angle(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_angle(((Active*)get_instance(bossmmillapawback_3673_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_y(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_y(((Active*)get_instance(bossmmillapawback_3673_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_instance(bossmmillapawback_3673_instances))->get_x()-10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-(sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*5)*((Active*)*it)->alterables->values.get(0)*8+((Active*)*it)->alterables->values.get(0)*3-get_min(((Active*)*it)->alterables->values.get(0), 1)*4)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_angle(((Active*)get_instance(bossmmillatailend_3685_instances))->get_angle()-(30+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-180)*30)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10), 0);
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*30)*6*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(6)-90-((Active*)*it)->alterables->values.get(0)*10)*8*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_angle()+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*10)*-20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(((Active*)get_instance(bossmmillaearback_3674_instances))->get_angle()+cos_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)*10)*20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_y(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_y(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-30)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_y(((Active*)get_instance(bossmmillafootback_3671_instances))->get_y()+sin_deg(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(6)-60)*4*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(10));
    }
    event_2208_70_end: ;
}
void Frames::event_func_15123()
{
    // event 2209_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2209_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2209_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)*19+((Active*)*it)->alterables->values.get(3)-120+sin_deg(((Active*)*it)->alterables->values.get(6))*4)*0.05);
        }
    }
    event_2209_70_end: ;
}
void Frames::event_func_15124()
{
    // event 2210_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2210_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(sin_deg(150-((Active*)*it)->alterables->values.get(0)*15)*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)*1.5)+20)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+(((Active*)*it)->alterables->values.get(0)*30-20)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(11), 0);
        }
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_angle(((Active*)get_instance(bossmmillafoot_3679_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11), 0);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_x(((Active*)get_instance(bossmmillafoot_3679_instances))->get_x()+((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_y(((Active*)get_instance(bossmmillafoot_3679_instances))->get_y()+15*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_x(((Active*)get_instance(bossmmillaleg_3677_instances))->get_x()+((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_y(((Active*)get_instance(bossmmillaleg_3677_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_angle(((Active*)get_instance(bossmmillafootback_3671_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11), 0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_angle(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11), 0);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_angle(((Active*)get_instance(bossmmillapawback_3673_instances))->get_angle()-30*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11), 0);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_y(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_y(((Active*)get_instance(bossmmillapawback_3673_instances))->get_y()+10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_x(((Active*)get_instance(bossmmillapawback_3673_instances))->get_x()-10*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11));
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-(((Active*)*it)->alterables->values.get(0)*3-get_min(((Active*)*it)->alterables->values.get(0), 1)*4)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(12)*((Active*)get_instance(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_angle(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_angle()-20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_angle(((Active*)get_instance(bossmmillaearback_3674_instances))->get_angle()-20*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(11)*((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12), 0);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-20*((Active*)*it)->alterables->values.get(11)*((Active*)*it)->alterables->values.get(12), 0);
        }
    }
    event_2210_70_end: ;
}
void Frames::event_func_15125()
{
    // event 2211_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1)) goto event_2211_70_end;
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (bossmmillatail_3675_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!bossmmillatail_3675_instances.has_selection()) goto event_2211_70_end;
        {
            FrameObject * parent = ((Active*)get_single(bossmmillatail_3675_instances));
            if (parent == NULL) goto pos_end_2211_70_0;
            ((Active*)get_instance(bossmmillatailend_3685_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2211_70_0: ;
        }
    }
    event_2211_70_end: ;
}
void Frames::event_func_15126()
{
    // event 2212_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2212_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (0))) goto event_2212_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(7)) == (0))) goto event_2212_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) < (4))) goto event_2212_70_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_2212_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(6, 1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
    }
    event_2212_70_end: ;
}
void Frames::event_func_15127()
{
    // event 2213_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2213_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (0))) goto event_2213_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(7)) == (0))) goto event_2213_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) >= (4))) goto event_2213_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(6, 1);
    }
    event_2213_70_end: ;
}
void Frames::event_func_15128()
{
    // event 2214_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2214_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (0))) goto event_2214_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(7)) > (0))) goto event_2214_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(7));
    }
    event_2214_70_end: ;
}
void Frames::event_func_15129()
{
    // event 2215_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2215_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (1))) goto event_2215_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.1, 1));
        }
    }
    event_2215_70_end: ;
}
void Frames::event_func_15130()
{
    // event 2216_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2216_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (1))) goto event_2216_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(4)) > (4))) goto event_2216_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
    }
    event_2216_70_end: ;
}
void Frames::event_func_15131()
{
    // event 2217_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2217_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (2))) goto event_2217_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2217_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.05, 1));
        }
    }
    event_2217_70_end: ;
}
void Frames::event_func_15132()
{
    // event 2218_70
    bool or_result_2218_70 = false;
    bool or_temp_result_2218_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2218_70_0_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2218_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2218_70_0_end;
        or_result_2218_70 = true;
        or_temp_result_2218_70_0 = true;
    }
    or_event_2218_70_0_end: ;
    bossmmillatailend_3685_instances.clear_saved_selection();
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2218_70_0) {
        bossmmillatailend_3685_instances.save_selection();
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2218_70
    bool or_temp_result_2218_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2218_70_1_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2218_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2218_70_1_end;
        or_result_2218_70 = true;
        or_temp_result_2218_70_1 = true;
        or_event_2218_70_1_end: ;
        if (or_temp_result_2218_70_1) {
            bossmmillatailend_3685_instances.save_selection();
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2218_70) goto or_final_or_event_2218_70_1_end;
        bossmmillahead_3680_instances.empty_selection();
        bossmmillatailend_3685_instances.empty_selection();
        if (or_temp_result_2218_70_0 || or_temp_result_2218_70_1) {
            bossmmillatailend_3685_instances.restore_selection();
        }
        if (or_temp_result_2218_70_0 || or_temp_result_2218_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.1, 1));
        }
    }
    or_final_or_event_2218_70_1_end: ;
}
void Frames::event_func_15133()
{
    // event 2219_70
    bool or_result_2219_70 = false;
    bool or_temp_result_2219_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2219_70_0_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2219_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2219_70_0_end;
        or_result_2219_70 = true;
        or_temp_result_2219_70_0 = true;
    }
    or_event_2219_70_0_end: ;
    bossmmillatailend_3685_instances.clear_saved_selection();
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2219_70_0) {
        bossmmillatailend_3685_instances.save_selection();
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2219_70
    bool or_temp_result_2219_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2219_70_1_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2219_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2219_70_1_end;
        or_result_2219_70 = true;
        or_temp_result_2219_70_1 = true;
        or_event_2219_70_1_end: ;
        if (or_temp_result_2219_70_1) {
            bossmmillatailend_3685_instances.save_selection();
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2219_70) goto or_final_or_event_2219_70_1_end;
        bossmmillahead_3680_instances.empty_selection();
        bossmmillatailend_3685_instances.empty_selection();
        if (or_temp_result_2219_70_0 || or_temp_result_2219_70_1) {
            bossmmillatailend_3685_instances.restore_selection();
        }
        if (or_temp_result_2219_70_0 || or_temp_result_2219_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.05, 1));
        }
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_2219_70_1_end: ;
}
void Frames::event_func_15134()
{
    // event 2220_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2220_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (2))) goto event_2220_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (0))) goto event_2220_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2220_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 0);
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0-((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(12)*50);
        }
    }
    event_2220_70_end: ;
}
void Frames::event_func_15135()
{
    // event 2221_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2221_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (3))) goto event_2221_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) < (60))) goto event_2221_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.1, 1));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.1, 1));
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(5, 1);
    }
    event_2221_70_end: ;
}
void Frames::event_func_15136()
{
    // event 2222_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2222_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (3))) goto event_2222_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (60))) goto event_2222_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.05, 1));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
        }
    }
    event_2222_70_end: ;
}
void Frames::event_func_15137()
{
    // event 2223_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2223_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (3))) goto event_2223_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (60))) goto event_2223_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2223_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 0);
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0-((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(12)*50);
        }
    }
    event_2223_70_end: ;
}
void Frames::event_func_15138()
{
    // event 2224_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2224_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) > (6))) goto event_2224_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(6, 0);
    }
    event_2224_70_end: ;
}
void Frames::event_func_15139()
{
    // event 2225_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2225_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2225_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(10, get_min(((Active*)*it)->alterables->values.get(10)+0.1, 1));
        }
    }
    event_2225_70_end: ;
}
void Frames::event_func_15140()
{
    // event 2226_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2226_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2226_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2226_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, -1);
        }
    }
    event_2226_70_end: ;
}
void Frames::event_func_15141()
{
    // event 2227_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2227_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2227_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2227_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 1);
        }
    }
    event_2227_70_end: ;
}
void Frames::event_func_15142()
{
    // event 2228_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2228_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2228_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2228_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(15)*3);
        }
    }
    event_2228_70_end: ;
}
void Frames::event_func_15143()
{
    // event 2229_70
    bool or_result_2229_70 = false;
    bool or_temp_result_2229_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2229_70_0_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2229_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2229_70_0_end;
        or_result_2229_70 = true;
        or_temp_result_2229_70_0 = true;
    }
    or_event_2229_70_0_end: ;
    bossmmillatailend_3685_instances.clear_saved_selection();
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2229_70_0) {
        bossmmillatailend_3685_instances.save_selection();
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2229_70
    bool or_temp_result_2229_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2229_70_1_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2229_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(kingdomstone_1587_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2229_70_1_end;
        or_result_2229_70 = true;
        or_temp_result_2229_70_1 = true;
        or_event_2229_70_1_end: ;
        if (or_temp_result_2229_70_1) {
            bossmmillatailend_3685_instances.save_selection();
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2229_70) goto or_final_or_event_2229_70_1_end;
        bossmmillahead_3680_instances.empty_selection();
        bossmmillatailend_3685_instances.empty_selection();
        if (or_temp_result_2229_70_0 || or_temp_result_2229_70_1) {
            bossmmillatailend_3685_instances.restore_selection();
        }
        if (or_temp_result_2229_70_0 || or_temp_result_2229_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0-((Active*)*it)->alterables->values.get(15));
        }
    }
    or_final_or_event_2229_70_1_end: ;
}
void Frames::event_func_15144()
{
    // event 2230_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2230_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2230_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (0.5))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2230_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 270);
        }
    }
    event_2230_70_end: ;
}
void Frames::event_func_15145()
{
    // event 2231_70
    bool or_result_2231_70 = false;
    bool or_temp_result_2231_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2231_70_0_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2231_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2231_70_0_end;
        or_result_2231_70 = true;
        or_temp_result_2231_70_0 = true;
    }
    or_event_2231_70_0_end: ;
    bossmmillatailend_3685_instances.clear_saved_selection();
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2231_70_0) {
        bossmmillatailend_3685_instances.save_selection();
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2231_70
    bool or_temp_result_2231_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2231_70_1_end;
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmmillatailend_3685_instances.has_selection()) goto or_event_2231_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2231_70_1_end;
        or_result_2231_70 = true;
        or_temp_result_2231_70_1 = true;
        or_event_2231_70_1_end: ;
        if (or_temp_result_2231_70_1) {
            bossmmillatailend_3685_instances.save_selection();
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2231_70) goto or_final_or_event_2231_70_1_end;
        bossmmillahead_3680_instances.empty_selection();
        bossmmillatailend_3685_instances.empty_selection();
        if (or_temp_result_2231_70_0 || or_temp_result_2231_70_1) {
            bossmmillatailend_3685_instances.restore_selection();
        }
        if (or_temp_result_2231_70_0 || or_temp_result_2231_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0-((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(12)*50);
        }
    }
    or_final_or_event_2231_70_1_end: ;
}
void Frames::event_func_15146()
{
    // event 2232_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2232_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2232_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->force_frame(1);
    }
    event_2232_70_end: ;
}
void Frames::event_func_15147()
{
    // event 2233_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2233_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (220))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2233_70_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto event_2233_70_end;
        FrameObject * single_instance_2233_70_0; single_instance_2233_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmmillatailend_3685_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossbounceshot_3657(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2233_70_0 == NULL)
                    single_instance_2233_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2233_70_0))->set_direction((((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)-1)*8-((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(4)*((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.sub(4, 1);
    }
    event_2233_70_end: ;
}
void Frames::event_func_15148()
{
    // event 2234_70
    bool or_result_2234_70 = false;
    bool or_temp_result_2234_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2234_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (220))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2234_70_0_end;
        or_result_2234_70 = true;
        or_temp_result_2234_70_0 = true;
    }
    or_event_2234_70_0_end: ;
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2234_70_0) {
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2234_70
    bool or_temp_result_2234_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2234_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (180))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2234_70_1_end;
        or_result_2234_70 = true;
        or_temp_result_2234_70_1 = true;
        or_event_2234_70_1_end: ;
        if (or_temp_result_2234_70_1) {
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2234_70) goto or_final_or_event_2234_70_1_end;
        bossmmillahead_3680_instances.empty_selection();
        if (or_temp_result_2234_70_0 || or_temp_result_2234_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        bossmmillatailend_3685_instances.clear_selection();
        for (ObjectIterator it(bossmmillatailend_3685_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    or_final_or_event_2234_70_1_end: ;
}
void Frames::event_func_15149()
{
    // event 2235_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2235_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2235_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(5, 1);
    }
    event_2235_70_end: ;
}
void Frames::event_func_15150()
{
    // event 2236_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2236_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (4))) goto event_2236_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (350))) goto event_2236_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(3, 1);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0.99);
        }
    }
    event_2236_70_end: ;
}
void Frames::event_func_15151()
{
    // event 2237_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2237_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (5))) goto event_2237_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+6, ((Active*)*it)->alterables->values.get(3)));
        }
    }
    event_2237_70_end: ;
}
void Frames::event_func_15152()
{
    // event 2238_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2238_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (5))) goto event_2238_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2238_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, 1));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.1, 0));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_2238_70_end: ;
}
void Frames::event_func_15153()
{
    // event 2239_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2239_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (5))) goto event_2239_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2239_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(7, 0);
    }
    event_2239_70_end: ;
}
void Frames::event_func_15154()
{
    // event 2240_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2240_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0.5))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2240_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, get_max(-4, get_min(((Active*)*it)->alterables->values.get(13)+((Active*)*it)->alterables->values.get(12)*0.2, 4)));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(13));
        }
    }
    event_2240_70_end: ;
}
void Frames::event_func_15155()
{
    // event 2241_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2241_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2241_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, get_max(((Active*)*it)->alterables->values.get(13)-0.5, 0));
        }
    }
    event_2241_70_end: ;
}
void Frames::event_func_15156()
{
    // event 2242_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2242_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2242_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, get_min(((Active*)*it)->alterables->values.get(13)+0.5, 0));
        }
    }
    event_2242_70_end: ;
}
void Frames::event_func_15157()
{
    // event 2243_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2243_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(13));
        }
    }
    event_2243_70_end: ;
}
void Frames::event_func_15158()
{
    // event 2244_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2244_70_end;
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossbounceshot_3657_instances.has_selection()) goto event_2244_70_end;
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->bounce(false);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        effectbounceshotdebris_3658_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossbounceshot_3657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
        }
        media.play_id(SOUND_FD_SPRING_382, -1, 1);
    }
    event_2244_70_end: ;
}
void Frames::event_func_15159()
{
    // event 2245_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2245_70_end;
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossbounceshot_3657_instances.has_selection()) goto event_2245_70_end;
        qualifier_7.clear_selection();
        if (!check_overlap(bossbounceshot_3657_instances, qualifier_7)) goto event_2245_70_end;
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->bounce(false);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        effectbounceshotdebris_3658_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossbounceshot_3657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
        }
        media.play_id(SOUND_FD_SPRING_382, -1, 1);
    }
    event_2245_70_end: ;
}
void Frames::event_func_15160()
{
    // event 2246_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2246_70_end;
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2246_70_end: ;
}
void Frames::event_func_15161()
{
    // event 2247_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2247_70_end;
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+20))) { it.deselect(); continue; }
        }
        if (!effectbounceshotdebris_3658_instances.has_selection()) goto event_2247_70_end;
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2247_70_end: ;
}
void Frames::event_func_15162()
{
    // event 2248_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2248_70_end;
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossbounceshot_3657_instances.has_selection()) goto event_2248_70_end;
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        FrameObject * single_instance_2248_70_0; single_instance_2248_70_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossbounceshot_3657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2248_70_0 == NULL)
                    single_instance_2248_70_0 = new_obj;
            }
        }
    }
    event_2248_70_end: ;
}
void Frames::event_func_15163()
{
    // event 2249_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2249_70_end;
        bossbounceshot_3657_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossbounceshot_3657_instances, player_389_instances)) goto event_2249_70_end;
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 9);
        }
    }
    event_2249_70_end: ;
}
