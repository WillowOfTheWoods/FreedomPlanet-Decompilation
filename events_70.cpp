#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5773()
{
    // event 1757_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1757_26_end;
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-10, 0);
        }
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1757_26_end: ;
}
void Frames::event_func_5774()
{
    // event 1758_26
    bool or_result_1758_26 = false;
    bool or_temp_result_1758_26_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto or_event_1758_26_0_end;
        if (!((bossclawpiece1_1281_instances.size()) == (0))) goto or_event_1758_26_0_end;
        or_result_1758_26 = true;
        or_temp_result_1758_26_0 = true;
    }
    or_event_1758_26_0_end: ;
    // event 1758_26
    bool or_temp_result_1758_26_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto or_event_1758_26_1_end;
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (6848))) { it.deselect(); continue; }
        }
        if (!mastercamera_430_instances.has_selection()) goto or_event_1758_26_1_end;
        or_result_1758_26 = true;
        or_temp_result_1758_26_1 = true;
        or_event_1758_26_1_end: ;
        mastercamera_430_instances.clear_saved_selection();
        if (or_temp_result_1758_26_1) {
            mastercamera_430_instances.save_selection();
        }
        if (!or_result_1758_26) goto or_final_or_event_1758_26_1_end;
        mastercamera_430_instances.empty_selection();
        if (or_temp_result_1758_26_1) {
            mastercamera_430_instances.restore_selection();
        }
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 6848);
        }
    }
    or_final_or_event_1758_26_1_end: ;
}
void Frames::event_func_5775()
{
    // event 1759_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1759_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (600))) goto event_1759_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1759_26_end;
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!bossclawtalons_1392_instances.has_selection()) goto event_1759_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+8, 7));
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1759_26_end: ;
}
void Frames::event_func_5776()
{
    // event 1760_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1760_26_end;
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!bossclawtalons_1392_instances.has_selection()) goto event_1760_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-6-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*2));
    }
    event_1760_26_end: ;
}
void Frames::event_func_5777()
{
    // event 1761_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1761_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (600))) goto event_1761_26_end;
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!bossclawtalons_1392_instances.has_selection()) goto event_1761_26_end;
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1761_26_end: ;
}
void Frames::event_func_5778()
{
    // event 1762_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1762_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4008))) goto event_1762_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1762_26_end: ;
}
void Frames::event_func_5779()
{
    // event 1763_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1763_26_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (600))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1763_26_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 8);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1763_26_end: ;
}
void Frames::event_func_5780()
{
    // event 1764_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1764_26_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (640))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (800))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1764_26_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1764_26_end: ;
}
void Frames::event_func_5781()
{
    // event 1765_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1765_26_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (640))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1765_26_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1765_26_end: ;
}
void Frames::event_func_5782()
{
    // event 1766_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1766_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1766_26_end;
        playersensorleftbig_391_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, hazardspikesright_561_instances)) goto event_1766_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
    }
    event_1766_26_end: ;
}
void Frames::event_func_5783()
{
    // event 1767_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1767_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1767_26_end;
        playerskinsash_418_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, hazardspikesright_561_instances)) goto event_1767_26_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1767_26_end: ;
}
void Frames::event_func_5784()
{
    // event 1768_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1768_26_end;
        pushableblock3_1394_instances.clear_selection();
        caravanengine_1395_instances.clear_selection();
        if (!check_overlap(pushableblock3_1394_instances, caravanengine_1395_instances)) goto event_1768_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(pushableblock3_1394_instances, default_active_instance))->get_box_index(3)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1768_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1768_26_end: ;
}
void Frames::event_func_5785()
{
    // event 1769_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1769_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1769_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossclawhitbox_1388_instances.has_selection()) goto event_1769_26_end;
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 19)), 2, 19);
    }
    event_1769_26_end: ;
}
void Frames::event_func_5786()
{
    // event 1770_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1770_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1770_26_end;
        FrameObject * single_instance_1770_26_0; single_instance_1770_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(caravanengine_1395_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_1770_26_0 == NULL)
                    single_instance_1770_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1770_26_0))->force_frame(9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        if (!group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1) {
            group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1 = true;
        }
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        pushableblock3_1394_instances.clear_selection();
        for (ObjectIterator it(pushableblock3_1394_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        spread_value(npcmerc_1283_instances, 8, 0);
    }
    event_1770_26_end: ;
}
void Frames::event_func_5787()
{
    // event 1771_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1)) goto event_1771_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1771_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1771_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (620))) goto event_1771_26_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1771_26_end;
        if (not_always_1771_26 > loop_count) {
            not_always_1771_26 = loop_count + 2;
            goto event_1771_26_end;
        }
        not_always_1771_26 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1771_26_end: ;
}
void Frames::event_func_5788()
{
    // event 1772_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1)) goto event_1772_26_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1772_26_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_x()) > (((Active*)get_single(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1772_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (620))) goto event_1772_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossclawhitbox_1388_instances.has_selection()) goto event_1772_26_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_26();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1 = true;
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->set_angle(90, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1772_26_end: ;
}
void Frames::event_func_5789()
{
    // event 1774_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1)) goto event_1774_26_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1774_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+16))) goto event_1774_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1774_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1774_26_end: ;
}
void Frames::event_func_5790()
{
    // event 1775_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1)) goto event_1775_26_end;
        if (!(is_key_pressed_once(SDLK_SPACE))) goto event_1775_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->set_angle(90, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1775_26_end: ;
}
void Frames::event_func_5791()
{
    // event 1776_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1776_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6300))) goto event_1776_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 6040);
    }
    event_1776_26_end: ;
}
void Frames::event_func_5792()
{
    // event 1777_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1777_26_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1777_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (20))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1777_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+1);
        }
    }
    event_1777_26_end: ;
}
void Frames::event_func_5793()
{
    // event 1778_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1778_26_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1778_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (21))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1778_26_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1778_26_0; single_instance_1778_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(caravanengine_1395_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1778_26_0 == NULL)
                    single_instance_1778_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1778_26_0))->set_x(((Active*)single_instance_1778_26_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1778_26_0))->set_y(((Active*)single_instance_1778_26_0)->get_y()-10+randrange(61));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1778_26_end: ;
}
void Frames::event_func_5794()
{
    // event 1779_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1779_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (20))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1779_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1779_26_end: ;
}
void Frames::event_func_5795()
{
    // event 1780_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1780_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1780_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1780_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1780_26_end: ;
}
void Frames::event_func_5796()
{
    // event 1781_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1781_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1781_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1781_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1781_26_end: ;
}
void Frames::event_func_5797()
{
    // event 1782_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1782_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1782_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1782_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1782_26_end: ;
}
void Frames::event_func_5798()
{
    // event 1783_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1783_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1783_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1783_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(3, -5);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1783_26_end: ;
}
void Frames::event_func_5799()
{
    // event 1784_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1784_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (530))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1784_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->move_front();
        }
    }
    event_1784_26_end: ;
}
void Frames::event_func_5800()
{
    // event 1785_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1785_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (655))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1785_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 655);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 2);
            ((Active*)*it)->alterables->values.set(2, -6);
            ((Active*)*it)->force_animation(2);
        }
    }
    event_1785_26_end: ;
}
void Frames::event_func_5801()
{
    // event 1786_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1786_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (21))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1786_26_end;
        if (once_condition_1786_26) goto event_1786_26_end;
        once_condition_1786_26 = true;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        media.stop_channel(32-1);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadein_music_3000_142);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1786_26_end: ;
}
void Frames::event_func_5802()
{
    // event 1787_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1787_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (21))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1787_26_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1787_26_end: ;
}
void Frames::event_func_5803()
{
    // event 1788_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1788_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (21))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1788_26_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1788_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
            group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1 = false;
    
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece3r_1093_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece3r_1093_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece4r_1094_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece4r_1094_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        active_1396_instances.clear_selection();
        for (ObjectIterator it(active_1396_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        pushableblock3_1394_instances.clear_selection();
        for (ObjectIterator it(pushableblock3_1394_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesright_561_instances.clear_selection();
        for (ObjectIterator it(hazardspikesright_561_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1788_26_end: ;
}
void Frames::event_func_5804()
{
    // event 1789_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1789_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (40))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1789_26_end;
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1789_26_end: ;
}
void Frames::event_func_5805()
{
    // event 1790_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1790_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1790_26_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+1, 128));
        }
    }
    event_1790_26_end: ;
}
void Frames::event_func_5806()
{
    // event 1791_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1791_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1791_26_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1791_26_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->set_y(-99);
        }
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1791_26_end: ;
}
void Frames::event_func_5807()
{
    // event 1792_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1)) goto event_1792_26_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1792_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (40))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1792_26_end;
        FrameObject * single_instance_1792_26_0; single_instance_1792_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(caravanengine_1395_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1792_26_0 == NULL)
                    single_instance_1792_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1792_26_0))->get_movement()->set_speed(5+randrange(5));
        ((Active*)((Active*)single_instance_1792_26_0))->set_direction(pick_random(3, 7, 8, 9));
        ((Active*)((Active*)single_instance_1792_26_0))->force_speed(15+randrange(12));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
    }
    event_1792_26_end: ;
}
void Frames::event_func_5808()
{
    // event 1793_26
    {
        if (!(group_main_engine_1)) goto event_1793_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1793_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8360))) goto event_1793_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1400))) goto event_1793_26_end;
        if (!((global_values->get(4)) < (10))) goto event_1793_26_end;
        if (once_condition_1793_26) goto event_1793_26_end;
        once_condition_1793_26 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1793_26_end: ;
}
void Frames::event_func_5809()
{
    // event 1794_26
    {
        if (!(group_main_engine_1)) goto event_1794_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7400))) goto event_1794_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8360))) goto event_1794_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (2000))) goto event_1794_26_end;
        if (!((global_values->get(4)) < (10))) goto event_1794_26_end;
        if (once_condition_1794_26) goto event_1794_26_end;
        once_condition_1794_26 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        media.stop_channel(32-1);
        {
            loop_next_act_running = true;
            int times = int(1);
            loop_next_act_index = 0;
            while (loop_next_act_index < times) {
                loop_next_act_26();
                if (!loop_next_act_running) break;
                loop_next_act_index++;
            }
        }
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
    event_1794_26_end: ;
}
void Frames::event_func_5810()
{
    // event 1796_26
    {
        if (!(group_main_engine_1)) goto event_1796_26_end;
        if (!((global_values->get(4)) >= (10))) goto event_1796_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 7312);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 1888);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1796_26_end: ;
}
void Frames::event_func_5811()
{
    // event 1797_26
    {
        if (!(group_main_engine_1)) goto event_1797_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (2400))) goto event_1797_26_end;
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
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
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_1797_26_end: ;
}
void Frames::event_func_5812()
{
    // event 1800_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1800_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1800_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+2)%math_helper%360);
        }
    }
    event_1800_26_end: ;
}
void Frames::event_func_5813()
{
    // event 1801_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1801_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, ((((Active*)get_instance(bossclaw_1389_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->get_x())-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*bossclawpiece1_1281_instances.size()))/math_helper/(bossclawpiece1_1281_instances.size()+1));
            ((Active*)*it)->set_x((((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))+((((Active*)*it)->alterables->values.get(8)-1)*(((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))));
            ((Active*)*it)->alterables->values.set(19, ((((Active*)get_instance(bossclaw_1389_instances, it.current_index, default_active_instance))->get_y()-((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->get_y())-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*bossclawpiece1_1281_instances.size()))/math_helper/(bossclawpiece1_1281_instances.size()+1));
            ((Active*)*it)->set_y((((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))+((((Active*)*it)->alterables->values.get(8)-1)*(((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))));
        }
    }
    event_1801_26_end: ;
}
void Frames::event_func_5814()
{
    // event 1802_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1802_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+cos_deg(((Active*)*it)->alterables->values.get(4)*2)*((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossclaw_1389_instances, it.current_index));
            if (parent == NULL) goto pos_end_1802_26_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1802_26_0: ;
        }
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_direction());
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(4)+30)*((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(8)*0.5);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+cos_deg((((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(4)+30)*2)*((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(9)*0.5);
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1802_26_end: ;
}
void Frames::event_func_5815()
{
    // event 1803_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1803_26_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1803_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossclaw_1389_instances, it.current_index));
            if (parent == NULL) goto pos_end_1803_26_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1803_26_0: ;
        }
    }
    event_1803_26_end: ;
}
void Frames::event_func_5816()
{
    // event 1804_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1804_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossclawhitbox_1388_instances.has_selection()) goto event_1804_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1804_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 50);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_1804_26_end: ;
}
void Frames::event_func_5817()
{
    // event 1805_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1805_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossclawhitbox_1388_instances.has_selection()) goto event_1805_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1805_26_end: ;
}
void Frames::event_func_5818()
{
    // event 1806_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1)) goto event_1806_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*32));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*-32));
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-3, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)*it)->alterables->values.get(1))*-32);
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.4, 16));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.4, 16));
        }
    }
    event_1806_26_end: ;
}
void Frames::event_func_5819()
{
    // event 1807_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1)) goto event_1807_26_end;
        if (!((((Active*)get_instance(bossclaw_1389_instances, default_active_instance))->get_angle()) > (0))) goto event_1807_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(((Active*)*it)->get_angle()-2, 0), 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1807_26_end: ;
}
void Frames::event_func_5820()
{
    // event 1808_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1)) goto event_1808_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (((Active*)get_instance(bossclawpiece4_1278_instances, default_active_instance))->alterables->values.get(1)-120))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1808_26_end;
            group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_standby_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = true;
        }
    }
    event_1808_26_end: ;
}
void Frames::event_func_5821()
{
    // event 1809_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1809_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*32));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*-32));
        }
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1809_26_end: ;
}
void Frames::event_func_5822()
{
    // event 1810_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1810_26_end;
        if (!((((Active*)get_instance(bossclaw_1389_instances, default_active_instance))->get_angle()) > (0))) goto event_1810_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(((Active*)*it)->get_angle()-2, 0), 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1810_26_end: ;
}
void Frames::event_func_5823()
{
    // event 1811_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1811_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1811_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1811_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1811_26_end: ;
}
void Frames::event_func_5824()
{
    // event 1812_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1812_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (30))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1812_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1812_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1 = true;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1812_26_end: ;
}
void Frames::event_func_5825()
{
    // event 1813_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1813_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (40))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1813_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1813_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1813_26_end: ;
}
void Frames::event_func_5826()
{
    // event 1814_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1814_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (50))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1814_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1814_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -13);
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1814_26_end: ;
}
void Frames::event_func_5827()
{
    // event 1815_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1815_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (90))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1815_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1815_26_end;
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1 = true;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        media.play_id(SOUND_DRILL_ON_74, -1, 1);
    }
    event_1815_26_end: ;
}
void Frames::event_func_5828()
{
    // event 1816_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1816_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (110))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1816_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1816_26_end: ;
}
void Frames::event_func_5829()
{
    // event 1817_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1817_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1817_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1817_26_end: ;
}
void Frames::event_func_5830()
{
    // event 1818_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_standby_1)) goto event_1818_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (10))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1818_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1 = true;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1818_26_end: ;
}
void Frames::event_func_5831()
{
    // event 1819_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1819_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (40))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1819_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-1, 0));
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0)+32));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1819_26_end: ;
}
void Frames::event_func_5832()
{
    // event 1820_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1820_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (35))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1820_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(get_min(((Active*)get_instance(player_389_instances))->get_x()+10, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0)-32), ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0)-400));
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(player_389_instances))->get_y()-10);
        }
    }
    event_1820_26_end: ;
}
void Frames::event_func_5833()
{
    // event 1821_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1821_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (40))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1821_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0))*0.07);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(7)-((Active*)*it)->alterables->values.get(1))*0.07);
        }
        media.play_id(SOUND_FLANGE_2_68, -1, 1);
    }
    event_1821_26_end: ;
}
void Frames::event_func_5834()
{
    // event 1822_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1822_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (100))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1822_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-2, 0));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+2, 0));
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1822_26_end: ;
}
void Frames::event_func_5835()
{
    // event 1823_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1823_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1823_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1823_26_end: ;
}
void Frames::event_func_5836()
{
    // event 1824_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1824_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (65))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1824_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1824_26_end: ;
}
void Frames::event_func_5837()
{
    // event 1825_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1825_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (65))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1825_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1825_26_end: ;
}
void Frames::event_func_5838()
{
    // event 1826_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1826_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (100))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1826_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0))*0.05);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(7)-((Active*)*it)->alterables->values.get(1))*0.05);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1826_26_end: ;
}
void Frames::event_func_5839()
{
    // event 1827_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1827_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (100))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1827_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+1, 16));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+1, 16));
        }
    }
    event_1827_26_end: ;
}
void Frames::event_func_5840()
{
    // event 1828_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1)) goto event_1828_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1828_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_standby_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = true;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1828_26_end: ;
}
void Frames::event_func_5841()
{
    // event 1829_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1829_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1829_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_min(get_max(0, ((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(10)-((Active*)*it)->alterables->values.get(8)), 3));
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-1, 0));
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
        }
    }
    event_1829_26_end: ;
}
void Frames::event_func_5842()
{
    // event 1830_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1830_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (30))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1830_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(2, 4);
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        media.play_id(SOUND_COMMON_BLASTER7_73, -1, 1);
    }
    event_1830_26_end: ;
}
void Frames::event_func_5843()
{
    // event 1831_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1831_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (8))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1831_26_end;
        FrameObject * single_instance_1831_26_0; single_instance_1831_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossclaw_1389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossreflectobeam_1282(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1831_26_0 == NULL)
                    single_instance_1831_26_0 = new_obj;
            }
        }
    }
    event_1831_26_end: ;
}
void Frames::event_func_5844()
{
    // event 1832_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1832_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1832_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_min(get_max(0, ((Active*)*it)->alterables->values.get(8))*2-get_min(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(10), 16), 3));
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1832_26_end: ;
}
void Frames::event_func_5845()
{
    // event 1833_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1833_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (14))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1833_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(2, -2);
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1833_26_end: ;
}
void Frames::event_func_5846()
{
    // event 1834_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1834_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1834_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+1, 16));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+1, 16));
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1834_26_end: ;
}
void Frames::event_func_5847()
{
    // event 1835_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1835_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1835_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0))*0.1);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(7)-((Active*)*it)->alterables->values.get(1))*0.1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1835_26_end: ;
}
void Frames::event_func_5848()
{
    // event 1836_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1)) goto event_1836_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1836_26_end;
            group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_standby_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = true;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1836_26_end: ;
}
void Frames::event_func_5849()
{
    // event 1837_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1837_26_end;
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossclawhitbox_1388_instances.has_selection()) goto event_1837_26_end;
            group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1 = true;
        }
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, -1);
            ((Active*)*it)->force_animation(7);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1837_26_end: ;
}
void Frames::event_func_5850()
{
    // event 1838_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1838_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1838_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+3, 20));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+3, 20));
            ((Active*)*it)->alterables->values.add(4, 12);
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(4))*50-45, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->alterables->values.get(4))*50, 0);
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(4)-40)*((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-10, ((Active*)get_instance(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120));
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*32));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, sin_deg(((Active*)*it)->alterables->values.get(8)*math_helper*2*3)*-32));
        }
    }
    event_1838_26_end: ;
}
void Frames::event_func_5851()
{
    // event 1839_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1839_26_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1839_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1839_26_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1839_26_0_end;
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
        dynamic_1839_26_0_end: ;
    }
    event_1839_26_end: ;
}
void Frames::event_func_5852()
{
    // event 1840_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1840_26_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1840_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1840_26_end;
        FrameObject * single_instance_1840_26_0; single_instance_1840_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossclaw_1389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1840_26_0 == NULL)
                    single_instance_1840_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1840_26_0))->set_x(((Active*)single_instance_1840_26_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1840_26_0))->set_y(((Active*)single_instance_1840_26_0)->get_y()-20+randrange(41));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_1840_26_end: ;
}
void Frames::event_func_5853()
{
    // event 1841_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1841_26_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1841_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        FrameObject * single_instance_1841_26_0; single_instance_1841_26_0 = pick_random(bossclawpiece1_1281_instances);
        if (single_instance_1841_26_0 == NULL) goto event_1841_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1841_26_end;
        FrameObject * single_instance_1841_26_1; single_instance_1841_26_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)single_instance_1841_26_0)->x + 0, ((Active*)single_instance_1841_26_0)->y + 0), ((Active*)single_instance_1841_26_0)->layer);
            if (single_instance_1841_26_1 == NULL)
                single_instance_1841_26_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1841_26_1))->set_x(((Active*)single_instance_1841_26_1)->get_x()-15+randrange(31));
        ((Active*)((Active*)single_instance_1841_26_1))->set_y(((Active*)single_instance_1841_26_1)->get_y()-15+randrange(31));
    }
    event_1841_26_end: ;
}
void Frames::event_func_5854()
{
    // event 1842_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1842_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1842_26_end;
        yellowspringupleft_432_instances.clear_selection();
        pick_objects_in_zone(yellowspringupleft_432_instances, 0, 0, 7483, 1200);
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1842_26_end: ;
}
void Frames::event_func_5855()
{
    // event 1843_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1843_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1843_26_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossclaw_1389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        // select single: false true true
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator p_it(bossclawpiece1_1281_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        // select single: false true true
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator p_it(bossclawpiece4_1278_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
            group_main_engine_level_specific_methods_bosses_boss_claw_basics_1 = false;
    
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -16);
        }
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(8)*-2+4);
        }
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1843_26_1; single_instance_1843_26_1 = NULL;
        // select single: true false false
        yellowspringupleft_432_instances.clear_selection();
        for (ObjectIterator p_it(yellowspringupleft_432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1843_26_1 == NULL)
                    single_instance_1843_26_1 = new_obj;
            }
        }
        bossclawbase_1393_instances.clear_selection();
        for (ObjectIterator it(bossclawbase_1393_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1843_26_end: ;
}
void Frames::event_func_5856()
{
    // event 1844_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1844_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1844_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.5);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.5);
        }
    }
    event_1844_26_end: ;
}
void Frames::event_func_5857()
{
    // event 1845_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1845_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1845_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossclawpiece1_1281_instances.has_selection()) goto event_1845_26_end;
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1845_26_0; single_instance_1845_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossclawpiece1_1281_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1845_26_0 == NULL)
                    single_instance_1845_26_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
    }
    event_1845_26_end: ;
}
void Frames::event_func_5858()
{
    // event 1846_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1846_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1846_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(bossclawpiece1_1281_instances, qualifier_8)) goto event_1846_26_end;
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1846_26_0; single_instance_1846_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossclawpiece1_1281_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1846_26_0 == NULL)
                    single_instance_1846_26_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
    }
    event_1846_26_end: ;
}
void Frames::event_func_5859()
{
    // event 1847_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1847_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (20))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1847_26_end;
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!bossclawpiece1_1281_instances.has_selection()) goto event_1847_26_end;
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1847_26_end: ;
}
void Frames::event_func_5860()
{
    // event 1848_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1)) goto event_1848_26_end;
        if (!((bossclawpiece1_1281_instances.size()) == (0))) goto event_1848_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
            group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(6538, 525);
            pos_end_1848_26_0: ;
        }
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1848_26_end: ;
}
void Frames::event_func_5861()
{
    // event 1849_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1849_26_end;
        bossreflectobeam_1282_instances.clear_selection();
        for (ObjectIterator it(bossreflectobeam_1282_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1849_26_end: ;
}
void Frames::event_func_5862()
{
    // event 1850_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1850_26_end;
        bossreflectobeam_1282_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(bossreflectobeam_1282_instances, qualifier_8)) goto event_1850_26_end;
        for (ObjectIterator it(bossreflectobeam_1282_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(4096)) { it.deselect(); continue; }
        }
        if (!bossreflectobeam_1282_instances.has_selection()) goto event_1850_26_end;
        for (ObjectIterator it(bossreflectobeam_1282_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(12);
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        FrameObject * single_instance_1850_26_0; single_instance_1850_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossreflectobeam_1282_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1850_26_0 == NULL)
                    single_instance_1850_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1850_26_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_1850_26_0))->set_x(((Active*)single_instance_1850_26_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1850_26_0))->set_y(((Active*)single_instance_1850_26_0)->get_y()-10+randrange(21));
    }
    event_1850_26_end: ;
}
void Frames::event_func_5863()
{
    // event 1852_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1852_26_end;
        bossreflectobeam_1282_instances.clear_selection();
        for (ObjectIterator it(bossreflectobeam_1282_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!bossreflectobeam_1282_instances.has_selection()) goto event_1852_26_end;
        for (ObjectIterator it(bossreflectobeam_1282_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1852_26_end: ;
}
void Frames::event_func_5864()
{
    // event 1853_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1853_26_end;
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1853_26_end: ;
}
void Frames::event_func_5865()
{
    // event 1854_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1854_26_end;
        minibossflame_1199_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, playercharactersensor_383_instances)) goto event_1854_26_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1854_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1854_26_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (8))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1854_26_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1854_26_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1854_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1854_26_end: ;
}
void Frames::event_func_5866()
{
    // event 1865_26
    {
        if (!(group_main_engine_1)) goto event_1865_26_end;
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar1_1407_instances.has_selection()) goto event_1865_26_end;
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1865_26_end: ;
}
void Frames::event_func_5867()
{
    // event 1866_26
    {
        if (!(group_main_engine_1)) goto event_1866_26_end;
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar1_1407_instances.has_selection()) goto event_1866_26_end;
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1866_26_end: ;
}
void Frames::event_func_5868()
{
    // event 1867_26
    {
        if (!(group_main_engine_1)) goto event_1867_26_end;
        gimmickmovingpillar2_1408_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar2_1408_instances.has_selection()) goto event_1867_26_end;
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1867_26_end: ;
}
void Frames::event_func_5869()
{
    // event 1868_26
    {
        if (!(group_main_engine_1)) goto event_1868_26_end;
        gimmickmovingpillar2_1408_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar2_1408_instances.has_selection()) goto event_1868_26_end;
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1868_26_end: ;
}
void Frames::event_func_5870()
{
    // event 1869_26
    {
        if (!(group_main_engine_1)) goto event_1869_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar3_1409_instances.has_selection()) goto event_1869_26_end;
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1869_26_end: ;
}
void Frames::event_func_5871()
{
    // event 1870_26
    {
        if (!(group_main_engine_1)) goto event_1870_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar3_1409_instances.has_selection()) goto event_1870_26_end;
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1870_26_end: ;
}
void Frames::event_func_5872()
{
    // event 1871_26
    {
        if (!(group_main_engine_1)) goto event_1871_26_end;
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!gimmickmovingpillar1_1407_instances.has_selection()) goto event_1871_26_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1871_26_end: ;
}
