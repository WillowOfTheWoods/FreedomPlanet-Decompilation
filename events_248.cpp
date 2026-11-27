#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19821()
{
    // event 2199_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2199_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2199_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2199_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(586);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(586);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(586);
        }
        ((Active*)get_instance(npcgong_634_instances))->set_y(584);
        ((Active*)get_instance(npcgong_634_instances))->set_x(frame_left()-50);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(-200);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(-260);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(-260);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(586);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(-200);
    }
    event_2199_83_end: ;
}
void Frames::event_func_19822()
{
    // event 2200_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2200_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2200_83_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) < (frame_left()+30))) goto event_2200_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+2);
    }
    event_2200_83_end: ;
}
void Frames::event_func_19823()
{
    // event 2201_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2201_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2201_83_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) >= (frame_left()+30))) goto event_2201_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(12);
    }
    event_2201_83_end: ;
}
void Frames::event_func_19824()
{
    // event 2202_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2202_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2202_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2202_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2202_83_end: ;
}
void Frames::event_func_19825()
{
    // event 2203_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2203_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2203_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2203_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2203_83_end: ;
}
void Frames::event_func_19826()
{
    // event 2204_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2204_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2204_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+90))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2204_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2204_83_end: ;
}
void Frames::event_func_19827()
{
    // event 2205_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2205_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2205_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+90))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2205_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2205_83_end: ;
}
void Frames::event_func_19828()
{
    // event 2206_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2206_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2206_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+130))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2206_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2206_83_end: ;
}
void Frames::event_func_19829()
{
    // event 2207_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2207_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2207_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+130))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2207_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2207_83_end: ;
}
void Frames::event_func_19830()
{
    // event 2208_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2208_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2208_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) < (frame_left()+170))) goto event_2208_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(30);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
    }
    event_2208_83_end: ;
}
void Frames::event_func_19831()
{
    // event 2209_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2209_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2209_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (frame_left()+170))) goto event_2209_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_off(1))) goto event_2209_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(10);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
    }
    event_2209_83_end: ;
}
void Frames::event_func_19832()
{
    // event 2210_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2210_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2210_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2210_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (frame_left()+170))) goto event_2210_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+130))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2210_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+90))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2210_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2210_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_off(1))) goto event_2210_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 101);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(24);
    }
    event_2210_83_end: ;
}
void Frames::event_func_19833()
{
    // event 2211_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2211_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2211_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (101))) goto event_2211_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (frame_left()+170))) goto event_2211_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2211_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2211_83_end: ;
}
void Frames::event_func_19834()
{
    // event 2212_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2212_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2212_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (15))) goto event_2212_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
    }
    event_2212_83_end: ;
}
void Frames::event_func_19835()
{
    // event 2213_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2213_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2213_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2213_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(npcgong_634_instances))->force_frame(15);
    }
    event_2213_83_end: ;
}
void Frames::event_func_19836()
{
    // event 2214_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2214_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2214_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (45))) goto event_2214_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
    }
    event_2214_83_end: ;
}
void Frames::event_func_19837()
{
    // event 2215_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2215_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2215_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2215_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2215_83_end: ;
}
void Frames::event_func_19838()
{
    // event 2216_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2216_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2216_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2216_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2216_83_end: ;
}
void Frames::event_func_19839()
{
    // event 2217_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2217_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2217_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (102))) goto event_2217_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (106))) goto event_2217_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2217_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2217_83_end: ;
}
void Frames::event_func_19840()
{
    // event 2218_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2218_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2218_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (106))) goto event_2218_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2218_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2218_83_end: ;
}
void Frames::event_func_19841()
{
    // event 2219_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2219_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2219_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (10))) goto event_2219_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(30);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_2219_83_end: ;
}
void Frames::event_func_19842()
{
    // event 2220_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2220_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2220_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2220_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(10);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
    }
    event_2220_83_end: ;
}
void Frames::event_func_19843()
{
    // event 2221_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2221_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2221_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2221_83_end;
        ((Active*)get_instance(fragment_4094_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x());
        ((Active*)get_instance(fragment_4094_instances))->set_visible(true);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
    }
    event_2221_83_end: ;
}
void Frames::event_func_19844()
{
    // event 2222_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2222_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2222_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2222_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (45))) goto event_2222_83_end;
        ((Active*)get_instance(fragment_4094_instances))->set_x(((Active*)get_instance(fragment_4094_instances))->get_x()+3);
    }
    event_2222_83_end: ;
}
void Frames::event_func_19845()
{
    // event 2223_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2223_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2223_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2223_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_2223_83_end: ;
}
void Frames::event_func_19846()
{
    // event 2224_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2224_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2224_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_2224_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2224_83_end: ;
}
void Frames::event_func_19847()
{
    // event 2225_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2225_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2225_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (107))) goto event_2225_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (108))) goto event_2225_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2225_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2225_83_end: ;
}
void Frames::event_func_19848()
{
    // event 2226_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2226_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (108))) goto event_2226_83_end;
        if (not_always_2226_83 > loop_count) {
            not_always_2226_83 = loop_count + 2;
            goto event_2226_83_end;
        }
        not_always_2226_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
    }
    event_2226_83_end: ;
}
void Frames::event_func_19849()
{
    // event 2227_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2227_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2227_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (108))) goto event_2227_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (109))) goto event_2227_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2227_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2227_83_end: ;
}
void Frames::event_func_19850()
{
    // event 2228_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2228_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2228_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2228_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(6);
    }
    event_2228_83_end: ;
}
void Frames::event_func_19851()
{
    // event 2229_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2229_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2229_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2229_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2229_83_end: ;
}
void Frames::event_func_19852()
{
    // event 2230_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2230_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (109))) goto event_2230_83_end;
        if (not_always_2230_83 > loop_count) {
            not_always_2230_83 = loop_count + 2;
            goto event_2230_83_end;
        }
        not_always_2230_83 = loop_count + 2;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_2230_83_end: ;
}
void Frames::event_func_19853()
{
    // event 2231_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2231_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2231_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-2);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2231_83_end: ;
}
void Frames::event_func_19854()
{
    // event 2232_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2232_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2232_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(themagister_2115_instances))->get_x()-40))) goto event_2232_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
    }
    event_2232_83_end: ;
}
void Frames::event_func_19855()
{
    // event 2233_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2233_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2233_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (110))) goto event_2233_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (122))) goto event_2233_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2233_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2233_83_end: ;
}
void Frames::event_func_19856()
{
    // event 2234_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2234_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (119))) goto event_2234_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2234_83_end: ;
}
void Frames::event_func_19857()
{
    // event 2235_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2235_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (120))) goto event_2235_83_end;
        if (once_condition_2235_83) goto event_2235_83_end;
        once_condition_2235_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2235_83_end: ;
}
void Frames::event_func_19858()
{
    // event 2236_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2236_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (120))) goto event_2236_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2236_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(10);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
        media.play_id(SOUND_LILAC_GASP1_95, -1, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(9);
    }
    event_2236_83_end: ;
}
void Frames::event_func_19859()
{
    // event 2237_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2237_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (120))) goto event_2237_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (40))) goto event_2237_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (55))) goto event_2237_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(10);
        }
    }
    event_2237_83_end: ;
}
void Frames::event_func_19860()
{
    // event 2238_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2238_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (120))) goto event_2238_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (55))) goto event_2238_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_2238_83_end: ;
}
void Frames::event_func_19861()
{
    // event 2239_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2239_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2239_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (122))) goto event_2239_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2239_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2239_83_end: ;
}
void Frames::event_func_19862()
{
    // event 2240_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2240_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2240_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()+2);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2240_83_end: ;
}
void Frames::event_func_19863()
{
    // event 2241_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2241_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2241_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2241_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2241_83_end: ;
}
void Frames::event_func_19864()
{
    // event 2242_83
    bool or_result_2242_83 = false;
    bool or_temp_result_2242_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2242_83_0_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto or_event_2242_83_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (123))) goto or_event_2242_83_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (125))) goto or_event_2242_83_0_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto or_event_2242_83_0_end;
        or_result_2242_83 = true;
        or_temp_result_2242_83_0 = true;
    }
    or_event_2242_83_0_end: ;
    // event 2242_83
    bool or_temp_result_2242_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2242_83_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (124))) goto or_event_2242_83_1_end;
        if (!((media.get_channel_position(-1 +20)) > (800))) goto or_event_2242_83_1_end;
        or_result_2242_83 = true;
        or_temp_result_2242_83_1 = true;
        or_event_2242_83_1_end: ;
        if (!or_result_2242_83) goto or_final_or_event_2242_83_1_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    or_final_or_event_2242_83_1_end: ;
}
void Frames::event_func_19865()
{
    // event 2243_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2243_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (123))) goto event_2243_83_end;
        if (once_condition_2243_83) goto event_2243_83_end;
        once_condition_2243_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2243_83_end: ;
}
void Frames::event_func_19866()
{
    // event 2244_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2244_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (124))) goto event_2244_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
    }
    event_2244_83_end: ;
}
void Frames::event_func_19867()
{
    // event 2245_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2245_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (125))) goto event_2245_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2245_83_end: ;
}
void Frames::event_func_19868()
{
    // event 2246_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2246_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2246_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (125))) goto event_2246_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2246_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2246_83_end: ;
}
void Frames::event_func_19869()
{
    // event 2247_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2247_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2247_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_2247_83_end: ;
}
void Frames::event_func_19870()
{
    // event 2248_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2248_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2248_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (25))) goto event_2248_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (35))) goto event_2248_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(30);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-4);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_2248_83_end: ;
}
void Frames::event_func_19871()
{
    // event 2249_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2249_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2249_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (35))) goto event_2249_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
    }
    event_2249_83_end: ;
}
void Frames::event_func_19872()
{
    // event 2250_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2250_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2250_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (35))) goto event_2250_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
    }
    event_2250_83_end: ;
}
void Frames::event_func_19873()
{
    // event 2251_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2251_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2251_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (126))) goto event_2251_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2251_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2251_83_end: ;
}
void Frames::event_func_19874()
{
    // event 2252_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2252_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (126))) goto event_2252_83_end;
        if (!((media.get_channel_position(-1 +20)) > (700))) goto event_2252_83_end;
        if (!((media.get_channel_position(-1 +20)) < (1250))) goto event_2252_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2252_83_end: ;
}
void Frames::event_func_19875()
{
    // event 2253_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2253_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (126))) goto event_2253_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3400))) goto event_2253_83_end;
        if (!((media.get_channel_position(-1 +20)) <= (3900))) goto event_2253_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2253_83_end: ;
}
void Frames::event_func_19876()
{
    // event 2254_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2254_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (126))) goto event_2254_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3900))) goto event_2254_83_end;
        if (!((media.get_channel_position(-1 +20)) <= (4000))) goto event_2254_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 39);
    }
    event_2254_83_end: ;
}
void Frames::event_func_19877()
{
    // event 2255_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2255_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2255_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (127))) goto event_2255_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2255_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2255_83_end: ;
}
void Frames::event_func_19878()
{
    // event 2256_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2256_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_2256_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2256_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
    }
    event_2256_83_end: ;
}
void Frames::event_func_19879()
{
    // event 2257_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2257_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_2257_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2257_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2257_83_end: ;
}
void Frames::event_func_19880()
{
    // event 2258_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2258_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_2258_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (200))) goto event_2258_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2258_83_end: ;
}
void Frames::event_func_19881()
{
    // event 2259_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2259_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2259_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (128))) goto event_2259_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2259_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(13);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
        ((Active*)get_instance(npcneera_2464_instances))->force_speed(20);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(0);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2259_83_end: ;
}
void Frames::event_func_19882()
{
    // event 2260_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2260_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_2260_83_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->test_animation(13))) goto event_2260_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_frame()) == (3))) goto event_2260_83_end;
        if (once_condition_2260_83) goto event_2260_83_end;
        once_condition_2260_83 = true;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        crystalcage_4022_instances.empty_selection();
        // select single: false true false
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_crystalcage_4022(parent->x + 0, parent->y + -80), parent->layer);
                crystalcage_4022_instances.add_back();
            }
        }
        // select single: false true true
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator p_it(playerskinmilla_446_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_crystalcage_4022(parent->x + 0, parent->y + -80), parent->layer);
                crystalcage_4022_instances.add_back();
            }
        }
        // select single: false true true
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarol_445_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_crystalcage_4022(parent->x + 0, parent->y + -80), parent->layer);
                crystalcage_4022_instances.add_back();
            }
        }
        // select single: false true true
        {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_crystalcage_4022(parent->x + 0, parent->y + -80), parent->layer);
                crystalcage_4022_instances.add_back();
            }
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_2260_83_end: ;
}
void Frames::event_func_19883()
{
    // event 2261_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2261_83_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->is_animation_finished(13))) goto event_2261_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
    }
    event_2261_83_end: ;
}
void Frames::event_func_19884()
{
    // event 2262_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2262_83_end;
        crystalcage_4022_instances.clear_selection();
        for (ObjectIterator it(crystalcage_4022_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(3)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!crystalcage_4022_instances.has_selection()) goto event_2262_83_end;
        for (ObjectIterator it(crystalcage_4022_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, 0.4);
        }
    }
    event_2262_83_end: ;
}
void Frames::event_func_19885()
{
    // event 2263_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2263_83_end;
        crystalcage_4022_instances.clear_selection();
        for (ObjectIterator it(crystalcage_4022_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (600))) { it.deselect(); continue; }
        }
        if (!crystalcage_4022_instances.has_selection()) goto event_2263_83_end;
        for (ObjectIterator it(crystalcage_4022_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(601);
        }
        media.stop_sample(SOUND_COMMON_SLAM1_51);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        for (ObjectIterator it(crystalcage_4022_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2263_83_end: ;
}
void Frames::event_func_19886()
{
    // event 2264_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2264_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2264_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2264_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(21);
    }
    event_2264_83_end: ;
}
void Frames::event_func_19887()
{
    // event 2265_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2265_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2265_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2265_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_milla_no_ogg_330, 17-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_gasp1_ogg_223, 18-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
    }
    event_2265_83_end: ;
}
void Frames::event_func_19888()
{
    // event 2266_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2266_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2266_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (50))) goto event_2266_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_2266_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(28);
        }
    }
    event_2266_83_end: ;
}
void Frames::event_func_19889()
{
    // event 2267_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2267_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_2267_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_2267_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
    }
    event_2267_83_end: ;
}
void Frames::event_func_19890()
{
    // event 2268_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2268_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2268_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (129))) goto event_2268_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (132))) goto event_2268_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2268_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2268_83_end: ;
}
void Frames::event_func_19891()
{
    // event 2269_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2269_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (131))) goto event_2269_83_end;
        if (not_always_2269_83 > loop_count) {
            not_always_2269_83 = loop_count + 2;
            goto event_2269_83_end;
        }
        not_always_2269_83 = loop_count + 2;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
    }
    event_2269_83_end: ;
}
void Frames::event_func_19892()
{
    // event 2270_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2270_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2270_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (132))) goto event_2270_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2270_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
    }
    event_2270_83_end: ;
}
void Frames::event_func_19893()
{
    // event 2271_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2271_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (132))) goto event_2271_83_end;
        if (not_always_2271_83 > loop_count) {
            not_always_2271_83 = loop_count + 2;
            goto event_2271_83_end;
        }
        not_always_2271_83 = loop_count + 2;
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
    
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2271_83_end: ;
}
void Frames::event_func_19894()
{
    // event 2272_83
    bool or_result_2272_83 = false;
    bool or_temp_result_2272_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2272_83_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (132))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2272_83_0_end;
        or_result_2272_83 = true;
        or_temp_result_2272_83_0 = true;
    }
    or_event_2272_83_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_2272_83_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 2272_83
    bool or_temp_result_2272_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2272_83_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (23))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_2272_83_1_end;
        or_result_2272_83 = true;
        or_temp_result_2272_83_1 = true;
        or_event_2272_83_1_end: ;
        themagister_2115_instances.clear_saved_selection();
        if (or_temp_result_2272_83_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_2272_83) goto or_final_or_event_2272_83_1_end;
        themagister_2115_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_2272_83_1) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_2272_83_0) {
            dialogbox_566_instances.restore_selection();
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    or_final_or_event_2272_83_1_end: ;
}
void Frames::event_func_19895()
{
    // event 2273_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2273_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2273_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2273_83_end;
        global_values->set(4, 9);
            group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1) {
            group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1 = true;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 0);
    }
    event_2273_83_end: ;
}
void Frames::event_func_19896()
{
    // event 2275_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2275_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_2275_83_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2275_83_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
    }
    event_2275_83_end: ;
}
void Frames::event_func_19897()
{
    // event 2276_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2276_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2276_83_end;
        if (once_condition_2276_83) goto event_2276_83_end;
        once_condition_2276_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 310);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 4320);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4362);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(360);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4362);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(200);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4362);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(300);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(60);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2276_83_end: ;
}
void Frames::event_func_19898()
{
    // event 2277_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2277_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2277_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    event_2277_83_end: ;
}
void Frames::event_func_19899()
{
    // event 2278_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2278_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2278_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2278_83_end;
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
    event_2278_83_end: ;
}
void Frames::event_func_19900()
{
    // event 2279_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2279_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2279_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2279_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_2279_83_end: ;
}
void Frames::event_func_19901()
{
    // event 2280_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2280_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2280_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2280_83_end;
        if (not_always_2280_83 > loop_count) {
            not_always_2280_83 = loop_count + 2;
            goto event_2280_83_end;
        }
        not_always_2280_83 = loop_count + 2;
        media.play_id(SOUND_ATTACK_293, -1, 1);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_2280_83_end: ;
}
void Frames::event_func_19902()
{
    // event 2281_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2281_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2281_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2281_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_2281_83_end: ;
}
void Frames::event_func_19903()
{
    // event 2282_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2282_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2282_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2282_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_2282_83_end: ;
}
void Frames::event_func_19904()
{
    // event 2283_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2283_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2283_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2283_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_2283_83_end: ;
}
void Frames::event_func_19905()
{
    // event 2284_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2284_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2284_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2284_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 133);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2284_83_end: ;
}
void Frames::event_func_19906()
{
    // event 2285_83
    bool or_result_2285_83 = false;
    bool or_temp_result_2285_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto or_event_2285_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2285_83_0_end;
        or_result_2285_83 = true;
        or_temp_result_2285_83_0 = true;
    }
    or_event_2285_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2285_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2285_83
    bool or_temp_result_2285_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto or_event_2285_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2285_83_1_end;
        or_result_2285_83 = true;
        or_temp_result_2285_83_1 = true;
    }
    or_event_2285_83_1_end: ;
    if (or_temp_result_2285_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2285_83
    bool or_temp_result_2285_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto or_event_2285_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2285_83_2_end;
        or_result_2285_83 = true;
        or_temp_result_2285_83_2 = true;
        or_event_2285_83_2_end: ;
        if (or_temp_result_2285_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2285_83) goto or_final_or_event_2285_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2285_83_0 || or_temp_result_2285_83_1 || or_temp_result_2285_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2285_83_2_end: ;
}
void Frames::event_func_19907()
{
    // event 2286_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2286_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2286_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (133))) goto event_2286_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (134))) goto event_2286_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2286_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2286_83_end: ;
}
void Frames::event_func_19908()
{
    // event 2287_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2287_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (134))) goto event_2287_83_end;
        if (not_always_2287_83 > loop_count) {
            not_always_2287_83 = loop_count + 2;
            goto event_2287_83_end;
        }
        not_always_2287_83 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2287_83_end: ;
}
void Frames::event_func_19909()
{
    // event 2288_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2288_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2288_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (134))) goto event_2288_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2288_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2288_83_end: ;
}
void Frames::event_func_19910()
{
    // event 2289_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2289_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2289_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2289_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2289_83_end: ;
}
void Frames::event_func_19911()
{
    // event 2290_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2290_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2290_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (25))) goto event_2290_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2290_83_end: ;
}
void Frames::event_func_19912()
{
    // event 2291_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2291_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2291_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2291_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2291_83_end: ;
}
void Frames::event_func_19913()
{
    // event 2292_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2292_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2292_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2292_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2292_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2292_83_end: ;
}
void Frames::event_func_19914()
{
    // event 2293_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2293_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2293_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (48))) goto event_2293_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2293_83_end: ;
}
void Frames::event_func_19915()
{
    // event 2294_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2294_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2294_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (135))) goto event_2294_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (144))) goto event_2294_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2294_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2294_83_end: ;
}
void Frames::event_func_19916()
{
    // event 2295_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2295_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (140))) goto event_2295_83_end;
        if (once_condition_2295_83) goto event_2295_83_end;
        once_condition_2295_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->force_speed(15);
        }
    }
    event_2295_83_end: ;
}
void Frames::event_func_19917()
{
    // event 2296_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2296_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (140))) goto event_2296_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1000))) goto event_2296_83_end;
        if (once_condition_2296_83) goto event_2296_83_end;
        once_condition_2296_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(48);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 48);
    }
    event_2296_83_end: ;
}
void Frames::event_func_19918()
{
    // event 2297_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2297_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (140))) goto event_2297_83_end;
        if (!((media.get_channel_position(-1 +20)) > (4800))) goto event_2297_83_end;
        if (once_condition_2297_83) goto event_2297_83_end;
        once_condition_2297_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 33);
    }
    event_2297_83_end: ;
}
void Frames::event_func_19919()
{
    // event 2298_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2298_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (141))) goto event_2298_83_end;
        if (once_condition_2298_83) goto event_2298_83_end;
        once_condition_2298_83 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(33);
        }
    }
    event_2298_83_end: ;
}
void Frames::event_func_19920()
{
    // event 2299_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1)) goto event_2299_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (140))) goto event_2299_83_end;
        if (once_condition_2299_83) goto event_2299_83_end;
        once_condition_2299_83 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2299_83_end: ;
}
