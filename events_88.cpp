#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7235()
{
    // event 1815_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1815_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_on(1))) goto event_1815_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->test_directions(1))) goto event_1815_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1815_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.add(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 3));
    }
    event_1815_31_end: ;
}
void Frames::event_func_7236()
{
    // event 1816_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1816_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_off(1))) goto event_1816_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_1816_31_end: ;
}
void Frames::event_func_7237()
{
    // event 1817_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1817_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_off(1))) goto event_1817_31_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) <= (0))) goto event_1817_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
    }
    event_1817_31_end: ;
}
void Frames::event_func_7238()
{
    // event 1818_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1818_31_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2554, 553, 3452, 825)) == (0))) goto event_1818_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_on(1))) goto event_1818_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->test_directions(65536))) goto event_1818_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.disable(1);
    }
    event_1818_31_end: ;
}
void Frames::event_func_7239()
{
    // event 1819_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1819_31_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2559, 831, 3459, 1146)) == (0))) goto event_1819_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_on(1))) goto event_1819_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->test_directions(1))) goto event_1819_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.disable(1);
    }
    event_1819_31_end: ;
}
void Frames::event_func_7240()
{
    // event 1820_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1820_31_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3454, 835, 3845, 1195)) > (0))) goto event_1820_31_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) <= (0))) goto event_1820_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
    }
    event_1820_31_end: ;
}
void Frames::event_func_7241()
{
    // event 1822_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1)) goto event_1822_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1822_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1822_31_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1822_31_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) != (3))) goto event_1822_31_end;
        if (not_always_1822_31 > loop_count) {
            not_always_1822_31 = loop_count + 2;
            goto event_1822_31_end;
        }
        not_always_1822_31 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1822_31_end: ;
}
void Frames::event_func_7242()
{
    // event 1823_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1)) goto event_1823_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1823_31_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1823_31_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_31();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = true;
        }
    }
    event_1823_31_end: ;
}
void Frames::event_func_7243()
{
    // event 1825_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1)) goto event_1825_31_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1825_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+16))) goto event_1825_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1825_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1825_31_end: ;
}
void Frames::event_func_7244()
{
    // event 1827_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1)) goto event_1827_31_end;
        if (once_condition_1827_31) goto event_1827_31_end;
        once_condition_1827_31 = true;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 9147, 223, 9491, 544);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1827_31_end: ;
}
void Frames::event_func_7245()
{
    // event 1828_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1)) goto event_1828_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1828_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1828_31_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1828_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1828_31_end;
        if (not_always_1828_31 > loop_count) {
            not_always_1828_31 = loop_count + 2;
            goto event_1828_31_end;
        }
        not_always_1828_31 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1828_31_end: ;
}
void Frames::event_func_7246()
{
    // event 1829_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1)) goto event_1829_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1829_31_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_x()) > (((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->get_x()-240))) goto event_1829_31_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_y()) > (((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->get_y()))) goto event_1829_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1829_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1829_31_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_31();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_1 = true;
        }
    }
    event_1829_31_end: ;
}
void Frames::event_func_7247()
{
    // event 1831_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1)) goto event_1831_31_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1831_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+16))) goto event_1831_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1831_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1831_31_end: ;
}
void Frames::event_func_7248()
{
    // event 1832_31
    {
        if (!(group_main_engine_1)) goto event_1832_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (9800))) goto event_1832_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10000))) goto event_1832_31_end;
        if (!((global_values->get(4)) < (2))) goto event_1832_31_end;
        global_values->set(4, 2);
        global_values->set(5, 9536);
        global_values->set(6, 360);
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
    event_1832_31_end: ;
}
void Frames::event_func_7249()
{
    // event 1833_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1833_31_end;
        if (once_condition_1833_31) goto event_1833_31_end;
        once_condition_1833_31 = true;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(9, ((Active*)get_instance(npcserpentine_947_instances))->get_y());
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
            group_main_engine_level_specific_methods_bosses_miniboss_ufo_1 = false;
    
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index));
            if (parent == NULL) goto pos_end_1833_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 95, parent->get_y() + -152);
            pos_end_1833_31_0: ;
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(true);
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_visible(true);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
        }
        minibossufo2_1764_instances.clear_selection();
        spread_value(minibossufo2_1764_instances, 0, 0);
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_layer(3-1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->move_back();
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(4);
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 45);
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1833_31_end: ;
}
void Frames::event_func_7250()
{
    // event 1834_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1834_31_end;
        if (once_condition_1834_31) goto event_1834_31_end;
        once_condition_1834_31 = true;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_1834_31_end: ;
}
void Frames::event_func_7251()
{
    // event 1836_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1836_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1836_31_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(2);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1836_31_end: ;
}
void Frames::event_func_7252()
{
    // event 1837_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1837_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
    }
    event_1837_31_end: ;
}
void Frames::event_func_7253()
{
    // event 1838_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1838_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1838_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) goto event_1838_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
    }
    event_1838_31_end: ;
}
void Frames::event_func_7254()
{
    // event 1839_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1839_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1839_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) goto event_1839_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
    }
    event_1839_31_end: ;
}
void Frames::event_func_7255()
{
    // event 1840_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1840_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1840_31_end;
        if (!(test_obstacle(((Active*)get_instance(npcserpentine_947_instances))->get_x()+24*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5), ((Active*)get_instance(npcserpentine_947_instances))->get_box_index(3)-8))) goto event_1840_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 2);
    }
    event_1840_31_end: ;
}
void Frames::event_func_7256()
{
    // event 1841_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1841_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1841_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1841_31_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(bossserpfloorcheck_1866_instances, ramp1_1869_instances)) goto event_1841_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 2);
    }
    event_1841_31_end: ;
}
void Frames::event_func_7257()
{
    // event 1842_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1842_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1842_31_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        if (!check_overlap(bossserpfloorcheck_1866_instances, ramp2_1856_instances)) goto event_1842_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 2);
    }
    event_1842_31_end: ;
}
void Frames::event_func_7258()
{
    // event 1843_31
    bool or_result_1843_31 = false;
    bool or_temp_result_1843_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto or_event_1843_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-300))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1843_31_0_end;
        or_result_1843_31 = true;
        or_temp_result_1843_31_0 = true;
    }
    or_event_1843_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1843_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1843_31
    bool or_temp_result_1843_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto or_event_1843_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1843_31_1_end;
        or_result_1843_31 = true;
        or_temp_result_1843_31_1 = true;
        or_event_1843_31_1_end: ;
        if (or_temp_result_1843_31_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1843_31) goto or_final_or_event_1843_31_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1843_31_0 || or_temp_result_1843_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    or_final_or_event_1843_31_1_end: ;
}
void Frames::event_func_7259()
{
    // event 1844_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1844_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1844_31_end;
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, -1);
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1844_31_end: ;
}
void Frames::event_func_7260()
{
    // event 1845_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1845_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1845_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_max(1.0-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)*0.04, 0.1));
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)*5, 0));
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1845_31_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1845_31_0: ;
        }
    }
    event_1845_31_end: ;
}
void Frames::event_func_7261()
{
    // event 1846_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1846_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1846_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) >= (25))) goto event_1846_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 2);
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-128, 0);
            pos_end_1846_31_0: ;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(4, 0);
    }
    event_1846_31_end: ;
}
void Frames::event_func_7262()
{
    // event 1847_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1847_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1847_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(6);
    }
    event_1847_31_end: ;
}
void Frames::event_func_7263()
{
    // event 1848_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1848_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1848_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (1))) goto event_1848_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(1))) goto event_1848_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(1);
        FrameObject * single_instance_1848_31_0; single_instance_1848_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1848_31_0 == NULL)
                    single_instance_1848_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1848_31_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1848_31_0))->alterables->values.set(0, 16);
        ((Active*)((Active*)single_instance_1848_31_0))->alterables->values.set(1, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)-1)*-90+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)*-3*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
    }
    event_1848_31_end: ;
}
void Frames::event_func_7264()
{
    // event 1849_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1849_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1849_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) != (1))) goto event_1849_31_end;
        if (not_always_1849_31 > loop_count) {
            not_always_1849_31 = loop_count + 2;
            goto event_1849_31_end;
        }
        not_always_1849_31 = loop_count + 2;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(1);
    }
    event_1849_31_end: ;
}
void Frames::event_func_7265()
{
    // event 1850_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1850_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1850_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)) >= (3))) goto event_1850_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (4))) goto event_1850_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(8, 1);
    }
    event_1850_31_end: ;
}
void Frames::event_func_7266()
{
    // event 1851_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1851_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) == (1))) goto event_1851_31_end;
        if (not_always_1851_31 > loop_count) {
            not_always_1851_31 = loop_count + 2;
            goto event_1851_31_end;
        }
        not_always_1851_31 = loop_count + 2;
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
    }
    event_1851_31_end: ;
}
void Frames::event_func_7267()
{
    // event 1852_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1852_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1852_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(7);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 1);
    }
    event_1852_31_end: ;
}
void Frames::event_func_7268()
{
    // event 1853_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1853_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1853_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) goto event_1853_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
    }
    event_1853_31_end: ;
}
void Frames::event_func_7269()
{
    // event 1854_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1854_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1854_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) goto event_1854_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
    }
    event_1854_31_end: ;
}
void Frames::event_func_7270()
{
    // event 1855_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1855_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1855_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (2))) goto event_1855_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, -5);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 2*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(9, ((Active*)get_instance(npcserpentine_947_instances))->get_y());
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1855_31_end: ;
}
void Frames::event_func_7271()
{
    // event 1856_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1856_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1856_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (2))) goto event_1856_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->get_y()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, get_min(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)+0.2, 8));
    }
    event_1856_31_end: ;
}
void Frames::event_func_7272()
{
    // event 1857_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1857_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1857_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) < (-2))) goto event_1857_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_min(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)+0.5, -2));
    }
    event_1857_31_end: ;
}
void Frames::event_func_7273()
{
    // event 1858_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1858_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1858_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) > (2))) goto event_1858_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_max(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)-0.5, 2));
    }
    event_1858_31_end: ;
}
void Frames::event_func_7274()
{
    // event 1859_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1859_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1859_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) != (1))) goto event_1859_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) >= (0))) goto event_1859_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(2))) goto event_1859_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(2);
    }
    event_1859_31_end: ;
}
void Frames::event_func_7275()
{
    // event 1860_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1860_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) == (1))) goto event_1860_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1860_31_end;
        FrameObject * single_instance_1860_31_0; single_instance_1860_31_0 = NULL;
        // select single: true false false
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator p_it(bossserpentinearm_1863_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1860_31_0 == NULL)
                    single_instance_1860_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1860_31_0))->alterables->values.set(0, ((Active*)single_instance_1860_31_0)->get_x());
        ((Active*)((Active*)single_instance_1860_31_0))->alterables->values.set(1, ((Active*)single_instance_1860_31_0)->get_y());
        ((Active*)((Active*)single_instance_1860_31_0))->alterables->values.set(2, cos_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(0)+sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(1))*10)*6);
        ((Active*)((Active*)single_instance_1860_31_0))->alterables->values.set(3, sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(0)+sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(1))*10)*-6);
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+30)%math_helper%360);
        }
    }
    event_1860_31_end: ;
}
void Frames::event_func_7276()
{
    // event 1861_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1861_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) == (1))) goto event_1861_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(3))) goto event_1861_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
        }
    }
    event_1861_31_end: ;
}
void Frames::event_func_7277()
{
    // event 1862_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1862_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) == (1))) goto event_1862_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_on(3))) goto event_1862_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -5);
        }
    }
    event_1862_31_end: ;
}
void Frames::event_func_7278()
{
    // event 1863_31
    bool or_result_1863_31 = false;
    bool or_temp_result_1863_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto or_event_1863_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1863_31_0_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (50))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1863_31_0_end;
        or_result_1863_31 = true;
        or_temp_result_1863_31_0 = true;
    }
    or_event_1863_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    bossserpentinearm_1863_instances.clear_saved_selection();
    if (or_temp_result_1863_31_0) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1863_31
    bool or_temp_result_1863_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto or_event_1863_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1863_31_1_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-50))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1863_31_1_end;
        or_result_1863_31 = true;
        or_temp_result_1863_31_1 = true;
    }
    or_event_1863_31_1_end: ;
    if (or_temp_result_1863_31_1) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1863_31
    bool or_temp_result_1863_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto or_event_1863_31_2_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1863_31_2_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (-130))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1863_31_2_end;
        or_result_1863_31 = true;
        or_temp_result_1863_31_2 = true;
    }
    or_event_1863_31_2_end: ;
    if (or_temp_result_1863_31_2) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1863_31
    bool or_temp_result_1863_31_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto or_event_1863_31_3_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1863_31_3_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-230))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1863_31_3_end;
        or_result_1863_31 = true;
        or_temp_result_1863_31_3 = true;
        or_event_1863_31_3_end: ;
        if (or_temp_result_1863_31_3) {
            npcserpentine_947_instances.save_selection();
            bossserpentinearm_1863_instances.save_selection();
        }
        if (!or_result_1863_31) goto or_final_or_event_1863_31_3_end;
        bossserpentinearm_1863_instances.empty_selection();
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1863_31_0 || or_temp_result_1863_31_1 || or_temp_result_1863_31_2 || or_temp_result_1863_31_3) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1863_31_0 || or_temp_result_1863_31_1 || or_temp_result_1863_31_2 || or_temp_result_1863_31_3) {
            bossserpentinearm_1863_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(3);
        }
    }
    or_final_or_event_1863_31_3_end: ;
}
void Frames::event_func_7279()
{
    // event 1864_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1864_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1864_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) > (0))) goto event_1864_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)))) goto event_1864_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)) == (1))) goto event_1864_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) < (2))) goto event_1864_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(2);
    }
    event_1864_31_end: ;
}
void Frames::event_func_7280()
{
    // event 1865_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1865_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) > (2))) goto event_1865_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
    }
    event_1865_31_end: ;
}
void Frames::event_func_7281()
{
    // event 1866_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1866_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) > (20))) goto event_1866_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
    }
    event_1866_31_end: ;
}
void Frames::event_func_7282()
{
    // event 1867_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1)) goto event_1867_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1867_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) > (0))) goto event_1867_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)))) goto event_1867_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_1867_31_end: ;
}
void Frames::event_func_7283()
{
    // event 1868_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1868_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1868_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1868_31_end: ;
}
void Frames::event_func_7284()
{
    // event 1869_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1869_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1869_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) goto event_1869_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
    }
    event_1869_31_end: ;
}
void Frames::event_func_7285()
{
    // event 1870_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1870_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1870_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) goto event_1870_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
    }
    event_1870_31_end: ;
}
void Frames::event_func_7286()
{
    // event 1871_31
    bool or_result_1871_31 = false;
    bool or_temp_result_1871_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1871_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1871_31_0_end;
        or_result_1871_31 = true;
        or_temp_result_1871_31_0 = true;
    }
    or_event_1871_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1871_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1871_31
    bool or_temp_result_1871_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1871_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1871_31_1_end;
        or_result_1871_31 = true;
        or_temp_result_1871_31_1 = true;
        or_event_1871_31_1_end: ;
        if (or_temp_result_1871_31_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1871_31) goto or_final_or_event_1871_31_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1871_31_0 || or_temp_result_1871_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    or_final_or_event_1871_31_1_end: ;
}
void Frames::event_func_7287()
{
    // event 1872_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1872_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (4))) goto event_1872_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1872_31_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1872_31_0; single_instance_1872_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1872_31_0 == NULL)
                    single_instance_1872_31_0 = new_obj;
            }
        }
        ((Active*)single_instance_1872_31_0)->move_back(((Active*)get_instance(npcserpentine_947_instances)));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 10*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
    }
    event_1872_31_end: ;
}
void Frames::event_func_7288()
{
    // event 1873_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1873_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) >= (1))) goto event_1873_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(7))) goto event_1873_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
    }
    event_1873_31_end: ;
}
void Frames::event_func_7289()
{
    // event 1874_31
    bool or_result_1874_31 = false;
    bool or_temp_result_1874_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1874_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1874_31_0_end;
        or_result_1874_31 = true;
        or_temp_result_1874_31_0 = true;
    }
    or_event_1874_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1874_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1874_31
    bool or_temp_result_1874_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1874_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1874_31_1_end;
        or_result_1874_31 = true;
        or_temp_result_1874_31_1 = true;
        or_event_1874_31_1_end: ;
        if (or_temp_result_1874_31_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1874_31) goto or_final_or_event_1874_31_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1874_31_0 || or_temp_result_1874_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    or_final_or_event_1874_31_1_end: ;
}
void Frames::event_func_7290()
{
    // event 1875_31
    bool or_result_1875_31 = false;
    bool or_temp_result_1875_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto or_event_1875_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1875_31_0_end;
        or_result_1875_31 = true;
        or_temp_result_1875_31_0 = true;
    }
    or_event_1875_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1875_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1875_31
    bool or_temp_result_1875_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto or_event_1875_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1875_31_1_end;
        or_result_1875_31 = true;
        or_temp_result_1875_31_1 = true;
    }
    or_event_1875_31_1_end: ;
    if (or_temp_result_1875_31_1) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1875_31
    bool or_temp_result_1875_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto or_event_1875_31_2_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(minibossufobeam_1721_instances, default_active_instance))->get_x()+140))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1875_31_2_end;
        or_result_1875_31 = true;
        or_temp_result_1875_31_2 = true;
        or_event_1875_31_2_end: ;
        if (or_temp_result_1875_31_2) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1875_31) goto or_final_or_event_1875_31_2_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1875_31_0 || or_temp_result_1875_31_1 || or_temp_result_1875_31_2) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    or_final_or_event_1875_31_2_end: ;
}
void Frames::event_func_7291()
{
    // event 1876_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto event_1876_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1876_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) < (0))) goto event_1876_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(15);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_min(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)+0.5, 0));
    }
    event_1876_31_end: ;
}
void Frames::event_func_7292()
{
    // event 1877_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto event_1877_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1877_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) > (0))) goto event_1877_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(15);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_max(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)-0.5, 0));
    }
    event_1877_31_end: ;
}
void Frames::event_func_7293()
{
    // event 1878_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto event_1878_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1878_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) == (0))) goto event_1878_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(8)) == (2))) goto event_1878_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)*-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(8, 1+randrange(2));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, randrange(2));
    }
    event_1878_31_end: ;
}
void Frames::event_func_7294()
{
    // event 1879_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto event_1879_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1879_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) == (0))) goto event_1879_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(8)) >= (5))) goto event_1879_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = true;
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(12);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)*-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(8, randrange(5));
    }
    event_1879_31_end: ;
}
void Frames::event_func_7295()
{
    // event 1880_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1)) goto event_1880_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1880_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) == (0))) goto event_1880_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = true;
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)*-1);
    }
    event_1880_31_end: ;
}
void Frames::event_func_7296()
{
    // event 1881_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1881_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1881_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1881_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1) goto event_1881_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1 = true;
        }
        media.play_id(SOUND_SERP_KUNGFU_198, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 9999);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1881_31_end: ;
}
void Frames::event_func_7297()
{
    // event 1882_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto event_1882_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_min(((Active*)*it)->alterables->values.get(10)+2, 45));
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*9+((Active*)get_instance(npcserpentine_947_instances))->get_x())*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*9+((Active*)get_instance(npcserpentine_947_instances))->get_y())*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1882_31_end: ;
}
void Frames::event_func_7298()
{
    // event 1883_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto event_1883_31_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1883_31_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(2);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1883_31_end: ;
}
void Frames::event_func_7299()
{
    // event 1884_31
    bool or_result_1884_31 = false;
    bool or_temp_result_1884_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto or_event_1884_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_x()+8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1884_31_0_end;
        or_result_1884_31 = true;
        or_temp_result_1884_31_0 = true;
    }
    or_event_1884_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1884_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1884_31
    bool or_temp_result_1884_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto or_event_1884_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_x()-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1884_31_1_end;
        or_result_1884_31 = true;
        or_temp_result_1884_31_1 = true;
        or_event_1884_31_1_end: ;
        if (or_temp_result_1884_31_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1884_31) goto or_final_or_event_1884_31_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1884_31_0 || or_temp_result_1884_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0-((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
    }
    or_final_or_event_1884_31_1_end: ;
}
void Frames::event_func_7300()
{
    // event 1885_31
    bool or_result_1885_31 = false;
    bool or_temp_result_1885_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto or_event_1885_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1885_31_0_end;
        or_result_1885_31 = true;
        or_temp_result_1885_31_0 = true;
    }
    or_event_1885_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1885_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1885_31
    bool or_temp_result_1885_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto or_event_1885_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1885_31_1_end;
        or_result_1885_31 = true;
        or_temp_result_1885_31_1 = true;
        or_event_1885_31_1_end: ;
        if (or_temp_result_1885_31_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1885_31) goto or_final_or_event_1885_31_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1885_31_0 || or_temp_result_1885_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->flags.enable(7);
            ((Active*)*it)->set_layer(3-1);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    or_final_or_event_1885_31_1_end: ;
}
void Frames::event_func_7301()
{
    // event 1886_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto event_1886_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) >= (1))) goto event_1886_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_on(7))) goto event_1886_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->get_y()-8);
        ((Active*)get_instance(npcserpentine_947_instances))->move_back();
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(8);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 0);
    }
    event_1886_31_end: ;
}
void Frames::event_func_7302()
{
    // event 1887_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1)) goto event_1887_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) >= (1))) goto event_1887_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_on(7))) goto event_1887_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) < (((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_y()))) goto event_1887_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(false);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1887_31_end: ;
}
void Frames::event_func_7303()
{
    // event 1888_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1888_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
    }
    event_1888_31_end: ;
}
void Frames::event_func_7304()
{
    // event 1889_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1889_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1889_31_end;
        if (once_condition_1889_31) goto event_1889_31_end;
        once_condition_1889_31 = true;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(3);
        media.play_id(SOUND_SERP_MADLAUGH_193, -1, 1);
    }
    event_1889_31_end: ;
}
void Frames::event_func_7305()
{
    // event 1890_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1890_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1890_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(12);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(4, 0);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1890_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1890_31_0: ;
        }
    }
    event_1890_31_end: ;
}
void Frames::event_func_7306()
{
    // event 1891_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1891_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->is_animation_finished(12))) goto event_1891_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(1))) goto event_1891_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(13);
    }
    event_1891_31_end: ;
}
void Frames::event_func_7307()
{
    // event 1892_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1892_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(13))) goto event_1892_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (5))) goto event_1892_31_end;
        if (not_always_1892_31 > loop_count) {
            not_always_1892_31 = loop_count + 2;
            goto event_1892_31_end;
        }
        not_always_1892_31 = loop_count + 2;
        FrameObject * single_instance_1892_31_0; single_instance_1892_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1892_31_0 == NULL)
                    single_instance_1892_31_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
        ((Active*)((Active*)single_instance_1892_31_0))->alterables->values.set(2, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1892_31_0))->alterables->values.set(3, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
    }
    event_1892_31_end: ;
}
void Frames::event_func_7308()
{
    // event 1893_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1893_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(13))) goto event_1893_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (8))) goto event_1893_31_end;
        if (not_always_1893_31 > loop_count) {
            not_always_1893_31 = loop_count + 2;
            goto event_1893_31_end;
        }
        not_always_1893_31 = loop_count + 2;
        FrameObject * single_instance_1893_31_0; single_instance_1893_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1893_31_0 == NULL)
                    single_instance_1893_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1893_31_0))->alterables->values.set(2, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1893_31_0))->alterables->values.set(3, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
    }
    event_1893_31_end: ;
}
void Frames::event_func_7309()
{
    // event 1894_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1894_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->is_animation_finished(13))) goto event_1894_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(12);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(1);
    }
    event_1894_31_end: ;
}
void Frames::event_func_7310()
{
    // event 1895_31
    bool or_result_1895_31 = false;
    bool or_temp_result_1895_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto or_event_1895_31_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) >= (((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1895_31_0_end;
        or_result_1895_31 = true;
        or_temp_result_1895_31_0 = true;
    }
    or_event_1895_31_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1895_31_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1895_31
    bool or_temp_result_1895_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto or_event_1895_31_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1895_31_1_end;
        or_result_1895_31 = true;
        or_temp_result_1895_31_1 = true;
        or_event_1895_31_1_end: ;
        if (or_temp_result_1895_31_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1895_31) goto or_final_or_event_1895_31_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1895_31_0 || or_temp_result_1895_31_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-1);
        }
    }
    or_final_or_event_1895_31_1_end: ;
}
void Frames::event_func_7311()
{
    // event 1896_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1896_31_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(12))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1896_31_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(0);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = true;
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-80, 0);
            pos_end_1896_31_0: ;
        }
    }
    event_1896_31_end: ;
}
void Frames::event_func_7312()
{
    // event 1897_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1897_31_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1897_31_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(0);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = true;
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-80, 0);
            pos_end_1897_31_0: ;
        }
    }
    event_1897_31_end: ;
}
void Frames::event_func_7313()
{
    // event 1898_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1898_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
    }
    event_1898_31_end: ;
}
void Frames::event_func_7314()
{
    // event 1899_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1899_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1899_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 2);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
    }
    event_1899_31_end: ;
}
void Frames::event_func_7315()
{
    // event 1900_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1900_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1900_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (1))) goto event_1900_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto event_1900_31_end;
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
        }
    }
    event_1900_31_end: ;
}
void Frames::event_func_7316()
{
    // event 1901_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1901_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1901_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (-1))) goto event_1901_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-180))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto event_1901_31_end;
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -5);
        }
    }
    event_1901_31_end: ;
}
void Frames::event_func_7317()
{
    // event 1902_31
    bool or_result_1902_31 = false;
    bool or_temp_result_1902_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto or_event_1902_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1902_31_0_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1902_31_0_end;
        or_result_1902_31 = true;
        or_temp_result_1902_31_0 = true;
    }
    or_event_1902_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    bossserpentinearm_1863_instances.clear_saved_selection();
    if (or_temp_result_1902_31_0) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1902_31
    bool or_temp_result_1902_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto or_event_1902_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1902_31_1_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-180))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1902_31_1_end;
        or_result_1902_31 = true;
        or_temp_result_1902_31_1 = true;
        or_event_1902_31_1_end: ;
        if (or_temp_result_1902_31_1) {
            npcserpentine_947_instances.save_selection();
            bossserpentinearm_1863_instances.save_selection();
        }
        if (!or_result_1902_31) goto or_final_or_event_1902_31_1_end;
        bossserpentinearm_1863_instances.empty_selection();
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1902_31_0 || or_temp_result_1902_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1902_31_0 || or_temp_result_1902_31_1) {
            bossserpentinearm_1863_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(7, 3);
        }
        FrameObject * single_instance_1902_31_0; single_instance_1902_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossserpentinearm_1863_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_1835(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1902_31_0 == NULL)
                    single_instance_1902_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1902_31_0))->alterables->values.set(5, ((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(5));
        ((Active*)((Active*)single_instance_1902_31_0))->alterables->values.set(0, ((Active*)single_instance_1902_31_0)->get_x());
        ((Active*)((Active*)single_instance_1902_31_0))->alterables->values.set(1, ((Active*)single_instance_1902_31_0)->get_y());
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    or_final_or_event_1902_31_1_end: ;
}
void Frames::event_func_7318()
{
    // event 1903_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1903_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1903_31_end;
        if (((Active*)get_instance(npcserpentine_947_instances))->test_animation(14)) goto event_1903_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
    }
    event_1903_31_end: ;
}
void Frames::event_func_7319()
{
    // event 1904_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1904_31_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(false);
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(-100);
    }
    event_1904_31_end: ;
}
void Frames::event_func_7320()
{
    // event 1905_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1905_31_end;
        if (!((bossmissile_1835_instances.size()) > (0))) goto event_1905_31_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_instance(bossmissile_1835_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_instance(bossmissile_1835_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_1905_31_end: ;
}
void Frames::event_func_7321()
{
    // event 1906_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1906_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-10)) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_1906_31_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(false);
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(-100);
    }
    event_1906_31_end: ;
}
void Frames::event_func_7322()
{
    // event 1907_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1907_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1907_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1907_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
    }
    event_1907_31_end: ;
}
void Frames::event_func_7323()
{
    // event 1908_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1908_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1908_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1908_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
    }
    event_1908_31_end: ;
}
void Frames::event_func_7324()
{
    // event 1909_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1909_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1909_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(8);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, -4);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 4*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)*-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
    }
    event_1909_31_end: ;
}
void Frames::event_func_7325()
{
    // event 1910_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1910_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1910_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->get_y()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(3, 0.25);
    }
    event_1910_31_end: ;
}
void Frames::event_func_7326()
{
    // event 1911_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1911_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1911_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(11))) goto event_1911_31_end;
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(11);
    }
    event_1911_31_end: ;
}
void Frames::event_func_7327()
{
    // event 1912_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1912_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1912_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1912_31_end;
        npcserpentine_947_instances.clear_selection();
        playerskinsash_418_instances.clear_selection();
        if (!check_overlap(npcserpentine_947_instances, playerskinsash_418_instances)) goto event_1912_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(get_max(((Active*)get_instance(npcserpentine_947_instances))->get_x(), ((Active*)get_instance(player_389_instances))->get_x()));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-2);
    }
    event_1912_31_end: ;
}
void Frames::event_func_7328()
{
    // event 1913_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1913_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1913_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1913_31_end;
        npcserpentine_947_instances.clear_selection();
        playerskinsash_418_instances.clear_selection();
        if (!check_overlap(npcserpentine_947_instances, playerskinsash_418_instances)) goto event_1913_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(get_min(((Active*)get_instance(npcserpentine_947_instances))->get_x(), ((Active*)get_instance(player_389_instances))->get_x()));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+2);
    }
    event_1913_31_end: ;
}
void Frames::event_func_7329()
{
    // event 1914_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1914_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) < (0))) goto event_1914_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()+32))) goto event_1914_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 0-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 0-((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
    }
    event_1914_31_end: ;
}
void Frames::event_func_7330()
{
    // event 1915_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_1915_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1915_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) > (0))) goto event_1915_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)))) goto event_1915_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(11);
    }
    event_1915_31_end: ;
}
void Frames::event_func_7331()
{
    // event 1916_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1)) goto event_1916_31_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bossserpfloorcheck_1866_instances.has_selection()) goto event_1916_31_end;
        if (!check_not_overlap(bossserpfloorcheck_1866_instances, breakablefloor2_1761_instances)) goto event_1916_31_end;
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
    }
    event_1916_31_end: ;
}
void Frames::event_func_7332()
{
    // event 1917_31
    bool or_result_1917_31 = false;
    bool or_temp_result_1917_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1)) goto or_event_1917_31_0_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossserpfloorcheck_1866_instances.has_selection()) goto or_event_1917_31_0_end;
        or_result_1917_31 = true;
        or_temp_result_1917_31_0 = true;
    }
    or_event_1917_31_0_end: ;
    bossserpfloorcheck_1866_instances.clear_saved_selection();
    if (or_temp_result_1917_31_0) {
        bossserpfloorcheck_1866_instances.save_selection();
    }
    // event 1917_31
    bool or_temp_result_1917_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1)) goto or_event_1917_31_1_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(bossserpfloorcheck_1866_instances, breakablefloor2_1761_instances)) goto or_event_1917_31_1_end;
        or_result_1917_31 = true;
        or_temp_result_1917_31_1 = true;
        or_event_1917_31_1_end: ;
        breakablefloor2_1761_instances.clear_saved_selection();
        if (or_temp_result_1917_31_1) {
            breakablefloor2_1761_instances.save_selection();
            bossserpfloorcheck_1866_instances.save_selection();
        }
        if (!or_result_1917_31) goto or_final_or_event_1917_31_1_end;
        breakablefloor2_1761_instances.empty_selection();
        bossserpfloorcheck_1866_instances.empty_selection();
        if (or_temp_result_1917_31_1) {
            breakablefloor2_1761_instances.restore_selection();
        }
        if (or_temp_result_1917_31_0 || or_temp_result_1917_31_1) {
            bossserpfloorcheck_1866_instances.restore_selection();
        }
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    or_final_or_event_1917_31_1_end: ;
}
void Frames::event_func_7333()
{
    // event 1920_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1920_31_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x());
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(9, ((Active*)get_single(bossserpfloorcheck_1866_instances, default_active_instance))->get_y());
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1920_31_end: ;
}
void Frames::event_func_7334()
{
    // event 1921_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1921_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (1))) goto event_1921_31_end;
        if (((Active*)get_instance(npcserpentine_947_instances))->test_animation(9)) goto event_1921_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0), -90));
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7));
    }
    event_1921_31_end: ;
}
