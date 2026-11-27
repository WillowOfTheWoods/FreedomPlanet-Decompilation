#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15932()
{
    // event 2140_72
    bool or_result_2140_72 = false;
    bool or_temp_result_2140_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2140_72_0_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (2))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto or_event_2140_72_0_end;
        or_result_2140_72 = true;
        or_temp_result_2140_72_0 = true;
    }
    or_event_2140_72_0_end: ;
    brevonhitbox_3781_instances.clear_saved_selection();
    if (or_temp_result_2140_72_0) {
        brevonhitbox_3781_instances.save_selection();
    }
    // event 2140_72
    bool or_temp_result_2140_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2140_72_1_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto or_event_2140_72_1_end;
        or_result_2140_72 = true;
        or_temp_result_2140_72_1 = true;
    }
    or_event_2140_72_1_end: ;
    if (or_temp_result_2140_72_1) {
        brevonhitbox_3781_instances.save_selection();
    }
    // event 2140_72
    bool or_temp_result_2140_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2140_72_2_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto or_event_2140_72_2_end;
        or_result_2140_72 = true;
        or_temp_result_2140_72_2 = true;
        or_event_2140_72_2_end: ;
        if (or_temp_result_2140_72_2) {
            brevonhitbox_3781_instances.save_selection();
        }
        if (!or_result_2140_72) goto or_final_or_event_2140_72_2_end;
        brevonhitbox_3781_instances.empty_selection();
        if (or_temp_result_2140_72_0 || or_temp_result_2140_72_1 || or_temp_result_2140_72_2) {
            brevonhitbox_3781_instances.restore_selection();
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_2140_72_2_end: ;
}
void Frames::event_func_15933()
{
    // event 2141_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2141_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2141_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) < (60))) goto event_2141_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 60);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -4);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, get_max(-1, get_min(((Active*)get_single(brevonhitbox_3781_instances, default_active_instance))->alterables->values.get(23), 1))*10);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 0-get_max(-1, get_min(((Active*)get_single(brevonhitbox_3781_instances, default_active_instance))->alterables->values.get(23), 1)));
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.sub(6, 2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_visible(false);
        ((Active*)get_instance(brevoncrosshair6_3790_instances))->set_visible(false);
            group_pause_1 = false;
    
    }
    event_2141_72_end: ;
}
void Frames::event_func_15934()
{
    // event 2142_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2142_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (60))) goto event_2142_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9)) > (-2))) goto event_2142_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9)) < (2))) goto event_2142_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, 10);
    }
    event_2142_72_end: ;
}
void Frames::event_func_15935()
{
    // event 2143_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2143_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (60))) goto event_2143_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(10, 0.4);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
        ((Active*)get_instance(brevon_3683_instances))->force_animation(8);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(6, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6), ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)));
    }
    event_2143_72_end: ;
}
void Frames::event_func_15936()
{
    // event 2144_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2144_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) >= (60))) goto event_2144_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_2144_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_2144_72_end: ;
}
void Frames::event_func_15937()
{
    // event 2145_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2145_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) >= (60))) goto event_2145_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5))*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6))*0.05);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2145_72_end: ;
}
void Frames::event_func_15938()
{
    // event 2146_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2146_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (60))) goto event_2146_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10)) > (0))) goto event_2146_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2146_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_layer(5-1);
    }
    event_2146_72_end: ;
}
void Frames::event_func_15939()
{
    // event 2147_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2147_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (61))) goto event_2147_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->force_animation(8);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+2);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9)*0.95);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(brevon_3683_instances))->move_front();
    }
    event_2147_72_end: ;
}
void Frames::event_func_15940()
{
    // event 2148_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2148_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) >= (61))) goto event_2148_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2148_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (102))) goto event_2148_72_end;
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
    event_2148_72_end: ;
}
void Frames::event_func_15941()
{
    // event 2149_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2149_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (61))) goto event_2149_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2149_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2149_72_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 62);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1) {
            group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1 = true;
        }
    }
    event_2149_72_end: ;
}
void Frames::event_func_15942()
{
    // event 2150_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2150_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2150_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_2150_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_2150_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2150_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
        }
    }
    event_2150_72_end: ;
}
void Frames::event_func_15943()
{
    // event 2151_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2151_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2151_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_2151_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_2151_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(4);
        media.play_id(SOUND_LILAC_COMETSTART_9, 20-1);
        media.set_channel_volume(20-1, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
    }
    event_2151_72_end: ;
}
void Frames::event_func_15944()
{
    // event 2152_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2152_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2152_72_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(brevon_3683_instances))->move_front();
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2152_72_end: ;
}
void Frames::event_func_15945()
{
    // event 2153_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2153_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) > (60))) goto event_2153_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2153_72_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_2153_72_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(5-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_72();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_2153_72_end: ;
}
void Frames::event_func_15946()
{
    // event 2155_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2155_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2155_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2155_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->get_x()))) goto event_2155_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_2155_72_end: ;
}
void Frames::event_func_15947()
{
    // event 2156_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2156_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2156_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2156_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(brevon_3683_instances))->get_x()))) goto event_2156_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_2156_72_end: ;
}
void Frames::event_func_15948()
{
    // event 2157_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2157_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2157_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-40))) goto event_2157_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_2157_72_end: ;
}
void Frames::event_func_15949()
{
    // event 2158_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2158_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2158_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2158_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-48))) goto event_2158_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 4);
    }
    event_2158_72_end: ;
}
void Frames::event_func_15950()
{
    // event 2159_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2159_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2159_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2159_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_2159_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)-20))) goto event_2159_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, 1);
    }
    event_2159_72_end: ;
}
void Frames::event_func_15951()
{
    // event 2160_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2160_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2160_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)) == (1))) goto event_2160_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+20);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
    }
    event_2160_72_end: ;
}
void Frames::event_func_15952()
{
    // event 2161_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2161_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2161_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2161_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_2161_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)+20))) goto event_2161_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, -1);
    }
    event_2161_72_end: ;
}
void Frames::event_func_15953()
{
    // event 2162_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2162_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2162_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)) == (-1))) goto event_2162_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-20);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
    }
    event_2162_72_end: ;
}
void Frames::event_func_15954()
{
    // event 2163_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2163_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2163_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2163_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2163_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2163_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_2163_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)-30))) goto event_2163_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(9)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(8));
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+randrange(2));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_2163_72_end: ;
}
void Frames::event_func_15955()
{
    // event 2164_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2164_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2164_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2164_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2164_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2164_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_2164_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)+30))) goto event_2164_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(9)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(8));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+randrange(2));
    }
    event_2164_72_end: ;
}
void Frames::event_func_15956()
{
    // event 2165_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2165_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2165_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_on(4))) goto event_2165_72_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (80))) goto event_2165_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_2165_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_46_03_ogg_258, 27-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_2165_72_end: ;
}
void Frames::event_func_15957()
{
    // event 2166_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2166_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2166_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_on(4))) goto event_2166_72_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (80))) goto event_2166_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_2166_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_46_04_ogg_259, 27-1);
    }
    event_2166_72_end: ;
}
void Frames::event_func_15958()
{
    // event 2167_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2167_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2167_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_on(4))) goto event_2167_72_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (80))) goto event_2167_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2167_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_46_05_ogg_260, 27-1);
    }
    event_2167_72_end: ;
}
void Frames::event_func_15959()
{
    // event 2168_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2168_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2168_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_2168_72_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-10);
        }
    }
    event_2168_72_end: ;
}
void Frames::event_func_15960()
{
    // event 2169_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2169_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2169_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2169_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_2169_72_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2169_72_0_end;
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
        dynamic_2169_72_0_end: ;
        FrameObject * single_instance_2169_72_1; single_instance_2169_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2169_72_1 == NULL)
                    single_instance_2169_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2169_72_1))->alterables->values.set(0, -4+randrange(9));
        FrameObject * single_instance_2169_72_2; single_instance_2169_72_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2169_72_2 == NULL)
                    single_instance_2169_72_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2169_72_2))->set_x(((Active*)get_instance(player_389_instances))->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_2169_72_2))->set_y(((Active*)get_instance(player_389_instances))->get_y()-10+randrange(21));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(12)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(12));
    }
    event_2169_72_end: ;
}
void Frames::event_func_15961()
{
    // event 2170_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2170_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (400))) goto event_2170_72_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_2170_72_end: ;
}
void Frames::event_func_15962()
{
    // event 2171_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2171_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2171_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (450))) goto event_2171_72_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
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
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
    }
    event_2171_72_end: ;
}
void Frames::event_func_15963()
{
    // event 2172_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2172_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2172_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (540))) goto event_2172_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_2172_72_end: ;
}
void Frames::event_func_15964()
{
    // event 2173_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2173_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2173_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (540))) goto event_2173_72_end;
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2173_72_end: ;
}
void Frames::event_func_15965()
{
    // event 2174_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2174_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2174_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (540))) goto event_2174_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-2, 0));
        }
    }
    event_2174_72_end: ;
}
void Frames::event_func_15966()
{
    // event 2175_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1)) goto event_2175_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2175_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (620))) goto event_2175_72_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
    }
    event_2175_72_end: ;
}
void Frames::event_func_15967()
{
    // event 2176_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2176_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (61))) goto event_2176_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2176_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_2176_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_2176_72_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 62);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1) {
            group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1 = true;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
    }
    event_2176_72_end: ;
}
void Frames::event_func_15968()
{
    // event 2177_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2177_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2177_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)*9+((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)+((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*20)*0.1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)*9+((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)-30)*0.1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.enable(3);
        }
        ((Active*)get_instance(brevon_3683_instances))->move_front();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -1);
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2177_72_end: ;
}
void Frames::event_func_15969()
{
    // event 2178_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2178_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) > (60))) goto event_2178_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2178_72_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_2178_72_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(5-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_72();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_2178_72_end: ;
}
void Frames::event_func_15970()
{
    // event 2180_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2180_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2180_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->get_x()))) goto event_2180_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_2180_72_end: ;
}
void Frames::event_func_15971()
{
    // event 2181_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2181_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2181_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(brevon_3683_instances))->get_x()))) goto event_2181_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_2181_72_end: ;
}
void Frames::event_func_15972()
{
    // event 2182_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2182_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2182_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2182_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (70))) goto event_2182_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_2182_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)-30))) goto event_2182_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(9)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(8));
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+randrange(2));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_2182_72_end: ;
}
void Frames::event_func_15973()
{
    // event 2183_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2183_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2183_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2183_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (70))) goto event_2183_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_2183_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)+30))) goto event_2183_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(9)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(8));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+randrange(2));
    }
    event_2183_72_end: ;
}
void Frames::event_func_15974()
{
    // event 2184_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2184_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2184_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (240))) goto event_2184_72_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-10);
        }
    }
    event_2184_72_end: ;
}
void Frames::event_func_15975()
{
    // event 2185_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2185_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2185_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2185_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (240))) goto event_2185_72_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2185_72_0_end;
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
        dynamic_2185_72_0_end: ;
        FrameObject * single_instance_2185_72_1; single_instance_2185_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2185_72_1 == NULL)
                    single_instance_2185_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2185_72_1))->alterables->values.set(0, -4+randrange(9));
        FrameObject * single_instance_2185_72_2; single_instance_2185_72_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2185_72_2 == NULL)
                    single_instance_2185_72_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2185_72_2))->set_x(((Active*)get_instance(player_389_instances))->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_2185_72_2))->set_y(((Active*)get_instance(player_389_instances))->get_y()-10+randrange(21));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, randrange(12)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, randrange(12));
    }
    event_2185_72_end: ;
}
void Frames::event_func_15976()
{
    // event 2186_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2186_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (62))) goto event_2186_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (350))) goto event_2186_72_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
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
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
    }
    event_2186_72_end: ;
}
void Frames::event_func_15977()
{
    // event 2187_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2187_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2187_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (440))) goto event_2187_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_2187_72_end: ;
}
void Frames::event_func_15978()
{
    // event 2188_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2188_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2188_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (440))) goto event_2188_72_end;
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2188_72_end: ;
}
void Frames::event_func_15979()
{
    // event 2189_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2189_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2189_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (440))) goto event_2189_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-2, 0));
        }
    }
    event_2189_72_end: ;
}
void Frames::event_func_15980()
{
    // event 2190_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1)) goto event_2190_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (63))) goto event_2190_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (520))) goto event_2190_72_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
    }
    event_2190_72_end: ;
}
void Frames::event_func_15981()
{
    // event 2191_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2191_72_end;
        brevonwingbeam2_3748_instances.clear_selection();
        for (ObjectIterator it(brevonwingbeam2_3748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 3);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y_scale(1-(((Active*)*it)->alterables->values.get(2)*0.01));
        }
    }
    event_2191_72_end: ;
}
void Frames::event_func_15982()
{
    // event 2192_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2192_72_end;
        brevonwingbeam2_3748_instances.clear_selection();
        for (ObjectIterator it(brevonwingbeam2_3748_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (100))) { it.deselect(); continue; }
        }
        if (!brevonwingbeam2_3748_instances.has_selection()) goto event_2192_72_end;
        for (ObjectIterator it(brevonwingbeam2_3748_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2192_72_end: ;
}
void Frames::event_func_15983()
{
    // event 2193_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2193_72_end;
        brevonwingbeam2_3748_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonwingbeam2_3748_instances, playercharactersensor_383_instances)) goto event_2193_72_end;
        for (ObjectIterator it(brevonwingbeam2_3748_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (80))) { it.deselect(); continue; }
        }
        if (!brevonwingbeam2_3748_instances.has_selection()) goto event_2193_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2193_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2193_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2193_72_end: ;
}
void Frames::event_func_15984()
{
    // event 2194_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2194_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2194_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(5, 0.3*((Active*)*it)->alterables->values.get(7));
        }
    }
    event_2194_72_end: ;
}
void Frames::event_func_15985()
{
    // event 2195_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2195_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-16))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2195_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2195_72_end: ;
}
void Frames::event_func_15986()
{
    // event 2196_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2196_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (16))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2196_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2196_72_end: ;
}
void Frames::event_func_15987()
{
    // event 2197_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2197_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+16))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2197_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_x(((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+16);
        }
    }
    event_2197_72_end: ;
}
void Frames::event_func_15988()
{
    // event 2198_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2198_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-16))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2198_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_x(((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-16);
        }
    }
    event_2198_72_end: ;
}
void Frames::event_func_15989()
{
    // event 2199_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2199_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2199_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(6)*((Active*)*it)->alterables->values.get(6)*0.01)%math_helper%4);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2199_72_end: ;
}
void Frames::event_func_15990()
{
    // event 2200_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2200_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2200_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_2200_72_end: ;
}
void Frames::event_func_15991()
{
    // event 2201_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2201_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2201_72_end;
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_2201_72_end: ;
}
void Frames::event_func_15992()
{
    // event 2202_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2202_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2202_72_end;
        if (not_always_2202_72 > loop_count) {
            not_always_2202_72 = loop_count + 2;
            goto event_2202_72_end;
        }
        not_always_2202_72 = loop_count + 2;
        media.play_id(SOUND_COMMON_BOMBTICK_173, -1, 1);
    }
    event_2202_72_end: ;
}
void Frames::event_func_15993()
{
    // event 2203_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2203_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2203_72_end;
        FrameObject * single_instance_2203_72_0; single_instance_2203_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_2203_72_0 == NULL)
                    single_instance_2203_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2203_72_0))->set_direction(0);
    }
    event_2203_72_end: ;
}
void Frames::event_func_15994()
{
    // event 2204_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2204_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2204_72_end;
        FrameObject * single_instance_2204_72_0; single_instance_2204_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_2204_72_0 == NULL)
                    single_instance_2204_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2204_72_0))->set_direction(16);
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2204_72_1; single_instance_2204_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_2204_72_1 == NULL)
                    single_instance_2204_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2204_72_1))->force_frame(9);
        ((Active*)((Active*)single_instance_2204_72_1))->alterables->flags.enable(25);
    }
    event_2204_72_end: ;
}
void Frames::event_func_15995()
{
    // event 2205_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2205_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2205_72_end;
        FrameObject * single_instance_2205_72_0; single_instance_2205_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_2205_72_0 == NULL)
                    single_instance_2205_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2205_72_0))->set_direction(0);
        {
            ((Active*)single_instance_2205_72_0)->set_shader(Render::NONE);
        }
    }
    event_2205_72_end: ;
}
void Frames::event_func_15996()
{
    // event 2206_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2206_72_end;
        brevonproxymine_3749_instances.clear_selection();
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonproxymine_3749_instances.has_selection()) goto event_2206_72_end;
        FrameObject * single_instance_2206_72_0; single_instance_2206_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_2206_72_0 == NULL)
                    single_instance_2206_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2206_72_0))->set_direction(16);
        for (ObjectIterator it(brevonproxymine_3749_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2206_72_1; single_instance_2206_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonproxymine_3749_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_2206_72_1 == NULL)
                    single_instance_2206_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2206_72_1))->force_frame(9);
        ((Active*)((Active*)single_instance_2206_72_1))->alterables->flags.enable(25);
        {
            ((Active*)single_instance_2206_72_0)->set_shader(Render::NONE);
        }
    }
    event_2206_72_end: ;
}
void Frames::event_func_15997()
{
    // event 2207_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2207_72_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2207_72_end: ;
}
void Frames::event_func_15998()
{
    // event 2208_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2208_72_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_2208_72_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_2208_72_end: ;
}
void Frames::event_func_15999()
{
    // event 2209_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2209_72_end;
        hazardshockwave_1524_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardshockwave_1524_instances, playercharactersensor_383_instances)) goto event_2209_72_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_2209_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2209_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2209_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(hazardshockwave_1524_instances, default_active_instance))->alterables->values.get(0));
    }
    event_2209_72_end: ;
}
void Frames::event_func_16000()
{
    // event 2210_72
    bool or_result_2210_72 = false;
    bool or_temp_result_2210_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2210_72_0_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto or_event_2210_72_0_end;
        or_result_2210_72 = true;
        or_temp_result_2210_72_0 = true;
    }
    or_event_2210_72_0_end: ;
    brevonsuitlaser_3741_instances.clear_saved_selection();
    if (or_temp_result_2210_72_0) {
        brevonsuitlaser_3741_instances.save_selection();
    }
    // event 2210_72
    bool or_temp_result_2210_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2210_72_1_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto or_event_2210_72_1_end;
        or_result_2210_72 = true;
        or_temp_result_2210_72_1 = true;
        or_event_2210_72_1_end: ;
        if (or_temp_result_2210_72_1) {
            brevonsuitlaser_3741_instances.save_selection();
        }
        if (!or_result_2210_72) goto or_final_or_event_2210_72_1_end;
        brevonsuitlaser_3741_instances.clear_selection();
        if (or_temp_result_2210_72_0 || or_temp_result_2210_72_1) {
            brevonsuitlaser_3741_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3)*-1);
        }
    }
    or_final_or_event_2210_72_1_end: ;
}
void Frames::event_func_16001()
{
    // event 2211_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2211_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2211_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2211_72_end: ;
}
void Frames::event_func_16002()
{
    // event 2212_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2212_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2212_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2212_72_end: ;
}
void Frames::event_func_16003()
{
    // event 2215_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2215_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playerreflect_447_instances)) goto event_2215_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2215_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2215_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.add(2, 180);
        }
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
    }
    event_2215_72_end: ;
}
void Frames::event_func_16004()
{
    // event 2216_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2216_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, qualifier_20)) goto event_2216_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2216_72_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_2216_72_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 4);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_2216_72_end: ;
}
void Frames::event_func_16005()
{
    // event 2217_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2217_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playercharactersensor_383_instances)) goto event_2217_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2217_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2217_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2217_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, cos_deg(((Active*)get_single(brevonsuitlaser_3741_instances, default_active_instance))->alterables->values.get(2))*10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, sin_deg(((Active*)get_single(brevonsuitlaser_3741_instances, default_active_instance))->alterables->values.get(2))*-10);
    }
    event_2217_72_end: ;
}
void Frames::event_func_16006()
{
    // event 2218_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2218_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playercharactersensor_383_instances)) goto event_2218_72_end;
        if (!check_not_overlap(brevonsuitlaser_3741_instances, playerreflect_447_instances)) goto event_2218_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2218_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_BLAST1_55, -1, 1);
        FrameObject * single_instance_2218_72_0; single_instance_2218_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitlaser_3741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2218_72_0 == NULL)
                    single_instance_2218_72_0 = new_obj;
            }
        }
    }
    event_2218_72_end: ;
}
void Frames::event_func_16007()
{
    // event 2219_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2219_72_end;
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y_scale(get_min(1, 2-((Active*)*it)->alterables->values.get(0)*0.05));
            ((Active*)*it)->set_y(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7));
        }
    }
    event_2219_72_end: ;
}
void Frames::event_func_16008()
{
    // event 2220_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2220_72_end;
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!brevonsuitflametrail_3742_instances.has_selection()) goto event_2220_72_end;
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2220_72_end: ;
}
void Frames::event_func_16009()
{
    // event 2221_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2221_72_end;
        brevonsuitflametrail_3742_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitflametrail_3742_instances, playercharactersensor_383_instances)) goto event_2221_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2221_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2221_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2221_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_2221_72_end: ;
}
void Frames::event_func_16010()
{
    // event 2223_72
    {
        if (!(group_main_engine_1)) goto event_2223_72_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2223_72_end;
        if (once_condition_2223_72) goto event_2223_72_end;
        once_condition_2223_72 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 56)) == (0))) goto event_2223_72_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (480000))) goto event_2223_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 56);
    }
    event_2223_72_end: ;
}
void Frames::event_func_16011()
{
    // event 2224_72
    {
        if (!(group_main_engine_1)) goto event_2224_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (60))) goto event_2224_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (4))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2224_72_end;
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_2224_72_end: ;
}
void Frames::event_func_16012()
{
    // event 2225_72
    {
        if (!(group_main_engine_1)) goto event_2225_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2225_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2225_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_2225_72_end: ;
}
void Frames::event_func_16013()
{
    // event 2226_72
    {
        if (!(group_main_engine_1)) goto event_2226_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2226_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2226_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_2226_72_end: ;
}
void Frames::event_func_16014()
{
    // event 2227_72
    {
        if (!(group_main_engine_1)) goto event_2227_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2227_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2227_72_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2227_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2227_72_end: ;
}
void Frames::event_func_16015()
{
    // event 2228_72
    {
        if (!(group_main_engine_1)) goto event_2228_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2228_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2228_72_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2228_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2228_72_end: ;
}
void Frames::event_func_16016()
{
    // event 2229_72
    {
        if (!(group_main_engine_1)) goto event_2229_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2229_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2229_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_2229_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_2229_72_end: ;
}
void Frames::event_func_16017()
{
    // event 2230_72
    {
        if (!(group_main_engine_1)) goto event_2230_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2230_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2230_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_2230_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_2230_72_end: ;
}
void Frames::event_func_16018()
{
    // event 2231_72
    {
        if (!(group_main_engine_1)) goto event_2231_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2231_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_2231_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_2231_72_end: ;
}
void Frames::event_func_16019()
{
    // event 2232_72
    {
        if (!(group_main_engine_1)) goto event_2232_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2232_72_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, brevonhitbox_3781_instances)) goto event_2232_72_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_2232_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_2232_72_end: ;
}
void Frames::event_func_16020()
{
    // event 2233_72
    {
        if (!(group_main_engine_1)) goto event_2233_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2233_72_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, brevonhitbox_3781_instances)) goto event_2233_72_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_2233_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_2233_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_2233_72_end: ;
}
void Frames::event_func_16021()
{
    // event 2234_72
    {
        if (!(group_main_engine_1)) goto event_2234_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2234_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 4)) == (0))) goto event_2234_72_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)) == (0))) goto event_2234_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 4);
    }
    event_2234_72_end: ;
}
void Frames::event_func_16022()
{
    // event 2235_72
    {
        if (!(group_main_engine_1)) goto event_2235_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2235_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 5)) == (0))) goto event_2235_72_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 6)) < (5400000))) goto event_2235_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 5);
    }
    event_2235_72_end: ;
}
void Frames::event_func_16023()
{
    // event 2236_72
    {
        if (!(group_main_engine_1)) goto event_2236_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2236_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 6)) == (0))) goto event_2236_72_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 4)) >= (7000))) goto event_2236_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 6);
    }
    event_2236_72_end: ;
}
void Frames::event_func_16024()
{
    // event 2237_72
    {
        if (!(group_main_engine_1)) goto event_2237_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2237_72_end;
        if (!((global_values->get(0)) <= (2))) goto event_2237_72_end;
        if (!((global_values->get(1)) == (0))) goto event_2237_72_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_2237_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 1)) == (0))) goto event_2237_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 1);
    }
    event_2237_72_end: ;
}
void Frames::event_func_16025()
{
    // event 2238_72
    {
        if (!(group_main_engine_1)) goto event_2238_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2238_72_end;
        if (!((global_values->get(0)) <= (2))) goto event_2238_72_end;
        if (!((global_values->get(1)) >= (2))) goto event_2238_72_end;
        if (!((global_values->get(1)) <= (3))) goto event_2238_72_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_2238_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 2)) == (0))) goto event_2238_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 2);
    }
    event_2238_72_end: ;
}
void Frames::event_func_16026()
{
    // event 2239_72
    {
        if (!(group_main_engine_1)) goto event_2239_72_end;
        if (!((global_values->get(0)) >= (1))) goto event_2239_72_end;
        if (!((global_values->get(0)) <= (2))) goto event_2239_72_end;
        if (!((global_values->get(1)) == (4))) goto event_2239_72_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_2239_72_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 3)) == (0))) goto event_2239_72_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 3);
    }
    event_2239_72_end: ;
}
void Frames::event_func_16027()
{
    // event 2397_72
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2397_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (96))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2397_72_end;
        if (!((global_values->get(4)) != (0))) goto event_2397_72_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+3, 100));
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+3, 100));
        }
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2397_72_end: ;
}
void Frames::event_func_16028()
{
    // event 2398_72
    bool or_result_2398_72 = false;
    bool or_temp_result_2398_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto or_event_2398_72_0_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_2398_72_0_end;
        if (!((global_values->get(4)) != (0))) goto or_event_2398_72_0_end;
        or_result_2398_72 = true;
        or_temp_result_2398_72_0 = true;
    }
    or_event_2398_72_0_end: ;
    guiicon_452_instances.clear_saved_selection();
    if (or_temp_result_2398_72_0) {
        guiicon_452_instances.save_selection();
    }
    // event 2398_72
    bool or_temp_result_2398_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto or_event_2398_72_1_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_2398_72_1_end;
        if (!((global_values->get(4)) != (0))) goto or_event_2398_72_1_end;
        or_result_2398_72 = true;
        or_temp_result_2398_72_1 = true;
        or_event_2398_72_1_end: ;
        brevonmechbackground_2513_instances.clear_saved_selection();
        if (or_temp_result_2398_72_1) {
            brevonmechbackground_2513_instances.save_selection();
        }
        if (!or_result_2398_72) goto or_final_or_event_2398_72_1_end;
        guiicon_452_instances.empty_selection();
        brevonmechbackground_2513_instances.empty_selection();
        if (or_temp_result_2398_72_1) {
            brevonmechbackground_2513_instances.restore_selection();
        }
        if (or_temp_result_2398_72_0) {
            guiicon_452_instances.restore_selection();
        }
        guiscoretimerings_451_instances.clear_selection();
        for (ObjectIterator it(guiscoretimerings_451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        manager.ignore_controls = false;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        guilives_454_instances.clear_selection();
        for (ObjectIterator it(guilives_454_instances); !it.end(); ++it) {
            ((Counter*)*it)->set_visible(true);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_min(((Active*)*it)->alterables->values.get(12), 2));
            ((Active*)*it)->alterables->values.set(20, 0);
        }
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    or_final_or_event_2398_72_1_end: ;
}
void Frames::event_func_16029()
{
    // event 2442_72
    {
        if (!(group_pause_1)) goto event_2442_72_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2442_72_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2442_72_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2442_72_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2442_72_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
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
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->stop_animation();
        ((Active*)get_instance(objecttransporter_3344_instances))->stop_animation();
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(effectterreonwarning_2986_instances))->stop_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->stop_animation();
        ((Active*)get_instance(brevon_3683_instances))->stop_animation();
        computerterminal_3666_instances.clear_selection();
        for (ObjectIterator it(computerterminal_3666_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        computerterminal2_3668_instances.clear_selection();
        for (ObjectIterator it(computerterminal2_3668_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonsuitwarning_3745_instances.clear_selection();
        for (ObjectIterator it(effectbrevonsuitwarning_3745_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectstinyexplosion_3746_instances.clear_selection();
        for (ObjectIterator it(effectstinyexplosion_3746_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_2442_72_end: ;
}
void Frames::event_func_16030()
{
    // event 2443_72
    bool or_result_2443_72 = false;
    bool or_temp_result_2443_72_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2443_72_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2443_72_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2443_72_0_end;
        or_result_2443_72 = true;
        or_temp_result_2443_72_0 = true;
    }
    or_event_2443_72_0_end: ;
    // event 2443_72
    bool or_temp_result_2443_72_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2443_72_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2443_72_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2443_72_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2443_72_1_end;
        or_result_2443_72 = true;
        or_temp_result_2443_72_1 = true;
        or_event_2443_72_1_end: ;
        if (!or_result_2443_72) goto or_final_or_event_2443_72_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
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
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->start_animation();
        ((Active*)get_instance(objecttransporter_3344_instances))->start_animation();
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(effectterreonwarning_2986_instances))->start_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->start_animation();
        ((Active*)get_instance(brevon_3683_instances))->start_animation();
        computerterminal_3666_instances.clear_selection();
        for (ObjectIterator it(computerterminal_3666_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        computerterminal2_3668_instances.clear_selection();
        for (ObjectIterator it(computerterminal2_3668_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonsuitwarning_3745_instances.clear_selection();
        for (ObjectIterator it(effectbrevonsuitwarning_3745_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectstinyexplosion_3746_instances.clear_selection();
        for (ObjectIterator it(effectstinyexplosion_3746_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2443_72_1_end: ;
}
void Frames::event_func_16031()
{
    // event 2458_72
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2458_72_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2458_72_end;
        if (not_always_2458_72 > loop_count) {
            not_always_2458_72 = loop_count + 2;
            goto event_2458_72_end;
        }
        not_always_2458_72 = loop_count + 2;
            group_main_engine_1 = false;
    
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
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
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->stop_animation();
        ((Active*)get_instance(objecttransporter_3344_instances))->stop_animation();
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(effectterreonwarning_2986_instances))->stop_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->stop_animation();
        ((Active*)get_instance(brevon_3683_instances))->stop_animation();
        computerterminal_3666_instances.clear_selection();
        for (ObjectIterator it(computerterminal_3666_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        computerterminal2_3668_instances.clear_selection();
        for (ObjectIterator it(computerterminal2_3668_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2458_72_end: ;
}
