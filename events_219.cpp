#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17276()
{
    // event 1566_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1566_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1566_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1566_77_end: ;
}
void Frames::event_func_17277()
{
    // event 1567_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1567_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1567_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (8))) goto event_1567_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1567_77_end: ;
}
void Frames::event_func_17278()
{
    // event 1568_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1568_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1568_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (40))) goto event_1568_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1568_77_end: ;
}
void Frames::event_func_17279()
{
    // event 1569_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1569_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1569_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1569_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1569_77_end: ;
}
void Frames::event_func_17280()
{
    // event 1570_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1570_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1570_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (100))) goto event_1570_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+3);
    }
    event_1570_77_end: ;
}
void Frames::event_func_17281()
{
    // event 1571_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1571_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (11))) goto event_1571_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (140))) goto event_1571_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(39);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1571_77_end: ;
}
void Frames::event_func_17282()
{
    // event 1572_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1572_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1572_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 6);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+4);
    }
    event_1572_77_end: ;
}
void Frames::event_func_17283()
{
    // event 1573_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1573_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (12))) goto event_1573_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (86))) goto event_1573_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1573_77_end: ;
}
void Frames::event_func_17284()
{
    // event 1574_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1574_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1574_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1574_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1574_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1574_77_end: ;
}
void Frames::event_func_17285()
{
    // event 1575_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1575_77_end;
        if (!((global_values->get(27)) == (0))) goto event_1575_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1575_77_end;
        if (!((media.get_channel_position(-1 +20)) > (2200))) goto event_1575_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 24);
    }
    event_1575_77_end: ;
}
void Frames::event_func_17286()
{
    // event 1576_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1576_77_end;
        if (!((global_values->get(27)) == (1))) goto event_1576_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1576_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) > (50))) goto event_1576_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 24);
    }
    event_1576_77_end: ;
}
void Frames::event_func_17287()
{
    // event 1577_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1577_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1577_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1577_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1577_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1577_77_end: ;
}
void Frames::event_func_17288()
{
    // event 1578_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1578_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) >= (14))) goto event_1578_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1578_77_end: ;
}
void Frames::event_func_17289()
{
    // event 1579_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1579_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1579_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)*0.05, 4));
    }
    event_1579_77_end: ;
}
void Frames::event_func_17290()
{
    // event 1580_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1580_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1580_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (40))) goto event_1580_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1580_77_end: ;
}
void Frames::event_func_17291()
{
    // event 1581_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1581_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1581_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (60))) goto event_1581_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1581_77_end: ;
}
void Frames::event_func_17292()
{
    // event 1582_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1582_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1582_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (120))) goto event_1582_77_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1582_77_end: ;
}
void Frames::event_func_17293()
{
    // event 1583_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1583_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1583_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (125))) goto event_1583_77_end;
        media.play_id(SOUND_LILAC_GASP1_95, -1, 1);
        media.play_id(SOUND_CA_06_13_442, -1, 1);
    }
    event_1583_77_end: ;
}
void Frames::event_func_17294()
{
    // event 1584_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1584_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1584_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (125))) goto event_1584_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (140))) goto event_1584_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(10);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(4);
        }
    }
    event_1584_77_end: ;
}
void Frames::event_func_17295()
{
    // event 1585_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1585_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1585_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (140))) goto event_1585_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1585_77_end: ;
}
void Frames::event_func_17296()
{
    // event 1586_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1586_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1586_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (170))) goto event_1586_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
        media.play_id(SOUND_SCENE_TRUCKSTOP_2_425, -1, 1);
    }
    event_1586_77_end: ;
}
void Frames::event_func_17297()
{
    // event 1587_77
    bool or_result_1587_77 = false;
    bool or_temp_result_1587_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1587_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (170))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1587_77_0_end;
        or_result_1587_77 = true;
        or_temp_result_1587_77_0 = true;
    }
    or_event_1587_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    if (or_temp_result_1587_77_0) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1587_77
    bool or_temp_result_1587_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1587_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (14))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1587_77_1_end;
        or_result_1587_77 = true;
        or_temp_result_1587_77_1 = true;
        or_event_1587_77_1_end: ;
        if (or_temp_result_1587_77_1) {
            mrstumpy_3913_instances.save_selection();
        }
        if (!or_result_1587_77) goto or_final_or_event_1587_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        if (or_temp_result_1587_77_0 || or_temp_result_1587_77_1) {
            mrstumpy_3913_instances.restore_selection();
        }
        layerobject_10_instances.clear_selection();
        for (ObjectIterator it(layerobject_10_instances); !it.end(); ++it) {
            ((LayerObject*)*it)->set_x(2-1, ((LayerObject*)*it)->get_x(-1 + 2)+16);
        }
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_1587_77_1_end: ;
}
void Frames::event_func_17298()
{
    // event 1588_77
    bool or_result_1588_77 = false;
    bool or_temp_result_1588_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1588_77_0_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (170))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (200))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1588_77_0_end;
        or_result_1588_77 = true;
        or_temp_result_1588_77_0 = true;
    }
    or_event_1588_77_0_end: ;
    mrstumpy_3913_instances.clear_saved_selection();
    if (or_temp_result_1588_77_0) {
        mrstumpy_3913_instances.save_selection();
    }
    // event 1588_77
    bool or_temp_result_1588_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto or_event_1588_77_1_end;
        mrstumpy_3913_instances.clear_selection();
        for (ObjectIterator it(mrstumpy_3913_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (200))) { it.deselect(); continue; }
        }
        if (!mrstumpy_3913_instances.has_selection()) goto or_event_1588_77_1_end;
        or_result_1588_77 = true;
        or_temp_result_1588_77_1 = true;
        or_event_1588_77_1_end: ;
        if (or_temp_result_1588_77_1) {
            mrstumpy_3913_instances.save_selection();
        }
        if (!or_result_1588_77) goto or_final_or_event_1588_77_1_end;
        mrstumpy_3913_instances.empty_selection();
        if (or_temp_result_1588_77_0 || or_temp_result_1588_77_1) {
            mrstumpy_3913_instances.restore_selection();
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)*it)->alterables->values.get(0), ((((Active*)get_single(mrstumpy_3913_instances, it.current_index, default_active_instance))->alterables->values.get(5))-5)*16), 2400));
        }
    }
    or_final_or_event_1588_77_1_end: ;
}
void Frames::event_func_17299()
{
    // event 1589_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1589_77_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1589_77_end;
        if (!((((Active*)get_instance(hazardspikesright2_3910_instances))->get_x()) > (852))) goto event_1589_77_end;
        if (!((((Active*)get_instance(hazardspikesright2_3910_instances))->get_x()) < (2400))) goto event_1589_77_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1589_77_0_end;
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
        dynamic_1589_77_0_end: ;
    }
    event_1589_77_end: ;
}
void Frames::event_func_17300()
{
    // event 1590_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1590_77_end;
        if (!((((Active*)get_instance(hazardspikesright2_3910_instances))->get_x()) > (852))) goto event_1590_77_end;
        if (!((((Active*)get_instance(hazardspikesright2_3910_instances))->get_x()) < (2400))) goto event_1590_77_end;
        breakableruinspiece2_3905_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_breakableruinspiece2_3905(898, 1154), 2);
            breakableruinspiece2_3905_instances.add_back();
        }
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-10+randrange(21));
            ((Active*)*it)->set_x(((Active*)get_instance(hazardspikesright2_3910_instances))->get_x()-20+randrange(41));
            ((Active*)*it)->set_angle(randrange(360), 0);
        }
    }
    event_1590_77_end: ;
}
void Frames::event_func_17301()
{
    // event 1591_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1591_77_end;
        breakableruinspiece2_3905_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!breakableruinspiece2_3905_instances.has_selection()) goto event_1591_77_end;
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1591_77_0; single_instance_1591_77_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakableruinspiece2_3905_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1591_77_0 == NULL)
                    single_instance_1591_77_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1591_77_0))->force_speed(25+randrange(20));
        ((Active*)((Active*)single_instance_1591_77_0))->set_angle(randrange(4)*90, 0);
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -2-randrange(8));
            ((Active*)*it)->alterables->values.set(0, 8+randrange(10));
        }
    }
    event_1591_77_end: ;
}
void Frames::event_func_17302()
{
    // event 1592_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1592_77_end;
        breakableruinspiece2_3905_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!breakableruinspiece2_3905_instances.has_selection()) goto event_1592_77_end;
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.5);
        }
    }
    event_1592_77_end: ;
}
void Frames::event_func_17303()
{
    // event 1593_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1593_77_end;
        breakableruinspiece2_3905_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (1170))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!breakableruinspiece2_3905_instances.has_selection()) goto event_1593_77_end;
        for (ObjectIterator it(breakableruinspiece2_3905_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1593_77_0; single_instance_1593_77_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakableruinspiece2_3905_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1593_77_0 == NULL)
                    single_instance_1593_77_0 = new_obj;
            }
        }
    }
    event_1593_77_end: ;
}
void Frames::event_func_17304()
{
    // event 1594_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1594_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1594_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(npcneera_2464_instances))->get_x()))) goto event_1594_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(1);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(9);
    }
    event_1594_77_end: ;
}
void Frames::event_func_17305()
{
    // event 1595_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1595_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1595_77_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(npcgong_634_instances))->get_x()))) goto event_1595_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (300))) goto event_1595_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21);
    }
    event_1595_77_end: ;
}
void Frames::event_func_17306()
{
    // event 1596_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1596_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1596_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (300))) goto event_1596_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(npcgong_634_instances))->force_speed(40);
        ((Active*)get_instance(npcgong_634_instances))->set_x(get_max(((Active*)get_instance(npcgong_634_instances))->get_x(), frame_left()-50));
    }
    event_1596_77_end: ;
}
void Frames::event_func_17307()
{
    // event 1597_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1597_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1597_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (300))) goto event_1597_77_end;
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+5);
    }
    event_1597_77_end: ;
}
void Frames::event_func_17308()
{
    // event 1598_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1598_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (14))) goto event_1598_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (300))) goto event_1598_77_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) > (2400))) goto event_1598_77_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(18);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 76);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1598_77_end: ;
}
void Frames::event_func_17309()
{
    // event 1599_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1599_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1599_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_1599_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1599_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(frame_left()-50);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcgong_634_instances))->get_y()-100);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, -2);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(7);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_1599_77_end: ;
}
void Frames::event_func_17310()
{
    // event 1600_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1600_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (16))) goto event_1600_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.add(9, 0.4);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()+12);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcneera_2464_instances))->get_y()+((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(9));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1600_77_end: ;
}
void Frames::event_func_17311()
{
    // event 1601_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1601_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (16))) goto event_1601_77_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_y()) >= (1152))) goto event_1601_77_end;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(1152);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(10);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1601_77_end: ;
}
void Frames::event_func_17312()
{
    // event 1602_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1602_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (17))) goto event_1602_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (30))) goto event_1602_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, -8);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(7);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_1602_77_end: ;
}
void Frames::event_func_17313()
{
    // event 1603_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1603_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1603_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.add(9, 0.4);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()+12);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcneera_2464_instances))->get_y()+((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(9));
    }
    event_1603_77_end: ;
}
void Frames::event_func_17314()
{
    // event 1604_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1604_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (18))) goto event_1604_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1604_77_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(false);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1604_77_end: ;
}
void Frames::event_func_17315()
{
    // event 1605_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1605_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (19))) goto event_1605_77_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 20);
    }
    event_1605_77_end: ;
}
void Frames::event_func_17316()
{
    // event 1606_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1606_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (19))) goto event_1606_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (40))) goto event_1606_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-130);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-60);
            ((Active*)*it)->set_y(1107);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1107);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1606_77_end: ;
}
void Frames::event_func_17317()
{
    // event 1607_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1607_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (20))) goto event_1607_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+70))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1607_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1607_77_end: ;
}
void Frames::event_func_17318()
{
    // event 1608_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1608_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (20))) goto event_1608_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+70))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1608_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1608_77_end: ;
}
void Frames::event_func_17319()
{
    // event 1609_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1609_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (20))) goto event_1609_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1609_77_end: ;
}
void Frames::event_func_17320()
{
    // event 1610_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1610_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (20))) goto event_1610_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (60))) goto event_1610_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+100))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1610_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 23);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1610_77_end: ;
}
void Frames::event_func_17321()
{
    // event 1611_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1611_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1611_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (23))) goto event_1611_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1611_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(frame_left()-50);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcgong_634_instances))->get_y()-100);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, -2);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(7);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1611_77_end: ;
}
void Frames::event_func_17322()
{
    // event 1612_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1612_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (22))) goto event_1612_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_1612_77_end: ;
}
void Frames::event_func_17323()
{
    // event 1613_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1613_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (22))) goto event_1613_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (20))) goto event_1613_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(60);
        }
    }
    event_1613_77_end: ;
}
void Frames::event_func_17324()
{
    // event 1614_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1614_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (22))) goto event_1614_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (40))) goto event_1614_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1614_77_end: ;
}
void Frames::event_func_17325()
{
    // event 1615_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1615_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (22))) goto event_1615_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (130))) goto event_1615_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1615_77_end: ;
}
void Frames::event_func_17326()
{
    // event 1616_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1616_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (23))) goto event_1616_77_end;
        if (not_always_1616_77 > loop_count) {
            not_always_1616_77 = loop_count + 2;
            goto event_1616_77_end;
        }
        not_always_1616_77 = loop_count + 2;
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
    }
    event_1616_77_end: ;
}
void Frames::event_func_17327()
{
    // event 1617_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1617_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (23))) goto event_1617_77_end;
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
    event_1617_77_end: ;
}
void Frames::event_func_17328()
{
    // event 1618_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_gong_and_neera_1)) goto event_1618_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (23))) goto event_1618_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1618_77_end;
        next_frame = 24 + 0;    
    
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
    }
    event_1618_77_end: ;
}
void Frames::event_func_17329()
{
    // event 1619_77
    bool or_result_1619_77 = false;
    bool or_temp_result_1619_77_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1619_77_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1619_77_0_end;
        or_result_1619_77 = true;
        or_temp_result_1619_77_0 = true;
    }
    or_event_1619_77_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1619_77_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1619_77
    bool or_temp_result_1619_77_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1619_77_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1619_77_1_end;
        or_result_1619_77 = true;
        or_temp_result_1619_77_1 = true;
    }
    or_event_1619_77_1_end: ;
    if (or_temp_result_1619_77_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1619_77
    bool or_temp_result_1619_77_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto or_event_1619_77_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1619_77_2_end;
        or_result_1619_77 = true;
        or_temp_result_1619_77_2 = true;
        or_event_1619_77_2_end: ;
        if (or_temp_result_1619_77_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1619_77) goto or_final_or_event_1619_77_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1619_77_0 || or_temp_result_1619_77_1 || or_temp_result_1619_77_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1619_77_2_end: ;
}
void Frames::event_func_17330()
{
    // event 1620_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1620_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1620_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1620_77_end: ;
}
void Frames::event_func_17331()
{
    // event 1621_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1621_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) <= (2))) goto event_1621_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1621_77_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
    }
    event_1621_77_end: ;
}
void Frames::event_func_17332()
{
    // event 1622_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1622_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1622_77_end;
        if (!((global_values->get(1)) == (2))) goto event_1622_77_end;
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
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1622_77_end: ;
}
void Frames::event_func_17333()
{
    // event 1623_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1623_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (0))) goto event_1623_77_end;
        if (!((global_values->get(1)) != (2))) goto event_1623_77_end;
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, -1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(650);
            ((Active*)*it)->set_x(3200);
        }
    }
    event_1623_77_end: ;
}
void Frames::event_func_17334()
{
    // event 1624_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1624_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1624_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2800);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-80);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1624_77_end: ;
}
void Frames::event_func_17335()
{
    // event 1625_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1625_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1625_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (30))) goto event_1625_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-6);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1625_77_end: ;
}
void Frames::event_func_17336()
{
    // event 1626_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1626_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-1))) goto event_1626_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-100))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1626_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 28);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1626_77_end: ;
}
void Frames::event_func_17337()
{
    // event 1627_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1627_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1627_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1627_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1627_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.sub(0, 1);
    }
    event_1627_77_end: ;
}
void Frames::event_func_17338()
{
    // event 1628_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1628_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-3))) goto event_1628_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1628_77_end: ;
}
void Frames::event_func_17339()
{
    // event 1629_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1629_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (-3))) goto event_1629_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1629_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1629_77_end: ;
}
void Frames::event_func_17340()
{
    // event 1630_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1630_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1630_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1630_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1630_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.set_channel_pan(20-1, -100);
        media.set_channel_volume(20-1, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1630_77_end: ;
}
void Frames::event_func_17341()
{
    // event 1631_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1631_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1631_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1631_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1631_77_end;
        if (!((global_values->get(1)) != (2))) goto event_1631_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2000);
            ((Active*)*it)->set_y(650);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1631_77_end: ;
}
void Frames::event_func_17342()
{
    // event 1632_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1632_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1632_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1632_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1632_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        media.set_channel_pan(20-1, 0);
        media.set_channel_volume(20-1, 100);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(0, 5);
    }
    event_1632_77_end: ;
}
void Frames::event_func_17343()
{
    // event 1633_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1633_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1633_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1633_77_end: ;
}
void Frames::event_func_17344()
{
    // event 1634_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1634_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1634_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (20))) goto event_1634_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(1800);
            ((Active*)*it)->set_y(650);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_y()-80);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->force_frame(99);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1634_77_end: ;
}
void Frames::event_func_17345()
{
    // event 1635_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1635_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1635_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (120))) goto event_1635_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(29);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1635_77_end: ;
}
void Frames::event_func_17346()
{
    // event 1636_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1636_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (1))) goto event_1636_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (180))) goto event_1636_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 27);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(30);
        }
    }
    event_1636_77_end: ;
}
void Frames::event_func_17347()
{
    // event 1637_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1637_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1637_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1637_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1637_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1637_77_end: ;
}
void Frames::event_func_17348()
{
    // event 1638_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1638_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (3))) goto event_1638_77_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_05_01_ogg_282, 19-1);
        media.set_channel_volume(19-1, 20);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        media.set_channel_pan(19-1, 100);
    }
    event_1638_77_end: ;
}
void Frames::event_func_17349()
{
    // event 1639_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1639_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1639_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
    }
    event_1639_77_end: ;
}
void Frames::event_func_17350()
{
    // event 1640_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1640_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1640_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (30))) goto event_1640_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(45);
        }
    }
    event_1640_77_end: ;
}
void Frames::event_func_17351()
{
    // event 1641_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1641_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1641_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (90))) goto event_1641_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(5);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1641_77_end: ;
}
void Frames::event_func_17352()
{
    // event 1642_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1642_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1642_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (110))) goto event_1642_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1642_77_end: ;
}
void Frames::event_func_17353()
{
    // event 1643_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1643_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1643_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (120))) goto event_1643_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (180))) goto event_1643_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->force_speed(25);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
    }
    event_1643_77_end: ;
}
void Frames::event_func_17354()
{
    // event 1644_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1644_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1644_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (180))) goto event_1644_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) < (200))) goto event_1644_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(5);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1644_77_end: ;
}
void Frames::event_func_17355()
{
    // event 1645_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1645_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1645_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (190))) goto event_1645_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_05_02_ogg_283, 19-1);
        media.set_channel_volume(19-1, 30);
    }
    event_1645_77_end: ;
}
void Frames::event_func_17356()
{
    // event 1646_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1646_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1646_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (200))) goto event_1646_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1646_77_end: ;
}
void Frames::event_func_17357()
{
    // event 1647_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1647_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1647_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (240))) goto event_1647_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1647_77_end: ;
}
void Frames::event_func_17358()
{
    // event 1648_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1648_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1648_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) >= (280))) goto event_1648_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 5);
    }
    event_1648_77_end: ;
}
void Frames::event_func_17359()
{
    // event 1649_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1649_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (4))) goto event_1649_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (320))) goto event_1649_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 30);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_speed();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(((Active*)get_single(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x()+800);
            ((Active*)*it)->set_y(((Active*)get_single(playerskincarol_445_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1649_77_end: ;
}
void Frames::event_func_17360()
{
    // event 1650_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1650_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1650_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1650_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1650_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        media.set_channel_pan(19-1, 0);
    }
    event_1650_77_end: ;
}
void Frames::event_func_17361()
{
    // event 1651_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1651_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1651_77_end;
        if (!((global_values->get(1)) == (2))) goto event_1651_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 5);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1651_77_end: ;
}
void Frames::event_func_17362()
{
    // event 1652_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1652_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1652_77_end;
        if (!((global_values->get(1)) != (2))) goto event_1652_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(30);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, -4);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1652_77_end: ;
}
void Frames::event_func_17363()
{
    // event 1653_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1653_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (6))) goto event_1653_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1653_77_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(58);
        }
    }
    event_1653_77_end: ;
}
void Frames::event_func_17364()
{
    // event 1654_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1654_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1654_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (31))) goto event_1654_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (34))) goto event_1654_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1654_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1654_77_end: ;
}
void Frames::event_func_17365()
{
    // event 1655_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1655_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1655_77_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(58);
        }
    }
    event_1655_77_end: ;
}
void Frames::event_func_17366()
{
    // event 1656_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1656_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1656_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1656_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1656_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
    }
    event_1656_77_end: ;
}
void Frames::event_func_17367()
{
    // event 1657_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1657_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1657_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1657_77_end: ;
}
void Frames::event_func_17368()
{
    // event 1658_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1658_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1658_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (20))) goto event_1658_77_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1658_77_end: ;
}
void Frames::event_func_17369()
{
    // event 1659_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1659_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1659_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) == (50))) goto event_1659_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(1, 1);
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
    event_1659_77_end: ;
}
void Frames::event_func_17370()
{
    // event 1660_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1660_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1660_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (50))) goto event_1660_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1660_77_end: ;
}
void Frames::event_func_17371()
{
    // event 1661_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1661_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (8))) goto event_1661_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(1)) > (50+64))) goto event_1661_77_end;
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
    }
    event_1661_77_end: ;
}
void Frames::event_func_17372()
{
    // event 1662_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1662_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (9))) goto event_1662_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(1200-16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(1200+16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(650);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(650);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_y()-80);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        {
            ObjectIterator other_it(playerskincarol_445_instances);
            for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1662_77_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1662_77_0_end: ;
    }
    event_1662_77_end: ;
}
void Frames::event_func_17373()
{
    // event 1663_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1663_77_end;
        if (!((((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.get(0)) == (9))) goto event_1663_77_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1663_77_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mrstumpy_3913_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1663_77_end: ;
}
void Frames::event_func_17374()
{
    // event 1664_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1664_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1664_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1664_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1664_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1664_77_end: ;
}
void Frames::event_func_17375()
{
    // event 1665_77
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_meet_milla_1)) goto event_1665_77_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1665_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (35))) goto event_1665_77_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (39))) goto event_1665_77_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1665_77_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1665_77_end: ;
}
