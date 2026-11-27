#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16836()
{
    // event 1481_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1481_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (2))) goto event_1481_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)) <= (-2))) goto event_1481_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)) > (-5))) goto event_1481_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(2);
        }
    }
    event_1481_76_end: ;
}
void Frames::event_func_16837()
{
    // event 1482_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1482_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (2))) goto event_1482_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)) > (-2))) goto event_1482_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1482_76_end: ;
}
void Frames::event_func_16838()
{
    // event 1483_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1483_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (2))) goto event_1483_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)) > (8))) goto event_1483_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 3);
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_visible(false);
    }
    event_1483_76_end: ;
}
void Frames::event_func_16839()
{
    // event 1484_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1484_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (3))) goto event_1484_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1.8);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1484_76_end: ;
}
void Frames::event_func_16840()
{
    // event 1485_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1485_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (3))) goto event_1485_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1485_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 4);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(torqueship_3888_instances))->set_angle(0, 0);
        {
            ((Active*)get_instance(torqueship_3888_instances))->set_global_position(112, 950);
            pos_end_1485_76_0: ;
        }
    }
    event_1485_76_end: ;
}
void Frames::event_func_16841()
{
    // event 1486_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1486_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1486_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->set_x(((Active*)get_instance(torqueship_3888_instances))->get_x()+30);
        ((Active*)get_instance(torqueship_3888_instances))->set_y(((Active*)get_instance(torqueship_3888_instances))->get_y()+2);
    }
    event_1486_76_end: ;
}
void Frames::event_func_16842()
{
    // event 1487_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1487_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1487_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-250))) goto event_1487_76_end;
        if (not_always_1487_76 > loop_count) {
            not_always_1487_76 = loop_count + 2;
            goto event_1487_76_end;
        }
        not_always_1487_76 = loop_count + 2;
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_1487_76_end: ;
}
void Frames::event_func_16843()
{
    // event 1488_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1488_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1488_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-200))) goto event_1488_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+200))) goto event_1488_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+1, 5));
    }
    event_1488_76_end: ;
}
void Frames::event_func_16844()
{
    // event 1489_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1489_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1489_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+500))) goto event_1489_76_end;
        if (not_always_1489_76 > loop_count) {
            not_always_1489_76 = loop_count + 2;
            goto event_1489_76_end;
        }
        not_always_1489_76 = loop_count + 2;
        media.play_id(SOUND_LILAC_GASP1_95, -1, 1);
    }
    event_1489_76_end: ;
}
void Frames::event_func_16845()
{
    // event 1490_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1490_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1490_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+500))) goto event_1490_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+750))) goto event_1490_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(11);
        }
    }
    event_1490_76_end: ;
}
void Frames::event_func_16846()
{
    // event 1491_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1491_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1491_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+750))) goto event_1491_76_end;
        if (not_always_1491_76 > loop_count) {
            not_always_1491_76 = loop_count + 2;
            goto event_1491_76_end;
        }
        not_always_1491_76 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1491_76_end: ;
}
void Frames::event_func_16847()
{
    // event 1492_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1492_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (4))) goto event_1492_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2000))) goto event_1492_76_end;
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
    }
    event_1492_76_end: ;
}
void Frames::event_func_16848()
{
    // event 1493_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1493_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (5))) goto event_1493_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(2, 1);
    }
    event_1493_76_end: ;
}
void Frames::event_func_16849()
{
    // event 1494_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1494_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (5))) goto event_1494_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(2)) > (100))) goto event_1494_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_speed(35);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 1.5);
    }
    event_1494_76_end: ;
}
void Frames::event_func_16850()
{
    // event 1495_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1495_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (5))) goto event_1495_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(2)) == (120))) goto event_1495_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(2, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 7);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1495_76_end: ;
}
void Frames::event_func_16851()
{
    // event 1496_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1496_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (5))) goto event_1496_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(2)) > (135))) goto event_1496_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 6);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(2, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1496_76_end: ;
}
void Frames::event_func_16852()
{
    // event 1497_76
    bool or_result_1497_76 = false;
    bool or_temp_result_1497_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1497_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (9))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1497_76_0_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (5))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1497_76_0_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1497_76_0_end;
        or_result_1497_76 = true;
        or_temp_result_1497_76_0 = true;
    }
    or_event_1497_76_0_end: ;
    torqueshiptail_3889_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    dialogarrow_568_instances.clear_saved_selection();
    if (or_temp_result_1497_76_0) {
        torqueshiptail_3889_instances.save_selection();
        dialogbox_566_instances.save_selection();
        dialogarrow_568_instances.save_selection();
    }
    // event 1497_76
    bool or_temp_result_1497_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1497_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (42))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1497_76_1_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (5))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1497_76_1_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1497_76_1_end;
        or_result_1497_76 = true;
        or_temp_result_1497_76_1 = true;
        or_event_1497_76_1_end: ;
        if (or_temp_result_1497_76_1) {
            torqueshiptail_3889_instances.save_selection();
            dialogbox_566_instances.save_selection();
            dialogarrow_568_instances.save_selection();
        }
        if (!or_result_1497_76) goto or_final_or_event_1497_76_1_end;
        torqueshiptail_3889_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        dialogarrow_568_instances.empty_selection();
        if (or_temp_result_1497_76_0 || or_temp_result_1497_76_1) {
            torqueshiptail_3889_instances.restore_selection();
        }
        if (or_temp_result_1497_76_0 || or_temp_result_1497_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1497_76_0 || or_temp_result_1497_76_1) {
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
    or_final_or_event_1497_76_1_end: ;
}
void Frames::event_func_16853()
{
    // event 1498_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1498_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1498_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_1498_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1498_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1498_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) > (5))) goto event_1498_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1498_76_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 42);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1498_76_end: ;
}
void Frames::event_func_16854()
{
    // event 1499_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1499_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1499_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1499_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) > (5))) goto event_1499_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1499_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1499_76_end: ;
}
void Frames::event_func_16855()
{
    // event 1500_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1500_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (43))) goto event_1500_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1500_76_end: ;
}
void Frames::event_func_16856()
{
    // event 1501_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1501_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (42))) goto event_1501_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (43))) goto event_1501_76_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1501_76_end;
        if (!((media.get_channel_position(-1 +20)) < (3200))) goto event_1501_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 12);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1501_76_end: ;
}
void Frames::event_func_16857()
{
    // event 1502_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1502_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (42))) goto event_1502_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (43))) goto event_1502_76_end;
        if (!((media.get_channel_position(-1 +20)) >= (3200))) goto event_1502_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 54);
    }
    event_1502_76_end: ;
}
void Frames::event_func_16858()
{
    // event 1503_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1503_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (42))) goto event_1503_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (43))) goto event_1503_76_end;
        if (!((media.get_channel_position(-1 +20)) >= (5700))) goto event_1503_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(25);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1503_76_end: ;
}
void Frames::event_func_16859()
{
    // event 1504_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1504_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (42))) goto event_1504_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (43))) goto event_1504_76_end;
        if (!(!media.is_channel_playing(20-1))) goto event_1504_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1504_76_end: ;
}
void Frames::event_func_16860()
{
    // event 1505_76
    bool or_result_1505_76 = false;
    bool or_temp_result_1505_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1505_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (10))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1505_76_0_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1505_76_0_end;
        or_result_1505_76 = true;
        or_temp_result_1505_76_0 = true;
    }
    or_event_1505_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    dialogarrow_568_instances.clear_saved_selection();
    if (or_temp_result_1505_76_0) {
        dialogbox_566_instances.save_selection();
        dialogarrow_568_instances.save_selection();
    }
    // event 1505_76
    bool or_temp_result_1505_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1505_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (43))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1505_76_1_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1505_76_1_end;
        or_result_1505_76 = true;
        or_temp_result_1505_76_1 = true;
        or_event_1505_76_1_end: ;
        if (or_temp_result_1505_76_1) {
            dialogbox_566_instances.save_selection();
            dialogarrow_568_instances.save_selection();
        }
        if (!or_result_1505_76) goto or_final_or_event_1505_76_1_end;
        dialogbox_566_instances.empty_selection();
        dialogarrow_568_instances.empty_selection();
        if (or_temp_result_1505_76_0 || or_temp_result_1505_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1505_76_0 || or_temp_result_1505_76_1) {
            dialogarrow_568_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
        }
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 7);
        }
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 5);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
        }
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 100);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        placeholdercharacter_1588_instances.clear_selection();
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1505_76_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1505_76_0: ;
        }
        placeholdercharactertail_3891_instances.clear_selection();
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1505_76_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1505_76_1: ;
        }
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
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(4, 10);
        }
    }
    or_final_or_event_1505_76_1_end: ;
}
void Frames::event_func_16861()
{
    // event 1506_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1506_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (7))) goto event_1506_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+5+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 1512));
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1506_76_end: ;
}
void Frames::event_func_16862()
{
    // event 1507_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1507_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (7))) goto event_1507_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2212))) goto event_1507_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 712);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1200);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
    }
    event_1507_76_end: ;
}
void Frames::event_func_16863()
{
    // event 1508_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1508_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (9))) goto event_1508_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 20);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_visible(false);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1508_76_end: ;
}
void Frames::event_func_16864()
{
    // event 1509_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1509_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (9))) goto event_1509_76_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+100))) goto event_1509_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 10);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1509_76_end: ;
}
void Frames::event_func_16865()
{
    // event 1510_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1510_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (10))) goto event_1510_76_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1510_76_end: ;
}
void Frames::event_func_16866()
{
    // event 1511_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1511_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1511_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1511_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1511_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 11);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1511_76_end: ;
}
void Frames::event_func_16867()
{
    // event 1512_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1512_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (11))) goto event_1512_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1512_76_end: ;
}
void Frames::event_func_16868()
{
    // event 1513_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1513_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (11))) goto event_1513_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objectbike_322_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1513_76_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 12);
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
    }
    event_1513_76_end: ;
}
void Frames::event_func_16869()
{
    // event 1514_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1514_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (12))) goto event_1514_76_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_1514_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 990);
    }
    event_1514_76_end: ;
}
void Frames::event_func_16870()
{
    // event 1515_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1515_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (990))) goto event_1515_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1515_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+20);
            ((Active*)*it)->alterables->values.add(1, 20);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+20);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+20);
        }
        characterselect_230_instances.clear_selection();
        for (ObjectIterator it(characterselect_230_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(-64);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(-64);
        }
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.stop_channel(20-1);
    }
    event_1515_76_end: ;
}
void Frames::event_func_16871()
{
    // event 1516_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1516_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (990))) goto event_1516_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (400))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1516_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(6, 1);
    }
    event_1516_76_end: ;
}
void Frames::event_func_16872()
{
    // event 1517_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1517_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (991))) goto event_1517_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1517_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-20);
            ((Active*)*it)->alterables->values.add(1, 20);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-20);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-20);
        }
    }
    event_1517_76_end: ;
}
void Frames::event_func_16873()
{
    // event 1518_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1518_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (991))) goto event_1518_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (400))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1518_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(6, 1);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1518_76_end: ;
}
void Frames::event_func_16874()
{
    // event 1519_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1519_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1519_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1519_76_end: ;
}
void Frames::event_func_16875()
{
    // event 1520_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1520_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1520_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1520_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1520_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1520_76_end: ;
}
void Frames::event_func_16876()
{
    // event 1521_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1521_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1521_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1521_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_1521_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1521_76_end: ;
}
void Frames::event_func_16877()
{
    // event 1522_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1522_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1522_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_1522_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1522_76_end;
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 4);
        }
    }
    event_1522_76_end: ;
}
void Frames::event_func_16878()
{
    // event 1523_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1523_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1523_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_1523_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1523_76_end;
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 4);
        }
    }
    event_1523_76_end: ;
}
void Frames::event_func_16879()
{
    // event 1524_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1524_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1524_76_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_1524_76_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_1524_76_end: ;
}
void Frames::event_func_16880()
{
    // event 1525_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1525_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (992))) goto event_1525_76_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_1525_76_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(23)+cos_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25)*0.5);
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25)-0.4, 0));
        }
    }
    event_1525_76_end: ;
}
void Frames::event_func_16881()
{
    // event 1526_76
    bool or_result_1526_76 = false;
    bool or_temp_result_1526_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1526_76_0_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (992))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1526_76_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1526_76_0_end;
        or_result_1526_76 = true;
        or_temp_result_1526_76_0 = true;
    }
    or_event_1526_76_0_end: ;
    torqueshiptail_3889_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_1526_76_0) {
        torqueshiptail_3889_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 1526_76
    bool or_temp_result_1526_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1526_76_1_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (992))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1526_76_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1526_76_1_end;
        or_result_1526_76 = true;
        or_temp_result_1526_76_1 = true;
        or_event_1526_76_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_1526_76_1) {
            torqueshiptail_3889_instances.save_selection();
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1526_76) goto or_final_or_event_1526_76_1_end;
        torqueshiptail_3889_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_1526_76_0 || or_temp_result_1526_76_1) {
            torqueshiptail_3889_instances.restore_selection();
        }
        if (or_temp_result_1526_76_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1526_76_1) {
            inputsp1_21_instances.restore_selection();
        }
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
    }
    or_final_or_event_1526_76_1_end: ;
}
void Frames::event_func_16882()
{
    // event 1527_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1527_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (993))) goto event_1527_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1527_76_end;
        media.play_id(SOUND_LILAC_YES_220, -1, 1);
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(6, 1);
        global_values->set(1, 0);
    }
    event_1527_76_end: ;
}
void Frames::event_func_16883()
{
    // event 1528_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1528_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (993))) goto event_1528_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1528_76_end;
        media.play_id(SOUND_CAROL_SWEET_2_221, -1, 1);
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(6, 1);
        global_values->set(1, 2);
    }
    event_1528_76_end: ;
}
void Frames::event_func_16884()
{
    // event 1529_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1529_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (994))) goto event_1529_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1529_76_end: ;
}
void Frames::event_func_16885()
{
    // event 1530_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1530_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (994))) goto event_1530_76_end;
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!charname1_142_instances.has_selection()) goto event_1530_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(6, 1);
    }
    event_1530_76_end: ;
}
void Frames::event_func_16886()
{
    // event 1531_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1531_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (995))) goto event_1531_76_end;
        if (!((global_values->get(1)) != (2))) goto event_1531_76_end;
        if (!((global_values->get(1)) != (3))) goto event_1531_76_end;
        if (not_always_1531_76 > loop_count) {
            not_always_1531_76 = loop_count + 2;
            goto event_1531_76_end;
        }
        not_always_1531_76 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1531_76_end: ;
}
void Frames::event_func_16887()
{
    // event 1532_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1532_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (995))) goto event_1532_76_end;
        if (not_always_1532_76 > loop_count) {
            not_always_1532_76 = loop_count + 2;
            goto event_1532_76_end;
        }
        not_always_1532_76 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
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
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
    }
    event_1532_76_end: ;
}
void Frames::event_func_16888()
{
    // event 1533_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1533_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (995))) goto event_1533_76_end;
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
    event_1533_76_end: ;
}
void Frames::event_func_16889()
{
    // event 1534_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1534_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (995))) goto event_1534_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1534_76_end;
        if (!((global_values->get(1)) != (2))) goto event_1534_76_end;
        if (!((global_values->get(1)) != (3))) goto event_1534_76_end;
        next_frame = 20 + 0;    
    
    }
    event_1534_76_end: ;
}
void Frames::event_func_16890()
{
    // event 1535_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1535_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (995))) goto event_1535_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1535_76_end;
        if (!((global_values->get(1)) >= (2))) goto event_1535_76_end;
        if (!((global_values->get(1)) <= (3))) goto event_1535_76_end;
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1 = true;
        }
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 13);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 5544);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 555);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 5760);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 630);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -12);
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3400);
            ((Active*)*it)->alterables->values.set(1, 450);
        }
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        characterselect_230_instances.clear_selection();
        for (ObjectIterator it(characterselect_230_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_1535_76_end: ;
}
void Frames::event_func_16891()
{
    // event 1536_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1536_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (13))) goto event_1536_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1536_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 4);
        }
    }
    event_1536_76_end: ;
}
void Frames::event_func_16892()
{
    // event 1537_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1537_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) >= (13))) goto event_1537_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (18))) goto event_1537_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)));
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, 15-(((Active*)*it)->alterables->values.get(6)*5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1537_76_end: ;
}
void Frames::event_func_16893()
{
    // event 1538_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1538_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) >= (13))) goto event_1538_76_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-240))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1538_76_end;
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_PLANE_FLYBY_102, -1, 1);
    }
    event_1538_76_end: ;
}
void Frames::event_func_16894()
{
    // event 1539_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1539_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) >= (13))) goto event_1539_76_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-240))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1539_76_end;
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5), 3));
    }
    event_1539_76_end: ;
}
void Frames::event_func_16895()
{
    // event 1540_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1540_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (13))) goto event_1540_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(levelbackgroundplane2_865_instances, default_active_instance))->get_x()))) goto event_1540_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 14);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 4);
    }
    event_1540_76_end: ;
}
void Frames::event_func_16896()
{
    // event 1541_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1541_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (14))) goto event_1541_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1541_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
    }
    event_1541_76_end: ;
}
void Frames::event_func_16897()
{
    // event 1542_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1542_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (15))) goto event_1542_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(2, 1);
    }
    event_1542_76_end: ;
}
void Frames::event_func_16898()
{
    // event 1543_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1543_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (15))) goto event_1543_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(2)) > (60))) goto event_1543_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_1543_76_0; single_instance_1543_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1543_76_0 == NULL)
                    single_instance_1543_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1543_76_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1543_76_0))->set_direction(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1543_76_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        global_values->set(1, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 16);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1543_76_end: ;
}
void Frames::event_func_16899()
{
    // event 1544_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1544_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (16))) goto event_1544_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(objectbike_322_instances, default_active_instance))->get_x()+100))) goto event_1544_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
    }
    event_1544_76_end: ;
}
void Frames::event_func_16900()
{
    // event 1545_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1545_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (16))) goto event_1545_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(objectbike_322_instances, default_active_instance))->get_x()+100))) goto event_1545_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1545_76_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 17);
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
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 12);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1545_76_end: ;
}
void Frames::event_func_16901()
{
    // event 1546_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1546_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1546_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1546_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1546_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 18);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
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
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1546_76_end: ;
}
void Frames::event_func_16902()
{
    // event 1547_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1547_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) > (14))) goto event_1547_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (18))) goto event_1547_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(10, 1);
    }
    event_1547_76_end: ;
}
void Frames::event_func_16903()
{
    // event 1548_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1548_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) > (14))) goto event_1548_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(10)) > (30))) goto event_1548_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (18))) goto event_1548_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(10, 10-randrange(50));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 4);
        media.play_id(SOUND_COMMON_EXPLODE4_99, 2-1);
    }
    event_1548_76_end: ;
}
void Frames::event_func_16904()
{
    // event 1549_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1549_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (18))) goto event_1549_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1549_76_end: ;
}
void Frames::event_func_16905()
{
    // event 1550_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1550_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (18))) goto event_1550_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(objectbike_322_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1550_76_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 19);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2500_278);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1550_76_end: ;
}
void Frames::event_func_16906()
{
    // event 1551_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1551_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (19))) goto event_1551_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (3))) goto event_1551_76_end;
        if (once_condition_1551_76) goto event_1551_76_end;
        once_condition_1551_76 = true;
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 2);
        FrameObject * single_instance_1551_76_0; single_instance_1551_76_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1551_76_0 == NULL)
                    single_instance_1551_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1551_76_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_1551_76_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 10));
    }
    event_1551_76_end: ;
}
void Frames::event_func_16907()
{
    // event 1552_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1552_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (19))) goto event_1552_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 5200));
    }
    event_1552_76_end: ;
}
void Frames::event_func_16908()
{
    // event 1553_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1553_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (19))) goto event_1553_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5800))) goto event_1553_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 20);
    }
    event_1553_76_end: ;
}
void Frames::event_func_16909()
{
    // event 1554_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1554_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (20))) goto event_1554_76_end;
        if (not_always_1554_76 > loop_count) {
            not_always_1554_76 = loop_count + 2;
            goto event_1554_76_end;
        }
        not_always_1554_76 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
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
        }
    }
    event_1554_76_end: ;
}
void Frames::event_func_16910()
{
    // event 1555_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1555_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (20))) goto event_1555_76_end;
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
    event_1555_76_end: ;
}
void Frames::event_func_16911()
{
    // event 1556_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1556_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (20))) goto event_1556_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1556_76_end;
        next_frame = 20 + 0;    
    
    }
    event_1556_76_end: ;
}
void Frames::event_func_16912()
{
    // event 1557_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1)) goto event_1557_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1557_76_end;
        if (not_always_1557_76 > loop_count) {
            not_always_1557_76 = loop_count + 2;
            goto event_1557_76_end;
        }
        not_always_1557_76 = loop_count + 2;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
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
    event_1557_76_end: ;
}
void Frames::event_func_16913()
{
    // event 1558_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1)) goto event_1558_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1558_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 5580);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1700);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(5633);
            ((Active*)*it)->set_y(((Active*)get_instance(npcshellduck_533_instances))->get_y());
            ((Active*)*it)->set_visible(true);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1558_76_end: ;
}
void Frames::event_func_16914()
{
    // event 1559_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1)) goto event_1559_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1559_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1559_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 30);
            group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_rescue_torque_1) {
            group_main_engine_level_specific_methods_cutscenes_rescue_torque_1 = true;
        }
    }
    event_1559_76_end: ;
}
void Frames::event_func_16915()
{
    // event 1560_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1560_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1560_76_end;
        if (once_condition_1560_76) goto event_1560_76_end;
        once_condition_1560_76 = true;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(6);
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(3);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1560_76_end: ;
}
void Frames::event_func_16916()
{
    // event 1561_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1561_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1561_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 4360);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1700);
    }
    event_1561_76_end: ;
}
void Frames::event_func_16917()
{
    // event 1562_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1562_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1562_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1562_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 13);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1562_76_end: ;
}
void Frames::event_func_16918()
{
    // event 1563_76
    bool or_result_1563_76 = false;
    bool or_temp_result_1563_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1563_76_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1563_76_0_end;
        or_result_1563_76 = true;
        or_temp_result_1563_76_0 = true;
    }
    or_event_1563_76_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1563_76_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1563_76
    bool or_temp_result_1563_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1563_76_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1563_76_1_end;
        or_result_1563_76 = true;
        or_temp_result_1563_76_1 = true;
    }
    or_event_1563_76_1_end: ;
    if (or_temp_result_1563_76_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1563_76
    bool or_temp_result_1563_76_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1563_76_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1563_76_2_end;
        or_result_1563_76 = true;
        or_temp_result_1563_76_2 = true;
        or_event_1563_76_2_end: ;
        if (or_temp_result_1563_76_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1563_76) goto or_final_or_event_1563_76_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1563_76_0 || or_temp_result_1563_76_1 || or_temp_result_1563_76_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1563_76_2_end: ;
}
void Frames::event_func_16919()
{
    // event 1564_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1564_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1564_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (16))) goto event_1564_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1564_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1564_76_end: ;
}
void Frames::event_func_16920()
{
    // event 1565_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1565_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1565_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1565_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1565_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(7);
        FrameObject * single_instance_1565_76_0; single_instance_1565_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1565_76_0 == NULL)
                    single_instance_1565_76_0 = new_obj;
            }
        }
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
        media.play_id(SOUND_MILLA_BARRIER_2_422, -1, 1);
    }
    event_1565_76_end: ;
}
void Frames::event_func_16921()
{
    // event 1566_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1566_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1566_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1566_76_end: ;
}
void Frames::event_func_16922()
{
    // event 1567_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1567_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1567_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (30))) goto event_1567_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1567_76_end: ;
}
void Frames::event_func_16923()
{
    // event 1568_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1568_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1568_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1568_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1568_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        effectshade_356_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectshade_356(3905, 1692), 0);
            effectshade_356_instances.add_back();
        }
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-40);
        }
        media.stop_channel(20-1);
    }
    event_1568_76_end: ;
}
void Frames::event_func_16924()
{
    // event 1569_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1569_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1569_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1569_76_end: ;
}
void Frames::event_func_16925()
{
    // event 1570_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1570_76_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1570_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1570_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (50))) goto event_1570_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (75))) goto event_1570_76_end;
        FrameObject * single_instance_1570_76_0; single_instance_1570_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -256, parent->y + -78), parent->layer);
                if (single_instance_1570_76_0 == NULL)
                    single_instance_1570_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1570_76_0))->force_frame(31+randrange(5));
        ((Active*)((Active*)single_instance_1570_76_0))->set_direction(pick_random(3, 28, 29, 30));
        ((Active*)((Active*)single_instance_1570_76_0))->set_y(((Active*)single_instance_1570_76_0)->get_y()-100+randrange(100));
        ((Active*)((Active*)single_instance_1570_76_0))->get_movement()->set_speed(80);
        ((Active*)((Active*)single_instance_1570_76_0))->set_x(frame_left()-40);
    }
    event_1570_76_end: ;
}
void Frames::event_func_16926()
{
    // event 1572_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1572_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (4))) goto event_1572_76_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1572_76_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1572_76_end: ;
}
void Frames::event_func_16927()
{
    // event 1574_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1574_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1574_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1574_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
    }
    event_1574_76_end: ;
}
void Frames::event_func_16928()
{
    // event 1575_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1575_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1575_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (150))) goto event_1575_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
    }
    event_1575_76_end: ;
}
void Frames::event_func_16929()
{
    // event 1576_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1576_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1576_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1576_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1576_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(31);
    }
    event_1576_76_end: ;
}
void Frames::event_func_16930()
{
    // event 1577_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1577_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1577_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1577_76_end;
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, -1);
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1577_76_end: ;
}
void Frames::event_func_16931()
{
    // event 1578_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1578_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1578_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_scale(get_max(1.0-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)*0.04, 0.1));
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->blend_color.set_semi_transparency(get_max(128-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)*5, 0));
        }
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1578_76_0;
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1578_76_0: ;
        }
    }
    event_1578_76_end: ;
}
void Frames::event_func_16932()
{
    // event 1579_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1579_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1579_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) >= (25))) goto event_1579_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 2);
        {
            ((Active*)get_instance(bosschargeglow_1865_instances))->set_global_position(-128, 0);
            pos_end_1579_76_0: ;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(4, 0);
    }
    event_1579_76_end: ;
}
void Frames::event_func_16933()
{
    // event 1580_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1580_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1580_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(6);
    }
    event_1580_76_end: ;
}
void Frames::event_func_16934()
{
    // event 1581_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1581_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1581_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (1))) goto event_1581_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(1))) goto event_1581_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(1);
        FrameObject * single_instance_1581_76_0; single_instance_1581_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1581_76_0 == NULL)
                    single_instance_1581_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1581_76_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1581_76_0))->alterables->values.set(0, 16);
        ((Active*)((Active*)single_instance_1581_76_0))->alterables->values.set(1, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)-1)*-90+3+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)*-3*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
    }
    event_1581_76_end: ;
}
void Frames::event_func_16935()
{
    // event 1582_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1582_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1582_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) != (1))) goto event_1582_76_end;
        if (not_always_1582_76 > loop_count) {
            not_always_1582_76 = loop_count + 2;
            goto event_1582_76_end;
        }
        not_always_1582_76 = loop_count + 2;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(1);
    }
    event_1582_76_end: ;
}
