#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7135()
{
    // event 1516_31
    {
        if (!(group_main_engine_1)) goto event_1516_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1516_31_end;
        ((Active*)get_instance(gimmickverticalhalfpipe2_1825_instances))->alterables->flags.disable(0);
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        for (ObjectIterator it(gimmickverticalhalfpipe5_1826_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1516_31_end: ;
}
void Frames::event_func_7136()
{
    // event 1518_31
    bool or_result_1518_31 = false;
    bool or_temp_result_1518_31_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1518_31_0_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe1_1821_instances)) goto or_event_1518_31_0_end;
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(gimmickverticalhalfpipe1_1821_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1518_31_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1518_31_0_end;
        or_result_1518_31 = true;
        or_temp_result_1518_31_0 = true;
    }
    or_event_1518_31_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    gimmickverticalhalfpipe1_1821_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1518_31_0) {
        gimmickverticalhalfpipe1_1821_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1518_31
    bool or_temp_result_1518_31_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1518_31_1_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe4_1822_instances)) goto or_event_1518_31_1_end;
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(gimmickverticalhalfpipe4_1822_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1518_31_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1518_31_1_end;
        or_result_1518_31 = true;
        or_temp_result_1518_31_1 = true;
    }
    or_event_1518_31_1_end: ;
    gimmickverticalhalfpipe4_1822_instances.clear_saved_selection();
    if (or_temp_result_1518_31_1) {
        playermovementvalues_245_instances.save_selection();
        gimmickverticalhalfpipe4_1822_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1518_31
    bool or_temp_result_1518_31_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1518_31_2_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe3_1823_instances)) goto or_event_1518_31_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1518_31_2_end;
        or_result_1518_31 = true;
        or_temp_result_1518_31_2 = true;
    }
    or_event_1518_31_2_end: ;
    gimmickverticalhalfpipe3_1823_instances.clear_saved_selection();
    if (or_temp_result_1518_31_2) {
        playermovementvalues_245_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        gimmickverticalhalfpipe3_1823_instances.save_selection();
    }
    // event 1518_31
    bool or_temp_result_1518_31_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1518_31_3_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe6_1824_instances)) goto or_event_1518_31_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1518_31_3_end;
        or_result_1518_31 = true;
        or_temp_result_1518_31_3 = true;
        or_event_1518_31_3_end: ;
        gimmickverticalhalfpipe6_1824_instances.clear_saved_selection();
        if (or_temp_result_1518_31_3) {
            playermovementvalues_245_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
            gimmickverticalhalfpipe6_1824_instances.save_selection();
        }
        if (!or_result_1518_31) goto or_final_or_event_1518_31_3_end;
        gimmickverticalhalfpipe3_1823_instances.empty_selection();
        gimmickverticalhalfpipe1_1821_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        gimmickverticalhalfpipe4_1822_instances.empty_selection();
        gimmickverticalhalfpipe6_1824_instances.empty_selection();
        if (or_temp_result_1518_31_0 || or_temp_result_1518_31_1 || or_temp_result_1518_31_2 || or_temp_result_1518_31_3) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1518_31_1) {
            gimmickverticalhalfpipe4_1822_instances.restore_selection();
        }
        if (or_temp_result_1518_31_0 || or_temp_result_1518_31_1 || or_temp_result_1518_31_2 || or_temp_result_1518_31_3) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1518_31_0) {
            gimmickverticalhalfpipe1_1821_instances.restore_selection();
        }
        if (or_temp_result_1518_31_2) {
            gimmickverticalhalfpipe3_1823_instances.restore_selection();
        }
        if (or_temp_result_1518_31_3) {
            gimmickverticalhalfpipe6_1824_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 38);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 45);
        }
    }
    or_final_or_event_1518_31_3_end: ;
}
void Frames::event_func_7137()
{
    // event 1524_31
    {
        if (!(group_main_engine_1)) goto event_1524_31_end;
        gimmickdragontunnel1_1845_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8)+((Active*)*it)->alterables->values.get(16));
        }
    }
    event_1524_31_end: ;
}
void Frames::event_func_7138()
{
    // event 1525_31
    {
        if (!(group_main_engine_1)) goto event_1525_31_end;
        gimmickdragontunnel1_1845_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 4);
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(4)-90)*30, 0);
        }
        {
            SavedSelection extra_gimmickdragontunnel1_1845_instances(gimmickdragontunnel1_1845_instances);
            for (SavedIterator selected(extra_gimmickdragontunnel1_1845_instances); !selected.end(); ++selected) {
                foreach_instance_d1 = ((Active*)*selected);
                foreach_d1_29();
            }
        }
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1525_31_end: ;
}
void Frames::event_func_7139()
{
    // event 1526_31
    {
        if (!(group_main_engine_1)) goto event_1526_31_end;
        gimmickdragontunnel1_1845_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) >= (752))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel1_1845_instances.has_selection()) goto event_1526_31_end;
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.sub(16, 752);
        }
    }
    event_1526_31_end: ;
}
void Frames::event_func_7140()
{
    // event 1529_31
    {
        if (!(group_main_engine_1)) goto event_1529_31_end;
        {
            loop_dt_running = true;
            int times = int(gimmickdragontunnelhead_1638_instances.size());
            loop_dt_index = 0;
            while (loop_dt_index < times) {
                loop_dt_31();
                if (!loop_dt_running) break;
                loop_dt_index++;
            }
        }
    }
    event_1529_31_end: ;
}
void Frames::event_func_7141()
{
    // event 1667_31
    {
        if (!(group_main_engine_1)) goto event_1667_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1667_31_end;
        if (not_always_1667_31 > loop_count) {
            not_always_1667_31 = loop_count + 2;
            goto event_1667_31_end;
        }
        not_always_1667_31 = loop_count + 2;
        if (!group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1) {
            group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(196);
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()-500);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, -1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(2);
            group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->set_layer(4-1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(9, 196);
            group_pause_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1667_31_end: ;
}
void Frames::event_func_7142()
{
    // event 1668_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1668_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1668_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
    }
    event_1668_31_end: ;
}
void Frames::event_func_7143()
{
    // event 1669_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1669_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (-1))) goto event_1669_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
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
    event_1669_31_end: ;
}
void Frames::event_func_7144()
{
    // event 1670_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1670_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (-1))) goto event_1670_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) == (1))) goto event_1670_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 16);
        media.play_id(SOUND_COMMON_GLASSBREAK_2_134, -1, 1);
    }
    event_1670_31_end: ;
}
void Frames::event_func_7145()
{
    // event 1671_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1671_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (-1))) goto event_1671_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (50))) goto event_1671_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
    }
    event_1671_31_end: ;
}
void Frames::event_func_7146()
{
    // event 1672_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1672_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1672_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
    }
    event_1672_31_end: ;
}
void Frames::event_func_7147()
{
    // event 1673_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1673_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (4))) goto event_1673_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1673_31_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1673_31_0; single_instance_1673_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1673_31_0 == NULL)
                    single_instance_1673_31_0 = new_obj;
            }
        }
        ((Active*)single_instance_1673_31_0)->move_back(((Active*)get_instance(npcserpentine_947_instances)));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 10*((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
    }
    event_1673_31_end: ;
}
void Frames::event_func_7148()
{
    // event 1674_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1674_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) >= (1))) goto event_1674_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9));
    }
    event_1674_31_end: ;
}
void Frames::event_func_7149()
{
    // event 1675_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1675_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (1))) goto event_1675_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (15))) goto event_1675_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (1))) goto event_1675_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-300))) goto event_1675_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(2))) goto event_1675_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 2);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(2);
    }
    event_1675_31_end: ;
}
void Frames::event_func_7150()
{
    // event 1676_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1676_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1676_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(15);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_max(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)-0.5, 0));
    }
    event_1676_31_end: ;
}
void Frames::event_func_7151()
{
    // event 1677_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1677_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1677_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) == (0))) goto event_1677_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(11);
    }
    event_1677_31_end: ;
}
void Frames::event_func_7152()
{
    // event 1678_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1678_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (3))) goto event_1678_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
    }
    event_1678_31_end: ;
}
void Frames::event_func_7153()
{
    // event 1679_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1679_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (3))) goto event_1679_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (220))) goto event_1679_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
    }
    event_1679_31_end: ;
}
void Frames::event_func_7154()
{
    // event 1680_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1680_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1680_31_end;
        if (not_always_1680_31 > loop_count) {
            not_always_1680_31 = loop_count + 2;
            goto event_1680_31_end;
        }
        not_always_1680_31 = loop_count + 2;
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
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1680_31_end: ;
}
void Frames::event_func_7155()
{
    // event 1681_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1681_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1681_31_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1681_31_end: ;
}
void Frames::event_func_7156()
{
    // event 1682_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1)) goto event_1682_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1682_31_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1682_31_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
    }
    event_1682_31_end: ;
}
void Frames::event_func_7157()
{
    // event 1685_31
    {
        if (!(group_main_engine_1)) goto event_1685_31_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1685_31_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1685_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1685_31_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1685_31_end: ;
}
void Frames::event_func_7158()
{
    // event 1691_31
    {
        if (!(group_main_engine_1)) goto event_1691_31_end;
        if (!((global_values->get(0)) == (2))) goto event_1691_31_end;
        if (!((global_values->get(1)) == (0))) goto event_1691_31_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(1))) goto event_1691_31_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(7))) goto event_1691_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1691_31_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1691_31_end;
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 = true;
        }
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(7);
    }
    event_1691_31_end: ;
}
void Frames::event_func_7159()
{
    // event 1692_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1692_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1692_31_end;
        if (once_condition_1692_31) goto event_1692_31_end;
        once_condition_1692_31 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1692_31_end: ;
}
void Frames::event_func_7160()
{
    // event 1693_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1693_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1693_31_end;
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(6);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1693_31_end: ;
}
void Frames::event_func_7161()
{
    // event 1694_31
    bool or_result_1694_31 = false;
    bool or_temp_result_1694_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto or_event_1694_31_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1694_31_0_end;
        or_result_1694_31 = true;
        or_temp_result_1694_31_0 = true;
    }
    or_event_1694_31_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1694_31_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1694_31
    bool or_temp_result_1694_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto or_event_1694_31_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1694_31_1_end;
        or_result_1694_31 = true;
        or_temp_result_1694_31_1 = true;
    }
    or_event_1694_31_1_end: ;
    if (or_temp_result_1694_31_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1694_31
    bool or_temp_result_1694_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto or_event_1694_31_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1694_31_2_end;
        or_result_1694_31 = true;
        or_temp_result_1694_31_2 = true;
        or_event_1694_31_2_end: ;
        if (or_temp_result_1694_31_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1694_31) goto or_final_or_event_1694_31_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1694_31_0 || or_temp_result_1694_31_1 || or_temp_result_1694_31_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1694_31_2_end: ;
}
void Frames::event_func_7162()
{
    // event 1695_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1695_31_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1695_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1695_31_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1695_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1695_31_end: ;
}
void Frames::event_func_7163()
{
    // event 1696_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1696_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1696_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1696_31_end;
        if (not_always_1696_31 > loop_count) {
            not_always_1696_31 = loop_count + 2;
            goto event_1696_31_end;
        }
        not_always_1696_31 = loop_count + 2;
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
    event_1696_31_end: ;
}
void Frames::event_func_7164()
{
    // event 1697_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1697_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1697_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1697_31_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_speed(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1697_31_end: ;
}
void Frames::event_func_7165()
{
    // event 1698_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1698_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1698_31_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(npcserpentine_947_instances))->get_x()+120))) goto event_1698_31_end;
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_1698_31_end: ;
}
void Frames::event_func_7166()
{
    // event 1699_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1699_31_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1699_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (1))) goto event_1699_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (6))) goto event_1699_31_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1699_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1699_31_end: ;
}
void Frames::event_func_7167()
{
    // event 1700_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1700_31_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1700_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1700_31_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1700_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
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
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 20);
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1700_31_end: ;
}
void Frames::event_func_7168()
{
    // event 1701_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1701_31_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1701_31_end;
        FrameObject * single_instance_1701_31_0; single_instance_1701_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1701_31_0 == NULL)
                    single_instance_1701_31_0 = new_obj;
            }
        }
    }
    event_1701_31_end: ;
}
void Frames::event_func_7169()
{
    // event 1702_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1702_31_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1702_31_end;
        FrameObject * single_instance_1702_31_0; single_instance_1702_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1702_31_0 == NULL)
                    single_instance_1702_31_0 = new_obj;
            }
        }
    }
    event_1702_31_end: ;
}
void Frames::event_func_7170()
{
    // event 1703_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1703_31_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1703_31_end;
        FrameObject * single_instance_1703_31_0; single_instance_1703_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1703_31_0 == NULL)
                    single_instance_1703_31_0 = new_obj;
            }
        }
    }
    event_1703_31_end: ;
}
void Frames::event_func_7171()
{
    // event 1704_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1704_31_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1704_31_end;
        FrameObject * single_instance_1704_31_0; single_instance_1704_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1704_31_0 == NULL)
                    single_instance_1704_31_0 = new_obj;
            }
        }
    }
    event_1704_31_end: ;
}
void Frames::event_func_7172()
{
    // event 1705_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1705_31_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1705_31_end;
        FrameObject * single_instance_1705_31_0; single_instance_1705_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1705_31_0 == NULL)
                    single_instance_1705_31_0 = new_obj;
            }
        }
    }
    event_1705_31_end: ;
}
void Frames::event_func_7173()
{
    // event 1706_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1706_31_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1706_31_end;
        FrameObject * single_instance_1706_31_0; single_instance_1706_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1706_31_0 == NULL)
                    single_instance_1706_31_0 = new_obj;
            }
        }
    }
    event_1706_31_end: ;
}
void Frames::event_func_7174()
{
    // event 1707_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1707_31_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1707_31_end;
        FrameObject * single_instance_1707_31_0; single_instance_1707_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1707_31_0 == NULL)
                    single_instance_1707_31_0 = new_obj;
            }
        }
    }
    event_1707_31_end: ;
}
void Frames::event_func_7175()
{
    // event 1708_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1708_31_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1708_31_end;
        FrameObject * single_instance_1708_31_0; single_instance_1708_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1708_31_0 == NULL)
                    single_instance_1708_31_0 = new_obj;
            }
        }
    }
    event_1708_31_end: ;
}
void Frames::event_func_7176()
{
    // event 1709_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1709_31_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1709_31_end;
        FrameObject * single_instance_1709_31_0; single_instance_1709_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1709_31_0 == NULL)
                    single_instance_1709_31_0 = new_obj;
            }
        }
    }
    event_1709_31_end: ;
}
void Frames::event_func_7177()
{
    // event 1710_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1710_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1710_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1710_31_end: ;
}
void Frames::event_func_7178()
{
    // event 1711_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1711_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1711_31_end;
        if (not_always_1711_31 > loop_count) {
            not_always_1711_31 = loop_count + 2;
            goto event_1711_31_end;
        }
        not_always_1711_31 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1711_31_end: ;
}
void Frames::event_func_7179()
{
    // event 1712_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1712_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1712_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_31();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1712_31_end: ;
}
void Frames::event_func_7180()
{
    // event 1713_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1713_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1713_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1713_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1713_31_end: ;
}
void Frames::event_func_7181()
{
    // event 1714_31
    bool or_result_1714_31 = false;
    bool or_temp_result_1714_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto or_event_1714_31_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1714_31_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1714_31_0_end;
        if (not_always_1714_31 > loop_count) {
            not_always_1714_31 = loop_count + 2;
            goto or_event_1714_31_0_end;
        }
        not_always_1714_31 = loop_count + 2;
        or_result_1714_31 = true;
        or_temp_result_1714_31_0 = true;
    }
    or_event_1714_31_0_end: ;
    // event 1714_31
    bool or_temp_result_1714_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto or_event_1714_31_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1714_31_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1714_31_1_end;
        if (not_always_1714_31 > loop_count) {
            not_always_1714_31 = loop_count + 2;
            goto or_event_1714_31_1_end;
        }
        not_always_1714_31 = loop_count + 2;
        or_result_1714_31 = true;
        or_temp_result_1714_31_1 = true;
        or_event_1714_31_1_end: ;
        if (!or_result_1714_31) goto or_final_or_event_1714_31_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1714_31_1_end: ;
}
void Frames::event_func_7182()
{
    // event 1715_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1715_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1715_31_end;
        if (not_always_1715_31 > loop_count) {
            not_always_1715_31 = loop_count + 2;
            goto event_1715_31_end;
        }
        not_always_1715_31 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1715_31_end: ;
}
void Frames::event_func_7183()
{
    // event 1716_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1716_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1716_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1716_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1716_31_end: ;
}
void Frames::event_func_7184()
{
    // event 1717_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1717_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1717_31_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1717_31_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1717_31_end: ;
}
void Frames::event_func_7185()
{
    // event 1718_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1718_31_end;
        if (!((global_values->get(27)) == (0))) goto event_1718_31_end;
        if (not_always_1718_31 > loop_count) {
            not_always_1718_31 = loop_count + 2;
            goto event_1718_31_end;
        }
        not_always_1718_31 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1718_31_end: ;
}
void Frames::event_func_7186()
{
    // event 1722_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1722_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1722_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1722_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1722_31_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1722_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1722_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1722_31_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1722_31_end: ;
}
void Frames::event_func_7187()
{
    // event 1723_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1723_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1723_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1723_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1723_31_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1723_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1723_31_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1723_31_end: ;
}
void Frames::event_func_7188()
{
    // event 1724_31
    bool or_result_1724_31 = false;
    bool or_temp_result_1724_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1724_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1724_31_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1724_31_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1724_31_0_end;
        or_result_1724_31 = true;
        or_temp_result_1724_31_0 = true;
    }
    or_event_1724_31_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1724_31_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1724_31
    bool or_temp_result_1724_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1724_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1724_31_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1724_31_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1724_31_1_end;
        or_result_1724_31 = true;
        or_temp_result_1724_31_1 = true;
        or_event_1724_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1724_31_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1724_31) goto or_final_or_event_1724_31_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1724_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1724_31_0 || or_temp_result_1724_31_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1724_31_1_end: ;
}
void Frames::event_func_7189()
{
    // event 1725_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1725_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1725_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1725_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1725_31_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1725_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1725_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1725_31_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1725_31_end: ;
}
void Frames::event_func_7190()
{
    // event 1726_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1726_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1726_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1726_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1726_31_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1726_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1726_31_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1726_31_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1726_31_end: ;
}
void Frames::event_func_7191()
{
    // event 1727_31
    bool or_result_1727_31 = false;
    bool or_temp_result_1727_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1727_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1727_31_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1727_31_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1727_31_0_end;
        or_result_1727_31 = true;
        or_temp_result_1727_31_0 = true;
    }
    or_event_1727_31_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1727_31_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1727_31
    bool or_temp_result_1727_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1727_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1727_31_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1727_31_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1727_31_1_end;
        or_result_1727_31 = true;
        or_temp_result_1727_31_1 = true;
        or_event_1727_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1727_31_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1727_31) goto or_final_or_event_1727_31_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1727_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1727_31_0 || or_temp_result_1727_31_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1727_31_1_end: ;
}
void Frames::event_func_7192()
{
    // event 1728_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1728_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1728_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1728_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1728_31_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1728_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1728_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1728_31_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1728_31_end: ;
}
void Frames::event_func_7193()
{
    // event 1729_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1729_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1729_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1729_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1729_31_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1729_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1729_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1729_31_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1729_31_end: ;
}
void Frames::event_func_7194()
{
    // event 1730_31
    bool or_result_1730_31 = false;
    bool or_temp_result_1730_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1730_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1730_31_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1730_31_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1730_31_0_end;
        or_result_1730_31 = true;
        or_temp_result_1730_31_0 = true;
    }
    or_event_1730_31_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1730_31_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1730_31
    bool or_temp_result_1730_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1730_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1730_31_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1730_31_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1730_31_1_end;
        or_result_1730_31 = true;
        or_temp_result_1730_31_1 = true;
        or_event_1730_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1730_31_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1730_31) goto or_final_or_event_1730_31_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1730_31_0 || or_temp_result_1730_31_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1730_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1730_31_1_end: ;
}
void Frames::event_func_7195()
{
    // event 1731_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1731_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1731_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1731_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1731_31_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1731_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1731_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1731_31_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1731_31_end: ;
}
void Frames::event_func_7196()
{
    // event 1732_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1732_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1732_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1732_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1732_31_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1732_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1732_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1732_31_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1732_31_end: ;
}
void Frames::event_func_7197()
{
    // event 1733_31
    bool or_result_1733_31 = false;
    bool or_temp_result_1733_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1733_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1733_31_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1733_31_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1733_31_0_end;
        or_result_1733_31 = true;
        or_temp_result_1733_31_0 = true;
    }
    or_event_1733_31_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1733_31_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1733_31
    bool or_temp_result_1733_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1733_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1733_31_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1733_31_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1733_31_1_end;
        or_result_1733_31 = true;
        or_temp_result_1733_31_1 = true;
        or_event_1733_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1733_31_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1733_31) goto or_final_or_event_1733_31_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1733_31_0 || or_temp_result_1733_31_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1733_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1733_31_1_end: ;
}
void Frames::event_func_7198()
{
    // event 1734_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1734_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1734_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1734_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1734_31_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1734_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1734_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1734_31_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1734_31_end: ;
}
void Frames::event_func_7199()
{
    // event 1735_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1735_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1735_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1735_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1735_31_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1735_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1735_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1735_31_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1735_31_end: ;
}
void Frames::event_func_7200()
{
    // event 1736_31
    bool or_result_1736_31 = false;
    bool or_temp_result_1736_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1736_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1736_31_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1736_31_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1736_31_0_end;
        or_result_1736_31 = true;
        or_temp_result_1736_31_0 = true;
    }
    or_event_1736_31_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1736_31_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1736_31
    bool or_temp_result_1736_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1736_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1736_31_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1736_31_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1736_31_1_end;
        or_result_1736_31 = true;
        or_temp_result_1736_31_1 = true;
        or_event_1736_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1736_31_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1736_31) goto or_final_or_event_1736_31_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1736_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1736_31_0 || or_temp_result_1736_31_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1736_31_1_end: ;
}
void Frames::event_func_7201()
{
    // event 1737_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1737_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1737_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1737_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_direction()%math_helper%16) == (0))) goto event_1737_31_end;
        if (!media.is_channel_playing(20-1)) goto event_1737_31_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1737_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1737_31_end: ;
}
void Frames::event_func_7202()
{
    // event 1738_31
    bool or_result_1738_31 = false;
    bool or_temp_result_1738_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1738_31_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1738_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1738_31_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1738_31_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1738_31_0_end;
        or_result_1738_31 = true;
        or_temp_result_1738_31_0 = true;
    }
    or_event_1738_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1738_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1738_31
    bool or_temp_result_1738_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1738_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1738_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1738_31_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1738_31_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1738_31_1_end;
        or_result_1738_31 = true;
        or_temp_result_1738_31_1 = true;
        or_event_1738_31_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1738_31_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1738_31) goto or_final_or_event_1738_31_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1738_31_0 || or_temp_result_1738_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1738_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1738_31_1_end: ;
}
void Frames::event_func_7203()
{
    // event 1739_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1739_31_end;
        if (!((global_values->get(27)) == (1))) goto event_1739_31_end;
        if (not_always_1739_31 > loop_count) {
            not_always_1739_31 = loop_count + 2;
            goto event_1739_31_end;
        }
        not_always_1739_31 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1739_31_end: ;
}
void Frames::event_func_7204()
{
    // event 1740_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1740_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1740_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1740_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1740_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1740_31_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1740_31_end: ;
}
void Frames::event_func_7205()
{
    // event 1741_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1741_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1741_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1741_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1741_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1741_31_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1741_31_end: ;
}
void Frames::event_func_7206()
{
    // event 1742_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1742_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1742_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1742_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1742_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1742_31_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1742_31_end: ;
}
void Frames::event_func_7207()
{
    // event 1743_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1743_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1743_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1743_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1743_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1743_31_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1743_31_end: ;
}
void Frames::event_func_7208()
{
    // event 1744_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1744_31_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1744_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1744_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1744_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1744_31_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1744_31_end: ;
}
void Frames::event_func_7209()
{
    // event 1745_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1745_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1745_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1745_31_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1745_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1745_31_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1745_31_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1745_31_end: ;
}
void Frames::event_func_7210()
{
    // event 1746_31
    bool or_result_1746_31 = false;
    bool or_temp_result_1746_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1746_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1746_31_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1746_31_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1746_31_0_end;
        or_result_1746_31 = true;
        or_temp_result_1746_31_0 = true;
    }
    or_event_1746_31_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1746_31_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1746_31
    bool or_temp_result_1746_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1746_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1746_31_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1746_31_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1746_31_1_end;
        or_result_1746_31 = true;
        or_temp_result_1746_31_1 = true;
        or_event_1746_31_1_end: ;
        if (or_temp_result_1746_31_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1746_31) goto or_final_or_event_1746_31_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1746_31_0 || or_temp_result_1746_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1746_31_0 || or_temp_result_1746_31_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1746_31_1_end: ;
}
void Frames::event_func_7211()
{
    // event 1747_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1747_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1747_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1747_31_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1747_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1747_31_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1747_31_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1747_31_end: ;
}
void Frames::event_func_7212()
{
    // event 1748_31
    bool or_result_1748_31 = false;
    bool or_temp_result_1748_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1748_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1748_31_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1748_31_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1748_31_0_end;
        or_result_1748_31 = true;
        or_temp_result_1748_31_0 = true;
    }
    or_event_1748_31_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1748_31_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1748_31
    bool or_temp_result_1748_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1748_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1748_31_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1748_31_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1748_31_1_end;
        or_result_1748_31 = true;
        or_temp_result_1748_31_1 = true;
        or_event_1748_31_1_end: ;
        if (or_temp_result_1748_31_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1748_31) goto or_final_or_event_1748_31_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1748_31_0 || or_temp_result_1748_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1748_31_0 || or_temp_result_1748_31_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1748_31_1_end: ;
}
void Frames::event_func_7213()
{
    // event 1749_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1749_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1749_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1749_31_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1749_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1749_31_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1749_31_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1749_31_end: ;
}
void Frames::event_func_7214()
{
    // event 1750_31
    bool or_result_1750_31 = false;
    bool or_temp_result_1750_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1750_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1750_31_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1750_31_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1750_31_0_end;
        or_result_1750_31 = true;
        or_temp_result_1750_31_0 = true;
    }
    or_event_1750_31_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1750_31_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1750_31
    bool or_temp_result_1750_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1750_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1750_31_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1750_31_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1750_31_1_end;
        or_result_1750_31 = true;
        or_temp_result_1750_31_1 = true;
        or_event_1750_31_1_end: ;
        if (or_temp_result_1750_31_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1750_31) goto or_final_or_event_1750_31_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1750_31_0 || or_temp_result_1750_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1750_31_0 || or_temp_result_1750_31_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1750_31_1_end: ;
}
void Frames::event_func_7215()
{
    // event 1751_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1751_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1751_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1751_31_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1751_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1751_31_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1751_31_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1751_31_end: ;
}
void Frames::event_func_7216()
{
    // event 1752_31
    bool or_result_1752_31 = false;
    bool or_temp_result_1752_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1752_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1752_31_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1752_31_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1752_31_0_end;
        or_result_1752_31 = true;
        or_temp_result_1752_31_0 = true;
    }
    or_event_1752_31_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1752_31_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1752_31
    bool or_temp_result_1752_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1752_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1752_31_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1752_31_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1752_31_1_end;
        or_result_1752_31 = true;
        or_temp_result_1752_31_1 = true;
        or_event_1752_31_1_end: ;
        if (or_temp_result_1752_31_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1752_31) goto or_final_or_event_1752_31_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1752_31_0 || or_temp_result_1752_31_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1752_31_0 || or_temp_result_1752_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1752_31_1_end: ;
}
void Frames::event_func_7217()
{
    // event 1753_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1753_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1753_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1753_31_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1753_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1753_31_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1753_31_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1753_31_end: ;
}
void Frames::event_func_7218()
{
    // event 1754_31
    bool or_result_1754_31 = false;
    bool or_temp_result_1754_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1754_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1754_31_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1754_31_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1754_31_0_end;
        or_result_1754_31 = true;
        or_temp_result_1754_31_0 = true;
    }
    or_event_1754_31_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1754_31_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1754_31
    bool or_temp_result_1754_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1754_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1754_31_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1754_31_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1754_31_1_end;
        or_result_1754_31 = true;
        or_temp_result_1754_31_1 = true;
        or_event_1754_31_1_end: ;
        if (or_temp_result_1754_31_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1754_31) goto or_final_or_event_1754_31_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1754_31_0 || or_temp_result_1754_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1754_31_0 || or_temp_result_1754_31_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1754_31_1_end: ;
}
void Frames::event_func_7219()
{
    // event 1755_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto event_1755_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1755_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1755_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(5))) goto event_1755_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1755_31_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1755_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1755_31_end: ;
}
void Frames::event_func_7220()
{
    // event 1756_31
    bool or_result_1756_31 = false;
    bool or_temp_result_1756_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1756_31_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1756_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1756_31_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1756_31_0_end;
        or_result_1756_31 = true;
        or_temp_result_1756_31_0 = true;
    }
    or_event_1756_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1756_31_0) {
        npcserpentine_947_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1756_31
    bool or_temp_result_1756_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1)) goto or_event_1756_31_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1756_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1756_31_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1756_31_1_end;
        or_result_1756_31 = true;
        or_temp_result_1756_31_1 = true;
        or_event_1756_31_1_end: ;
        if (or_temp_result_1756_31_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1756_31) goto or_final_or_event_1756_31_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1756_31_0 || or_temp_result_1756_31_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1756_31_0 || or_temp_result_1756_31_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1756_31_1_end: ;
}
void Frames::event_func_7221()
{
    // event 1758_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1758_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1758_31_end: ;
}
void Frames::event_func_7222()
{
    // event 1776_31
    {
        if (!(group_main_engine_1)) goto event_1776_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4400))) goto event_1776_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1) goto event_1776_31_end;
        if (!group_main_engine_level_specific_methods_floating_lanterns_1) {
            group_main_engine_level_specific_methods_floating_lanterns_1 = true;
        }
    }
    event_1776_31_end: ;
}
void Frames::event_func_7223()
{
    // event 1777_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1777_31_end;
        if (once_condition_1777_31) goto event_1777_31_end;
        once_condition_1777_31 = true;
        floatinglantern_1829_instances.clear_selection();
        spread_value(floatinglantern_1829_instances, 1, 0);
        static FlatObjectList swap_1777_31;
        swap_1777_31.clear();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            swap_1777_31.push_back(((Active*)*it));
        }
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0.5+(((Active*)*it)->alterables->values.get(1)%math_helper%10)*0.05);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x()*(((Active*)*it)->alterables->values.get(0))+1000);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->set_layer(get_max(3, get_min((((Active*)*it)->alterables->values.get(0)-0.05)*6.25, 5))-1);
        }
        swap_position(swap_1777_31);
    }
    event_1777_31_end: ;
}
void Frames::event_func_7224()
{
    // event 1794_31
    {
        if (!(group_main_engine_1)) goto event_1794_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2024))) goto event_1794_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2064))) goto event_1794_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1794_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) goto event_1794_31_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_ufo_1 = true;
        }
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_visible(true);
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(true);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
            ((Active*)*it)->set_visible(true);
        }
        minibossufo2_1764_instances.clear_selection();
        spread_value(minibossufo2_1764_instances, 0, 0);
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1794_31_end: ;
}
void Frames::event_func_7225()
{
    // event 1802_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1802_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (-100))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1802_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+5, 12));
            ((Active*)*it)->alterables->values.sub(12, 0.05);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1802_31_end: ;
}
void Frames::event_func_7226()
{
    // event 1803_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1803_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (-100))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1803_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1803_31_end: ;
}
void Frames::event_func_7227()
{
    // event 1804_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1804_31_end;
        if (!((minibossufobeam_1721_instances.size()) > (0))) goto event_1804_31_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2554, 553, 3452, 825)) > (0))) goto event_1804_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_off(1))) goto event_1804_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_x()+80);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_direction(16);
    }
    event_1804_31_end: ;
}
void Frames::event_func_7228()
{
    // event 1805_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1805_31_end;
        if (!((minibossufobeam_1721_instances.size()) > (0))) goto event_1805_31_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2559, 831, 3459, 1146)) > (0))) goto event_1805_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_off(1))) goto event_1805_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_x()-80);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_direction(0);
    }
    event_1805_31_end: ;
}
void Frames::event_func_7229()
{
    // event 1809_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1809_31_end;
        minibossufobeam_1721_instances.clear_selection();
        lamppostfront_1778_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, lamppostfront_1778_instances)) goto event_1809_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1809_31_end;
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1809_31_end: ;
}
void Frames::event_func_7230()
{
    // event 1810_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1810_31_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4))) { it.deselect(); continue; }
        }
        if (!breakablefloor1_1760_instances.has_selection()) goto event_1810_31_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -4);
        }
    }
    event_1810_31_end: ;
}
void Frames::event_func_7231()
{
    // event 1811_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1811_31_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1811_31_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(24, -4);
        }
    }
    event_1811_31_end: ;
}
void Frames::event_func_7232()
{
    // event 1812_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1812_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y(frame_top()-32);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_x(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(1));
    }
    event_1812_31_end: ;
}
void Frames::event_func_7233()
{
    // event 1813_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1813_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_on(1))) goto event_1813_31_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) < (12))) goto event_1813_31_end;
        minibossufobeam_1721_instances.clear_selection();
        if (!check_not_overlap(minibossufobeam_1721_instances, breakablefloor1_1760_instances)) goto event_1813_31_end;
        if (!check_not_overlap(minibossufobeam_1721_instances, breakablefloor2_1761_instances)) goto event_1813_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.add(0, 0.5);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
    }
    event_1813_31_end: ;
}
void Frames::event_func_7234()
{
    // event 1814_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1814_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->flags.is_on(1))) goto event_1814_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->test_directions(65536))) goto event_1814_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1814_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.add(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -3));
    }
    event_1814_31_end: ;
}
