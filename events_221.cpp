#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17476()
{
    // event 1769_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1769_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1769_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1769_77_end: ;
}
void Frames::event_func_17477()
{
    // event 1770_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1770_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1770_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1770_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 3);
    }
    event_1770_77_end: ;
}
void Frames::event_func_17478()
{
    // event 1771_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1771_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1771_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2218);
            ((Active*)*it)->set_x(-64);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1771_77_end: ;
}
void Frames::event_func_17479()
{
    // event 1772_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1772_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1772_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1772_77_end: ;
}
void Frames::event_func_17480()
{
    // event 1773_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1773_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1773_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1773_77_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1773_77_end: ;
}
void Frames::event_func_17481()
{
    // event 1774_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1774_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1774_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (30))) goto event_1774_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1774_77_end: ;
}
void Frames::event_func_17482()
{
    // event 1775_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1775_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1775_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (90))) goto event_1775_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1775_77_end: ;
}
void Frames::event_func_17483()
{
    // event 1776_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1776_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1776_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (60))) goto event_1776_77_end;
        playerskinsash_418_instances.clear_selection();
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
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1776_77_end: ;
}
void Frames::event_func_17484()
{
    // event 1777_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1777_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1777_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (60))) goto event_1777_77_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
        }
    }
    event_1777_77_end: ;
}
void Frames::event_func_17485()
{
    // event 1778_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1778_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1778_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (75))) goto event_1778_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (90))) goto event_1778_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1778_77_end: ;
}
void Frames::event_func_17486()
{
    // event 1779_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1779_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1779_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (90))) goto event_1779_77_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 71);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        media.lock(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1779_77_end: ;
}
void Frames::event_func_17487()
{
    // event 1780_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1780_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1780_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_1780_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1780_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) > (0))) goto event_1780_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 2);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(collapsingsegment2_3914_instances))->set_y(2231);
    }
    event_1780_77_end: ;
}
void Frames::event_func_17488()
{
    // event 1781_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1781_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1781_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()+160);
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1781_77_end: ;
}
void Frames::event_func_17489()
{
    // event 1782_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1782_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1782_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (12))) goto event_1782_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (21))) goto event_1782_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_1782_77_end: ;
}
void Frames::event_func_17490()
{
    // event 1783_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1783_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1783_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (21))) goto event_1783_77_end;
        ((Active*)get_instance(collapsingsegment1_3912_instances))->set_y(((Active*)get_instance(collapsingsegment1_3912_instances))->get_y()+12);
    }
    event_1783_77_end: ;
}
void Frames::event_func_17491()
{
    // event 1784_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1784_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1784_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (21))) goto event_1784_77_end;
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(collapsingsegment1_3912_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -144, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -48, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -96, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2232);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1784_77_end: ;
}
void Frames::event_func_17492()
{
    // event 1785_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1785_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1785_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1785_77_end;
        playerskinsash_418_instances.clear_selection();
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
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1785_77_end: ;
}
void Frames::event_func_17493()
{
    // event 1786_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1786_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (2))) goto event_1786_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(collapsingsegment2_3914_instances))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1786_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1786_77_end: ;
}
void Frames::event_func_17494()
{
    // event 1787_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1787_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1787_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-50))) goto event_1787_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
    }
    event_1787_77_end: ;
}
void Frames::event_func_17495()
{
    // event 1788_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1788_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1788_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-50))) goto event_1788_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1788_77_end: ;
}
void Frames::event_func_17496()
{
    // event 1789_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1789_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1789_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1789_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1789_77_end: ;
}
void Frames::event_func_17497()
{
    // event 1790_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1790_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1790_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1790_77_end;
        if (not_always_1790_77 > loop_count) {
            not_always_1790_77 = loop_count + 2;
            goto event_1790_77_end;
        }
        not_always_1790_77 = loop_count + 2;
        media.play_id(SOUND_ATTACK_293, -1, 1);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1790_77_end: ;
}
void Frames::event_func_17498()
{
    // event 1791_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1791_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1791_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1791_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_1791_77_end: ;
}
void Frames::event_func_17499()
{
    // event 1792_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1792_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1792_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1792_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_1792_77_end: ;
}
void Frames::event_func_17500()
{
    // event 1793_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1793_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1793_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1793_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1793_77_end: ;
}
void Frames::event_func_17501()
{
    // event 1794_77
    bool or_result_1794_77 = false;
    bool or_temp_result_1794_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1794_77_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (72))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (74))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1794_77_0_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1794_77_0_end;
        or_result_1794_77 = true;
        or_temp_result_1794_77_0 = true;
    }
    or_event_1794_77_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    dialogarrow_568_instances.clear_saved_selection();
    if (or_temp_result_1794_77_0) {
        dialogbox_566_instances.save_selection();
        dialogarrow_568_instances.save_selection();
    }
    // event 1794_77
    bool or_temp_result_1794_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1794_77_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (74))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1794_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (18))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1794_77_1_end;
        or_result_1794_77 = true;
        or_temp_result_1794_77_1 = true;
        or_event_1794_77_1_end: ;
        mrstumpy_3913_instances.clear_saved_selection();
        if (or_temp_result_1794_77_1) {
            mrstumpy_3913_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1794_77) goto or_final_or_event_1794_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        dialogarrow_568_instances.empty_selection();
        if (or_temp_result_1794_77_1) {
            mrstumpy_3913_instances.restore_selection();
        }
        if (or_temp_result_1794_77_0 || or_temp_result_1794_77_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1794_77_0) {
            dialogarrow_568_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_1794_77_1_end: ;
}
void Frames::event_func_17502()
{
    // event 1795_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1795_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (74))) goto event_1795_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1795_77_end: ;
}
void Frames::event_func_17503()
{
    // event 1796_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1796_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1796_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (75))) goto event_1796_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1796_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 5);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_1796_77_end: ;
}
void Frames::event_func_17504()
{
    // event 1797_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1797_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1797_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1797_77_end: ;
}
void Frames::event_func_17505()
{
    // event 1798_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1798_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1798_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (10))) goto event_1798_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1798_77_end: ;
}
void Frames::event_func_17506()
{
    // event 1799_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1799_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1799_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (20))) goto event_1799_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1799_77_end: ;
}
void Frames::event_func_17507()
{
    // event 1800_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1800_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1800_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (26))) goto event_1800_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
            ((Active*)*it)->alterables->values.set(22, -3);
        }
    }
    event_1800_77_end: ;
}
void Frames::event_func_17508()
{
    // event 1801_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1801_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1801_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (26))) goto event_1801_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(22), ((Active*)*it)->alterables->values.get(24)));
            ((Active*)*it)->alterables->values.add(22, 0.25);
        }
    }
    event_1801_77_end: ;
}
void Frames::event_func_17509()
{
    // event 1802_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1802_77_end;
        if (!((global_values->get(1)) != (0))) goto event_1802_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1802_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (26))) goto event_1802_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 8);
    }
    event_1802_77_end: ;
}
void Frames::event_func_17510()
{
    // event 1803_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1803_77_end;
        if (!((global_values->get(1)) != (0))) goto event_1803_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1803_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (26))) goto event_1803_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1803_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 10);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 0);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1803_77_end: ;
}
void Frames::event_func_17511()
{
    // event 1804_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1804_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1804_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (26))) goto event_1804_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1804_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 0);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(27);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27);
        }
    }
    event_1804_77_end: ;
}
void Frames::event_func_17512()
{
    // event 1805_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1805_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1805_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (50))) goto event_1805_77_end;
        if (!((global_values->get(1)) == (0))) goto event_1805_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 4);
    }
    event_1805_77_end: ;
}
void Frames::event_func_17513()
{
    // event 1806_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1806_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (5))) goto event_1806_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (70))) goto event_1806_77_end;
        if (!((global_values->get(1)) == (0))) goto event_1806_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
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
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
    }
    event_1806_77_end: ;
}
void Frames::event_func_17514()
{
    // event 1807_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1807_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (6))) goto event_1807_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (7))) goto event_1807_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()+randrange(3), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+randrange(3)));
    }
    event_1807_77_end: ;
}
void Frames::event_func_17515()
{
    // event 1808_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1808_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1808_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1808_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
    }
    event_1808_77_end: ;
}
void Frames::event_func_17516()
{
    // event 1809_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1809_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1809_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-2))) goto event_1809_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1809_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
    }
    event_1809_77_end: ;
}
void Frames::event_func_17517()
{
    // event 1810_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1810_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1810_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1810_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1810_77_end: ;
}
void Frames::event_func_17518()
{
    // event 1811_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1811_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (7))) goto event_1811_77_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1811_77_end: ;
}
void Frames::event_func_17519()
{
    // event 1812_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1812_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (7))) goto event_1812_77_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (frame_right()+40))) goto event_1812_77_end;
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
    }
    event_1812_77_end: ;
}
void Frames::event_func_17520()
{
    // event 1813_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1813_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1813_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1813_77_end: ;
}
void Frames::event_func_17521()
{
    // event 1814_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1814_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1814_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1814_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.enable(1);
    }
    event_1814_77_end: ;
}
void Frames::event_func_17522()
{
    // event 1815_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1815_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1815_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (240))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1815_77_end;
        global_values->set(4, 2);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1815_77_end: ;
}
void Frames::event_func_17523()
{
    // event 1816_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1816_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1816_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
        ((Active*)get_instance(collapsingsegment1_3912_instances))->set_x(2175);
        ((Active*)get_instance(collapsingsegment1_3912_instances))->set_y(2295);
    }
    event_1816_77_end: ;
}
void Frames::event_func_17524()
{
    // event 1817_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1817_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1817_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(collapsingsegment1_3912_instances))->get_x()-global_values->get(16)*0.5))) goto event_1817_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 7);
    }
    event_1817_77_end: ;
}
void Frames::event_func_17525()
{
    // event 1818_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1818_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (10))) goto event_1818_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(collapsingsegment1_3912_instances))->get_x()-160))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1818_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)get_instance(collapsingsegment1_3912_instances))->get_x()-160);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        breakableruins_1184_instances.clear_selection();
        spread_value(breakableruins_1184_instances, 0, 0);
        media.play_id(SOUND_CAVE_COLLAPSE_214, -1, 1);
    }
    event_1818_77_end: ;
}
void Frames::event_func_17526()
{
    // event 1819_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1819_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1819_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1819_77_end: ;
}
void Frames::event_func_17527()
{
    // event 1820_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1820_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1820_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (15))) goto event_1820_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1820_77_end: ;
}
void Frames::event_func_17528()
{
    // event 1821_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1821_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1821_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1821_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1821_77_end: ;
}
void Frames::event_func_17529()
{
    // event 1822_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1822_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1822_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1822_77_end;
        if (not_always_1822_77 > loop_count) {
            not_always_1822_77 = loop_count + 2;
            goto event_1822_77_end;
        }
        not_always_1822_77 = loop_count + 2;
        media.play_id(SOUND_ATTACK_293, -1, 1);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1822_77_end: ;
}
void Frames::event_func_17530()
{
    // event 1823_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1823_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1823_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1823_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_1823_77_end: ;
}
void Frames::event_func_17531()
{
    // event 1824_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1824_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1824_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1824_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_1824_77_end: ;
}
void Frames::event_func_17532()
{
    // event 1825_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1825_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1825_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1825_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_1825_77_end: ;
}
void Frames::event_func_17533()
{
    // event 1826_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1826_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1826_77_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)/math_helper/15))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1826_77_end;
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1), 2168));
            ((Active*)*it)->alterables->values.add(1, 0.5);
        }
    }
    event_1826_77_end: ;
}
void Frames::event_func_17534()
{
    // event 1827_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1827_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1827_77_end;
        breakableruins_1184_instances.clear_selection();
        playerskincarol_445_instances.clear_selection();
        if (!check_overlap(breakableruins_1184_instances, playerskincarol_445_instances)) goto event_1827_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(38)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1827_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        media.play_id(SOUND_CAROL_DIE_2_128, -1, 1);
    }
    event_1827_77_end: ;
}
void Frames::event_func_17535()
{
    // event 1828_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1828_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1828_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (180))) goto event_1828_77_end;
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
    }
    event_1828_77_end: ;
}
void Frames::event_func_17536()
{
    // event 1829_77
    bool or_result_1829_77 = false;
    bool or_temp_result_1829_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1829_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1829_77_0_end;
        or_result_1829_77 = true;
        or_temp_result_1829_77_0 = true;
    }
    or_event_1829_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    if (or_temp_result_1829_77_0) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1829_77
    bool or_temp_result_1829_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto or_event_1829_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1829_77_1_end;
        or_result_1829_77 = true;
        or_temp_result_1829_77_1 = true;
        or_event_1829_77_1_end: ;
        if (or_temp_result_1829_77_1) {
            mrstumpy_3913_instances.save_selection();
        }
        if (!or_result_1829_77) goto or_final_or_event_1829_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        if (or_temp_result_1829_77_0 || or_temp_result_1829_77_1) {
            mrstumpy_3913_instances.restore_selection();
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    or_final_or_event_1829_77_1_end: ;
}
void Frames::event_func_17537()
{
    // event 1830_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1830_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1830_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1830_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->flags.enable(1);
    }
    event_1830_77_end: ;
}
void Frames::event_func_17538()
{
    // event 1831_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1831_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1831_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (240))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1831_77_end;
        ((Active*)get_instance(basementlight_1269_instances))->set_scale(10);
        ((Active*)get_instance(basementlight_1269_instances))->set_x(frame_left());
        ((Active*)get_instance(basementlight_1269_instances))->set_y(frame_top());
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(basementlight_1269_instances))->set_visible(true);
    }
    event_1831_77_end: ;
}
void Frames::event_func_17539()
{
    // event 1832_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1832_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1832_77_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1832_77_end;
        playerskinmillatail_381_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinmillatail_381(1300, 2200), 0);
            playerskinmillatail_381_instances.add_back();
        }
        playerskinmilla_446_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinmilla_446(1300, 2200), 2);
            playerskinmilla_446_instances.add_back();
        }
    }
    event_1832_77_end: ;
}
void Frames::event_func_17540()
{
    // event 1833_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1833_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1833_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2218);
            ((Active*)*it)->set_x(frame_left()+40);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1833_77_end: ;
}
void Frames::event_func_17541()
{
    // event 1834_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1834_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1834_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1834_77_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
        }
        {
            FrameObject * parent = ((Active*)get_single(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_1834_77_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + -16);
            pos_end_1834_77_0: ;
        }
    }
    event_1834_77_end: ;
}
void Frames::event_func_17542()
{
    // event 1835_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1835_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1835_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (158))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1835_77_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
    }
    event_1835_77_end: ;
}
void Frames::event_func_17543()
{
    // event 1836_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1836_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1836_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (168))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1836_77_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(10);
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
    }
    event_1836_77_end: ;
}
void Frames::event_func_17544()
{
    // event 1837_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1837_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (13))) goto event_1837_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (300))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1837_77_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1837_77_end: ;
}
void Frames::event_func_17545()
{
    // event 1838_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1838_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1838_77_end;
        {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_1838_77_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + -16);
            pos_end_1838_77_0: ;
        }
    }
    event_1838_77_end: ;
}
void Frames::event_func_17546()
{
    // event 1839_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cave_collapse_1)) goto event_1839_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1839_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (240))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1839_77_end;
        global_values->set(4, 2);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1839_77_end: ;
}
void Frames::event_func_17547()
{
    // event 1840_77
    {
        if (!(group_main_engine_1)) goto event_1840_77_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_1840_77_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1840_77_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
        ((Active*)get_instance(gongshield_633_instances))->force_frame(((Active*)get_instance(npcgong_634_instances))->get_frame());
    }
    event_1840_77_end: ;
}
void Frames::event_func_17548()
{
    // event 2077_77
    {
        if (!(group_pause_1)) goto event_2077_77_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2077_77_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2077_77_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2077_77_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2077_77_end;
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        ((Active*)get_instance(npcgong_634_instances))->stop_animation();
        ((Active*)get_instance(gongshield_633_instances))->stop_animation();
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
    }
    event_2077_77_end: ;
}
void Frames::event_func_17549()
{
    // event 2078_77
    bool or_result_2078_77 = false;
    bool or_temp_result_2078_77_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2078_77_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2078_77_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2078_77_0_end;
        or_result_2078_77 = true;
        or_temp_result_2078_77_0 = true;
    }
    or_event_2078_77_0_end: ;
    // event 2078_77
    bool or_temp_result_2078_77_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2078_77_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2078_77_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2078_77_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2078_77_1_end;
        or_result_2078_77 = true;
        or_temp_result_2078_77_1 = true;
        or_event_2078_77_1_end: ;
        if (!or_result_2078_77) goto or_final_or_event_2078_77_1_end;
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        ((Active*)get_instance(npcgong_634_instances))->start_animation();
        ((Active*)get_instance(gongshield_633_instances))->start_animation();
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
    }
    or_final_or_event_2078_77_1_end: ;
}
void Frames::event_func_17550()
{
    // event 2082_77
    {
        if (!(group_pause_1)) goto event_2082_77_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_2082_77_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2082_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_2082_77_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 3);
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
    }
    event_2082_77_end: ;
}
void Frames::event_func_17551()
{
    // event 2083_77
    {
        if (!(group_pause_1)) goto event_2083_77_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_2083_77_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2083_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_2083_77_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 4);
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
    }
    event_2083_77_end: ;
}
void Frames::event_func_17552()
{
    // event 2085_77
    {
        if (!(group_pause_1)) goto event_2085_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2085_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2085_77_end;
        if (!((global_values->get(4)) <= (1))) goto event_2085_77_end;
        next_frame = 24 + 0;    
    
        global_values->set(4, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.stop_samples();
    }
    event_2085_77_end: ;
}
void Frames::event_func_17553()
{
    // event 2086_77
    {
        if (!(group_pause_1)) goto event_2086_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2086_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2086_77_end;
        if (!((global_values->get(4)) == (2))) goto event_2086_77_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
    }
    event_2086_77_end: ;
}
void Frames::event_func_17554()
{
    // event 2087_77
    {
        if (!(group_pause_1)) goto event_2087_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2087_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2087_77_end;
        if (!((global_values->get(4)) >= (3))) goto event_2087_77_end;
        global_values->set(4, 0);
        media.stop_samples();
        next_frame = 83 + 0;    
    
    }
    event_2087_77_end: ;
}
void Frames::event_func_17555()
{
    // event 2088_77
    {
        if (!(group_pause_1)) goto event_2088_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2088_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2088_77_end;
        if (!((global_values->get(4)) <= (1))) goto event_2088_77_end;
        next_frame = 24 + 0;    
    
        global_values->set(4, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2088_77_end: ;
}
void Frames::event_func_17556()
{
    // event 2089_77
    {
        if (!(group_pause_1)) goto event_2089_77_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2089_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2089_77_end;
        if (!((global_values->get(4)) >= (2))) goto event_2089_77_end;
        next_frame = 29 + 0;    
    
        global_values->set(4, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2089_77_end: ;
}
void Frames::handle_frame_78_events()
{
    test_collisions_77();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_2735();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_2744();
    event_func_1473();
    event_func_16748();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_2752();
    event_func_2753();
    event_func_2754();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_2755();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_1726();
    event_func_1727();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_2776();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_16749();
    event_func_1759();
    event_func_16750();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_16751();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_16752();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_16753();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_2823();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_16754();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_16755();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_2824();
    event_func_1973();
    event_func_2825();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_16756();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2082();
    event_func_2083();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_16757();
    event_func_2289();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2321();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_16758();
    event_func_16759();
    event_func_16760();
    event_func_16761();
    event_func_16762();
    event_func_16763();
    if (!group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1_end;
    event_func_16764();
    event_func_16765();
    event_func_16766();
    event_func_16767();
    event_func_16768();
    event_func_16769();
    event_func_16770();
    event_func_16771();
    event_func_16772();
    group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1_end;
    event_func_16773();
    event_func_16774();
    event_func_16775();
    event_func_16776();
    group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1_end;
    event_func_16777();
    event_func_16778();
    group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1_end;
    event_func_16779();
    event_func_16780();
    event_func_16781();
    event_func_16782();
    event_func_16783();
    event_func_16784();
    event_func_16785();
    group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1_end;
    event_func_16786();
    event_func_16787();
    event_func_16788();
    event_func_16789();
    event_func_16790();
    group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_8770();
    event_func_2996();
    event_func_8771();
    event_func_8772();
    event_func_16791();
    event_func_2491();
    event_func_17182();
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    event_func_17033();
    event_func_17034();
    event_func_17035();
    event_func_17036();
    event_func_17037();
    event_func_17038();
    event_func_17039();
    event_func_17040();
    event_func_17041();
    event_func_17042();
    event_func_17043();
    event_func_17044();
    event_func_17045();
    event_func_17046();
    event_func_17047();
    event_func_17048();
    event_func_17049();
    event_func_17050();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_17051();
    event_func_17052();
    event_func_17053();
    event_func_17054();
    event_func_17055();
    event_func_17056();
    event_func_17057();
    event_func_17058();
    event_func_17059();
    event_func_17060();
    event_func_17061();
    event_func_17062();
    event_func_17063();
    event_func_17064();
    event_func_17068();
    event_func_17183();
    event_func_17184();
    event_func_17185();
    event_func_17186();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_17071();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end;
    event_func_17072();
    event_func_17073();
    event_func_17074();
    event_func_17075();
    event_func_17076();
    event_func_17077();
    event_func_17078();
    event_func_17079();
    event_func_17080();
    event_func_17081();
    event_func_17082();
    event_func_17083();
    event_func_17084();
    event_func_17085();
    event_func_17086();
    event_func_17187();
    event_func_17188();
    event_func_17189();
    event_func_17190();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_17091();
    if (!group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1) goto group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1_end;
    event_func_17191();
    event_func_17192();
    event_func_17193();
    event_func_17194();
    event_func_17195();
    event_func_17196();
    event_func_17197();
    event_func_17198();
    event_func_17199();
    event_func_17200();
    event_func_17201();
    event_func_17202();
    event_func_17203();
    event_func_17204();
    event_func_17205();
    event_func_17206();
    event_func_17207();
    event_func_17208();
    event_func_17209();
    event_func_17210();
    event_func_17211();
    event_func_17212();
    event_func_17213();
    event_func_17214();
    event_func_17215();
    event_func_17216();
    event_func_17217();
    event_func_17218();
    event_func_17219();
    event_func_17220();
    event_func_17221();
    event_func_17222();
    event_func_17223();
    event_func_17224();
    event_func_17225();
    event_func_17226();
    event_func_17227();
    event_func_17228();
    event_func_17229();
    event_func_17230();
    event_func_17231();
    event_func_17232();
    event_func_17233();
    event_func_17234();
    event_func_17235();
    event_func_17236();
    event_func_17237();
    event_func_17238();
    event_func_17239();
    event_func_17240();
    group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1) goto group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1_end;
    event_func_17241();
    event_func_17242();
    event_func_17243();
    event_func_17244();
    event_func_17245();
    event_func_17246();
    event_func_17247();
    event_func_17248();
    event_func_17249();
    event_func_17250();
    event_func_17251();
    event_func_17252();
    event_func_17253();
    event_func_17254();
    event_func_17255();
    event_func_17256();
    event_func_17257();
    event_func_17258();
    event_func_17259();
    event_func_17260();
    event_func_17261();
    event_func_17262();
    event_func_17263();
    event_func_17264();
    event_func_17265();
    event_func_17266();
    event_func_17267();
    event_func_17268();
    event_func_17269();
    event_func_17270();
    event_func_17271();
    event_func_17272();
    event_func_17273();
    event_func_17274();
    event_func_17275();
    event_func_17276();
    event_func_17277();
    event_func_17278();
    event_func_17279();
    event_func_17280();
    event_func_17281();
    event_func_17282();
    event_func_17283();
    event_func_17284();
    event_func_17285();
    event_func_17286();
    event_func_17287();
    event_func_17288();
    event_func_17289();
    event_func_17290();
    event_func_17291();
    event_func_17292();
    event_func_17293();
    event_func_17294();
    event_func_17295();
    event_func_17296();
    event_func_17297();
    event_func_17298();
    event_func_17299();
    event_func_17300();
    event_func_17301();
    event_func_17302();
    event_func_17303();
    event_func_17304();
    event_func_17305();
    event_func_17306();
    event_func_17307();
    event_func_17308();
    event_func_17309();
    event_func_17310();
    event_func_17311();
    event_func_17312();
    event_func_17313();
    event_func_17314();
    event_func_17315();
    event_func_17316();
    event_func_17317();
    event_func_17318();
    event_func_17319();
    event_func_17320();
    event_func_17321();
    event_func_17322();
    event_func_17323();
    event_func_17324();
    event_func_17325();
    event_func_17326();
    event_func_17327();
    event_func_17328();
    group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_meet_milla_1) goto group_main_engine_level_specific_methods_cutscenes_meet_milla_1_end;
    event_func_17329();
    event_func_17330();
    event_func_17331();
    event_func_17332();
    event_func_17333();
    event_func_17334();
    event_func_17335();
    event_func_17336();
    event_func_17337();
    event_func_17338();
    event_func_17339();
    event_func_17340();
    event_func_17341();
    event_func_17342();
    event_func_17343();
    event_func_17344();
    event_func_17345();
    event_func_17346();
    event_func_17347();
    event_func_17348();
    event_func_17349();
    event_func_17350();
    event_func_17351();
    event_func_17352();
    event_func_17353();
    event_func_17354();
    event_func_17355();
    event_func_17356();
    event_func_17357();
    event_func_17358();
    event_func_17359();
    event_func_17360();
    event_func_17361();
    event_func_17362();
    event_func_17363();
    event_func_17364();
    event_func_17365();
    event_func_17366();
    event_func_17367();
    event_func_17368();
    event_func_17369();
    event_func_17370();
    event_func_17371();
    event_func_17372();
    event_func_17373();
    event_func_17374();
    event_func_17375();
    event_func_17376();
    event_func_17377();
    event_func_17378();
    event_func_17379();
    event_func_17380();
    event_func_17381();
    event_func_17382();
    event_func_17383();
    event_func_17384();
    event_func_17385();
    event_func_17386();
    event_func_17387();
    event_func_17388();
    event_func_17389();
    event_func_17390();
    event_func_17391();
    event_func_17392();
    event_func_17393();
    event_func_17394();
    event_func_17395();
    event_func_17396();
    event_func_17397();
    event_func_17398();
    event_func_17399();
    event_func_17400();
    event_func_17401();
    event_func_17402();
    event_func_17403();
    event_func_17404();
    event_func_17405();
    event_func_17406();
    event_func_17407();
    event_func_17408();
    event_func_17409();
    event_func_17410();
    event_func_17411();
    event_func_17412();
    event_func_17413();
    event_func_17414();
    event_func_17415();
    event_func_17416();
    event_func_17417();
    event_func_17418();
    event_func_17419();
    event_func_17420();
    event_func_17421();
    event_func_17422();
    event_func_17423();
    event_func_17424();
    event_func_17425();
    event_func_17426();
    event_func_17427();
    event_func_17428();
    event_func_17429();
    event_func_17430();
    event_func_17431();
    event_func_17432();
    event_func_17433();
    event_func_17434();
    event_func_17435();
    event_func_17436();
    event_func_17437();
    event_func_17438();
    event_func_17439();
    event_func_17440();
    event_func_17441();
    event_func_17442();
    event_func_17443();
    event_func_17444();
    event_func_17445();
    event_func_17446();
    event_func_17447();
    event_func_17448();
    event_func_17449();
    event_func_17450();
    event_func_17451();
    event_func_17452();
    event_func_17453();
    event_func_17454();
    group_main_engine_level_specific_methods_cutscenes_meet_milla_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_cave_collapse_1) goto group_main_engine_level_specific_methods_cutscenes_cave_collapse_1_end;
    event_func_17455();
    event_func_17456();
    event_func_17457();
    event_func_17458();
    event_func_17459();
    event_func_17460();
    event_func_17461();
    event_func_17462();
    event_func_17463();
    event_func_17464();
    event_func_17465();
    event_func_17466();
    event_func_17467();
    event_func_17468();
    event_func_17469();
    event_func_17470();
    event_func_17471();
    event_func_17472();
    event_func_17473();
    event_func_17474();
    event_func_17475();
    event_func_17476();
    event_func_17477();
    event_func_17478();
    event_func_17479();
    event_func_17480();
    event_func_17481();
    event_func_17482();
    event_func_17483();
    event_func_17484();
    event_func_17485();
    event_func_17486();
    event_func_17487();
    event_func_17488();
    event_func_17489();
    event_func_17490();
    event_func_17491();
    event_func_17492();
    event_func_17493();
    event_func_17494();
    event_func_17495();
    event_func_17496();
    event_func_17497();
    event_func_17498();
    event_func_17499();
    event_func_17500();
    event_func_17501();
    event_func_17502();
    event_func_17503();
    event_func_17504();
    event_func_17505();
    event_func_17506();
    event_func_17507();
    event_func_17508();
    event_func_17509();
    event_func_17510();
    event_func_17511();
    event_func_17512();
    event_func_17513();
    event_func_17514();
    event_func_17515();
    event_func_17516();
    event_func_17517();
    event_func_17518();
    event_func_17519();
    event_func_17520();
    event_func_17521();
    event_func_17522();
    event_func_17523();
    event_func_17524();
    event_func_17525();
    event_func_17526();
    event_func_17527();
    event_func_17528();
    event_func_17529();
    event_func_17530();
    event_func_17531();
    event_func_17532();
    event_func_17533();
    event_func_17534();
    event_func_17535();
    event_func_17536();
    event_func_17537();
    event_func_17538();
    event_func_17539();
    event_func_17540();
    event_func_17541();
    event_func_17542();
    event_func_17543();
    event_func_17544();
    event_func_17545();
    event_func_17546();
    group_main_engine_level_specific_methods_cutscenes_cave_collapse_1_end: ;
    event_func_17547();
    if (!group_main_engine_interface_and_post_processing_methods_shields_1) goto group_main_engine_interface_and_post_processing_methods_shields_1_end;
    event_func_17092();
    event_func_17093();
    event_func_17094();
    event_func_17095();
    event_func_17096();
    event_func_17097();
    if (!group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1_end;
    event_func_17098();
    event_func_17099();
    event_func_17100();
    event_func_17101();
    event_func_17102();
    event_func_17103();
    event_func_17104();
    event_func_17105();
    event_func_17106();
    event_func_17107();
    event_func_17108();
    event_func_17109();
    group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1_end;
    event_func_17110();
    event_func_17111();
    event_func_17112();
    event_func_17113();
    group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1_end;
    event_func_17114();
    event_func_17115();
    group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1_end;
    event_func_17116();
    event_func_17117();
    event_func_17118();
    event_func_17119();
    event_func_17120();
    event_func_17121();
    event_func_17122();
    group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1_end;
    event_func_17123();
    event_func_17124();
    event_func_17125();
    event_func_17126();
    event_func_17127();
    event_func_17128();
    event_func_17129();
    event_func_17130();
    group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1_end: ;
    event_func_17131();
    event_func_17132();
    event_func_17133();
    event_func_17134();
    event_func_17135();
    event_func_17136();
    event_func_17137();
    event_func_17138();
    event_func_17139();
    event_func_17140();
    event_func_17141();
    group_main_engine_interface_and_post_processing_methods_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_17548();
    event_func_17549();
    event_func_2644();
    event_func_3252();
    event_func_3253();
    event_func_17550();
    event_func_17551();
    event_func_3976();
    event_func_17552();
    event_func_17553();
    event_func_17554();
    event_func_17555();
    event_func_17556();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_78_pre_events()
{
}
void Frames::event_func_17557()
{
    // event 1_77
    {
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.stop_channel(32-1);
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
    }
    event_1_77_end: ;
}
void Frames::event_func_17558()
{
    // event 28_77
    {
        if (!(group_main_engine_1)) goto event_28_77_end;
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.99);
            ((SystemBox*)*it)->alterables->values.set(4, 0.94);
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.95);
            ((SystemBox*)*it)->alterables->values.set(4, 0.92);
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.85);
            ((SystemBox*)*it)->alterables->values.set(4, 0.85);
        }
        levelparallaxpiece3r_1093_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece3r_1093_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.4);
            ((SystemBox*)*it)->alterables->values.set(4, 0.4);
        }
        levelparallaxpiece4r_1094_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece4r_1094_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.37);
            ((SystemBox*)*it)->alterables->values.set(4, 0.36);
        }
    }
    event_28_77_end: ;
}
void Frames::event_func_17559()
{
    // event 1407_77
    {
        if (!(group_main_engine_1)) goto event_1407_77_end;
        if (!((global_values->get(4)) >= (0))) goto event_1407_77_end;
        if (!((global_values->get(4)) < (3))) goto event_1407_77_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1407_77_end: ;
}
void Frames::event_func_17560()
{
    // event 1410_77
    {
        if (!(group_main_engine_1)) goto event_1410_77_end;
        if (!((global_values->get(4)) == (0))) goto event_1410_77_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, -3200);
        if (!group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1) {
            group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1 = true;
        }
        global_values->set(1, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 4);
    }
    event_1410_77_end: ;
}
void Frames::event_func_17561()
{
    // event 1411_77
    {
        if (!(group_main_engine_1)) goto event_1411_77_end;
        if (!((global_values->get(4)) == (1))) goto event_1411_77_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, -3200);
        if (!group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1) {
            group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 8);
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
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, 512);
    }
    event_1411_77_end: ;
}
void Frames::event_func_17562()
{
    // event 1412_77
    {
        if (!(group_main_engine_1)) goto event_1412_77_end;
        if (!((global_values->get(4)) == (2))) goto event_1412_77_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, -3200);
        if (!group_main_engine_level_specific_methods_cutscenes_meet_milla_1) {
            group_main_engine_level_specific_methods_cutscenes_meet_milla_1 = true;
        }
    }
    event_1412_77_end: ;
}
void Frames::event_func_17563()
{
    // event 1413_77
    {
        if (!(group_main_engine_1)) goto event_1413_77_end;
        if (!((global_values->get(4)) == (3))) goto event_1413_77_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, -3200);
        if (!group_main_engine_level_specific_methods_cutscenes_cave_collapse_1) {
            group_main_engine_level_specific_methods_cutscenes_cave_collapse_1 = true;
        }
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece3r_1093_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece3r_1093_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece4r_1094_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece4r_1094_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
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
    }
    event_1413_77_end: ;
}
void Frames::event_func_17564()
{
    // event 2034_77
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2034_77_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_visible(false);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
    }
    event_2034_77_end: ;
}
void Frames::on_frame_78_start_events()
{
    event_func_17557();
    event_func_17155();
    event_func_3265();
    event_func_4498();
    event_func_17159();
    event_func_17160();
    event_func_17161();
    event_func_17162();
    event_func_17163();
    event_func_17164();
    event_func_17165();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_17558();
    event_func_3269();
    event_func_17167();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_2686();
    event_func_17559();
    event_func_17560();
    event_func_17561();
    event_func_17562();
    event_func_17563();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_17564();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_78_init()
{
    index = 77;
    width = 3200;
    height = 2560;
    virtual_width = 3200;
    virtual_height = 2560;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &generaledge01_3894_instances, &generaledge02_3895_instances, &generaledge03_3896_instances, &generaledge04_3897_instances, &generaledge05_3898_instances, &hazardspikesup2_3909_instances, &hazardspikesright2_3910_instances, NULL};
    qualifier_9.set(38, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&caravanengine_1395_instances, NULL};
    qualifier_20.set(1, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0r_1090_instances, &levelparallaxpiece1r_1091_instances, &levelparallaxpiece2r_1092_instances, &levelparallaxpiece3r_1093_instances, &levelparallaxpiece4r_1094_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &bossclawbase_1393_instances, &breakableruins_1184_instances, &hazardspikesup2_3909_instances, &hazardspikesright2_3910_instances, &collapsingsegment1_3912_instances, &collapsingsegment2_3914_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, &generalanglechanger165_3899_instances, &generalanglechanger255_3900_instances, &generalanglechanger285_3901_instances, NULL};
    qualifier_18.set(5, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(11, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0r_1090(0, 0), 0);
    add_background_object(create_levelparallaxpiece1r_1091(0, 152), 0);
    add_background_object(create_levelparallaxpiece2r_1092(0, 200), 0);
    add_background_object(create_levelparallaxpiece3r_1093(0, 352), 0);
    add_background_object(create_levelparallaxpiece4r_1094(0, 384), 0);
    add_background_object(create_caravanplatform5_1321(2336, 592), 1);
    add_background_object(create_caravanplatform8_1273(2392, 544), 1);
    add_background_object(create_caravanplatform8_1273(2680, 544), 1);
    add_background_object(create_caravanplatform8_1273(2488, 544), 1);
    add_background_object(create_caravanplatform8_1273(2584, 544), 1);
    add_background_object(create_caravanplatform8_1273(2888, 528), 1);
    add_background_object(create_backdrop_3906(2888, 512), 1);
    add_background_object(create_caravanplatform12_1319(2864, 472), 1);
    add_background_object(create_caravanplatform12_1319(3056, 544), 1);
    add_background_object(create_caravanplatform3_1320(2400, 592), 1);
    add_background_object(create_caravanplatform3_1320(2656, 592), 1);
    add_background_object(create_caravanplatform3_1320(2592, 592), 1);
    add_background_object(create_caravanplatform3_1320(2992, 592), 1);
    add_background_object(create_caravanplatform9_1327(2720, 592), 1);
    add_background_object(create_caravanplatform_1325(2376, 592), 1);
    add_background_object(create_caravanplatform4_1322(2864, 592), 1);
    add_background_object(create_caravanplatform4_1322(2464, 592), 1);
    add_background_object(create_caravanplatform4_1322(2528, 592), 1);
    add_background_object(create_caravanplatform4_1322(2800, 592), 1);
    add_background_object(create_caravanplatform4_1322(2928, 592), 1);
    add_background_object(create_caravanplatform2_1326(2800, 552), 1);
    add_background_object(create_caravanplatform2_1326(2800, 512), 1);
    add_background_object(create_caravanplatform2_1326(2800, 472), 1);
    add_background_object(create_caravanplatform10_1329(2800, 600), 1);
    add_background_object(create_caravanplatform10_1329(2880, 600), 1);
    add_background_object(create_caravantruck_1330(2880, 472), 1);
    add_background_object(create_caravantruck3_1331(2928, 472), 1);
    add_background_object(create_caravanplatform11_1332(2856, 512), 1);
    add_background_object(create_bossclawbaseback_1333(2736, 528), 1);
    add_background_object(create_caravanplatform13_1357(2816, 512), 1);
    add_background_object(create_caravantruck2_3907(3000, 544), 1);
    add_background_object(create_caravanplatform14_1359(2800, 472), 1);
    add_background_object(create_caravanplatform14_1359(2800, 512), 1);
    add_background_object(create_caravandoor_3908(2896, 544), 1);
    add_background_object(create_caravanplatform12_1319(2864, 432), 1);
    add_background_object(create_caravanplatform11_1332(2856, 512), 1);
    add_background_object(create_caravanplatform3_1320(1184, 592), 1);
    add_background_object(create_caravanplatform3_1320(1312, 592), 1);
    add_background_object(create_caravanplatform3_1320(2272, 592), 1);
    add_background_object(create_caravanplatform3_1320(2144, 592), 1);
    add_background_object(create_caravanplatform3_1320(672, 592), 1);
    add_background_object(create_caravanplatform3_1320(800, 592), 1);
    add_background_object(create_caravanplatform3_1320(928, 592), 1);
    add_background_object(create_caravanplatform3_1320(1056, 592), 1);
    add_background_object(create_caravanplatform3_1320(1440, 592), 1);
    add_background_object(create_caravanplatform3_1320(1600, 592), 1);
    add_background_object(create_caravanplatform3_1320(1760, 592), 1);
    add_background_object(create_caravanplatform3_1320(1888, 592), 1);
    add_background_object(create_caravanplatform3_1320(2016, 592), 1);
    add_background_object(create_caravanplatform5_1321(1376, 592), 1);
    add_background_object(create_caravanplatform5_1321(864, 592), 1);
    add_background_object(create_caravanplatform5_1321(1120, 592), 1);
    add_background_object(create_caravanplatform5_1321(1824, 592), 1);
    add_background_object(create_caravanplatform5_1321(2080, 592), 1);
    add_background_object(create_caravanplatform4_1322(1248, 592), 1);
    add_background_object(create_caravanplatform4_1322(2208, 592), 1);
    add_background_object(create_caravanplatform4_1322(736, 592), 1);
    add_background_object(create_caravanplatform4_1322(992, 592), 1);
    add_background_object(create_caravanplatform4_1322(1504, 592), 1);
    add_background_object(create_caravanplatform4_1322(1696, 592), 1);
    add_background_object(create_caravanplatform4_1322(1952, 592), 1);
    add_background_object(create_caravanplatform4_1322(1536, 592), 1);
    add_background_object(create_caravanplatform4_1322(1664, 592), 1);
    add_background_object(create_caravanplatform_1325(648, 592), 1);
    add_background_object(create_caravanplatform_1325(1160, 592), 1);
    add_background_object(create_caravanplatform_1325(1416, 592), 1);
    add_background_object(create_caravanplatform_1325(904, 592), 1);
    add_background_object(create_caravanplatform_1325(1864, 592), 1);
    add_background_object(create_caravanplatform_1325(2120, 592), 1);
    add_background_object(create_caravanplatform2_1326(920, 552), 1);
    add_background_object(create_caravanplatform2_1326(1432, 552), 1);
    add_background_object(create_caravanplatform2_1326(1560, 552), 1);
    add_background_object(create_caravanplatform2_1326(1624, 552), 1);
    add_background_object(create_caravanplatform2_1326(1752, 552), 1);
    add_background_object(create_caravanplatform2_1326(1688, 552), 1);
    add_background_object(create_caravanplatform2_1326(1880, 552), 1);
    add_background_object(create_caravanplatform7_1328(816, 544), 1);
    add_background_object(create_caravanplatform7_1328(1648, 456), 1);
    add_background_object(create_caravanplatform7_1328(1696, 456), 1);
    add_background_object(create_caravanplatform7_1328(2192, 544), 1);
    add_background_object(create_caravanplatform7_1328(2240, 544), 1);
    add_background_object(create_caravanplatform7_1328(1720, 504), 1);
    add_background_object(create_caravanplatform7_1328(1000, 544), 1);
    add_background_object(create_caravanplatform7_1328(720, 544), 1);
    add_background_object(create_caravanplatform7_1328(1960, 496), 1);
    add_background_object(create_caravanplatform6_1336(768, 544), 1);
    add_background_object(create_caravanplatform6_1336(1464, 504), 1);
    add_background_object(create_caravanplatform6_1336(1624, 504), 1);
    add_background_object(create_caravanplatform6_1336(1960, 544), 1);
    add_background_object(create_caravanplatform6_1336(2144, 544), 1);
    add_background_object(create_caravanplatform6_1336(2288, 544), 1);
    add_background_object(create_caravanplatform6_1336(1672, 504), 1);
    add_background_object(create_caravanplatform6_1336(1912, 504), 1);
    add_background_object(create_caravanplatform6_1336(2008, 544), 1);
    add_background_object(create_caravanplatform13_1357(1728, 552), 1);
    add_background_object(create_caravanplatform13_1357(1664, 552), 1);
    add_object(create_npcmerc_1283(2960, 559), 1);
    add_object(create_npcmerc_1283(2928, 559), 1);
    add_object(create_yellowspringup_434(2768, 544), 1);
    add_object(create_yellowspringupleft_432(2768, 504), 1);
    add_object(create_yellowspringupleft_432(2744, 528), 1);
    add_object(create_caravanwheel_1386(2432, 640), 1);
    add_object(create_caravanwheel_1386(2688, 640), 1);
    add_object(create_caravanwheel_1386(2624, 640), 1);
    add_object(create_caravanwheel_1386(3024, 640), 1);
    add_object(create_hazardspikesup2_3909(2704, 560), 1);
    add_object(create_hazardspikesup2_3909(2392, 560), 1);
    add_object(create_hazardspikesup2_3909(2424, 560), 1);
    add_object(create_bossclawbase_1393(2760, 552), 1);
    add_object(create_caravanengine_1395(3028, 540), 1);
    add_object(create_hazardspikesright2_3910(3072, 608), 1);
    add_object(create_caravanwheel_1386(704, 640), 1);
    add_object(create_caravanwheel_1386(960, 640), 1);
    add_object(create_caravanwheel_1386(832, 640), 1);
    add_object(create_caravanwheel_1386(1088, 640), 1);
    add_object(create_caravanwheel_1386(1216, 640), 1);
    add_object(create_caravanwheel_1386(1344, 640), 1);
    add_object(create_caravanwheel_1386(1472, 640), 1);
    add_object(create_caravanwheel_1386(1632, 640), 1);
    add_object(create_caravanwheel_1386(1792, 640), 1);
    add_object(create_caravanwheel_1386(1920, 640), 1);
    add_object(create_caravanwheel_1386(2048, 640), 1);
    add_object(create_caravanwheel_1386(2176, 640), 1);
    add_object(create_caravanwheel_1386(2304, 640), 1);
    add_object(create_active_3911(3050, 664), 1);
    add_background_object(create_rmbush2_1118(2440, 1112), 2);
    add_background_object(create_cavecolumn2_1515(1008, 1576), 2);
    add_background_object(create_cavecolumn1_1514(800, 1640), 2);
    add_background_object(create_cavecolumn2_1515(600, 1712), 2);
    add_background_object(create_cavecolumn2_1515(-80, 1888), 2);
    add_background_object(create_rmcavebrick4_1434(1168, 1832), 2);
    add_background_object(create_cavecolumn1_1514(120, 1920), 2);
    add_background_object(create_cavecolumn2_1515(328, 1992), 2);
    add_background_object(create_stalactites_1438(248, 2024), 2);
    add_background_object(create_cavecolumn1_1514(528, 1976), 2);
    add_background_object(create_cavecolumn2_1515(736, 1864), 2);
    add_background_object(create_cavecolumn2_1515(920, 2008), 2);
    add_background_object(create_stalactites2_1433(376, 2008), 2);
    add_background_object(create_cavesoil26_1352(1152, 1824), 2);
    add_background_object(create_cavesoil1_1310(336, 1888), 2);
    add_background_object(create_rmbush3_1115(1536, 608), 2);
    add_background_object(create_rmbluecrystal2_1301(888, 2208), 2);
    add_background_object(create_rmbrickarch_1124(2576, 536), 2);
    add_background_object(create_rmbush3_1115(1896, 576), 2);
    add_background_object(create_rmcolumn1_1113(760, 1128), 2);
    add_background_object(create_rmbush1_1119(144, 1112), 2);
    add_background_object(create_rmcavebrick4_1434(832, 2200), 2);
    add_background_object(create_rmcavebrick5_1448(832, 2168), 2);
    add_background_object(create_column7_1342(776, 2136), 2);
    add_background_object(create_column5_1318(776, 2184), 2);
    add_background_object(create_rmcolumn2_1109(1096, 976), 2);
    add_background_object(create_rmcolumn2_1109(904, 976), 2);
    add_background_object(create_rmcolumn2_1109(2184, 976), 2);
    add_background_object(create_rmcolumn2_1109(2376, 976), 2);
    add_background_object(create_shrine1_1323(1192, 1040), 2);
    add_background_object(create_rmcolumn1_1113(2376, 1072), 2);
    add_background_object(create_rmcolumn1_1113(2184, 1072), 2);
    add_background_object(create_rmbrick18_1127(2336, 1064), 2);
    add_background_object(create_rmbrick17_1123(2248, 1064), 2);
    add_background_object(create_rmbrick16_1122(2272, 1064), 2);
    add_background_object(create_rmcolumn1_1113(1096, 1072), 2);
    add_background_object(create_rmbush3_1115(320, 1088), 2);
    add_background_object(create_rmbush1_1119(512, 1120), 2);
    add_background_object(create_rmbush2_1118(672, 1112), 2);
    add_background_object(create_rmbush3_1115(808, 1088), 2);
    add_background_object(create_rmcolumn4_1117(1096, 944), 2);
    add_background_object(create_rmcolumn1_1113(904, 1072), 2);
    add_background_object(create_rmbrick18_1127(1056, 936), 2);
    add_background_object(create_rmbrick18_1127(1056, 1064), 2);
    add_background_object(create_rmbrick17_1123(968, 936), 2);
    add_background_object(create_rmbrick17_1123(968, 1064), 2);
    add_background_object(create_rmbrick16_1122(992, 1064), 2);
    add_background_object(create_rmbrick16_1122(992, 936), 2);
    add_background_object(create_rmbrick13_1116(992, 936), 2);
    add_background_object(create_rmbrick13_1116(928, 936), 2);
    add_background_object(create_rmbrick14_1128(904, 936), 2);
    add_background_object(create_rmbrick15_1154(1120, 936), 2);
    add_background_object(create_rmcolumn4_1117(904, 944), 2);
    add_background_object(create_rmcolumn9_1163(904, 992), 2);
    add_background_object(create_soil1_1120(2560, 1184), 2);
    add_background_object(create_rmbluecrystal1_1306(808, 2192), 2);
    add_background_object(create_rmbrick4_1125(872, 1152), 2);
    add_background_object(create_rmbush3_1115(264, 592), 2);
    add_background_object(create_rmbush2_1118(1272, 440), 2);
    add_background_object(create_rmbush2_1118(1272, 552), 2);
    add_background_object(create_rmbush3_1115(1248, 496), 2);
    add_background_object(create_rmbush3_1115(1208, 576), 2);
    add_background_object(create_rmbush2_1118(960, 600), 2);
    add_background_object(create_rmbush3_1115(816, 608), 2);
    add_background_object(create_soil1_1120(752, 672), 2);
    add_background_object(create_rmbush2_1118(1168, 632), 2);
    add_background_object(create_rmbush3_1115(-48, 600), 2);
    add_background_object(create_rmbush2_1118(368, 624), 2);
    add_background_object(create_rmbush3_1115(1288, 576), 2);
    add_background_object(create_rmbush1_1119(232, 600), 2);
    add_background_object(create_soil1_1120(248, 672), 2);
    add_background_object(create_soil1_1120(0, 672), 2);
    add_background_object(create_soil1_1120(120, 672), 2);
    add_background_object(create_rmgrass4_1142(-8, 656), 2);
    add_background_object(create_rmgrass1_1132(184, 664), 2);
    add_background_object(create_rmgrass1_1132(120, 664), 2);
    add_background_object(create_soil1_1120(624, 672), 2);
    add_background_object(create_soil1_1120(376, 672), 2);
    add_background_object(create_soil1_1120(496, 672), 2);
    add_background_object(create_rmgrass4_1142(504, 656), 2);
    add_background_object(create_rmgrass1_1132(440, 664), 2);
    add_background_object(create_rmgrass1_1132(248, 664), 2);
    add_background_object(create_rmgrass1_1132(632, 664), 2);
    add_background_object(create_rmgrass1_1132(696, 664), 2);
    add_background_object(create_rmgrass4_1142(312, 656), 2);
    add_background_object(create_soil1_1120(880, 672), 2);
    add_background_object(create_rmbush2_1118(696, 600), 2);
    add_background_object(create_soil1_1120(1008, 672), 2);
    add_background_object(create_soil1_1120(1136, 672), 2);
    add_background_object(create_soil1_1120(1264, 672), 2);
    add_background_object(create_soil1_1120(1392, 672), 2);
    add_background_object(create_soil1_1120(1520, 672), 2);
    add_background_object(create_soil1_1120(1648, 672), 2);
    add_background_object(create_soil1_1120(1776, 672), 2);
    add_background_object(create_soil1_1120(1904, 672), 2);
    add_background_object(create_soil1_1120(2800, 672), 2);
    add_background_object(create_soil1_1120(3184, 544), 2);
    add_background_object(create_rmgrass1_1132(1008, 664), 2);
    add_background_object(create_rmgrass1_1132(1200, 664), 2);
    add_background_object(create_rmgrass1_1132(1392, 664), 2);
    add_background_object(create_rmgrass1_1132(1456, 664), 2);
    add_background_object(create_rmgrass1_1132(1648, 664), 2);
    add_background_object(create_rmgrass1_1132(1840, 664), 2);
    add_background_object(create_soil1_1120(512, 1184), 2);
    add_background_object(create_soil1_1120(384, 1184), 2);
    add_background_object(create_soil1_1120(384, 1312), 2);
    add_background_object(create_soil1_1120(384, 1440), 2);
    add_background_object(create_soil1_1120(512, 1312), 2);
    add_background_object(create_soil1_1120(512, 1440), 2);
    add_background_object(create_rmgrass1_1132(512, 1176), 2);
    add_background_object(create_soil1_1120(640, 1184), 2);
    add_background_object(create_soil1_1120(640, 1312), 2);
    add_background_object(create_soil1_1120(640, 1440), 2);
    add_background_object(create_soil1_1120(768, 1184), 2);
    add_background_object(create_soil1_1120(768, 1312), 2);
    add_background_object(create_soil1_1120(768, 1440), 2);
    add_background_object(create_soil1_1120(896, 1184), 2);
    add_background_object(create_soil1_1120(896, 1312), 2);
    add_background_object(create_soil1_1120(896, 1440), 2);
    add_background_object(create_rmgrass1_1132(832, 1176), 2);
    add_background_object(create_rmbrick2_1108(896, 1152), 2);
    add_background_object(create_rmbrick2_1108(960, 1152), 2);
    add_background_object(create_rmbrick6_1129(872, 1120), 2);
    add_background_object(create_rmbrick9_1138(896, 1120), 2);
    add_background_object(create_rmbrick7_1130(2432, 1120), 2);
    add_background_object(create_rmbrick3_1131(2432, 1152), 2);
    add_background_object(create_rmbrick5_1136(960, 1120), 2);
    add_background_object(create_rmplant1_1139(912, 1120), 2);
    add_background_object(create_soil11_1157(896, 1152), 2);
    add_background_object(create_soil1_1120(2432, 1184), 2);
    add_background_object(create_soil1_1120(2432, 1312), 2);
    add_background_object(create_soil1_1120(2432, 1440), 2);
    add_background_object(create_rmgrass1_1132(2432, 1176), 2);
    add_background_object(create_rmgrass1_1132(2624, 1176), 2);
    add_background_object(create_soil1_1120(2560, 1312), 2);
    add_background_object(create_soil1_1120(2560, 1440), 2);
    add_background_object(create_soil1_1120(2304, 1184), 2);
    add_background_object(create_soil1_1120(2304, 1312), 2);
    add_background_object(create_soil1_1120(2304, 1440), 2);
    add_background_object(create_rmbrick2_1108(2304, 1152), 2);
    add_background_object(create_rmbrick2_1108(2368, 1152), 2);
    add_background_object(create_rmbrick9_1138(2304, 1120), 2);
    add_background_object(create_rmbrick5_1136(2368, 1120), 2);
    add_background_object(create_soil11_1157(2304, 1152), 2);
    add_background_object(create_rmcolumn9_1163(1096, 992), 2);
    add_background_object(create_rmbrick13_1116(1056, 936), 2);
    add_background_object(create_rmbrick5_1136(928, 904), 2);
    add_background_object(create_rmbrick9_1138(992, 904), 2);
    add_background_object(create_rmbrick5_1136(1056, 904), 2);
    add_background_object(create_rmbrick6_1129(904, 904), 2);
    add_background_object(create_rmbrick7_1130(1120, 904), 2);
    add_background_object(create_soil1_1120(2176, 1184), 2);
    add_background_object(create_soil1_1120(2176, 1312), 2);
    add_background_object(create_soil1_1120(2176, 1440), 2);
    add_background_object(create_rmbrick2_1108(2176, 1152), 2);
    add_background_object(create_rmbrick2_1108(2240, 1152), 2);
    add_background_object(create_rmbrick9_1138(2176, 1120), 2);
    add_background_object(create_rmbrick5_1136(2240, 1120), 2);
    add_background_object(create_soil11_1157(2176, 1152), 2);
    add_background_object(create_soil1_1120(1152, 1184), 2);
    add_background_object(create_soil1_1120(1152, 1312), 2);
    add_background_object(create_soil1_1120(1152, 1440), 2);
    add_background_object(create_rmbrick2_1108(1152, 1152), 2);
    add_background_object(create_rmbrick2_1108(1216, 1152), 2);
    add_background_object(create_rmbrick9_1138(1152, 1120), 2);
    add_background_object(create_rmbrick5_1136(1216, 1120), 2);
    add_background_object(create_soil11_1157(1152, 1152), 2);
    add_background_object(create_soil1_1120(1024, 1184), 2);
    add_background_object(create_soil1_1120(1024, 1312), 2);
    add_background_object(create_soil1_1120(1024, 1440), 2);
    add_background_object(create_rmbrick2_1108(1024, 1152), 2);
    add_background_object(create_rmbrick2_1108(1088, 1152), 2);
    add_background_object(create_rmbrick9_1138(1024, 1120), 2);
    add_background_object(create_rmbrick5_1136(1088, 1120), 2);
    add_background_object(create_soil11_1157(1024, 1152), 2);
    add_background_object(create_rmcolumn4_1117(2376, 944), 2);
    add_background_object(create_rmbrick18_1127(2336, 936), 2);
    add_background_object(create_rmbrick17_1123(2248, 936), 2);
    add_background_object(create_rmbrick16_1122(2272, 936), 2);
    add_background_object(create_rmbrick13_1116(2272, 936), 2);
    add_background_object(create_rmbrick13_1116(2208, 936), 2);
    add_background_object(create_rmbrick14_1128(2184, 936), 2);
    add_background_object(create_rmbrick15_1154(2400, 936), 2);
    add_background_object(create_rmcolumn4_1117(2184, 944), 2);
    add_background_object(create_rmcolumn9_1163(2184, 992), 2);
    add_background_object(create_rmcolumn9_1163(2376, 992), 2);
    add_background_object(create_rmbrick13_1116(2336, 936), 2);
    add_background_object(create_rmbrick5_1136(2208, 904), 2);
    add_background_object(create_rmbrick9_1138(2272, 904), 2);
    add_background_object(create_rmbrick5_1136(2336, 904), 2);
    add_background_object(create_rmbrick6_1129(2184, 904), 2);
    add_background_object(create_rmbrick7_1130(2400, 904), 2);
    add_background_object(create_rmcolumn2_1109(1096, 1024), 2);
    add_background_object(create_rmcolumn2_1109(904, 1024), 2);
    add_background_object(create_rmcolumn2_1109(2184, 1024), 2);
    add_background_object(create_rmcolumn2_1109(2376, 1024), 2);
    add_background_object(create_rmbrick18_1127(1056, 1000), 2);
    add_background_object(create_rmbrick17_1123(968, 1000), 2);
    add_background_object(create_rmbrick16_1122(992, 1000), 2);
    add_background_object(create_rmbrick18_1127(2336, 1000), 2);
    add_background_object(create_rmbrick17_1123(2248, 1000), 2);
    add_background_object(create_rmbrick16_1122(2272, 1000), 2);
    add_background_object(create_rmgrass1_1132(704, 1176), 2);
    add_background_object(create_rmgrass1_1132(768, 1176), 2);
    add_background_object(create_rmgrass1_1132(576, 1176), 2);
    add_background_object(create_rmgrass1_1132(640, 1176), 2);
    add_background_object(create_rmgrass1_1132(384, 1176), 2);
    add_background_object(create_rmgrass1_1132(448, 1176), 2);
    add_background_object(create_soil1_1120(256, 1184), 2);
    add_background_object(create_soil1_1120(128, 1184), 2);
    add_background_object(create_soil1_1120(128, 1312), 2);
    add_background_object(create_soil1_1120(128, 1440), 2);
    add_background_object(create_soil1_1120(256, 1312), 2);
    add_background_object(create_soil1_1120(256, 1440), 2);
    add_background_object(create_rmgrass1_1132(256, 1176), 2);
    add_background_object(create_rmgrass1_1132(320, 1176), 2);
    add_background_object(create_rmgrass1_1132(128, 1176), 2);
    add_background_object(create_rmgrass1_1132(192, 1176), 2);
    add_background_object(create_soil1_1120(0, 1184), 2);
    add_background_object(create_soil1_1120(0, 1312), 2);
    add_background_object(create_soil1_1120(0, 1440), 2);
    add_background_object(create_rmgrass1_1132(0, 1176), 2);
    add_background_object(create_rmgrass1_1132(64, 1176), 2);
    add_background_object(create_rmcolumn2_1109(760, 1080), 2);
    add_background_object(create_rmcolumn3_1114(760, 1032), 2);
    add_background_object(create_soil1_1120(2032, 672), 2);
    add_background_object(create_soil1_1120(2160, 672), 2);
    add_background_object(create_rmgrass1_1132(2032, 664), 2);
    add_background_object(create_rmgrass1_1132(2096, 664), 2);
    add_background_object(create_rmgrass1_1132(2160, 664), 2);
    add_background_object(create_rmgrass1_1132(2224, 664), 2);
    add_background_object(create_soil1_1120(2672, 672), 2);
    add_background_object(create_rmgrass1_1132(2672, 664), 2);
    add_background_object(create_rmgrass1_1132(2736, 664), 2);
    add_background_object(create_rmgrass1_1132(1328, 664), 2);
    add_background_object(create_rmgrass1_1132(1264, 664), 2);
    add_background_object(create_rmgrass1_1132(1520, 664), 2);
    add_background_object(create_rmgrass1_1132(1584, 664), 2);
    add_background_object(create_rmgrass1_1132(1776, 664), 2);
    add_background_object(create_rmgrass1_1132(1712, 664), 2);
    add_background_object(create_rmgrass1_1132(1968, 664), 2);
    add_background_object(create_rmgrass1_1132(1904, 664), 2);
    add_background_object(create_soil1_1120(2288, 672), 2);
    add_background_object(create_soil1_1120(2416, 672), 2);
    add_background_object(create_rmgrass1_1132(2288, 664), 2);
    add_background_object(create_rmgrass1_1132(2352, 664), 2);
    add_background_object(create_rmgrass1_1132(2416, 664), 2);
    add_background_object(create_rmgrass1_1132(2480, 664), 2);
    add_background_object(create_rmbush3_1115(2168, 576), 2);
    add_background_object(create_soil1_1120(2544, 672), 2);
    add_background_object(create_rmgrass1_1132(2544, 664), 2);
    add_background_object(create_rmgrass1_1132(2608, 664), 2);
    add_background_object(create_rmbush2_1118(2120, 600), 2);
    add_background_object(create_rmbush2_1118(2344, 600), 2);
    add_background_object(create_rmbush2_1118(2448, 600), 2);
    add_background_object(create_rmgrass1_1132(760, 664), 2);
    add_background_object(create_rmgrass1_1132(824, 664), 2);
    add_background_object(create_rmgrass1_1132(880, 664), 2);
    add_background_object(create_rmgrass1_1132(944, 664), 2);
    add_background_object(create_rmgrass1_1132(1136, 664), 2);
    add_background_object(create_rmgrass1_1132(1072, 664), 2);
    add_background_object(create_cavecolumn1_1514(1976, 1872), 2);
    add_background_object(create_cavecolumn1_1514(1784, 1920), 2);
    add_background_object(create_cavecolumn1_1514(1632, 2016), 2);
    add_background_object(create_cavecolumn1_1514(1480, 1816), 2);
    add_background_object(create_cavecolumn1_1514(1280, 1896), 2);
    add_background_object(create_cavecolumn1_1514(1112, 1984), 2);
    add_background_object(create_rmpurplecrystal3_1543(2064, 2072), 2);
    add_background_object(create_rmpurplecrystal3_1543(1912, 2056), 2);
    add_background_object(create_rmpurplecrystal3_1543(1768, 2080), 2);
    add_background_object(create_rmpurplecrystal3_1543(1496, 2080), 2);
    add_background_object(create_rmpurplecrystal3_1543(1288, 2080), 2);
    add_background_object(create_rmpurplecrystal3_1543(1168, 2072), 2);
    add_background_object(create_rmpurplecrystal1_1544(2096, 2200), 2);
    add_background_object(create_stalactites2_1433(2176, 2048), 2);
    add_background_object(create_stalactites_1438(1984, 2056), 2);
    add_background_object(create_stalactites2_1433(1592, 2048), 2);
    add_background_object(create_stalactites_1438(1344, 2064), 2);
    add_background_object(create_rmpurplecrystal1_1544(2000, 2184), 2);
    add_background_object(create_rmpurplecrystal1_1544(1816, 2184), 2);
    add_background_object(create_rmpurplecrystal1_1544(1592, 2184), 2);
    add_background_object(create_rmpurplecrystal1_1544(1256, 2192), 2);
    add_background_object(create_rmpurplecrystal2_1545(1880, 2192), 2);
    add_background_object(create_rmpurplecrystal2_1545(1656, 2200), 2);
    add_background_object(create_rmpurplecrystal2_1545(1376, 2200), 2);
    add_background_object(create_rmpurplecrystal2_1545(1184, 2200), 2);
    add_background_object(create_rmpurplecrystal4_1546(1832, 2072), 2);
    add_background_object(create_rmpurplecrystal4_1546(1696, 2064), 2);
    add_background_object(create_rmpurplecrystal4_1546(1400, 2064), 2);
    add_background_object(create_rmpurplecrystal4_1546(1232, 2064), 2);
    add_background_object(create_cavesoil1_1310(1152, 1952), 2);
    add_background_object(create_cavesoil1_1310(1280, 1824), 2);
    add_background_object(create_cavesoil1_1310(1280, 1952), 2);
    add_background_object(create_cavesoil1_1310(1152, 2232), 2);
    add_background_object(create_cavesoil1_1310(1280, 2232), 2);
    add_background_object(create_cavesoil1_1310(1408, 1824), 2);
    add_background_object(create_cavesoil1_1310(1408, 1952), 2);
    add_background_object(create_cavesoil1_1310(1536, 1824), 2);
    add_background_object(create_cavesoil1_1310(1536, 1952), 2);
    add_background_object(create_cavesoil1_1310(1408, 2232), 2);
    add_background_object(create_cavesoil1_1310(1536, 2232), 2);
    add_background_object(create_cavesoil1_1310(1664, 1824), 2);
    add_background_object(create_cavesoil1_1310(1664, 1952), 2);
    add_background_object(create_cavesoil1_1310(1792, 1824), 2);
    add_background_object(create_cavesoil1_1310(1792, 1952), 2);
    add_background_object(create_cavesoil1_1310(1664, 2232), 2);
    add_background_object(create_cavesoil1_1310(1792, 2232), 2);
    add_background_object(create_cavesoil1_1310(1920, 1824), 2);
    add_background_object(create_cavesoil1_1310(1920, 1952), 2);
    add_background_object(create_cavesoil1_1310(2048, 1824), 2);
    add_background_object(create_cavesoil1_1310(2048, 1952), 2);
    add_background_object(create_cavesoil1_1310(1920, 2232), 2);
    add_background_object(create_cavesoil1_1310(2048, 2232), 2);
    add_background_object(create_cavesoil1_1310(2176, 2232), 2);
    add_background_object(create_cavesoil3_1339(1280, 2056), 2);
    add_background_object(create_cavesoil3_1339(1408, 2056), 2);
    add_background_object(create_cavesoil3_1339(1536, 2056), 2);
    add_background_object(create_cavesoil3_1339(1664, 2056), 2);
    add_background_object(create_cavesoil3_1339(1792, 2056), 2);
    add_background_object(create_cavesoil3_1339(1920, 2056), 2);
    add_background_object(create_cavesoil3_1339(2048, 2056), 2);
    add_background_object(create_cavesoil2_1338(1152, 2232), 2);
    add_background_object(create_cavesoil2_1338(1280, 2232), 2);
    add_background_object(create_cavesoil2_1338(1408, 2232), 2);
    add_background_object(create_cavesoil2_1338(1536, 2232), 2);
    add_background_object(create_cavesoil2_1338(1664, 2232), 2);
    add_background_object(create_cavesoil2_1338(1792, 2232), 2);
    add_background_object(create_cavesoil2_1338(1920, 2232), 2);
    add_background_object(create_cavesoil2_1338(2048, 2232), 2);
    add_background_object(create_cavesoil2_1338(2176, 2232), 2);
    add_background_object(create_cavesoil1_1310(1152, 2360), 2);
    add_background_object(create_cavesoil1_1310(1280, 2360), 2);
    add_background_object(create_cavesoil1_1310(1408, 2360), 2);
    add_background_object(create_cavesoil1_1310(1536, 2360), 2);
    add_background_object(create_cavesoil1_1310(1664, 2360), 2);
    add_background_object(create_cavesoil1_1310(1792, 2360), 2);
    add_background_object(create_cavesoil1_1310(1920, 2360), 2);
    add_background_object(create_cavesoil1_1310(2048, 2360), 2);
    add_background_object(create_cavesoil1_1310(2176, 2360), 2);
    add_background_object(create_cavesoil1_1310(2176, 1824), 2);
    add_background_object(create_cavesoil1_1310(2176, 1952), 2);
    add_background_object(create_cavesoil3_1339(2176, 2056), 2);
    add_background_object(create_cavesoil1_1310(896, 2232), 2);
    add_background_object(create_cavesoil1_1310(1024, 2232), 2);
    add_background_object(create_cavesoil2_1338(896, 2232), 2);
    add_background_object(create_cavesoil2_1338(1024, 2232), 2);
    add_background_object(create_cavesoil1_1310(896, 2360), 2);
    add_background_object(create_cavesoil1_1310(1024, 2360), 2);
    add_background_object(create_cavesoil1_1310(640, 2232), 2);
    add_background_object(create_cavesoil1_1310(768, 2232), 2);
    add_background_object(create_cavesoil2_1338(640, 2232), 2);
    add_background_object(create_cavesoil2_1338(768, 2232), 2);
    add_background_object(create_cavesoil1_1310(640, 2360), 2);
    add_background_object(create_cavesoil1_1310(768, 2360), 2);
    add_background_object(create_cavesoil1_1310(512, 2232), 2);
    add_background_object(create_cavesoil2_1338(512, 2232), 2);
    add_background_object(create_cavesoil1_1310(512, 2360), 2);
    add_background_object(create_cavesoil1_1310(256, 2232), 2);
    add_background_object(create_cavesoil1_1310(384, 2232), 2);
    add_background_object(create_cavesoil2_1338(256, 2232), 2);
    add_background_object(create_cavesoil2_1338(384, 2232), 2);
    add_background_object(create_cavesoil1_1310(256, 2360), 2);
    add_background_object(create_cavesoil1_1310(384, 2360), 2);
    add_background_object(create_cavesoil1_1310(0, 2232), 2);
    add_background_object(create_cavesoil1_1310(128, 2232), 2);
    add_background_object(create_cavesoil2_1338(0, 2232), 2);
    add_background_object(create_cavesoil2_1338(128, 2232), 2);
    add_background_object(create_cavesoil1_1310(0, 2360), 2);
    add_background_object(create_cavesoil1_1310(128, 2360), 2);
    add_background_object(create_cavesoil15_1316(-208, 1832), 2);
    add_background_object(create_cavesoil1_1310(208, 1888), 2);
    add_background_object(create_cavesoil1_1310(208, 1760), 2);
    add_background_object(create_cavesoil12_1350(-216, 1944), 2);
    add_background_object(create_cavesoil12_1350(-216, 1976), 2);
    add_background_object(create_cavesoil12_1350(-216, 1912), 2);
    add_background_object(create_cavesoil15_1316(208, 2016), 2);
    add_background_object(create_cavesoil14_1314(208, 2000), 2);
    add_background_object(create_cavesoil20_1464(-216, 1992), 2);
    add_background_object(create_cavesoil27_1304(336, 2016), 2);
    add_background_object(create_cavesoil13_1456(448, 1888), 2);
    add_background_object(create_cavesoil13_1456(448, 1920), 2);
    add_background_object(create_cavesoil13_1456(448, 1952), 2);
    add_background_object(create_cavesoil13_1456(448, 1984), 2);
    add_background_object(create_cavesoil20_1464(464, 2000), 2);
    add_background_object(create_cavesoil18_1305(336, 2000), 2);
    add_background_object(create_cavesoil1_1310(336, 1760), 2);
    add_background_object(create_cavesoil13_1456(448, 1760), 2);
    add_background_object(create_cavesoil13_1456(448, 1792), 2);
    add_background_object(create_cavesoil13_1456(448, 1824), 2);
    add_background_object(create_cavesoil13_1456(448, 1856), 2);
    add_background_object(create_cavesoil19_1460(-16, 2232), 2);
    add_background_object(create_cavesoil2_1338(1664, 1808), 2);
    add_background_object(create_cavesoil2_1338(1408, 1808), 2);
    add_background_object(create_cavesoil2_1338(1536, 1808), 2);
    add_background_object(create_cavesoil1_1310(208, 1632), 2);
    add_background_object(create_cavesoil1_1310(336, 1632), 2);
    add_background_object(create_cavesoil13_1456(448, 1632), 2);
    add_background_object(create_cavesoil13_1456(448, 1664), 2);
    add_background_object(create_cavesoil13_1456(448, 1696), 2);
    add_background_object(create_cavesoil13_1456(448, 1728), 2);
    add_background_object(create_cavesoil2_1338(1792, 1808), 2);
    add_background_object(create_cavesoil2_1338(1920, 1808), 2);
    add_background_object(create_cavesoil2_1338(2048, 1808), 2);
    add_background_object(create_cavesoil1_1310(2176, 1696), 2);
    add_background_object(create_cavesoil2_1338(1280, 1808), 2);
    add_background_object(create_cavesoil1_1310(1152, 1888), 2);
    add_background_object(create_cavesoil1_1310(-208, 1704), 2);
    add_background_object(create_cavesoil12_1350(-224, 1768), 2);
    add_background_object(create_cavesoil12_1350(-224, 1800), 2);
    add_background_object(create_cavesoil12_1350(-224, 1704), 2);
    add_background_object(create_cavesoil12_1350(-224, 1736), 2);
    add_background_object(create_cavesoil20_1464(-224, 1816), 2);
    add_background_object(create_cavesoil19_1460(-224, 1688), 2);
    add_background_object(create_cavesoil2_1338(-208, 1688), 2);
    add_background_object(create_cavesoil14_1314(-208, 1816), 2);
    add_background_object(create_cavesoil12_1350(1152, 1880), 2);
    add_background_object(create_cavesoil24_1353(1152, 1808), 2);
    add_background_object(create_cavesoil12_1350(1152, 1912), 2);
    add_background_object(create_cavesoil12_1350(1152, 1944), 2);
    add_background_object(create_cavesoil12_1350(1152, 1976), 2);
    add_background_object(create_cavesoil12_1350(1152, 2008), 2);
    add_background_object(create_cavesoil12_1350(1152, 2040), 2);
    add_background_object(create_cavesoil3_1339(1152, 2056), 2);
    add_background_object(create_rmbluecrystal1_1306(304, 2192), 2);
    add_background_object(create_rmcavebrick4_1434(144, 2200), 2);
    add_background_object(create_rmcavebrick4_1434(144, 2168), 2);
    add_background_object(create_rmcavebrick5_1448(144, 2136), 2);
    add_background_object(create_rmbluecrystal2_1301(256, 2176), 2);
    add_background_object(create_column5_1318(200, 2184), 2);
    add_background_object(create_column6_1341(200, 2152), 2);
    add_background_object(create_column7_1342(200, 2120), 2);
    add_background_object(create_column5_1318(88, 2184), 2);
    add_background_object(create_column6_1341(88, 2136), 2);
    add_background_object(create_column7_1342(88, 2088), 2);
    add_background_object(create_column5_1318(384, 2184), 2);
    add_background_object(create_column7_1342(384, 2136), 2);
    add_background_object(create_column5_1318(496, 2184), 2);
    add_background_object(create_column6_1341(496, 2136), 2);
    add_background_object(create_column7_1342(496, 2088), 2);
    add_background_object(create_rmcavebrick4_1434(1168, 1800), 2);
    add_background_object(create_rmcavebrick5_1448(1168, 1704), 2);
    add_background_object(create_rmcavebrick4_1434(1168, 1768), 2);
    add_background_object(create_rmcavebrick4_1434(1168, 1736), 2);
    add_background_object(create_rmcavebrick5_1448(1280, 1744), 2);
    add_background_object(create_rmcavebrick4_1434(1280, 1776), 2);
    add_background_object(create_rmcavebrick4_1434(720, 2200), 2);
    add_background_object(create_rmcavebrick4_1434(720, 2168), 2);
    add_background_object(create_rmcavebrick5_1448(720, 2104), 2);
    add_background_object(create_column5_1318(664, 2184), 2);
    add_background_object(create_column6_1341(664, 2136), 2);
    add_background_object(create_column7_1342(664, 2040), 2);
    add_background_object(create_column6_1341(664, 2088), 2);
    add_background_object(create_rmcavebrick4_1434(720, 2136), 2);
    add_background_object(create_rmbluecrystal1_1306(584, 2176), 2);
    add_background_object(create_soil1_1120(2928, 672), 2);
    add_background_object(create_soil1_1120(3056, 672), 2);
    add_background_object(create_rmgrass1_1132(2864, 664), 2);
    add_background_object(create_rmgrass1_1132(2928, 664), 2);
    add_background_object(create_rmgrass1_1132(2800, 664), 2);
    add_background_object(create_rmgrass1_1132(2992, 664), 2);
    add_background_object(create_rmbush3_1115(2736, 576), 2);
    add_background_object(create_rmbush2_1118(2920, 600), 2);
    add_background_object(create_soil1_1120(3184, 672), 2);
    add_background_object(create_rmgrass1_1132(3056, 664), 2);
    add_background_object(create_rmgrass1_1132(3120, 664), 2);
    add_background_object(create_soil1_1120(2816, 1184), 2);
    add_background_object(create_soil1_1120(2688, 1184), 2);
    add_background_object(create_soil1_1120(2688, 1312), 2);
    add_background_object(create_soil1_1120(2688, 1440), 2);
    add_background_object(create_rmgrass1_1132(2688, 1176), 2);
    add_background_object(create_rmgrass1_1132(2880, 1176), 2);
    add_background_object(create_soil1_1120(2816, 1312), 2);
    add_background_object(create_soil1_1120(2816, 1440), 2);
    add_background_object(create_rmgrass1_1132(2752, 1176), 2);
    add_background_object(create_rmgrass1_1132(2816, 1176), 2);
    add_background_object(create_rmbush3_1115(2640, 1088), 2);
    add_background_object(create_soil1_1120(3072, 1184), 2);
    add_background_object(create_soil1_1120(2944, 1184), 2);
    add_background_object(create_soil1_1120(2944, 1312), 2);
    add_background_object(create_soil1_1120(2944, 1440), 2);
    add_background_object(create_rmgrass1_1132(2944, 1176), 2);
    add_background_object(create_rmgrass1_1132(3136, 1176), 2);
    add_background_object(create_soil1_1120(3072, 1312), 2);
    add_background_object(create_soil1_1120(3072, 1440), 2);
    add_background_object(create_rmgrass1_1132(3008, 1176), 2);
    add_background_object(create_rmgrass1_1132(3072, 1176), 2);
    add_background_object(create_rmbush2_1118(2744, 1112), 2);
    add_background_object(create_rmbush3_1115(2976, 1088), 2);
    add_background_object(create_soil1_1120(2048, 1184), 2);
    add_background_object(create_soil1_1120(2048, 1312), 2);
    add_background_object(create_soil1_1120(2048, 1440), 2);
    add_background_object(create_rmbrick2_1108(2048, 1152), 2);
    add_background_object(create_rmbrick2_1108(2112, 1152), 2);
    add_background_object(create_rmbrick9_1138(2048, 1120), 2);
    add_background_object(create_rmbrick5_1136(2112, 1120), 2);
    add_background_object(create_soil11_1157(2048, 1152), 2);
    add_background_object(create_rmcolumn2_1109(1800, 976), 2);
    add_background_object(create_rmcolumn2_1109(1992, 976), 2);
    add_background_object(create_rmcolumn1_1113(1992, 1072), 2);
    add_background_object(create_rmcolumn1_1113(1800, 1072), 2);
    add_background_object(create_rmbrick18_1127(1952, 1064), 2);
    add_background_object(create_rmbrick17_1123(1864, 1064), 2);
    add_background_object(create_rmbrick16_1122(1888, 1064), 2);
    add_background_object(create_soil1_1120(1920, 1184), 2);
    add_background_object(create_soil1_1120(1920, 1312), 2);
    add_background_object(create_soil1_1120(1920, 1440), 2);
    add_background_object(create_rmbrick2_1108(1920, 1152), 2);
    add_background_object(create_rmbrick2_1108(1984, 1152), 2);
    add_background_object(create_rmbrick9_1138(1920, 1120), 2);
    add_background_object(create_rmbrick5_1136(1984, 1120), 2);
    add_background_object(create_soil11_1157(1920, 1152), 2);
    add_background_object(create_soil1_1120(1792, 1184), 2);
    add_background_object(create_soil1_1120(1792, 1312), 2);
    add_background_object(create_soil1_1120(1792, 1440), 2);
    add_background_object(create_rmbrick2_1108(1792, 1152), 2);
    add_background_object(create_rmbrick2_1108(1856, 1152), 2);
    add_background_object(create_rmbrick9_1138(1792, 1120), 2);
    add_background_object(create_rmbrick5_1136(1856, 1120), 2);
    add_background_object(create_soil11_1157(1792, 1152), 2);
    add_background_object(create_rmcolumn4_1117(1992, 944), 2);
    add_background_object(create_rmbrick18_1127(1952, 936), 2);
    add_background_object(create_rmbrick17_1123(1864, 936), 2);
    add_background_object(create_rmbrick16_1122(1888, 936), 2);
    add_background_object(create_rmbrick13_1116(1888, 936), 2);
    add_background_object(create_rmbrick13_1116(1824, 936), 2);
    add_background_object(create_rmbrick14_1128(1800, 936), 2);
    add_background_object(create_rmbrick15_1154(2016, 936), 2);
    add_background_object(create_rmcolumn4_1117(1800, 944), 2);
    add_background_object(create_rmcolumn9_1163(1800, 992), 2);
    add_background_object(create_rmcolumn9_1163(1992, 992), 2);
    add_background_object(create_rmbrick13_1116(1952, 936), 2);
    add_background_object(create_rmbrick5_1136(1824, 904), 2);
    add_background_object(create_rmbrick9_1138(1888, 904), 2);
    add_background_object(create_rmbrick5_1136(1952, 904), 2);
    add_background_object(create_rmbrick6_1129(1800, 904), 2);
    add_background_object(create_rmbrick7_1130(2016, 904), 2);
    add_background_object(create_rmcolumn2_1109(1800, 1024), 2);
    add_background_object(create_rmcolumn2_1109(1992, 1024), 2);
    add_background_object(create_rmbrick18_1127(1952, 1000), 2);
    add_background_object(create_rmbrick17_1123(1864, 1000), 2);
    add_background_object(create_rmbrick16_1122(1888, 1000), 2);
    add_background_object(create_soil1_1120(1664, 1184), 2);
    add_background_object(create_soil1_1120(1664, 1312), 2);
    add_background_object(create_soil1_1120(1664, 1440), 2);
    add_background_object(create_rmbrick2_1108(1664, 1152), 2);
    add_background_object(create_rmbrick2_1108(1728, 1152), 2);
    add_background_object(create_rmbrick9_1138(1664, 1120), 2);
    add_background_object(create_rmbrick5_1136(1728, 1120), 2);
    add_background_object(create_soil11_1157(1664, 1152), 2);
    add_background_object(create_rmcolumn2_1109(1416, 976), 2);
    add_background_object(create_rmcolumn2_1109(1608, 976), 2);
    add_background_object(create_rmcolumn1_1113(1608, 1072), 2);
    add_background_object(create_rmcolumn1_1113(1416, 1072), 2);
    add_background_object(create_rmbrick18_1127(1568, 1064), 2);
    add_background_object(create_rmbrick17_1123(1480, 1064), 2);
    add_background_object(create_rmbrick16_1122(1504, 1064), 2);
    add_background_object(create_soil1_1120(1536, 1184), 2);
    add_background_object(create_soil1_1120(1536, 1312), 2);
    add_background_object(create_soil1_1120(1536, 1440), 2);
    add_background_object(create_rmbrick2_1108(1536, 1152), 2);
    add_background_object(create_rmbrick2_1108(1600, 1152), 2);
    add_background_object(create_rmbrick9_1138(1536, 1120), 2);
    add_background_object(create_rmbrick5_1136(1600, 1120), 2);
    add_background_object(create_soil11_1157(1536, 1152), 2);
    add_background_object(create_soil1_1120(1408, 1184), 2);
    add_background_object(create_soil1_1120(1408, 1312), 2);
    add_background_object(create_soil1_1120(1408, 1440), 2);
    add_background_object(create_rmbrick2_1108(1408, 1152), 2);
    add_background_object(create_rmbrick2_1108(1472, 1152), 2);
    add_background_object(create_rmbrick9_1138(1408, 1120), 2);
    add_background_object(create_rmbrick5_1136(1472, 1120), 2);
    add_background_object(create_soil11_1157(1408, 1152), 2);
    add_background_object(create_rmcolumn4_1117(1608, 944), 2);
    add_background_object(create_rmbrick18_1127(1568, 936), 2);
    add_background_object(create_rmbrick17_1123(1480, 936), 2);
    add_background_object(create_rmbrick16_1122(1504, 936), 2);
    add_background_object(create_rmbrick13_1116(1504, 936), 2);
    add_background_object(create_rmbrick13_1116(1440, 936), 2);
    add_background_object(create_rmbrick14_1128(1416, 936), 2);
    add_background_object(create_rmbrick15_1154(1632, 936), 2);
    add_background_object(create_rmcolumn4_1117(1416, 944), 2);
    add_background_object(create_rmcolumn9_1163(1416, 992), 2);
    add_background_object(create_rmcolumn9_1163(1608, 992), 2);
    add_background_object(create_rmbrick13_1116(1568, 936), 2);
    add_background_object(create_rmbrick5_1136(1440, 904), 2);
    add_background_object(create_rmbrick9_1138(1504, 904), 2);
    add_background_object(create_rmbrick5_1136(1568, 904), 2);
    add_background_object(create_rmbrick6_1129(1416, 904), 2);
    add_background_object(create_rmbrick7_1130(1632, 904), 2);
    add_background_object(create_rmcolumn2_1109(1416, 1024), 2);
    add_background_object(create_rmcolumn2_1109(1608, 1024), 2);
    add_background_object(create_rmbrick18_1127(1568, 1000), 2);
    add_background_object(create_rmbrick17_1123(1480, 1000), 2);
    add_background_object(create_rmbrick16_1122(1504, 1000), 2);
    add_background_object(create_soil1_1120(1280, 1184), 2);
    add_background_object(create_soil1_1120(1280, 1312), 2);
    add_background_object(create_soil1_1120(1280, 1440), 2);
    add_background_object(create_rmbrick2_1108(1280, 1152), 2);
    add_background_object(create_rmbrick2_1108(1344, 1152), 2);
    add_background_object(create_rmbrick9_1138(1280, 1120), 2);
    add_background_object(create_rmbrick5_1136(1344, 1120), 2);
    add_background_object(create_soil11_1157(1280, 1152), 2);
    add_background_object(create_rmgrass1_1132(2496, 1176), 2);
    add_background_object(create_rmgrass1_1132(2560, 1176), 2);
    add_object(create_collapsingsegment1_3912(207, 2023), 2);
    add_object(create_gongshield_633(1024, 1104), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(3200, 85), 2);
    add_object(create_playerstartingpoint_358(45, 637), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_laddertop_357(-460, 327), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_npcgong_634(1024, 1104), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectjumppad_530(3064, -208), 2);
    add_object(create_objectfuel_528(-412, 308), 2);
    add_object(create_guikeystone_455(136, -40), 2);
    add_object(create_mrstumpy_3913(232, 648), 2);
    add_object(create_monitorcrate_409(768, 120), 2);
    add_object(create_layerobject_10(-208, 448), 2);
    add_object(create_npcneera_2464(999, 883), 2);
    add_object(create_collapsingsegment2_3914(1008, 2087), 2);
    add_object(create_breakableruins_1489(1968, 2024), 2);
    add_object(create_breakableruins_1489(1840, 2024), 2);
    add_object(create_breakableruins_1489(1904, 2024), 2);
    add_object(create_breakableruins_1489(1776, 2024), 2);
    add_object(create_dialogdata_3915(-128, 472), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_cavesoil1_1310(256, 2232), 3);
    add_background_object(create_cavesoil1_1310(0, 2232), 3);
    add_background_object(create_cavesoil1_1310(128, 2232), 3);
    add_background_object(create_cavesoil2_1338(256, 2232), 3);
    add_background_object(create_cavesoil2_1338(0, 2232), 3);
    add_background_object(create_cavesoil2_1338(128, 2232), 3);
    add_background_object(create_cavesoil1_1310(1152, 2232), 3);
    add_background_object(create_cavesoil1_1310(1280, 2232), 3);
    add_background_object(create_cavesoil1_1310(1408, 2232), 3);
    add_background_object(create_cavesoil1_1310(1536, 2232), 3);
    add_background_object(create_cavesoil1_1310(1664, 2232), 3);
    add_background_object(create_cavesoil1_1310(1792, 2232), 3);
    add_background_object(create_cavesoil1_1310(1920, 2232), 3);
    add_background_object(create_cavesoil1_1310(2048, 2232), 3);
    add_background_object(create_cavesoil1_1310(2176, 2232), 3);
    add_background_object(create_cavesoil2_1338(1152, 2232), 3);
    add_background_object(create_cavesoil2_1338(1280, 2232), 3);
    add_background_object(create_cavesoil2_1338(1408, 2232), 3);
    add_background_object(create_cavesoil2_1338(1536, 2232), 3);
    add_background_object(create_cavesoil2_1338(1664, 2232), 3);
    add_background_object(create_cavesoil2_1338(1792, 2232), 3);
    add_background_object(create_cavesoil2_1338(1920, 2232), 3);
    add_background_object(create_cavesoil2_1338(2048, 2232), 3);
    add_background_object(create_cavesoil2_1338(2176, 2232), 3);
    add_background_object(create_cavesoil1_1310(896, 2232), 3);
    add_background_object(create_cavesoil1_1310(1024, 2232), 3);
    add_background_object(create_cavesoil2_1338(896, 2232), 3);
    add_background_object(create_cavesoil2_1338(1024, 2232), 3);
    add_background_object(create_cavesoil1_1310(640, 2232), 3);
    add_background_object(create_cavesoil1_1310(768, 2232), 3);
    add_background_object(create_cavesoil2_1338(640, 2232), 3);
    add_background_object(create_cavesoil2_1338(768, 2232), 3);
    add_background_object(create_cavesoil1_1310(512, 2232), 3);
    add_background_object(create_cavesoil2_1338(512, 2232), 3);
    add_background_object(create_cavesoil1_1310(384, 2232), 3);
    add_background_object(create_cavesoil2_1338(384, 2232), 3);
    add_background_object(create_cavesoil1_1310(2048, 1824), 3);
    add_background_object(create_cavesoil1_1310(2048, 1952), 3);
    add_background_object(create_cavesoil3_1339(2048, 2056), 3);
    add_background_object(create_cavesoil2_1338(2048, 1808), 3);
    add_background_object(create_cavesoil1_1310(1920, 1952), 3);
    add_background_object(create_cavesoil3_1339(1920, 2056), 3);
    add_background_object(create_cavesoil1_1310(1792, 1952), 3);
    add_background_object(create_cavesoil3_1339(1792, 2056), 3);
    add_background_object(create_cavesoil1_1310(1664, 1952), 3);
    add_background_object(create_cavesoil3_1339(1664, 2056), 3);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generaledge01_3894(-168, 16), 5);
    add_object(create_generaledge02_3895(-168, 16), 5);
    add_object(create_generaledge03_3896(-168, 16), 5);
    add_object(create_generaledge04_3897(-168, 16), 5);
    add_object(create_generaledge05_3898(-168, 16), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_generalanglechanger165_3899(-152, 48), 5);
    add_object(create_generalanglechanger255_3900(-128, 48), 5);
    add_object(create_generalanglechanger285_3901(-104, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-366, 13), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2768, -73), 5);
    add_object(create_cameralimitbossleft_421(2608, -192), 5);
    add_object(create_cameralimitbossright_422(2927, -192), 5);
    add_object(create_cameralimitbosstop_423(2768, -312), 5);
    add_object(create_cameratriggerboss_424(2624, -200), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_basementlight_3916(1784, 2000), 5);
    add_object(create_sarassteampluginfreedomplanet_26(-232, -88), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(306, -29), 6);
    add_object(create_guitimermilli2_361(298, -29), 6);
    add_object(create_guitimers_362(282, -29), 6);
    add_object(create_guitimers2_363(274, -29), 6);
    add_object(create_guitimerm_364(258, -29), 6);
    add_object(create_guitimerm2_365(250, -29), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, -48), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_locationname_570(16, 192), 6);
    add_object(create_mapdata2_32(-432, 240), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_voice_running = false;
    loop_voice_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_77, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_77, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_77, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_77, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_77, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_77, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_77, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_77, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_77, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_77, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_77, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_77, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_77, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_77, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_77, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_77, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_77, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_77, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_77, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_77, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_77, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_77, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_77, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_77, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_77, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_77, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_77, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_77, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_77, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_77, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_77, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_77, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_77, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_77, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_77, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_77, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_77, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_77, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_77, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_77, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_77, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_77, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_77, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_77, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_77, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_77, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_77, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_77, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_77, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_77, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_77, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_77, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_77, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_77, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_44_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1 = false;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_1709_76 = loop_count;
    not_always_449_13 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1803_76 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1 = false;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1609_36 = loop_count;
    not_always_68_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1287_76 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1528_77 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1702_77 = loop_count;
    not_always_1702_76 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1765_77 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_1701_77 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_cave_collapse_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1448_13 = loop_count;
    once_condition_1737_77 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_level_specific_methods_cutscenes_mr_stumpy_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    not_always_1733_76 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1450_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1 = false;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_101_0 = loop_count;
    not_always_1806_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1 = false;
    once_condition_64_13 = false;
    once_condition_1414_77 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_1822_77 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1705_76 = loop_count;
    not_always_1705_77 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    not_always_1704_77 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    once_condition_40_14 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_level_specific_methods_cutscenes_meet_milla_1 = false;
    not_always_57_13 = loop_count;
    once_condition_1532_77 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    once_condition_565_76 = false;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1790_76 = loop_count;
    not_always_522_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    once_condition_550_76 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_77 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1706_77 = loop_count;
    not_always_1706_76 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1703_77 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_1616_77 = loop_count;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1695_16 = loop_count;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1790_77 = loop_count;
}
void Frames::loop_spawndebris_78()
{
    event_func_1178();
    event_func_12378();
}
void Frames::event_func_17565()
{
    // event 1754_78
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_1754_78_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_outdoor_ogg_141, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1754_78_end: ;
}
void Frames::loop_play_music_5_78()
{
    event_func_17565();
}
void Frames::event_func_17566()
{
    // event 1755_78
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_1755_78_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_teamwork_ogg_284, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1755_78_end: ;
}
void Frames::loop_play_music_6_78()
{
    event_func_17566();
}
void Frames::event_func_17567()
{
    // event 1543_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1543_78_end;
        if (!((global_values->get(26)) == (0))) goto event_1543_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1543_78_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1543_78_end: ;
}
void Frames::event_func_17568()
{
    // event 1544_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1544_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1544_78_end: ;
}
