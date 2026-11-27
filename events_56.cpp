#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4712()
{
    // event 1808_22
    {
        if (!(group_main_engine_1)) goto event_1808_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) == (105))) goto event_1808_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_animation(11);
    }
    event_1808_22_end: ;
}
void Frames::event_func_4713()
{
    // event 1813_22
    {
        if (!(group_main_engine_1)) goto event_1813_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) >= (130))) goto event_1813_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) < (140))) goto event_1813_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->get_x()) > (((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(2)-96))) goto event_1813_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_x(((Active*)get_instance(bossserpentinehead_948_instances))->get_x()+2);
    }
    event_1813_22_end: ;
}
void Frames::event_func_4714()
{
    // event 1814_22
    {
        if (!(group_main_engine_1)) goto event_1814_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) >= (130))) goto event_1814_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) < (140))) goto event_1814_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->get_x()) <= (((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(2)-96))) goto event_1814_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_x(((Active*)get_instance(bossserpentinehead_948_instances))->get_x()-2);
    }
    event_1814_22_end: ;
}
void Frames::event_func_4715()
{
    // event 1815_22
    {
        if (!(group_main_engine_1)) goto event_1815_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) == (140))) goto event_1815_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_frame(1);
    }
    event_1815_22_end: ;
}
void Frames::event_func_4716()
{
    // event 1816_22
    {
        if (!(group_main_engine_1)) goto event_1816_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) == (150))) goto event_1816_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_animation(9);
        ((Active*)get_instance(bossserpentinehead_948_instances))->restore_frame();
        ((Active*)get_instance(bossserpentinehead_948_instances))->start_animation();
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1816_22_end: ;
}
void Frames::event_func_4717()
{
    // event 1817_22
    {
        if (!(group_main_engine_1)) goto event_1817_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) >= (170))) goto event_1817_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_visible(false);
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->flags.toggle(1);
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1817_22_end: ;
}
void Frames::loop_waterfall_snake_22()
{
    event_func_4706();
    event_func_4707();
    event_func_4708();
    event_func_4709();
    event_func_4710();
    event_func_4711();
    event_func_4712();
    event_func_4713();
    event_func_4714();
    event_func_4715();
    event_func_4716();
    event_func_4717();
}
void Frames::event_func_4718()
{
    // event 1534_22
    {
        if (!(group_main_engine_1)) goto event_1534_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+get_max((((Active*)*it)->alterables->values.get(1)-1.5)*-1, 0));
        }
        waterfallloggenerator_1037_instances.clear_selection();
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1534_22_end: ;
}
void Frames::event_func_4719()
{
    // event 1535_22
    {
        if (!(group_main_engine_1)) goto event_1535_22_end;
        waterfallloggenerator_1037_instances.clear_selection();
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (100))) { it.deselect(); continue; }
        }
        if (!waterfallloggenerator_1037_instances.has_selection()) goto event_1535_22_end;
        FrameObject * single_instance_1535_22_0; single_instance_1535_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(waterfallloggenerator_1037_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_waterfalllog_1013(parent->x + -64, parent->y + 0), parent->layer);
                if (single_instance_1535_22_0 == NULL)
                    single_instance_1535_22_0 = new_obj;
            }
        }
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1535_22_end: ;
}
void Frames::event_func_4720()
{
    // event 1536_22
    {
        if (!(group_main_engine_1)) goto event_1536_22_end;
        waterfallloggenerator_1037_instances.clear_selection();
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (200))) { it.deselect(); continue; }
        }
        if (!waterfallloggenerator_1037_instances.has_selection()) goto event_1536_22_end;
        FrameObject * single_instance_1536_22_0; single_instance_1536_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(waterfallloggenerator_1037_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_waterfalllog_1013(parent->x + 64, parent->y + 0), parent->layer);
                if (single_instance_1536_22_0 == NULL)
                    single_instance_1536_22_0 = new_obj;
            }
        }
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1536_22_end: ;
}
void Frames::event_func_4721()
{
    // event 1537_22
    {
        if (!(group_main_engine_1)) goto event_1537_22_end;
        waterfallloggenerator_1037_instances.clear_selection();
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (300))) { it.deselect(); continue; }
        }
        if (!waterfallloggenerator_1037_instances.has_selection()) goto event_1537_22_end;
        FrameObject * single_instance_1537_22_0; single_instance_1537_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(waterfallloggenerator_1037_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_waterfalllog_1013(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1537_22_0 == NULL)
                    single_instance_1537_22_0 = new_obj;
            }
        }
        for (ObjectIterator it(waterfallloggenerator_1037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1537_22_end: ;
}
void Frames::event_func_4722()
{
    // event 1538_22
    {
        if (!(group_main_engine_1)) goto event_1538_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!waterfalllog_1013_instances.has_selection()) goto event_1538_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -0.4);
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(3)-2-1);
            ((Active*)*it)->alterables->values.add(4, 0.4);
        }
    }
    event_1538_22_end: ;
}
void Frames::event_func_4723()
{
    // event 1539_22
    {
        if (!(group_main_engine_1)) goto event_1539_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (24))) { it.deselect(); continue; }
        }
        if (!waterfalllog_1013_instances.has_selection()) goto event_1539_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(3)-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1539_22_end: ;
}
void Frames::event_func_4724()
{
    // event 1540_22
    {
        if (!(group_main_engine_1)) goto event_1540_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!waterfalllog_1013_instances.has_selection()) goto event_1540_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.05, 1.2));
        }
    }
    event_1540_22_end: ;
}
void Frames::event_func_4725()
{
    // event 1541_22
    {
        if (!(group_main_engine_1)) goto event_1541_22_end;
        waterfalllog_1013_instances.clear_selection();
        waterfallfront3_1036_instances.clear_selection();
        if (!check_overlap(waterfalllog_1013_instances, waterfallfront3_1036_instances)) goto event_1541_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1541_22_end: ;
}
void Frames::event_func_4726()
{
    // event 1542_22
    {
        if (!(group_main_engine_1)) goto event_1542_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!waterfalllog_1013_instances.has_selection()) goto event_1542_22_end;
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1542_22_end: ;
}
void Frames::event_func_4727()
{
    // event 1543_22
    {
        if (!(group_main_engine_1)) goto event_1543_22_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1543_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1543_22_end: ;
}
void Frames::loop_waterfalllog_22()
{
    event_func_4718();
    event_func_4719();
    event_func_4720();
    event_func_4721();
    event_func_4722();
    event_func_4723();
    event_func_4724();
    event_func_4725();
    event_func_4726();
    event_func_4727();
}
void Frames::event_func_4728()
{
    // event 1546_22
    {
        if (!(group_main_engine_1)) goto event_1546_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1546_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*-1, 0);
            ((Active*)*it)->alterables->values.set(0, get_max(-90, get_min(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1), 90)));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1546_22_end: ;
}
void Frames::event_func_4729()
{
    // event 1547_22
    {
        if (!(group_main_engine_1)) goto event_1547_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1547_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*-1, 0);
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1), 90));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1547_22_end: ;
}
void Frames::event_func_4730()
{
    // event 1548_22
    {
        if (!(group_main_engine_1)) goto event_1548_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0.2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-0.2))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1548_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1548_22_end: ;
}
void Frames::event_func_4731()
{
    // event 1556_22
    {
        if (!(group_main_engine_1)) goto event_1556_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (15))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1556_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-0.2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*0.95);
        }
    }
    event_1556_22_end: ;
}
void Frames::event_func_4732()
{
    // event 1557_22
    {
        if (!(group_main_engine_1)) goto event_1557_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (-15))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1557_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+0.2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*0.95);
        }
    }
    event_1557_22_end: ;
}
void Frames::event_func_4733()
{
    // event 1558_22
    {
        if (!(group_main_engine_1)) goto event_1558_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (15))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1558_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+0.1);
        }
    }
    event_1558_22_end: ;
}
void Frames::event_func_4734()
{
    // event 1559_22
    {
        if (!(group_main_engine_1)) goto event_1559_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-15))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1559_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-0.1);
        }
    }
    event_1559_22_end: ;
}
void Frames::event_func_4735()
{
    // event 1560_22
    {
        if (!(group_main_engine_1)) goto event_1560_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1560_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32);
        }
    }
    event_1560_22_end: ;
}
void Frames::event_func_4736()
{
    // event 1561_22
    {
        if (!(group_main_engine_1)) goto event_1561_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1561_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+32);
        }
    }
    event_1561_22_end: ;
}
void Frames::event_func_4737()
{
    // event 1562_22
    bool or_result_1562_22 = false;
    bool or_temp_result_1562_22_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1562_22_0_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto or_event_1562_22_0_end;
        or_result_1562_22 = true;
        or_temp_result_1562_22_0 = true;
    }
    or_event_1562_22_0_end: ;
    treetrunk_1034_instances.clear_saved_selection();
    if (or_temp_result_1562_22_0) {
        treetrunk_1034_instances.save_selection();
    }
    // event 1562_22
    bool or_temp_result_1562_22_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1562_22_1_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto or_event_1562_22_1_end;
        or_result_1562_22 = true;
        or_temp_result_1562_22_1 = true;
        or_event_1562_22_1_end: ;
        if (or_temp_result_1562_22_1) {
            treetrunk_1034_instances.save_selection();
        }
        if (!or_result_1562_22) goto or_final_or_event_1562_22_1_end;
        treetrunk_1034_instances.empty_selection();
        if (or_temp_result_1562_22_0 || or_temp_result_1562_22_1) {
            treetrunk_1034_instances.restore_selection();
        }
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1562_22_0; single_instance_1562_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(treetrunk_1034_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_pushableblock2_1012(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1562_22_0 == NULL)
                    single_instance_1562_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1562_22_0))->set_direction(((Active*)get_single(treetrunk_1034_instances, default_active_instance))->get_direction());
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+3, 3));
        }
        ((Active*)((Active*)single_instance_1562_22_0))->move_back();
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    or_final_or_event_1562_22_1_end: ;
}
void Frames::event_func_4738()
{
    // event 1563_22
    {
        if (!(group_main_engine_1)) goto event_1563_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-150))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1563_22_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(0, -150);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1563_22_end: ;
}
void Frames::event_func_4739()
{
    // event 1564_22
    {
        if (!(group_main_engine_1)) goto event_1564_22_end;
        treetrunk_1034_instances.clear_selection();
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!treetrunk_1034_instances.has_selection()) goto event_1564_22_end;
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1564_22_end: ;
}
void Frames::loop_trunk_22()
{
    event_func_4728();
    event_func_4729();
    event_func_4730();
    event_func_4731();
    event_func_4732();
    event_func_4733();
    event_func_4734();
    event_func_4735();
    event_func_4736();
    event_func_4737();
    event_func_4738();
    event_func_4739();
}
void Frames::event_func_4740()
{
    // event 2014_22
    {
        if (!(group_main_engine_1)) goto event_2014_22_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage1b_ogg_132, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2014_22_end: ;
}
void Frames::loop_play_music_4_22()
{
    event_func_4740();
}
void Frames::loop_wrapper_sound_hurt1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_22(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_22(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_22(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_22(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_22(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_22(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_22(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_22(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_22(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_play_music_5_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_play_music_6_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_sound_go0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_22(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_22();
}
void Frames::loop_wrapper_sound_explode3_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_22(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_22(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_22(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_4741()
{
    // event 1761_22
    {
        if (!(group_main_engine_1)) goto event_1761_22_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1761_22_0; single_instance_1761_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_2)->x + -12, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1761_22_0 == NULL)
                single_instance_1761_22_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1761_22_0))->force_frame(9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1761_22_end: ;
}
void Frames::col_17_22()
{
    event_func_4741();
}
void Frames::event_func_4742()
{
    // event 1811_22
    {
        if (!(group_main_engine_1)) goto event_1811_22_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1811_22_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1811_22_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_speed(50);
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_deceleration(0);
        ((Active*)((Active*)col_instance_2))->set_direction(((Active*)col_instance_2)->get_direction()+16);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
    }
    event_1811_22_end: ;
}
void Frames::col_19_22()
{
    event_func_4742();
}
void Frames::event_func_4743()
{
    // event 1760_22
    {
        if (!(group_main_engine_1)) goto event_1760_22_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1760_22_0; single_instance_1760_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + -12, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1760_22_0 == NULL)
                single_instance_1760_22_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1760_22_0))->force_frame(9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1760_22_end: ;
}
void Frames::col_28_22()
{
    event_func_4743();
}
void Frames::event_func_4744()
{
    // event 1812_22
    {
        if (!(group_main_engine_1)) goto event_1812_22_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1812_22_0; single_instance_1812_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1812_22_0 == NULL)
                single_instance_1812_22_0 = new_obj;
        }
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1812_22_end: ;
}
void Frames::col_29_22()
{
    event_func_4744();
}
void Frames::test_collisions_22()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(playersensorleftbig_391_instances, breakablerock_951_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(shieldwater_318_instances, enemysporeprojectile_969_instances, 1, 1, (EventFunction)&Frames::col_2_21);
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewleft_941_instances, 1, 1, (EventFunction)&Frames::col_9_20);
    test_collisions(qualifier_8, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemysporeprojectile_969_instances, 536870912, 2, (EventFunction)&Frames::col_6_21);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 33554432, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(playersensorrightbig_393_instances, breakablerock_951_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_7_20);
    test_collisions(playercharactersensor_383_instances, enemysporeprojectile_969_instances, 2, 4, (EventFunction)&Frames::col_16_21);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewright_942_instances, 2, 1, (EventFunction)&Frames::col_2_20);
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 4194304, 1, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(shieldflamefront_316_instances, bossfireball_967_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 4, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 2, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = bossfireball_967_instances.begin(); it1 != bossfireball_967_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_29_22();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
    }
    for (it1 = minibosstreddbomb_1015_instances.begin(); it1 != minibosstreddbomb_1015_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_22();
    }
    for (it1 = enemysporeprojectile_969_instances.begin(); it1 != enemysporeprojectile_969_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_21();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
}
void Frames::event_func_4745()
{
    // event 1412_22
    {
        if (!(group_main_engine_1)) goto event_1412_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1412_22_end;
        if (not_always_1412_22 > loop_count) {
            not_always_1412_22 = loop_count + 2;
            goto event_1412_22_end;
        }
        not_always_1412_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1412_22_end: ;
}
void Frames::event_func_4746()
{
    // event 1413_22
    {
        if (!(group_main_engine_1)) goto event_1413_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1413_22_end;
        if (not_always_1413_22 > loop_count) {
            not_always_1413_22 = loop_count + 2;
            goto event_1413_22_end;
        }
        not_always_1413_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1413_22_end: ;
}
void Frames::event_func_4747()
{
    // event 1414_22
    {
        if (!(group_main_engine_1)) goto event_1414_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1414_22_end;
        if (not_always_1414_22 > loop_count) {
            not_always_1414_22 = loop_count + 2;
            goto event_1414_22_end;
        }
        not_always_1414_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1414_22_end: ;
}
void Frames::event_func_4748()
{
    // event 1415_22
    {
        if (!(group_main_engine_1)) goto event_1415_22_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1415_22_end;
        if (not_always_1415_22 > loop_count) {
            not_always_1415_22 = loop_count + 2;
            goto event_1415_22_end;
        }
        not_always_1415_22 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1415_22_end: ;
}
