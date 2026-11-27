#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17376()
{
    // event 1666_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1666_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1666_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1666_77_end;
        if (!((media.get_channel_position(-1 +20)) > (1550))) goto event_1666_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 33);
    }
    event_1666_77_end: ;
}
void Frames::event_func_17377()
{
    // event 1667_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1667_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1667_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1667_77_end: ;
}
void Frames::event_func_17378()
{
    // event 1668_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1668_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1668_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1668_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1668_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1668_77_end: ;
}
void Frames::event_func_17379()
{
    // event 1669_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1669_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1669_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1669_77_end: ;
}
void Frames::event_func_17380()
{
    // event 1670_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1670_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1670_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (40))) goto event_1670_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1.5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1670_77_end: ;
}
void Frames::event_func_17381()
{
    // event 1671_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1671_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1671_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (40))) goto event_1671_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1671_77_end: ;
}
void Frames::event_func_17382()
{
    // event 1672_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1672_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1672_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1672_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1672_77_end: ;
}
void Frames::event_func_17383()
{
    // event 1673_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1673_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1673_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1673_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1673_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1673_77_end: ;
}
void Frames::event_func_17384()
{
    // event 1674_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1674_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1674_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1674_77_end: ;
}
void Frames::event_func_17385()
{
    // event 1675_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1675_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1675_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (20))) goto event_1675_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1675_77_end: ;
}
void Frames::event_func_17386()
{
    // event 1676_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1676_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1676_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1676_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (80))) goto event_1676_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2.5);
    }
    event_1676_77_end: ;
}
void Frames::event_func_17387()
{
    // event 1677_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1677_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1677_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (80))) goto event_1677_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1677_77_end: ;
}
void Frames::event_func_17388()
{
    // event 1678_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1678_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1678_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (110))) goto event_1678_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1678_77_end: ;
}
void Frames::event_func_17389()
{
    // event 1679_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1679_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1679_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (41))) goto event_1679_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (43))) goto event_1679_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1679_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1679_77_end: ;
}
void Frames::event_func_17390()
{
    // event 1680_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1680_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1680_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (43))) goto event_1680_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1680_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1680_77_end: ;
}
void Frames::event_func_17391()
{
    // event 1681_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1681_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1681_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1620, 650);
            pos_end_1681_77_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1681_77_end: ;
}
void Frames::event_func_17392()
{
    // event 1682_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1682_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1682_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (50))) goto event_1682_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 0.4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 5);
    }
    event_1682_77_end: ;
}
void Frames::event_func_17393()
{
    // event 1683_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1683_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1683_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (50))) goto event_1683_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (100))) goto event_1683_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
    }
    event_1683_77_end: ;
}
void Frames::event_func_17394()
{
    // event 1684_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1684_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1684_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (100))) goto event_1684_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1684_77_end: ;
}
void Frames::event_func_17395()
{
    // event 1685_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1685_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (15))) goto event_1685_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (150))) goto event_1685_77_end;
        media.play_id(SOUND_CAROL_POUNCE_2_133, -1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_y());
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1685_77_end: ;
}
void Frames::event_func_17396()
{
    // event 1686_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1686_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (16))) goto event_1686_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
            ((Active*)*it)->set_layer(2-1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+0.24);
    }
    event_1686_77_end: ;
}
void Frames::event_func_17397()
{
    // event 1687_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1687_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (16))) goto event_1687_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1687_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_01_07_ogg_221, 20-1);
    }
    event_1687_77_end: ;
}
void Frames::event_func_17398()
{
    // event 1688_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1688_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (17))) goto event_1688_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1688_77_end: ;
}
void Frames::event_func_17399()
{
    // event 1689_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1689_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (17))) goto event_1689_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (30))) goto event_1689_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1689_77_end: ;
}
void Frames::event_func_17400()
{
    // event 1690_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1690_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1690_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1690_77_end: ;
}
void Frames::event_func_17401()
{
    // event 1691_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1691_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1691_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (100))) goto event_1691_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1691_77_end: ;
}
void Frames::event_func_17402()
{
    // event 1692_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1692_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1692_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (50))) goto event_1692_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (80))) goto event_1692_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 6);
    }
    event_1692_77_end: ;
}
void Frames::event_func_17403()
{
    // event 1693_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1693_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1693_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (80))) goto event_1693_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
    }
    event_1693_77_end: ;
}
void Frames::event_func_17404()
{
    // event 1694_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1694_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1694_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (100))) goto event_1694_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1694_77_end: ;
}
void Frames::event_func_17405()
{
    // event 1695_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1695_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1695_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (130))) goto event_1695_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1695_77_end: ;
}
void Frames::event_func_17406()
{
    // event 1696_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1696_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1696_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (44))) goto event_1696_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (48))) goto event_1696_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1696_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1696_77_end: ;
}
void Frames::event_func_17407()
{
    // event 1697_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1697_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (20))) goto event_1697_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1697_77_end: ;
}
void Frames::event_func_17408()
{
    // event 1698_77
    bool or_result_1698_77 = false;
    bool or_temp_result_1698_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1698_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (20))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1698_77_0_end;
        or_result_1698_77 = true;
        or_temp_result_1698_77_0 = true;
    }
    or_event_1698_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    if (or_temp_result_1698_77_0) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1698_77
    bool or_temp_result_1698_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1698_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (60))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1698_77_1_end;
        or_result_1698_77 = true;
        or_temp_result_1698_77_1 = true;
    }
    or_event_1698_77_1_end: ;
    if (or_temp_result_1698_77_1) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1698_77
    bool or_temp_result_1698_77_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1698_77_2_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (24))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1698_77_2_end;
        or_result_1698_77 = true;
        or_temp_result_1698_77_2 = true;
        or_event_1698_77_2_end: ;
        if (or_temp_result_1698_77_2) {
            mrstumpy_3913_instances.save_selection();
        }
        if (!or_result_1698_77) goto or_final_or_event_1698_77_2_end;
        mrstumpy_3913_instances.empty_selection();
        if (or_temp_result_1698_77_0 || or_temp_result_1698_77_1 || or_temp_result_1698_77_2) {
            mrstumpy_3913_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    or_final_or_event_1698_77_2_end: ;
}
void Frames::event_func_17409()
{
    // event 1699_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1699_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (22))) goto event_1699_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1699_77_end: ;
}
void Frames::event_func_17410()
{
    // event 1700_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1700_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (24))) goto event_1700_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1700_77_end: ;
}
void Frames::event_func_17411()
{
    // event 1701_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1701_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (54))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1701_77_end;
        if (not_always_1701_77 > loop_count) {
            not_always_1701_77 = loop_count + 2;
            goto event_1701_77_end;
        }
        not_always_1701_77 = loop_count + 2;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1701_77_end: ;
}
void Frames::event_func_17412()
{
    // event 1702_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1702_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (45))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1702_77_end;
        if (not_always_1702_77 > loop_count) {
            not_always_1702_77 = loop_count + 2;
            goto event_1702_77_end;
        }
        not_always_1702_77 = loop_count + 2;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1702_77_end: ;
}
void Frames::event_func_17413()
{
    // event 1703_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1703_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (54))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1703_77_end;
        if (not_always_1703_77 > loop_count) {
            not_always_1703_77 = loop_count + 2;
            goto event_1703_77_end;
        }
        not_always_1703_77 = loop_count + 2;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1703_77_end: ;
}
void Frames::event_func_17414()
{
    // event 1704_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1704_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (23))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1704_77_end;
        if (not_always_1704_77 > loop_count) {
            not_always_1704_77 = loop_count + 2;
            goto event_1704_77_end;
        }
        not_always_1704_77 = loop_count + 2;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1704_77_end: ;
}
void Frames::event_func_17415()
{
    // event 1705_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1705_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (14))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1705_77_end;
        if (not_always_1705_77 > loop_count) {
            not_always_1705_77 = loop_count + 2;
            goto event_1705_77_end;
        }
        not_always_1705_77 = loop_count + 2;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1705_77_end: ;
}
void Frames::event_func_17416()
{
    // event 1706_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1706_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (23))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1706_77_end;
        if (not_always_1706_77 > loop_count) {
            not_always_1706_77 = loop_count + 2;
            goto event_1706_77_end;
        }
        not_always_1706_77 = loop_count + 2;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1706_77_end: ;
}
void Frames::event_func_17417()
{
    // event 1707_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1707_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1707_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1707_77_end: ;
}
void Frames::event_func_17418()
{
    // event 1708_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1708_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1708_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (15))) goto event_1708_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1708_77_end: ;
}
void Frames::event_func_17419()
{
    // event 1709_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1709_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1709_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (60))) goto event_1709_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(14);
        }
    }
    event_1709_77_end: ;
}
void Frames::event_func_17420()
{
    // event 1710_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1710_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1710_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (100))) goto event_1710_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1710_77_end: ;
}
void Frames::event_func_17421()
{
    // event 1711_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1711_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1711_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (120))) goto event_1711_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (140))) goto event_1711_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1711_77_end: ;
}
void Frames::event_func_17422()
{
    // event 1712_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1712_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (26))) goto event_1712_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (140))) goto event_1712_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1712_77_end: ;
}
void Frames::event_func_17423()
{
    // event 1713_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1713_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1713_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (48))) goto event_1713_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (53))) goto event_1713_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1713_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1713_77_end: ;
}
void Frames::event_func_17424()
{
    // event 1714_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1714_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1714_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (53))) goto event_1714_77_end;
        if (!((media.get_channel_position(-1 +20)) > (4000))) goto event_1714_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 51);
    }
    event_1714_77_end: ;
}
void Frames::event_func_17425()
{
    // event 1715_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1715_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1715_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (53))) goto event_1715_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (55))) goto event_1715_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1715_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1715_77_end: ;
}
void Frames::event_func_17426()
{
    // event 1716_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1716_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (28))) goto event_1716_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(51);
        }
    }
    event_1716_77_end: ;
}
void Frames::event_func_17427()
{
    // event 1717_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1717_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (28))) goto event_1717_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (20))) goto event_1717_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (30))) goto event_1717_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1717_77_end: ;
}
void Frames::event_func_17428()
{
    // event 1718_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1718_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (28))) goto event_1718_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1718_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1718_77_end: ;
}
void Frames::event_func_17429()
{
    // event 1719_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1719_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (30))) goto event_1719_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1719_77_end: ;
}
void Frames::event_func_17430()
{
    // event 1720_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1720_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (30))) goto event_1720_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (40))) goto event_1720_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(20);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
        }
    }
    event_1720_77_end: ;
}
void Frames::event_func_17431()
{
    // event 1721_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1721_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (30))) goto event_1721_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+35))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1721_77_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(13);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1721_77_end: ;
}
void Frames::event_func_17432()
{
    // event 1722_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1722_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (31))) goto event_1722_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (5))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1722_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1722_77_end: ;
}
void Frames::event_func_17433()
{
    // event 1723_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1723_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1723_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (55))) goto event_1723_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (66))) goto event_1723_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (70))) goto event_1723_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1723_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1723_77_end: ;
}
void Frames::event_func_17434()
{
    // event 1724_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1724_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1724_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (55))) goto event_1724_77_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1724_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1724_77_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(30);
        }
    }
    event_1724_77_end: ;
}
void Frames::event_func_17435()
{
    // event 1725_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1725_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1725_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(30);
        }
    }
    event_1725_77_end: ;
}
void Frames::event_func_17436()
{
    // event 1726_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1726_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (57))) goto event_1726_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+8, ((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+60));
        }
    }
    event_1726_77_end: ;
}
void Frames::event_func_17437()
{
    // event 1727_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1727_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (58))) goto event_1727_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1727_77_end: ;
}
void Frames::event_func_17438()
{
    // event 1728_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1728_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1728_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (62))) goto event_1728_77_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1728_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 30);
    }
    event_1728_77_end: ;
}
void Frames::event_func_17439()
{
    // event 1729_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1729_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (63))) goto event_1729_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1729_77_end: ;
}
void Frames::event_func_17440()
{
    // event 1730_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1730_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (65))) goto event_1730_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1730_77_end: ;
}
void Frames::event_func_17441()
{
    // event 1731_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1731_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (65))) goto event_1731_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (90))) goto event_1731_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1731_77_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
    }
    event_1731_77_end: ;
}
void Frames::event_func_17442()
{
    // event 1732_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1732_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (65))) goto event_1732_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (90))) goto event_1732_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1732_77_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1732_77_end: ;
}
void Frames::event_func_17443()
{
    // event 1733_77
    bool or_result_1733_77 = false;
    bool or_temp_result_1733_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1733_77_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (65))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1733_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (90))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1733_77_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1733_77_0_end;
        or_result_1733_77 = true;
        or_temp_result_1733_77_0 = true;
    }
    or_event_1733_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1733_77_0) {
        mrstumpy_3913_instances.save_selection();
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1733_77
    bool or_temp_result_1733_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1733_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (66))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1733_77_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1733_77_1_end;
        or_result_1733_77 = true;
        or_temp_result_1733_77_1 = true;
        or_event_1733_77_1_end: ;
        if (or_temp_result_1733_77_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1733_77) goto or_final_or_event_1733_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1733_77_0) {
            mrstumpy_3913_instances.restore_selection();
        }
        if (or_temp_result_1733_77_0 || or_temp_result_1733_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1733_77_0 || or_temp_result_1733_77_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    or_final_or_event_1733_77_1_end: ;
}
void Frames::event_func_17444()
{
    // event 1734_77
    bool or_result_1734_77 = false;
    bool or_temp_result_1734_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1734_77_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (65))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1734_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (90))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1734_77_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1734_77_0_end;
        or_result_1734_77 = true;
        or_temp_result_1734_77_0 = true;
    }
    or_event_1734_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1734_77_0) {
        mrstumpy_3913_instances.save_selection();
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1734_77
    bool or_temp_result_1734_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1734_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (66))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1734_77_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1734_77_1_end;
        or_result_1734_77 = true;
        or_temp_result_1734_77_1 = true;
        or_event_1734_77_1_end: ;
        if (or_temp_result_1734_77_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1734_77) goto or_final_or_event_1734_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1734_77_0) {
            mrstumpy_3913_instances.restore_selection();
        }
        if (or_temp_result_1734_77_0 || or_temp_result_1734_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1734_77_0 || or_temp_result_1734_77_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1734_77_1_end: ;
}
void Frames::event_func_17445()
{
    // event 1735_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1735_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1735_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (66))) goto event_1735_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1735_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1735_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1735_77_end: ;
}
void Frames::event_func_17446()
{
    // event 1736_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1736_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1736_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_1736_77_end;
        if (!((media.get_channel_position(-1 +20)) > (1900))) goto event_1736_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 57);
    }
    event_1736_77_end: ;
}
void Frames::event_func_17447()
{
    // event 1737_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1737_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (68))) goto event_1737_77_end;
        if (once_condition_1737_77) goto event_1737_77_end;
        once_condition_1737_77 = true;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_06_13_ogg_222, 19-1);
    }
    event_1737_77_end: ;
}
void Frames::event_func_17448()
{
    // event 1738_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1738_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (68))) goto event_1738_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (20))) goto event_1738_77_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
    }
    event_1738_77_end: ;
}
void Frames::event_func_17449()
{
    // event 1739_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1739_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (68))) goto event_1739_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (20))) goto event_1739_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1739_77_end: ;
}
void Frames::event_func_17450()
{
    // event 1740_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1740_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (69))) goto event_1740_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(42);
        }
    }
    event_1740_77_end: ;
}
void Frames::event_func_17451()
{
    // event 1741_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1741_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1741_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (70))) goto event_1741_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1741_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1741_77_end: ;
}
void Frames::event_func_17452()
{
    // event 1742_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1742_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (33))) goto event_1742_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
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
            ((Active*)*it)->set_y_scale(global_values->get(17)+6);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1742_77_end: ;
}
void Frames::event_func_17453()
{
    // event 1743_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1743_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (34))) goto event_1743_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1743_77_end: ;
}
void Frames::event_func_17454()
{
    // event 1744_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1744_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (34))) goto event_1744_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1744_77_end;
        global_values->set(4, 0);
        next_frame = 83 + 0;    
    
        media.stop_channel(32-1);
    }
    event_1744_77_end: ;
}
void Frames::event_func_17455()
{
    // event 1745_77
    bool or_result_1745_77 = false;
    bool or_temp_result_1745_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1745_77_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1745_77_0_end;
        or_result_1745_77 = true;
        or_temp_result_1745_77_0 = true;
    }
    or_event_1745_77_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1745_77_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1745_77
    bool or_temp_result_1745_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1745_77_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1745_77_1_end;
        or_result_1745_77 = true;
        or_temp_result_1745_77_1 = true;
    }
    or_event_1745_77_1_end: ;
    if (or_temp_result_1745_77_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1745_77
    bool or_temp_result_1745_77_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1745_77_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1745_77_2_end;
        or_result_1745_77 = true;
        or_temp_result_1745_77_2 = true;
        or_event_1745_77_2_end: ;
        if (or_temp_result_1745_77_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1745_77) goto or_final_or_event_1745_77_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1745_77_0 || or_temp_result_1745_77_1 || or_temp_result_1745_77_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1745_77_2_end: ;
}
void Frames::event_func_17456()
{
    // event 1746_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1746_77_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1746_77_end;
        if (!(((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.is_off(1))) goto event_1746_77_end;
        breakableruinspiece_3904_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_breakableruinspiece_3904(-35, 1895), 2);
            breakableruinspiece_3904_instances.add_back();
        }
        for (ObjectIterator it(breakableruinspiece_3904_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()-30-randrange(15));
            ((Active*)*it)->set_angle(randrange(360), 0);
            ((Active*)*it)->set_x(frame_left()+randrange(global_values->get(16)));
            ((Active*)*it)->alterables->values.set(1, -15+randrange(31));
            ((Active*)*it)->alterables->values.set(5, 10-randrange(6));
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(5)*0.1);
            ((Active*)*it)->force_frame(randrange(5));
        }
    }
    event_1746_77_end: ;
}
void Frames::event_func_17457()
{
    // event 1747_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1747_77_end;
        breakableruinspiece_3904_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece_3904_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+15);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(1), 0);
        }
    }
    event_1747_77_end: ;
}
void Frames::event_func_17458()
{
    // event 1751_77
    bool or_result_1751_77 = false;
    bool or_temp_result_1751_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1751_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1751_77_0_end;
        or_result_1751_77 = true;
        or_temp_result_1751_77_0 = true;
    }
    or_event_1751_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    if (or_temp_result_1751_77_0) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1751_77
    bool or_temp_result_1751_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1751_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (13))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1751_77_1_end;
        or_result_1751_77 = true;
        or_temp_result_1751_77_1 = true;
        or_event_1751_77_1_end: ;
        if (or_temp_result_1751_77_1) {
            mrstumpy_3913_instances.save_selection();
        }
        if (!or_result_1751_77) goto or_final_or_event_1751_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        if (or_temp_result_1751_77_0 || or_temp_result_1751_77_1) {
            mrstumpy_3913_instances.restore_selection();
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2160+randrange(3));
        }
    }
    or_final_or_event_1751_77_1_end: ;
}
void Frames::event_func_17459()
{
    // event 1752_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1752_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1752_77_end;
        if (!((global_values->get(1)) != (0))) goto event_1752_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, -5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 880);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2218);
            ((Active*)*it)->set_x(400);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1752_77_end: ;
}
void Frames::event_func_17460()
{
    // event 1753_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1753_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-5))) goto event_1753_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_x()));
    }
    event_1753_77_end: ;
}
void Frames::event_func_17461()
{
    // event 1754_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1754_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-5))) goto event_1754_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1754_77_end;
        if (!((((Active*)get_instance(collapsingsegment2_3914_instances))->get_y()) < (2231))) goto event_1754_77_end;
        ((Active*)get_instance(collapsingsegment2_3914_instances))->set_y(get_min(((Active*)get_instance(collapsingsegment2_3914_instances))->get_y()+12, 2231));
    }
    event_1754_77_end: ;
}
void Frames::event_func_17462()
{
    // event 1755_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1755_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-5))) goto event_1755_77_end;
        if (!((((Active*)get_instance(collapsingsegment2_3914_instances))->get_y()) >= (2231))) goto event_1755_77_end;
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(collapsingsegment2_3914_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 144, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 48, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 96, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2232);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1755_77_end: ;
}
void Frames::event_func_17463()
{
    // event 1756_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1756_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-4))) goto event_1756_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1756_77_end: ;
}
void Frames::event_func_17464()
{
    // event 1757_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1757_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-4))) goto event_1757_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1757_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 71);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        media.lock(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2218);
            ((Active*)*it)->set_x(600);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1757_77_end: ;
}
void Frames::event_func_17465()
{
    // event 1758_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1758_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (-3))) goto event_1758_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (-1))) goto event_1758_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1758_77_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40);
        }
    }
    event_1758_77_end: ;
}
void Frames::event_func_17466()
{
    // event 1759_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1759_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (-3))) goto event_1759_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (-1))) goto event_1759_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1759_77_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1759_77_end: ;
}
void Frames::event_func_17467()
{
    // event 1760_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1760_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1760_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_1760_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1760_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) < (0))) goto event_1760_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1760_77_end: ;
}
void Frames::event_func_17468()
{
    // event 1761_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1761_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-2))) goto event_1761_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-6, ((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()+160));
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_1761_77_end: ;
}
void Frames::event_func_17469()
{
    // event 1762_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1762_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-2))) goto event_1762_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1762_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1762_77_end: ;
}
void Frames::event_func_17470()
{
    // event 1763_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1763_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-2))) goto event_1763_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1763_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1763_77_end: ;
}
void Frames::event_func_17471()
{
    // event 1764_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1764_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1764_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1764_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1764_77_end: ;
}
void Frames::event_func_17472()
{
    // event 1765_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1765_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1765_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1765_77_end;
        if (not_always_1765_77 > loop_count) {
            not_always_1765_77 = loop_count + 2;
            goto event_1765_77_end;
        }
        not_always_1765_77 = loop_count + 2;
        media.play_id(SOUND_ATTACK_293, -1, 1);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1765_77_end: ;
}
void Frames::event_func_17473()
{
    // event 1766_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1766_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1766_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1766_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_1766_77_end: ;
}
void Frames::event_func_17474()
{
    // event 1767_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1767_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1767_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1767_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_1767_77_end: ;
}
void Frames::event_func_17475()
{
    // event 1768_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1768_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1768_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1768_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1768_77_end: ;
}
