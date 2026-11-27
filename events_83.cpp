#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6864()
{
    // event 1656_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1656_29_end;
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1656_29_0;
            ((Active*)get_instance(minibossufobeam_1721_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1656_29_0: ;
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0));
    }
    event_1656_29_end: ;
}
void Frames::event_func_6865()
{
    // event 1657_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1657_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1657_29_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) < (12))) goto event_1657_29_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.add(0, 0.5);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
    }
    event_1657_29_end: ;
}
void Frames::event_func_6866()
{
    // event 1658_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1658_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (220))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1658_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 4);
            ((Active*)*it)->alterables->values.set(11, 80);
        }
    }
    event_1658_29_end: ;
}
void Frames::event_func_6867()
{
    // event 1659_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1659_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1659_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(11, 1);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_1659_29_end: ;
}
void Frames::event_func_6868()
{
    // event 1660_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1660_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1660_29_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1660_29_end: ;
}
void Frames::event_func_6869()
{
    // event 1661_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1661_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1661_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1661_29_end: ;
}
void Frames::event_func_6870()
{
    // event 1662_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1662_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1662_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-3, 0));
        }
    }
    event_1662_29_end: ;
}
void Frames::event_func_6871()
{
    // event 1663_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1663_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (16))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1663_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, 16));
        }
    }
    event_1663_29_end: ;
}
void Frames::event_func_6872()
{
    // event 1664_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1664_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-90))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1664_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1664_29_end: ;
}
void Frames::event_func_6873()
{
    // event 1665_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1665_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+400))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1665_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(false);
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_visible(false);
    }
    event_1665_29_end: ;
}
void Frames::event_func_6874()
{
    // event 1667_29
    {
        if (!(group_main_engine_1)) goto event_1667_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1667_29_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1) goto event_1667_29_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1 = true;
        }
    }
    event_1667_29_end: ;
}
void Frames::event_func_6875()
{
    // event 1668_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1668_29_end;
        player_389_instances.clear_selection();
        minibossbulldozerclaw_1775_instances.clear_selection();
        if (!check_overlap(player_389_instances, minibossbulldozerclaw_1775_instances)) goto event_1668_29_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(2)) < (0))) goto event_1668_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(2));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1668_29_end: ;
}
void Frames::event_func_6876()
{
    // event 1669_29
    bool or_result_1669_29 = false;
    bool or_temp_result_1669_29_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_1669_29_0_end;
        playersensorleftbig_391_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, minibossbulldozerhitbox_1776_instances)) goto or_event_1669_29_0_end;
        for (ObjectIterator it(minibossbulldozerhitbox_1776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerhitbox_1776_instances.has_selection()) goto or_event_1669_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1669_29_0_end;
        or_result_1669_29 = true;
        or_temp_result_1669_29_0 = true;
    }
    or_event_1669_29_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    minibossbulldozerhitbox_1776_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1669_29_0) {
        playermovementvalues_245_instances.save_selection();
        minibossbulldozerhitbox_1776_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1669_29
    bool or_temp_result_1669_29_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_1669_29_1_end;
        playersensorrightbig_393_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, minibossbulldozerhitbox_1776_instances)) goto or_event_1669_29_1_end;
        for (ObjectIterator it(minibossbulldozerhitbox_1776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerhitbox_1776_instances.has_selection()) goto or_event_1669_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1669_29_1_end;
        or_result_1669_29 = true;
        or_temp_result_1669_29_1 = true;
        or_event_1669_29_1_end: ;
        playersensorrightbig_393_instances.clear_saved_selection();
        if (or_temp_result_1669_29_1) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            minibossbulldozerhitbox_1776_instances.save_selection();
        }
        if (!or_result_1669_29) goto or_final_or_event_1669_29_1_end;
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        minibossbulldozerhitbox_1776_instances.empty_selection();
        if (or_temp_result_1669_29_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1669_29_0 || or_temp_result_1669_29_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1669_29_0 || or_temp_result_1669_29_1) {
            minibossbulldozerhitbox_1776_instances.restore_selection();
        }
        if (or_temp_result_1669_29_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23)+((Active*)get_single(minibossbulldozerhitbox_1776_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    or_final_or_event_1669_29_1_end: ;
}
void Frames::event_func_6877()
{
    // event 1670_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1670_29_end;
        minibossbulldozerclaw_1775_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(minibossbulldozerclaw_1775_instances, player_389_instances)) goto event_1670_29_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(1)) == (1))) goto event_1670_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1670_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1670_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -8);
    }
    event_1670_29_end: ;
}
void Frames::event_func_6878()
{
    // event 1671_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1671_29_end;
        minibossbulldozerclaw_1775_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(minibossbulldozerclaw_1775_instances, player_389_instances)) goto event_1671_29_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(1)) == (1))) goto event_1671_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (8))) goto event_1671_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -8);
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->flags.enable(0);
    }
    event_1671_29_end: ;
}
void Frames::event_func_6879()
{
    // event 1672_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1672_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1672_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, -3));
        }
    }
    event_1672_29_end: ;
}
void Frames::event_func_6880()
{
    // event 1673_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1673_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1673_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.1, 3));
        }
    }
    event_1673_29_end: ;
}
void Frames::event_func_6881()
{
    // event 1674_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1674_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (-1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1674_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.1, 0));
        }
    }
    event_1674_29_end: ;
}
void Frames::event_func_6882()
{
    // event 1675_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1675_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1675_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
        }
    }
    event_1675_29_end: ;
}
void Frames::event_func_6883()
{
    // event 1676_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1676_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1676_29_end;
        if (!check_not_overlap(minibossbulldozer_1719_instances, minibosslimiter_1771_instances)) goto event_1676_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1676_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1676_29_end: ;
}
void Frames::event_func_6884()
{
    // event 1677_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1677_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1677_29_end;
        minibosslimiter_1771_instances.clear_selection();
        if (!check_overlap(minibossbulldozer_1719_instances, minibosslimiter_1771_instances)) goto event_1677_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1677_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)*it)->alterables->values.get(12)*-1);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1677_29_end: ;
}
void Frames::event_func_6885()
{
    // event 1678_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1678_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1678_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 12);
        }
    }
    event_1678_29_end: ;
}
void Frames::event_func_6886()
{
    // event 1679_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1679_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1679_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1679_29_end: ;
}
void Frames::event_func_6887()
{
    // event 1680_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1680_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (150))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1680_29_end;
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1680_29_end: ;
}
void Frames::event_func_6888()
{
    // event 1681_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1681_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (150))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1681_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1681_29_end: ;
}
void Frames::event_func_6889()
{
    // event 1682_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1682_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1682_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+2, 90));
        }
    }
    event_1682_29_end: ;
}
void Frames::event_func_6890()
{
    // event 1683_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1683_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (90))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1683_29_end;
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_1683_29_end: ;
}
void Frames::event_func_6891()
{
    // event 1684_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1684_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (90))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1684_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(10, 1);
        }
    }
    event_1684_29_end: ;
}
void Frames::event_func_6892()
{
    // event 1685_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1685_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1685_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1685_29_end: ;
}
void Frames::event_func_6893()
{
    // event 1686_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1686_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (50))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1686_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        FrameObject * single_instance_1686_29_0; single_instance_1686_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossboomerang_1623(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -6), parent->layer);
                if (single_instance_1686_29_0 == NULL)
                    single_instance_1686_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1686_29_0))->alterables->values.set(0, ((Active*)single_instance_1686_29_0)->get_x());
        ((Active*)((Active*)single_instance_1686_29_0))->alterables->values.set(1, ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4)*6);
        ((Active*)((Active*)single_instance_1686_29_0))->alterables->values.set(2, 100);
        ((Active*)((Active*)single_instance_1686_29_0))->alterables->values.set(3, ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4)*6);
        ((Active*)single_instance_1686_29_0)->move_back(((Active*)get_single(minibossbulldozer_1719_instances)));
        
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1686_29_0))->set_x(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x()+((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4)*30);
    }
    event_1686_29_end: ;
}
void Frames::event_func_6894()
{
    // event 1687_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1687_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (140))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1687_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1687_29_end: ;
}
void Frames::event_func_6895()
{
    // event 1688_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1688_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (160))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1688_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 3);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1688_29_end: ;
}
void Frames::event_func_6896()
{
    // event 1689_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1689_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1689_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-8, 0));
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1689_29_end: ;
}
void Frames::event_func_6897()
{
    // event 1690_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1690_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1690_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 5);
    }
    event_1690_29_end: ;
}
void Frames::event_func_6898()
{
    // event 1691_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1691_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1691_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1691_29_end: ;
}
void Frames::event_func_6899()
{
    // event 1692_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1692_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (30))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1692_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1692_29_end: ;
}
void Frames::event_func_6900()
{
    // event 1693_29
    bool or_result_1693_29 = false;
    bool or_temp_result_1693_29_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_1693_29_0_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto or_event_1693_29_0_end;
        or_result_1693_29 = true;
        or_temp_result_1693_29_0 = true;
    }
    or_event_1693_29_0_end: ;
    minibossbulldozer_1719_instances.clear_saved_selection();
    if (or_temp_result_1693_29_0) {
        minibossbulldozer_1719_instances.save_selection();
    }
    // event 1693_29
    bool or_temp_result_1693_29_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto or_event_1693_29_1_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto or_event_1693_29_1_end;
        or_result_1693_29 = true;
        or_temp_result_1693_29_1 = true;
        or_event_1693_29_1_end: ;
        if (or_temp_result_1693_29_1) {
            minibossbulldozer_1719_instances.save_selection();
        }
        if (!or_result_1693_29) goto or_final_or_event_1693_29_1_end;
        minibossbulldozer_1719_instances.empty_selection();
        if (or_temp_result_1693_29_0 || or_temp_result_1693_29_1) {
            minibossbulldozer_1719_instances.restore_selection();
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(6));
        }
    }
    or_final_or_event_1693_29_1_end: ;
}
void Frames::event_func_6901()
{
    // event 1694_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1694_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1694_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)+((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(7)%math_helper%12)/math_helper/3);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)-((Active*)*it)->alterables->values.get(6)*2);
        }
    }
    event_1694_29_end: ;
}
void Frames::event_func_6902()
{
    // event 1695_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1695_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1695_29_end;
        if (!((global_values->get(3)%math_helper%10) == (1))) goto event_1695_29_end;
        FrameObject * single_instance_1695_29_0; single_instance_1695_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + -78), parent->layer);
                if (single_instance_1695_29_0 == NULL)
                    single_instance_1695_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1695_29_0))->set_direction(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_direction()+16);
        ((Active*)((Active*)single_instance_1695_29_0))->set_x(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x()-40*((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)single_instance_1695_29_0)->move_back(((Active*)get_single(minibossbulldozer_1719_instances)));
        ((Active*)((Active*)single_instance_1695_29_0))->get_movement()->set_speed(10);
    }
    event_1695_29_end: ;
}
void Frames::event_func_6903()
{
    // event 1696_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1696_29_end;
        ((Active*)get_instance(minibossbulldozerarm_1772_instances))->alterables->values.set(0, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(3)*((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4));
        {
            FrameObject * parent = ((Active*)get_instance(minibossbulldozer_1719_instances));
            if (parent == NULL) goto pos_end_1696_29_0;
            ((Active*)get_instance(minibossbulldozerarm_1772_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1696_29_0: ;
        }
        ((Active*)get_instance(minibossbulldozerarm_1772_instances))->set_angle(((Active*)get_instance(minibossbulldozerarm_1772_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.set(0, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(3)*((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4));
        {
            FrameObject * parent = ((Active*)get_instance(minibossbulldozer_1719_instances));
            if (parent == NULL) goto pos_end_1696_29_1;
            ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1696_29_1: ;
        }
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->set_angle(((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.set(0, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_x()-38*((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.set(1, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_y());
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->set_angle(((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(5), 0);
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.set(0, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_x()+43*((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.set(1, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_y()+4);
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->set_angle(((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(5), 0);
        ((Active*)get_instance(minibossbulldozerarm_1772_instances))->set_direction(((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->set_direction(((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_direction());
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibossbulldozer_1719_instances, it.current_index));
            if (parent == NULL) goto pos_end_1696_29_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1696_29_2: ;
        }
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(minibossbulldozer_1719_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(minibossbulldozer_1719_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.set(1, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(13));
        {
            FrameObject * parent = ((Active*)get_instance(minibossbulldozer_1719_instances));
            if (parent == NULL) goto pos_end_1696_29_3;
            ((Active*)get_instance(minibossbulldozerhitbox_1776_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1696_29_3: ;
        }
        ((Active*)get_instance(minibossbulldozerhitbox_1776_instances))->set_direction(((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(minibossbulldozerhitbox_1776_instances))->alterables->values.set(0, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(6));
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.set(2, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(9));
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.set(2, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(9));
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.set(2, ((Active*)get_instance(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(6));
    }
    event_1696_29_end: ;
}
void Frames::event_func_6904()
{
    // event 1697_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1697_29_end;
        if (!((((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.get(2)) < (6))) goto event_1697_29_end;
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->set_x(((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->set_y(((Active*)get_instance(minibossbulldozerwheel1_1773_instances))->alterables->values.get(1));
    }
    event_1697_29_end: ;
}
void Frames::event_func_6905()
{
    // event 1698_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1698_29_end;
        if (!((((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.get(2)) < (6))) goto event_1698_29_end;
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->set_x(((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->set_y(((Active*)get_instance(minibossbulldozerwheel2_1774_instances))->alterables->values.get(1));
    }
    event_1698_29_end: ;
}
void Frames::event_func_6906()
{
    // event 1699_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1699_29_end;
        minibossbulldozerclaw_1775_instances.clear_selection();
        if (!check_not_overlap(minibossbulldozerclaw_1775_instances, player_389_instances)) goto event_1699_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1699_29_end;
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->flags.disable(0);
    }
    event_1699_29_end: ;
}
void Frames::event_func_6907()
{
    // event 1700_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1700_29_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(0)) > (1))) goto event_1700_29_end;
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->flags.enable(0);
    }
    event_1700_29_end: ;
}
void Frames::event_func_6908()
{
    // event 1701_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1701_29_end;
        if (!((((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->values.get(0)) < (-1))) goto event_1701_29_end;
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->alterables->flags.enable(0);
    }
    event_1701_29_end: ;
}
void Frames::event_func_6909()
{
    // event 1702_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1702_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1702_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1702_29_end: ;
}
void Frames::event_func_6910()
{
    // event 1703_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1703_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1703_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1703_29_end: ;
}
void Frames::event_func_6911()
{
    // event 1704_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1704_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (140))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1704_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1704_29_end: ;
}
void Frames::event_func_6912()
{
    // event 1705_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1705_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (140))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1705_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1705_29_end: ;
}
void Frames::event_func_6913()
{
    // event 1706_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1706_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1706_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1706_29_end: ;
}
void Frames::event_func_6914()
{
    // event 1707_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1707_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1707_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1707_29_end: ;
}
void Frames::event_func_6915()
{
    // event 1708_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1708_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1708_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1708_29_end: ;
}
void Frames::event_func_6916()
{
    // event 1709_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1709_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1709_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1709_29_end: ;
}
void Frames::event_func_6917()
{
    // event 1710_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1710_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(2, get_abs(((Active*)*it)->alterables->values.get(1))*-1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+30, 0);
        }
    }
    event_1710_29_end: ;
}
void Frames::event_func_6918()
{
    // event 1711_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1711_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1711_29_end;
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)*-2);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1711_29_end: ;
}
void Frames::event_func_6919()
{
    // event 1712_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1712_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1712_29_end;
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, ((Active*)*it)->alterables->values.get(3)));
        }
    }
    event_1712_29_end: ;
}
void Frames::event_func_6920()
{
    // event 1713_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1713_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1713_29_end;
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.2, ((Active*)*it)->alterables->values.get(3)));
        }
    }
    event_1713_29_end: ;
}
void Frames::event_func_6921()
{
    // event 1714_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1714_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1714_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        if (!check_overlap(minibossboomerang_1623_instances, minibossbulldozer_1719_instances)) goto event_1714_29_end;
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1714_29_end;
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1714_29_end: ;
}
void Frames::event_func_6922()
{
    // event 1717_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1717_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1717_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        if (!check_overlap(minibossboomerang_1623_instances, minibossbulldozer_1719_instances)) goto event_1717_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        if (!check_overlap(minibossboomerang_1623_instances, minibossbulldozerdoor_1718_instances)) goto event_1717_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1717_29_end;
        FrameObject * single_instance_1717_29_0; single_instance_1717_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossboomerang_1623_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1717_29_0 == NULL)
                    single_instance_1717_29_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.sub(0, 100);
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11), 120));
        }
    }
    event_1717_29_end: ;
}
void Frames::event_func_6923()
{
    // event 1718_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1718_29_end;
        minibossboomerang_1623_instances.clear_selection();
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibossboomerang_1623_instances.has_selection()) goto event_1718_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        if (!check_overlap(minibossboomerang_1623_instances, minibossbulldozer_1719_instances)) goto event_1718_29_end;
        minibossbulldozerdoor_1718_instances.clear_selection();
        if (!check_overlap(minibossboomerang_1623_instances, minibossbulldozerdoor_1718_instances)) goto event_1718_29_end;
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!minibossbulldozerdoor_1718_instances.has_selection()) goto event_1718_29_end;
        FrameObject * single_instance_1718_29_0; single_instance_1718_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossboomerang_1623_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1718_29_0 == NULL)
                    single_instance_1718_29_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        for (ObjectIterator it(minibossboomerang_1623_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.sub(0, 200);
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11), 120));
        }
    }
    event_1718_29_end: ;
}
void Frames::event_func_6924()
{
    // event 1719_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1719_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1719_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 6);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1719_29_end: ;
}
void Frames::event_func_6925()
{
    // event 1720_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1720_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (6))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1720_29_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1720_29_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1720_29_0; single_instance_1720_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1720_29_0 == NULL)
                    single_instance_1720_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1720_29_0))->set_x(((Active*)single_instance_1720_29_0)->get_x()-20+randrange(41)+((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4)*40);
        ((Active*)((Active*)single_instance_1720_29_0))->set_y(((Active*)single_instance_1720_29_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1720_29_end: ;
}
void Frames::event_func_6926()
{
    // event 1721_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1721_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (15))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1721_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 7);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(4)*-6);
            ((Active*)*it)->alterables->values.set(16, -10);
            ((Active*)*it)->alterables->values.set(14, ((Active*)*it)->get_y());
        }
        FrameObject * single_instance_1721_29_0; single_instance_1721_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossbulldozerdebris_1624(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1721_29_0 == NULL)
                    single_instance_1721_29_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        FrameObject * single_instance_1721_29_1; single_instance_1721_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + -24), parent->layer);
                if (single_instance_1721_29_1 == NULL)
                    single_instance_1721_29_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1721_29_1))->force_frame(9);
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 6);
        }
        ((Active*)((Active*)single_instance_1721_29_0))->move_back();
        ((Active*)((Active*)single_instance_1721_29_1))->set_x(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x()+((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->alterables->values.get(4)*20);
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, -3);
        }
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(minibossbulldozer_1719_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 30, parent->y + -50), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + -30, parent->y + -50), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 20, parent->y + -40), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + -20, parent->y + -40), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 10, parent->y + -50), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + -3, parent->y + -44), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 30, parent->y + -20), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + -30, parent->y + -20), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 10, parent->y + -20), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + -10, parent->y + -20), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1721_29_end: ;
}
void Frames::event_func_6927()
{
    // event 1722_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1722_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1722_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(14));
            ((Active*)*it)->alterables->values.add(14, ((Active*)*it)->alterables->values.get(15));
        }
    }
    event_1722_29_end: ;
}
void Frames::event_func_6928()
{
    // event 1723_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1723_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1723_29_end;
        if (test_obstacle(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_box_index(3))) goto event_1723_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, get_min(((Active*)*it)->alterables->values.get(15)+0.2, 15));
        }
    }
    event_1723_29_end: ;
}
void Frames::event_func_6929()
{
    // event 1724_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1724_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1724_29_end;
        if (!(test_obstacle(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_box_index(3)))) goto event_1724_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1724_29_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
    }
    event_1724_29_end: ;
}
void Frames::event_func_6930()
{
    // event 1725_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1725_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1725_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.12, 0));
        }
    }
    event_1725_29_end: ;
}
void Frames::event_func_6931()
{
    // event 1726_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1726_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1726_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.12, 0));
        }
    }
    event_1726_29_end: ;
}
void Frames::event_func_6932()
{
    // event 1727_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1727_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1727_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(width);
        }
    }
    event_1727_29_end: ;
}
void Frames::event_func_6933()
{
    // event 1728_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1728_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1728_29_end;
        if (!(test_obstacle(((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossbulldozer_1719_instances, default_active_instance))->get_box_index(3)))) goto event_1728_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
        {
            loop_bdfloor_running = true;
            int times = int(5);
            loop_bdfloor_index = 0;
            while (loop_bdfloor_index < times) {
                loop_bdfloor_29();
                if (!loop_bdfloor_running) break;
                loop_bdfloor_index++;
            }
        }
    }
    event_1728_29_end: ;
}
void Frames::event_func_6934()
{
    // event 1730_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1730_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-1))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1730_29_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 8);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1730_29_end: ;
}
void Frames::event_func_6935()
{
    // event 1937_29
    {
        if (!(group_main_engine_1)) goto event_1937_29_end;
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1937_29_end: ;
}
void Frames::event_func_6936()
{
    // event 1938_29
    {
        if (!(group_pause_1)) goto event_1938_29_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1938_29_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1938_29_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1938_29_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1938_29_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(minibossufobeam_1721_instances))->stop_animation();
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->advance_movement(+1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        flag_1739_instances.clear_selection();
        for (ObjectIterator it(flag_1739_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(largesign2_1636_instances))->stop_animation();
        largesign1_1635_instances.clear_selection();
        for (ObjectIterator it(largesign1_1635_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1938_29_end: ;
}
void Frames::event_func_6937()
{
    // event 1939_29
    bool or_result_1939_29 = false;
    bool or_temp_result_1939_29_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1939_29_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1939_29_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1939_29_0_end;
        or_result_1939_29 = true;
        or_temp_result_1939_29_0 = true;
    }
    or_event_1939_29_0_end: ;
    // event 1939_29
    bool or_temp_result_1939_29_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1939_29_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1939_29_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1939_29_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1939_29_1_end;
        or_result_1939_29 = true;
        or_temp_result_1939_29_1 = true;
        or_event_1939_29_1_end: ;
        if (!or_result_1939_29) goto or_final_or_event_1939_29_1_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(minibossufobeam_1721_instances))->start_animation();
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->advance_movement(-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        flag_1739_instances.clear_selection();
        for (ObjectIterator it(flag_1739_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(largesign2_1636_instances))->start_animation();
        largesign1_1635_instances.clear_selection();
        for (ObjectIterator it(largesign1_1635_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1939_29_1_end: ;
}
void Frames::handle_frame_30_events()
{
    test_collisions_29();
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
    event_func_6749();
    event_func_6752();
    event_func_6835();
    event_func_6913();
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
    event_func_6649();
    event_func_6650();
    event_func_6651();
    event_func_2774();
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
    event_func_6652();
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
    event_func_6653();
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
    event_func_6654();
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
    event_func_6655();
    event_func_6656();
    event_func_6657();
    event_func_6658();
    event_func_6659();
    event_func_4548();
    event_func_6660();
    event_func_6661();
    event_func_6662();
    event_func_6663();
    event_func_6664();
    event_func_6665();
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
    event_func_3736();
    event_func_6666();
    event_func_6667();
    event_func_6668();
    event_func_6669();
    event_func_6670();
    event_func_6671();
    event_func_6672();
    event_func_6673();
    event_func_6674();
    event_func_6675();
    event_func_6676();
    event_func_6677();
    event_func_6678();
    event_func_6679();
    event_func_6680();
    event_func_6681();
    event_func_6682();
    event_func_6683();
    event_func_6684();
    event_func_6685();
    event_func_6686();
    event_func_6687();
    event_func_6688();
    event_func_6689();
    event_func_6690();
    event_func_6691();
    event_func_6692();
    event_func_6693();
    event_func_6694();
    event_func_6695();
    event_func_6696();
    event_func_6697();
    event_func_6698();
    event_func_6699();
    event_func_6700();
    event_func_6701();
    event_func_6702();
    event_func_6703();
    event_func_6704();
    event_func_6705();
    event_func_6706();
    event_func_6707();
    event_func_6708();
    event_func_6709();
    event_func_6710();
    event_func_6711();
    event_func_6712();
    event_func_6713();
    event_func_6714();
    event_func_6715();
    event_func_6716();
    event_func_6717();
    event_func_6718();
    event_func_6719();
    event_func_6720();
    event_func_6721();
    event_func_6722();
    event_func_6723();
    event_func_6724();
    event_func_6725();
    event_func_6726();
    event_func_6727();
    event_func_6728();
    event_func_6729();
    event_func_6730();
    event_func_6731();
    event_func_6732();
    event_func_6733();
    event_func_6734();
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_6739();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_6740();
    event_func_6741();
    event_func_6742();
    event_func_6743();
    event_func_6744();
    event_func_6745();
    event_func_6746();
    event_func_6747();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_6754();
    event_func_6755();
    event_func_6756();
    event_func_6757();
    event_func_6758();
    event_func_6759();
    event_func_6760();
    event_func_6761();
    event_func_6762();
    event_func_6763();
    event_func_6764();
    event_func_6765();
    event_func_6766();
    event_func_6767();
    event_func_6768();
    event_func_6769();
    event_func_6770();
    event_func_6771();
    event_func_6772();
    event_func_6773();
    event_func_6774();
    event_func_6775();
    event_func_6776();
    event_func_6777();
    event_func_6778();
    event_func_6779();
    event_func_6780();
    event_func_6781();
    event_func_6782();
    event_func_6783();
    event_func_6784();
    event_func_6785();
    event_func_6786();
    event_func_6787();
    event_func_6788();
    event_func_6789();
    event_func_6790();
    event_func_6791();
    event_func_6792();
    event_func_6793();
    event_func_6794();
    event_func_6795();
    event_func_6796();
    event_func_6797();
    event_func_6798();
    event_func_6799();
    event_func_6800();
    event_func_6801();
    event_func_6802();
    event_func_6803();
    event_func_6804();
    event_func_6805();
    event_func_6806();
    event_func_6807();
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_6812();
    event_func_6813();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_6814();
    event_func_5352();
    event_func_5353();
    event_func_6815();
    event_func_6816();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    event_func_3002();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_6817();
    event_func_6818();
    event_func_6819();
    event_func_6820();
    event_func_6821();
    event_func_6822();
    event_func_6823();
    event_func_6824();
    event_func_6825();
    event_func_6826();
    event_func_6827();
    event_func_6828();
    event_func_6829();
    event_func_6830();
    event_func_6831();
    event_func_6832();
    event_func_6833();
    event_func_6834();
    event_func_6836();
    event_func_6837();
    event_func_6838();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) goto group_main_engine_level_specific_methods_bosses_miniboss_ufo_1_end;
    event_func_6839();
    event_func_6840();
    event_func_6841();
    event_func_6842();
    event_func_6843();
    event_func_6844();
    event_func_6845();
    event_func_6846();
    event_func_6847();
    event_func_6848();
    event_func_6849();
    event_func_6850();
    event_func_6851();
    event_func_6852();
    event_func_6853();
    event_func_6854();
    event_func_6855();
    event_func_6856();
    event_func_6857();
    event_func_6858();
    event_func_6859();
    event_func_6860();
    event_func_6861();
    event_func_6862();
    event_func_6863();
    event_func_6864();
    event_func_6865();
    event_func_6866();
    event_func_6867();
    event_func_6868();
    event_func_6869();
    event_func_6870();
    event_func_6871();
    event_func_6872();
    event_func_6873();
    group_main_engine_level_specific_methods_bosses_miniboss_ufo_1_end: ;
    event_func_6874();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1) goto group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end;
    event_func_6875();
    event_func_6876();
    event_func_6877();
    event_func_6878();
    event_func_6879();
    event_func_6880();
    event_func_6881();
    event_func_6882();
    event_func_6883();
    event_func_6884();
    event_func_6885();
    event_func_6886();
    event_func_6887();
    event_func_6888();
    event_func_6889();
    event_func_6890();
    event_func_6891();
    event_func_6892();
    event_func_6893();
    event_func_6894();
    event_func_6895();
    event_func_6896();
    event_func_6897();
    event_func_6898();
    event_func_6899();
    event_func_6900();
    event_func_6901();
    event_func_6902();
    event_func_6903();
    event_func_6904();
    event_func_6905();
    event_func_6906();
    event_func_6907();
    event_func_6908();
    event_func_6909();
    event_func_6910();
    event_func_6911();
    event_func_6912();
    event_func_6914();
    event_func_6915();
    event_func_6916();
    event_func_6917();
    event_func_6918();
    event_func_6919();
    event_func_6920();
    event_func_6921();
    event_func_6922();
    event_func_6923();
    event_func_6924();
    event_func_6925();
    event_func_6926();
    event_func_6927();
    event_func_6928();
    event_func_6929();
    event_func_6930();
    event_func_6931();
    event_func_6932();
    event_func_6933();
    event_func_6934();
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end: ;
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_2603();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_5371();
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
    event_func_6935();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_6936();
    event_func_6937();
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
void Frames::handle_frame_30_pre_events()
{
}
void Frames::event_func_6938()
{
    // event 3_29
    {
        if (!(group_main_engine_1)) goto event_3_29_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 31);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 12);
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_3_29_end: ;
}
void Frames::event_func_6939()
{
    // event 19_29
    {
        if (!(group_main_engine_1)) goto event_19_29_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, ((SystemBox*)*it)->width);
            ((SystemBox*)*it)->alterables->values.set(1, ((SystemBox*)*it)->height);
            ((SystemBox*)*it)->alterables->values.set(2, ((SystemBox*)*it)->get_y());
            ((SystemBox*)*it)->alterables->values.set(7, (frame_right()-frame_left())+1);
            ((SystemBox*)*it)->alterables->values.set(8, (frame_bottom()-frame_top())+1);
        }
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(bgstar_4_instances, 2, 0);
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->restore_frame();
        }
    }
    event_19_29_end: ;
}
void Frames::event_func_6940()
{
    // event 20_29
    {
        if (!(group_main_engine_1)) goto event_20_29_end;
        ((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0a_1612_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.65);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.65);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxboat1_1613_instances))->alterables->values.set(6, -0.25);
        ((SystemBox*)get_instance(levelparallaxcar_1619_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxcar_1619_instances))->alterables->values.set(4, 0.505);
        ((SystemBox*)get_instance(levelparallaxcar_1619_instances))->alterables->values.set(6, -4);
    }
    event_20_29_end: ;
}
void Frames::event_func_6941()
{
    // event 1425_29
    {
        if (!(group_main_engine_1)) goto event_1425_29_end;
        levelferriswheelpiece_1720_instances.clear_selection();
        spread_value(levelferriswheelpiece_1720_instances, 2, 0);
        for (ObjectIterator it(levelferriswheelpiece_1720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)%math_helper%20);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(3, 320);
        }
    }
    event_1425_29_end: ;
}
void Frames::event_func_6942()
{
    // event 1427_29
    {
        if (!(group_main_engine_1)) goto event_1427_29_end;
        gimmickdragontunnel1_1637_instances.clear_selection();
        spread_value(gimmickdragontunnel1_1637_instances, 4, 0);
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*35);
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->alterables->values.get(4));
        }
        gimmickdragontunnel2_1639_instances.clear_selection();
        spread_value(gimmickdragontunnel2_1639_instances, 4, 0);
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*35);
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->alterables->values.get(4));
        }
        gimmickdragontunnelhead_1638_instances.clear_selection();
        spread_value(gimmickdragontunnelhead_1638_instances, 0, 1);
        spread_value(gimmickdragontunnel1_1637_instances, 17, 0);
        spread_value(gimmickdragontunnel2_1639_instances, 17, 0);
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*13-1);
        }
        gimmickdragontunnelhead2_1640_instances.clear_selection();
        spread_value(gimmickdragontunnelhead2_1640_instances, 0, 1);
        for (ObjectIterator it(gimmickdragontunnelhead2_1640_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*13-1);
        }
        spread_value(gimmickdragontunnelhead_1638_instances, 1, 0);
        spread_value(gimmickdragontunnelhead2_1640_instances, 1, 0);
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        spread_value(gimmickdragontunnelmask1_1780_instances, 0, 0);
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%9);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        spread_value(gimmickdragontunnelmask2_1781_instances, 0, 0);
        for (ObjectIterator it(gimmickdragontunnelmask2_1781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0))%math_helper%9);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1427_29_end: ;
}
void Frames::event_func_6943()
{
    // event 1459_29
    {
        if (!(group_main_engine_1)) goto event_1459_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1459_29_end: ;
}
void Frames::event_func_6944()
{
    // event 1476_29
    {
        if (!(group_main_engine_1)) goto event_1476_29_end;
        gimmickboostblockturn_1749_instances.clear_selection();
        gimmickboostblock_1747_instances.clear_selection();
        if (!check_overlap(gimmickboostblockturn_1749_instances, gimmickboostblock_1747_instances)) goto event_1476_29_end;
        for (ObjectIterator it(gimmickboostblockturn_1749_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(5, 5);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1476_29_end: ;
}
void Frames::event_func_6945()
{
    // event 1555_29
    {
        if (!(group_main_engine_1)) goto event_1555_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1555_29_end: ;
}
void Frames::event_func_6946()
{
    // event 1607_29
    {
        if (!(group_main_engine_1)) goto event_1607_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        spread_value(gimmicklanternbridge1_1727_instances, 4, 1);
    }
    event_1607_29_end: ;
}
void Frames::event_func_6947()
{
    // event 1666_29
    {
        if (!(group_main_engine_1)) goto event_1666_29_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
        }
        minibossbulldozerdoor_1718_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        ((Active*)get_instance(minibossbulldozerarm_1772_instances))->move_front();
        ((Active*)get_instance(minibossbulldozerclaw_1775_instances))->move_front();
    }
    event_1666_29_end: ;
}
void Frames::event_func_6948()
{
    // event 1884_29
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1884_29_end;
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
    }
    event_1884_29_end: ;
}
void Frames::on_frame_30_start_events()
{
    event_func_3980();
    event_func_4133();
    event_func_6938();
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
    event_func_6939();
    event_func_6940();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_6941();
    event_func_6942();
    event_func_6943();
    event_func_6944();
    event_func_6945();
    event_func_2686();
    event_func_2687();
    event_func_6946();
    event_func_6947();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_6948();
    event_func_5387();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_30_init()
{
    index = 29;
    width = 11624;
    height = 1864;
    virtual_width = 11624;
    virtual_height = 1864;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &gimmickdragontunnelmask1_1780_instances, &gimmickdragontunnelmask2_1781_instances, NULL};
    qualifier_8.set(18, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &hazardspikesup_558_instances, &gimmickdragontunnelmask1_1780_instances, &gimmickdragontunnelmask2_1781_instances, NULL};
    qualifier_9.set(41, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&minibossbulldozerdoor_1718_instances, &minibossbulldozer_1719_instances, &gimmickboostblock_1747_instances, &enemytrafficle1_1757_instances, &enemytrafficle2_1758_instances, &enemytrafficle3_1759_instances, &minibossufo_1763_instances, &lamppostfront_1778_instances, &enemycoilhead_1782_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0a_1612_instances, &levelparallaxboat1_1613_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxcar_1619_instances, &levelparallaxpiece2_861_instances, NULL};
    qualifier_0.set(9, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickrollingarchbase_1725_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, &gimmicklanternbridge3_1729_instances, &gimmicklanternbridge4_1730_instances, &gimmicklanternbridge5_1731_instances, &gimmicklanternbridge6_1732_instances, &gimmicklanternbridge7_1733_instances, &gimmicklanternbridge8_1734_instances, &layer0loop_1742_instances, &layer0loop2_1743_instances, &layer1loop2_1744_instances, &layer1loop_1745_instances, &layer1loop3_1746_instances, &breakablewall_1748_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &hazardspikesup_558_instances, &minibossbulldozerhitbox_1776_instances, NULL};
    qualifier_7.set(44, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, NULL};
    qualifier_22.set(1, &qualifier_22_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, &layer0loop_1742_instances, &layer0loop2_1743_instances, NULL};
    qualifier_10.set(7, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &layer1loop2_1744_instances, &layer1loop_1745_instances, &layer1loop3_1746_instances, NULL};
    qualifier_11.set(6, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickdragontunnel1_1637_instances, &gimmickdragontunnel2_1639_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, NULL};
    qualifier_13.set(7, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0a_1612(0, 0), 0);
    add_background_object(create_levelparallaxboat1_1613(0, 120), 0);
    add_background_object(create_levelparallaxpiece1_1614(0, 96), 0);
    add_background_object(create_levelparallaxpiece3_1615(0, 152), 0);
    add_background_object(create_levelparallaxpiece2_1616(0, 208), 0);
    add_background_object(create_levelparallaxpiece4_1617(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_1618(0, 352), 0);
    add_background_object(create_levelparallaxcar_1619(0, 656), 0);
    add_background_object(create_levelparallaxpiece2_1620(0, 664), 0);
    add_object(create_bgstar_4(177, 41), 0);
    add_object(create_bgstar_4(129, 33), 0);
    add_object(create_bgstar_4(201, 17), 0);
    add_object(create_bgstar_4(97, 49), 0);
    add_object(create_bgstar_4(25, 57), 0);
    add_object(create_bgstar_4(281, 41), 0);
    add_object(create_bgstar_4(225, 49), 0);
    add_object(create_bgstar_4(449, 33), 0);
    add_object(create_bgstar_4(433, 65), 0);
    add_object(create_bgstar_4(345, 57), 0);
    add_object(create_bgstar_4(385, 25), 0);
    add_object(create_bgstar_4(417, 49), 0);
    add_object(create_bgstar_4(65, 25), 0);
    add_object(create_bgstar_4(297, 25), 0);
    add_object(create_bgstar_4(161, 49), 0);
    add_object(create_bgstar_4(361, 49), 0);
    add_background_object(create_fnwall11_1627(2544, 920), 1);
    add_background_object(create_fnwall10_1628(1984, 944), 1);
    add_background_object(create_fnwall10_1628(2144, 944), 1);
    add_background_object(create_fnwall11_1627(2064, 944), 1);
    add_background_object(create_fnwall11_1627(2064, 752), 1);
    add_background_object(create_fnwall10_1628(2624, 1240), 1);
    add_background_object(create_fnwall10_1628(2624, 1048), 1);
    add_background_object(create_fnwall10_1628(2464, 1240), 1);
    add_background_object(create_fnwall10_1628(2464, 1048), 1);
    add_background_object(create_fnwall11_1627(1984, 1008), 1);
    add_background_object(create_fnwall11_1627(2144, 1008), 1);
    add_background_object(create_fnwall11_1627(1984, 816), 1);
    add_background_object(create_fnwall11_1627(2144, 816), 1);
    add_background_object(create_fnwall11_1627(1984, 752), 1);
    add_background_object(create_fnwall11_1627(2144, 752), 1);
    add_background_object(create_fnwall12_1629(1968, 1008), 1);
    add_background_object(create_fnwall12_1629(2128, 1008), 1);
    add_background_object(create_fnwall12_1629(1968, 880), 1);
    add_background_object(create_fnwall12_1629(2128, 880), 1);
    add_background_object(create_fnwall12_1629(1968, 752), 1);
    add_background_object(create_fnwall12_1629(2128, 752), 1);
    add_background_object(create_fnwall13_1630(2032, 1008), 1);
    add_background_object(create_fnwall13_1630(2192, 1008), 1);
    add_background_object(create_fnwall13_1630(2032, 880), 1);
    add_background_object(create_fnwall13_1630(2192, 880), 1);
    add_background_object(create_fnwall13_1630(2032, 752), 1);
    add_background_object(create_fnwall13_1630(2192, 752), 1);
    add_background_object(create_fnwall10_1628(2064, 1008), 1);
    add_background_object(create_fnwall10_1628(2064, 880), 1);
    add_background_object(create_fnwall11_1627(2464, 1112), 1);
    add_background_object(create_fnwall11_1627(2624, 1112), 1);
    add_background_object(create_fnwall11_1627(2544, 1048), 1);
    add_background_object(create_fnwall11_1627(2464, 920), 1);
    add_background_object(create_fnwall11_1627(2624, 920), 1);
    add_background_object(create_fnwall12_1629(2448, 1176), 1);
    add_background_object(create_fnwall12_1629(2608, 1176), 1);
    add_background_object(create_fnwall12_1629(2448, 1048), 1);
    add_background_object(create_fnwall12_1629(2608, 1048), 1);
    add_background_object(create_fnwall12_1629(2448, 920), 1);
    add_background_object(create_fnwall12_1629(2608, 920), 1);
    add_background_object(create_fnwall13_1630(2512, 1176), 1);
    add_background_object(create_fnwall13_1630(2672, 1176), 1);
    add_background_object(create_fnwall13_1630(2512, 1048), 1);
    add_background_object(create_fnwall13_1630(2672, 1048), 1);
    add_background_object(create_fnwall13_1630(2512, 920), 1);
    add_background_object(create_fnwall13_1630(2672, 920), 1);
    add_background_object(create_fnwall10_1628(2544, 1240), 1);
    add_background_object(create_fnwall10_1628(2544, 984), 1);
    add_background_object(create_fnwall10_1628(2544, 1176), 1);
    add_background_object(create_fnwall10_1628(2064, 1072), 1);
    add_background_object(create_fnwall15_1631(2464, 920), 1);
    add_background_object(create_fnwall15_1631(2544, 920), 1);
    add_background_object(create_fnwall15_1631(2624, 920), 1);
    add_background_object(create_fngreenroof_1632(2640, 856), 1);
    add_background_object(create_fngreenroof_1632(2576, 856), 1);
    add_background_object(create_fngreenroof_1632(2512, 856), 1);
    add_background_object(create_fngreenroof_1632(2448, 856), 1);
    add_background_object(create_fnwall15_1631(1984, 752), 1);
    add_background_object(create_fnwall15_1631(2064, 752), 1);
    add_background_object(create_fnwall15_1631(2144, 752), 1);
    add_background_object(create_fngreenroof_1632(2160, 688), 1);
    add_background_object(create_fngreenroof_1632(2096, 688), 1);
    add_background_object(create_fngreenroof_1632(2032, 688), 1);
    add_background_object(create_fngreenroof_1632(1968, 688), 1);
    add_background_object(create_fnwall11_1627(1400, 896), 1);
    add_background_object(create_fnwall10_1628(1480, 1216), 1);
    add_background_object(create_fnwall10_1628(1480, 1024), 1);
    add_background_object(create_fnwall10_1628(1320, 1216), 1);
    add_background_object(create_fnwall10_1628(1320, 1024), 1);
    add_background_object(create_fnwall11_1627(1320, 1088), 1);
    add_background_object(create_fnwall11_1627(1480, 1088), 1);
    add_background_object(create_fnwall11_1627(1400, 1024), 1);
    add_background_object(create_fnwall11_1627(1320, 896), 1);
    add_background_object(create_fnwall11_1627(1480, 896), 1);
    add_background_object(create_fnwall12_1629(1304, 1152), 1);
    add_background_object(create_fnwall12_1629(1464, 1152), 1);
    add_background_object(create_fnwall12_1629(1304, 1024), 1);
    add_background_object(create_fnwall12_1629(1464, 1024), 1);
    add_background_object(create_fnwall12_1629(1304, 896), 1);
    add_background_object(create_fnwall12_1629(1464, 896), 1);
    add_background_object(create_fnwall13_1630(1368, 1152), 1);
    add_background_object(create_fnwall13_1630(1528, 1152), 1);
    add_background_object(create_fnwall13_1630(1368, 1024), 1);
    add_background_object(create_fnwall13_1630(1528, 1024), 1);
    add_background_object(create_fnwall13_1630(1368, 896), 1);
    add_background_object(create_fnwall13_1630(1528, 896), 1);
    add_background_object(create_fnwall10_1628(1400, 1216), 1);
    add_background_object(create_fnwall10_1628(1400, 960), 1);
    add_background_object(create_fnwall10_1628(1400, 1152), 1);
    add_background_object(create_fnwall15_1631(1320, 896), 1);
    add_background_object(create_fnwall15_1631(1400, 896), 1);
    add_background_object(create_fnwall15_1631(1480, 896), 1);
    add_background_object(create_fngreenroof_1632(1496, 832), 1);
    add_background_object(create_fngreenroof_1632(1432, 832), 1);
    add_background_object(create_fngreenroof_1632(1368, 832), 1);
    add_background_object(create_fngreenroof_1632(1304, 832), 1);
    add_background_object(create_fnwall10_1628(4088, 1216), 1);
    add_background_object(create_fnwall10_1628(4248, 1216), 1);
    add_background_object(create_fnwall11_1627(4168, 1216), 1);
    add_background_object(create_fnwall11_1627(4168, 1024), 1);
    add_background_object(create_fnwall11_1627(4088, 1280), 1);
    add_background_object(create_fnwall11_1627(4248, 1280), 1);
    add_background_object(create_fnwall11_1627(4088, 1088), 1);
    add_background_object(create_fnwall11_1627(4248, 1088), 1);
    add_background_object(create_fnwall11_1627(4088, 1024), 1);
    add_background_object(create_fnwall11_1627(4248, 1024), 1);
    add_background_object(create_fnwall12_1629(4072, 1280), 1);
    add_background_object(create_fnwall12_1629(4232, 1280), 1);
    add_background_object(create_fnwall12_1629(4072, 1152), 1);
    add_background_object(create_fnwall12_1629(4232, 1152), 1);
    add_background_object(create_fnwall12_1629(4072, 1024), 1);
    add_background_object(create_fnwall12_1629(4232, 1024), 1);
    add_background_object(create_fnwall13_1630(4136, 1280), 1);
    add_background_object(create_fnwall13_1630(4296, 1280), 1);
    add_background_object(create_fnwall13_1630(4136, 1152), 1);
    add_background_object(create_fnwall13_1630(4296, 1152), 1);
    add_background_object(create_fnwall13_1630(4136, 1024), 1);
    add_background_object(create_fnwall13_1630(4296, 1024), 1);
    add_background_object(create_fnwall10_1628(4168, 1280), 1);
    add_background_object(create_fnwall10_1628(4168, 1152), 1);
    add_background_object(create_fnwall10_1628(4168, 1344), 1);
    add_background_object(create_fnwall15_1631(4088, 1024), 1);
    add_background_object(create_fnwall15_1631(4168, 1024), 1);
    add_background_object(create_fnwall15_1631(4248, 1024), 1);
    add_background_object(create_fngreenroof_1632(4264, 960), 1);
    add_background_object(create_fngreenroof_1632(4200, 960), 1);
    add_background_object(create_fngreenroof_1632(4136, 960), 1);
    add_background_object(create_fngreenroof_1632(4072, 960), 1);
    add_background_object(create_fnwall10_1628(4504, 1216), 1);
    add_background_object(create_fnwall10_1628(4664, 1216), 1);
    add_background_object(create_fnwall11_1627(4584, 1216), 1);
    add_background_object(create_fnwall11_1627(4584, 1024), 1);
    add_background_object(create_fnwall11_1627(4504, 1280), 1);
    add_background_object(create_fnwall11_1627(4664, 1280), 1);
    add_background_object(create_fnwall11_1627(4504, 1088), 1);
    add_background_object(create_fnwall11_1627(4664, 1088), 1);
    add_background_object(create_fnwall11_1627(4504, 1024), 1);
    add_background_object(create_fnwall11_1627(4664, 1024), 1);
    add_background_object(create_fnwall12_1629(4488, 1280), 1);
    add_background_object(create_fnwall12_1629(4648, 1280), 1);
    add_background_object(create_fnwall12_1629(4488, 1152), 1);
    add_background_object(create_fnwall12_1629(4648, 1152), 1);
    add_background_object(create_fnwall12_1629(4488, 1024), 1);
    add_background_object(create_fnwall12_1629(4648, 1024), 1);
    add_background_object(create_fnwall13_1630(4552, 1280), 1);
    add_background_object(create_fnwall13_1630(4712, 1280), 1);
    add_background_object(create_fnwall13_1630(4552, 1152), 1);
    add_background_object(create_fnwall13_1630(4712, 1152), 1);
    add_background_object(create_fnwall13_1630(4552, 1024), 1);
    add_background_object(create_fnwall13_1630(4712, 1024), 1);
    add_background_object(create_fnwall10_1628(4584, 1280), 1);
    add_background_object(create_fnwall10_1628(4584, 1152), 1);
    add_background_object(create_fnwall10_1628(4584, 1344), 1);
    add_background_object(create_fnwall15_1631(4504, 1024), 1);
    add_background_object(create_fnwall15_1631(4584, 1024), 1);
    add_background_object(create_fnwall15_1631(4664, 1024), 1);
    add_background_object(create_fngreenroof_1632(4680, 960), 1);
    add_background_object(create_fngreenroof_1632(4616, 960), 1);
    add_background_object(create_fngreenroof_1632(4552, 960), 1);
    add_background_object(create_fngreenroof_1632(4488, 960), 1);
    add_object(create_fireworklauncher_1633(3888, 865), 1);
    add_object(create_fireworklauncher_1633(3816, 825), 1);
    add_object(create_fireworklauncher_1633(4344, 889), 1);
    add_object(create_fireworklauncher_1633(4440, 977), 1);
    add_object(create_fireworklauncher_1633(4536, 929), 1);
    add_object(create_fireworklauncher_1633(7016, 905), 1);
    add_object(create_fireworklauncher_1633(7112, 1017), 1);
    add_object(create_fireworklauncher_1633(7192, 945), 1);
    add_object(create_fireworklauncher_1633(7280, 1049), 1);
    add_object(create_fireworklauncher_1633(7312, 873), 1);
    add_object(create_fireworklauncher_1633(7352, 929), 1);
    add_object(create_fireworklauncher_1633(7208, 1169), 1);
    add_object(create_fireworklauncher_1633(7376, 1209), 1);
    add_background_object(create_fnsignholder_1634(6056, 1544), 2);
    add_background_object(create_fnsignholder_1634(6064, 1368), 2);
    add_background_object(create_fnsignholder_1634(2736, 1200), 2);
    add_background_object(create_fnsignholder_1634(2736, 1352), 2);
    add_object(create_paperlantern_527(6208, 1248), 2);
    add_object(create_paperlantern_527(6168, 1200), 2);
    add_object(create_paperlantern_527(6208, 1200), 2);
    add_object(create_largesign1_1635(6008, 1352), 2);
    add_object(create_largesign2_1636(2776, 1176), 2);
    add_object(create_paperlantern_527(8488, 1208), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnel1_1637(5424, 1376), 2);
    add_object(create_gimmickdragontunnelhead_1638(5424, 1372), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnel2_1639(6176, 1560), 2);
    add_object(create_gimmickdragontunnelhead2_1640(6176, 1556), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 904), 2);
    add_object(create_gimmickdragontunnelhead_1638(8624, 900), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnel1_1637(8624, 1096), 2);
    add_object(create_gimmickdragontunnelhead_1638(8624, 1092), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnel2_1639(9352, 1000), 2);
    add_object(create_gimmickdragontunnelhead2_1640(9352, 996), 2);
    add_background_object(create_fnclothesline_1641(7272, 928), 3);
    add_background_object(create_fnclothesline_1641(3064, 1152), 3);
    add_background_object(create_fnclothesline_1641(3128, 1152), 3);
    add_background_object(create_fnclothesline_1641(2752, 1088), 3);
    add_background_object(create_fnclothesline_1641(2816, 1088), 3);
    add_background_object(create_fnclothesline_1641(2880, 1088), 3);
    add_background_object(create_fnclothesline_1641(2944, 1088), 3);
    add_background_object(create_backwall2_1642(8424, 944), 3);
    add_background_object(create_fnbackwall5_1643(8424, 1040), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 1168), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 848), 3);
    add_background_object(create_fnbackwall1_1645(11496, 1232), 3);
    add_background_object(create_fnredcolumnback_1646(11536, 1216), 3);
    add_background_object(create_backwall2_1642(10728, 1232), 3);
    add_background_object(create_fnredcolumnback_1646(10736, 1216), 3);
    add_background_object(create_ferriswheelbase2_1644(11080, 944), 3);
    add_background_object(create_fnsignholder_1634(8504, 752), 3);
    add_background_object(create_fnsignholder_1634(8512, 584), 3);
    add_background_object(create_fnsignholder_1634(9392, 1552), 3);
    add_background_object(create_fnsignholder_1634(9400, 1384), 3);
    add_background_object(create_fnbackwall4_1647(9192, 1520), 3);
    add_background_object(create_fnbackwall4_1647(9320, 1616), 3);
    add_background_object(create_fnbackwall6_1648(9192, 1616), 3);
    add_background_object(create_fnbackwall6_1648(8424, 1432), 3);
    add_background_object(create_fnbackwall6_1648(8424, 1624), 3);
    add_background_object(create_fnbackwall6_1648(8296, 1624), 3);
    add_background_object(create_backwall2_1642(8040, 1624), 3);
    add_background_object(create_fnbackwall1_1645(8168, 1624), 3);
    add_background_object(create_backwall2_1642(8168, 1528), 3);
    add_background_object(create_fnbackwall1_1645(8424, 1528), 3);
    add_background_object(create_fnfloor8_1649(3456, 288), 3);
    add_background_object(create_backwall2_1642(10984, 1040), 3);
    add_background_object(create_fnfloor6_1650(10280, 1496), 3);
    add_background_object(create_fnfloor6_1650(10152, 1496), 3);
    add_background_object(create_fnfloor6_1650(10024, 1496), 3);
    add_background_object(create_fnfloor6_1650(9896, 1496), 3);
    add_background_object(create_fnfloor6_1650(9768, 1496), 3);
    add_background_object(create_fnredcolumnback_1646(10096, 1408), 3);
    add_background_object(create_fnredcolumnback_1646(9968, 1408), 3);
    add_background_object(create_rooftop5_1651(9808, 1400), 3);
    add_background_object(create_rooftop4_1652(10224, 1400), 3);
    add_background_object(create_fnredcolumnback_1646(9856, 1408), 3);
    add_background_object(create_fnredcolumnback_1646(10208, 1408), 3);
    add_background_object(create_floor26_1653(8920, 1304), 3);
    add_background_object(create_floor25_1654(9056, 1304), 3);
    add_background_object(create_fnbackwall5_1643(10600, 1040), 3);
    add_background_object(create_backwall2_1642(10600, 1472), 3);
    add_background_object(create_fnbackwall4_1647(10600, 1472), 3);
    add_background_object(create_fnapartmentwall1_1655(10408, 1416), 3);
    add_background_object(create_fnapartmentwall1_1655(10536, 1416), 3);
    add_background_object(create_fnapartmentwindow_1656(10472, 1416), 3);
    add_background_object(create_fnapartmentwall1_1655(10408, 1320), 3);
    add_background_object(create_fnapartmentwall1_1655(10536, 1320), 3);
    add_background_object(create_fnapartmentwindow_1656(10472, 1320), 3);
    add_background_object(create_floor34_1657(10384, 976), 3);
    add_background_object(create_fnredcolumnback_1646(8632, 1216), 3);
    add_background_object(create_rooftop5_1651(8352, 1200), 3);
    add_background_object(create_fnredcolumnback_1646(8552, 1216), 3);
    add_background_object(create_fnredcolumnback_1646(8424, 1216), 3);
    add_background_object(create_fnrooftop3_1658(8320, 1088), 3);
    add_background_object(create_fnbackwall1_1645(4088, 1208), 3);
    add_background_object(create_fnbackwall1_1645(4072, 1184), 3);
    add_background_object(create_fnbackwall1_1645(1528, 1256), 3);
    add_background_object(create_fnbackwall1_1645(1512, 1232), 3);
    add_background_object(create_fnfloor12_1659(7656, 1400), 3);
    add_background_object(create_fnfloor14_1660(7768, 1400), 3);
    add_background_object(create_fnfloor17_1661(7656, 1416), 3);
    add_background_object(create_fnladder_1662(7880, 1560), 3);
    add_background_object(create_fnladder_1662(7880, 1528), 3);
    add_background_object(create_fnladder_1662(7880, 1432), 3);
    add_background_object(create_fnladder_1662(7880, 1400), 3);
    add_background_object(create_fnbackwall4_1647(7656, 1616), 3);
    add_background_object(create_fnredcolumnback_1646(7336, 1456), 3);
    add_background_object(create_backwall2_1642(7272, 1328), 3);
    add_background_object(create_fnbackwall1_1645(7400, 1424), 3);
    add_background_object(create_fnbackwall1_1645(7400, 1520), 3);
    add_background_object(create_backwall2_1642(7272, 1520), 3);
    add_background_object(create_fnbackwall3_1663(7528, 1424), 3);
    add_background_object(create_fnbackwall5_1643(7272, 1424), 3);
    add_background_object(create_fnbackwall4_1647(7528, 1520), 3);
    add_background_object(create_fnbackwall1_1645(7016, 1520), 3);
    add_background_object(create_fnbackwall1_1645(7144, 1520), 3);
    add_background_object(create_fnbackwall4_1647(7272, 1520), 3);
    add_background_object(create_fnbackwall4_1647(7144, 1424), 3);
    add_background_object(create_fnbackwall4_1647(7016, 1328), 3);
    add_background_object(create_backwall2_1642(6760, 1424), 3);
    add_background_object(create_fnbackwall5_1643(6760, 1328), 3);
    add_background_object(create_fnbackwall5_1643(5224, 1424), 3);
    add_background_object(create_fnbackwall3_1663(5096, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 1304), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 1176), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 920), 3);
    add_background_object(create_ferriswheelbase_1664(3752, 864), 3);
    add_background_object(create_fnapartmentwall1_1655(10408, 1224), 3);
    add_background_object(create_fnapartmentwall1_1655(10536, 1224), 3);
    add_background_object(create_fnwall21_1665(10408, 1272), 3);
    add_background_object(create_fnwall21_1665(10584, 1272), 3);
    add_background_object(create_fnbackhedge_1666(4032, 1120), 3);
    add_background_object(create_fnbackhedge_1666(5352, 1264), 3);
    add_background_object(create_fnbackhedge_1666(5224, 1264), 3);
    add_background_object(create_fnbackhedge_1666(5096, 1264), 3);
    add_background_object(create_fnbackhedge_1666(4968, 1264), 3);
    add_background_object(create_fnbackhedge_1666(4840, 1264), 3);
    add_background_object(create_fnbackhedge_1666(4712, 1264), 3);
    add_background_object(create_fnbackhedge_1666(4584, 1264), 3);
    add_background_object(create_fnbackhedge_1666(2152, 1072), 3);
    add_background_object(create_fnfloor20_1667(9704, 1520), 3);
    add_background_object(create_fnfloor20_1667(9832, 1520), 3);
    add_background_object(create_fnfloor8_1649(9960, 1520), 3);
    add_background_object(create_rooftop4_1652(1128, 928), 3);
    add_background_object(create_fnredcolumnback_1646(1104, 944), 3);
    add_background_object(create_fnwall14_1668(6120, 1416), 3);
    add_background_object(create_fnwall14_1668(6184, 1416), 3);
    add_background_object(create_fnwall14_1668(6248, 1416), 3);
    add_background_object(create_fnwall14_1668(6312, 1416), 3);
    add_background_object(create_fnwall16_1669(6184, 1616), 3);
    add_background_object(create_fnredcolumnback_1646(6240, 1208), 3);
    add_background_object(create_rooftop5_1651(6040, 1192), 3);
    add_background_object(create_fnredcolumnback_1646(6112, 1208), 3);
    add_background_object(create_fnfloor8_1649(4968, 1616), 3);
    add_background_object(create_fnbackwall1_1645(1896, 1088), 3);
    add_background_object(create_fnfloor8_1649(3456, 384), 3);
    add_background_object(create_fnfloor20_1667(1384, 1232), 3);
    add_background_object(create_fnbackwall4_1647(1384, 1376), 3);
    add_background_object(create_fnbackwall1_1645(1256, 1376), 3);
    add_background_object(create_fnbackwall4_1647(1256, 1280), 3);
    add_background_object(create_fnbackwall3_1663(1256, 1184), 3);
    add_background_object(create_fnbackwall1_1645(1256, 1088), 3);
    add_background_object(create_fnbackwall3_1663(1640, 896), 3);
    add_background_object(create_fnbackwall4_1647(1640, 944), 3);
    add_background_object(create_fnbackwall1_1645(1512, 896), 3);
    add_background_object(create_fnbackwall1_1645(1512, 992), 3);
    add_background_object(create_fnbackwall4_1647(872, 992), 3);
    add_background_object(create_backwall2_1642(1256, 992), 3);
    add_background_object(create_fnbackwall1_1645(1384, 992), 3);
    add_background_object(create_fnfloor8_1649(1640, 1088), 3);
    add_background_object(create_fnwall6_1670(0, 944), 3);
    add_background_object(create_fnwall7_1671(128, 944), 3);
    add_background_object(create_fnwall5_1672(64, 944), 3);
    add_background_object(create_fnwall6_1670(224, 944), 3);
    add_background_object(create_fnwall7_1671(352, 944), 3);
    add_background_object(create_fnwall5_1672(288, 944), 3);
    add_background_object(create_fnwall6_1670(448, 944), 3);
    add_background_object(create_fnwall7_1671(576, 944), 3);
    add_background_object(create_fnwall5_1672(512, 944), 3);
    add_background_object(create_fnwall6_1670(672, 944), 3);
    add_background_object(create_fnwall7_1671(800, 944), 3);
    add_background_object(create_fnwall5_1672(736, 944), 3);
    add_background_object(create_fnredcolumn_1673(184, 944), 3);
    add_background_object(create_fnredcolumn_1673(408, 944), 3);
    add_background_object(create_fnredcolumn_1673(632, 944), 3);
    add_background_object(create_fnredcolumn_1673(856, 944), 3);
    add_background_object(create_fnwall6_1670(696, 664), 3);
    add_background_object(create_fnbackwall1_1645(5160, 1280), 3);
    add_background_object(create_fnbackwall4_1647(5288, 1280), 3);
    add_background_object(create_fnbackwall1_1645(5032, 1232), 3);
    add_background_object(create_fnbackwall1_1645(4904, 1280), 3);
    add_background_object(create_fnbackwall1_1645(4776, 1232), 3);
    add_background_object(create_backwall2_1642(4648, 1232), 3);
    add_background_object(create_fnwall6_1670(152, 664), 3);
    add_background_object(create_floor33_1674(4160, 696), 3);
    add_background_object(create_floor21_1675(3304, -72), 3);
    add_background_object(create_rooftop5_1651(4720, 1104), 3);
    add_background_object(create_fnwall5_1672(4888, 1120), 3);
    add_background_object(create_fnwall6_1670(4824, 1120), 3);
    add_background_object(create_fnwall7_1671(4952, 1120), 3);
    add_background_object(create_fnredcolumn_1673(4784, 1120), 3);
    add_background_object(create_fnbackwall3_1663(2792, 96), 3);
    add_background_object(create_fnbackwall1_1645(2024, 560), 3);
    add_background_object(create_fnbackwall1_1645(2024, 464), 3);
    add_background_object(create_backwall2_1642(2024, 368), 3);
    add_background_object(create_fnbackwall1_1645(2280, 368), 3);
    add_background_object(create_fnbackwall1_1645(2152, 368), 3);
    add_background_object(create_fnbackwall1_1645(2536, 368), 3);
    add_background_object(create_fnbackwall1_1645(2664, 368), 3);
    add_background_object(create_fnwall5_1672(5112, 1120), 3);
    add_background_object(create_rooftop4_1652(5264, 1104), 3);
    add_background_object(create_fnwall6_1670(4288, 832), 3);
    add_background_object(create_fnwall7_1671(4352, 832), 3);
    add_background_object(create_fnredcolumn_1673(4248, 832), 3);
    add_background_object(create_fnwall6_1670(4160, 1056), 3);
    add_background_object(create_fnwall14_1668(3752, 1424), 3);
    add_background_object(create_fnwall14_1668(3688, 1424), 3);
    add_background_object(create_fnapartmentwall3_1676(3688, 1336), 3);
    add_background_object(create_fnapartmentwall2_1677(3688, 1384), 3);
    add_background_object(create_fnsoil_1678(2536, 1360), 3);
    add_background_object(create_fnsoil_1678(2408, 1312), 3);
    add_background_object(create_fnsoil_1678(2536, 1488), 3);
    add_background_object(create_fnsoil_1678(2664, 1488), 3);
    add_background_object(create_fnapartmentwall1_1655(2568, 1208), 3);
    add_background_object(create_fnapartmentwall1_1655(2696, 1304), 3);
    add_background_object(create_fnapartmentwall1_1655(2632, 1304), 3);
    add_background_object(create_fnwall21_1665(2568, 1256), 3);
    add_background_object(create_fnwall21_1665(2744, 1352), 3);
    add_background_object(create_fnapartmentwall1_1655(2696, 1208), 3);
    add_background_object(create_fnapartmentwall1_1655(3304, 1088), 3);
    add_background_object(create_fnapartmentwall1_1655(3368, 1088), 3);
    add_background_object(create_fnapartmentwall1_1655(3176, 1088), 3);
    add_background_object(create_fnapartmentwall1_1655(3496, 1088), 3);
    add_background_object(create_fnapartmentwindow_1656(3432, 1088), 3);
    add_background_object(create_fnapartmentwindow_1656(3240, 1088), 3);
    add_background_object(create_fnapartmentwall1_1655(3304, 1280), 3);
    add_background_object(create_fnapartmentwall1_1655(3368, 1280), 3);
    add_background_object(create_fnapartmentwall1_1655(3304, 1184), 3);
    add_background_object(create_fnapartmentwall1_1655(3368, 1184), 3);
    add_background_object(create_rooftop4_1652(1400, 648), 3);
    add_background_object(create_rooftop4_1652(1208, 376), 3);
    add_background_object(create_rooftop4_1652(360, 648), 3);
    add_background_object(create_rooftop5_1651(792, 376), 3);
    add_background_object(create_rooftop5_1651(600, 648), 3);
    add_background_object(create_fnredcolumnback_1646(1376, 664), 3);
    add_background_object(create_fnredcolumnback_1646(1016, 392), 3);
    add_background_object(create_fnredcolumnback_1646(1192, 392), 3);
    add_background_object(create_fnredcolumnback_1646(840, 392), 3);
    add_background_object(create_floor5_1679(1368, 784), 3);
    add_background_object(create_floor5_1679(816, 520), 3);
    add_background_object(create_floor7_1680(1400, 784), 3);
    add_background_object(create_floor7_1680(1232, 520), 3);
    add_background_object(create_fnfloor6_1650(976, 520), 3);
    add_background_object(create_fnfloor6_1650(848, 520), 3);
    add_background_object(create_fnfloor6_1650(1104, 520), 3);
    add_background_object(create_floor3_1681(384, 792), 3);
    add_background_object(create_floor1_1682(784, 792), 3);
    add_background_object(create_floor1_1682(656, 792), 3);
    add_background_object(create_floor3_1681(912, 792), 3);
    add_background_object(create_floor1_1682(256, 792), 3);
    add_background_object(create_floor1_1682(128, 792), 3);
    add_background_object(create_floor1_1682(0, 792), 3);
    add_background_object(create_floor4_1683(624, 792), 3);
    add_background_object(create_fnwall7_1671(824, 664), 3);
    add_background_object(create_fnwall7_1671(280, 664), 3);
    add_background_object(create_fnwall7_1671(56, 664), 3);
    add_background_object(create_fnredcolumn_1673(880, 664), 3);
    add_background_object(create_fnredcolumn_1673(656, 664), 3);
    add_background_object(create_fnredcolumn_1673(336, 664), 3);
    add_background_object(create_fnredcolumn_1673(112, 664), 3);
    add_background_object(create_fnwall5_1672(760, 664), 3);
    add_background_object(create_fnwall5_1672(-8, 664), 3);
    add_background_object(create_fnwall5_1672(216, 664), 3);
    add_background_object(create_fnfloor8_1649(1640, 608), 3);
    add_background_object(create_fnfloor8_1649(1768, 608), 3);
    add_background_object(create_fnfloor8_1649(1768, 416), 3);
    add_background_object(create_fnfloor8_1649(1896, 416), 3);
    add_background_object(create_fnfloor8_1649(1768, 512), 3);
    add_background_object(create_fnfloor8_1649(1896, 608), 3);
    add_background_object(create_fnfloor8_1649(1896, 512), 3);
    add_background_object(create_fnfloor8_1649(2024, 608), 3);
    add_background_object(create_fnfloor8_1649(2152, 416), 3);
    add_background_object(create_fnfloor8_1649(2280, 416), 3);
    add_background_object(create_fnfloor8_1649(2152, 512), 3);
    add_background_object(create_fnfloor8_1649(2280, 512), 3);
    add_background_object(create_fnfloor8_1649(2152, 608), 3);
    add_background_object(create_fnfloor8_1649(2280, 608), 3);
    add_background_object(create_fnfloor8_1649(6248, 1512), 3);
    add_background_object(create_fnfloor8_1649(1640, 704), 3);
    add_background_object(create_fnfloor8_1649(1640, 800), 3);
    add_background_object(create_fnfloor8_1649(1512, 800), 3);
    add_background_object(create_fnfloor8_1649(1384, 800), 3);
    add_background_object(create_fnfloor8_1649(6632, 1520), 3);
    add_background_object(create_fnfloor8_1649(6760, 1520), 3);
    add_background_object(create_fnfloor8_1649(6352, 1264), 3);
    add_background_object(create_fnfloor8_1649(6888, 1520), 3);
    add_background_object(create_fnfloor8_1649(6888, 1424), 3);
    add_background_object(create_fnfloor8_1649(6888, 1328), 3);
    add_background_object(create_fnfloor8_1649(6888, 1232), 3);
    add_background_object(create_fnfloor8_1649(6760, 1232), 3);
    add_background_object(create_fnfloor8_1649(6632, 1232), 3);
    add_background_object(create_fnfloor8_1649(6352, 1168), 3);
    add_background_object(create_fnfloor8_1649(6352, 1072), 3);
    add_background_object(create_fnfloor8_1649(2536, 416), 3);
    add_background_object(create_fnfloor8_1649(2536, 512), 3);
    add_background_object(create_fnfloor8_1649(2536, 704), 3);
    add_background_object(create_fnfloor8_1649(2664, 416), 3);
    add_background_object(create_fnfloor8_1649(2664, 512), 3);
    add_background_object(create_fnfloor8_1649(2664, 704), 3);
    add_background_object(create_fnfloor27_1684(2792, 96), 3);
    add_background_object(create_fnfloor28_1685(2864, 96), 3);
    add_background_object(create_fnfloor8_1649(2280, 1136), 3);
    add_background_object(create_fnfloor8_1649(2408, 1232), 3);
    add_background_object(create_fnfloor8_1649(2536, 1328), 3);
    add_background_object(create_fnfloor8_1649(2664, 1424), 3);
    add_background_object(create_fnfloor8_1649(2792, 1520), 3);
    add_background_object(create_fnfloor8_1649(2920, 1520), 3);
    add_background_object(create_fnfloor8_1649(3048, 1520), 3);
    add_background_object(create_fnfloor8_1649(3176, 1520), 3);
    add_background_object(create_fnfloor8_1649(3304, 1520), 3);
    add_background_object(create_fnfloor8_1649(3432, 1520), 3);
    add_background_object(create_fnfloor8_1649(1768, 704), 3);
    add_background_object(create_fnfloor8_1649(1896, 704), 3);
    add_background_object(create_fnfloor8_1649(2024, 704), 3);
    add_background_object(create_fnfloor8_1649(2152, 704), 3);
    add_background_object(create_fnfloor8_1649(2280, 704), 3);
    add_background_object(create_fnfloor8_1649(1768, 800), 3);
    add_background_object(create_fnfloor8_1649(1896, 800), 3);
    add_background_object(create_fnfloor8_1649(2024, 800), 3);
    add_background_object(create_fnfloor8_1649(2152, 800), 3);
    add_background_object(create_fnfloor8_1649(2280, 800), 3);
    add_background_object(create_fnladder_1662(3352, 1264), 3);
    add_background_object(create_fnrooftop1_1686(0, 536), 3);
    add_background_object(create_fnrooftop1_1686(848, 536), 3);
    add_background_object(create_fnrooftop1_1686(976, 536), 3);
    add_background_object(create_fnrooftop1_1686(912, 536), 3);
    add_background_object(create_fnrooftop1_1686(64, 816), 3);
    add_background_object(create_fnrooftop1_1686(0, 816), 3);
    add_background_object(create_fnrooftop1_1686(192, 816), 3);
    add_background_object(create_fnrooftop1_1686(128, 816), 3);
    add_background_object(create_fnrooftop1_1686(64, 536), 3);
    add_background_object(create_fnrooftop1_1686(128, 536), 3);
    add_background_object(create_fnrooftop1_1686(1040, 536), 3);
    add_background_object(create_fnrooftop1_1686(320, 816), 3);
    add_background_object(create_fnrooftop1_1686(256, 816), 3);
    add_background_object(create_fnrooftop1_1686(448, 816), 3);
    add_background_object(create_fnrooftop1_1686(384, 816), 3);
    add_background_object(create_fnrooftop1_1686(576, 816), 3);
    add_background_object(create_fnrooftop1_1686(512, 816), 3);
    add_background_object(create_fnrooftop1_1686(704, 816), 3);
    add_background_object(create_fnrooftop1_1686(640, 816), 3);
    add_background_object(create_fnrooftop1_1686(832, 816), 3);
    add_background_object(create_fnrooftop1_1686(768, 816), 3);
    add_background_object(create_fnrooftop1_1686(896, 816), 3);
    add_background_object(create_fnrooftop1_1686(1168, 536), 3);
    add_background_object(create_fnrooftop1_1686(1104, 536), 3);
    add_background_object(create_fnrooftop2_1687(192, 536), 3);
    add_background_object(create_fnrooftop2_1687(1040, 264), 3);
    add_background_object(create_fnrooftop2_1687(960, 816), 3);
    add_background_object(create_fnrooftop2_1687(1232, 536), 3);
    add_background_object(create_fnrooftop3_1658(568, 536), 3);
    add_background_object(create_fnrooftop3_1658(760, 264), 3);
    add_background_object(create_fnfloor9_1688(1640, 608), 3);
    add_background_object(create_fnfloor9_1688(1384, 800), 3);
    add_background_object(create_fnfloor9_1688(1640, 704), 3);
    add_background_object(create_fnfloor9_1688(1352, 800), 3);
    add_background_object(create_fnfloor9_1688(6632, 1520), 3);
    add_background_object(create_fnfloor9_1688(6888, 1424), 3);
    add_background_object(create_fnfloor9_1688(6888, 1328), 3);
    add_background_object(create_fnfloor9_1688(6632, 1232), 3);
    add_background_object(create_fnfloor9_1688(6328, 1104), 3);
    add_background_object(create_fnfloor9_1688(6352, 1072), 3);
    add_background_object(create_fnfloor9_1688(2536, 416), 3);
    add_background_object(create_fnfloor9_1688(2536, 512), 3);
    add_background_object(create_fnfloor9_1688(2536, 704), 3);
    add_background_object(create_gimmickrollingarchback_1689(1864, 384), 3);
    add_background_object(create_gimmickrollingarchback_1689(2248, 384), 3);
    add_background_object(create_fnfloor11_1690(1560, 704), 3);
    add_background_object(create_fnfloor12_1659(1384, 800), 3);
    add_background_object(create_fnfloor12_1659(1512, 800), 3);
    add_background_object(create_fnfloor12_1659(1640, 608), 3);
    add_background_object(create_fnfloor12_1659(2024, 608), 3);
    add_background_object(create_fnfloor12_1659(6248, 1512), 3);
    add_background_object(create_fnfloor12_1659(6632, 1520), 3);
    add_background_object(create_fnfloor12_1659(6760, 1520), 3);
    add_background_object(create_fnfloor12_1659(6632, 1232), 3);
    add_background_object(create_fnfloor12_1659(6760, 1232), 3);
    add_background_object(create_fnfloor12_1659(6888, 1232), 3);
    add_background_object(create_fnfloor12_1659(2536, 416), 3);
    add_background_object(create_fnfloor12_1659(2664, 416), 3);
    add_background_object(create_fnfloor12_1659(2920, 1520), 3);
    add_background_object(create_fnfloor12_1659(3048, 1520), 3);
    add_background_object(create_fnfloor12_1659(3176, 1520), 3);
    add_background_object(create_fnfloor12_1659(3304, 1520), 3);
    add_background_object(create_fnfloor12_1659(3432, 1520), 3);
    add_background_object(create_fnfloor13_1691(1640, 608), 3);
    add_background_object(create_fnfloor13_1691(1384, 800), 3);
    add_background_object(create_fnfloor13_1691(1352, 800), 3);
    add_background_object(create_fnfloor13_1691(6632, 1520), 3);
    add_background_object(create_fnfloor13_1691(6632, 1232), 3);
    add_background_object(create_fnfloor13_1691(2536, 416), 3);
    add_background_object(create_fnfloor10_1692(1368, 800), 3);
    add_background_object(create_fnfloor10_1692(6360, 1512), 3);
    add_background_object(create_fnfloor10_1692(6464, 1264), 3);
    add_background_object(create_fnfloor10_1692(6464, 1168), 3);
    add_background_object(create_fnfloor10_1692(6464, 1072), 3);
    add_background_object(create_fnfloor10_1692(2392, 512), 3);
    add_background_object(create_fnfloor10_1692(2392, 608), 3);
    add_background_object(create_fnfloor10_1692(2776, 416), 3);
    add_background_object(create_fnfloor10_1692(2776, 512), 3);
    add_background_object(create_fnfloor10_1692(2776, 704), 3);
    add_background_object(create_fnfloor10_1692(2392, 704), 3);
    add_background_object(create_fnfloor10_1692(2392, 800), 3);
    add_background_object(create_fnfloor14_1660(1368, 800), 3);
    add_background_object(create_fnfloor14_1660(6360, 1512), 3);
    add_background_object(create_fnfloor14_1660(2776, 416), 3);
    add_background_object(create_fnfloor15_1693(2152, 1040), 3);
    add_background_object(create_fnfloor15_1693(2408, 1136), 3);
    add_background_object(create_fnfloor15_1693(2536, 1232), 3);
    add_background_object(create_fnfloor15_1693(2664, 1328), 3);
    add_background_object(create_fnfloor15_1693(2792, 1424), 3);
    add_background_object(create_fnfloor16_1694(2408, 1136), 3);
    add_background_object(create_fnfloor16_1694(2536, 1232), 3);
    add_background_object(create_fnfloor16_1694(2664, 1328), 3);
    add_background_object(create_fnfloor16_1694(2792, 1424), 3);
    add_background_object(create_fnwall18_1695(2976, 1376), 3);
    add_background_object(create_fnwall16_1669(3240, 1424), 3);
    add_background_object(create_fnapartmentwall2_1677(3176, 1376), 3);
    add_background_object(create_fnwall16_1669(3368, 1424), 3);
    add_background_object(create_fnwall18_1695(2976, 944), 3);
    add_background_object(create_fnwall19_1696(2992, 800), 3);
    add_background_object(create_fnapartmentwall2_1677(3432, 1376), 3);
    add_background_object(create_fnapartmentwall3_1676(3176, 1040), 3);
    add_background_object(create_fnapartmentwall2_1677(3304, 1376), 3);
    add_background_object(create_fnladder_1662(3352, 1232), 3);
    add_background_object(create_fnladder_1662(3352, 1200), 3);
    add_background_object(create_fnladder_1662(3352, 1168), 3);
    add_background_object(create_fnapartmentwall1_1655(3176, 1280), 3);
    add_background_object(create_fnapartmentwall1_1655(3176, 1184), 3);
    add_background_object(create_fnapartmentwall1_1655(3496, 1280), 3);
    add_background_object(create_fnapartmentwindow_1656(3240, 1280), 3);
    add_background_object(create_fnapartmentwall1_1655(3496, 1184), 3);
    add_background_object(create_fnwall21_1665(3176, 1328), 3);
    add_background_object(create_fnwall21_1665(3176, 1232), 3);
    add_background_object(create_fnwall21_1665(3176, 1136), 3);
    add_background_object(create_fnwall21_1665(3544, 1328), 3);
    add_background_object(create_fnwall21_1665(3544, 1232), 3);
    add_background_object(create_fnwall21_1665(3544, 1136), 3);
    add_background_object(create_fnladder_1662(3136, 1400), 3);
    add_background_object(create_fnladder_1662(3136, 1368), 3);
    add_background_object(create_fnapartmentwindow_1656(3432, 1280), 3);
    add_background_object(create_fnapartmentwindow_1656(3432, 1184), 3);
    add_background_object(create_fnapartmentwindow_1656(3240, 1184), 3);
    add_background_object(create_fnapartmentwall3_1676(3304, 1040), 3);
    add_background_object(create_fnapartmentwall3_1676(3432, 1040), 3);
    add_background_object(create_fnwall21_1665(3176, 1040), 3);
    add_background_object(create_fnwall21_1665(3544, 1040), 3);
    add_background_object(create_fnfloor8_1649(3560, 1520), 3);
    add_background_object(create_fnfloor8_1649(3688, 1520), 3);
    add_background_object(create_fnfloor12_1659(3560, 1520), 3);
    add_background_object(create_fnfloor12_1659(3688, 1520), 3);
    add_background_object(create_fnwall14_1668(3176, 1424), 3);
    add_background_object(create_fnwall14_1668(3496, 1424), 3);
    add_background_object(create_fnapartmentwall1_1655(2568, 1112), 3);
    add_background_object(create_fnapartmentwall1_1655(2696, 1112), 3);
    add_background_object(create_fnapartmentwindow_1656(2632, 1208), 3);
    add_background_object(create_fnapartmentwindow_1656(2632, 1112), 3);
    add_background_object(create_fnapartmentwall3_1676(2568, 1064), 3);
    add_background_object(create_fnapartmentwall3_1676(2632, 1064), 3);
    add_background_object(create_fnwall21_1665(2568, 1064), 3);
    add_background_object(create_fnwall21_1665(2744, 1064), 3);
    add_background_object(create_fnwall21_1665(2568, 1160), 3);
    add_background_object(create_fnwall21_1665(2744, 1160), 3);
    add_background_object(create_fnwall21_1665(2744, 1256), 3);
    add_background_object(create_fnsoil_1678(2280, 1312), 3);
    add_background_object(create_fnsoil_1678(2408, 1440), 3);
    add_background_object(create_fnsoil_1678(2792, 1616), 3);
    add_background_object(create_fnsoil_1678(2664, 1616), 3);
    add_background_object(create_fnsoil_1678(2536, 1616), 3);
    add_background_object(create_fnsoil_1678(2920, 1616), 3);
    add_background_object(create_fnsoil_1678(3048, 1616), 3);
    add_background_object(create_fnsoil_1678(3176, 1616), 3);
    add_background_object(create_fnsoil_1678(3304, 1616), 3);
    add_background_object(create_fnsoil_1678(3432, 1616), 3);
    add_background_object(create_fnsoil_1678(3560, 1616), 3);
    add_background_object(create_fnsoil_1678(3688, 1616), 3);
    add_background_object(create_fnsoil_1678(2792, 1744), 3);
    add_background_object(create_fnsoil_1678(2920, 1744), 3);
    add_background_object(create_fnsoil_1678(3048, 1744), 3);
    add_background_object(create_fnsoil_1678(3176, 1744), 3);
    add_background_object(create_fnsoil_1678(3304, 1744), 3);
    add_background_object(create_fnsoil_1678(3432, 1744), 3);
    add_background_object(create_fnsoil_1678(3560, 1744), 3);
    add_background_object(create_fnsoil_1678(3688, 1744), 3);
    add_background_object(create_fnsoil_1678(2664, 1744), 3);
    add_background_object(create_fnsoil_1678(2536, 1744), 3);
    add_background_object(create_fnsoil_1678(2408, 1568), 3);
    add_background_object(create_fnsoil_1678(2408, 1696), 3);
    add_background_object(create_fnsoil_1678(2280, 1440), 3);
    add_background_object(create_fnsoil_1678(2280, 1568), 3);
    add_background_object(create_fnsoil_1678(2280, 1696), 3);
    add_background_object(create_fnsoil_1678(2152, 1312), 3);
    add_background_object(create_fnsoil_1678(2152, 1440), 3);
    add_background_object(create_fnfloor9_1688(2536, 1328), 3);
    add_background_object(create_fnfloor9_1688(2664, 1424), 3);
    add_background_object(create_fnfloor9_1688(2792, 1520), 3);
    add_background_object(create_fnfloor8_1649(2536, 608), 3);
    add_background_object(create_fnfloor8_1649(2664, 608), 3);
    add_background_object(create_fnbackwall1_1645(2408, 368), 3);
    add_background_object(create_fnfloor9_1688(2536, 608), 3);
    add_background_object(create_fnfloor10_1692(2776, 608), 3);
    add_background_object(create_fnfloor17_1661(2280, 888), 3);
    add_background_object(create_fnfloor17_1661(2152, 888), 3);
    add_background_object(create_fnfloor17_1661(2024, 888), 3);
    add_background_object(create_fnfloor17_1661(1896, 888), 3);
    add_background_object(create_fnfloor17_1661(1768, 888), 3);
    add_background_object(create_fnfloor17_1661(1512, 888), 3);
    add_background_object(create_fnwall18_1695(2976, 1232), 3);
    add_background_object(create_fnwall18_1695(2976, 1088), 3);
    add_background_object(create_fnfloor8_1649(3816, 1328), 3);
    add_background_object(create_fnfloor8_1649(3816, 1424), 3);
    add_background_object(create_fnfloor9_1688(3816, 1328), 3);
    add_background_object(create_fnfloor9_1688(3816, 1424), 3);
    add_background_object(create_fnfloor11_1690(3736, 1424), 3);
    add_background_object(create_fnfloor8_1649(3816, 1520), 3);
    add_background_object(create_fnfloor8_1649(3944, 1328), 3);
    add_background_object(create_fnsoil_1678(3816, 1616), 3);
    add_background_object(create_fnsoil_1678(3944, 1616), 3);
    add_background_object(create_fnsoil_1678(3816, 1744), 3);
    add_background_object(create_fnsoil_1678(3944, 1744), 3);
    add_background_object(create_fnsoil_1678(3944, 1488), 3);
    add_background_object(create_fnfloor12_1659(3816, 1328), 3);
    add_background_object(create_fnfloor13_1691(3816, 1328), 3);
    add_background_object(create_fnfloor8_1649(3944, 1232), 3);
    add_background_object(create_fnfloor9_1688(3944, 1232), 3);
    add_background_object(create_fnfloor8_1649(4200, 1184), 3);
    add_background_object(create_fnfloor8_1649(3944, 1184), 3);
    add_background_object(create_fnfloor9_1688(3944, 1184), 3);
    add_background_object(create_fnfloor12_1659(3944, 1184), 3);
    add_background_object(create_fnfloor13_1691(3944, 1184), 3);
    add_background_object(create_fnfloor12_1659(4200, 1184), 3);
    add_background_object(create_fnsoil_1678(4072, 1360), 3);
    add_background_object(create_fnsoil_1678(4200, 1360), 3);
    add_background_object(create_fnsoil_1678(4200, 1488), 3);
    add_background_object(create_fnsoil_1678(4200, 1616), 3);
    add_background_object(create_fnsoil_1678(4200, 1744), 3);
    add_background_object(create_fnfloor8_1649(4200, 1328), 3);
    add_background_object(create_fnsoil_1678(4072, 1616), 3);
    add_background_object(create_fnsoil_1678(4072, 1744), 3);
    add_background_object(create_fnsoil_1678(4072, 1488), 3);
    add_background_object(create_fnfloor8_1649(4200, 1232), 3);
    add_background_object(create_fnfloor8_1649(3944, 1424), 3);
    add_background_object(create_fnfloor10_1692(4056, 1424), 3);
    add_background_object(create_fnfloor10_1692(3928, 1520), 3);
    add_background_object(create_fnwall21_1665(3688, 1336), 3);
    add_background_object(create_fnwall7_1671(4224, 1056), 3);
    add_background_object(create_fnredcolumn_1673(4280, 1056), 3);
    add_background_object(create_fnredcolumn_1673(4120, 1056), 3);
    add_background_object(create_fnwall19_1696(3224, 888), 3);
    add_background_object(create_fnfloor8_1649(3944, 960), 3);
    add_background_object(create_fnfloor9_1688(3944, 960), 3);
    add_background_object(create_fnfloor12_1659(3944, 960), 3);
    add_background_object(create_fnfloor13_1691(3944, 960), 3);
    add_background_object(create_fnfloor8_1649(4328, 960), 3);
    add_background_object(create_floor19_1697(4296, 696), 3);
    add_background_object(create_floor22_1698(4520, 912), 3);
    add_background_object(create_floor23_1699(4656, 912), 3);
    add_background_object(create_fnfloor12_1659(4328, 960), 3);
    add_background_object(create_fnfloor10_1692(4312, 1184), 3);
    add_background_object(create_fnfloor10_1692(4312, 1232), 3);
    add_background_object(create_fnfloor14_1660(4312, 1184), 3);
    add_background_object(create_fnfloor10_1692(4440, 960), 3);
    add_background_object(create_fnfloor14_1660(4440, 960), 3);
    add_background_object(create_fnfloor8_1649(4072, 1328), 3);
    add_background_object(create_fnfloor8_1649(4072, 1232), 3);
    add_background_object(create_fnfloor8_1649(4200, 960), 3);
    add_background_object(create_fnfloor12_1659(4200, 960), 3);
    add_background_object(create_fnredcolumnback_1646(3944, 1056), 3);
    add_background_object(create_rooftop5_1651(4008, 816), 3);
    add_background_object(create_fnredcolumnback_1646(4056, 832), 3);
    add_background_object(create_fnrooftop3_1658(3976, 704), 3);
    add_background_object(create_fnfloor8_1649(4072, 960), 3);
    add_background_object(create_fnfloor12_1659(4072, 960), 3);
    add_background_object(create_floor25_1654(4792, 576), 3);
    add_background_object(create_floor26_1653(4656, 576), 3);
    add_background_object(create_floor32_1700(3072, 344), 3);
    add_background_object(create_floor22_1698(4848, 960), 3);
    add_background_object(create_fnwall6_1670(5048, 1120), 3);
    add_background_object(create_fnwall7_1671(5176, 1120), 3);
    add_background_object(create_fnredcolumn_1673(5232, 1120), 3);
    add_background_object(create_fnredcolumn_1673(5008, 1120), 3);
    add_background_object(create_fnrooftop2_1687(5096, 992), 3);
    add_background_object(create_fnrooftop1_1686(5032, 992), 3);
    add_background_object(create_fnrooftop1_1686(4968, 992), 3);
    add_background_object(create_backdrop3_1701(3360, -120), 3);
    add_background_object(create_dragonslope1_1702(4800, 912), 3);
    add_background_object(create_dragonslope1_1702(4376, 768), 3);
    add_background_object(create_fnfloor17_1661(2536, 792), 3);
    add_background_object(create_fnfloor17_1661(2664, 792), 3);
    add_background_object(create_fnfloor8_1649(3040, 384), 3);
    add_background_object(create_fnfloor8_1649(2944, 192), 3);
    add_background_object(create_fnfloor9_1688(2944, 192), 3);
    add_background_object(create_fnfloor17_1661(2944, 272), 3);
    add_background_object(create_fnfloor8_1649(3040, 192), 3);
    add_background_object(create_fnfloor24_1703(3024, 240), 3);
    add_background_object(create_fnfloor9_1688(3040, 384), 3);
    add_background_object(create_fnfloor8_1649(2944, 96), 3);
    add_background_object(create_fnfloor9_1688(2944, 96), 3);
    add_background_object(create_fnfloor8_1649(3040, 96), 3);
    add_background_object(create_fnfloor24_1703(3024, 144), 3);
    add_background_object(create_fnfloor8_1649(3048, 0), 3);
    add_background_object(create_fnfloor8_1649(2920, 0), 3);
    add_background_object(create_fnfloor8_1649(2792, 0), 3);
    add_background_object(create_fnfloor17_1661(2792, 80), 3);
    add_background_object(create_fnfloor8_1649(2664, 0), 3);
    add_background_object(create_fnfloor8_1649(2664, 96), 3);
    add_background_object(create_fnfloor17_1661(2824, 80), 3);
    add_background_object(create_fnfloor10_1692(2776, 96), 3);
    add_background_object(create_fnfloor8_1649(2664, 192), 3);
    add_background_object(create_fnfloor10_1692(2776, 192), 3);
    add_background_object(create_fnfloor9_1688(2664, 192), 3);
    add_background_object(create_fnfloor9_1688(2664, 96), 3);
    add_background_object(create_fnfloor9_1688(2664, 0), 3);
    add_background_object(create_fnfloor17_1661(2664, 272), 3);
    add_background_object(create_fnbackwall1_1645(2408, 464), 3);
    add_background_object(create_fnbackwall1_1645(2408, 560), 3);
    add_background_object(create_fnbackwall1_1645(2408, 656), 3);
    add_background_object(create_fnbackwall3_1663(2408, 752), 3);
    add_background_object(create_fnredcolumnback_1646(2680, 288), 3);
    add_background_object(create_dragonslope1_1702(4424, 816), 3);
    add_background_object(create_dragonslope1_1702(4472, 864), 3);
    add_background_object(create_fnrooftop3_1658(4688, 992), 3);
    add_background_object(create_fnredcolumn_1673(4408, 832), 3);
    add_background_object(create_fnfloor8_1649(4328, 1328), 3);
    add_background_object(create_fnfloor8_1649(4456, 1328), 3);
    add_background_object(create_fnfloor8_1649(4584, 1328), 3);
    add_background_object(create_fnfloor8_1649(4712, 1328), 3);
    add_background_object(create_fnfloor8_1649(4840, 1328), 3);
    add_background_object(create_fnfloor12_1659(4776, 1248), 3);
    add_background_object(create_fnfloor13_1691(4776, 1248), 3);
    add_background_object(create_fnfloor12_1659(4904, 1248), 3);
    add_background_object(create_fnfloor12_1659(5032, 1248), 3);
    add_background_object(create_fnfloor12_1659(5160, 1248), 3);
    add_background_object(create_fnfloor14_1660(5272, 1248), 3);
    add_background_object(create_fnfloor17_1661(4776, 1264), 3);
    add_background_object(create_fnfloor17_1661(4904, 1264), 3);
    add_background_object(create_fnfloor17_1661(5032, 1264), 3);
    add_background_object(create_fnfloor17_1661(5160, 1264), 3);
    add_background_object(create_fnfloor12_1659(4840, 1328), 3);
    add_background_object(create_fnfloor12_1659(4712, 1328), 3);
    add_background_object(create_fnfloor12_1659(4584, 1328), 3);
    add_background_object(create_fnfloor12_1659(4456, 1328), 3);
    add_background_object(create_fnfloor12_1659(4328, 1328), 3);
    add_background_object(create_fnsoil_1678(4328, 1424), 3);
    add_background_object(create_fnsoil_1678(4456, 1424), 3);
    add_background_object(create_fnsoil_1678(4584, 1424), 3);
    add_background_object(create_fnsoil_1678(4712, 1424), 3);
    add_background_object(create_fnsoil_1678(4328, 1552), 3);
    add_background_object(create_fnsoil_1678(4456, 1552), 3);
    add_background_object(create_fnsoil_1678(4584, 1552), 3);
    add_background_object(create_fnsoil_1678(4712, 1552), 3);
    add_background_object(create_fnsoil_1678(4328, 1680), 3);
    add_background_object(create_fnsoil_1678(4456, 1680), 3);
    add_background_object(create_fnsoil_1678(4584, 1680), 3);
    add_background_object(create_fnsoil_1678(4712, 1680), 3);
    add_background_object(create_fnfloor8_1649(4968, 1328), 3);
    add_background_object(create_fnfloor8_1649(5096, 1328), 3);
    add_background_object(create_fnfloor12_1659(5096, 1328), 3);
    add_background_object(create_fnfloor12_1659(4968, 1328), 3);
    add_background_object(create_fnfloor8_1649(5224, 1328), 3);
    add_background_object(create_fnfloor12_1659(5224, 1328), 3);
    add_background_object(create_fnfloor8_1649(5352, 1328), 3);
    add_background_object(create_fnfloor12_1659(5352, 1328), 3);
    add_background_object(create_fnfloor10_1692(5464, 1328), 3);
    add_background_object(create_fnfloor14_1660(5464, 1328), 3);
    add_background_object(create_fnfloor8_1649(5352, 1424), 3);
    add_background_object(create_fnfloor10_1692(5464, 1424), 3);
    add_background_object(create_fnfloor8_1649(4840, 1424), 3);
    add_background_object(create_fnfloor8_1649(744, 1088), 3);
    add_background_object(create_fnfloor9_1688(1352, 896), 3);
    add_background_object(create_fnfloor10_1692(1368, 896), 3);
    add_background_object(create_fnfloor8_1649(1384, 896), 3);
    add_background_object(create_fnfloor9_1688(1384, 896), 3);
    add_background_object(create_fnfloor10_1692(1496, 896), 3);
    add_background_object(create_fnfloor17_1661(1384, 976), 3);
    add_background_object(create_fnfloor17_1661(4072, 1040), 3);
    add_background_object(create_fnfloor17_1661(4200, 1040), 3);
    add_background_object(create_fnfloor17_1661(4328, 1040), 3);
    add_background_object(create_fnfloor17_1661(3944, 1040), 3);
    add_background_object(create_fnfloor8_1649(1128, 1088), 3);
    add_background_object(create_fnfloor8_1649(1128, 1040), 3);
    add_background_object(create_fnfloor20_1667(1256, 1088), 3);
    add_background_object(create_fnfloor20_1667(1384, 1088), 3);
    add_background_object(create_fnfloor12_1659(1128, 1040), 3);
    add_background_object(create_fnbrokenceiling_1704(1352, 992), 3);
    add_background_object(create_fnfloor8_1649(1000, 1040), 3);
    add_background_object(create_fnfloor12_1659(1000, 1040), 3);
    add_background_object(create_fnfloor8_1649(872, 1088), 3);
    add_background_object(create_fnfloor12_1659(760, 1072), 3);
    add_background_object(create_fnfloor14_1660(888, 1072), 3);
    add_background_object(create_fnfloor12_1659(872, 1088), 3);
    add_background_object(create_fnfloor8_1649(616, 1088), 3);
    add_background_object(create_fnfloor12_1659(632, 1072), 3);
    add_background_object(create_fnfloor12_1659(744, 1088), 3);
    add_background_object(create_fnfloor12_1659(504, 1072), 3);
    add_background_object(create_fnfloor12_1659(616, 1088), 3);
    add_background_object(create_fnfloor8_1649(488, 1088), 3);
    add_background_object(create_fnfloor12_1659(376, 1072), 3);
    add_background_object(create_fnfloor12_1659(488, 1088), 3);
    add_background_object(create_fnfloor8_1649(360, 1088), 3);
    add_background_object(create_fnfloor12_1659(248, 1072), 3);
    add_background_object(create_fnfloor12_1659(360, 1088), 3);
    add_background_object(create_fnfloor8_1649(232, 1088), 3);
    add_background_object(create_fnfloor12_1659(120, 1072), 3);
    add_background_object(create_fnfloor12_1659(232, 1088), 3);
    add_background_object(create_fnfloor8_1649(104, 1088), 3);
    add_background_object(create_fnfloor12_1659(-8, 1072), 3);
    add_background_object(create_fnfloor12_1659(104, 1088), 3);
    add_background_object(create_fnfloor8_1649(-24, 1088), 3);
    add_background_object(create_fnfloor12_1659(-136, 1072), 3);
    add_background_object(create_fnfloor12_1659(-24, 1088), 3);
    add_background_object(create_fnsoil_1678(-24, 1184), 3);
    add_background_object(create_fnsoil_1678(104, 1184), 3);
    add_background_object(create_fnsoil_1678(232, 1184), 3);
    add_background_object(create_fnsoil_1678(360, 1184), 3);
    add_background_object(create_fnsoil_1678(488, 1184), 3);
    add_background_object(create_fnsoil_1678(616, 1184), 3);
    add_background_object(create_fnsoil_1678(744, 1184), 3);
    add_background_object(create_fnsoil_1678(872, 1184), 3);
    add_background_object(create_fnfloor8_1649(1640, 992), 3);
    add_background_object(create_fnfloor8_1649(2024, 1040), 3);
    add_background_object(create_fnfloor12_1659(2024, 1040), 3);
    add_background_object(create_fnfloor8_1649(1896, 1040), 3);
    add_background_object(create_fnfloor12_1659(1896, 1040), 3);
    add_background_object(create_fnfloor8_1649(2024, 1280), 3);
    add_background_object(create_fnfloor8_1649(2152, 1136), 3);
    add_background_object(create_fnsoil_1678(-24, 1312), 3);
    add_background_object(create_fnsoil_1678(104, 1312), 3);
    add_background_object(create_fnsoil_1678(232, 1312), 3);
    add_background_object(create_fnsoil_1678(360, 1312), 3);
    add_background_object(create_fnsoil_1678(488, 1312), 3);
    add_background_object(create_fnsoil_1678(616, 1312), 3);
    add_background_object(create_fnsoil_1678(744, 1312), 3);
    add_background_object(create_fnsoil_1678(872, 1312), 3);
    add_background_object(create_fnfloor10_1692(1752, 992), 3);
    add_background_object(create_fnfloor9_1688(1896, 1040), 3);
    add_background_object(create_fnfloor13_1691(1896, 1040), 3);
    add_background_object(create_fnfloor8_1649(1000, 1088), 3);
    add_background_object(create_fnfloor13_1691(1000, 1040), 3);
    add_background_object(create_fnfloor16_1694(2152, 1040), 3);
    add_background_object(create_fnfloor12_1659(2280, 1136), 3);
    add_background_object(create_fnfloor8_1649(1000, 1184), 3);
    add_background_object(create_fnfloor8_1649(1128, 1184), 3);
    add_background_object(create_fnfloor8_1649(1128, 1280), 3);
    add_background_object(create_fnfloor8_1649(1128, 1472), 3);
    add_background_object(create_fnfloor8_1649(1128, 1568), 3);
    add_background_object(create_fnfloor8_1649(1000, 1280), 3);
    add_background_object(create_fnfloor14_1660(1240, 1040), 3);
    add_background_object(create_fnfloor10_1692(1240, 1184), 3);
    add_background_object(create_fnbrokenceiling_1704(1352, 1136), 3);
    add_background_object(create_fnfloor12_1659(1256, 1088), 3);
    add_background_object(create_fnfloor8_1649(1384, 1280), 3);
    add_background_object(create_fnfloor12_1659(1384, 1232), 3);
    add_background_object(create_fnfloor8_1649(1512, 1280), 3);
    add_background_object(create_fnfloor9_1688(1640, 1088), 3);
    add_background_object(create_fnfloor9_1688(1640, 992), 3);
    add_background_object(create_fnfloor8_1649(1640, 896), 3);
    add_background_object(create_fnfloor9_1688(1640, 896), 3);
    add_background_object(create_fnfloor10_1692(1752, 896), 3);
    add_background_object(create_fnfloor12_1659(1384, 1088), 3);
    add_background_object(create_fnfloor14_1660(1496, 1088), 3);
    add_background_object(create_fnbackwall1_1645(1512, 1136), 3);
    add_background_object(create_backwall2_1642(1384, 1136), 3);
    add_background_object(create_fnsoil_1678(872, 1440), 3);
    add_background_object(create_fnfloor9_1688(1000, 1184), 3);
    add_background_object(create_fnfloor9_1688(1000, 1280), 3);
    add_background_object(create_fnsoil_1678(744, 1440), 3);
    add_background_object(create_fnsoil_1678(1000, 1568), 3);
    add_background_object(create_fnsoil_1678(872, 1568), 3);
    add_background_object(create_fnsoil_1678(744, 1568), 3);
    add_background_object(create_fnfloor10_1692(1752, 1088), 3);
    add_background_object(create_fnbackwall1_1645(1640, 1184), 3);
    add_background_object(create_fnfloor8_1649(1640, 1184), 3);
    add_background_object(create_fnfloor8_1649(1640, 1280), 3);
    add_background_object(create_fnfloor8_1649(1768, 1280), 3);
    add_background_object(create_fnfloor12_1659(1768, 1280), 3);
    add_background_object(create_fnbackwall1_1645(1768, 1184), 3);
    add_background_object(create_fnfloor9_1688(1640, 1136), 3);
    add_background_object(create_fnfloor10_1692(1752, 1184), 3);
    add_background_object(create_fnfloor10_1692(1240, 1280), 3);
    add_background_object(create_fnfloor8_1649(1000, 1376), 3);
    add_background_object(create_fnfloor9_1688(1000, 1376), 3);
    add_background_object(create_fnfloor10_1692(1112, 1376), 3);
    add_background_object(create_fnfloor9_1688(1352, 1280), 3);
    add_background_object(create_fnfloor10_1692(1368, 1280), 3);
    add_background_object(create_fnbrokenceiling_1704(1352, 1376), 3);
    add_background_object(create_fnfloor8_1649(1000, 1472), 3);
    add_background_object(create_fnfloor9_1688(1000, 1472), 3);
    add_background_object(create_fnsoil_1678(1128, 1568), 3);
    add_background_object(create_fnsoil_1678(1000, 1696), 3);
    add_background_object(create_fnsoil_1678(872, 1696), 3);
    add_background_object(create_fnsoil_1678(744, 1696), 3);
    add_background_object(create_fnsoil_1678(1128, 1696), 3);
    add_background_object(create_fnfloor8_1649(1256, 1472), 3);
    add_background_object(create_fnfloor12_1659(1256, 1472), 3);
    add_background_object(create_fnsoil_1678(1256, 1568), 3);
    add_background_object(create_fnsoil_1678(1256, 1696), 3);
    add_background_object(create_fnfloor8_1649(1384, 1472), 3);
    add_background_object(create_fnfloor12_1659(1384, 1472), 3);
    add_background_object(create_fnsoil_1678(1384, 1568), 3);
    add_background_object(create_fnsoil_1678(1384, 1696), 3);
    add_background_object(create_fnfloor9_1688(1384, 1232), 3);
    add_background_object(create_fnfloor9_1688(1384, 1280), 3);
    add_background_object(create_fnfloor17_1661(1384, 1360), 3);
    add_background_object(create_fnfloor13_1691(1384, 1232), 3);
    add_background_object(create_fnfloor17_1661(1512, 1360), 3);
    add_background_object(create_fnfloor8_1649(1512, 1472), 3);
    add_background_object(create_fnfloor12_1659(1512, 1472), 3);
    add_background_object(create_fnsoil_1678(1512, 1568), 3);
    add_background_object(create_fnsoil_1678(1512, 1696), 3);
    add_background_object(create_fnfloor8_1649(1640, 1472), 3);
    add_background_object(create_fnfloor12_1659(1640, 1472), 3);
    add_background_object(create_fnsoil_1678(1640, 1568), 3);
    add_background_object(create_fnsoil_1678(1640, 1696), 3);
    add_background_object(create_fnfloor8_1649(1768, 1472), 3);
    add_background_object(create_fnfloor12_1659(1768, 1472), 3);
    add_background_object(create_fnsoil_1678(1768, 1568), 3);
    add_background_object(create_fnsoil_1678(1768, 1696), 3);
    add_background_object(create_fnfloor8_1649(1896, 1472), 3);
    add_background_object(create_fnfloor12_1659(1896, 1472), 3);
    add_background_object(create_fnsoil_1678(1896, 1568), 3);
    add_background_object(create_fnsoil_1678(1896, 1696), 3);
    add_background_object(create_fnsoil_1678(2152, 1568), 3);
    add_background_object(create_fnsoil_1678(2024, 1568), 3);
    add_background_object(create_fnsoil_1678(2152, 1696), 3);
    add_background_object(create_fnsoil_1678(2024, 1696), 3);
    add_background_object(create_fnfloor17_1661(1640, 1360), 3);
    add_background_object(create_fnfloor17_1661(1128, 1360), 3);
    add_background_object(create_fnfloor12_1659(1128, 1472), 3);
    add_background_object(create_fnfloor8_1649(2024, 1472), 3);
    add_background_object(create_fnfloor8_1649(2024, 1376), 3);
    add_background_object(create_fnfloor9_1688(2024, 1376), 3);
    add_background_object(create_fnfloor8_1649(2152, 1232), 3);
    add_background_object(create_fnfloor9_1688(2024, 1280), 3);
    add_background_object(create_fnbackwall1_1645(1896, 1184), 3);
    add_background_object(create_fnbackwall1_1645(1896, 1280), 3);
    add_background_object(create_fnbackwall1_1645(1896, 1376), 3);
    add_background_object(create_fnbackwall1_1645(1768, 1376), 3);
    add_background_object(create_backwall2_1642(1640, 1376), 3);
    add_background_object(create_fnbackwall1_1645(1128, 1376), 3);
    add_background_object(create_fnfloor17_1661(1896, 1120), 3);
    add_background_object(create_fnfloor10_1692(1880, 1280), 3);
    add_background_object(create_fnfloor17_1661(1768, 1360), 3);
    add_background_object(create_fnfloor14_1660(1880, 1280), 3);
    add_background_object(create_fnbackwall1_1645(1768, 1088), 3);
    add_background_object(create_fnbackwall4_1647(1768, 992), 3);
    add_background_object(create_fnfloor11_1690(1944, 1376), 3);
    add_background_object(create_fnladder_1662(1768, 1040), 3);
    add_background_object(create_fnladder_1662(1768, 1072), 3);
    add_background_object(create_fnladder_1662(1768, 1104), 3);
    add_background_object(create_fnladder_1662(1768, 1136), 3);
    add_background_object(create_fnladder_1662(1768, 1168), 3);
    add_background_object(create_fnladder_1662(1768, 1200), 3);
    add_background_object(create_fnfloor17_1661(1384, 1120), 3);
    add_background_object(create_fnfloor17_1661(1256, 1120), 3);
    add_background_object(create_backwall2_1642(1512, 1040), 3);
    add_background_object(create_fnfloor10_1692(1240, 1136), 3);
    add_background_object(create_fnfloor9_1688(1352, 1232), 3);
    add_background_object(create_fnfloor10_1692(1368, 1232), 3);
    add_background_object(create_fnladder_1662(1312, 1344), 3);
    add_background_object(create_fnladder_1662(1312, 1312), 3);
    add_background_object(create_fnladder_1662(1312, 1280), 3);
    add_background_object(create_fnladder_1662(1312, 1248), 3);
    add_background_object(create_fnladder_1662(1312, 1232), 3);
    add_background_object(create_fnbrokenceiling_1704(1896, 1376), 3);
    add_background_object(create_fnfloor9_1688(1896, 1280), 3);
    add_background_object(create_fnfloor10_1692(1912, 1280), 3);
    add_background_object(create_fnfloor13_1691(1896, 1280), 3);
    add_background_object(create_fnfloor14_1660(1912, 1280), 3);
    add_background_object(create_fnfloor9_1688(4840, 1424), 3);
    add_background_object(create_fnfloor8_1649(4840, 1520), 3);
    add_background_object(create_fnfloor8_1649(4968, 1520), 3);
    add_background_object(create_fnfloor9_1688(4840, 1520), 3);
    add_background_object(create_fnfloor10_1692(2136, 1328), 3);
    add_background_object(create_fnfloor10_1692(2136, 1376), 3);
    add_background_object(create_fnfloor10_1692(2136, 1472), 3);
    add_background_object(create_fnfloor8_1649(3392, 384), 3);
    add_background_object(create_fnfloor8_1649(3552, 288), 3);
    add_background_object(create_fnfloor8_1649(3552, 192), 3);
    add_background_object(create_fnfloor8_1649(3552, 96), 3);
    add_background_object(create_fnfloor8_1649(3552, 0), 3);
    add_background_object(create_fnfloor10_1692(3664, 0), 3);
    add_background_object(create_fnfloor10_1692(3664, 96), 3);
    add_background_object(create_fnfloor10_1692(3664, 192), 3);
    add_background_object(create_fnfloor10_1692(3664, 288), 3);
    add_background_object(create_fnfloor8_1649(3392, 672), 3);
    add_background_object(create_fnfloor9_1688(3392, 672), 3);
    add_background_object(create_fnfloor10_1692(3504, 672), 3);
    add_background_object(create_fnfloor17_1661(3392, 760), 3);
    add_background_object(create_fnfloor8_1649(3296, 192), 3);
    add_background_object(create_fnfloor8_1649(3296, 96), 3);
    add_background_object(create_fnfloor8_1649(3296, 0), 3);
    add_background_object(create_fnfloor8_1649(3168, 192), 3);
    add_background_object(create_fnfloor8_1649(3168, 96), 3);
    add_background_object(create_fnfloor8_1649(3168, 0), 3);
    add_background_object(create_fnfloor8_1649(3392, 576), 3);
    add_background_object(create_fnfloor9_1688(3392, 576), 3);
    add_background_object(create_fnfloor10_1692(3504, 576), 3);
    add_background_object(create_fnfloor8_1649(3392, 480), 3);
    add_background_object(create_fnfloor9_1688(3392, 480), 3);
    add_background_object(create_fnfloor10_1692(3504, 480), 3);
    add_background_object(create_fnfloor8_1649(3392, 288), 3);
    add_background_object(create_fnfloor8_1649(3424, 192), 3);
    add_background_object(create_fnfloor8_1649(3424, 96), 3);
    add_background_object(create_fnfloor8_1649(3424, 0), 3);
    add_background_object(create_fnfloor17_1661(3552, 368), 3);
    add_background_object(create_fnfloor24_1703(3552, 360), 3);
    add_background_object(create_fnfloor24_1703(3536, 432), 3);
    add_background_object(create_fnfloor10_1692(3568, 384), 3);
    add_background_object(create_fnfloor17_1661(3456, 464), 3);
    add_background_object(create_fnfloor24_1703(3488, 456), 3);
    add_background_object(create_fnfloor24_1703(3456, 456), 3);
    add_background_object(create_fnfloor20_1667(2024, 1232), 3);
    add_background_object(create_fnfloor9_1688(2024, 1232), 3);
    add_background_object(create_fnbackwall1_1645(2024, 1136), 3);
    add_background_object(create_fnfloor17_1661(2024, 1120), 3);
    add_background_object(create_fnfloor9_1688(2152, 1136), 3);
    add_background_object(create_fnfloor12_1659(2024, 1232), 3);
    add_background_object(create_fnfloor13_1691(2024, 1232), 3);
    add_background_object(create_fnfloor8_1649(2280, 1232), 3);
    add_background_object(create_fnfloor8_1649(4840, 1616), 3);
    add_background_object(create_fnfloor9_1688(4840, 1616), 3);
    add_background_object(create_fnfloor8_1649(4840, 1712), 3);
    add_background_object(create_fnfloor9_1688(4840, 1712), 3);
    add_background_object(create_fnsoil_1678(4584, 1808), 3);
    add_background_object(create_fnsoil_1678(4712, 1808), 3);
    add_background_object(create_fnsoil_1678(4840, 1808), 3);
    add_background_object(create_fnsoil_1678(4456, 1808), 3);
    add_background_object(create_fnfloor8_1649(4968, 1808), 3);
    add_background_object(create_fnfloor9_1688(4968, 1808), 3);
    add_background_object(create_fnfloor8_1649(5096, 1712), 3);
    add_background_object(create_fnfloor8_1649(5096, 1808), 3);
    add_background_object(create_fnfloor12_1659(5096, 1712), 3);
    add_background_object(create_fnfloor10_1692(5080, 1616), 3);
    add_background_object(create_fnfloor8_1649(5224, 1712), 3);
    add_background_object(create_fnfloor8_1649(5224, 1808), 3);
    add_background_object(create_fnfloor12_1659(5224, 1712), 3);
    add_background_object(create_fnfloor8_1649(5352, 1712), 3);
    add_background_object(create_fnfloor8_1649(5352, 1808), 3);
    add_background_object(create_fnfloor12_1659(5352, 1712), 3);
    add_background_object(create_fnfloor8_1649(5480, 1712), 3);
    add_background_object(create_fnfloor8_1649(5608, 1712), 3);
    add_background_object(create_fnfloor8_1649(5736, 1712), 3);
    add_background_object(create_fnfloor12_1659(5480, 1712), 3);
    add_background_object(create_fnfloor12_1659(5608, 1712), 3);
    add_background_object(create_fnfloor8_1649(5480, 1808), 3);
    add_background_object(create_fnfloor8_1649(5608, 1808), 3);
    add_background_object(create_fnfloor8_1649(5736, 1808), 3);
    add_background_object(create_fnrooftop3_1658(6008, 1080), 3);
    add_background_object(create_fnfloor8_1649(6120, 1512), 3);
    add_background_object(create_fnfloor9_1688(6120, 1512), 3);
    add_background_object(create_fnfloor12_1659(6096, 1336), 3);
    add_background_object(create_fnfloor13_1691(6096, 1336), 3);
    add_background_object(create_fnfloor12_1659(6224, 1336), 3);
    add_background_object(create_fnfloor8_1649(5864, 1712), 3);
    add_background_object(create_fnfloor8_1649(5992, 1712), 3);
    add_background_object(create_fnfloor12_1659(5864, 1712), 3);
    add_background_object(create_fnfloor12_1659(5992, 1712), 3);
    add_background_object(create_fnfloor8_1649(5864, 1808), 3);
    add_background_object(create_fnfloor8_1649(5992, 1808), 3);
    add_background_object(create_fnfloor8_1649(4968, 1424), 3);
    add_background_object(create_fnfloor8_1649(4968, 1712), 3);
    add_background_object(create_fnfloor8_1649(5352, 1520), 3);
    add_background_object(create_fnfloor10_1692(5464, 1520), 3);
    add_background_object(create_fnfloor10_1692(5080, 1520), 3);
    add_background_object(create_fnfloor10_1692(5080, 1424), 3);
    add_background_object(create_fnfloor17_1661(5096, 1416), 3);
    add_background_object(create_fnfloor17_1661(5224, 1416), 3);
    add_background_object(create_fnfloor20_1667(5736, 1664), 3);
    add_background_object(create_fnfloor12_1659(5736, 1664), 3);
    add_background_object(create_fnfloor13_1691(5736, 1664), 3);
    add_background_object(create_fnfloor14_1660(5848, 1664), 3);
    add_background_object(create_fnfloor17_1661(6120, 1600), 3);
    add_background_object(create_fnrooftop1_1686(6288, 1080), 3);
    add_background_object(create_fnfloor9_1688(5352, 1424), 3);
    add_background_object(create_fnfloor17_1661(6248, 1600), 3);
    add_background_object(create_fnfloor8_1649(6120, 1712), 3);
    add_background_object(create_fnfloor12_1659(6120, 1712), 3);
    add_background_object(create_fnfloor8_1649(6120, 1808), 3);
    add_background_object(create_fnfloor8_1649(6248, 1712), 3);
    add_background_object(create_fnfloor12_1659(6248, 1712), 3);
    add_background_object(create_fnfloor8_1649(6248, 1808), 3);
    add_background_object(create_fnfloor8_1649(6376, 1712), 3);
    add_background_object(create_fnfloor12_1659(6376, 1712), 3);
    add_background_object(create_fnfloor8_1649(6376, 1808), 3);
    add_background_object(create_fnfloor8_1649(6504, 1712), 3);
    add_background_object(create_fnfloor12_1659(6504, 1712), 3);
    add_background_object(create_fnfloor8_1649(6504, 1808), 3);
    add_background_object(create_fnfloor8_1649(6632, 1616), 3);
    add_background_object(create_fnfloor8_1649(6760, 1616), 3);
    add_background_object(create_fnfloor8_1649(6888, 1616), 3);
    add_background_object(create_fnfloor9_1688(6632, 1616), 3);
    add_background_object(create_fnfloor8_1649(6632, 1712), 3);
    add_background_object(create_fnfloor8_1649(6760, 1712), 3);
    add_background_object(create_fnfloor8_1649(6888, 1712), 3);
    add_background_object(create_fnfloor8_1649(6632, 1808), 3);
    add_background_object(create_fnfloor8_1649(6760, 1808), 3);
    add_background_object(create_fnfloor8_1649(6888, 1808), 3);
    add_background_object(create_fnfloor8_1649(7400, 1712), 3);
    add_background_object(create_fnfloor8_1649(7016, 1616), 3);
    add_background_object(create_fnfloor8_1649(7016, 1712), 3);
    add_background_object(create_fnfloor8_1649(7016, 1808), 3);
    add_background_object(create_fnfloor12_1659(6120, 1512), 3);
    add_background_object(create_fnfloor13_1691(6120, 1512), 3);
    add_background_object(create_fnfloor9_1688(6352, 1168), 3);
    add_background_object(create_fnfloor9_1688(6352, 1264), 3);
    add_background_object(create_fnfloor20_1667(6352, 1360), 3);
    add_background_object(create_fnfloor20_1667(6224, 1360), 3);
    add_background_object(create_fnfloor10_1692(6464, 1312), 3);
    add_background_object(create_fnfloor17_1661(6352, 1400), 3);
    add_background_object(create_fnfloor17_1661(6224, 1400), 3);
    add_background_object(create_fnfloor17_1661(6632, 1320), 3);
    add_background_object(create_fnfloor17_1661(6760, 1320), 3);
    add_background_object(create_fnfloor8_1649(6352, 976), 3);
    add_background_object(create_fnfloor8_1649(6480, 880), 3);
    add_background_object(create_fnfloor8_1649(6352, 880), 3);
    add_background_object(create_fnfloor9_1688(6352, 880), 3);
    add_background_object(create_fnfloor10_1692(6464, 976), 3);
    add_background_object(create_fnfloor10_1692(6592, 880), 3);
    add_background_object(create_fnfloor9_1688(6352, 976), 3);
    add_background_object(create_fnfloor8_1649(6480, 784), 3);
    add_background_object(create_fnfloor8_1649(6352, 784), 3);
    add_background_object(create_fnfloor9_1688(6352, 784), 3);
    add_background_object(create_fnfloor10_1692(6592, 784), 3);
    add_background_object(create_fnfloor8_1649(6608, 688), 3);
    add_background_object(create_fnfloor8_1649(6608, 592), 3);
    add_background_object(create_fnfloor10_1692(6728, 688), 3);
    add_background_object(create_fnfloor10_1692(6728, 592), 3);
    add_background_object(create_fnfloor8_1649(6224, 688), 3);
    add_background_object(create_fnfloor8_1649(6224, 592), 3);
    add_background_object(create_fnfloor9_1688(6224, 592), 3);
    add_background_object(create_fnfloor9_1688(6224, 688), 3);
    add_background_object(create_fnfloor17_1661(6224, 776), 3);
    add_background_object(create_fnfloor8_1649(6608, 496), 3);
    add_background_object(create_fnfloor10_1692(6728, 496), 3);
    add_background_object(create_fnfloor8_1649(6224, 496), 3);
    add_background_object(create_fnfloor9_1688(6224, 496), 3);
    add_background_object(create_fnfloor8_1649(6352, 688), 3);
    add_background_object(create_fnfloor8_1649(6352, 592), 3);
    add_background_object(create_fnfloor8_1649(6352, 496), 3);
    add_background_object(create_fnfloor17_1661(6480, 968), 3);
    add_background_object(create_fnfloor17_1661(6608, 768), 3);
    add_background_object(create_fnfloor8_1649(6480, 688), 3);
    add_background_object(create_fnfloor8_1649(6480, 592), 3);
    add_background_object(create_fnfloor8_1649(6480, 496), 3);
    add_background_object(create_fnfloor8_1649(6608, 400), 3);
    add_background_object(create_fnfloor8_1649(6608, 304), 3);
    add_background_object(create_fnfloor10_1692(6728, 400), 3);
    add_background_object(create_fnfloor10_1692(6728, 304), 3);
    add_background_object(create_fnfloor8_1649(6224, 400), 3);
    add_background_object(create_fnfloor8_1649(6224, 304), 3);
    add_background_object(create_fnfloor9_1688(6224, 304), 3);
    add_background_object(create_fnfloor9_1688(6224, 400), 3);
    add_background_object(create_fnfloor8_1649(6608, 208), 3);
    add_background_object(create_fnfloor10_1692(6728, 208), 3);
    add_background_object(create_fnfloor8_1649(6224, 208), 3);
    add_background_object(create_fnfloor9_1688(6224, 208), 3);
    add_background_object(create_fnfloor8_1649(6352, 400), 3);
    add_background_object(create_fnfloor8_1649(6352, 304), 3);
    add_background_object(create_fnfloor8_1649(6352, 208), 3);
    add_background_object(create_fnfloor8_1649(6480, 400), 3);
    add_background_object(create_fnfloor8_1649(6480, 304), 3);
    add_background_object(create_fnfloor8_1649(6480, 208), 3);
    add_background_object(create_fnfloor8_1649(6608, 112), 3);
    add_background_object(create_fnfloor10_1692(6728, 112), 3);
    add_background_object(create_fnfloor8_1649(6224, 112), 3);
    add_background_object(create_fnfloor9_1688(6224, 112), 3);
    add_background_object(create_fnfloor8_1649(6608, 16), 3);
    add_background_object(create_fnfloor10_1692(6728, 16), 3);
    add_background_object(create_fnfloor8_1649(6224, 16), 3);
    add_background_object(create_fnfloor9_1688(6224, 16), 3);
    add_background_object(create_fnfloor8_1649(6352, 112), 3);
    add_background_object(create_fnfloor8_1649(6352, 16), 3);
    add_background_object(create_fnfloor8_1649(6480, 112), 3);
    add_background_object(create_fnfloor8_1649(6480, 16), 3);
    add_background_object(create_fnfloor8_1649(6608, -80), 3);
    add_background_object(create_fnfloor10_1692(6728, -80), 3);
    add_background_object(create_fnfloor8_1649(6224, -80), 3);
    add_background_object(create_fnfloor9_1688(6224, -80), 3);
    add_background_object(create_fnfloor8_1649(6352, -80), 3);
    add_background_object(create_fnfloor8_1649(6480, -80), 3);
    add_background_object(create_fnfloor20_1667(6096, 1360), 3);
    add_background_object(create_fnfloor11_1690(6552, 1616), 3);
    add_background_object(create_fnwall14_1668(6120, 1616), 3);
    add_background_object(create_fnwall14_1668(6312, 1616), 3);
    add_background_object(create_fnfloor17_1661(6096, 1400), 3);
    add_background_object(create_fnfloor8_1649(7272, 1616), 3);
    add_background_object(create_fnfloor8_1649(7144, 1616), 3);
    add_background_object(create_fnfloor8_1649(7144, 1712), 3);
    add_background_object(create_fnfloor8_1649(7144, 1808), 3);
    add_background_object(create_fnfloor8_1649(7272, 1712), 3);
    add_background_object(create_fnfloor8_1649(7272, 1808), 3);
    add_background_object(create_fnfloor8_1649(7528, 1040), 3);
    add_background_object(create_fnfloor8_1649(7528, 944), 3);
    add_background_object(create_fnfloor8_1649(7528, 848), 3);
    add_background_object(create_fnfloor8_1649(7400, 752), 3);
    add_background_object(create_fnfloor8_1649(7528, 1136), 3);
    add_background_object(create_fnfloor8_1649(7528, 1232), 3);
    add_background_object(create_fnfloor8_1649(7400, 656), 3);
    add_background_object(create_fnfloor8_1649(7400, 560), 3);
    add_background_object(create_fnfloor8_1649(7272, 656), 3);
    add_background_object(create_fnfloor8_1649(7272, 560), 3);
    add_background_object(create_fnfloor8_1649(7144, 656), 3);
    add_background_object(create_fnfloor8_1649(7144, 560), 3);
    add_background_object(create_fnfloor8_1649(7016, 656), 3);
    add_background_object(create_fnfloor8_1649(7016, 560), 3);
    add_background_object(create_fnfloor8_1649(6888, 656), 3);
    add_background_object(create_fnfloor8_1649(6888, 560), 3);
    add_background_object(create_fnfloor8_1649(6760, 656), 3);
    add_background_object(create_fnfloor8_1649(6760, 560), 3);
    add_background_object(create_fnfloor17_1661(6760, 736), 3);
    add_background_object(create_fnfloor9_1688(6744, 560), 3);
    add_background_object(create_fnfloor9_1688(6744, 656), 3);
    add_background_object(create_fnfloor17_1661(6888, 736), 3);
    add_background_object(create_fnfloor17_1661(7016, 736), 3);
    add_background_object(create_fnfloor17_1661(7144, 936), 3);
    add_background_object(create_fnfloor17_1661(7272, 840), 3);
    add_background_object(create_fnfloor9_1688(7528, 848), 3);
    add_background_object(create_fnfloor9_1688(7528, 944), 3);
    add_background_object(create_fnfloor9_1688(7528, 1040), 3);
    add_background_object(create_fnfloor9_1688(7528, 1136), 3);
    add_background_object(create_fnfloor8_1649(7400, 1808), 3);
    add_background_object(create_fnfloor8_1649(7528, 1808), 3);
    add_background_object(create_fnfloor8_1649(7656, 1712), 3);
    add_background_object(create_fnfloor8_1649(7656, 1808), 3);
    add_background_object(create_fnfloor12_1659(7016, 1616), 3);
    add_background_object(create_fnfloor12_1659(7144, 1616), 3);
    add_background_object(create_fnfloor12_1659(7272, 1616), 3);
    add_background_object(create_fnfloor12_1659(7656, 1712), 3);
    add_background_object(create_fnfloor10_1692(7000, 1424), 3);
    add_background_object(create_fnfloor10_1692(7000, 1520), 3);
    add_background_object(create_fnfloor10_1692(7640, 1232), 3);
    add_background_object(create_fnfloor10_1692(7640, 1136), 3);
    add_background_object(create_fnfloor10_1692(7640, 1040), 3);
    add_background_object(create_fnfloor8_1649(8808, 1424), 3);
    add_background_object(create_fnfloor8_1649(8808, 1520), 3);
    add_background_object(create_fnfloor8_1649(8808, 1328), 3);
    add_background_object(create_fnfloor8_1649(7400, 1328), 3);
    add_background_object(create_fnfloor12_1659(8808, 1328), 3);
    add_background_object(create_fnfloor8_1649(8936, 1424), 3);
    add_background_object(create_fnfloor8_1649(8936, 1328), 3);
    add_background_object(create_fnfloor8_1649(8936, 1520), 3);
    add_background_object(create_fnfloor8_1649(9064, 1424), 3);
    add_background_object(create_fnfloor8_1649(9064, 1520), 3);
    add_background_object(create_fnfloor12_1659(9064, 1424), 3);
    add_background_object(create_fnfloor10_1692(9048, 1328), 3);
    add_background_object(create_fnfloor8_1649(9320, 1712), 3);
    add_background_object(create_fnfloor8_1649(9320, 1808), 3);
    add_background_object(create_fnfloor12_1659(9320, 1712), 3);
    add_background_object(create_fnfloor8_1649(9448, 1712), 3);
    add_background_object(create_fnfloor8_1649(9448, 1616), 3);
    add_background_object(create_fnfloor8_1649(9448, 1808), 3);
    add_background_object(create_fnfloor8_1649(9448, 1520), 3);
    add_background_object(create_fnfloor11_1690(9368, 1616), 3);
    add_background_object(create_fnfloor9_1688(9448, 1520), 3);
    add_background_object(create_fnfloor8_1649(9448, 1424), 3);
    add_background_object(create_fnfloor9_1688(9448, 1424), 3);
    add_background_object(create_fnfloor8_1649(9448, 1328), 3);
    add_background_object(create_fnfloor8_1649(9576, 1328), 3);
    add_background_object(create_gimmickrollingarchback_1689(9544, 1296), 3);
    add_background_object(create_fnfloor8_1649(9576, 1520), 3);
    add_background_object(create_fnfloor8_1649(9576, 1424), 3);
    add_background_object(create_fnfloor8_1649(9576, 1712), 3);
    add_background_object(create_fnfloor8_1649(9576, 1616), 3);
    add_background_object(create_fnfloor8_1649(9576, 1808), 3);
    add_background_object(create_fnfloor15_1693(9704, 1424), 3);
    add_background_object(create_fnfloor16_1694(9704, 1424), 3);
    add_background_object(create_fnfloor12_1659(9832, 1520), 3);
    add_background_object(create_fnfloor12_1659(9960, 1520), 3);
    add_background_object(create_fnfloor8_1649(9960, 1616), 3);
    add_background_object(create_fnfloor8_1649(9960, 1712), 3);
    add_background_object(create_fnfloor8_1649(9960, 1808), 3);
    add_background_object(create_fnfloor20_1667(10088, 1520), 3);
    add_background_object(create_fnfloor8_1649(10344, 1520), 3);
    add_background_object(create_fnfloor8_1649(10472, 1520), 3);
    add_background_object(create_fnfloor12_1659(10088, 1520), 3);
    add_background_object(create_fnfloor12_1659(10344, 1520), 3);
    add_background_object(create_fnfloor8_1649(10344, 1616), 3);
    add_background_object(create_fnfloor8_1649(10344, 1712), 3);
    add_background_object(create_fnfloor8_1649(10344, 1808), 3);
    add_background_object(create_fnfloor20_1667(10216, 1520), 3);
    add_background_object(create_fnfloor12_1659(10216, 1520), 3);
    add_background_object(create_fnfloor8_1649(10728, 1328), 3);
    add_background_object(create_fnfloor12_1659(10472, 1520), 3);
    add_background_object(create_fnfloor12_1659(10728, 1328), 3);
    add_background_object(create_fnfloor8_1649(10728, 1616), 3);
    add_background_object(create_fnfloor8_1649(10728, 1712), 3);
    add_background_object(create_fnfloor8_1649(10728, 1808), 3);
    add_background_object(create_fnfloor20_1667(10600, 1568), 3);
    add_background_object(create_fnfloor12_1659(10600, 1568), 3);
    add_background_object(create_fnfloor8_1649(10728, 1424), 3);
    add_background_object(create_fnfloor8_1649(10728, 1520), 3);
    add_background_object(create_fnfloor27_1684(9704, 1568), 3);
    add_background_object(create_fnfloor28_1685(9880, 1568), 3);
    add_background_object(create_fnfloor27_1684(10088, 1568), 3);
    add_background_object(create_fnfloor28_1685(10264, 1568), 3);
    add_background_object(create_fnfloor27_1684(10472, 1616), 3);
    add_background_object(create_fnfloor28_1685(10648, 1616), 3);
    add_background_object(create_fnfloor20_1667(10856, 1328), 3);
    add_background_object(create_fnfloor8_1649(11112, 1328), 3);
    add_background_object(create_fnfloor12_1659(10856, 1328), 3);
    add_background_object(create_fnfloor8_1649(11112, 1424), 3);
    add_background_object(create_fnfloor8_1649(11112, 1520), 3);
    add_background_object(create_fnfloor8_1649(11112, 1616), 3);
    add_background_object(create_fnfloor20_1667(10984, 1328), 3);
    add_background_object(create_fnfloor12_1659(10984, 1328), 3);
    add_background_object(create_fnfloor27_1684(10856, 1376), 3);
    add_background_object(create_fnfloor28_1685(11032, 1376), 3);
    add_background_object(create_fnfloor8_1649(11112, 1712), 3);
    add_background_object(create_fnfloor8_1649(11112, 1808), 3);
    add_background_object(create_fnfloor20_1667(11240, 1328), 3);
    add_background_object(create_fnfloor8_1649(11496, 1328), 3);
    add_background_object(create_fnfloor12_1659(11240, 1328), 3);
    add_background_object(create_fnfloor12_1659(11496, 1328), 3);
    add_background_object(create_fnfloor8_1649(11496, 1424), 3);
    add_background_object(create_fnfloor8_1649(11496, 1520), 3);
    add_background_object(create_fnfloor8_1649(11496, 1616), 3);
    add_background_object(create_fnfloor20_1667(11368, 1328), 3);
    add_background_object(create_fnfloor12_1659(11368, 1328), 3);
    add_background_object(create_fnfloor27_1684(11240, 1376), 3);
    add_background_object(create_fnfloor28_1685(11416, 1376), 3);
    add_background_object(create_fnfloor8_1649(11496, 1712), 3);
    add_background_object(create_fnfloor8_1649(11496, 1808), 3);
    add_background_object(create_fnfloor8_1649(10728, 1136), 3);
    add_background_object(create_fnfloor8_1649(10728, 1040), 3);
    add_background_object(create_fnfloor8_1649(10600, 944), 3);
    add_background_object(create_fnfloor8_1649(10728, 944), 3);
    add_background_object(create_fnfloor8_1649(10472, 752), 3);
    add_background_object(create_fnfloor8_1649(10600, 752), 3);
    add_background_object(create_fnfloor8_1649(10984, 752), 3);
    add_background_object(create_fnfloor8_1649(10472, 656), 3);
    add_background_object(create_fnfloor8_1649(10600, 656), 3);
    add_background_object(create_fnfloor8_1649(10984, 656), 3);
    add_background_object(create_fnfloor8_1649(10472, 560), 3);
    add_background_object(create_fnfloor8_1649(10600, 560), 3);
    add_background_object(create_fnfloor8_1649(10984, 560), 3);
    add_background_object(create_fnfloor8_1649(10472, 464), 3);
    add_background_object(create_fnfloor8_1649(10600, 464), 3);
    add_background_object(create_fnfloor8_1649(10984, 464), 3);
    add_background_object(create_fnfloor8_1649(10472, 368), 3);
    add_background_object(create_fnfloor8_1649(10600, 368), 3);
    add_background_object(create_fnfloor8_1649(10984, 368), 3);
    add_background_object(create_fnfloor8_1649(10472, 272), 3);
    add_background_object(create_fnfloor8_1649(10600, 272), 3);
    add_background_object(create_fnfloor8_1649(10984, 272), 3);
    add_background_object(create_fnfloor8_1649(10472, 176), 3);
    add_background_object(create_fnfloor8_1649(10600, 176), 3);
    add_background_object(create_fnfloor8_1649(10984, 176), 3);
    add_background_object(create_fnfloor8_1649(10472, 80), 3);
    add_background_object(create_fnfloor8_1649(10600, 80), 3);
    add_background_object(create_fnfloor8_1649(10984, 80), 3);
    add_background_object(create_fnfloor8_1649(10472, -16), 3);
    add_background_object(create_fnfloor8_1649(10600, -16), 3);
    add_background_object(create_fnfloor8_1649(10984, -16), 3);
    add_background_object(create_fnfloor8_1649(10984, 1136), 3);
    add_background_object(create_fnfloor8_1649(11112, 1136), 3);
    add_background_object(create_fnfloor8_1649(11240, 1136), 3);
    add_background_object(create_fnfloor8_1649(11368, 1136), 3);
    add_background_object(create_fnfloor8_1649(11496, 1136), 3);
    add_background_object(create_fnfloor8_1649(11624, 1136), 3);
    add_background_object(create_fnfloor12_1659(11624, 1328), 3);
    add_background_object(create_fnfloor17_1661(11240, 1216), 3);
    add_background_object(create_fnfloor17_1661(11368, 1216), 3);
    add_background_object(create_fnfloor17_1661(11496, 1216), 3);
    add_background_object(create_fnfloor9_1688(10728, 1328), 3);
    add_background_object(create_fnfloor13_1691(10728, 1328), 3);
    add_background_object(create_fnfloor9_1688(10728, 1424), 3);
    add_background_object(create_fnfloor9_1688(10600, 944), 3);
    add_background_object(create_fnfloor17_1661(10600, 1024), 3);
    add_background_object(create_fnfloor9_1688(10472, 752), 3);
    add_background_object(create_fnfloor9_1688(10472, 656), 3);
    add_background_object(create_fnfloor9_1688(10472, 560), 3);
    add_background_object(create_fnfloor9_1688(10472, 464), 3);
    add_background_object(create_fnfloor9_1688(10472, 368), 3);
    add_background_object(create_fnfloor9_1688(10472, 272), 3);
    add_background_object(create_fnfloor9_1688(10472, 176), 3);
    add_background_object(create_fnfloor9_1688(10472, 80), 3);
    add_background_object(create_fnfloor9_1688(10472, -16), 3);
    add_background_object(create_fnfloor9_1688(10728, 1472), 3);
    add_background_object(create_fnfloor14_1660(10584, 1520), 3);
    add_background_object(create_fnbackwall1_1645(10856, 1232), 3);
    add_background_object(create_fnbackwall3_1663(10984, 1232), 3);
    add_background_object(create_fnbackwall1_1645(11240, 1232), 3);
    add_background_object(create_fnbackwall1_1645(11368, 1232), 3);
    add_background_object(create_fnfloor9_1688(10728, 1136), 3);
    add_background_object(create_fnfloor12_1659(10984, 1136), 3);
    add_background_object(create_fnfloor12_1659(11112, 1136), 3);
    add_background_object(create_fnfloor12_1659(11240, 1136), 3);
    add_background_object(create_fnfloor12_1659(11368, 1136), 3);
    add_background_object(create_fnfloor12_1659(11496, 1136), 3);
    add_background_object(create_fnfloor10_1692(10840, 1040), 3);
    add_background_object(create_fnfloor10_1692(10840, 944), 3);
    add_background_object(create_fnfloor10_1692(11096, 752), 3);
    add_background_object(create_fnfloor10_1692(11096, 656), 3);
    add_background_object(create_fnbackhedge_1666(1448, 1408), 3);
    add_background_object(create_fnbackhedge_1666(1704, 1408), 3);
    add_background_object(create_fnbackhedge_1666(1576, 1408), 3);
    add_background_object(create_fnbackhedge_1666(1128, 976), 3);
    add_background_object(create_fnbackhedge_1666(1000, 976), 3);
    add_background_object(create_fnbackhedge_1666(1384, 1024), 3);
    add_background_object(create_fnbackhedge_1666(1896, 976), 3);
    add_background_object(create_fnbackhedge_1666(2024, 976), 3);
    add_background_object(create_fnbackhedge_1666(4328, 1264), 3);
    add_background_object(create_fnbackhedge_1666(4456, 1264), 3);
    add_background_object(create_fnbackhedge_1666(2024, 544), 3);
    add_background_object(create_fnbackhedge_1666(6752, 1456), 3);
    add_background_object(create_fnbackhedge_1666(6632, 1456), 3);
    add_background_object(create_fnsoil_1678(4328, 1808), 3);
    add_background_object(create_fnbackhedge_1666(6760, 1168), 3);
    add_background_object(create_fnbackhedge_1666(6888, 1168), 3);
    add_background_object(create_fnfloor9_1688(10728, 1040), 3);
    add_background_object(create_fnfloor28_1685(10648, 1040), 3);
    add_background_object(create_fnwall10_1628(10464, 1160), 3);
    add_background_object(create_fnapartmentwall1_1655(10408, 1128), 3);
    add_background_object(create_fnapartmentwall1_1655(10536, 1128), 3);
    add_background_object(create_fnapartmentwall1_1655(10408, 1032), 3);
    add_background_object(create_fnapartmentwall1_1655(10536, 1032), 3);
    add_background_object(create_fnapartmentwindow_1656(10472, 1128), 3);
    add_background_object(create_fnapartmentwindow_1656(10472, 1032), 3);
    add_background_object(create_fnapartmentwall3_1676(10408, 984), 3);
    add_background_object(create_fnapartmentwall3_1676(10472, 984), 3);
    add_background_object(create_fnwall21_1665(10408, 984), 3);
    add_background_object(create_fnwall21_1665(10584, 984), 3);
    add_background_object(create_fnwall21_1665(10408, 1080), 3);
    add_background_object(create_fnwall21_1665(10584, 1080), 3);
    add_background_object(create_fnapartmentwindow_1656(10472, 1224), 3);
    add_background_object(create_fnwall21_1665(10408, 1176), 3);
    add_background_object(create_fnwall21_1665(10584, 1176), 3);
    add_background_object(create_fnfloor8_1649(7400, 464), 3);
    add_background_object(create_fnfloor8_1649(7272, 464), 3);
    add_background_object(create_fnfloor8_1649(7144, 464), 3);
    add_background_object(create_fnfloor8_1649(7016, 464), 3);
    add_background_object(create_fnfloor8_1649(6888, 464), 3);
    add_background_object(create_fnfloor8_1649(6760, 464), 3);
    add_background_object(create_fnfloor9_1688(6744, 464), 3);
    add_background_object(create_fnfloor8_1649(7400, 368), 3);
    add_background_object(create_fnfloor8_1649(7272, 368), 3);
    add_background_object(create_fnfloor8_1649(7144, 368), 3);
    add_background_object(create_fnfloor8_1649(7016, 368), 3);
    add_background_object(create_fnfloor8_1649(6888, 368), 3);
    add_background_object(create_fnfloor8_1649(6760, 368), 3);
    add_background_object(create_fnfloor9_1688(6744, 368), 3);
    add_background_object(create_fnfloor8_1649(7400, 272), 3);
    add_background_object(create_fnfloor8_1649(7272, 272), 3);
    add_background_object(create_fnfloor8_1649(7144, 272), 3);
    add_background_object(create_fnfloor8_1649(7016, 272), 3);
    add_background_object(create_fnfloor8_1649(6888, 272), 3);
    add_background_object(create_fnfloor8_1649(6760, 272), 3);
    add_background_object(create_fnfloor9_1688(6744, 272), 3);
    add_background_object(create_fnfloor8_1649(7400, 176), 3);
    add_background_object(create_fnfloor8_1649(7272, 176), 3);
    add_background_object(create_fnfloor8_1649(7144, 176), 3);
    add_background_object(create_fnfloor8_1649(7016, 176), 3);
    add_background_object(create_fnfloor8_1649(6888, 176), 3);
    add_background_object(create_fnfloor8_1649(6760, 176), 3);
    add_background_object(create_fnfloor9_1688(6744, 176), 3);
    add_background_object(create_fnfloor8_1649(7400, 80), 3);
    add_background_object(create_fnfloor8_1649(7272, 80), 3);
    add_background_object(create_fnfloor8_1649(7144, 80), 3);
    add_background_object(create_fnfloor8_1649(7016, 80), 3);
    add_background_object(create_fnfloor8_1649(6888, 80), 3);
    add_background_object(create_fnfloor8_1649(6760, 80), 3);
    add_background_object(create_fnfloor9_1688(6744, 80), 3);
    add_background_object(create_fnfloor8_1649(7400, -16), 3);
    add_background_object(create_fnfloor8_1649(7272, -16), 3);
    add_background_object(create_fnfloor8_1649(7144, -16), 3);
    add_background_object(create_fnfloor8_1649(7016, -16), 3);
    add_background_object(create_fnfloor8_1649(6888, -16), 3);
    add_background_object(create_fnfloor8_1649(6760, -16), 3);
    add_background_object(create_fnfloor9_1688(6744, -16), 3);
    add_background_object(create_fnbustedwall_1705(7016, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7080, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7144, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7208, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7272, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7336, 1232), 3);
    add_background_object(create_fnbustedwall_1705(7016, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7080, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7144, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7208, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7272, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7336, 1280), 3);
    add_background_object(create_fnbustedwall_1705(7016, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7080, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7144, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7208, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7272, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7336, 1328), 3);
    add_background_object(create_fnbustedwall_1705(7016, 1376), 3);
    add_background_object(create_fnbustedwall_1705(7080, 1376), 3);
    add_background_object(create_fnbustedwall_1705(7144, 1376), 3);
    add_background_object(create_fnbustedwall_1705(7208, 1376), 3);
    add_background_object(create_fnbustedwall_1705(7272, 1376), 3);
    add_background_object(create_fnbustedwall_1705(7336, 1376), 3);
    add_background_object(create_fnfloor8_1649(7400, 1232), 3);
    add_background_object(create_fnfloor8_1649(7528, 1328), 3);
    add_background_object(create_fnfloor10_1692(7640, 1304), 3);
    add_background_object(create_fnfloor17_1661(7400, 840), 3);
    add_background_object(create_fnfloor8_1649(7528, 752), 3);
    add_background_object(create_fnfloor12_1659(7400, 1232), 3);
    add_background_object(create_fnfloor11_1690(7448, 1136), 3);
    add_background_object(create_fnfloor28_1685(7448, 856), 3);
    add_background_object(create_fnfloor8_1649(7272, 752), 3);
    add_background_object(create_fnfloor8_1649(7144, 752), 3);
    add_background_object(create_fnfloor8_1649(7144, 848), 3);
    add_background_object(create_fnfloor9_1688(7144, 752), 3);
    add_background_object(create_fnfloor9_1688(7144, 848), 3);
    add_background_object(create_fnfloor10_1692(7256, 848), 3);
    add_background_object(create_fnfloor27_1684(7272, 856), 3);
    add_background_object(create_fnladder_1662(3560, 1032), 3);
    add_background_object(create_fnladder_1662(3560, 1064), 3);
    add_background_object(create_fnladder_1662(3560, 1096), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 984), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 1048), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 1112), 3);
    add_background_object(create_ferriswheelbase2_1644(3768, 1240), 3);
    add_background_object(create_fnbackhedge_1666(5608, 1648), 3);
    add_background_object(create_fnbackhedge_1666(5864, 1648), 3);
    add_background_object(create_fnfloor17_1661(7528, 1416), 3);
    add_background_object(create_fnfloor17_1661(7400, 1416), 3);
    add_background_object(create_fnbackwall4_1647(5224, 1616), 3);
    add_background_object(create_fnbackwall1_1645(5096, 1616), 3);
    add_background_object(create_fnbackwall4_1647(5096, 1520), 3);
    add_background_object(create_fnbackwall1_1645(7016, 1424), 3);
    add_background_object(create_fnfloor10_1692(7384, 1616), 3);
    add_background_object(create_fnfloor14_1660(7384, 1616), 3);
    add_background_object(create_fnfloor8_1649(7400, 1664), 3);
    add_background_object(create_fnfloor8_1649(7528, 1664), 3);
    add_background_object(create_fnfloor8_1649(7272, 1664), 3);
    add_background_object(create_fnfloor12_1659(7528, 1664), 3);
    add_background_object(create_fnfloor12_1659(7400, 1664), 3);
    add_background_object(create_fnfloor10_1692(7640, 1664), 3);
    add_background_object(create_fnfloor8_1649(7528, 1712), 3);
    add_background_object(create_fnfloor14_1660(7640, 1664), 3);
    add_background_object(create_fnbackhedge_1666(7400, 1600), 3);
    add_background_object(create_fnbackhedge_1666(7528, 1600), 3);
    add_background_object(create_fnfloor8_1649(7784, 1712), 3);
    add_background_object(create_fnfloor8_1649(7784, 1808), 3);
    add_background_object(create_fnfloor12_1659(7784, 1712), 3);
    add_background_object(create_fnwall18_1695(7768, 1280), 3);
    add_background_object(create_fnwall19_1696(7784, 1136), 3);
    add_background_object(create_fnwall18_1695(7768, 1568), 3);
    add_background_object(create_fnwall18_1695(7768, 1424), 3);
    add_background_object(create_fnfloor8_1649(7912, 1712), 3);
    add_background_object(create_fnfloor8_1649(7912, 1808), 3);
    add_background_object(create_fnfloor12_1659(7912, 1712), 3);
    add_background_object(create_fnfloor8_1649(8040, 1712), 3);
    add_background_object(create_fnfloor8_1649(8040, 1808), 3);
    add_background_object(create_fnfloor12_1659(8040, 1712), 3);
    add_background_object(create_ferriswheelbase2_1644(8136, 1456), 3);
    add_background_object(create_ferriswheelbase_1664(8120, 1400), 3);
    add_background_object(create_ferriswheelbase2_1644(8136, 1520), 3);
    add_background_object(create_ferriswheelbase2_1644(8136, 1584), 3);
    add_background_object(create_ferriswheelbase2_1644(8136, 1648), 3);
    add_background_object(create_fnladder_1662(7880, 1496), 3);
    add_background_object(create_fnladder_1662(7880, 1464), 3);
    add_background_object(create_fnfloor8_1649(8168, 1712), 3);
    add_background_object(create_fnfloor8_1649(8168, 1808), 3);
    add_background_object(create_fnfloor12_1659(8168, 1712), 3);
    add_background_object(create_fnfloor8_1649(8296, 1712), 3);
    add_background_object(create_fnfloor8_1649(8296, 1808), 3);
    add_background_object(create_fnfloor12_1659(8296, 1712), 3);
    add_background_object(create_fnfloor8_1649(8424, 1712), 3);
    add_background_object(create_fnfloor8_1649(8424, 1808), 3);
    add_background_object(create_fnfloor8_1649(8552, 1712), 3);
    add_background_object(create_fnfloor8_1649(8552, 1808), 3);
    add_background_object(create_fnfloor8_1649(8680, 1520), 3);
    add_background_object(create_fnfloor8_1649(8552, 1616), 3);
    add_background_object(create_fnfloor8_1649(8680, 1424), 3);
    add_background_object(create_fnfloor8_1649(8552, 1328), 3);
    add_background_object(create_fnfloor8_1649(8552, 1520), 3);
    add_background_object(create_fnfloor8_1649(8680, 1376), 3);
    add_background_object(create_fnfloor12_1659(8424, 1712), 3);
    add_background_object(create_fnfloor8_1649(8424, 1328), 3);
    add_background_object(create_fnfloor12_1659(8680, 1376), 3);
    add_background_object(create_fnfloor12_1659(8552, 1328), 3);
    add_background_object(create_fnfloor12_1659(8424, 1328), 3);
    add_background_object(create_fnbustedwall_1705(1512, 1232), 3);
    add_background_object(create_fnbustedwall_1705(1576, 1232), 3);
    add_background_object(create_fnbustedwall_1705(4136, 1184), 3);
    add_background_object(create_fnbustedwall_1705(4072, 1184), 3);
    add_background_object(create_fnfloor8_1649(8552, 1424), 3);
    add_background_object(create_fnfloor14_1660(8664, 1328), 3);
    add_background_object(create_fnfloor13_1691(8808, 1328), 3);
    add_background_object(create_fnfloor9_1688(8424, 1328), 3);
    add_background_object(create_fnfloor13_1691(8424, 1328), 3);
    add_background_object(create_fnfloor17_1661(8424, 1416), 3);
    add_background_object(create_fnfloor9_1688(8552, 1424), 3);
    add_background_object(create_fnfloor9_1688(8552, 1520), 3);
    add_background_object(create_fnfloor9_1688(8552, 1616), 3);
    add_background_object(create_fnfloor8_1649(9296, 1040), 3);
    add_background_object(create_fnfloor8_1649(8808, 1616), 3);
    add_background_object(create_fnfloor8_1649(8936, 1616), 3);
    add_background_object(create_fnfloor8_1649(9064, 1616), 3);
    add_background_object(create_fnfloor8_1649(8680, 1616), 3);
    add_background_object(create_fnfloor8_1649(8808, 1712), 3);
    add_background_object(create_fnfloor8_1649(8936, 1712), 3);
    add_background_object(create_fnfloor8_1649(9064, 1712), 3);
    add_background_object(create_fnfloor8_1649(8680, 1712), 3);
    add_background_object(create_fnfloor8_1649(8808, 1808), 3);
    add_background_object(create_fnfloor8_1649(8936, 1808), 3);
    add_background_object(create_fnfloor8_1649(9064, 1808), 3);
    add_background_object(create_fnfloor8_1649(8680, 1808), 3);
    add_background_object(create_fnfloor8_1649(8552, 1040), 3);
    add_background_object(create_fnfloor12_1659(8936, 1328), 3);
    add_background_object(create_fnfloor14_1660(9048, 1328), 3);
    add_background_object(create_fnfloor29_1706(9192, 1616), 3);
    add_background_object(create_fnfloor10_1692(9176, 1424), 3);
    add_background_object(create_fnfloor14_1660(9176, 1424), 3);
    add_background_object(create_fnfloor10_1692(9176, 1520), 3);
    add_background_object(create_fnfloor10_1692(9176, 1616), 3);
    add_background_object(create_fnfloor8_1649(9192, 1712), 3);
    add_background_object(create_fnfloor8_1649(9192, 1808), 3);
    add_background_object(create_fnfloor12_1659(9192, 1712), 3);
    add_background_object(create_fnfloor8_1649(9296, 944), 3);
    add_background_object(create_fnfloor8_1649(8552, 944), 3);
    add_background_object(create_fnfloor8_1649(9296, 848), 3);
    add_background_object(create_fnfloor8_1649(8552, 848), 3);
    add_background_object(create_fnfloor9_1688(7920, 1400), 3);
    add_background_object(create_fnfloor10_1692(7936, 1400), 3);
    add_background_object(create_fnfloor13_1691(7920, 1400), 3);
    add_background_object(create_fnfloor14_1660(7936, 1400), 3);
    add_background_object(create_fnfloor9_1688(7920, 1520), 3);
    add_background_object(create_fnfloor10_1692(7936, 1520), 3);
    add_background_object(create_fnfloor9_1688(7920, 1448), 3);
    add_background_object(create_fnfloor10_1692(7936, 1448), 3);
    add_background_object(create_fnbrokenceiling_1704(7920, 1616), 3);
    add_background_object(create_fnladder_1662(7880, 1592), 3);
    add_background_object(create_fnfloor8_1649(8552, 1136), 3);
    add_background_object(create_fnfloor9_1688(8552, 1136), 3);
    add_background_object(create_fnfloor10_1692(8664, 1136), 3);
    add_background_object(create_fnfloor17_1661(8552, 1216), 3);
    add_background_object(create_fnfloor9_1688(8552, 1040), 3);
    add_background_object(create_fnfloor10_1692(8664, 1040), 3);
    add_background_object(create_fnfloor9_1688(8552, 944), 3);
    add_background_object(create_fnfloor10_1692(8664, 944), 3);
    add_background_object(create_fnfloor9_1688(8552, 848), 3);
    add_background_object(create_fnfloor10_1692(8664, 848), 3);
    add_background_object(create_fnfloor8_1649(8552, 752), 3);
    add_background_object(create_fnfloor9_1688(8552, 752), 3);
    add_background_object(create_fnfloor10_1692(8664, 752), 3);
    add_background_object(create_fnfloor12_1659(9296, 848), 3);
    add_background_object(create_fnfloor9_1688(9296, 848), 3);
    add_background_object(create_fnfloor13_1691(9296, 848), 3);
    add_background_object(create_fnfloor9_1688(9296, 944), 3);
    add_background_object(create_fnfloor9_1688(9296, 1040), 3);
    add_background_object(create_floor19_1697(9424, 848), 3);
    add_background_object(create_fnfloor10_1692(9408, 848), 3);
    add_background_object(create_fnfloor14_1660(9408, 848), 3);
    add_background_object(create_fnfloor10_1692(9408, 944), 3);
    add_background_object(create_fnfloor10_1692(9408, 1040), 3);
    add_background_object(create_dragonslope1_1702(9504, 920), 3);
    add_background_object(create_dragonslope1_1702(9552, 968), 3);
    add_background_object(create_dragonslope1_1702(9600, 1016), 3);
    add_background_object(create_dragonslope1_1702(9648, 1064), 3);
    add_background_object(create_dragonslope1_1702(9696, 1112), 3);
    add_background_object(create_floor22_1698(9744, 1160), 3);
    add_background_object(create_floor23_1699(9880, 1160), 3);
    add_background_object(create_floor25_1654(10016, 824), 3);
    add_background_object(create_floor30_1707(10160, 1096), 3);
    add_background_object(create_floor26_1653(9880, 824), 3);
    add_background_object(create_floor22_1698(10024, 1160), 3);
    add_background_object(create_floor26_1653(10248, 976), 3);
    add_background_object(create_fnfloor17_1661(10472, 832), 3);
    add_background_object(create_fnfloor17_1661(10600, 832), 3);
    add_background_object(create_fnfloor12_1659(10600, 944), 3);
    add_background_object(create_fnfloor12_1659(10728, 944), 3);
    add_background_object(create_fnfloor13_1691(10600, 944), 3);
    add_background_object(create_fnfloor14_1660(10840, 944), 3);
    add_background_object(create_fnwall21_1665(10408, 1368), 3);
    add_background_object(create_fnwall21_1665(10584, 1368), 3);
    add_background_object(create_fnbackhedge_1666(10472, 1456), 3);
    add_background_object(create_fnbackhedge_1666(10344, 1456), 3);
    add_background_object(create_fnbackhedge_1666(10600, 1456), 3);
    add_background_object(create_fnfloor10_1692(10840, 1136), 3);
    add_background_object(create_fnbackwall4_1647(10856, 1040), 3);
    add_background_object(create_ferriswheelbase2_1644(10984, 1072), 3);
    add_background_object(create_ferriswheelbase2_1644(10984, 1008), 3);
    add_background_object(create_ferriswheelbase2_1644(10984, 944), 3);
    add_background_object(create_fnfloor8_1649(10728, 752), 3);
    add_background_object(create_fnfloor8_1649(10728, 656), 3);
    add_background_object(create_fnfloor8_1649(10728, 560), 3);
    add_background_object(create_fnfloor8_1649(10728, 464), 3);
    add_background_object(create_fnfloor8_1649(10728, 368), 3);
    add_background_object(create_fnfloor8_1649(10728, 272), 3);
    add_background_object(create_fnfloor8_1649(10728, 176), 3);
    add_background_object(create_fnfloor8_1649(10728, 80), 3);
    add_background_object(create_fnfloor8_1649(10728, -16), 3);
    add_background_object(create_fnfloor17_1661(10728, 832), 3);
    add_background_object(create_fnfloor8_1649(10856, 752), 3);
    add_background_object(create_fnfloor8_1649(10856, 656), 3);
    add_background_object(create_fnfloor8_1649(10856, 560), 3);
    add_background_object(create_fnfloor8_1649(10856, 464), 3);
    add_background_object(create_fnfloor8_1649(10856, 368), 3);
    add_background_object(create_fnfloor8_1649(10856, 272), 3);
    add_background_object(create_fnfloor8_1649(10856, 176), 3);
    add_background_object(create_fnfloor8_1649(10856, 80), 3);
    add_background_object(create_fnfloor8_1649(10856, -16), 3);
    add_background_object(create_fnfloor17_1661(10856, 832), 3);
    add_background_object(create_fnfloor8_1649(11112, 560), 3);
    add_background_object(create_fnfloor8_1649(11112, 464), 3);
    add_background_object(create_fnfloor8_1649(11112, 368), 3);
    add_background_object(create_fnfloor8_1649(11112, 272), 3);
    add_background_object(create_fnfloor8_1649(11112, 176), 3);
    add_background_object(create_fnfloor8_1649(11112, 80), 3);
    add_background_object(create_fnfloor8_1649(11112, -16), 3);
    add_background_object(create_fnfloor8_1649(11240, 560), 3);
    add_background_object(create_fnfloor8_1649(11240, 464), 3);
    add_background_object(create_fnfloor8_1649(11240, 368), 3);
    add_background_object(create_fnfloor8_1649(11240, 272), 3);
    add_background_object(create_fnfloor8_1649(11240, 176), 3);
    add_background_object(create_fnfloor8_1649(11240, 80), 3);
    add_background_object(create_fnfloor8_1649(11240, -16), 3);
    add_background_object(create_fnfloor8_1649(11368, 560), 3);
    add_background_object(create_fnfloor8_1649(11368, 464), 3);
    add_background_object(create_fnfloor8_1649(11368, 368), 3);
    add_background_object(create_fnfloor8_1649(11368, 272), 3);
    add_background_object(create_fnfloor8_1649(11368, 176), 3);
    add_background_object(create_fnfloor8_1649(11368, 80), 3);
    add_background_object(create_fnfloor8_1649(11368, -16), 3);
    add_background_object(create_fnfloor8_1649(11496, 560), 3);
    add_background_object(create_fnfloor8_1649(11496, 464), 3);
    add_background_object(create_fnfloor8_1649(11496, 368), 3);
    add_background_object(create_fnfloor8_1649(11496, 272), 3);
    add_background_object(create_fnfloor8_1649(11496, 176), 3);
    add_background_object(create_fnfloor8_1649(11496, 80), 3);
    add_background_object(create_fnfloor8_1649(11496, -16), 3);
    add_background_object(create_fnfloor17_1661(11496, 648), 3);
    add_background_object(create_fnfloor17_1661(11368, 648), 3);
    add_background_object(create_fnfloor17_1661(11240, 648), 3);
    add_background_object(create_fnfloor17_1661(11112, 648), 3);
    add_background_object(create_fnfloor8_1649(11624, 560), 3);
    add_background_object(create_fnfloor17_1661(11624, 648), 3);
    add_background_object(create_fnfloor17_1661(9296, 1128), 3);
    add_background_object(create_fnrooftop3_1658(9776, 1288), 3);
    add_background_object(create_fnrooftop2_1687(10056, 1288), 3);
    add_background_object(create_fnfloor8_1649(8552, 656), 3);
    add_background_object(create_fnfloor9_1688(8552, 656), 3);
    add_background_object(create_fnfloor10_1692(8664, 656), 3);
    add_background_object(create_fnfloor8_1649(7528, 656), 3);
    add_background_object(create_fnfloor8_1649(7656, 944), 3);
    add_background_object(create_fnfloor10_1692(7768, 944), 3);
    add_background_object(create_fnfloor17_1661(7656, 1032), 3);
    add_background_object(create_fnfloor8_1649(7656, 848), 3);
    add_background_object(create_fnfloor8_1649(7656, 752), 3);
    add_background_object(create_fnfloor8_1649(7784, 656), 3);
    add_background_object(create_fnfloor10_1692(7896, 656), 3);
    add_background_object(create_fnfloor10_1692(7768, 752), 3);
    add_background_object(create_fnfloor10_1692(7768, 848), 3);
    add_background_object(create_fnfloor8_1649(7528, 560), 3);
    add_background_object(create_fnfloor8_1649(7528, 464), 3);
    add_background_object(create_fnfloor8_1649(7784, 560), 3);
    add_background_object(create_fnfloor8_1649(7784, 464), 3);
    add_background_object(create_fnfloor10_1692(7896, 464), 3);
    add_background_object(create_fnfloor10_1692(7896, 560), 3);
    add_background_object(create_fnfloor8_1649(7528, 368), 3);
    add_background_object(create_fnfloor8_1649(7784, 368), 3);
    add_background_object(create_fnfloor10_1692(7896, 368), 3);
    add_background_object(create_fnfloor8_1649(7528, 272), 3);
    add_background_object(create_fnfloor8_1649(7528, 176), 3);
    add_background_object(create_fnfloor8_1649(7784, 272), 3);
    add_background_object(create_fnfloor8_1649(7784, 176), 3);
    add_background_object(create_fnfloor10_1692(7896, 176), 3);
    add_background_object(create_fnfloor10_1692(7896, 272), 3);
    add_background_object(create_fnfloor8_1649(7528, 80), 3);
    add_background_object(create_fnfloor8_1649(7528, -16), 3);
    add_background_object(create_fnfloor8_1649(7784, 80), 3);
    add_background_object(create_fnfloor8_1649(7784, -16), 3);
    add_background_object(create_fnfloor10_1692(7896, -16), 3);
    add_background_object(create_fnfloor10_1692(7896, 80), 3);
    add_background_object(create_fnfloor8_1649(8552, 560), 3);
    add_background_object(create_fnfloor9_1688(8552, 560), 3);
    add_background_object(create_fnfloor10_1692(8664, 560), 3);
    add_background_object(create_fnfloor12_1659(8552, 560), 3);
    add_background_object(create_fnfloor13_1691(8552, 560), 3);
    add_background_object(create_fnfloor14_1660(8664, 560), 3);
    add_background_object(create_fnbackwall4_1647(11112, 1040), 3);
    add_background_object(create_backwall2_1642(11112, 1040), 3);
    add_background_object(create_fnbackwall4_1647(11240, 1040), 3);
    add_background_object(create_backwall2_1642(11240, 1040), 3);
    add_background_object(create_fnbackwall4_1647(11368, 1040), 3);
    add_background_object(create_backwall2_1642(11368, 1040), 3);
    add_background_object(create_fnbackwall4_1647(11496, 1040), 3);
    add_background_object(create_backwall2_1642(11496, 1040), 3);
    add_background_object(create_backwall2_1642(10856, 1088), 3);
    add_background_object(create_ferriswheelbase2_1644(10776, 880), 3);
    add_background_object(create_ferriswheelbase2_1644(10776, 848), 3);
    add_background_object(create_ferriswheelbase2_1644(10648, 880), 3);
    add_background_object(create_ferriswheelbase2_1644(10648, 848), 3);
    add_background_object(create_fnfloor11_1690(8472, 1616), 3);
    add_background_object(create_fnfloor28_1685(8472, 1432), 3);
    add_background_object(create_fnfloor17_1661(3168, 272), 3);
    add_background_object(create_fnfloor17_1661(3040, 272), 3);
    add_background_object(create_fnfloor10_1692(3152, 384), 3);
    add_background_object(create_fnfloor17_1661(3040, 464), 3);
    add_background_object(create_fnfloor12_1659(3040, 384), 3);
    add_background_object(create_fnfloor13_1691(3040, 384), 3);
    add_background_object(create_fnfloor14_1660(3152, 384), 3);
    add_background_object(create_floor31_1708(3680, -176), 3);
    add_background_object(create_fnfloor17_1661(3296, 272), 3);
    add_background_object(create_fnfloor9_1688(3392, 384), 3);
    add_background_object(create_fnfloor9_1688(3392, 288), 3);
    add_background_object(create_fnfloor24_1703(3392, 264), 3);
    add_background_object(create_fnfloor24_1703(3536, 336), 3);
    add_background_object(create_fnfloor17_1661(5352, 1608), 3);
    add_background_object(create_fnfloor9_1688(5352, 1520), 3);
    add_background_object(create_fnwall18_1695(7976, 1280), 3);
    add_background_object(create_fnwall19_1696(7992, 1136), 3);
    add_background_object(create_fnwall18_1695(7976, 1568), 3);
    add_background_object(create_fnwall18_1695(7976, 1424), 3);
    add_background_object(create_backwall2_1642(8296, 1432), 3);
    add_background_object(create_fnbackwall6_1648(8296, 1528), 3);
    add_background_object(create_fnfloor8_1649(10984, 848), 3);
    add_background_object(create_fnfloor10_1692(11096, 848), 3);
    add_background_object(create_fnfloor9_1688(10984, 848), 3);
    add_background_object(create_fnfloor17_1661(10984, 936), 3);
    add_background_object(create_ferriswheelbase2_1644(11080, 1072), 3);
    add_background_object(create_ferriswheelbase2_1644(11080, 1008), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 912), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 976), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 1040), 3);
    add_background_object(create_ferriswheelbase2_1644(7464, 1104), 3);
    add_background_object(create_fnfloor17_1661(7784, 744), 3);
    add_background_object(create_fnfloor8_1649(7656, 656), 3);
    add_background_object(create_fnfloor8_1649(7656, 560), 3);
    add_background_object(create_fnfloor8_1649(7656, 464), 3);
    add_background_object(create_fnfloor8_1649(7656, 368), 3);
    add_background_object(create_fnfloor8_1649(7656, 272), 3);
    add_background_object(create_fnfloor8_1649(7656, 176), 3);
    add_background_object(create_fnfloor8_1649(7656, 80), 3);
    add_background_object(create_fnfloor8_1649(7656, -16), 3);
    add_background_object(create_lamppostback_1709(1672, 528), 3);
    add_background_object(create_lamppostback_1709(936, 1008), 3);
    add_background_object(create_lamppostback_1709(4568, 1248), 3);
    add_background_object(create_lamppostback_1709(5576, 1632), 3);
    add_background_object(create_lamppostback_1709(5992, 1632), 3);
    add_background_object(create_lamppostback_1709(5336, 1248), 3);
    add_background_object(create_lamppostback_1709(8808, 1248), 3);
    add_background_object(create_lamppostback_1709(8936, 1248), 3);
    add_background_object(create_fnfloor35_1710(2728, 1936), 3);
    add_background_object(create_fnfloor36_1711(2728, 1936), 3);
    add_background_object(create_fnbackwall1_1645(9112, 2000), 3);
    add_background_object(create_backwall2_1642(9240, 2000), 3);
    add_background_object(create_fnbackwall3_1663(9368, 2000), 3);
    add_background_object(create_fnbackwall4_1647(9368, 2096), 3);
    add_background_object(create_fnbackwall5_1643(9112, 2096), 3);
    add_background_object(create_fnbackwall6_1648(9240, 2096), 3);
    add_background_object(create_fnbackwall5_1643(8424, 944), 3);
    add_background_object(create_backwall2_1642(8424, 848), 3);
    add_background_object(create_poster1_1712(6352, 1360), 3);
    add_background_object(create_poster2_1713(6920, 1424), 3);
    add_background_object(create_poster1_1712(8520, 1344), 3);
    add_background_object(create_fnstatue_1714(5760, 1552), 3);
    add_background_object(create_fnstatue_1714(8848, 1216), 3);
    add_background_object(create_lamppostback_1709(5544, 1632), 3);
    add_background_object(create_lamppostback_1709(6024, 1632), 3);
    add_background_object(create_fnfloor8_1649(11112, 1232), 3);
    add_background_object(create_fnfloor9_1688(11112, 1232), 3);
    add_background_object(create_fnfloor10_1692(11224, 1232), 3);
    add_background_object(create_fnbackwall1_1645(10856, 1136), 3);
    add_background_object(create_fnfloor17_1661(10728, 1216), 3);
    add_background_object(create_fnfloor9_1688(10984, 1136), 3);
    add_background_object(create_fnfloor13_1691(10984, 1136), 3);
    add_background_object(create_fnfloor17_1661(10984, 1216), 3);
    add_background_object(create_fnclothesline_1641(3560, 1208), 3);
    add_background_object(create_fnclothesline_1641(3624, 1208), 3);
    add_background_object(create_fnclothesline_1641(3688, 1208), 3);
    add_background_object(create_fnclothesline_1641(3752, 1208), 3);
    add_background_object(create_fnclothesline_1641(3816, 1208), 3);
    add_background_object(create_fnclothesline_1641(3880, 1208), 3);
    add_background_object(create_fnclothesline_1641(7400, 928), 3);
    add_background_object(create_fnclothesline_1641(7336, 928), 3);
    add_background_object(create_fnclothesline_1641(7016, 1488), 3);
    add_background_object(create_fnclothesline_1641(7080, 1488), 3);
    add_background_object(create_fnclothesline_1641(7144, 1488), 3);
    add_background_object(create_fnclothesline_1641(7208, 1488), 3);
    add_background_object(create_fnclothesline_1641(7272, 1488), 3);
    add_background_object(create_fnclothesline_1641(7336, 1488), 3);
    add_background_object(create_fnclothesline_1641(7400, 1488), 3);
    add_background_object(create_fnclothesline_1641(7464, 1488), 3);
    add_background_object(create_fnclothesline_1641(7528, 1488), 3);
    add_background_object(create_fnclothesline_1641(7592, 1488), 3);
    add_background_object(create_fnclothesline_1641(7656, 1488), 3);
    add_background_object(create_fnclothesline_1641(7720, 1488), 3);
    add_background_object(create_fnclothesline_1641(10856, 984), 3);
    add_background_object(create_fnclothesline_1641(10920, 984), 3);
    add_object(create_objectcodec_354(-295, 108), 3);
    add_object(create_gimmickrollingarch_1715(1896, 416), 3);
    add_object(create_gimmickrollingarch_1715(2280, 416), 3);
    add_object(create_gimmickrollingarch_1715(9576, 1328), 3);
    add_object(create_objectjumppad_1510(7912, 728), 3);
    add_object(create_objectjumppad_1510(7784, 1016), 3);
    add_object(create_objectjumppad_1510(7656, 1168), 3);
    add_object(create_objectjumppad_1510(10472, 128), 3);
    add_object(create_objectjumppad_1510(10472, 416), 3);
    add_object(create_objectjumppad_1510(10472, 704), 3);
    add_object(create_paperlantern_527(3592, 1272), 3);
    add_object(create_signstop_1716(7144, 1232), 3);
    add_object(create_enemytrafficle_1717(8420, 792), 3);
    add_object(create_enemytrafficle_1717(10620, 888), 3);
    add_object(create_enemytrafficle_1717(9420, 776), 3);
    add_object(create_objectcodec_354(10506, 1093), 3);
    add_object(create_minibossbulldozerdoor_1718(11235, 1115), 3);
    add_object(create_monitorbomb_563(7920, 1680), 3);
    add_object(create_objectcrystal_279(7165, 1530), 3);
    add_object(create_objectcrystal_279(7197, 1530), 3);
    add_object(create_objectcrystal_279(7293, 1530), 3);
    add_object(create_objectcrystal_279(7325, 1530), 3);
    add_object(create_minibossbulldozer_1719(11231, 1120), 3);
    add_object(create_objectjumppad_1510(7208, 952), 3);
    add_object(create_enemytrafficle_1717(3620, 1368), 3);
    add_object(create_objectjumppad_1510(7528, 1072), 3);
    add_object(create_enemytrafficle_1717(5220, 1576), 3);
    add_object(create_enemytrafficle_1717(6764, 1408), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_levelferriswheelpiece_1720(3784, 896), 3);
    add_object(create_minibossufobeam_1721(6560, 1128), 3);
    add_object(create_paperlantern_527(2928, 1152), 3);
    add_object(create_minibossufohatch1_1722(6561, 1088), 3);
    add_object(create_minibossufohatch2_1723(6560, 1088), 3);
    add_object(create_paperlantern_527(2776, 1104), 3);
    add_object(create_enemylimiter_350(-491, 114), 3);
    add_object(create_sign_351(11992, -51), 3);
    add_object(create_playerstartingpoint_358(61, 517), 3);
    add_object(create_link_352(88, -96), 3);
    add_object(create_objectcrystal_279(-275, 82), 3);
    add_object(create_shieldearth_314(-140, 348), 3);
    add_object(create_shieldflameback_315(-96, 344), 3);
    add_object(create_shieldwood_313(-148, 340), 3);
    add_object(create_shieldmagnetic_317(-132, 348), 3);
    add_object(create_shieldwater_318(-84, 348), 3);
    add_object(create_shieldflamefront_316(-100, 348), 3);
    add_object(create_monitorkeystone_562(-216, 168), 3);
    add_object(create_objectjumppad_1510(-296, 168), 3);
    add_object(create_laddertop_357(3372, 1191), 3);
    add_object(create_pigeon_1724(1436, 584), 3);
    add_object(create_pigeon_1724(1404, 591), 3);
    add_object(create_redspringup_440(488, 800), 3);
    add_object(create_gimmickrollingarchbase_1725(1768, 288), 3);
    add_object(create_gimmickrollingarchbase_1725(2152, 288), 3);
    add_object(create_yellowspringup_434(1736, 592), 3);
    add_object(create_gimmickrollingarch2_1726(1992, 416), 3);
    add_object(create_yellowspringup_434(2024, 592), 3);
    add_object(create_yellowspringup_434(2120, 592), 3);
    add_object(create_gimmickrollingarch2_1726(2376, 416), 3);
    add_object(create_gimmicklanternbridge1_1727(6632, 1520), 3);
    add_object(create_gimmicklanternbridge1_1727(2792, 416), 3);
    add_object(create_gimmicklanternbridge2_1728(6632, 1488), 3);
    add_object(create_gimmicklanternbridge2_1728(2824, 416), 3);
    add_object(create_gimmicklanternbridge3_1729(6640, 1488), 3);
    add_object(create_gimmicklanternbridge3_1729(2856, 416), 3);
    add_object(create_gimmicklanternbridge4_1730(6648, 1488), 3);
    add_object(create_gimmicklanternbridge4_1730(2888, 416), 3);
    add_object(create_gimmicklanternbridge5_1731(6656, 1488), 3);
    add_object(create_gimmicklanternbridge5_1731(2920, 416), 3);
    add_object(create_gimmicklanternbridge6_1732(6664, 1488), 3);
    add_object(create_gimmicklanternbridge6_1732(2952, 416), 3);
    add_object(create_gimmicklanternbridge7_1733(6672, 1488), 3);
    add_object(create_gimmicklanternbridge7_1733(2984, 416), 3);
    add_object(create_gimmicklanternbridge8_1734(6680, 1488), 3);
    add_object(create_gimmicklanternbridge8_1734(3016, 416), 3);
    add_object(create_goldplatform1_1735(3176, 1368), 3);
    add_object(create_goldplatform2_1736(3240, 1336), 3);
    add_object(create_goldplatform2_1736(3272, 1320), 3);
    add_object(create_goldplatform1_1735(3336, 1320), 3);
    add_object(create_goldplatform1_1735(3336, 1168), 3);
    add_object(create_goldplatform2_1736(3400, 1136), 3);
    add_object(create_goldplatform2_1736(3432, 1120), 3);
    add_object(create_goldplatform1_1735(3496, 1120), 3);
    add_object(create_laddertop_357(3156, 1391), 3);
    add_object(create_goldplatform3_1737(3176, 1032), 3);
    add_object(create_goldplatform1_1735(2632, 1200), 3);
    add_object(create_signyield_1738(2952, 1520), 3);
    add_object(create_signstop_1716(3152, 1520), 3);
    add_object(create_flag_1739(3096, 960), 3);
    add_object(create_flag_1739(3008, 960), 3);
    add_object(create_gimmickclothesline2_1740(2832, 1104), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2752, 1112), 3);
    add_object(create_gimmickclothesline2_1740(2904, 1104), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2976, 1112), 3);
    add_object(create_gimmickclothesline2_1740(3160, 1168), 3);
    add_object(create_gimmickclothesline2_1740(2968, 1104), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3168, 1176), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3080, 1176), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3552, 1232), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3928, 1232), 3);
    add_object(create_gimmickclothesline2_1740(3632, 1224), 3);
    add_object(create_gimmickclothesline2_1740(3704, 1224), 3);
    add_object(create_gimmickclothesline2_1740(3776, 1224), 3);
    add_object(create_gimmickclothesline2_1740(3848, 1224), 3);
    add_object(create_flag_1739(3328, 1048), 3);
    add_object(create_flag_1739(3240, 1048), 3);
    add_object(create_gimmickclothesline2_1740(3920, 1224), 3);
    add_object(create_objectpetal_302(4097, 1081), 3);
    add_object(create_objectpetal_302(4017, 1081), 3);
    add_object(create_objectpetal_302(4057, 1081), 3);
    add_object(create_layer0loop_1742(4816, 704), 3);
    add_object(create_layer0loop2_1743(4776, 816), 3);
    add_object(create_layer1loop2_1744(4704, 816), 3);
    add_object(create_layer1loop_1745(4656, 704), 3);
    add_object(create_layerchangeto0_405(4624, 752), 3);
    add_object(create_layerchangeto0_405(4624, 688), 3);
    add_object(create_layerchangeto1_406(4944, 752), 3);
    add_object(create_layerchangeto1_406(4944, 688), 3);
    add_object(create_layerchangeto0_405(4624, 816), 3);
    add_object(create_layerchangeto0_405(4624, 880), 3);
    add_object(create_layerchangeto1_406(4944, 880), 3);
    add_object(create_layerchangeto1_406(4944, 816), 3);
    add_object(create_layerchangeswitch_404(4784, 616), 3);
    add_object(create_objectcrystal_279(2957, 1130), 3);
    add_object(create_objectcrystal_279(2837, 1130), 3);
    add_object(create_objectcrystal_279(2917, 1130), 3);
    add_object(create_objectcrystal_279(2877, 1130), 3);
    add_object(create_objectcrystal_279(3117, 1194), 3);
    add_object(create_objectcrystal_279(3149, 1194), 3);
    add_object(create_monitorkeystone_562(3512, 1088), 3);
    add_object(create_monitorkeystone_562(3256, 1000), 3);
    add_object(create_monitorkeystone_562(2648, 1024), 3);
    add_object(create_layer1loop3_1746(2752, 288), 3);
    add_object(create_layer1loop3_1746(2752, 352), 3);
    add_object(create_layerchangeswitch_404(2864, 104), 3);
    add_object(create_layerchangeto0_405(2712, 296), 3);
    add_object(create_layerchangeto0_405(2712, 360), 3);
    add_object(create_layerchangeto0_405(2856, 296), 3);
    add_object(create_layerchangeto0_405(2856, 352), 3);
    add_object(create_goldplatform3_1737(3240, 1032), 3);
    add_object(create_goldplatform3_1737(3304, 1032), 3);
    add_object(create_goldplatform3_1737(3368, 1032), 3);
    add_object(create_goldplatform3_1737(3432, 1032), 3);
    add_object(create_goldplatform3_1737(3496, 1032), 3);
    add_object(create_goldplatform3_1737(2568, 1056), 3);
    add_object(create_goldplatform3_1737(2632, 1056), 3);
    add_object(create_goldplatform3_1737(2696, 1056), 3);
    add_object(create_layer0loop2_1743(4728, 864), 3);
    add_object(create_layer1loop2_1744(4752, 864), 3);
    add_object(create_paperlantern_527(2928, 1104), 3);
    add_object(create_paperlantern_527(3856, 1224), 3);
    add_object(create_paperlantern_527(3592, 1224), 3);
    add_object(create_paperlantern_527(3352, 1320), 3);
    add_object(create_paperlantern_527(3208, 1416), 3);
    add_object(create_paperlantern_527(3720, 1424), 3);
    add_object(create_objectcrystal_279(4997, 970), 3);
    add_object(create_objectcrystal_279(5045, 970), 3);
    add_object(create_objectcrystal_279(5093, 970), 3);
    add_object(create_objectcrystal_279(5133, 978), 3);
    add_object(create_objectcrystal_279(5173, 994), 3);
    add_object(create_objectcrystal_279(5213, 1010), 3);
    add_object(create_objectcrystal_279(5253, 1026), 3);
    add_object(create_objectcrystal_279(5293, 1018), 3);
    add_object(create_objectcrystal_279(5333, 1002), 3);
    add_object(create_objectcrystal_279(5605, 834), 3);
    add_object(create_objectcrystal_279(5621, 810), 3);
    add_object(create_objectcrystal_279(5621, 858), 3);
    add_object(create_objectcrystal_279(5637, 786), 3);
    add_object(create_objectcrystal_279(5637, 882), 3);
    add_object(create_objectcrystal_279(5653, 810), 3);
    add_object(create_objectcrystal_279(5653, 858), 3);
    add_object(create_objectcrystal_279(5669, 834), 3);
    add_object(create_monitor1up_410(4424, 1296), 3);
    add_object(create_pigeon_1724(3188, 1032), 3);
    add_object(create_pigeon_1724(3204, 1032), 3);
    add_object(create_pigeon_1724(4484, 744), 3);
    add_object(create_pigeon_1724(3508, 1032), 3);
    add_object(create_pigeon_1724(3372, 1032), 3);
    add_object(create_pigeon_1724(3396, 1032), 3);
    add_object(create_pigeon_1724(3044, 848), 3);
    add_object(create_pigeon_1724(1028, 264), 3);
    add_object(create_pigeon_1724(1052, 264), 3);
    add_object(create_pigeon_1724(1076, 272), 3);
    add_object(create_pigeon_1724(908, 312), 3);
    add_object(create_monitorkeystone_562(384, 760), 3);
    add_object(create_gimmickboostblock_1747(1320, 1056), 3);
    add_object(create_breakablewall_1748(1352, 992), 3);
    add_object(create_gimmickboostblock_1747(1928, 936), 3);
    add_object(create_signyield_1738(2392, 1136), 3);
    add_object(create_gimmickboostblockturn_1749(1912, 920), 3);
    add_object(create_gimmickboostblockflame_1750(1930, 938), 3);
    add_object(create_gimmickboostblockflame_1750(1322, 1058), 3);
    add_object(create_monitorrings_407(968, 1056), 3);
    add_object(create_objectcrystal_279(1117, 842), 3);
    add_object(create_objectcrystal_279(1085, 834), 3);
    add_object(create_objectcrystal_279(1053, 818), 3);
    add_object(create_breakablewall_1748(1352, 1136), 3);
    add_object(create_breakablewall_1748(1352, 1376), 3);
    add_object(create_gimmickboostblock_1747(1864, 1104), 3);
    add_object(create_gimmickboostblockflame_1750(1866, 1106), 3);
    add_object(create_laddertop_357(1788, 1063), 3);
    add_object(create_redspringright_441(1128, 1376), 3);
    add_object(create_redspringright_441(1128, 1408), 3);
    add_object(create_redspringright_441(1128, 1440), 3);
    add_object(create_laddertop_357(1332, 1255), 3);
    add_object(create_breakablewall_1748(1896, 1376), 3);
    add_object(create_objectcrystal_279(1877, 266), 3);
    add_object(create_objectcrystal_279(1917, 266), 3);
    add_object(create_objectcrystal_279(1837, 282), 3);
    add_object(create_objectcrystal_279(1957, 282), 3);
    add_object(create_objectjumppad_1510(3584, 440), 3);
    add_object(create_objectjumppad_1510(3520, 744), 3);
    add_object(create_objectjumppad_1510(3464, 1032), 3);
    add_object(create_objectjumppad_1510(3944, 1008), 3);
    add_object(create_objectjumppad_1510(3880, 1328), 3);
    add_object(create_objectcrystal_279(3573, 554), 3);
    add_object(create_objectcrystal_279(3581, 514), 3);
    add_object(create_objectcrystal_279(3565, 594), 3);
    add_object(create_objectcrystal_279(3557, 634), 3);
    add_object(create_monitorfireshield_328(2088, 1200), 3);
    add_object(create_layerchangeto0_405(6352, 1416), 3);
    add_object(create_layerchangeto0_405(6352, 1464), 3);
    add_object(create_layerchangeto0_405(6632, 1464), 3);
    add_object(create_layerchangeto0_405(6632, 1408), 3);
    add_object(create_monitorcrystals_324(4176, 928), 3);
    add_object(create_monitorcrystals_324(4144, 928), 3);
    add_object(create_redspringleft_442(6336, 1048), 3);
    add_object(create_redspringleft_442(6336, 1016), 3);
    add_object(create_redspringleft_442(6336, 984), 3);
    add_object(create_redspringleft_442(6336, 952), 3);
    add_object(create_redspringleft_442(6336, 920), 3);
    add_object(create_redspringleft_442(6336, 888), 3);
    add_object(create_redspringleft_442(6336, 856), 3);
    add_object(create_redspringleft_442(6336, 824), 3);
    add_object(create_redspringleft_442(6336, 792), 3);
    add_object(create_enemycoilpiece1_1751(912, 536), 3);
    add_object(create_enemycoilpiece3_1752(911, 536), 3);
    add_object(create_enemycoilpiece2_1753(912, 536), 3);
    add_object(create_enemycoilpiece4_1754(911, 536), 3);
    add_object(create_enemycoil_1755(912, 536), 3);
    add_object(create_enemylimiter_350(845, 538), 3);
    add_object(create_enemylimiter_350(1261, 538), 3);
    add_object(create_enemylimiter_350(1285, 538), 3);
    add_object(create_enemylimiter_350(821, 538), 3);
    add_object(create_monitorinvincibility_408(6304, 1304), 3);
    add_object(create_enemycoilpiece1_1751(6248, 1616), 3);
    add_object(create_enemycoilpiece3_1752(6247, 1616), 3);
    add_object(create_enemycoilpiece2_1753(6248, 1616), 3);
    add_object(create_enemycoilpiece4_1754(6247, 1616), 3);
    add_object(create_enemycoil_1755(6248, 1616), 3);
    add_object(create_enemylimiter_350(6149, 1618), 3);
    add_object(create_enemylimiter_350(6125, 1618), 3);
    add_object(create_enemylimiter_350(6397, 1618), 3);
    add_object(create_enemylimiter_350(6373, 1618), 3);
    add_object(create_layerchangeto0_405(6632, 1352), 3);
    add_object(create_layerchangeswitch_404(6352, 1616), 3);
    add_object(create_layerchangeswitch_404(6352, 1664), 3);
    add_object(create_gimmickrollingarchbase_1725(9448, 1200), 3);
    add_object(create_objectcrystal_279(9557, 1178), 3);
    add_object(create_objectcrystal_279(9597, 1178), 3);
    add_object(create_objectcrystal_279(9517, 1194), 3);
    add_object(create_objectcrystal_279(9637, 1194), 3);
    add_object(create_yellowspringup_434(10664, 1552), 3);
    add_object(create_yellowspringup_434(10632, 1552), 3);
    add_object(create_yellowspringup_434(10600, 1552), 3);
    add_object(create_enemycoilflip_1756(6184, 1936), 3);
    add_object(create_goldplatform1_1735(10472, 1120), 3);
    add_object(create_monitorkeystone_562(10568, 944), 3);
    add_object(create_gimmickrollingarch2_1726(9672, 1328), 3);
    add_object(create_goldplatform3_1737(10408, 976), 3);
    add_object(create_goldplatform3_1737(10472, 976), 3);
    add_object(create_goldplatform3_1737(10536, 976), 3);
    add_object(create_objectcrystal_279(1205, 298), 3);
    add_object(create_objectcrystal_279(1173, 290), 3);
    add_object(create_objectcrystal_279(1141, 274), 3);
    add_object(create_objectcrystal_279(1237, 290), 3);
    add_object(create_objectcrystal_279(1269, 274), 3);
    add_object(create_enemytrafficle1_1757(5220, 1555), 3);
    add_object(create_enemytrafficle2_1758(5220, 1579), 3);
    add_object(create_enemytrafficle3_1759(5220, 1603), 3);
    add_object(create_breakablefloor1_1760(7016, 1280), 3);
    add_object(create_breakablefloor1_1760(7080, 1280), 3);
    add_object(create_breakablefloor1_1760(7144, 1280), 3);
    add_object(create_breakablefloor1_1760(7208, 1280), 3);
    add_object(create_breakablefloor1_1760(7272, 1280), 3);
    add_object(create_breakablefloor1_1760(7336, 1280), 3);
    add_object(create_breakablefloor1_1760(7016, 1328), 3);
    add_object(create_breakablefloor1_1760(7080, 1328), 3);
    add_object(create_breakablefloor1_1760(7144, 1328), 3);
    add_object(create_breakablefloor1_1760(7208, 1328), 3);
    add_object(create_breakablefloor1_1760(7272, 1328), 3);
    add_object(create_breakablefloor1_1760(7336, 1328), 3);
    add_object(create_breakablefloor1_1760(7016, 1376), 3);
    add_object(create_breakablefloor1_1760(7080, 1376), 3);
    add_object(create_breakablefloor1_1760(7144, 1376), 3);
    add_object(create_breakablefloor1_1760(7208, 1376), 3);
    add_object(create_breakablefloor1_1760(7272, 1376), 3);
    add_object(create_breakablefloor1_1760(7336, 1376), 3);
    add_object(create_breakablefloor2_1761(7080, 1232), 3);
    add_object(create_breakablefloor2_1761(7016, 1232), 3);
    add_object(create_breakablefloor2_1761(7208, 1232), 3);
    add_object(create_breakablefloor2_1761(7144, 1232), 3);
    add_object(create_breakablefloor2_1761(7336, 1232), 3);
    add_object(create_breakablefloor2_1761(7272, 1232), 3);
    add_object(create_minibossufoborder_1762(7424, 1088), 3);
    add_object(create_minibossufoborder_1762(6968, 1088), 3);
    add_object(create_minibossufo_1763(6560, 1088), 3);
    add_object(create_minibossufo2_1764(6660, 1088), 3);
    add_object(create_minibossufo2_1764(6684, 1088), 3);
    add_object(create_minibossufo2_1764(6708, 1088), 3);
    add_object(create_minibossufo2_1764(6732, 1088), 3);
    add_object(create_redspringup_440(520, 800), 3);
    add_object(create_objectfuel_528(644, 780), 3);
    add_object(create_goldplatform1_1735(3400, 1320), 3);
    add_object(create_goldplatform1_1735(3464, 1320), 3);
    add_object(create_laddertop_357(3580, 1055), 3);
    add_object(create_levelferriswheel1_1765(3784, 896), 3);
    add_object(create_levelferriswheel2_1766(3784, 896), 3);
    add_object(create_levelferriswheel3_1767(3784, 896), 3);
    add_object(create_levelferriswheel4_1768(3784, 896), 3);
    add_object(create_objectcrystal_279(1277, 1242), 3);
    add_object(create_objectcrystal_279(1293, 1266), 3);
    add_object(create_objectcrystal_279(1277, 1290), 3);
    add_object(create_objectcrystal_279(1293, 1314), 3);
    add_object(create_objectcrystal_279(1277, 1338), 3);
    add_object(create_objectcrystal_279(1293, 1362), 3);
    add_object(create_objectcrystal_279(1405, 1458), 3);
    add_object(create_objectcrystal_279(1429, 1458), 3);
    add_object(create_objectcrystal_279(1429, 1434), 3);
    add_object(create_objectcrystal_279(1405, 1434), 3);
    add_object(create_objectcrystal_279(1853, 1458), 3);
    add_object(create_objectcrystal_279(1877, 1458), 3);
    add_object(create_objectcrystal_279(1877, 1434), 3);
    add_object(create_objectcrystal_279(1853, 1434), 3);
    add_object(create_objectcrystal_279(4445, 754), 3);
    add_object(create_objectcrystal_279(4469, 778), 3);
    add_object(create_objectcrystal_279(4421, 730), 3);
    add_object(create_objectcrystal_279(1541, 930), 3);
    add_object(create_objectcrystal_279(1613, 930), 3);
    add_object(create_objectcrystal_279(1613, 962), 3);
    add_object(create_objectcrystal_279(1589, 962), 3);
    add_object(create_objectcrystal_279(1589, 930), 3);
    add_object(create_objectcrystal_279(1565, 962), 3);
    add_object(create_objectcrystal_279(1565, 930), 3);
    add_object(create_objectcrystal_279(1541, 962), 3);
    add_object(create_objectcrystal_279(4757, 1266), 3);
    add_object(create_objectcrystal_279(4733, 1266), 3);
    add_object(create_objectcrystal_279(4709, 1266), 3);
    add_object(create_objectcrystal_279(4733, 1234), 3);
    add_object(create_objectcrystal_279(4709, 1234), 3);
    add_object(create_objectcrystal_279(4757, 1234), 3);
    add_object(create_objectcrystal_279(4733, 1202), 3);
    add_object(create_objectcrystal_279(4709, 1202), 3);
    add_object(create_objectcrystal_279(4757, 1202), 3);
    add_object(create_objectcrystal_279(6093, 1114), 3);
    add_object(create_objectcrystal_279(6117, 1114), 3);
    add_object(create_objectcrystal_279(6141, 1114), 3);
    add_object(create_objectcrystal_279(6069, 1106), 3);
    add_object(create_objectcrystal_279(6165, 1106), 3);
    add_object(create_objectcrystal_279(6045, 1090), 3);
    add_object(create_objectcrystal_279(6189, 1090), 3);
    add_object(create_monitorearthshield_326(6216, 1480), 3);
    add_object(create_monitorcrystals_324(6248, 1480), 3);
    add_object(create_enemytrafficle1_1757(6764, 1387), 3);
    add_object(create_enemytrafficle2_1758(6764, 1411), 3);
    add_object(create_enemytrafficle3_1759(6764, 1435), 3);
    add_object(create_enemytrafficle1_1757(3620, 1347), 3);
    add_object(create_enemytrafficle2_1758(3620, 1371), 3);
    add_object(create_enemytrafficle3_1759(3620, 1395), 3);
    add_object(create_signyield_1738(6488, 1712), 3);
    add_object(create_gimmickhanginglongsensor2_1741(7008, 1512), 3);
    add_object(create_gimmickhanginglongsensor2_1741(7776, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7088, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7160, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7232, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7304, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7376, 1504), 3);
    add_object(create_gimmickboostblock_1747(7464, 1464), 3);
    add_object(create_gimmickboostblockturn_1749(7448, 1448), 3);
    add_object(create_gimmickboostblockflame_1750(7466, 1466), 3);
    add_object(create_gimmickboostblock_1747(7592, 1584), 3);
    add_object(create_gimmickboostblockturn_1749(7576, 1568), 3);
    add_object(create_gimmickboostblockflame_1750(7594, 1586), 3);
    add_object(create_hazardspikesup_1769(7016, 1584), 3);
    add_object(create_hazardspikesup_1769(7048, 1584), 3);
    add_object(create_hazardspikesup_1769(7080, 1584), 3);
    add_object(create_hazardspikesup_1769(7112, 1584), 3);
    add_object(create_hazardspikesup_1769(7144, 1584), 3);
    add_object(create_hazardspikesup_1769(7176, 1584), 3);
    add_object(create_hazardspikesup_1769(7208, 1584), 3);
    add_object(create_hazardspikesup_1769(7240, 1584), 3);
    add_object(create_hazardspikesup_1769(7272, 1584), 3);
    add_object(create_hazardspikesup_1769(7304, 1584), 3);
    add_object(create_hazardspikesup_1769(7336, 1584), 3);
    add_object(create_hazardspikesup_1769(7368, 1584), 3);
    add_object(create_gimmickclothesline2_1740(7448, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7520, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7592, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7664, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7736, 1504), 3);
    add_object(create_gimmickclothesline2_1740(7768, 1504), 3);
    add_object(create_yellowspringup_434(7688, 1696), 3);
    add_object(create_yellowspringup_434(7656, 1696), 3);
    add_object(create_yellowspringup_434(7720, 1696), 3);
    add_object(create_flag_1739(7888, 1296), 3);
    add_object(create_flag_1739(7800, 1296), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheelpiece_1720(8152, 1432), 3);
    add_object(create_levelferriswheel1_1765(8152, 1432), 3);
    add_object(create_levelferriswheel2_1766(8152, 1432), 3);
    add_object(create_levelferriswheel3_1767(8152, 1432), 3);
    add_object(create_levelferriswheel4_1768(8152, 1432), 3);
    add_object(create_laddertop_357(7900, 1423), 3);
    add_object(create_monitorcrystals_324(7688, 1368), 3);
    add_object(create_monitorbomb_563(7656, 1368), 3);
    add_object(create_gimmickclothesline2_1740(7344, 944), 3);
    add_object(create_gimmickclothesline2_1740(7416, 944), 3);
    add_object(create_gimmickclothesline2_1740(7448, 944), 3);
    add_object(create_gimmickhanginglongsensor2_1741(7264, 952), 3);
    add_object(create_gimmickhanginglongsensor2_1741(7456, 952), 3);
    add_object(create_objectcrystal_279(6493, 1242), 3);
    add_object(create_objectcrystal_279(6493, 1362), 3);
    add_object(create_objectcrystal_279(6493, 1282), 3);
    add_object(create_objectcrystal_279(6493, 1322), 3);
    add_object(create_objectcrystal_279(6493, 1202), 3);
    add_object(create_objectcrystal_279(6493, 1402), 3);
    add_object(create_paperlantern_527(7352, 848), 3);
    add_object(create_paperlantern_527(7416, 848), 3);
    add_object(create_monitorbomb_563(1480, 1200), 3);
    add_object(create_monitorbomb_563(1512, 1200), 3);
    add_object(create_monitorbomb_563(1544, 1200), 3);
    add_object(create_monitorbomb_563(1576, 1200), 3);
    add_object(create_monitorbomb_563(1608, 1200), 3);
    add_object(create_breakablefloor2_1761(1576, 1232), 3);
    add_object(create_breakablefloor2_1761(1512, 1232), 3);
    add_object(create_breakablefloor2_1761(4136, 1184), 3);
    add_object(create_breakablefloor2_1761(4072, 1184), 3);
    add_object(create_monitorbomb_563(4088, 1152), 3);
    add_object(create_objectcrystal_279(7037, 1530), 3);
    add_object(create_objectcrystal_279(7069, 1530), 3);
    add_object(create_objectcrystal_279(7101, 1530), 3);
    add_object(create_objectcrystal_279(7133, 1530), 3);
    add_object(create_objectcrystal_279(7229, 1530), 3);
    add_object(create_objectcrystal_279(7261, 1530), 3);
    add_object(create_dragontunnelhide3_1770(5368, 1424), 3);
    add_object(create_cameratriggerboss_424(6936, 1040), 3);
    add_object(create_cameratriggerboss_424(6936, 848), 3);
    add_object(create_cameratriggerboss_424(6936, 656), 3);
    add_object(create_breakablewall_1748(7920, 1616), 3);
    add_object(create_monitorbomb_563(7888, 1680), 3);
    add_object(create_monitorbomb_563(7952, 1680), 3);
    add_object(create_yellowspringup_434(8744, 1360), 3);
    add_object(create_yellowspringup_434(8712, 1360), 3);
    add_object(create_yellowspringup_434(8776, 1360), 3);
    add_object(create_objectpetal_302(4793, 633), 3);
    add_object(create_objectpetal_302(4849, 665), 3);
    add_object(create_objectpetal_302(4737, 665), 3);
    add_object(create_layer0loop_1742(10040, 952), 3);
    add_object(create_layer0loop2_1743(10000, 1064), 3);
    add_object(create_layer1loop2_1744(9928, 1064), 3);
    add_object(create_layer1loop_1745(9880, 952), 3);
    add_object(create_layer0loop2_1743(9952, 1112), 3);
    add_object(create_layer1loop2_1744(9976, 1112), 3);
    add_object(create_goldplatform1_1735(10472, 1216), 3);
    add_object(create_gimmickclothesline2_1740(10928, 1000), 3);
    add_object(create_gimmickhanginglongsensor2_1741(10848, 1008), 3);
    add_object(create_gimmickclothesline2_1740(10968, 1000), 3);
    add_object(create_gimmickhanginglongsensor2_1741(10976, 1008), 3);
    add_object(create_minibosslimiter_1771(11048, 1072), 3);
    add_object(create_minibosslimiter_1771(11368, 1072), 3);
    add_object(create_minibossbulldozerarm_1772(11239, 1096), 3);
    add_object(create_minibossbulldozerwheel1_1773(11195, 1123), 3);
    add_object(create_minibossbulldozerwheel2_1774(11272, 1128), 3);
    add_object(create_minibossbulldozerclaw_1775(11246, 1096), 3);
    add_object(create_minibossbulldozerhitbox_1776(11231, 1008), 3);
    add_object(create_layerchangeto0_405(9848, 1008), 3);
    add_object(create_layerchangeto0_405(9848, 944), 3);
    add_object(create_layerchangeto1_406(10168, 1008), 3);
    add_object(create_layerchangeto1_406(10168, 944), 3);
    add_object(create_layerchangeto0_405(9848, 1072), 3);
    add_object(create_layerchangeto0_405(9848, 1136), 3);
    add_object(create_layerchangeto1_406(10168, 1136), 3);
    add_object(create_layerchangeto1_406(10168, 1072), 3);
    add_object(create_layerchangeswitch_404(10008, 872), 3);
    add_object(create_layerchangeto1_406(4944, 944), 3);
    add_object(create_pigeon_1724(9852, 1336), 3);
    add_object(create_pigeon_1724(10188, 1336), 3);
    add_object(create_pigeon_1724(10220, 1344), 3);
    add_object(create_paperlantern_527(7704, 1424), 3);
    add_object(create_pigeon_1724(10004, 824), 3);
    add_object(create_pigeon_1724(10028, 824), 3);
    add_object(create_pigeon_1724(10532, 976), 3);
    add_object(create_pigeon_1724(10428, 976), 3);
    add_object(create_pigeon_1724(10500, 976), 3);
    add_object(create_goldplatform1_1735(10472, 1312), 3);
    add_object(create_objectpetal_302(10105, 1281), 3);
    add_object(create_objectpetal_302(10145, 1305), 3);
    add_object(create_objectpetal_302(9961, 1305), 3);
    add_object(create_objectpetal_302(10001, 1281), 3);
    add_object(create_objectcrystal_279(9085, 1290), 3);
    add_object(create_objectcrystal_279(9117, 1298), 3);
    add_object(create_objectcrystal_279(9149, 1314), 3);
    add_object(create_objectcrystal_279(9173, 1338), 3);
    add_object(create_objectcrystal_279(9189, 1370), 3);
    add_object(create_objectcrystal_279(8725, 1002), 3);
    add_object(create_objectcrystal_279(8773, 1002), 3);
    add_object(create_objectcrystal_279(8821, 1002), 3);
    add_object(create_objectcrystal_279(8869, 1002), 3);
    add_object(create_objectcrystal_279(8917, 1002), 3);
    add_object(create_objectcrystal_279(8965, 1002), 3);
    add_object(create_objectcrystal_279(9013, 1002), 3);
    add_object(create_objectcrystal_279(9061, 1002), 3);
    add_object(create_objectcrystal_279(9109, 1002), 3);
    add_object(create_objectcrystal_279(9157, 1002), 3);
    add_object(create_objectcrystal_279(9205, 1002), 3);
    add_object(create_objectcrystal_279(9253, 1002), 3);
    add_object(create_objectcrystal_279(8725, 818), 3);
    add_object(create_objectcrystal_279(8773, 818), 3);
    add_object(create_objectcrystal_279(8821, 818), 3);
    add_object(create_objectcrystal_279(8869, 818), 3);
    add_object(create_objectcrystal_279(8917, 818), 3);
    add_object(create_objectcrystal_279(8965, 818), 3);
    add_object(create_objectcrystal_279(9013, 818), 3);
    add_object(create_objectcrystal_279(9061, 818), 3);
    add_object(create_objectcrystal_279(9109, 818), 3);
    add_object(create_objectcrystal_279(9157, 818), 3);
    add_object(create_objectcrystal_279(9205, 818), 3);
    add_object(create_objectcrystal_279(9253, 818), 3);
    add_object(create_enemytrafficle1_1757(9420, 755), 3);
    add_object(create_enemytrafficle2_1758(9420, 779), 3);
    add_object(create_enemytrafficle3_1759(9420, 803), 3);
    add_object(create_enemytrafficle1_1757(10620, 867), 3);
    add_object(create_enemytrafficle2_1758(10620, 891), 3);
    add_object(create_enemytrafficle3_1759(10620, 915), 3);
    add_object(create_dragontunnelhide1_1777(9296, 848), 3);
    add_object(create_enemytrafficle1_1757(8420, 771), 3);
    add_object(create_enemytrafficle2_1758(8420, 795), 3);
    add_object(create_enemytrafficle3_1759(8420, 819), 3);
    add_object(create_monitorcrate_409(8136, 1680), 3);
    add_object(create_objectcrystal_279(3317, 362), 3);
    add_object(create_objectcrystal_279(3317, 594), 3);
    add_object(create_objectcrystal_279(3341, 562), 3);
    add_object(create_objectcrystal_279(3341, 394), 3);
    add_object(create_objectcrystal_279(3357, 442), 3);
    add_object(create_objectcrystal_279(3357, 514), 3);
    add_object(create_objectcrystal_279(3285, 618), 3);
    add_object(create_objectcrystal_279(3285, 338), 3);
    add_object(create_objectcodec_354(3058, 493), 3);
    add_object(create_dragontunnelhide3_1770(5368, 1520), 3);
    add_object(create_flag_1739(8096, 1296), 3);
    add_object(create_flag_1739(8008, 1296), 3);
    add_object(create_largesign1_1635(9344, 1360), 3);
    add_object(create_largesign1_1635(8456, 560), 3);
    add_object(create_objectcrystal_279(10453, 474), 3);
    add_object(create_objectcrystal_279(10453, 506), 3);
    add_object(create_objectcrystal_279(10453, 538), 3);
    add_object(create_objectcrystal_279(10453, 570), 3);
    add_object(create_objectcrystal_279(10453, 602), 3);
    add_object(create_objectcrystal_279(10453, 634), 3);
    add_object(create_objectcrystal_279(10453, 666), 3);
    add_object(create_objectcrystal_279(10453, 186), 3);
    add_object(create_objectcrystal_279(10453, 218), 3);
    add_object(create_objectcrystal_279(10453, 250), 3);
    add_object(create_objectcrystal_279(10453, 282), 3);
    add_object(create_objectcrystal_279(10453, 314), 3);
    add_object(create_objectcrystal_279(10453, 346), 3);
    add_object(create_objectcrystal_279(10453, 378), 3);
    add_object(create_objectcrystal_279(9933, 1498), 3);
    add_object(create_objectcrystal_279(10053, 1498), 3);
    add_object(create_objectcrystal_279(10173, 1498), 3);
    add_object(create_objectfuel_528(8620, 548), 3);
    add_object(create_flag_1739(8672, 584), 3);
    add_object(create_flag_1739(8576, 584), 3);
    add_object(create_redspringup_440(10696, 1552), 3);
    add_object(create_objectcrystal_279(8413, 1282), 3);
    add_object(create_objectcrystal_279(8381, 1282), 3);
    add_object(create_objectcrystal_279(8349, 1282), 3);
    add_object(create_redspringup_440(8680, 1360), 3);
    add_object(create_objectpetal_302(7841, 913), 3);
    add_object(create_objectpetal_302(7857, 873), 3);
    add_object(create_lamppostfront_1778(1688, 546), 3);
    add_object(create_lamppostfront_1778(952, 1026), 3);
    add_object(create_lamppostfront_1778(4584, 1266), 3);
    add_object(create_lamppostfront_1778(5592, 1650), 3);
    add_object(create_lamppostfront_1778(6008, 1650), 3);
    add_object(create_lamppostfront_1778(5352, 1266), 3);
    add_object(create_lamppostfront_1778(8824, 1266), 3);
    add_object(create_lamppostfront_1778(8952, 1266), 3);
    add_object(create_objectcrystal_279(8533, 1002), 3);
    add_object(create_objectcrystal_279(8533, 970), 3);
    add_object(create_objectcrystal_279(8533, 938), 3);
    add_object(create_pigeon_1724(8908, 1217), 3);
    add_object(create_pigeon_1724(8860, 1248), 3);
    add_object(create_lamppostfront_1778(5560, 1650), 3);
    add_object(create_lamppostfront_1778(6040, 1650), 3);
    add_object(create_objectchair_1779(1053, 1017), 3);
    add_object(create_objectchair_1779(3053, 1497), 3);
    add_object(create_objectchair_1779(3989, 1161), 3);
    add_object(create_objectchair_1779(3517, 1497), 3);
    add_object(create_objectchair_1779(4621, 1305), 3);
    add_object(create_objectchair_1779(4373, 1305), 3);
    add_object(create_objectchair_1779(5397, 1305), 3);
    add_object(create_objectchair_1779(5909, 1689), 3);
    add_object(create_objectchair_1779(5701, 1689), 3);
    add_object(create_objectchair_1779(8597, 1305), 3);
    add_object(create_objectchair_1779(10413, 1497), 3);
    add_object(create_objectchair_1779(10493, 1497), 3);
    add_object(create_objectchair_1779(10573, 1497), 3);
    add_object(create_yellowspringleft_436(6872, 1488), 3);
    add_object(create_yellowspringleft_436(6872, 1456), 3);
    add_object(create_hazardspikesup_1769(11080, 1296), 3);
    add_object(create_objectpetal_302(11049, 1305), 3);
    add_object(create_objectpetal_302(11001, 1305), 3);
    add_object(create_gimmickdragontunnelmask1_1780(6132, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(6092, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(6052, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(6012, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5972, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5932, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5892, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5852, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5812, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5772, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5732, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5692, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5652, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5612, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5572, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5532, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5492, 1366), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5452, 1366), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5468, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5508, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5548, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5588, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5628, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5668, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5708, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5748, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5788, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5828, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5868, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5908, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5948, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(5988, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(6028, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(6068, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(6108, 1558), 3);
    add_object(create_gimmickdragontunnelmask2_1781(6148, 1558), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9332, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9292, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9252, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9212, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9172, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9132, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9092, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9052, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9012, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8972, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8932, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8892, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8852, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8812, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8772, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8732, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8692, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8652, 894), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9332, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9292, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9252, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9212, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9172, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9132, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9092, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9052, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(9012, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8972, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8932, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8892, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8852, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8812, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8772, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8732, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8692, 1086), 3);
    add_object(create_gimmickdragontunnelmask1_1780(8652, 1086), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8644, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8684, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8724, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8764, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8804, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8844, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8884, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8924, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(8964, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9004, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9044, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9084, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9124, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9164, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9204, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9244, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9284, 1006), 3);
    add_object(create_gimmickdragontunnelmask2_1781(9324, 1006), 3);
    add_object(create_enemycoilhead_1782(6248, 1576), 3);
    add_object(create_enemycoilhead_1782(912, 496), 3);
    add_object(create_savedata_28(-104, 16), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fnfloor8_1649(1896, 512), 4);
    add_background_object(create_fnfloor8_1649(1768, 416), 4);
    add_background_object(create_fnfloor8_1649(1896, 416), 4);
    add_background_object(create_fnfloor8_1649(1768, 512), 4);
    add_background_object(create_fnfloor8_1649(2152, 416), 4);
    add_background_object(create_fnfloor8_1649(2280, 416), 4);
    add_background_object(create_fnfloor8_1649(2152, 512), 4);
    add_background_object(create_fnfloor9_1688(1768, 416), 4);
    add_background_object(create_fnfloor9_1688(1768, 512), 4);
    add_background_object(create_fnfloor9_1688(2152, 416), 4);
    add_background_object(create_fnfloor9_1688(2152, 512), 4);
    add_background_object(create_fnfloor12_1659(1768, 416), 4);
    add_background_object(create_fnfloor12_1659(1896, 416), 4);
    add_background_object(create_fnfloor12_1659(2152, 416), 4);
    add_background_object(create_fnfloor12_1659(2280, 416), 4);
    add_background_object(create_fnfloor13_1691(1768, 416), 4);
    add_background_object(create_fnfloor13_1691(2152, 416), 4);
    add_background_object(create_fnfloor10_1692(2008, 416), 4);
    add_background_object(create_fnfloor10_1692(2008, 512), 4);
    add_background_object(create_fnfloor10_1692(2392, 416), 4);
    add_background_object(create_fnfloor14_1660(2008, 416), 4);
    add_background_object(create_fnfloor14_1660(2392, 416), 4);
    add_background_object(create_fnrailing_1784(3176, 1344), 4);
    add_background_object(create_fnrailing_1784(3336, 1296), 4);
    add_background_object(create_fnrailingslope_1785(3240, 1312), 4);
    add_background_object(create_fnrailingslope_1785(3272, 1296), 4);
    add_background_object(create_fnrailing_1784(3336, 1144), 4);
    add_background_object(create_fnrailing_1784(3496, 1096), 4);
    add_background_object(create_fnrailingslope_1785(3400, 1112), 4);
    add_background_object(create_fnrailingslope_1785(3432, 1096), 4);
    add_background_object(create_fnrailing_1784(2632, 1176), 4);
    add_background_object(create_fnrooftop2_1687(4256, 704), 4);
    add_background_object(create_fnfloor13_1691(6096, 1336), 4);
    add_background_object(create_fnfloor8_1649(9448, 1328), 4);
    add_background_object(create_fnfloor8_1649(9576, 1328), 4);
    add_background_object(create_fnfloor9_1688(9448, 1328), 4);
    add_background_object(create_fnfloor12_1659(9448, 1328), 4);
    add_background_object(create_fnfloor13_1691(9448, 1328), 4);
    add_background_object(create_fnfloor12_1659(9576, 1328), 4);
    add_background_object(create_fnfloor10_1692(9688, 1328), 4);
    add_background_object(create_fnfloor14_1660(9688, 1328), 4);
    add_background_object(create_fnrailing_1784(3400, 1296), 4);
    add_background_object(create_fnrailing_1784(3464, 1296), 4);
    add_background_object(create_fnrailing_1784(10472, 1096), 4);
    add_background_object(create_fnrailing_1784(10472, 1192), 4);
    add_background_object(create_fnrailing_1784(10472, 1288), 4);
    add_object(create_layer1loop2_1744(4704, 816), 4);
    add_object(create_layer1loop_1745(4656, 704), 4);
    add_object(create_layer1loop2_1744(4752, 864), 4);
    add_object(create_layer1loop2_1744(9928, 1064), 4);
    add_object(create_layer1loop_1745(9880, 952), 4);
    add_object(create_layer1loop2_1744(9976, 1112), 4);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(7264, 1831), 5);
    add_object(create_cameralimitbossleft_421(6984, 1168), 5);
    add_object(create_cameralimitbossright_422(7559, 1160), 5);
    add_object(create_cameralimitbosstop_423(7248, 824), 5);
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
    add_object(create_layerchangeswitch2_1239(-328, -8), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(272, -72), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(256, -72), 6);
    add_object(create_guikeystone_455(240, -72), 6);
    add_object(create_guikeystone_455(224, -72), 6);
    add_object(create_guikeystone_455(208, -72), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_monitormetalshield_329(5128, 1680), 6);
    add_object(create_monitorfireshield_328(5288, 1680), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
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
    loop_bdfloor_running = false;
    loop_bdfloor_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_lamp_running = false;
    loop_lamp_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_dt_running = false;
    loop_dt_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
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
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
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
    loop_cp_running = false;
    loop_cp_index = 0;
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
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_29, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_29, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_29, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_29, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_29, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_29, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_29, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_29, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_29, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_29, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_29, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_29, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_29, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_29, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_29, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_29, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_29, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_29, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_29, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_29, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_29, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_29, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_29, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_29, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_29, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_29, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_29, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_29, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_29, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_29, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_29, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_29, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_29, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_29, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_29, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_29, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_29, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_29, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_29, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_29, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_29, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_29, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_29, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_29, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_29, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1529_13 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1550_16 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1411_29 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_1404_29 = loop_count;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_1403_29 = loop_count;
    not_always_449_13 = loop_count;
    not_always_1407_29 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1410_29 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1409_29 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    not_always_1406_29 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_240_14 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    not_always_1411_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    not_always_1402_29 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_1595_29 = loop_count;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1401_29 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_ufo_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_frame_transition_1 = true;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_66_13 = false;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1412_21 = loop_count;
    not_always_100_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_1400_29 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_1408_29 = loop_count;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_6949()
{
    // event 1603_30
    {
        if (!(group_main_engine_1)) goto event_1603_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1603_30_end;
        FrameObject * single_instance_1603_30_0; single_instance_1603_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1603_30_0 == NULL)
                    single_instance_1603_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1603_30_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1603_30_0))->get_movement()->set_speed(50+randrange(30));
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1603_30_end: ;
}
void Frames::event_func_6950()
{
    // event 1637_30
    {
        if (!(group_main_engine_1)) goto event_1637_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1637_30_end;
        FrameObject * single_instance_1637_30_0; single_instance_1637_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1637_30_0 == NULL)
                    single_instance_1637_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1637_30_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1637_30_0))->force_frame(((Active*)get_single(enemysuperturretus_1828_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1637_30_end: ;
}
void Frames::loop_spawndebris_30()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_6637();
    event_func_6949();
    event_func_6950();
}
void Frames::loop_wrapper_sound_kick1_30(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_30(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_30(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_30(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_30(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_30(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
