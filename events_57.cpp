#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4749()
{
    // event 1416_22
    {
        if (!(group_main_engine_1)) goto event_1416_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1416_22_end;
        if (not_always_1416_22 > loop_count) {
            not_always_1416_22 = loop_count + 2;
            goto event_1416_22_end;
        }
        not_always_1416_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1416_22_end: ;
}
void Frames::event_func_4750()
{
    // event 1417_22
    {
        if (!(group_main_engine_1)) goto event_1417_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1417_22_end;
        if (not_always_1417_22 > loop_count) {
            not_always_1417_22 = loop_count + 2;
            goto event_1417_22_end;
        }
        not_always_1417_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1417_22_end: ;
}
void Frames::event_func_4751()
{
    // event 1420_22
    {
        if (!(group_main_engine_1)) goto event_1420_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1420_22_end;
        if (not_always_1420_22 > loop_count) {
            not_always_1420_22 = loop_count + 2;
            goto event_1420_22_end;
        }
        not_always_1420_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1420_22_end: ;
}
void Frames::event_func_4752()
{
    // event 1421_22
    {
        if (!(group_main_engine_1)) goto event_1421_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1421_22_end;
        if (not_always_1421_22 > loop_count) {
            not_always_1421_22 = loop_count + 2;
            goto event_1421_22_end;
        }
        not_always_1421_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1421_22_end: ;
}
void Frames::event_func_4753()
{
    // event 1422_22
    {
        if (!(group_main_engine_1)) goto event_1422_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1422_22_end;
        if (not_always_1422_22 > loop_count) {
            not_always_1422_22 = loop_count + 2;
            goto event_1422_22_end;
        }
        not_always_1422_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1422_22_end: ;
}
void Frames::event_func_4754()
{
    // event 1423_22
    {
        if (!(group_main_engine_1)) goto event_1423_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1423_22_end;
        if (not_always_1423_22 > loop_count) {
            not_always_1423_22 = loop_count + 2;
            goto event_1423_22_end;
        }
        not_always_1423_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1423_22_end: ;
}
void Frames::event_func_4755()
{
    // event 1424_22
    {
        if (!(group_main_engine_1)) goto event_1424_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1424_22_end;
        if (not_always_1424_22 > loop_count) {
            not_always_1424_22 = loop_count + 2;
            goto event_1424_22_end;
        }
        not_always_1424_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1424_22_end: ;
}
void Frames::event_func_4756()
{
    // event 1425_22
    {
        if (!(group_main_engine_1)) goto event_1425_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1425_22_end;
        if (not_always_1425_22 > loop_count) {
            not_always_1425_22 = loop_count + 2;
            goto event_1425_22_end;
        }
        not_always_1425_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1425_22_end: ;
}
void Frames::event_func_4757()
{
    // event 1492_22
    {
        if (!(group_main_engine_1)) goto event_1492_22_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(true);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(switchdoor_735_instances))->alterables->flags.disable(3);
    }
    event_1492_22_end: ;
}
void Frames::event_func_4758()
{
    // event 1495_22
    {
        if (!(group_main_engine_1)) goto event_1495_22_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_on(0))) goto event_1495_22_end;
        if (once_condition_1495_22) goto event_1495_22_end;
        once_condition_1495_22 = true;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1495_22_end: ;
}
void Frames::event_func_4759()
{
    // event 1496_22
    {
        if (!(group_main_engine_1)) goto event_1496_22_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_on(0))) goto event_1496_22_end;
        {
            double check_value = ((Active*)get_instance(switchpressureplate_752_instances))->alterables->values.get(0);
            switchdoor_735_instances.clear_selection();
            for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (128))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1496_22_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
            ((Active*)*it)->alterables->values.add(2, 8);
        }
    }
    event_1496_22_end: ;
}
void Frames::event_func_4760()
{
    // event 1497_22
    {
        if (!(group_main_engine_1)) goto event_1497_22_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(switchdoor_735_instances))->get_x()-16))) goto event_1497_22_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(switchdoor_735_instances))->get_x()+32+16))) goto event_1497_22_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(switchdoor_735_instances))->get_y()))) goto event_1497_22_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(switchdoor_735_instances))->get_box_index(3)+32))) goto event_1497_22_end;
        ((Active*)get_instance(switchdoor_735_instances))->alterables->flags.enable(3);
    }
    event_1497_22_end: ;
}
void Frames::event_func_4761()
{
    // event 1498_22
    {
        if (!(group_main_engine_1)) goto event_1498_22_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(0))) goto event_1498_22_end;
        {
            double check_value = ((Active*)get_instance(switchpressureplate_752_instances))->alterables->values.get(0);
            switchdoor_735_instances.clear_selection();
            for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1498_22_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
            ((Active*)*it)->alterables->values.sub(2, 2);
        }
    }
    event_1498_22_end: ;
}
void Frames::event_func_4762()
{
    // event 1502_22
    bool or_result_1502_22 = false;
    bool or_temp_result_1502_22_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1502_22_0_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1502_22_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1502_22_0_end;
        or_result_1502_22 = true;
        or_temp_result_1502_22_0 = true;
    }
    or_event_1502_22_0_end: ;
    switchwallplate_814_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1502_22_0) {
        playermovementvalues_245_instances.save_selection();
        switchwallplate_814_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1502_22
    bool or_temp_result_1502_22_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1502_22_1_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1502_22_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1502_22_1_end;
        or_result_1502_22 = true;
        or_temp_result_1502_22_1 = true;
    }
    or_event_1502_22_1_end: ;
    if (or_temp_result_1502_22_1) {
        playermovementvalues_245_instances.save_selection();
        switchwallplate_814_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1502_22
    bool or_temp_result_1502_22_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1502_22_2_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1502_22_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1502_22_2_end;
        or_result_1502_22 = true;
        or_temp_result_1502_22_2 = true;
        or_event_1502_22_2_end: ;
        if (or_temp_result_1502_22_2) {
            playermovementvalues_245_instances.save_selection();
            switchwallplate_814_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1502_22) goto or_final_or_event_1502_22_2_end;
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1502_22_0 || or_temp_result_1502_22_1 || or_temp_result_1502_22_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1502_22_0 || or_temp_result_1502_22_1 || or_temp_result_1502_22_2) {
            switchwallplate_814_instances.restore_selection();
        }
        if (or_temp_result_1502_22_0 || or_temp_result_1502_22_1 || or_temp_result_1502_22_2) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1502_22_2_end: ;
}
void Frames::event_func_4763()
{
    // event 1503_22
    {
        if (!(group_main_engine_1)) goto event_1503_22_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1503_22_end;
        if (once_condition_1503_22) goto event_1503_22_end;
        once_condition_1503_22 = true;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1503_22_end: ;
}
void Frames::event_func_4764()
{
    // event 1504_22
    {
        if (!(group_main_engine_1)) goto event_1504_22_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1504_22_end;
        {
            double check_value = ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(0);
            switchtrapdoor_1054_instances.clear_selection();
            for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (90))) { it.deselect(); continue; }
        }
        if (!switchtrapdoor_1054_instances.has_selection()) goto event_1504_22_end;
        for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 5);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-5, 0);
        }
    }
    event_1504_22_end: ;
}
void Frames::event_func_4765()
{
    // event 1505_22
    {
        if (!(group_main_engine_1)) goto event_1505_22_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_off(0))) goto event_1505_22_end;
        {
            double check_value = ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(0);
            switchtrapdoor_1054_instances.clear_selection();
            for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!switchtrapdoor_1054_instances.has_selection()) goto event_1505_22_end;
        for (ObjectIterator it(switchtrapdoor_1054_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+5, 0);
            ((Active*)*it)->alterables->values.sub(2, 5);
        }
    }
    event_1505_22_end: ;
}
void Frames::event_func_4766()
{
    // event 1506_22
    {
        if (!(group_main_engine_1)) goto event_1506_22_end;
        if (!((((Active*)get_instance(switchtrapdoor_1054_instances))->alterables->values.get(2)) >= (90))) goto event_1506_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_off(2))) goto event_1506_22_end;
        if (not_always_1506_22 > loop_count) {
            not_always_1506_22 = loop_count + 2;
            goto event_1506_22_end;
        }
        not_always_1506_22 = loop_count + 2;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickboulder_1052_instances))->get_x());
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickboulder_1052_instances))->get_y());
    }
    event_1506_22_end: ;
}
void Frames::event_func_4767()
{
    // event 1507_22
    {
        if (!(group_main_engine_1)) goto event_1507_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1507_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->set_angle(0, 0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->force_direction(1);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.disable(3);
    }
    event_1507_22_end: ;
}
void Frames::event_func_4768()
{
    // event 1508_22
    {
        if (!(group_main_engine_1)) goto event_1508_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1508_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->overlaps_background())) goto event_1508_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.enable(3);
    }
    event_1508_22_end: ;
}
void Frames::event_func_4769()
{
    // event 1509_22
    {
        if (!(group_main_engine_1)) goto event_1509_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1509_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->force_direction(2);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.disable(4);
    }
    event_1509_22_end: ;
}
void Frames::event_func_4770()
{
    // event 1510_22
    {
        if (!(group_main_engine_1)) goto event_1510_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1510_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->overlaps_background())) goto event_1510_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.enable(4);
    }
    event_1510_22_end: ;
}
void Frames::event_func_4771()
{
    // event 1511_22
    {
        if (!(group_main_engine_1)) goto event_1511_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1511_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->force_direction(3);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.disable(5);
    }
    event_1511_22_end: ;
}
void Frames::event_func_4772()
{
    // event 1512_22
    {
        if (!(group_main_engine_1)) goto event_1512_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1512_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->overlaps_background())) goto event_1512_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.enable(5);
    }
    event_1512_22_end: ;
}
void Frames::event_func_4773()
{
    // event 1513_22
    {
        if (!(group_main_engine_1)) goto event_1513_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(1))) goto event_1513_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->set_x(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickboulder_1052_instances))->set_y(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.add(0, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.add(1, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3));
        ((Active*)get_instance(gimmickboulder_1052_instances))->set_angle(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(4), 0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->force_direction(0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(7, get_max(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(7)-1, 0));
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.add(4, 0-((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(2));
    }
    event_1513_22_end: ;
}
void Frames::event_func_4774()
{
    // event 1514_22
    {
        if (!(group_main_engine_1)) goto event_1514_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_off(4))) goto event_1514_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(3, get_min(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)+0.3-(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.get(2)*0.2), 12));
    }
    event_1514_22_end: ;
}
void Frames::event_func_4775()
{
    // event 1515_22
    {
        if (!(group_main_engine_1)) goto event_1515_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(4))) goto event_1515_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)) > (2))) goto event_1515_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.sub(1, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3));
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(3, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)*-0.25);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(2, 2);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1515_22_end: ;
}
void Frames::event_func_4776()
{
    // event 1516_22
    {
        if (!(group_main_engine_1)) goto event_1516_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(4))) goto event_1516_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)) >= (0))) goto event_1516_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)) <= (2))) goto event_1516_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.sub(1, 1);
    }
    event_1516_22_end: ;
}
void Frames::event_func_4777()
{
    // event 1517_22
    {
        if (!(group_main_engine_1)) goto event_1517_22_end;
        gimmickboulder_1052_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(gimmickboulder_1052_instances, qualifier_20)) goto event_1517_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_off(4))) goto event_1517_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(7)) <= (0))) goto event_1517_22_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1517_22_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)+4);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 6+get_abs(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(3)/math_helper/5));
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(7, 4);
    }
    event_1517_22_end: ;
}
void Frames::event_func_4778()
{
    // event 1518_22
    {
        if (!(group_main_engine_1)) goto event_1518_22_end;
        gimmickboulder_1052_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickboulder_1052_instances, gimmickbridgelog_412_instances)) goto event_1518_22_end;
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(gimmickboulder_1052_instances, gimmickbridge12logs_353_instances)) goto event_1518_22_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1518_22_end: ;
}
void Frames::event_func_4779()
{
    // event 1519_22
    {
        if (!(group_main_engine_1)) goto event_1519_22_end;
        gimmickbridge12logs_353_instances.clear_selection();
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!gimmickbridge12logs_353_instances.has_selection()) goto event_1519_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->get_x()) > (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(0)))) goto event_1519_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->get_x()) < (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(2)))) goto event_1519_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->get_y()) > ((((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(3)+((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(1))/math_helper/2-40))) goto event_1519_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->get_y()) < ((((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(3)+((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(1))/math_helper/2))) goto event_1519_22_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1519_22_end: ;
}
void Frames::event_func_4780()
{
    // event 1520_22
    {
        if (!(group_main_engine_1)) goto event_1520_22_end;
        gimmickbridge12logs_353_instances.clear_selection();
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gimmickbridge12logs_353_instances.has_selection()) goto event_1520_22_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(0)-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(2)+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->get_box_index(3)))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1520_22_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1520_22_end: ;
}
void Frames::event_func_4781()
{
    // event 1521_22
    {
        if (!(group_main_engine_1)) goto event_1521_22_end;
        gimmickbridge12logs_353_instances.clear_selection();
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gimmickbridge12logs_353_instances.has_selection()) goto event_1521_22_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1521_22_end: ;
}
void Frames::event_func_4782()
{
    // event 1522_22
    {
        if (!(group_main_engine_1)) goto event_1522_22_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1522_22_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(7, get_max(0, ((Active*)*it)->alterables->values.get(6)));
            ((Active*)*it)->alterables->values.add(6, 0.3);
        }
    }
    event_1522_22_end: ;
}
void Frames::event_func_4783()
{
    // event 1523_22
    {
        if (!(group_main_engine_1)) goto event_1523_22_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1523_22_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1523_22_end: ;
}
void Frames::event_func_4784()
{
    // event 1524_22
    {
        if (!(group_main_engine_1)) goto event_1524_22_end;
        if (!((((Active*)get_instance(gimmickboulder_1052_instances))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1524_22_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1524_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_off(2))) goto event_1524_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.enable(2);
        FrameObject * single_instance_1524_22_0; single_instance_1524_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1524_22_0 == NULL)
                    single_instance_1524_22_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        ((Active*)((Active*)single_instance_1524_22_0))->set_x(((Active*)get_instance(gimmickboulder_1052_instances))->get_x());
        ((Active*)((Active*)single_instance_1524_22_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(3, 0);
        ((Active*)((Active*)single_instance_1524_22_0))->set_x_scale(2);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(2, ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.get(2)*0.5);
    }
    event_1524_22_end: ;
}
void Frames::event_func_4785()
{
    // event 1525_22
    {
        if (!(group_main_engine_1)) goto event_1525_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(2))) goto event_1525_22_end;
        if (!(((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.is_on(4))) goto event_1525_22_end;
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(gimmickboulder_1052_instances))->alterables->flags.disable(1);
    }
    event_1525_22_end: ;
}
void Frames::event_func_4786()
{
    // event 1527_22
    {
        if (!(group_main_engine_1)) goto event_1527_22_end;
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->layer->index+1);
            ((Active*)*it)->set_layer(((Active*)get_instance(playersensortopbig_395_instances))->layer->index+1-1);
        }
    }
    event_1527_22_end: ;
}
void Frames::event_func_4787()
{
    // event 1528_22
    {
        if (!(group_main_engine_1)) goto event_1528_22_end;
        playersensortopbig_395_instances.clear_selection();
        waterfallfront_1061_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, waterfallfront_1061_instances)) goto event_1528_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (5))) goto event_1528_22_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1528_22_end;
        FrameObject * single_instance_1528_22_0; single_instance_1528_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1528_22_0 == NULL)
                    single_instance_1528_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1528_22_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1528_22_0))->alterables->values.set(0, -8+randrange(17));
        ((Active*)((Active*)single_instance_1528_22_0))->alterables->values.set(1, -32+randrange(4));
    }
    event_1528_22_end: ;
}
void Frames::event_func_4788()
{
    // event 1529_22
    {
        if (!(group_main_engine_1)) goto event_1529_22_end;
        playersensortopbig_395_instances.clear_selection();
        waterfallfront_1061_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, waterfallfront_1061_instances)) goto event_1529_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (5))) goto event_1529_22_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1529_22_end;
        FrameObject * single_instance_1529_22_0; single_instance_1529_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1529_22_0 == NULL)
                    single_instance_1529_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1529_22_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1529_22_0))->alterables->values.set(0, -8+randrange(17));
        ((Active*)((Active*)single_instance_1529_22_0))->alterables->values.set(1, -16+randrange(4));
    }
    event_1529_22_end: ;
}
void Frames::event_func_4789()
{
    // event 1530_22
    {
        if (!(group_main_engine_1)) goto event_1530_22_end;
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(0)-1);
        }
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/6)%math_helper%8);
        }
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((global_values->get(3)+3)/math_helper/6)%math_helper%8);
        }
        waterfallfront2_1035_instances.clear_selection();
        for (ObjectIterator it(waterfallfront2_1035_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
        waterfallfront3_1036_instances.clear_selection();
        for (ObjectIterator it(waterfallfront3_1036_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
        waterfallfront4_1062_instances.clear_selection();
        for (ObjectIterator it(waterfallfront4_1062_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
    }
    event_1530_22_end: ;
}
void Frames::event_func_4790()
{
    // event 1531_22
    {
        if (!(group_main_engine_1)) goto event_1531_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!waterfalllog_1013_instances.has_selection()) goto event_1531_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(1, 1.5);
        }
    }
    event_1531_22_end: ;
}
void Frames::event_func_4791()
{
    // event 1532_22
    {
        if (!(group_main_engine_1)) goto event_1532_22_end;
        waterfallloggenerator_1037_instances.clear_selection();
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()+160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-160))) { it.deselect(); continue; }
        }
        if (!waterfallloggenerator_1037_instances.has_selection()) goto event_1532_22_end;
        {
            loop_waterfalllog_running = true;
            int times = int(1);
            loop_waterfalllog_index = 0;
            while (loop_waterfalllog_index < times) {
                loop_waterfalllog_22();
                if (!loop_waterfalllog_running) break;
                loop_waterfalllog_index++;
            }
        }
    }
    event_1532_22_end: ;
}
void Frames::event_func_4792()
{
    // event 1545_22
    {
        if (!(group_main_engine_1)) goto event_1545_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1545_22_end;
        {
            loop_trunk_running = true;
            int times = int(1);
            loop_trunk_index = 0;
            while (loop_trunk_index < times) {
                loop_trunk_22();
                if (!loop_trunk_running) break;
                loop_trunk_index++;
            }
        }
    }
    event_1545_22_end: ;
}
void Frames::event_func_4793()
{
    // event 1549_22
    {
        if (!(group_main_engine_1)) goto event_1549_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1549_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_1549_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1549_22_end: ;
}
void Frames::event_func_4794()
{
    // event 1550_22
    {
        if (!(group_main_engine_1)) goto event_1550_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1550_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1550_22_end;
        playersensorleftbig_391_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, treetrunk_1034_instances)) goto event_1550_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1550_22_end: ;
}
void Frames::event_func_4795()
{
    // event 1551_22
    {
        if (!(group_main_engine_1)) goto event_1551_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1551_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1551_22_end;
        playersensorrightbig_393_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, treetrunk_1034_instances)) goto event_1551_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1551_22_end: ;
}
void Frames::event_func_4796()
{
    // event 1552_22
    {
        if (!(group_main_engine_1)) goto event_1552_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1552_22_end;
        playersensorleftbig_391_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, treetrunk_1034_instances)) goto event_1552_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1552_22_end: ;
}
void Frames::event_func_4797()
{
    // event 1553_22
    {
        if (!(group_main_engine_1)) goto event_1553_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1553_22_end;
        playersensorrightbig_393_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, treetrunk_1034_instances)) goto event_1553_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1553_22_end: ;
}
void Frames::event_func_4798()
{
    // event 1554_22
    {
        if (!(group_main_engine_1)) goto event_1554_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1554_22_end;
        playersensorleftbig_391_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, treetrunk_1034_instances)) goto event_1554_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1554_22_end: ;
}
void Frames::event_func_4799()
{
    // event 1555_22
    {
        if (!(group_main_engine_1)) goto event_1555_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1555_22_end;
        playersensorrightbig_393_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, treetrunk_1034_instances)) goto event_1555_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
    }
    event_1555_22_end: ;
}
void Frames::event_func_4800()
{
    // event 1566_22
    {
        if (!(group_main_engine_1)) goto event_1566_22_end;
        gimmickbamboospike2_1057_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike2_1057_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickbamboospike_1017_instances, it.current_index));
            if (parent == NULL) goto pos_end_1566_22_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1566_22_0: ;
        }
        gimmickbamboospike3_1056_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike3_1056_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickbamboospike_1017_instances, it.current_index));
            if (parent == NULL) goto pos_end_1566_22_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1566_22_1: ;
        }
        for (ObjectIterator it(gimmickbamboospike3_1056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-((Active*)get_instance(gimmickbamboospike_1017_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2)*((Active*)*it)->alterables->values.get(3), 0);
        }
        gimmickbamboospike4_1058_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike4_1058_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickbamboospike3_1056_instances, it.current_index));
            if (parent == NULL) goto pos_end_1566_22_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1566_22_2: ;
        }
    }
    event_1566_22_end: ;
}
void Frames::event_func_4801()
{
    // event 1567_22
    {
        if (!(group_main_engine_1)) goto event_1567_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1567_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1567_22_end;
        playercharactersensor_383_instances.clear_selection();
        gimmickbamboospike2_1057_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, gimmickbamboospike2_1057_instances)) goto event_1567_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1567_22_end: ;
}
void Frames::event_func_4802()
{
    // event 1568_22
    bool or_result_1568_22 = false;
    bool or_temp_result_1568_22_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1568_22_0_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto or_event_1568_22_0_end;
        or_result_1568_22 = true;
        or_temp_result_1568_22_0 = true;
    }
    or_event_1568_22_0_end: ;
    gimmickbamboospike_1017_instances.clear_saved_selection();
    if (or_temp_result_1568_22_0) {
        gimmickbamboospike_1017_instances.save_selection();
    }
    // event 1568_22
    bool or_temp_result_1568_22_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1568_22_1_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto or_event_1568_22_1_end;
        or_result_1568_22 = true;
        or_temp_result_1568_22_1 = true;
        or_event_1568_22_1_end: ;
        if (or_temp_result_1568_22_1) {
            gimmickbamboospike_1017_instances.save_selection();
        }
        if (!or_result_1568_22) goto or_final_or_event_1568_22_1_end;
        gimmickbamboospike_1017_instances.empty_selection();
        if (or_temp_result_1568_22_0 || or_temp_result_1568_22_1) {
            gimmickbamboospike_1017_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    or_final_or_event_1568_22_1_end: ;
}
void Frames::event_func_4803()
{
    // event 1569_22
    bool or_result_1569_22 = false;
    bool or_temp_result_1569_22_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1569_22_0_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto or_event_1569_22_0_end;
        or_result_1569_22 = true;
        or_temp_result_1569_22_0 = true;
    }
    or_event_1569_22_0_end: ;
    gimmickbamboospike_1017_instances.clear_saved_selection();
    if (or_temp_result_1569_22_0) {
        gimmickbamboospike_1017_instances.save_selection();
    }
    // event 1569_22
    bool or_temp_result_1569_22_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1569_22_1_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto or_event_1569_22_1_end;
        or_result_1569_22 = true;
        or_temp_result_1569_22_1 = true;
        or_event_1569_22_1_end: ;
        if (or_temp_result_1569_22_1) {
            gimmickbamboospike_1017_instances.save_selection();
        }
        if (!or_result_1569_22) goto or_final_or_event_1569_22_1_end;
        gimmickbamboospike_1017_instances.empty_selection();
        if (or_temp_result_1569_22_0 || or_temp_result_1569_22_1) {
            gimmickbamboospike_1017_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    or_final_or_event_1569_22_1_end: ;
}
void Frames::event_func_4804()
{
    // event 1570_22
    {
        if (!(group_main_engine_1)) goto event_1570_22_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto event_1570_22_end;
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 5);
        }
    }
    event_1570_22_end: ;
}
void Frames::event_func_4805()
{
    // event 1571_22
    {
        if (!(group_main_engine_1)) goto event_1571_22_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (70))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto event_1571_22_end;
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1571_22_end: ;
}
void Frames::event_func_4806()
{
    // event 1572_22
    {
        if (!(group_main_engine_1)) goto event_1572_22_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto event_1572_22_end;
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, -5);
        }
    }
    event_1572_22_end: ;
}
void Frames::event_func_4807()
{
    // event 1573_22
    {
        if (!(group_main_engine_1)) goto event_1573_22_end;
        gimmickbamboospike_1017_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickbamboospike_1017_instances.has_selection()) goto event_1573_22_end;
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)*-1);
        }
    }
    event_1573_22_end: ;
}
void Frames::event_func_4808()
{
    // event 1726_22
    {
        if (!(group_main_engine_1)) goto event_1726_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8100))) goto event_1726_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1726_22_end;
        if (!((global_values->get(4)) != (2))) goto event_1726_22_end;
        global_values->set(4, 2);
        global_values->set(5, 7720);
        global_values->set(6, 2535);
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
    event_1726_22_end: ;
}
void Frames::event_func_4809()
{
    // event 1727_22
    {
        if (!(group_main_engine_1)) goto event_1727_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1727_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1727_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1727_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1727_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1727_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1727_22_end;
        playercharactersensor_383_instances.clear_selection();
        minibosstreddleft1_1051_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, minibosstreddleft1_1051_instances)) goto event_1727_22_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_y()) < (((Active*)get_single(minibosstreddleft1_1051_instances, default_active_instance))->get_y()+8))) goto event_1727_22_end;
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1727_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1727_22_end: ;
}
void Frames::event_func_4810()
{
    // event 1728_22
    {
        if (!(group_main_engine_1)) goto event_1728_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1728_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1728_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1728_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1728_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1728_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1728_22_end;
        playercharactersensor_383_instances.clear_selection();
        minibosstreddright1_1045_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, minibosstreddright1_1045_instances)) goto event_1728_22_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_y()) < (((Active*)get_single(minibosstreddright1_1045_instances, default_active_instance))->get_y()+8))) goto event_1728_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1728_22_end;
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright1_1045_instances.has_selection()) goto event_1728_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1728_22_end: ;
}
void Frames::event_func_4811()
{
    // event 1729_22
    {
        if (!(group_main_engine_1)) goto event_1729_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1729_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1729_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1729_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1729_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1729_22_end;
        playercharactersensor_383_instances.clear_selection();
        minibosstreddleft3_1050_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, minibosstreddleft3_1050_instances)) goto event_1729_22_end;
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (274))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (285))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft3_1050_instances.has_selection()) goto event_1729_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1729_22_end: ;
}
void Frames::event_func_4812()
{
    // event 1730_22
    {
        if (!(group_main_engine_1)) goto event_1730_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1730_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1730_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1730_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1730_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1730_22_end;
        playercharactersensor_383_instances.clear_selection();
        minibosstreddright3_1043_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, minibosstreddright3_1043_instances)) goto event_1730_22_end;
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (274))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (285))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright3_1043_instances.has_selection()) goto event_1730_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1730_22_end: ;
}
void Frames::event_func_4813()
{
    // event 1731_22
    {
        if (!(group_main_engine_1)) goto event_1731_22_end;
        minibosstreddleft3_1050_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(minibosstreddleft3_1050_instances, breakablerock_951_instances)) goto event_1731_22_end;
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (274))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (285))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft3_1050_instances.has_selection()) goto event_1731_22_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1731_22_end: ;
}
void Frames::event_func_4814()
{
    // event 1732_22
    {
        if (!(group_main_engine_1)) goto event_1732_22_end;
        minibosstreddright3_1043_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(minibosstreddright3_1043_instances, breakablerock_951_instances)) goto event_1732_22_end;
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (274))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (285))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright3_1043_instances.has_selection()) goto event_1732_22_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1732_22_end: ;
}
void Frames::event_func_4815()
{
    // event 1733_22
    {
        if (!(group_main_engine_1)) goto event_1733_22_end;
            group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = false;
    
            group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = false;
    
    }
    event_1733_22_end: ;
}
void Frames::event_func_4816()
{
    // event 1734_22
    {
        if (!(group_main_engine_1)) goto event_1734_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1734_22_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = true;
        }
        if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = true;
        }
    }
    event_1734_22_end: ;
}
void Frames::event_func_4817()
{
    // event 1735_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1735_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (80))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1735_22_end;
        if (once_condition_1735_22) goto event_1735_22_end;
        once_condition_1735_22 = true;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 230);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1735_22_end: ;
}
void Frames::event_func_4818()
{
    // event 1736_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1736_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1736_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1736_22_end: ;
}
void Frames::event_func_4819()
{
    // event 1737_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1737_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1737_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1737_22_end: ;
}
void Frames::event_func_4820()
{
    // event 1738_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1738_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((0-(sin_deg((((Active*)*it)->alterables->values.get(7))*0.5)*math_helper*8)+1)*math_helper*4-0.5));
            ((Active*)*it)->alterables->values.set(3, (0-sin_deg(((Active*)*it)->alterables->values.get(7))*math_helper*4)+(cos_deg(((Active*)*it)->alterables->values.get(7)+70)*math_helper*40));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*((Active*)*it)->alterables->values.get(9)*1.76);
            ((Active*)*it)->alterables->values.set(6, (0.88-get_abs(((Active*)*it)->alterables->values.get(5)))*((Active*)*it)->alterables->values.get(9)*2.2);
        }
    }
    event_1738_22_end: ;
}
void Frames::event_func_4821()
{
    // event 1739_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1739_22_end;
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(5)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+32+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+64+get_min(0, ((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1)*2));
        }
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+8+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)-8+((Active*)get_instance(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(3)*16);
        }
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+32+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+64+get_min(0, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1)*2));
        }
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+8+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(4)-8+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(1, 1+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*0.5));
        }
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(1, 1+((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(3)*0.5));
        }
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)get_single(minibosstredd_1044_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
    }
    event_1739_22_end: ;
}
void Frames::event_func_4822()
{
    // event 1740_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1740_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (284))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1740_22_end;
        media.play_id(SOUND_TREDDSTEP_52, -1, 1);
    }
    event_1740_22_end: ;
}
void Frames::event_func_4823()
{
    // event 1741_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1741_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (284))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1741_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1741_22_end: ;
}
void Frames::event_func_4824()
{
    // event 1742_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1742_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (340))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1742_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 140);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1742_22_end: ;
}
void Frames::event_func_4825()
{
    // event 1743_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1743_22_end;
        minibosstredd_1044_instances.clear_selection();
        if (!check_not_overlap(minibosstredd_1044_instances, enemytreddpushleft_1060_instances)) goto event_1743_22_end;
        if (!check_not_overlap(minibosstredd_1044_instances, enemytreddpushleft2_1059_instances)) goto event_1743_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1743_22_end: ;
}
void Frames::event_func_4826()
{
    // event 1744_22
    bool or_result_1744_22 = false;
    bool or_temp_result_1744_22_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto or_event_1744_22_0_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto or_event_1744_22_0_end;
        enemytreddpushleft_1060_instances.clear_selection();
        if (!check_overlap(minibosstredd_1044_instances, enemytreddpushleft_1060_instances)) goto or_event_1744_22_0_end;
        or_result_1744_22 = true;
        or_temp_result_1744_22_0 = true;
    }
    or_event_1744_22_0_end: ;
    minibosstredd_1044_instances.clear_saved_selection();
    enemytreddpushleft_1060_instances.clear_saved_selection();
    if (or_temp_result_1744_22_0) {
        minibosstredd_1044_instances.save_selection();
        enemytreddpushleft_1060_instances.save_selection();
    }
    // event 1744_22
    bool or_temp_result_1744_22_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto or_event_1744_22_1_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto or_event_1744_22_1_end;
        enemytreddpushleft2_1059_instances.clear_selection();
        if (!check_overlap(minibosstredd_1044_instances, enemytreddpushleft2_1059_instances)) goto or_event_1744_22_1_end;
        or_result_1744_22 = true;
        or_temp_result_1744_22_1 = true;
        or_event_1744_22_1_end: ;
        enemytreddpushleft2_1059_instances.clear_saved_selection();
        if (or_temp_result_1744_22_1) {
            minibosstredd_1044_instances.save_selection();
            enemytreddpushleft2_1059_instances.save_selection();
        }
        if (!or_result_1744_22) goto or_final_or_event_1744_22_1_end;
        enemytreddpushleft_1060_instances.clear_selection();
        enemytreddpushleft2_1059_instances.clear_selection();
        minibosstredd_1044_instances.clear_selection();
        if (or_temp_result_1744_22_0 || or_temp_result_1744_22_1) {
            minibosstredd_1044_instances.restore_selection();
        }
        if (or_temp_result_1744_22_1) {
            enemytreddpushleft2_1059_instances.restore_selection();
        }
        if (or_temp_result_1744_22_0) {
            enemytreddpushleft_1060_instances.restore_selection();
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    or_final_or_event_1744_22_1_end: ;
}
void Frames::event_func_4827()
{
    // event 1745_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1745_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (202))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1745_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)*-1);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1745_22_end: ;
}
void Frames::event_func_4828()
{
    // event 1746_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1746_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1746_22_end;
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1746_22_end: ;
}
void Frames::event_func_4829()
{
    // event 1747_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1747_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1747_22_end;
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1747_22_end: ;
}
void Frames::event_func_4830()
{
    // event 1748_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1)) goto event_1748_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1748_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1.5);
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(6)*(0.88*2));
        }
    }
    event_1748_22_end: ;
}
void Frames::event_func_4831()
{
    // event 1749_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1749_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) != (150))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1749_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1749_22_end: ;
}
void Frames::event_func_4832()
{
    // event 1750_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1750_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (140))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1750_22_end;
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1750_22_end: ;
}
void Frames::event_func_4833()
{
    // event 1751_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1751_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (140))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1751_22_end;
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1751_22_end: ;
}
void Frames::event_func_4834()
{
    // event 1752_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1752_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (200))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1752_22_end;
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1752_22_end: ;
}
void Frames::event_func_4835()
{
    // event 1753_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1753_22_end;
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (200))) { it.deselect(); continue; }
        }
        if (!minibosstreddright1_1045_instances.has_selection()) goto event_1753_22_end;
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1753_22_end: ;
}
void Frames::event_func_4836()
{
    // event 1754_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1754_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (280))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1754_22_end;
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1754_22_end: ;
}
void Frames::event_func_4837()
{
    // event 1755_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1755_22_end;
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (280))) { it.deselect(); continue; }
        }
        if (!minibosstreddright1_1045_instances.has_selection()) goto event_1755_22_end;
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1755_22_end: ;
}
void Frames::event_func_4838()
{
    // event 1756_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1756_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (300))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1756_22_end;
        FrameObject * single_instance_1756_22_0; single_instance_1756_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstredd_1044_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1756_22_0 == NULL)
                    single_instance_1756_22_0 = new_obj;
            }
        }
        ((Active*)single_instance_1756_22_0)->move_back(((Active*)get_single(minibosstredd_1044_instances)));
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1756_22_end: ;
}
void Frames::event_func_4839()
{
    // event 1757_22
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1)) goto event_1757_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (300))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (300))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1757_22_end;
        FrameObject * single_instance_1757_22_0; single_instance_1757_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstredd_1044_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1757_22_0 == NULL)
                    single_instance_1757_22_0 = new_obj;
            }
        }
        ((Active*)single_instance_1757_22_0)->move_back(((Active*)get_single(minibosstredd_1044_instances)));
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1757_22_end: ;
}
void Frames::event_func_4840()
{
    // event 1758_22
    {
        if (!(group_main_engine_1)) goto event_1758_22_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1758_22_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1758_22_end: ;
}
void Frames::event_func_4841()
{
    // event 1759_22
    {
        if (!(group_main_engine_1)) goto event_1759_22_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.3, 12));
        }
    }
    event_1759_22_end: ;
}
void Frames::event_func_4842()
{
    // event 1762_22
    {
        if (!(group_main_engine_1)) goto event_1762_22_end;
        if (!((minibosstreddleft1_1051_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1762_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        FrameObject * single_instance_1762_22_0; single_instance_1762_22_0 = pick_random(minibosstreddleft1_1051_instances);
        if (single_instance_1762_22_0 == NULL) goto event_1762_22_end;
        ((Active*)((Active*)single_instance_1762_22_0))->destroy();
    }
    event_1762_22_end: ;
}
void Frames::event_func_4843()
{
    // event 1763_22
    {
        if (!(group_main_engine_1)) goto event_1763_22_end;
        if (!((minibosstreddleft2_1049_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1763_22_end;
        minibosstreddleft2_1049_instances.clear_selection();
        FrameObject * single_instance_1763_22_0; single_instance_1763_22_0 = pick_random(minibosstreddleft2_1049_instances);
        if (single_instance_1763_22_0 == NULL) goto event_1763_22_end;
        ((Active*)((Active*)single_instance_1763_22_0))->destroy();
    }
    event_1763_22_end: ;
}
void Frames::event_func_4844()
{
    // event 1764_22
    {
        if (!(group_main_engine_1)) goto event_1764_22_end;
        if (!((minibosstreddleft3_1050_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1764_22_end;
        minibosstreddleft3_1050_instances.clear_selection();
        FrameObject * single_instance_1764_22_0; single_instance_1764_22_0 = pick_random(minibosstreddleft3_1050_instances);
        if (single_instance_1764_22_0 == NULL) goto event_1764_22_end;
        ((Active*)((Active*)single_instance_1764_22_0))->destroy();
    }
    event_1764_22_end: ;
}
void Frames::event_func_4845()
{
    // event 1765_22
    {
        if (!(group_main_engine_1)) goto event_1765_22_end;
        if (!((minibosstreddleft4_1047_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1765_22_end;
        minibosstreddleft4_1047_instances.clear_selection();
        FrameObject * single_instance_1765_22_0; single_instance_1765_22_0 = pick_random(minibosstreddleft4_1047_instances);
        if (single_instance_1765_22_0 == NULL) goto event_1765_22_end;
        ((Active*)((Active*)single_instance_1765_22_0))->destroy();
    }
    event_1765_22_end: ;
}
void Frames::event_func_4846()
{
    // event 1766_22
    {
        if (!(group_main_engine_1)) goto event_1766_22_end;
        if (!((minibosstreddleft5_1048_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1766_22_end;
        minibosstreddleft5_1048_instances.clear_selection();
        FrameObject * single_instance_1766_22_0; single_instance_1766_22_0 = pick_random(minibosstreddleft5_1048_instances);
        if (single_instance_1766_22_0 == NULL) goto event_1766_22_end;
        ((Active*)((Active*)single_instance_1766_22_0))->destroy();
    }
    event_1766_22_end: ;
}
void Frames::event_func_4847()
{
    // event 1767_22
    {
        if (!(group_main_engine_1)) goto event_1767_22_end;
        if (!((minibosstreddleft6_1046_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1767_22_end;
        minibosstreddleft6_1046_instances.clear_selection();
        FrameObject * single_instance_1767_22_0; single_instance_1767_22_0 = pick_random(minibosstreddleft6_1046_instances);
        if (single_instance_1767_22_0 == NULL) goto event_1767_22_end;
        ((Active*)((Active*)single_instance_1767_22_0))->destroy();
    }
    event_1767_22_end: ;
}
void Frames::event_func_4848()
{
    // event 1768_22
    {
        if (!(group_main_engine_1)) goto event_1768_22_end;
        if (!((minibosstreddright1_1045_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1768_22_end;
        minibosstreddright1_1045_instances.clear_selection();
        FrameObject * single_instance_1768_22_0; single_instance_1768_22_0 = pick_random(minibosstreddright1_1045_instances);
        if (single_instance_1768_22_0 == NULL) goto event_1768_22_end;
        ((Active*)((Active*)single_instance_1768_22_0))->destroy();
    }
    event_1768_22_end: ;
}
