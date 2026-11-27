#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9121()
{
    // event 1466_37
    {
        if (!(group_main_engine_1)) goto event_1466_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1466_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1466_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1466_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) > (330))) goto event_1466_37_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(0)) == (((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(2)))) goto event_1466_37_end;
        ((Active*)get_instance(switchdoor_735_instances))->set_y(((Active*)get_instance(switchdoor_735_instances))->get_y()-2);
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.add(2, 2);
    }
    event_1466_37_end: ;
}
void Frames::event_func_9122()
{
    // event 1467_37
    {
        if (!(group_main_engine_1)) goto event_1467_37_end;
        if (!(((Active*)get_instance(switchplatform_2100_instances))->alterables->flags.is_off(1))) goto event_1467_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) >= (24))) goto event_1467_37_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->flags.enable(1);
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1467_37_end: ;
}
void Frames::event_func_9123()
{
    // event 1469_37
    {
        if (!(group_main_engine_1)) goto event_1469_37_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!sbbackeye2_2242_instances.has_selection()) goto event_1469_37_end;
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64+sin_deg(((Active*)*it)->alterables->values.get(0))*64);
        }
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+4)%math_helper%360);
        }
    }
    event_1469_37_end: ;
}
void Frames::event_func_9124()
{
    // event 1479_37
    {
        if (!(group_main_engine_1)) goto event_1479_37_end;
        gimmickspincup_2249_instances.clear_selection();
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+357)%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-1, 0));
        }
        gimmickspincupstartpoint_2268_instances.clear_selection();
        for (ObjectIterator it(gimmickspincupstartpoint_2268_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickspincup_2249_instances, it.current_index));
            if (parent == NULL) goto pos_end_1479_37_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1479_37_0: ;
        }
        for (ObjectIterator it(gimmickspincupstartpoint_2268_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(gimmickspincup_2249_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1479_37_end: ;
}
void Frames::event_func_9125()
{
    // event 1481_37
    {
        if (!(group_main_engine_1)) goto event_1481_37_end;
        gimmickspincup_2249_instances.clear_selection();
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickspincup_2249_instances.has_selection()) goto event_1481_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 43);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickspincup_2249_instances, default_active_instance))->get_action_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickspincup_2249_instances, default_active_instance))->get_action_y());
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, cos_deg(((Active*)get_single(gimmickspincup_2249_instances, default_active_instance))->alterables->values.get(0))*6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, sin_deg(((Active*)get_single(gimmickspincup_2249_instances, default_active_instance))->alterables->values.get(0))*-6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1481_37_end: ;
}
void Frames::event_func_9126()
{
    // event 1482_37
    {
        if (!(group_main_engine_1)) goto event_1482_37_end;
        gimmickspincup_2249_instances.clear_selection();
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickspincup_2249_instances.has_selection()) goto event_1482_37_end;
        gimmickspincuplandpoint_2267_instances.clear_selection();
        if (!check_overlap(gimmickspincup_2249_instances, gimmickspincuplandpoint_2267_instances)) goto event_1482_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(1, 60);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(2)-1);
        }
    }
    event_1482_37_end: ;
}
void Frames::event_func_9127()
{
    // event 1511_37
    bool or_result_1511_37 = false;
    bool or_temp_result_1511_37_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1511_37_0_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1511_37_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_7)) goto or_event_1511_37_0_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1511_37_0_end;
        or_result_1511_37 = true;
        or_temp_result_1511_37_0 = true;
    }
    or_event_1511_37_0_end: ;
    enemydrone_2222_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1511_37_0) {
        enemydrone_2222_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1511_37
    bool or_temp_result_1511_37_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1511_37_1_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1511_37_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_8)) goto or_event_1511_37_1_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1511_37_1_end;
        or_result_1511_37 = true;
        or_temp_result_1511_37_1 = true;
    }
    or_event_1511_37_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1511_37_1) {
        enemydrone_2222_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1511_37
    bool or_temp_result_1511_37_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1511_37_2_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1511_37_2_end;
        or_result_1511_37 = true;
        or_temp_result_1511_37_2 = true;
        or_event_1511_37_2_end: ;
        if (or_temp_result_1511_37_2) {
            enemydrone_2222_instances.save_selection();
        }
        if (!or_result_1511_37) goto or_final_or_event_1511_37_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemydrone_2222_instances.empty_selection();
        if (or_temp_result_1511_37_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1511_37_0 || or_temp_result_1511_37_1 || or_temp_result_1511_37_2) {
            enemydrone_2222_instances.restore_selection();
        }
        if (or_temp_result_1511_37_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1511_37_0; single_instance_1511_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1511_37_0 == NULL)
                    single_instance_1511_37_0 = new_obj;
            }
        }
        FrameObject * single_instance_1511_37_1; single_instance_1511_37_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1511_37_1 == NULL)
                    single_instance_1511_37_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1511_37_2_end: ;
}
void Frames::event_func_9128()
{
    // event 1541_37
    {
        if (!(group_main_engine_1)) goto event_1541_37_end;
        enemylimiter_350_instances.clear_selection();
        enemydnacannon_2264_instances.clear_selection();
        if (!check_overlap(enemylimiter_350_instances, enemydnacannon_2264_instances)) goto event_1541_37_end;
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1541_37_end: ;
}
void Frames::event_func_9129()
{
    // event 1542_37
    bool or_result_1542_37 = false;
    bool or_temp_result_1542_37_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1542_37_0_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto or_event_1542_37_0_end;
        or_result_1542_37 = true;
        or_temp_result_1542_37_0 = true;
    }
    or_event_1542_37_0_end: ;
    enemydnacannon_2264_instances.clear_saved_selection();
    if (or_temp_result_1542_37_0) {
        enemydnacannon_2264_instances.save_selection();
    }
    // event 1542_37
    bool or_temp_result_1542_37_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1542_37_1_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto or_event_1542_37_1_end;
        or_result_1542_37 = true;
        or_temp_result_1542_37_1 = true;
        or_event_1542_37_1_end: ;
        if (or_temp_result_1542_37_1) {
            enemydnacannon_2264_instances.save_selection();
        }
        if (!or_result_1542_37) goto or_final_or_event_1542_37_1_end;
        enemydnacannon_2264_instances.empty_selection();
        if (or_temp_result_1542_37_0 || or_temp_result_1542_37_1) {
            enemydnacannon_2264_instances.restore_selection();
        }
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_1542_37_1_end: ;
}
void Frames::event_func_9130()
{
    // event 1543_37
    {
        if (!(group_main_engine_1)) goto event_1543_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1543_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1543_37_end: ;
}
void Frames::event_func_9131()
{
    // event 1544_37
    {
        if (!(group_main_engine_1)) goto event_1544_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1544_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1544_37_end: ;
}
void Frames::event_func_9132()
{
    // event 1545_37
    {
        if (!(group_main_engine_1)) goto event_1545_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1545_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1545_37_end: ;
}
void Frames::event_func_9133()
{
    // event 1546_37
    {
        if (!(group_main_engine_1)) goto event_1546_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (80))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1546_37_end;
        FrameObject * single_instance_1546_37_0; single_instance_1546_37_0 = pick_random(enemydnacannon_2264_instances);
        if (single_instance_1546_37_0 == NULL) goto event_1546_37_end;
        ((Active*)((Active*)single_instance_1546_37_0))->force_animation(10);
        ((Active*)((Active*)single_instance_1546_37_0))->alterables->values.set(4, 1);
        ((Active*)((Active*)single_instance_1546_37_0))->alterables->values.set(5, 0);
        FrameObject * single_instance_1546_37_1; single_instance_1546_37_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1546_37_0)->get_action_x() - ((Active*)single_instance_1546_37_0)->layer->off_x + 0, ((Active*)single_instance_1546_37_0)->get_action_y() - ((Active*)single_instance_1546_37_0)->layer->off_y + 0), ((Active*)single_instance_1546_37_0)->layer);
            if (single_instance_1546_37_1 == NULL)
                single_instance_1546_37_1 = new_obj;
        }
        media.play_id(SOUND_LASER_DARK_267, -1, 1);
        ((Active*)((Active*)single_instance_1546_37_1))->set_x_scale(0.6);
    }
    event_1546_37_end: ;
}
void Frames::event_func_9134()
{
    // event 1547_37
    {
        if (!(group_main_engine_1)) goto event_1547_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1547_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1547_37_end: ;
}
void Frames::event_func_9135()
{
    // event 1548_37
    {
        if (!(group_main_engine_1)) goto event_1548_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1548_37_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1548_37_end;
        {
            SavedSelection extra_enemydnacannon_2264_instances(enemydnacannon_2264_instances);
            for (SavedIterator it(extra_enemydnacannon_2264_instances); !it.end(); ++it) {
                foreach_instance_dna = ((Active*)*it);
                foreach_dna_37();
            }
        }
    }
    event_1548_37_end: ;
}
void Frames::event_func_9136()
{
    // event 1550_37
    {
        if (!(group_main_engine_1)) goto event_1550_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (60))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1550_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, -40);
        }
    }
    event_1550_37_end: ;
}
void Frames::event_func_9137()
{
    // event 1551_37
    {
        if (!(group_main_engine_1)) goto event_1551_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (5))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1551_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(4, 5);
        }
    }
    event_1551_37_end: ;
}
void Frames::event_func_9138()
{
    // event 1552_37
    {
        if (!(group_main_engine_1)) goto event_1552_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1552_37_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1552_37_end;
        FrameObject * single_instance_1552_37_0; single_instance_1552_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1552_37_0 == NULL)
                    single_instance_1552_37_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1552_37_0))->set_x(((Active*)single_instance_1552_37_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1552_37_0))->set_y(((Active*)single_instance_1552_37_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1552_37_1_end;
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
        dynamic_1552_37_1_end: ;
    }
    event_1552_37_end: ;
}
void Frames::event_func_9139()
{
    // event 1553_37
    {
        if (!(group_main_engine_1)) goto event_1553_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (5))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1553_37_end;
        FrameObject * single_instance_1553_37_0; single_instance_1553_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1553_37_0 == NULL)
                    single_instance_1553_37_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1553_37_0))->set_direction(2);
        FrameObject * single_instance_1553_37_1; single_instance_1553_37_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1553_37_1 == NULL)
                    single_instance_1553_37_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1553_37_end: ;
}
void Frames::event_func_9140()
{
    // event 1555_37
    {
        if (!(group_main_engine_1)) goto event_1555_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1555_37_end;
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(4, 6);
        }
    }
    event_1555_37_end: ;
}
void Frames::event_func_9141()
{
    // event 1556_37
    {
        if (!(group_main_engine_1)) goto event_1556_37_end;
        enemydnacannonbase_2262_instances.clear_selection();
        enemydnacannon_2264_instances.clear_selection();
        if (!check_overlap(enemydnacannonbase_2262_instances, enemydnacannon_2264_instances)) goto event_1556_37_end;
        for (ObjectIterator it(enemydnacannonbase_2262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(enemydnacannon_2264_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1556_37_end: ;
}
void Frames::event_func_9142()
{
    // event 1557_37
    {
        if (!(group_main_engine_1)) goto event_1557_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_y(((Active*)get_instance(enemydnacannon_2264_instances, it.current_index, default_active_instance))->get_action_y());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemydnacannon_2264_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemydnacannon_2264_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemydnacannonbase_2262_instances.clear_selection();
        for (ObjectIterator it(enemydnacannonbase_2262_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1557_37_end: ;
}
void Frames::event_func_9143()
{
    // event 1558_37
    {
        if (!(group_main_engine_1)) goto event_1558_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1558_37_end: ;
}
void Frames::event_func_9144()
{
    // event 1559_37
    bool or_result_1559_37 = false;
    bool or_temp_result_1559_37_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1559_37_0_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto or_event_1559_37_0_end;
        or_result_1559_37 = true;
        or_temp_result_1559_37_0 = true;
    }
    or_event_1559_37_0_end: ;
    enemydnacannon_2264_instances.clear_saved_selection();
    if (or_temp_result_1559_37_0) {
        enemydnacannon_2264_instances.save_selection();
    }
    // event 1559_37
    bool or_temp_result_1559_37_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1559_37_1_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto or_event_1559_37_1_end;
        or_result_1559_37 = true;
        or_temp_result_1559_37_1 = true;
        or_event_1559_37_1_end: ;
        if (or_temp_result_1559_37_1) {
            enemydnacannon_2264_instances.save_selection();
        }
        if (!or_result_1559_37) goto or_final_or_event_1559_37_1_end;
        enemydnacannon_2264_instances.empty_selection();
        if (or_temp_result_1559_37_0 || or_temp_result_1559_37_1) {
            enemydnacannon_2264_instances.restore_selection();
        }
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    or_final_or_event_1559_37_1_end: ;
}
void Frames::event_func_9145()
{
    // event 1560_37
    {
        if (!(group_main_engine_1)) goto event_1560_37_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1560_37_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(frame_left()-32+global_values->get(16)-(105-global_values->get(19)*53));
            ((Active*)*it)->move_front();
        }
    }
    event_1560_37_end: ;
}
void Frames::event_func_9146()
{
    // event 1561_37
    {
        if (!(group_main_engine_1)) goto event_1561_37_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1561_37_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(frame_left()+32);
            ((Active*)*it)->move_front();
        }
    }
    event_1561_37_end: ;
}
void Frames::event_func_9147()
{
    // event 1562_37
    {
        if (!(group_main_engine_1)) goto event_1562_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1562_37_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1562_37_end: ;
}
void Frames::event_func_9148()
{
    // event 1563_37
    {
        if (!(group_main_engine_1)) goto event_1563_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-300))) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1563_37_end;
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1563_37_end: ;
}
void Frames::event_func_9149()
{
    // event 1565_37
    {
        if (!(group_main_engine_1)) goto event_1565_37_end;
        enemydnalaser_2236_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemydnalaser_2236_instances, playercharactersensor_383_instances)) goto event_1565_37_end;
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1565_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1565_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1565_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 2);
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 30);
        }
    }
    event_1565_37_end: ;
}
void Frames::event_func_9150()
{
    // event 1566_37
    {
        if (!(group_main_engine_1)) goto event_1566_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1566_37_end;
        qualifier_20.clear_selection();
        if (!check_overlap(enemydnalaser_2236_instances, qualifier_20)) goto event_1566_37_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1566_37_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
    }
    event_1566_37_end: ;
}
void Frames::event_func_9151()
{
    // event 1567_37
    {
        if (!(group_main_engine_1)) goto event_1567_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1567_37_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_1567_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1567_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1567_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) < (1))) goto event_1567_37_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_1567_37_end: ;
}
void Frames::event_func_9152()
{
    // event 1568_37
    {
        if (!(group_main_engine_1)) goto event_1568_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1568_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1568_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1568_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->get_y()))) goto event_1568_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) < (1))) goto event_1568_37_end;
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-2, ((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->alterables->values.get(0)*0.2);
    }
    event_1568_37_end: ;
}
void Frames::event_func_9153()
{
    // event 1569_37
    {
        if (!(group_main_engine_1)) goto event_1569_37_end;
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!enemydnalaser_2236_instances.has_selection()) goto event_1569_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1569_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1569_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->get_y()))) goto event_1569_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) < (1))) goto event_1569_37_end;
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2, ((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(enemydnalaser_2236_instances, default_active_instance))->alterables->values.get(0)*0.2);
    }
    event_1569_37_end: ;
}
void Frames::event_func_9154()
{
    // event 1581_37
    bool or_result_1581_37 = false;
    bool or_temp_result_1581_37_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1581_37_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1581_37_0_end;
        or_result_1581_37 = true;
        or_temp_result_1581_37_0 = true;
    }
    or_event_1581_37_0_end: ;
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1581_37_0) {
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1581_37
    bool or_temp_result_1581_37_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1581_37_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1581_37_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, qualifier_7)) goto or_event_1581_37_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1581_37_1_end;
        or_result_1581_37 = true;
        or_temp_result_1581_37_1 = true;
    }
    or_event_1581_37_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1581_37_1) {
        enemyhoppermkii_2200_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1581_37
    bool or_temp_result_1581_37_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1581_37_2_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1581_37_2_end;
        or_result_1581_37 = true;
        or_temp_result_1581_37_2 = true;
        or_event_1581_37_2_end: ;
        if (or_temp_result_1581_37_2) {
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1581_37) goto or_final_or_event_1581_37_2_end;
        enemyhoppermkii_2200_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1581_37_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1581_37_0 || or_temp_result_1581_37_1 || or_temp_result_1581_37_2) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        FrameObject * single_instance_1581_37_0; single_instance_1581_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1581_37_0 == NULL)
                    single_instance_1581_37_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->values.set(24, -4);
            ((Active*)*it)->alterables->values.add(21, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(6, 6);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1581_37_2_end: ;
}
void Frames::event_func_9155()
{
    // event 1594_37
    {
        if (!(group_main_engine_1)) goto event_1594_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1594_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1594_37_end;
        if (not_always_1594_37 > loop_count) {
            not_always_1594_37 = loop_count + 2;
            goto event_1594_37_end;
        }
        not_always_1594_37 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1594_37_end: ;
}
void Frames::event_func_9156()
{
    // event 1607_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1607_37_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1607_37_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.set(0, 1);
    }
    event_1607_37_end: ;
}
void Frames::event_func_9157()
{
    // event 1608_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1608_37_end;
        levelsbbgplatform_2134_instances.clear_selection();
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->get_y()+242);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1608_37_end: ;
}
void Frames::event_func_9158()
{
    // event 1609_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1609_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (1))) goto event_1609_37_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1609_37_end;
        ((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.add(1, 1);
    }
    event_1609_37_end: ;
}
void Frames::event_func_9159()
{
    // event 1610_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1610_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (1))) goto event_1610_37_end;
        levelsbbgplatform_2134_instances.clear_selection();
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!levelsbbgplatform_2134_instances.has_selection()) goto event_1610_37_end;
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1610_37_0; single_instance_1610_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelsbbgplatform_2134_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1610_37_0 == NULL)
                    single_instance_1610_37_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1610_37_0))->set_scale(0.5);
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -8);
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    event_1610_37_end: ;
}
void Frames::event_func_9160()
{
    // event 1611_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1611_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (1))) goto event_1611_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(1)) > (7))) goto event_1611_37_end;
        ((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.set(0, 2);
    }
    event_1611_37_end: ;
}
void Frames::event_func_9161()
{
    // event 1612_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1612_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (2))) goto event_1612_37_end;
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!levelsbplatform1_2096_instances.has_selection()) goto event_1612_37_end;
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    event_1612_37_end: ;
}
void Frames::event_func_9162()
{
    // event 1613_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1613_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (2))) goto event_1613_37_end;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
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
    }
    event_1613_37_end: ;
}
void Frames::event_func_9163()
{
    // event 1614_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1614_37_end;
        if (!((((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->alterables->values.get(0)) == (2))) goto event_1614_37_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1614_37_end;
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_fly_in_1 = false;
    
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1614_37_end: ;
}
void Frames::event_func_9164()
{
    // event 1618_37
    {
        if (!(group_main_engine_1)) goto event_1618_37_end;
        if (!((global_values->get(4)) < (2))) goto event_1618_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5920))) goto event_1618_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1618_37_end;
        global_values->set(4, 2);
        global_values->set(5, 5920);
        global_values->set(6, 580);
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
    event_1618_37_end: ;
}
void Frames::event_func_9165()
{
    // event 1619_37
    {
        if (!(group_main_engine_1)) goto event_1619_37_end;
        if (!((global_values->get(4)) < (3))) goto event_1619_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10100))) goto event_1619_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1619_37_end;
        global_values->set(4, 3);
        global_values->set(5, 10290);
        global_values->set(6, 710);
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
    event_1619_37_end: ;
}
void Frames::event_func_9166()
{
    // event 1621_37
    {
        if (!(group_main_engine_1)) goto event_1621_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1621_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1621_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1621_37_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1621_37_end;
        if (not_always_1621_37 > loop_count) {
            not_always_1621_37 = loop_count + 2;
            goto event_1621_37_end;
        }
        not_always_1621_37 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_satellite_1) {
            group_main_engine_level_specific_methods_bosses_boss_satellite_1 = true;
        }
    }
    event_1621_37_end: ;
}
void Frames::event_func_9167()
{
    // event 1622_37
    {
        if (!(group_main_engine_1)) goto event_1622_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+40))) goto event_1622_37_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-100))) goto event_1622_37_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1622_37_end;
        if (not_always_1622_37 > loop_count) {
            not_always_1622_37 = loop_count + 2;
            goto event_1622_37_end;
        }
        not_always_1622_37 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
            group_main_engine_level_specific_methods_bosses_boss_satellite_1 = false;
    
    }
    event_1622_37_end: ;
}
void Frames::event_func_9168()
{
    // event 1623_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1623_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1623_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_x()-80))) goto event_1623_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
    }
    event_1623_37_end: ;
}
void Frames::event_func_9169()
{
    // event 1624_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1624_37_end;
        ((Active*)get_instance(bosssatellitetop_2246_instances))->move_back();
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->move_back();
    }
    event_1624_37_end: ;
}
void Frames::event_func_9170()
{
    // event 1625_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1625_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1625_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_front();
        }
    }
    event_1625_37_end: ;
}
void Frames::event_func_9171()
{
    // event 1626_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1626_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1626_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1626_37_end: ;
}
void Frames::event_func_9172()
{
    // event 1627_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1627_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1627_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+18)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.1, 0));
        }
    }
    event_1627_37_end: ;
}
void Frames::event_func_9173()
{
    // event 1628_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1628_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1628_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_layer(((Active*)*it)->layer->index+1+1-1);
            ((Active*)*it)->move_back();
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->set_layer(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->move_back();
        ((Active*)get_instance(bosssatellitetop_2246_instances))->set_layer(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(bosssatellitetop_2246_instances))->move_back();
    }
    event_1628_37_end: ;
}
void Frames::event_func_9174()
{
    // event 1629_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1629_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1629_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+6)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+5)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(9)*3);
        }
    }
    event_1629_37_end: ;
}
void Frames::event_func_9175()
{
    // event 1630_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1630_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(10)-((Active*)*it)->alterables->values.get(11)))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1630_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
    }
    event_1630_37_end: ;
}
void Frames::event_func_9176()
{
    // event 1631_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1631_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(10)+((Active*)*it)->alterables->values.get(11)))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1631_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -1);
        }
    }
    event_1631_37_end: ;
}
void Frames::event_func_9177()
{
    // event 1632_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1632_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1632_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1632_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1632_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1632_37_end: ;
}
void Frames::event_func_9178()
{
    // event 1633_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1633_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (250))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1633_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1633_37_end: ;
}
void Frames::event_func_9179()
{
    // event 1634_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1634_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (20))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1634_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (((Active*)*it)->alterables->values.get(5)-40)*0.1);
        }
    }
    event_1634_37_end: ;
}
void Frames::event_func_9180()
{
    // event 1635_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1635_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (20))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1635_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_1635_37_end: ;
}
void Frames::event_func_9181()
{
    // event 1636_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1636_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (80))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1636_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 16), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        // select single: false true true
        for (ObjectIterator p_it(bosssatellite_2251_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 40), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1636_37_end: ;
}
void Frames::event_func_9182()
{
    // event 1637_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1637_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1637_37_end;
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 5));
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(0, get_min(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)+0.5, 5));
    }
    event_1637_37_end: ;
}
void Frames::event_func_9183()
{
    // event 1638_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1638_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1638_37_end;
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+24))) { it.deselect(); continue; }
        }
        if (!minibossufobeam2_2253_instances.has_selection()) goto event_1638_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1638_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1638_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1638_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1638_37_end: ;
}
void Frames::event_func_9184()
{
    // event 1639_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1639_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1639_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()+30))) goto event_1639_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()-30))) goto event_1639_37_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(bosssatellitearm_2252_instances, default_active_instance))->get_y()-24))) goto event_1639_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1639_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1639_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1639_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1639_37_end: ;
}
void Frames::event_func_9185()
{
    // event 1640_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1640_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1640_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(0);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1640_37_end: ;
}
void Frames::event_func_9186()
{
    // event 1641_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1641_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1641_37_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)-0.5, 1));
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)-0.5, 1));
        }
    }
    event_1641_37_end: ;
}
void Frames::event_func_9187()
{
    // event 1642_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1642_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1642_37_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) == (1))) goto event_1642_37_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
    }
    event_1642_37_end: ;
}
void Frames::event_func_9188()
{
    // event 1643_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1643_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1643_37_end;
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossufobeam2_2253_instances.has_selection()) goto event_1643_37_end;
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1643_37_end: ;
}
void Frames::event_func_9189()
{
    // event 1644_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1644_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (200-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (200))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1644_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (((Active*)*it)->alterables->values.get(5)-40)*-0.1);
        }
    }
    event_1644_37_end: ;
}
void Frames::event_func_9190()
{
    // event 1645_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1645_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (200))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1645_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1645_37_end: ;
}
void Frames::event_func_9191()
{
    // event 1646_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1646_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1646_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1646_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1646_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1646_37_end: ;
}
void Frames::event_func_9192()
{
    // event 1647_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1647_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1647_37_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1647_37_end;
        FrameObject * single_instance_1647_37_0; single_instance_1647_37_0 = NULL;
        // select single: true false false
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1647_37_0 == NULL)
                    single_instance_1647_37_0 = new_obj;
            }
        }
    }
    event_1647_37_end: ;
}
void Frames::event_func_9193()
{
    // event 1648_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1648_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1648_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+12)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1648_37_end: ;
}
void Frames::event_func_9194()
{
    // event 1649_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1649_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1649_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+6)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, ((Active*)*it)->alterables->values.get(8)+120));
        }
    }
    event_1649_37_end: ;
}
void Frames::event_func_9195()
{
    // event 1650_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1650_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (70))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1650_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1650_37_end: ;
}
void Frames::event_func_9196()
{
    // event 1651_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1651_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1651_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -1);
        }
    }
    event_1651_37_end: ;
}
void Frames::event_func_9197()
{
    // event 1652_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1652_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1652_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(9)*5);
        }
    }
    event_1652_37_end: ;
}
void Frames::event_func_9198()
{
    // event 1653_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1653_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1653_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-6, ((Active*)*it)->alterables->values.get(8)));
        }
    }
    event_1653_37_end: ;
}
void Frames::event_func_9199()
{
    // event 1654_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1654_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1654_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1654_37_end: ;
}
void Frames::event_func_9200()
{
    // event 1655_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1655_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1655_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1655_37_end: ;
}
void Frames::event_func_9201()
{
    // event 1656_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1656_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1656_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1656_37_end: ;
}
void Frames::event_func_9202()
{
    // event 1657_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1657_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (10))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1657_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1657_37_end;
        FrameObject * single_instance_1657_37_0; single_instance_1657_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1657_37_0 == NULL)
                    single_instance_1657_37_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1657_37_end: ;
}
void Frames::event_func_9203()
{
    // event 1658_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1658_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (30))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1658_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (104))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1658_37_end;
        FrameObject * single_instance_1658_37_0; single_instance_1658_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1658_37_0 == NULL)
                    single_instance_1658_37_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1658_37_end: ;
}
void Frames::event_func_9204()
{
    // event 1659_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1659_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (50))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1659_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1659_37_end;
        FrameObject * single_instance_1659_37_0; single_instance_1659_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1659_37_0 == NULL)
                    single_instance_1659_37_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1659_37_end: ;
}
void Frames::event_func_9205()
{
    // event 1660_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1660_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (70))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1660_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1660_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        FrameObject * single_instance_1660_37_0; single_instance_1660_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellitearm_2252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1660_37_0 == NULL)
                    single_instance_1660_37_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1660_37_end: ;
}
void Frames::event_func_9206()
{
    // event 1661_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1661_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(bosssatellite_2251_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1661_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(5)*0.1);
        }
    }
    event_1661_37_end: ;
}
void Frames::event_func_9207()
{
    // event 1662_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1662_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1662_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(5)*-0.1);
        }
    }
    event_1662_37_end: ;
}
void Frames::event_func_9208()
{
    // event 1663_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1663_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1663_37_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(25, 1);
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+get_max(((Active*)*it)->alterables->values.get(23)*2, 8), 0);
        }
    }
    event_1663_37_end: ;
}
void Frames::event_func_9209()
{
    // event 1664_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1664_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (90))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1664_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->flags.enable(6);
        ((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.set(24, -3);
        ((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.set(23, 2);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1664_37_0; single_instance_1664_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellite_2251_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_37_0 == NULL)
                    single_instance_1664_37_0 = new_obj;
            }
        }
        FrameObject * single_instance_1664_37_1; single_instance_1664_37_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellite_2251_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_37_1 == NULL)
                    single_instance_1664_37_1 = new_obj;
            }
        }
    }
    event_1664_37_end: ;
}
void Frames::event_func_9210()
{
    // event 1665_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1665_37_end;
        if (!(((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->flags.is_on(6))) goto event_1665_37_end;
        if (!(((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->flags.is_off(16))) goto event_1665_37_end;
        ((Active*)get_instance(bosssatellitetop_2246_instances))->set_x(((Active*)get_instance(bosssatellitetop_2246_instances))->get_x()+((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.get(23));
        ((Active*)get_instance(bosssatellitetop_2246_instances))->set_y(((Active*)get_instance(bosssatellitetop_2246_instances))->get_y()+((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.get(24));
        ((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.add(25, 1);
        ((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.set(24, get_min(((Active*)get_instance(bosssatellitetop_2246_instances))->alterables->values.get(24)+0.4, 15));
    }
    event_1665_37_end: ;
}
void Frames::event_func_9211()
{
    // event 1666_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1666_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (45))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1666_37_end;
        FrameObject * single_instance_1666_37_0; single_instance_1666_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssatellite_2251_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1666_37_0 == NULL)
                    single_instance_1666_37_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1666_37_0))->set_x(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(17)*132)*(8+sin_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(17)*2)*40));
        ((Active*)((Active*)single_instance_1666_37_0))->set_y(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(17)*5)*80);
        ((Active*)((Active*)single_instance_1666_37_0))->force_speed(30+cos_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(17)*143)*10);
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(17, 1);
        }
    }
    event_1666_37_end: ;
}
void Frames::event_func_9212()
{
    // event 1667_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1667_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (90))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1667_37_end;
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->set_y(((Active*)get_instance(bosssatellitethrusters_2250_instances))->get_y()-((Active*)get_instance(bosssatellitethrusters_2250_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->alterables->values.add(0, 0.2);
    }
    event_1667_37_end: ;
}
void Frames::event_func_9213()
{
    // event 1668_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1668_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1668_37_end;
        if (!((minibossbarrier_924_instances.size()) > (0))) goto event_1668_37_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(5);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
    }
    event_1668_37_end: ;
}
void Frames::event_func_9214()
{
    // event 1669_37
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_satellite_1)) goto event_1669_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1669_37_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosssatellitearm_2252_instances, playercharactersensor_383_instances)) goto event_1669_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1669_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1669_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1669_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1669_37_end: ;
}
void Frames::event_func_9215()
{
    // event 1670_37
    {
        if (!(group_main_engine_1)) goto event_1670_37_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1670_37_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+10)%math_helper%360);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(((Active*)*it)->alterables->values.get(7))*3);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3)*0.2);
            ((Active*)*it)->set_scale(1.0+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3)*-0.002);
        }
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->set_y(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(7))*3);
        ((Active*)get_instance(bosssatellitetop_2246_instances))->set_y(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->alterables->values.get(7))*3);
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->set_x(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssatellitetop_2246_instances))->set_x(((Active*)get_single(bosssatellite_2251_instances, default_active_instance))->get_x());
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssatellitearm_2252_instances, it.current_index));
            if (parent == NULL) goto pos_end_1670_37_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1670_37_0: ;
        }
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(((Active*)*it)->alterables->values.get(0));
        }
        {
            FrameObject * parent = ((Active*)get_single(bosssatellite_2251_instances));
            if (parent == NULL) goto pos_end_1670_37_1;
            ((Active*)get_instance(minibossufobeam_1721_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 32);
            pos_end_1670_37_1: ;
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0));
    }
    event_1670_37_end: ;
}
void Frames::event_func_9216()
{
    // event 1678_37
    {
        if (!(group_main_engine_1)) goto event_1678_37_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (3))) goto event_1678_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (43))) goto event_1678_37_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_visible(true);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->move_front();
    }
    event_1678_37_end: ;
}
void Frames::event_func_9217()
{
    // event 1900_37
    {
        if (!(group_main_engine_1)) goto event_1900_37_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()+(int(((SystemBox*)*it)->alterables->values.get(9)-frame_left())%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(10));
        }
        ((SystemBox*)get_instance(levelparallaxzaoship_2121_instances))->set_global_position(frame_left()*0.6+100, frame_top()*0.6+100);
    }
    event_1900_37_end: ;
}
void Frames::event_func_9218()
{
    // event 1901_37
    {
        if (!(group_pause_1)) goto event_1901_37_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1901_37_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1901_37_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1901_37_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1901_37_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
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
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
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
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardlightningradial2_2247_instances.clear_selection();
        for (ObjectIterator it(hazardlightningradial2_2247_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->stop_animation();
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->stop_animation();
        ((Active*)get_instance(playerassist_2028_instances))->stop_animation();
        ((Active*)get_instance(playerassistcopilot_2219_instances))->stop_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1901_37_end: ;
}
void Frames::event_func_9219()
{
    // event 1902_37
    bool or_result_1902_37 = false;
    bool or_temp_result_1902_37_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1902_37_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1902_37_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1902_37_0_end;
        or_result_1902_37 = true;
        or_temp_result_1902_37_0 = true;
    }
    or_event_1902_37_0_end: ;
    // event 1902_37
    bool or_temp_result_1902_37_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1902_37_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1902_37_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1902_37_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1902_37_1_end;
        or_result_1902_37 = true;
        or_temp_result_1902_37_1 = true;
        or_event_1902_37_1_end: ;
        if (!or_result_1902_37) goto or_final_or_event_1902_37_1_end;
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
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
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
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
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
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardlightningradial2_2247_instances.clear_selection();
        for (ObjectIterator it(hazardlightningradial2_2247_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        minibossufobeam2_2253_instances.clear_selection();
        for (ObjectIterator it(minibossufobeam2_2253_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->start_animation();
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosssatellitethrusters_2250_instances))->start_animation();
        ((Active*)get_instance(playerassist_2028_instances))->start_animation();
        ((Active*)get_instance(playerassistcopilot_2219_instances))->start_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1902_37_1_end: ;
}
void Frames::handle_frame_38_events()
{
    test_collisions_37();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_8682();
    event_func_8732();
    event_func_8733();
    event_func_8741();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
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
    event_func_1406();
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
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_5410();
    event_func_5411();
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
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
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
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
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
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
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
    event_func_1570();
    event_func_1571();
    event_func_1572();
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
    event_func_1604();
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
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
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
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
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
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
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
    event_func_3722();
    event_func_3723();
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
    event_func_1732();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_9101();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
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
    event_func_1776();
    event_func_9102();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
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
    event_func_1866();
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
    event_func_9103();
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
    event_func_1961();
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
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_2004();
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
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
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
    event_func_2082();
    event_func_2083();
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
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
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
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
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
    event_func_2288();
    event_func_2289();
    event_func_2290();
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
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
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
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
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
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
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
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_4914();
    event_func_8625();
    event_func_4748();
    event_func_9104();
    event_func_9105();
    event_func_9106();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_4357();
    event_func_4358();
    event_func_4359();
    event_func_4360();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_8626();
    event_func_8627();
    event_func_8628();
    event_func_8629();
    event_func_9107();
    event_func_9108();
    event_func_9109();
    event_func_8633();
    event_func_8634();
    event_func_8635();
    event_func_8636();
    event_func_9110();
    event_func_8638();
    event_func_8639();
    event_func_9111();
    event_func_9112();
    event_func_9113();
    event_func_9114();
    event_func_9115();
    event_func_9116();
    event_func_9117();
    event_func_8238();
    event_func_9118();
    event_func_9119();
    event_func_9120();
    event_func_9121();
    event_func_9122();
    event_func_9123();
    event_func_8661();
    event_func_8662();
    event_func_8663();
    event_func_8664();
    event_func_8665();
    event_func_8666();
    event_func_8667();
    event_func_9124();
    event_func_9125();
    event_func_9126();
    event_func_8668();
    event_func_8669();
    event_func_6688();
    event_func_8670();
    event_func_8671();
    event_func_8672();
    event_func_8673();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_8674();
    event_func_8675();
    event_func_8676();
    event_func_8677();
    event_func_8678();
    event_func_8679();
    event_func_8680();
    event_func_8681();
    event_func_8683();
    event_func_8684();
    event_func_8685();
    event_func_8686();
    event_func_8687();
    event_func_8688();
    event_func_9127();
    event_func_8690();
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8713();
    event_func_8714();
    event_func_8715();
    event_func_8716();
    event_func_8717();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
    event_func_9128();
    event_func_9129();
    event_func_9130();
    event_func_9131();
    event_func_9132();
    event_func_9133();
    event_func_9134();
    event_func_9135();
    event_func_9136();
    event_func_9137();
    event_func_9138();
    event_func_9139();
    event_func_9140();
    event_func_9141();
    event_func_9142();
    event_func_9143();
    event_func_9144();
    event_func_9145();
    event_func_9146();
    event_func_9147();
    event_func_9148();
    event_func_9149();
    event_func_9150();
    event_func_9151();
    event_func_9152();
    event_func_9153();
    event_func_8724();
    event_func_8725();
    event_func_8726();
    event_func_8727();
    event_func_8728();
    event_func_8729();
    event_func_8730();
    event_func_8731();
    event_func_9154();
    event_func_8735();
    event_func_8736();
    event_func_8737();
    event_func_8738();
    event_func_8739();
    event_func_8740();
    event_func_9155();
    event_func_2996();
    event_func_8771();
    event_func_8772();
    event_func_8773();
    event_func_5710();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_fly_in_1) goto group_main_engine_level_specific_methods_cutscenes_fly_in_1_end;
    event_func_8775();
    event_func_8776();
    event_func_8777();
    event_func_9156();
    event_func_9157();
    event_func_9158();
    event_func_9159();
    event_func_9160();
    event_func_9161();
    event_func_9162();
    event_func_9163();
    group_main_engine_level_specific_methods_cutscenes_fly_in_1_end: ;
    event_func_8545();
    event_func_8863();
    event_func_8864();
    event_func_9164();
    event_func_9165();
    event_func_9166();
    event_func_9167();
    if (!group_main_engine_level_specific_methods_bosses_boss_satellite_1) goto group_main_engine_level_specific_methods_bosses_boss_satellite_1_end;
    event_func_9168();
    event_func_9169();
    event_func_9170();
    event_func_9171();
    event_func_9172();
    event_func_9173();
    event_func_9174();
    event_func_9175();
    event_func_9176();
    event_func_9177();
    event_func_9178();
    event_func_9179();
    event_func_9180();
    event_func_9181();
    event_func_9182();
    event_func_9183();
    event_func_9184();
    event_func_9185();
    event_func_9186();
    event_func_9187();
    event_func_9188();
    event_func_9189();
    event_func_9190();
    event_func_9191();
    event_func_9192();
    event_func_9193();
    event_func_9194();
    event_func_9195();
    event_func_9196();
    event_func_9197();
    event_func_9198();
    event_func_9199();
    event_func_9200();
    event_func_9201();
    event_func_9202();
    event_func_9203();
    event_func_9204();
    event_func_9205();
    event_func_9206();
    event_func_9207();
    event_func_9208();
    event_func_9209();
    event_func_9210();
    event_func_9211();
    event_func_9212();
    event_func_9213();
    event_func_9214();
    group_main_engine_level_specific_methods_bosses_boss_satellite_1_end: ;
    event_func_9215();
    event_func_9052();
    event_func_9053();
    event_func_9054();
    event_func_9055();
    event_func_9056();
    event_func_9057();
    event_func_9216();
    event_func_9059();
    event_func_9060();
    event_func_9061();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
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
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
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
    event_func_8558();
    event_func_9217();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_9218();
    event_func_9219();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
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
