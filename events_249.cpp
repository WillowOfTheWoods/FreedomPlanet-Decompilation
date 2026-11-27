#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19921()
{
    // event 2300_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2300_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (141))) goto event_2300_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (462))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2300_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2300_83_end: ;
}
void Frames::event_func_19922()
{
    // event 2301_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2301_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (141))) goto event_2301_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (462))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2301_83_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2301_83_end: ;
}
void Frames::event_func_19923()
{
    // event 2302_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2302_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (142))) goto event_2302_83_end;
        if (once_condition_2302_83) goto event_2302_83_end;
        once_condition_2302_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(462);
        }
    }
    event_2302_83_end: ;
}
void Frames::event_func_19924()
{
    // event 2303_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2303_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2303_83_end;
        if (once_condition_2303_83) goto event_2303_83_end;
        once_condition_2303_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_2303_83_end: ;
}
void Frames::event_func_19925()
{
    // event 2304_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2304_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2304_83_end;
        if (once_condition_2304_83) goto event_2304_83_end;
        once_condition_2304_83 = true;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2304_83_end: ;
}
void Frames::event_func_19926()
{
    // event 2305_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2305_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2305_83_end;
        if (!((media.get_channel_position(-1 +20)) < (1000))) goto event_2305_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_2305_83_end: ;
}
void Frames::event_func_19927()
{
    // event 2306_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2306_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2306_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1000))) goto event_2306_83_end;
        if (once_condition_2306_83) goto event_2306_83_end;
        once_condition_2306_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 33);
    }
    event_2306_83_end: ;
}
void Frames::event_func_19928()
{
    // event 2307_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2307_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2307_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2800))) goto event_2307_83_end;
        if (once_condition_2307_83) goto event_2307_83_end;
        once_condition_2307_83 = true;
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(3);
    }
    event_2307_83_end: ;
}
void Frames::event_func_19929()
{
    // event 2308_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2308_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(3))) goto event_2308_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(50);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_2308_83_end: ;
}
void Frames::event_func_19930()
{
    // event 2309_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2309_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(3))) goto event_2309_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2309_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2309_83_end: ;
}
void Frames::event_func_19931()
{
    // event 2310_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2310_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2310_83_end;
        if (!((media.get_channel_position(-1 +20)) > (4600))) goto event_2310_83_end;
        if (once_condition_2310_83) goto event_2310_83_end;
        once_condition_2310_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
    }
    event_2310_83_end: ;
}
void Frames::event_func_19932()
{
    // event 2311_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2311_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2311_83_end;
        if (!((media.get_channel_position(-1 +20)) > (6500))) goto event_2311_83_end;
        if (once_condition_2311_83) goto event_2311_83_end;
        once_condition_2311_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 21);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_2311_83_end: ;
}
void Frames::event_func_19933()
{
    // event 2312_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2312_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2312_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2312_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2312_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_2312_83_end: ;
}
void Frames::event_func_19934()
{
    // event 2313_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2313_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2313_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2313_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2313_83_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 15);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_min(5+((Active*)*it)->alterables->values.get(0)*0.5, 30));
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2313_83_end: ;
}
void Frames::event_func_19935()
{
    // event 2314_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2314_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2314_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2314_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2314_83_end;
        if (not_always_2314_83 > loop_count) {
            not_always_2314_83 = loop_count + 2;
            goto event_2314_83_end;
        }
        not_always_2314_83 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGB_185, -1, 1);
        ((Active*)get_instance(playerdig_448_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerdig_448_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x()+12);
        ((Active*)get_instance(playerdig_448_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(playerdig_448_instances))->move_front(((Active*)get_single(playerskinmilla_446_instances)));
        ((Active*)get_instance(playerdig_448_instances))->force_frame(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->alterables->values.get(1)/math_helper/24);
        ((Active*)get_instance(playerdig_448_instances))->set_visible(true);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_2314_83_end: ;
}
void Frames::event_func_19936()
{
    // event 2315_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2315_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2315_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2315_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2315_83_end;
        if (not_always_2315_83 > loop_count) {
            not_always_2315_83 = loop_count + 2;
            goto event_2315_83_end;
        }
        not_always_2315_83 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGA_184, -1, 1);
        ((Active*)get_instance(playerdig_448_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerdig_448_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x()+12);
        ((Active*)get_instance(playerdig_448_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(playerdig_448_instances))->move_front(((Active*)get_single(playerskinmilla_446_instances)));
        ((Active*)get_instance(playerdig_448_instances))->force_frame(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->alterables->values.get(1)/math_helper/24);
        ((Active*)get_instance(playerdig_448_instances))->set_visible(true);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
    }
    event_2315_83_end: ;
}
void Frames::event_func_19937()
{
    // event 2316_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2316_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2316_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (300))) goto event_2316_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2316_83_end: ;
}
void Frames::event_func_19938()
{
    // event 2317_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2317_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (143))) goto event_2317_83_end;
        if (!((media.get_channel_position(-1 +20)) > (7500))) goto event_2317_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2317_83_end: ;
}
void Frames::event_func_19939()
{
    // event 2318_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2318_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (144))) goto event_2318_83_end;
        if (once_condition_2318_83) goto event_2318_83_end;
        once_condition_2318_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(12);
        }
        ((Active*)get_instance(playerdig_448_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerdig_448_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x()+12);
        ((Active*)get_instance(playerdig_448_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(playerdig_448_instances))->move_front(((Active*)get_single(playerskinmilla_446_instances)));
        ((Active*)get_instance(playerdig_448_instances))->force_frame(9);
        ((Active*)get_instance(playerdig_448_instances))->set_visible(true);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 6);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2318_83_end: ;
}
void Frames::event_func_19940()
{
    // event 2319_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2319_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2319_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (144))) goto event_2319_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2319_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_20_07_ogg_331, 17-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_23_06_ogg_332, 18-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(29);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_2319_83_end: ;
}
void Frames::event_func_19941()
{
    // event 2320_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2320_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2320_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (20))) goto event_2320_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2320_83_end: ;
}
void Frames::event_func_19942()
{
    // event 2321_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2321_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2321_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2321_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2321_83_end: ;
}
void Frames::event_func_19943()
{
    // event 2322_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2322_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2322_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (145))) goto event_2322_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (148))) goto event_2322_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2322_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2322_83_end: ;
}
void Frames::event_func_19944()
{
    // event 2323_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2323_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (147))) goto event_2323_83_end;
        if (once_condition_2323_83) goto event_2323_83_end;
        once_condition_2323_83 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2323_83_end: ;
}
void Frames::event_func_19945()
{
    // event 2324_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2324_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (148))) goto event_2324_83_end;
        if (once_condition_2324_83) goto event_2324_83_end;
        once_condition_2324_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(21);
        }
    }
    event_2324_83_end: ;
}
void Frames::event_func_19946()
{
    // event 2325_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2325_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2325_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (148))) goto event_2325_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (149))) goto event_2325_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2325_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2325_83_end: ;
}
void Frames::event_func_19947()
{
    // event 2326_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2326_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2326_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2326_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2326_83_end: ;
}
void Frames::event_func_19948()
{
    // event 2327_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2327_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2327_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (25))) goto event_2327_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2327_83_end: ;
}
void Frames::event_func_19949()
{
    // event 2328_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2328_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2328_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2328_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2328_83_end: ;
}
void Frames::event_func_19950()
{
    // event 2329_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2329_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2329_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2329_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2329_83_end: ;
}
void Frames::event_func_19951()
{
    // event 2330_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2330_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2330_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2330_83_end;
        if (not_always_2330_83 > loop_count) {
            not_always_2330_83 = loop_count + 2;
            goto event_2330_83_end;
        }
        not_always_2330_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2330_83_end: ;
}
void Frames::event_func_19952()
{
    // event 2331_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2331_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2331_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2331_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2331_83_end: ;
}
void Frames::event_func_19953()
{
    // event 2332_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2332_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2332_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2332_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2332_83_end;
        global_values->set(4, 12);
        next_frame = (index+1-0)-1 + 0;    
    
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2332_83_end: ;
}
void Frames::event_func_19954()
{
    // event 2334_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2334_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2334_83_end: ;
}
void Frames::event_func_19955()
{
    // event 2335_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2335_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2335_83_end;
        if (once_condition_2335_83) goto event_2335_83_end;
        once_condition_2335_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 310);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 4320);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(npcneera_2464_instances))->set_y(4351);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(0);
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(true);
        ((Active*)get_instance(gate_4138_instances))->set_layer(3-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4362);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(-30);
        }
    }
    event_2335_83_end: ;
}
void Frames::event_func_19956()
{
    // event 2336_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2336_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2336_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4361);
            ((Active*)*it)->set_x(444);
            ((Active*)*it)->set_visible(true);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4362);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(404);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(60);
        }
    }
    event_2336_83_end: ;
}
void Frames::event_func_19957()
{
    // event 2337_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2337_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2337_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2337_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2337_83_end: ;
}
void Frames::event_func_19958()
{
    // event 2338_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2338_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2338_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2338_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2338_83_end: ;
}
void Frames::event_func_19959()
{
    // event 2339_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2339_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2339_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2339_83_end;
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(npccouchcarol_555_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2339_83_end: ;
}
void Frames::event_func_19960()
{
    // event 2340_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2340_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2340_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2340_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_2340_83_end: ;
}
void Frames::event_func_19961()
{
    // event 2341_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2341_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2341_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(gate_4138_instances))->get_x()-20))) goto event_2341_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()+2);
    }
    event_2341_83_end: ;
}
void Frames::event_func_19962()
{
    // event 2342_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2342_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2342_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) >= (((Active*)get_instance(gate_4138_instances))->get_x()-20))) goto event_2342_83_end;
        if (!(((Active*)get_instance(gate_4138_instances))->alterables->flags.is_off(1))) goto event_2342_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
        ((Active*)get_instance(gate_4138_instances))->alterables->flags.enable(1);
        media.play_id(SOUND_DOORGATE_405, -1, 1);
    }
    event_2342_83_end: ;
}
void Frames::event_func_19963()
{
    // event 2343_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2343_83_end;
        if (!(((Active*)get_instance(gate_4138_instances))->alterables->flags.is_on(1))) goto event_2343_83_end;
        if (!((((Active*)get_instance(gate_4138_instances))->alterables->values.get(0)) < (8))) goto event_2343_83_end;
        ((Active*)get_instance(gate_4138_instances))->alterables->values.add(0, 0.5);
        ((Active*)get_instance(gate_4138_instances))->force_frame(((Active*)get_instance(gate_4138_instances))->alterables->values.get(0));
    }
    event_2343_83_end: ;
}
void Frames::event_func_19964()
{
    // event 2344_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2344_83_end;
        if (!(((Active*)get_instance(gate_4138_instances))->alterables->flags.is_off(1))) goto event_2344_83_end;
        if (!((((Active*)get_instance(gate_4138_instances))->alterables->values.get(0)) > (0))) goto event_2344_83_end;
        ((Active*)get_instance(gate_4138_instances))->alterables->values.add(0, -0.5);
        ((Active*)get_instance(gate_4138_instances))->force_frame(((Active*)get_instance(gate_4138_instances))->alterables->values.get(0));
    }
    event_2344_83_end: ;
}
void Frames::event_func_19965()
{
    // event 2345_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2345_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2345_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(25);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2345_83_end: ;
}
void Frames::event_func_19966()
{
    // event 2346_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2346_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2346_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(gate_4138_instances))->get_x()+70))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2346_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2346_83_end: ;
}
void Frames::event_func_19967()
{
    // event 2347_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2347_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2347_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2347_83_end;
        media.play_id(SOUND_DOORGATE_405, -1, 1);
        ((Active*)get_instance(gate_4138_instances))->alterables->flags.disable(1);
    }
    event_2347_83_end: ;
}
void Frames::event_func_19968()
{
    // event 2348_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2348_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2348_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (50))) goto event_2348_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 153);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2348_83_end: ;
}
void Frames::event_func_19969()
{
    // event 2349_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2349_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2349_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) < (4))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2349_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2349_83_end: ;
}
void Frames::event_func_19970()
{
    // event 2350_83
    bool or_result_2350_83 = false;
    bool or_temp_result_2350_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto or_event_2350_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2350_83_0_end;
        or_result_2350_83 = true;
        or_temp_result_2350_83_0 = true;
    }
    or_event_2350_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2350_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2350_83
    bool or_temp_result_2350_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto or_event_2350_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2350_83_1_end;
        or_result_2350_83 = true;
        or_temp_result_2350_83_1 = true;
    }
    or_event_2350_83_1_end: ;
    if (or_temp_result_2350_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2350_83
    bool or_temp_result_2350_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto or_event_2350_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2350_83_2_end;
        or_result_2350_83 = true;
        or_temp_result_2350_83_2 = true;
        or_event_2350_83_2_end: ;
        if (or_temp_result_2350_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2350_83) goto or_final_or_event_2350_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2350_83_0 || or_temp_result_2350_83_1 || or_temp_result_2350_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2350_83_2_end: ;
}
void Frames::event_func_19971()
{
    // event 2351_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2351_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2351_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (153))) goto event_2351_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (155))) goto event_2351_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2351_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2351_83_end: ;
}
void Frames::event_func_19972()
{
    // event 2352_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2352_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (154))) goto event_2352_83_end;
        if (not_always_2352_83 > loop_count) {
            not_always_2352_83 = loop_count + 2;
            goto event_2352_83_end;
        }
        not_always_2352_83 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2352_83_end: ;
}
void Frames::event_func_19973()
{
    // event 2353_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2353_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2353_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (155))) goto event_2353_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (156))) goto event_2353_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2353_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(gate_4138_instances))->set_layer(5-1);
    }
    event_2353_83_end: ;
}
void Frames::event_func_19974()
{
    // event 2354_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2354_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2354_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-2);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2354_83_end: ;
}
void Frames::event_func_19975()
{
    // event 2355_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2355_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2355_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2355_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
    }
    event_2355_83_end: ;
}
void Frames::event_func_19976()
{
    // event 2356_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2356_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2356_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2356_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(gate_4138_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2356_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
    }
    event_2356_83_end: ;
}
void Frames::event_func_19977()
{
    // event 2357_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2357_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2357_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_2357_83_end: ;
}
void Frames::event_func_19978()
{
    // event 2358_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2358_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2358_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2358_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2358_83_end: ;
}
void Frames::event_func_19979()
{
    // event 2359_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2359_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2359_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (157))) goto event_2359_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (158))) goto event_2359_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2359_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2359_83_end: ;
}
void Frames::event_func_19980()
{
    // event 2360_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2360_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2360_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (158))) goto event_2360_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (160))) goto event_2360_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2360_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(gate_4138_instances))->set_layer(5-1);
    }
    event_2360_83_end: ;
}
void Frames::event_func_19981()
{
    // event 2361_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2361_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (158))) goto event_2361_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_2361_83_end: ;
}
void Frames::event_func_19982()
{
    // event 2362_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2362_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2362_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2362_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2362_83_end: ;
}
void Frames::event_func_19983()
{
    // event 2363_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2363_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2363_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2363_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-2);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2363_83_end: ;
}
void Frames::event_func_19984()
{
    // event 2364_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2364_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2364_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_2364_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2364_83_end: ;
}
void Frames::event_func_19985()
{
    // event 2365_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2365_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (160))) goto event_2365_83_end;
        if (not_always_2365_83 > loop_count) {
            not_always_2365_83 = loop_count + 2;
            goto event_2365_83_end;
        }
        not_always_2365_83 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2365_83_end: ;
}
void Frames::event_func_19986()
{
    // event 2366_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2366_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2366_83_end;
        if (not_always_2366_83 > loop_count) {
            not_always_2366_83 = loop_count + 2;
            goto event_2366_83_end;
        }
        not_always_2366_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2366_83_end: ;
}
void Frames::event_func_19987()
{
    // event 2367_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2367_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2367_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2367_83_end: ;
}
void Frames::event_func_19988()
{
    // event 2368_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1)) goto event_2368_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2368_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2368_83_end;
        global_values->set(4, 11);
            group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1 = true;
        }
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 0);
    }
    event_2368_83_end: ;
}
void Frames::event_func_19989()
{
    // event 2370_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2370_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2370_83_end: ;
}
void Frames::event_func_19990()
{
    // event 2371_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2371_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2371_83_end;
        if (once_condition_2371_83) goto event_2371_83_end;
        once_condition_2371_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
    }
    event_2371_83_end: ;
}
void Frames::event_func_19991()
{
    // event 2372_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2372_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2372_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2602);
            ((Active*)*it)->set_x(470);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->set_y(2599);
        ((Active*)get_instance(themagister_2115_instances))->set_x(572);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(true);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(2592);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(400);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2372_83_end: ;
}
void Frames::event_func_19992()
{
    // event 2373_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2373_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2373_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2373_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 161);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2373_83_end: ;
}
void Frames::event_func_19993()
{
    // event 2374_83
    bool or_result_2374_83 = false;
    bool or_temp_result_2374_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto or_event_2374_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2374_83_0_end;
        or_result_2374_83 = true;
        or_temp_result_2374_83_0 = true;
    }
    or_event_2374_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2374_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2374_83
    bool or_temp_result_2374_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto or_event_2374_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2374_83_1_end;
        or_result_2374_83 = true;
        or_temp_result_2374_83_1 = true;
    }
    or_event_2374_83_1_end: ;
    if (or_temp_result_2374_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2374_83
    bool or_temp_result_2374_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto or_event_2374_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2374_83_2_end;
        or_result_2374_83 = true;
        or_temp_result_2374_83_2 = true;
        or_event_2374_83_2_end: ;
        if (or_temp_result_2374_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2374_83) goto or_final_or_event_2374_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2374_83_0 || or_temp_result_2374_83_1 || or_temp_result_2374_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2374_83_2_end: ;
}
void Frames::event_func_19994()
{
    // event 2375_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2375_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2375_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (162))) goto event_2375_83_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_2375_83_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_2375_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2375_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 172);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2375_83_end: ;
}
void Frames::event_func_19995()
{
    // event 2376_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2376_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2376_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (172))) goto event_2376_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (175))) goto event_2376_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2376_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2376_83_end: ;
}
void Frames::event_func_19996()
{
    // event 2377_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2377_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2377_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (175))) goto event_2377_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2377_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 163);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2377_83_end: ;
}
void Frames::event_func_19997()
{
    // event 2378_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2378_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2378_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (160))) goto event_2378_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (167))) goto event_2378_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2378_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2378_83_end: ;
}
void Frames::event_func_19998()
{
    // event 2379_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2379_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (163))) goto event_2379_83_end;
        if (not_always_2379_83 > loop_count) {
            not_always_2379_83 = loop_count + 2;
            goto event_2379_83_end;
        }
        not_always_2379_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_2379_83_end: ;
}
void Frames::event_func_19999()
{
    // event 2380_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2380_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (164))) goto event_2380_83_end;
        if (not_always_2380_83 > loop_count) {
            not_always_2380_83 = loop_count + 2;
            goto event_2380_83_end;
        }
        not_always_2380_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_2380_83_end: ;
}
void Frames::event_func_20000()
{
    // event 2381_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2381_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (166))) goto event_2381_83_end;
        if (not_always_2381_83 > loop_count) {
            not_always_2381_83 = loop_count + 2;
            goto event_2381_83_end;
        }
        not_always_2381_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2381_83_end: ;
}
void Frames::event_func_20001()
{
    // event 2382_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2382_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (167))) goto event_2382_83_end;
        if (not_always_2382_83 > loop_count) {
            not_always_2382_83 = loop_count + 2;
            goto event_2382_83_end;
        }
        not_always_2382_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_2382_83_end: ;
}
void Frames::event_func_20002()
{
    // event 2383_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2383_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2383_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (167))) goto event_2383_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2383_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2383_83_end: ;
}
void Frames::event_func_20003()
{
    // event 2384_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2384_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2384_83_end;
        if (not_always_2384_83 > loop_count) {
            not_always_2384_83 = loop_count + 2;
            goto event_2384_83_end;
        }
        not_always_2384_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2384_83_end: ;
}
void Frames::event_func_20004()
{
    // event 2385_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2385_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2385_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2385_83_end: ;
}
void Frames::event_func_20005()
{
    // event 2386_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2386_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2386_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2386_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 934);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_y(986);
            ((Active*)*it)->set_x(560);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcstofficer_3941_instances))->set_visible(false);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(986);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(440);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
    }
    event_2386_83_end: ;
}
void Frames::event_func_20006()
{
    // event 2387_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2387_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2387_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_2387_83_end: ;
}
void Frames::event_func_20007()
{
    // event 2388_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2388_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2388_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2388_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2388_83_end: ;
}
void Frames::event_func_20008()
{
    // event 2389_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2389_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2389_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (168))) goto event_2389_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (171))) goto event_2389_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2389_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2389_83_end: ;
}
void Frames::event_func_20009()
{
    // event 2390_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2390_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2390_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (171))) goto event_2390_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2390_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2390_83_end: ;
}
void Frames::event_func_20010()
{
    // event 2391_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2391_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (169))) goto event_2391_83_end;
        if (!((media.get_channel_position(-1 +20)) > (4300))) goto event_2391_83_end;
        if (once_condition_2391_83) goto event_2391_83_end;
        once_condition_2391_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 0);
    }
    event_2391_83_end: ;
}
void Frames::event_func_20011()
{
    // event 2392_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2392_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (171))) goto event_2392_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1700))) goto event_2392_83_end;
        if (once_condition_2392_83) goto event_2392_83_end;
        once_condition_2392_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 30);
    }
    event_2392_83_end: ;
}
void Frames::event_func_20012()
{
    // event 2393_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2393_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2393_83_end;
        if (not_always_2393_83 > loop_count) {
            not_always_2393_83 = loop_count + 2;
            goto event_2393_83_end;
        }
        not_always_2393_83 = loop_count + 2;
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
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_2393_83_end: ;
}
void Frames::event_func_20013()
{
    // event 2394_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2394_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2394_83_end;
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
    event_2394_83_end: ;
}
void Frames::event_func_20014()
{
    // event 2395_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1)) goto event_2395_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2395_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2395_83_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        global_values->set(4, 0);
        next_frame = 39 + 0;    
    
    }
    event_2395_83_end: ;
}
void Frames::event_func_20015()
{
    // event 2397_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2397_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2397_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -112, parent->get_y() + 10);
            pos_end_2397_83_0: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2397_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -62, parent->get_y() + 10);
            pos_end_2397_83_1: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2397_83_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -92, parent->get_y() + 10);
            pos_end_2397_83_2: ;
        }
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2397_83_3;
            ((Active*)*it)->set_global_position(parent->get_x() + -142, parent->get_y() + 10);
            pos_end_2397_83_3: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2397_83_end: ;
}
void Frames::event_func_20016()
{
    // event 2398_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2398_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2398_83_end;
        if (once_condition_2398_83) goto event_2398_83_end;
        once_condition_2398_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 6500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1560);
        {
            loop_st_running = true;
            int times = int(14);
            loop_st_index = 0;
            while (loop_st_index < times) {
                loop_st_83();
                if (!loop_st_running) break;
                loop_st_index++;
            }
        }
    }
    event_2398_83_end: ;
}
void Frames::event_func_20017()
{
    // event 2399_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2399_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) < (2))) goto event_2399_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(7063);
            ((Active*)*it)->set_y(1640);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(52);
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6794);
            ((Active*)*it)->set_y(1628);
            ((Active*)*it)->force_animation(5);
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6884);
            ((Active*)*it)->set_y(1655);
            ((Active*)*it)->force_animation(5);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(6858);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, 1530);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_2399_83_end: ;
}
void Frames::event_func_20018()
{
    // event 2400_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2400_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2400_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2400_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2400_83_end: ;
}
void Frames::event_func_20019()
{
    // event 2401_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2401_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2401_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (2))) goto event_2401_83_end;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_shuigang_palace_8);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_2401_83_end: ;
}
void Frames::event_func_20020()
{
    // event 2403_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2403_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2403_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (440))) goto event_2403_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 176);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2403_83_end: ;
}
