#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18702()
{
    // event 1576_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1576_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1576_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1576_82_end: ;
}
void Frames::event_func_18703()
{
    // event 1577_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1577_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1577_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcmayor_3950_instances))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1577_82_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-90);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-50);
        }
    }
    event_1577_82_end: ;
}
void Frames::event_func_18704()
{
    // event 1578_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1578_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1578_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1578_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_1578_82_end: ;
}
void Frames::event_func_18705()
{
    // event 1579_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1579_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1579_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1579_82_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 15);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_min(5+((Active*)*it)->alterables->values.get(0)*0.5, 30));
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1579_82_end: ;
}
void Frames::event_func_18706()
{
    // event 1580_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1580_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1580_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1580_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1580_82_end;
        if (not_always_1580_82 > loop_count) {
            not_always_1580_82 = loop_count + 2;
            goto event_1580_82_end;
        }
        not_always_1580_82 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGB_185, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(((Active*)get_instance(npcmayor_3950_instances))->get_y()-1);
        ((Active*)get_instance(zaosnowmound_4007_instances))->set_y(((Active*)get_instance(zaosnowmound_4007_instances))->get_y()-1);
    }
    event_1580_82_end: ;
}
void Frames::event_func_18707()
{
    // event 1581_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1581_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1581_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1581_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1581_82_end;
        if (not_always_1581_82 > loop_count) {
            not_always_1581_82 = loop_count + 2;
            goto event_1581_82_end;
        }
        not_always_1581_82 = loop_count + 2;
        media.play_id(SOUND_MILLA_DIGA_184, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, randrange(2));
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(((Active*)get_instance(npcmayor_3950_instances))->get_y()-1);
        ((Active*)get_instance(zaosnowmound_4007_instances))->set_y(((Active*)get_instance(zaosnowmound_4007_instances))->get_y()-1);
    }
    event_1581_82_end: ;
}
void Frames::event_func_18708()
{
    // event 1582_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1582_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1582_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1582_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1582_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
    }
    event_1582_82_end: ;
}
void Frames::event_func_18709()
{
    // event 1583_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1583_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1583_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1583_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (140))) goto event_1583_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_front();
        }
    }
    event_1583_82_end: ;
}
void Frames::event_func_18710()
{
    // event 1584_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1584_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1584_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_1584_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1584_82_end: ;
}
void Frames::event_func_18711()
{
    // event 1585_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1585_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1585_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (260))) goto event_1585_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_COMMON_GACHAPONWIN_188, -1, 1);
        FrameObject * single_instance_1585_82_0; single_instance_1585_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectzaobuff_3947(parent->x + 0, parent->y + -50), parent->layer);
                if (single_instance_1585_82_0 == NULL)
                    single_instance_1585_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1585_82_0))->set_direction(3);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1585_82_end: ;
}
void Frames::event_func_18712()
{
    // event 1586_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1586_82_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1586_82_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1586_82_end: ;
}
void Frames::event_func_18713()
{
    // event 1587_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1587_82_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
        }
        if (!effectzaobuff_3947_instances.has_selection()) goto event_1587_82_end;
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1587_82_end: ;
}
void Frames::event_func_18714()
{
    // event 1588_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1588_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1588_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1588_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->move_front();
        }
    }
    event_1588_82_end: ;
}
void Frames::event_func_18715()
{
    // event 1589_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1589_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1589_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1589_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1589_82_end: ;
}
void Frames::event_func_18716()
{
    // event 1590_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1590_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1590_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1590_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1590_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1590_82_end: ;
}
void Frames::event_func_18717()
{
    // event 1591_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1591_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1591_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1591_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(7);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
        media.play(str_data_voices_88+global_strings->get(11)+str_za_za_04_03_ogg_301, 29-1);
        media.play_id(SOUND_TURNPAGE_445, -1, 1);
    }
    event_1591_82_end: ;
}
void Frames::event_func_18718()
{
    // event 1592_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1592_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1592_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1592_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1592_82_end: ;
}
void Frames::event_func_18719()
{
    // event 1593_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1593_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1593_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (240))) goto event_1593_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1593_82_end: ;
}
void Frames::event_func_18720()
{
    // event 1594_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1594_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1594_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (320))) goto event_1594_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1594_82_end: ;
}
void Frames::event_func_18721()
{
    // event 1595_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1595_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1595_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (420))) goto event_1595_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        magisterletter_4015_instances.clear_selection();
        for (ObjectIterator it(magisterletter_4015_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            if (parent == NULL) goto pos_end_1595_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 0);
            pos_end_1595_82_0: ;
        }
        for (ObjectIterator it(magisterletter_4015_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1595_82_end: ;
}
void Frames::event_func_18722()
{
    // event 1596_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1596_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (21))) goto event_1596_82_end;
        magisterletter_4015_instances.clear_selection();
        for (ObjectIterator it(magisterletter_4015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, 1524));
        }
    }
    event_1596_82_end: ;
}
void Frames::event_func_18723()
{
    // event 1597_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1597_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1597_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (7))) goto event_1597_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (11))) goto event_1597_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1597_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1597_82_end: ;
}
void Frames::event_func_18724()
{
    // event 1598_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1598_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1598_82_end;
        if (once_condition_1598_82) goto event_1598_82_end;
        once_condition_1598_82 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1598_82_end: ;
}
void Frames::event_func_18725()
{
    // event 1599_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1599_82_end;
        if (once_condition_1599_82) goto event_1599_82_end;
        once_condition_1599_82 = true;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1599_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1599_82_end: ;
}
void Frames::event_func_18726()
{
    // event 1600_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1600_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1600_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1600_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1600_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_go_go_06_05_ogg_302, 29-1);
    }
    event_1600_82_end: ;
}
void Frames::event_func_18727()
{
    // event 1601_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1601_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1601_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(19);
    }
    event_1601_82_end: ;
}
void Frames::event_func_18728()
{
    // event 1602_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1602_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1602_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1602_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_1602_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(32768)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()+80))) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1602_82_end;
        FrameObject * single_instance_1602_82_0; single_instance_1602_82_0 = pick_random(npcshieldguard_3994_instances);
        if (single_instance_1602_82_0 == NULL) goto event_1602_82_end;
        ((Active*)((Active*)single_instance_1602_82_0))->set_direction(15);
        FrameObject * single_instance_1602_82_1; single_instance_1602_82_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1602_82_0)->x + -10, ((Active*)single_instance_1602_82_0)->y + -10), ((Active*)single_instance_1602_82_0)->layer);
            if (single_instance_1602_82_1 == NULL)
                single_instance_1602_82_1 = new_obj;
        }
    }
    event_1602_82_end: ;
}
void Frames::event_func_18729()
{
    // event 1603_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1603_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1603_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1603_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%6) == (3))) goto event_1603_82_end;
        media.play_id(SOUND_DRAWWEAPON_2_444, -1, 1);
    }
    event_1603_82_end: ;
}
void Frames::event_func_18730()
{
    // event 1604_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1604_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1604_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_1604_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (1))) goto event_1604_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2)) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1604_82_end;
        FrameObject * single_instance_1604_82_0; single_instance_1604_82_0 = pick_random(npcmerc_1283_instances);
        if (single_instance_1604_82_0 == NULL) goto event_1604_82_end;
        ((Active*)((Active*)single_instance_1604_82_0))->set_direction(1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1604_82_end: ;
}
void Frames::event_func_18731()
{
    // event 1605_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1605_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1605_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1605_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(21);
    }
    event_1605_82_end: ;
}
void Frames::event_func_18732()
{
    // event 1606_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1606_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1606_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1606_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
        }
    }
    event_1606_82_end: ;
}
void Frames::event_func_18733()
{
    // event 1607_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1607_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1607_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1607_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcmayor_3950_instances))->get_x()+36))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1607_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 13);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(21);
        }
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_1607_82_end: ;
}
void Frames::event_func_18734()
{
    // event 1608_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1608_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_1608_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (14))) goto event_1608_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(24);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+2);
    }
    event_1608_82_end: ;
}
void Frames::event_func_18735()
{
    // event 1609_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1609_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1609_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (13))) goto event_1609_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (16))) goto event_1609_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1609_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1609_82_end: ;
}
void Frames::event_func_18736()
{
    // event 1610_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1610_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1610_82_end;
        if (once_condition_1610_82) goto event_1610_82_end;
        once_condition_1610_82 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1610_82_end: ;
}
void Frames::event_func_18737()
{
    // event 1611_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1611_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1611_82_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1611_82_end;
        if (!((media.get_channel_position(-1 +20)) < (2050))) goto event_1611_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(6);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
    }
    event_1611_82_end: ;
}
void Frames::event_func_18738()
{
    // event 1612_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1612_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1612_82_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1612_82_end;
        if (!((media.get_channel_position(-1 +20)) < (2050))) goto event_1612_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1612_82_end;
        FrameObject * single_instance_1612_82_0; single_instance_1612_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1612_82_0 == NULL)
                    single_instance_1612_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1612_82_0))->move_back();
        ((Active*)((Active*)single_instance_1612_82_0))->set_direction(pick_random(3, 7, 8, 9));
        ((Active*)((Active*)single_instance_1612_82_0))->get_movement()->set_speed(20);
    }
    event_1612_82_end: ;
}
void Frames::event_func_18739()
{
    // event 1613_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1613_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1613_82_end;
        if (!((media.get_channel_position(-1 +20)) > (2050))) goto event_1613_82_end;
        if (once_condition_1613_82) goto event_1613_82_end;
        once_condition_1613_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(36);
    }
    event_1613_82_end: ;
}
void Frames::event_func_18740()
{
    // event 1614_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1614_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1614_82_end;
        if (once_condition_1614_82) goto event_1614_82_end;
        once_condition_1614_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(36);
    }
    event_1614_82_end: ;
}
void Frames::event_func_18741()
{
    // event 1615_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1615_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1615_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1615_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1615_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_DRAGONROAR_2_335, -1, 1);
        npcmerc_1283_instances.clear_selection();
        spread_value(npcmerc_1283_instances, 0, 0);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*10);
        }
        npcshieldguard_3994_instances.clear_selection();
        spread_value(npcshieldguard_3994_instances, 0, 0);
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*10);
        }
    }
    event_1615_82_end: ;
}
void Frames::event_func_18742()
{
    // event 1616_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1616_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1616_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1616_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1616_82_end: ;
}
void Frames::event_func_18743()
{
    // event 1617_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1617_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1617_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (34))) goto event_1617_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21);
    }
    event_1617_82_end: ;
}
void Frames::event_func_18744()
{
    // event 1618_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1618_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1618_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (49))) goto event_1618_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(39);
    }
    event_1618_82_end: ;
}
void Frames::event_func_18745()
{
    // event 1619_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1619_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1619_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (54))) goto event_1619_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1619_82_end: ;
}
void Frames::event_func_18746()
{
    // event 1620_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1620_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1620_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1620_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1620_82_end: ;
}
void Frames::event_func_18747()
{
    // event 1621_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1621_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1621_82_end;
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 30);
            ((Active*)*it)->set_direction(pick_random(4, 0, 1, 16, 17));
        }
    }
    event_1621_82_end: ;
}
void Frames::event_func_18748()
{
    // event 1622_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1622_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1622_82_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 30);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(pick_random(2, 0, 16));
        }
    }
    event_1622_82_end: ;
}
void Frames::event_func_18749()
{
    // event 1623_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1623_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1623_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_1623_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1623_82_end: ;
}
void Frames::event_func_18750()
{
    // event 1624_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1624_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1624_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1624_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1624_82_end: ;
}
void Frames::event_func_18751()
{
    // event 1625_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1625_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1625_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1625_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1625_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcmerc_1283_instances.clear_selection();
        spread_value(npcmerc_1283_instances, 0, 0);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*10);
        }
        npcshieldguard_3994_instances.clear_selection();
        spread_value(npcshieldguard_3994_instances, 0, 0);
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(npcmerc_1283_instances, it.current_index, default_active_instance))->alterables->values.get(0)*10);
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1625_82_end: ;
}
void Frames::event_func_18752()
{
    // event 1626_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1626_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1626_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (1))) goto event_1626_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1626_82_end;
        FrameObject * single_instance_1626_82_0; single_instance_1626_82_0 = pick_random(npcmerc_1283_instances);
        if (single_instance_1626_82_0 == NULL) goto event_1626_82_end;
        ((Active*)((Active*)single_instance_1626_82_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1626_82_0))->set_direction(16);
    }
    event_1626_82_end: ;
}
void Frames::event_func_18753()
{
    // event 1627_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1627_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1627_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (1))) goto event_1627_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1627_82_end;
        FrameObject * single_instance_1627_82_0; single_instance_1627_82_0 = pick_random(npcshieldguard_3994_instances);
        if (single_instance_1627_82_0 == NULL) goto event_1627_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1627_82_end: ;
}
void Frames::event_func_18754()
{
    // event 1628_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1628_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1628_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_1628_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 0.5);
    }
    event_1628_82_end: ;
}
void Frames::event_func_18755()
{
    // event 1629_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1629_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1629_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (80))) goto event_1629_82_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, frame_left()-80);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, frame_top()+60);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 4);
        media.play_id(SOUND_DRAGONROAR_5_333, -1, 1);
    }
    event_1629_82_end: ;
}
void Frames::event_func_18756()
{
    // event 1630_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1630_82_end;
        FrameObject * single_instance_1630_82_0; single_instance_1630_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dragontailpath_3995(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_1630_82_0 == NULL)
                    single_instance_1630_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1630_82_0))->alterables->values.set(1, ((Active*)get_instance(playerdragonhead_3984_instances))->get_angle());
        ((Active*)((Active*)single_instance_1630_82_0))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1));
    }
    event_1630_82_end: ;
}
void Frames::event_func_18757()
{
    // event 1631_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1631_82_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
        spread_value(dragontailpath_3995_instances, 0, 0);
        {
            SavedSelection extra_dragontailpath_3995_instances(dragontailpath_3995_instances);
            for (SavedIterator it(extra_dragontailpath_3995_instances); !it.end(); ++it) {
                foreach_instance_t = ((Active*)*it);
                foreach_t_82();
            }
        }
    }
    event_1631_82_end: ;
}
void Frames::event_func_18758()
{
    // event 1633_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1633_82_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!dragontailpath_3995_instances.has_selection()) goto event_1633_82_end;
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1633_82_end: ;
}
void Frames::event_func_18759()
{
    // event 1634_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1634_82_end;
        playerdragontail_3983_instances.clear_selection();
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)-((Active*)*it)->alterables->values.get(0)*32);
            ((Active*)*it)->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*30)*-10, 0);
        }
    }
    event_1634_82_end: ;
}
void Frames::event_func_18760()
{
    // event 1635_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1635_82_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(2, (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)+5)%math_helper%360);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*8);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*-10, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->force_frame(get_ceil(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(0, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(1, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6));
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            if (parent == NULL) goto pos_end_1635_82_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1635_82_0: ;
        }
    }
    event_1635_82_end: ;
}
void Frames::event_func_18761()
{
    // event 1636_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1636_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1636_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1636_82_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1636_82_end: ;
}
void Frames::event_func_18762()
{
    // event 1637_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1637_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1637_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1637_82_end;
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1637_82_end: ;
}
void Frames::event_func_18763()
{
    // event 1638_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1638_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1638_82_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) goto event_1638_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
    }
    event_1638_82_end: ;
}
void Frames::event_func_18764()
{
    // event 1639_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1639_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1639_82_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) goto event_1639_82_end;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
    }
    event_1639_82_end: ;
}
void Frames::event_func_18765()
{
    // event 1640_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1640_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1640_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1640_82_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1640_82_end: ;
}
void Frames::event_func_18766()
{
    // event 1641_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1641_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1641_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1641_82_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1641_82_end: ;
}
void Frames::event_func_18767()
{
    // event 1642_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1642_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1642_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerdragonhead_3984_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1642_82_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1642_82_end: ;
}
void Frames::event_func_18768()
{
    // event 1643_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1643_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1643_82_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)) > (width))) goto event_1643_82_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 0);
    }
    event_1643_82_end: ;
}
void Frames::event_func_18769()
{
    // event 1644_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1644_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1644_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1644_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1644_82_end: ;
}
void Frames::event_func_18770()
{
    // event 1645_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1645_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1645_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1645_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1645_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 2);
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1645_82_end: ;
}
void Frames::event_func_18771()
{
    // event 1646_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1646_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1646_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
            ((Active*)*it)->move_back();
        }
    }
    event_1646_82_end: ;
}
void Frames::event_func_18772()
{
    // event 1647_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1647_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1647_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (80))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1647_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(get_min(((Active*)get_instance(npcmayor_3950_instances))->get_y()+3, 1514));
    }
    event_1647_82_end: ;
}
void Frames::event_func_18773()
{
    // event 1648_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1648_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1648_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (180))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1648_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5200);
            ((Active*)*it)->alterables->values.set(8, -15);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        media.play_id(SOUND_DRAGONROAR_6_334, -1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            if (parent == NULL) goto pos_end_1648_82_0;
            ((Active*)get_instance(player_389_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1648_82_0: ;
        }
    }
    event_1648_82_end: ;
}
void Frames::event_func_18774()
{
    // event 1649_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1649_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1649_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(get_min(((Active*)get_instance(npcmayor_3950_instances))->get_y()+3, 1514));
    }
    event_1649_82_end: ;
}
void Frames::event_func_18775()
{
    // event 1650_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1650_82_end;
        if (once_condition_1650_82) goto event_1650_82_end;
        once_condition_1650_82 = true;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x()-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y()-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y());
        }
        spread_value(bossholodragonscale2_3052_instances, 0, 0);
        spread_value(bossholodragonscale3_3053_instances, 0, 0);
        spread_value(bossholodragonscale4_3054_instances, 0, 0);
        spread_value(bossholodragontoptooth_3049_instances, 0, 0);
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1-(((Active*)*it)->alterables->values.get(0)*0.05));
        }
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_single(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()-((Active*)get_single(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y());
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1650_82_end: ;
}
void Frames::event_func_18776()
{
    // event 1651_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1651_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(6))%math_helper%360);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1651_82_end: ;
}
void Frames::event_func_18777()
{
    // event 1652_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1652_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto event_1652_82_end;
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(3)-40, get_min(((Active*)*it)->alterables->values.get(3)+(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x())*0.15, ((Active*)*it)->alterables->values.get(3)+40)));
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(4)-40, get_min(((Active*)*it)->alterables->values.get(4)-(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x())*0.15, ((Active*)*it)->alterables->values.get(4)+40)));
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1652_82_end: ;
}
void Frames::event_func_18778()
{
    // event 1653_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1653_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto event_1653_82_end;
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(3)-40, get_min(((Active*)*it)->alterables->values.get(3)+(((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(player_389_instances))->get_x())*0.15, ((Active*)*it)->alterables->values.get(3)+40)));
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(4)-40, get_min(((Active*)*it)->alterables->values.get(4)-(((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(player_389_instances))->get_x())*0.15, ((Active*)*it)->alterables->values.get(4)+40)));
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1653_82_end: ;
}
void Frames::event_func_18779()
{
    // event 1654_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1654_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (6))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto event_1654_82_end;
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1654_82_end: ;
}
void Frames::event_func_18780()
{
    // event 1655_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1655_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(0)+10)*((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)*it)->alterables->values.get(0)+100)*((Active*)*it)->alterables->values.get(5)*0.25-get_min(((Active*)*it)->alterables->values.get(5)*0.25, 20)-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1655_82_end: ;
}
void Frames::event_func_18781()
{
    // event 1656_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1656_82_end;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(3)+((Active*)*it)->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1656_82_end: ;
}
void Frames::event_func_18782()
{
    // event 1657_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1657_82_end;
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0);
        }
    }
    event_1657_82_end: ;
}
void Frames::event_func_18783()
{
    // event 1658_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1658_82_end;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
    }
    event_1658_82_end: ;
}
void Frames::event_func_18784()
{
    // event 1659_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1659_82_end;
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(0);
        }
    }
    event_1659_82_end: ;
}
void Frames::event_func_18785()
{
    // event 1660_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1660_82_end;
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale2_3052_instances, it.current_index));
            if (parent == NULL) goto pos_end_1660_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -24);
            pos_end_1660_82_0: ;
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale3_3053_instances, it.current_index));
            if (parent == NULL) goto pos_end_1660_82_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -24);
            pos_end_1660_82_1: ;
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale4_3054_instances, it.current_index));
            if (parent == NULL) goto pos_end_1660_82_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -18);
            pos_end_1660_82_2: ;
        }
    }
    event_1660_82_end: ;
}
void Frames::event_func_18786()
{
    // event 1661_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1661_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (28))) goto event_1661_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) != (34))) goto event_1661_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 20-((Active*)*it)->alterables->values.get(8)*6);
            ((Active*)*it)->alterables->values.set(6, 2-((Active*)*it)->alterables->values.get(8)*0.2);
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1661_82_end: ;
}
void Frames::event_func_18787()
{
    // event 1662_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1662_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1662_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1662_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.15, 0));
        }
    }
    event_1662_82_end: ;
}
void Frames::event_func_18788()
{
    // event 1663_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1663_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (28))) goto event_1663_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (31))) goto event_1663_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(bossholodragonneck_3057_instances, default_active_instance))->alterables->values.get(3)-250)*0.05);
    }
    event_1663_82_end: ;
}
void Frames::event_func_18789()
{
    // event 1664_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1664_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1664_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossholodragonpupil_3056_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1664_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%5) == (1))) goto event_1664_82_end;
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1664_82_end: ;
}
void Frames::event_func_18790()
{
    // event 1665_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1665_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1665_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (200))) goto event_1665_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1665_82_end: ;
}
void Frames::event_func_18791()
{
    // event 1666_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1666_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1666_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (19))) goto event_1666_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (23))) goto event_1666_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1666_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1666_82_end: ;
}
void Frames::event_func_18792()
{
    // event 1667_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1667_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (30))) goto event_1667_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (33))) goto event_1667_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1667_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (1))) goto event_1667_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1667_82_end;
        FrameObject * single_instance_1667_82_0; single_instance_1667_82_0 = pick_random(npcmerc_1283_instances);
        if (single_instance_1667_82_0 == NULL) goto event_1667_82_end;
        ((Active*)((Active*)single_instance_1667_82_0))->force_animation(10);
    }
    event_1667_82_end: ;
}
void Frames::event_func_18793()
{
    // event 1668_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1668_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (30))) goto event_1668_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (33))) goto event_1668_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1668_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (1))) goto event_1668_82_end;
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(4)) { it.deselect(); continue; }
        }
        if (!npcshieldguard_3994_instances.has_selection()) goto event_1668_82_end;
        FrameObject * single_instance_1668_82_0; single_instance_1668_82_0 = pick_random(npcshieldguard_3994_instances);
        if (single_instance_1668_82_0 == NULL) goto event_1668_82_end;
        ((Active*)((Active*)single_instance_1668_82_0))->set_direction(2);
    }
    event_1668_82_end: ;
}
void Frames::event_func_18794()
{
    // event 1669_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1669_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1669_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1669_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(3);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1669_82_end: ;
}
void Frames::event_func_18795()
{
    // event 1670_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1670_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1670_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1670_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(3);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        ((Active*)get_instance(npcgong_634_instances))->force_frame(12);
    }
    event_1670_82_end: ;
}
void Frames::event_func_18796()
{
    // event 1671_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1671_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1671_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1671_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(3);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1671_82_end: ;
}
void Frames::event_func_18797()
{
    // event 1672_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1672_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1672_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (110))) goto event_1672_82_end;
        media.play_id(SOUND_DRAGONROAR_4_336, -1, 1);
    }
    event_1672_82_end: ;
}
void Frames::event_func_18798()
{
    // event 1673_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1673_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1673_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (110))) goto event_1673_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (140))) goto event_1673_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+1, 12));
        }
    }
    event_1673_82_end: ;
}
void Frames::event_func_18799()
{
    // event 1674_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1674_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1674_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_1674_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-1, 0));
        }
    }
    event_1674_82_end: ;
}
void Frames::event_func_18800()
{
    // event 1675_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1675_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1675_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (190))) goto event_1675_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(39);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(15);
    }
    event_1675_82_end: ;
}
void Frames::event_func_18801()
{
    // event 1676_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1676_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1676_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (1))) goto event_1676_82_end;
        media.play_id(SOUND_DRAGONROAR_4_336, -1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1676_82_end: ;
}
