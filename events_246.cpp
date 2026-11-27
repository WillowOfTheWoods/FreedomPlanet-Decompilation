#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19621()
{
    // event 1978_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1978_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (50))) goto event_1978_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3200))) goto event_1978_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
    }
    event_1978_83_end: ;
}
void Frames::event_func_19622()
{
    // event 1979_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1979_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1979_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (50))) goto event_1979_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1979_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(4);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(4);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(4);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_13_03_ogg_323, 17-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_laugh_ogg_324, 18-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_09_04_ogg_325, 19-1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(27);
    }
    event_1979_83_end: ;
}
void Frames::event_func_19623()
{
    // event 1980_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1980_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1980_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1980_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1.5);
    }
    event_1980_83_end: ;
}
void Frames::event_func_19624()
{
    // event 1981_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1981_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1981_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1981_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(2);
    }
    event_1981_83_end: ;
}
void Frames::event_func_19625()
{
    // event 1982_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1982_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1982_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (130))) goto event_1982_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(2);
    }
    event_1982_83_end: ;
}
void Frames::event_func_19626()
{
    // event 1983_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1983_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1983_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (135))) goto event_1983_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->set_direction(2);
    }
    event_1983_83_end: ;
}
void Frames::event_func_19627()
{
    // event 1984_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1984_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1984_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (136))) goto event_1984_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1984_83_end: ;
}
void Frames::event_func_19628()
{
    // event 1985_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1985_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1985_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (51))) goto event_1985_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (54))) goto event_1985_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1985_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1985_83_end: ;
}
void Frames::event_func_19629()
{
    // event 1986_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1986_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1986_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (54))) goto event_1986_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1986_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_13_04_ogg_326, 17-1);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->force_frame(0);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->restore_frame();
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->set_direction(0);
    }
    event_1986_83_end: ;
}
void Frames::event_func_19630()
{
    // event 1987_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1987_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1987_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1987_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(0);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(0);
    }
    event_1987_83_end: ;
}
void Frames::event_func_19631()
{
    // event 1988_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1988_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1988_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1988_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(0);
    }
    event_1988_83_end: ;
}
void Frames::event_func_19632()
{
    // event 1989_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1989_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1989_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (55))) goto event_1989_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1989_83_end: ;
}
void Frames::event_func_19633()
{
    // event 1990_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1990_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1990_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1990_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(0);
    }
    event_1990_83_end: ;
}
void Frames::event_func_19634()
{
    // event 1991_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1991_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1991_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (55))) goto event_1991_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (67))) goto event_1991_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1991_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1991_83_end: ;
}
void Frames::event_func_19635()
{
    // event 1992_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1992_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1992_83_end;
        if (not_always_1992_83 > loop_count) {
            not_always_1992_83 = loop_count + 2;
            goto event_1992_83_end;
        }
        not_always_1992_83 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(2);
    }
    event_1992_83_end: ;
}
void Frames::event_func_19636()
{
    // event 1993_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1993_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (57))) goto event_1993_83_end;
        if (not_always_1993_83 > loop_count) {
            not_always_1993_83 = loop_count + 2;
            goto event_1993_83_end;
        }
        not_always_1993_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1993_83_end: ;
}
void Frames::event_func_19637()
{
    // event 1994_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1994_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (58))) goto event_1994_83_end;
        if (not_always_1994_83 > loop_count) {
            not_always_1994_83 = loop_count + 2;
            goto event_1994_83_end;
        }
        not_always_1994_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->restore_frame();
    }
    event_1994_83_end: ;
}
void Frames::event_func_19638()
{
    // event 1995_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1995_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (59))) goto event_1995_83_end;
        if (not_always_1995_83 > loop_count) {
            not_always_1995_83 = loop_count + 2;
            goto event_1995_83_end;
        }
        not_always_1995_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1995_83_end: ;
}
void Frames::event_func_19639()
{
    // event 1996_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1996_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (60))) goto event_1996_83_end;
        if (not_always_1996_83 > loop_count) {
            not_always_1996_83 = loop_count + 2;
            goto event_1996_83_end;
        }
        not_always_1996_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1996_83_end: ;
}
void Frames::event_func_19640()
{
    // event 1997_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1997_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (61))) goto event_1997_83_end;
        if (not_always_1997_83 > loop_count) {
            not_always_1997_83 = loop_count + 2;
            goto event_1997_83_end;
        }
        not_always_1997_83 = loop_count + 2;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(0);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(9);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(0);
    }
    event_1997_83_end: ;
}
void Frames::event_func_19641()
{
    // event 1998_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1998_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (64))) goto event_1998_83_end;
        if (not_always_1998_83 > loop_count) {
            not_always_1998_83 = loop_count + 2;
            goto event_1998_83_end;
        }
        not_always_1998_83 = loop_count + 2;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(2);
    }
    event_1998_83_end: ;
}
void Frames::event_func_19642()
{
    // event 1999_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1999_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (65))) goto event_1999_83_end;
        if (!((media.get_channel_position(-1 +20)) > (4000))) goto event_1999_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 3);
    }
    event_1999_83_end: ;
}
void Frames::event_func_19643()
{
    // event 2000_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2000_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (66))) goto event_2000_83_end;
        if (not_always_2000_83 > loop_count) {
            not_always_2000_83 = loop_count + 2;
            goto event_2000_83_end;
        }
        not_always_2000_83 = loop_count + 2;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(27);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(0);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(12);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(0);
    }
    event_2000_83_end: ;
}
void Frames::event_func_19644()
{
    // event 2001_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2001_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_2001_83_end;
        if (not_always_2001_83 > loop_count) {
            not_always_2001_83 = loop_count + 2;
            goto event_2001_83_end;
        }
        not_always_2001_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(0);
    }
    event_2001_83_end: ;
}
void Frames::event_func_19645()
{
    // event 2002_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2002_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2002_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_2002_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2002_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2002_83_end: ;
}
void Frames::event_func_19646()
{
    // event 2003_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2003_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2003_83_end;
        if (not_always_2003_83 > loop_count) {
            not_always_2003_83 = loop_count + 2;
            goto event_2003_83_end;
        }
        not_always_2003_83 = loop_count + 2;
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
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2003_83_end: ;
}
void Frames::event_func_19647()
{
    // event 2004_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2004_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2004_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2004_83_end: ;
}
void Frames::event_func_19648()
{
    // event 2005_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_2005_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2005_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2005_83_end;
        global_values->set(4, 99);
        next_frame = 0 + 0;    
    
    }
    event_2005_83_end: ;
}
void Frames::event_func_19649()
{
    // event 2007_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2007_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2007_83_end: ;
}
void Frames::event_func_19650()
{
    // event 2008_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2008_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2008_83_end;
        if (once_condition_2008_83) goto event_2008_83_end;
        once_condition_2008_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(npcfallenhero_4111_instances))->get_x()+80);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1590);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_visible(true);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcfallenhero_4111_instances))->get_x()+160);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(10);
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2008_83_end: ;
}
void Frames::event_func_19651()
{
    // event 2009_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2009_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2009_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_2009_83_end: ;
}
void Frames::event_func_19652()
{
    // event 2010_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2010_83_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2010_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2010_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2010_83_end: ;
}
void Frames::event_func_19653()
{
    // event 2011_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2011_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2011_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2011_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2011_83_end: ;
}
void Frames::event_func_19654()
{
    // event 2012_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2012_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2012_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2012_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 68);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2012_83_end: ;
}
void Frames::event_func_19655()
{
    // event 2013_83
    bool or_result_2013_83 = false;
    bool or_temp_result_2013_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto or_event_2013_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2013_83_0_end;
        or_result_2013_83 = true;
        or_temp_result_2013_83_0 = true;
    }
    or_event_2013_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2013_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2013_83
    bool or_temp_result_2013_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto or_event_2013_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2013_83_1_end;
        or_result_2013_83 = true;
        or_temp_result_2013_83_1 = true;
    }
    or_event_2013_83_1_end: ;
    if (or_temp_result_2013_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2013_83
    bool or_temp_result_2013_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto or_event_2013_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2013_83_2_end;
        or_result_2013_83 = true;
        or_temp_result_2013_83_2 = true;
        or_event_2013_83_2_end: ;
        if (or_temp_result_2013_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2013_83) goto or_final_or_event_2013_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2013_83_0 || or_temp_result_2013_83_1 || or_temp_result_2013_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2013_83_2_end: ;
}
void Frames::event_func_19656()
{
    // event 2014_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2014_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2014_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (68))) goto event_2014_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (71))) goto event_2014_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2014_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2014_83_end: ;
}
void Frames::event_func_19657()
{
    // event 2015_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2015_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (70))) goto event_2015_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2015_83_end: ;
}
void Frames::event_func_19658()
{
    // event 2016_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2016_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_2016_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2016_83_end: ;
}
void Frames::event_func_19659()
{
    // event 2017_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2017_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_2017_83_end;
        if (once_condition_2017_83) goto event_2017_83_end;
        once_condition_2017_83 = true;
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(1);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->restore_frame();
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2017_83_end: ;
}
void Frames::event_func_19660()
{
    // event 2018_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2018_83_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2018_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_2018_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1100))) goto event_2018_83_end;
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(randrange(3));
    }
    event_2018_83_end: ;
}
void Frames::event_func_19661()
{
    // event 2019_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2019_83_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2019_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_2019_83_end;
        if (!((media.get_channel_position(-1 +20)) <= (0))) goto event_2019_83_end;
        if (!(((Active*)get_instance(npcfallenhero_4111_instances))->test_directions(4))) goto event_2019_83_end;
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2019_83_end: ;
}
void Frames::event_func_19662()
{
    // event 2020_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2020_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2020_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_2020_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2020_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2020_83_end: ;
}
void Frames::event_func_19663()
{
    // event 2021_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2021_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2021_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2021_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
    }
    event_2021_83_end: ;
}
void Frames::event_func_19664()
{
    // event 2022_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2022_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2022_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2022_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcfallenhero_4111_instances))->get_x()+70))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_2022_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_BEHEADING_368, -1, 1);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_animation(8);
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->flags.enable(5);
    }
    event_2022_83_end: ;
}
void Frames::event_func_19665()
{
    // event 2023_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2023_83_end;
        if (!(((Active*)get_instance(npcfallenhero_4111_instances))->alterables->flags.is_on(5))) goto event_2023_83_end;
        FrameObject * single_instance_2023_83_0; single_instance_2023_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcfallenhero_4111_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + 13, parent->y + -21), parent->layer);
                if (single_instance_2023_83_0 == NULL)
                    single_instance_2023_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2023_83_0))->get_movement()->set_speed(40+randrange(20));
        static FlatObjectList swap_2023_83;
        swap_2023_83.clear();
        {
            swap_2023_83.push_back(((Active*)single_instance_2023_83_0));
        }
        ((Active*)((Active*)single_instance_2023_83_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_2023_83_0))->set_x(((Active*)single_instance_2023_83_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_2023_83_0))->set_y(((Active*)single_instance_2023_83_0)->get_y()-16+randrange(33));
        ((Active*)((Active*)single_instance_2023_83_0))->set_direction(pick_random(6, 11, 12, 13, 14, 15, 16));
        ((Active*)((Active*)single_instance_2023_83_0))->get_movement()->set_deceleration(0);
        swap_position(swap_2023_83);
    }
    event_2023_83_end: ;
}
void Frames::event_func_19666()
{
    // event 2038_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2038_83_end;
        if (!(((Active*)get_instance(npcfallenhero_4111_instances))->alterables->flags.is_on(5))) goto event_2038_83_end;
        FrameObject * single_instance_2038_83_0; single_instance_2038_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcfallenhero_4111_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + 13, parent->y + -21), parent->layer);
                if (single_instance_2038_83_0 == NULL)
                    single_instance_2038_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2038_83_0))->get_movement()->set_speed(40+randrange(20));
        static FlatObjectList swap_2038_83;
        swap_2038_83.clear();
        {
            swap_2038_83.push_back(((Active*)single_instance_2038_83_0));
        }
        ((Active*)((Active*)single_instance_2038_83_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_2038_83_0))->set_x(((Active*)single_instance_2038_83_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_2038_83_0))->set_y(((Active*)single_instance_2038_83_0)->get_y()-16+randrange(33));
        ((Active*)((Active*)single_instance_2038_83_0))->set_direction(pick_random(6, 11, 12, 13, 14, 15, 16));
        ((Active*)((Active*)single_instance_2038_83_0))->get_movement()->set_deceleration(0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->flags.disable(5);
        swap_position(swap_2038_83);
    }
    event_2038_83_end: ;
}
void Frames::event_func_19667()
{
    // event 2039_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2039_83_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2039_83_end: ;
}
void Frames::event_func_19668()
{
    // event 2040_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2040_83_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+12))) { it.deselect(); continue; }
        }
        if (!effectsplayersplode_310_instances.has_selection()) goto event_2040_83_end;
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2040_83_end: ;
}
void Frames::event_func_19669()
{
    // event 2041_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2041_83_end;
        if (!((((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(2)) > (0))) goto event_2041_83_end;
        if (!((((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(2)) < (3))) goto event_2041_83_end;
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.add(0, ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(1));
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_angle(((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.add(1, 0.1);
    }
    event_2041_83_end: ;
}
void Frames::event_func_19670()
{
    // event 2042_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2042_83_end;
        if (!((((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(1)) > (0))) goto event_2042_83_end;
        if (!((((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.get(0)) >= (90))) goto event_2042_83_end;
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->alterables->values.add(2, 1);
    }
    event_2042_83_end: ;
}
void Frames::event_func_19671()
{
    // event 2043_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2043_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2043_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2043_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(20);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2043_83_end: ;
}
void Frames::event_func_19672()
{
    // event 2044_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2044_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2044_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (72))) goto event_2044_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2044_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2044_83_end: ;
}
void Frames::event_func_19673()
{
    // event 2045_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2045_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2045_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()+80);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_y()-90);
        ((Active*)get_instance(npcsyntax_2519_instances))->force_animation(7);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
    }
    event_2045_83_end: ;
}
void Frames::event_func_19674()
{
    // event 2046_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2046_83_end;
        if (((Active*)get_instance(npcsyntax_2519_instances))->test_animation(7)) goto event_2046_83_end;
        if (not_always_2046_83 > loop_count) {
            not_always_2046_83 = loop_count + 2;
            goto event_2046_83_end;
        }
        not_always_2046_83 = loop_count + 2;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, -1);
    }
    event_2046_83_end: ;
}
void Frames::event_func_19675()
{
    // event 2047_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2047_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2047_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2047_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2047_83_end: ;
}
void Frames::event_func_19676()
{
    // event 2048_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2048_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2048_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (73))) goto event_2048_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (75))) goto event_2048_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2048_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2048_83_end: ;
}
void Frames::event_func_19677()
{
    // event 2049_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2049_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (74))) goto event_2049_83_end;
        if (not_always_2049_83 > loop_count) {
            not_always_2049_83 = loop_count + 2;
            goto event_2049_83_end;
        }
        not_always_2049_83 = loop_count + 2;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(8);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2049_83_end: ;
}
void Frames::event_func_19678()
{
    // event 2050_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2050_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (75))) goto event_2050_83_end;
        if (not_always_2050_83 > loop_count) {
            not_always_2050_83 = loop_count + 2;
            goto event_2050_83_end;
        }
        not_always_2050_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2050_83_end: ;
}
void Frames::event_func_19679()
{
    // event 2051_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2051_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2051_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (75))) goto event_2051_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2051_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2051_83_end: ;
}
void Frames::event_func_19680()
{
    // event 2052_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2052_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2052_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (40))) goto event_2052_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 0.4);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 0.6);
    }
    event_2052_83_end: ;
}
void Frames::event_func_19681()
{
    // event 2053_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2053_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2053_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2053_83_end;
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(true);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2053_83_end: ;
}
void Frames::event_func_19682()
{
    // event 2054_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2054_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2054_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2054_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_2054_83_end: ;
}
void Frames::event_func_19683()
{
    // event 2055_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2055_83_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2055_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -131, parent->get_y() + -3);
            pos_end_2055_83_0: ;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2055_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -95, parent->get_y() + 18);
            pos_end_2055_83_1: ;
        }
    }
    event_2055_83_end: ;
}
void Frames::event_func_19684()
{
    // event 2056_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2056_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_2056_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1600))) goto event_2056_83_end;
        if (!((media.get_channel_position(-1 +20)) < (2600))) goto event_2056_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(12);
            ((Active*)*it)->force_speed(14);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2056_83_end: ;
}
void Frames::event_func_19685()
{
    // event 2057_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2057_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_2057_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2600))) goto event_2057_83_end;
        if (!((media.get_channel_position(-1 +20)) < (3180))) goto event_2057_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2057_83_end: ;
}
void Frames::event_func_19686()
{
    // event 2058_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2058_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_2058_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3180))) goto event_2058_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2058_83_end: ;
}
void Frames::event_func_19687()
{
    // event 2059_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2059_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2059_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (76))) goto event_2059_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (78))) goto event_2059_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2059_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2059_83_end: ;
}
void Frames::event_func_19688()
{
    // event 2060_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2060_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (77))) goto event_2060_83_end;
        if (not_always_2060_83 > loop_count) {
            not_always_2060_83 = loop_count + 2;
            goto event_2060_83_end;
        }
        not_always_2060_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2060_83_end: ;
}
void Frames::event_func_19689()
{
    // event 2061_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2061_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (78))) goto event_2061_83_end;
        if (not_always_2061_83 > loop_count) {
            not_always_2061_83 = loop_count + 2;
            goto event_2061_83_end;
        }
        not_always_2061_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2061_83_end: ;
}
void Frames::event_func_19690()
{
    // event 2062_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2062_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2062_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (78))) goto event_2062_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2062_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2062_83_end: ;
}
void Frames::event_func_19691()
{
    // event 2063_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2063_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2063_83_end;
        if (!(((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)/math_helper/2)%math_helper%2) == (0))) goto event_2063_83_end;
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(false);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2063_83_end: ;
}
void Frames::event_func_19692()
{
    // event 2064_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2064_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2064_83_end;
        if (!(((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)/math_helper/2)%math_helper%2) == (1))) goto event_2064_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(true);
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2064_83_end: ;
}
void Frames::event_func_19693()
{
    // event 2065_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2065_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2065_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2065_83_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(false);
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_2065_83_end: ;
}
void Frames::event_func_19694()
{
    // event 2066_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2066_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2066_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2066_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2066_83_end: ;
}
void Frames::event_func_19695()
{
    // event 2067_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2067_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2067_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (79))) goto event_2067_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (80))) goto event_2067_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2067_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2067_83_end: ;
}
void Frames::event_func_19696()
{
    // event 2068_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2068_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2068_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (80))) goto event_2068_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2068_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2068_83_end: ;
}
void Frames::event_func_19697()
{
    // event 2069_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2069_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (14))) goto event_2069_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+2);
    }
    event_2069_83_end: ;
}
void Frames::event_func_19698()
{
    // event 2070_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2070_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2070_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2070_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2070_83_end: ;
}
void Frames::event_func_19699()
{
    // event 2071_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2071_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_2071_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2071_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_2071_83_end: ;
}
void Frames::event_func_19700()
{
    // event 2072_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2072_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (15))) goto event_2072_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2072_83_end: ;
}
void Frames::event_func_19701()
{
    // event 2073_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2073_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (15))) goto event_2073_83_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_2073_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
    }
    event_2073_83_end: ;
}
void Frames::event_func_19702()
{
    // event 2074_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2074_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_2074_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (150))) goto event_2074_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_2074_83_end: ;
}
void Frames::event_func_19703()
{
    // event 2075_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2075_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-30))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_2075_83_end;
        if (not_always_2075_83 > loop_count) {
            not_always_2075_83 = loop_count + 2;
            goto event_2075_83_end;
        }
        not_always_2075_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2075_83_end: ;
}
void Frames::event_func_19704()
{
    // event 2076_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2076_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-30))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_2076_83_end;
        if (not_always_2076_83 > loop_count) {
            not_always_2076_83 = loop_count + 2;
            goto event_2076_83_end;
        }
        not_always_2076_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2076_83_end: ;
}
void Frames::event_func_19705()
{
    // event 2077_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2077_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2077_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (81))) goto event_2077_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2077_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcfallenhero_4111_instances))->set_direction(2);
        ((Active*)get_instance(npcfallenhero_4111_instances))->force_frame(0);
    }
    event_2077_83_end: ;
}
void Frames::event_func_19706()
{
    // event 2078_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2078_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2078_83_end;
        if (not_always_2078_83 > loop_count) {
            not_always_2078_83 = loop_count + 2;
            goto event_2078_83_end;
        }
        not_always_2078_83 = loop_count + 2;
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
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2078_83_end: ;
}
void Frames::event_func_19707()
{
    // event 2079_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2079_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2079_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2079_83_end: ;
}
void Frames::event_func_19708()
{
    // event 2080_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1)) goto event_2080_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_2080_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2080_83_end;
        global_values->set(4, 6);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_2080_83_end: ;
}
void Frames::event_func_19709()
{
    // event 2083_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2083_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2083_83_end;
        if (once_condition_2083_83) goto event_2083_83_end;
        once_condition_2083_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 3450);
    }
    event_2083_83_end: ;
}
void Frames::event_func_19710()
{
    // event 2084_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2084_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2084_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(3530);
            ((Active*)*it)->set_x(frame_left()-60);
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(3530);
            ((Active*)*it)->set_x(frame_left()-230);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(3529);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(frame_left()-100);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(3530);
            ((Active*)*it)->set_x(frame_left()-150);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(3530);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(frame_left()-190);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
    }
    event_2084_83_end: ;
}
void Frames::event_func_19711()
{
    // event 2085_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2085_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2085_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2085_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 120);
    }
    event_2085_83_end: ;
}
void Frames::event_func_19712()
{
    // event 2086_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2086_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2086_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(35);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
    }
    event_2086_83_end: ;
}
void Frames::event_func_19713()
{
    // event 2087_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2087_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2087_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (200))) goto event_2087_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+3);
    }
    event_2087_83_end: ;
}
void Frames::event_func_19714()
{
    // event 2088_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2088_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2088_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (230))) goto event_2088_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2088_83_end: ;
}
void Frames::event_func_19715()
{
    // event 2089_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2089_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2089_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (220))) goto event_2089_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2089_83_end: ;
}
void Frames::event_func_19716()
{
    // event 2090_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2090_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2090_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (240))) goto event_2090_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2090_83_end: ;
}
void Frames::event_func_19717()
{
    // event 2091_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2091_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2091_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (200))) goto event_2091_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 82);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
    }
    event_2091_83_end: ;
}
void Frames::event_func_19718()
{
    // event 2092_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2092_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2092_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (220))) goto event_2092_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2092_83_end: ;
}
void Frames::event_func_19719()
{
    // event 2093_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2093_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2093_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (240))) goto event_2093_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2093_83_end: ;
}
void Frames::event_func_19720()
{
    // event 2094_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2094_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2094_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (230))) goto event_2094_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2094_83_end: ;
}
