#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5448()
{
    // event 1557_25
    {
        if (!(group_main_engine_1)) goto event_1557_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(2))) goto event_1557_25_end;
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1557_25_end: ;
}
void Frames::event_func_5449()
{
    // event 1558_25
    {
        if (!(group_main_engine_1)) goto event_1558_25_end;
            group_main_engine_level_specific_methods_bosses_miniboss_golem_1 = false;
    
    }
    event_1558_25_end: ;
}
void Frames::event_func_5450()
{
    // event 1559_25
    {
        if (!(group_main_engine_1)) goto event_1559_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-200))) goto event_1559_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()+100))) goto event_1559_25_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1559_25_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_golem_1 = true;
        }
    }
    event_1559_25_end: ;
}
void Frames::event_func_5451()
{
    // event 1561_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1561_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1561_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-200))) goto event_1561_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1561_25_end;
        if (not_always_1561_25 > loop_count) {
            not_always_1561_25 = loop_count + 2;
            goto event_1561_25_end;
        }
        not_always_1561_25 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1561_25_end: ;
}
void Frames::event_func_5452()
{
    // event 1562_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1562_25_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-40))) goto event_1562_25_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+100))) goto event_1562_25_end;
        if (not_always_1562_25 > loop_count) {
            not_always_1562_25 = loop_count + 2;
            goto event_1562_25_end;
        }
        not_always_1562_25 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1562_25_end: ;
}
void Frames::event_func_5453()
{
    // event 1563_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1563_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1563_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 2);
        }
    }
    event_1563_25_end: ;
}
void Frames::event_func_5454()
{
    // event 1564_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1564_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (305))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1564_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->values.set(5, 305);
        }
    }
    event_1564_25_end: ;
}
void Frames::event_func_5455()
{
    // event 1565_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1565_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1565_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 3);
        }
    }
    event_1565_25_end: ;
}
void Frames::event_func_5456()
{
    // event 1566_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1566_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1566_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 3);
        }
    }
    event_1566_25_end: ;
}
void Frames::event_func_5457()
{
    // event 1567_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1567_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1567_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1567_25_end: ;
}
void Frames::event_func_5458()
{
    // event 1568_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1568_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (720))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1568_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -1);
        }
    }
    event_1568_25_end: ;
}
void Frames::event_func_5459()
{
    // event 1569_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1569_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(get_max(15, ((Active*)*it)->alterables->values.get(5)%math_helper%180), 180-15));
        }
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1569_25_end: ;
}
void Frames::event_func_5460()
{
    // event 1570_25
    bool or_result_1570_25 = false;
    bool or_temp_result_1570_25_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto or_event_1570_25_0_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180-45))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1570_25_0_end;
        if (not_always_1570_25 > loop_count) {
            not_always_1570_25 = loop_count + 2;
            goto or_event_1570_25_0_end;
        }
        not_always_1570_25 = loop_count + 2;
        or_result_1570_25 = true;
        or_temp_result_1570_25_0 = true;
    }
    or_event_1570_25_0_end: ;
    minibossgolem_1252_instances.clear_saved_selection();
    if (or_temp_result_1570_25_0) {
        minibossgolem_1252_instances.save_selection();
    }
    // event 1570_25
    bool or_temp_result_1570_25_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto or_event_1570_25_1_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (45))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1570_25_1_end;
        if (not_always_1570_25 > loop_count) {
            not_always_1570_25 = loop_count + 2;
            goto or_event_1570_25_1_end;
        }
        not_always_1570_25 = loop_count + 2;
        or_result_1570_25 = true;
        or_temp_result_1570_25_1 = true;
        or_event_1570_25_1_end: ;
        if (or_temp_result_1570_25_1) {
            minibossgolem_1252_instances.save_selection();
        }
        if (!or_result_1570_25) goto or_final_or_event_1570_25_1_end;
        minibossgolem_1252_instances.empty_selection();
        if (or_temp_result_1570_25_0 || or_temp_result_1570_25_1) {
            minibossgolem_1252_instances.restore_selection();
        }
        media.stop_sample(SOUND_FLANGE_2_68);
        media.play_id(SOUND_FLANGE_2_68, -1, 1);
    }
    or_final_or_event_1570_25_1_end: ;
}
void Frames::event_func_5461()
{
    // event 1571_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1571_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180-45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1571_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 45);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1571_25_end: ;
}
void Frames::event_func_5462()
{
    // event 1572_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1572_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->alterables->values.get(21)+(((Active*)*it)->alterables->values.get(5)/math_helper/180)*114);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(20)-get_abs(cos_deg(((Active*)*it)->alterables->values.get(4)))*128);
        }
    }
    event_1572_25_end: ;
}
void Frames::event_func_5463()
{
    // event 1573_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1573_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (90))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1573_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(19)+sin_deg(((Active*)*it)->alterables->values.get(4))*128);
        }
    }
    event_1573_25_end: ;
}
void Frames::event_func_5464()
{
    // event 1574_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1574_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (90))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1574_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(19)+180+sin_deg(((Active*)*it)->alterables->values.get(4))*-128);
        }
    }
    event_1574_25_end: ;
}
void Frames::event_func_5465()
{
    // event 1575_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1575_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_x()+cos_deg(90-((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->alterables->values.get(4))*32*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_y()+get_abs(sin_deg(90-((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->alterables->values.get(4)))*32*((Active*)*it)->alterables->values.get(0));
        }
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_x()+cos_deg(90+((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->alterables->values.get(4))*32*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_y()+get_abs(sin_deg(90+((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->alterables->values.get(4)))*32*((Active*)*it)->alterables->values.get(0));
        }
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_action_y()+(((Active*)*it)->get_direction()*32));
        }
    }
    event_1575_25_end: ;
}
void Frames::event_func_5466()
{
    // event 1576_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1576_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1576_25_end;
        if (!((((Active*)get_single(minibossgolem_1252_instances, default_active_instance))->alterables->values.get(5)%math_helper%180) >= (80))) goto event_1576_25_end;
        if (!((((Active*)get_single(minibossgolem_1252_instances, default_active_instance))->alterables->values.get(5)%math_helper%180) <= (100))) goto event_1576_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1576_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1576_25_end: ;
}
void Frames::event_func_5467()
{
    // event 1577_25
    bool or_result_1577_25 = false;
    bool or_temp_result_1577_25_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto or_event_1577_25_0_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1577_25_0_end;
        if (!((((Active*)get_single(minibossgolem_1252_instances, default_active_instance))->alterables->values.get(5)%math_helper%180) < (80))) goto or_event_1577_25_0_end;
        or_result_1577_25 = true;
        or_temp_result_1577_25_0 = true;
    }
    or_event_1577_25_0_end: ;
    minibossgolem_1252_instances.clear_saved_selection();
    if (or_temp_result_1577_25_0) {
        minibossgolem_1252_instances.save_selection();
    }
    // event 1577_25
    bool or_temp_result_1577_25_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto or_event_1577_25_1_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1577_25_1_end;
        if (!((((Active*)get_single(minibossgolem_1252_instances, default_active_instance))->alterables->values.get(5)%math_helper%180) > (100))) goto or_event_1577_25_1_end;
        or_result_1577_25 = true;
        or_temp_result_1577_25_1 = true;
        or_event_1577_25_1_end: ;
        if (or_temp_result_1577_25_1) {
            minibossgolem_1252_instances.save_selection();
        }
        if (!or_result_1577_25) goto or_final_or_event_1577_25_1_end;
        minibossgolem_1252_instances.empty_selection();
        if (or_temp_result_1577_25_0 || or_temp_result_1577_25_1) {
            minibossgolem_1252_instances.restore_selection();
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(13);
        }
    }
    or_final_or_event_1577_25_1_end: ;
}
void Frames::event_func_5468()
{
    // event 1578_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1578_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1578_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
        }
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1578_25_end: ;
}
void Frames::event_func_5469()
{
    // event 1579_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1579_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1579_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1579_25_end;
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+8, 150));
        }
    }
    event_1579_25_end: ;
}
void Frames::event_func_5470()
{
    // event 1580_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1580_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1580_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1580_25_end;
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-8, 0));
        }
    }
    event_1580_25_end: ;
}
void Frames::event_func_5471()
{
    // event 1581_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1581_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1581_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1581_25_end;
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(1), 0);
        }
    }
    event_1581_25_end: ;
}
void Frames::event_func_5472()
{
    // event 1582_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1582_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1582_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1582_25_end;
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(1), 0);
        }
    }
    event_1582_25_end: ;
}
void Frames::event_func_5473()
{
    // event 1583_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1583_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1583_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1583_25_end;
        if (not_always_1583_25 > loop_count) {
            not_always_1583_25 = loop_count + 2;
            goto event_1583_25_end;
        }
        not_always_1583_25 = loop_count + 2;
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
    }
    event_1583_25_end: ;
}
void Frames::event_func_5474()
{
    // event 1584_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1584_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1584_25_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1584_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1584_25_end;
        FrameObject * single_instance_1584_25_0; single_instance_1584_25_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgolem_1252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1584_25_0 == NULL)
                    single_instance_1584_25_0 = new_obj;
            }
        }
        ((Active*)single_instance_1584_25_0)->move_back(((Active*)get_single(minibossgolem_1252_instances)));
        ((Active*)((Active*)single_instance_1584_25_0))->alterables->values.set(0, ((Active*)single_instance_1584_25_0)->get_x());
        ((Active*)((Active*)single_instance_1584_25_0))->alterables->values.set(1, ((Active*)single_instance_1584_25_0)->get_y());
        ((Active*)((Active*)single_instance_1584_25_0))->alterables->values.set(2, sin_deg(((Active*)get_single(minibossgolem2_1251_instances, default_active_instance))->alterables->values.get(0)*9)*2.4);
        ((Active*)((Active*)single_instance_1584_25_0))->alterables->values.set(3, -4-get_abs(cos_deg(((Active*)get_single(minibossgolem2_1251_instances, default_active_instance))->alterables->values.get(0)*9)*1.6));
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 0.5);
        }
    }
    event_1584_25_end: ;
}
void Frames::event_func_5475()
{
    // event 1585_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1585_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1585_25_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1585_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (40))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1585_25_end;
        FrameObject * single_instance_1585_25_0; single_instance_1585_25_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgolem_1252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot_1197(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1585_25_0 == NULL)
                    single_instance_1585_25_0 = new_obj;
            }
        }
        ((Active*)single_instance_1585_25_0)->move_back(((Active*)get_single(minibossgolem_1252_instances)));
        ((Active*)((Active*)single_instance_1585_25_0))->set_direction(((Active*)get_single(minibossgolem2_1251_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1585_25_0))->alterables->values.set(0, ((Active*)single_instance_1585_25_0)->get_x());
        ((Active*)((Active*)single_instance_1585_25_0))->alterables->values.set(1, ((Active*)single_instance_1585_25_0)->get_y());
        ((Active*)((Active*)single_instance_1585_25_0))->alterables->values.set(4, badnikgolemshot_1197_instances.size()-3);
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
    }
    event_1585_25_end: ;
}
void Frames::event_func_5476()
{
    // event 1586_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1586_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1586_25_end;
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem2_1251_instances.has_selection()) goto event_1586_25_end;
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()+1)%math_helper%2);
        }
    }
    event_1586_25_end: ;
}
void Frames::event_func_5477()
{
    // event 1587_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1587_25_end;
        pushableblock1_531_instances.clear_selection();
        minibossgolem_1252_instances.clear_selection();
        if (!check_overlap(pushableblock1_531_instances, minibossgolem_1252_instances)) goto event_1587_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 100);
        }
        for (ObjectIterator it(pushableblock1_531_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 34)), 2, 34);
    }
    event_1587_25_end: ;
}
void Frames::event_func_5478()
{
    // event 1588_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1)) goto event_1588_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1588_25_end;
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1 = true;
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(16);
        }
        minibossgolem2_1251_instances.clear_selection();
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossgolempiece1_1250_instances.clear_selection();
        spread_value(minibossgolempiece1_1250_instances, 25, 1);
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)*it)->alterables->values.get(25)*30-15);
        }
        minibossgolempiece2_1249_instances.clear_selection();
        spread_value(minibossgolempiece2_1249_instances, 25, 1);
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)*it)->alterables->values.get(25)*30);
        }
    }
    event_1588_25_end: ;
}
void Frames::event_func_5479()
{
    // event 1589_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1)) goto event_1589_25_end;
        if (once_condition_1589_25) goto event_1589_25_end;
        once_condition_1589_25 = true;
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1 = false;
    
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-128);
        }
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_y());
        }
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(minibossgolem_1252_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1589_25_end: ;
}
void Frames::event_func_5480()
{
    // event 1590_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1)) goto event_1590_25_end;
        player_389_instances.clear_selection();
        cameratriggerboss_424_instances.clear_selection();
        if (!check_overlap(player_389_instances, cameratriggerboss_424_instances)) goto event_1590_25_end;
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1 = true;
        }
    }
    event_1590_25_end: ;
}
void Frames::event_func_5481()
{
    // event 1591_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1591_25_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto event_1591_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto event_1591_25_end;
        FrameObject * single_instance_1591_25_0; single_instance_1591_25_0 = pick_random(minibossgolempiece1_1250_instances);
        if (single_instance_1591_25_0 == NULL) goto event_1591_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        ((Active*)((Active*)single_instance_1591_25_0))->alterables->values.set(0, ((Active*)single_instance_1591_25_0)->get_y());
        ((Active*)((Active*)single_instance_1591_25_0))->alterables->values.set(1, ((Active*)single_instance_1591_25_0)->get_y()+128);
    }
    event_1591_25_end: ;
}
void Frames::event_func_5482()
{
    // event 1592_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1592_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto event_1592_25_end;
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(2, 0.2);
        }
    }
    event_1592_25_end: ;
}
void Frames::event_func_5483()
{
    // event 1594_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1594_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto event_1594_25_end;
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1594_25_end: ;
}
void Frames::event_func_5484()
{
    // event 1595_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1595_25_end;
        if (!((global_values->get(3)%math_helper%12) == (6))) goto event_1595_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto event_1595_25_end;
        FrameObject * single_instance_1595_25_0; single_instance_1595_25_0 = pick_random(minibossgolempiece2_1249_instances);
        if (single_instance_1595_25_0 == NULL) goto event_1595_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        ((Active*)((Active*)single_instance_1595_25_0))->alterables->values.set(0, ((Active*)single_instance_1595_25_0)->get_y());
        ((Active*)((Active*)single_instance_1595_25_0))->alterables->values.set(1, ((Active*)single_instance_1595_25_0)->get_y()+128);
    }
    event_1595_25_end: ;
}
void Frames::event_func_5485()
{
    // event 1596_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1596_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto event_1596_25_end;
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(2, 0.2);
        }
    }
    event_1596_25_end: ;
}
void Frames::event_func_5486()
{
    // event 1598_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1598_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto event_1598_25_end;
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1598_25_end: ;
}
void Frames::event_func_5487()
{
    // event 1599_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1599_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1599_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_y()+128);
        }
    }
    event_1599_25_end: ;
}
void Frames::event_func_5488()
{
    // event 1600_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1600_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(10)))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1600_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.add(11, 0.2);
        }
    }
    event_1600_25_end: ;
}
void Frames::event_func_5489()
{
    // event 1602_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1602_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(10)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1602_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(10));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1602_25_end: ;
}
void Frames::event_func_5490()
{
    // event 1603_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1603_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(10)))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1603_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1603_25_end: ;
}
void Frames::event_func_5491()
{
    // event 1604_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1604_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (10))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1604_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1604_25_end: ;
}
void Frames::event_func_5492()
{
    // event 1605_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1)) goto event_1605_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (40))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1605_25_end;
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1 = true;
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
        minibossgolempiece1_1250_instances.clear_selection();
        spread_value(minibossgolempiece1_1250_instances, 0, 1);
        minibossgolempiece2_1249_instances.clear_selection();
        spread_value(minibossgolempiece2_1249_instances, 0, 1);
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1605_25_end: ;
}
void Frames::event_func_5493()
{
    // event 1606_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto event_1606_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1606_25_end: ;
}
void Frames::event_func_5494()
{
    // event 1607_25
    bool or_result_1607_25 = false;
    bool or_temp_result_1607_25_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1607_25_0_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1607_25_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(minibossgolem_1252_instances, qualifier_7)) goto or_event_1607_25_0_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1607_25_0_end;
        or_result_1607_25 = true;
        or_temp_result_1607_25_0 = true;
    }
    or_event_1607_25_0_end: ;
    minibossgolem_1252_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1607_25_0) {
        minibossgolem_1252_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1607_25
    bool or_temp_result_1607_25_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1607_25_1_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto or_event_1607_25_1_end;
        or_result_1607_25 = true;
        or_temp_result_1607_25_1 = true;
        or_event_1607_25_1_end: ;
        if (or_temp_result_1607_25_1) {
            minibossgolem_1252_instances.save_selection();
        }
        if (!or_result_1607_25) goto or_final_or_event_1607_25_1_end;
        minibossgolem_1252_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1607_25_0 || or_temp_result_1607_25_1) {
            minibossgolem_1252_instances.restore_selection();
        }
        if (or_temp_result_1607_25_0) {
            qualifier_7.restore_selection();
        }
        enemyrock_657_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(minibossgolem_1252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + -12, parent->y + 0), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 12, parent->y + 0), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 0, parent->y + 0), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 0, parent->y + 12), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 0, parent->y + -12), parent->layer);
                enemyrock_657_instances.add_back();
            }
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(80);
            ((Active*)*it)->set_direction(pick_random(12, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15));
        }
        FrameObject * single_instance_1607_25_1; single_instance_1607_25_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgolem_1252_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1607_25_1 == NULL)
                    single_instance_1607_25_1 = new_obj;
            }
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1607_25_1))->move_back();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_1607_25_1_end: ;
}
void Frames::event_func_5495()
{
    // event 1608_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto event_1608_25_end;
        if (!((minibossgolem_1252_instances.size()) == (0))) goto event_1608_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(25, 1);
        }
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(25, 1);
        }
    }
    event_1608_25_end: ;
}
void Frames::event_func_5496()
{
    // event 1609_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto event_1609_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto event_1609_25_end;
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+get_max(((Active*)*it)->alterables->values.get(23)*2, 8), 0);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1609_25_end: ;
}
void Frames::event_func_5497()
{
    // event 1610_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto event_1610_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto event_1610_25_end;
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+get_max(((Active*)*it)->alterables->values.get(23)*2, 8), 0);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1610_25_end: ;
}
void Frames::event_func_5498()
{
    // event 1611_25
    bool or_result_1611_25 = false;
    bool or_temp_result_1611_25_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1611_25_0_end;
        minibossgolempiece1_1250_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(minibossgolempiece1_1250_instances, qualifier_7)) goto or_event_1611_25_0_end;
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto or_event_1611_25_0_end;
        or_result_1611_25 = true;
        or_temp_result_1611_25_0 = true;
    }
    or_event_1611_25_0_end: ;
    minibossgolempiece1_1250_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1611_25_0) {
        minibossgolempiece1_1250_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1611_25
    bool or_temp_result_1611_25_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1611_25_1_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto or_event_1611_25_1_end;
        or_result_1611_25 = true;
        or_temp_result_1611_25_1 = true;
        or_event_1611_25_1_end: ;
        if (or_temp_result_1611_25_1) {
            minibossgolempiece1_1250_instances.save_selection();
        }
        if (!or_result_1611_25) goto or_final_or_event_1611_25_1_end;
        qualifier_7.empty_selection();
        minibossgolempiece1_1250_instances.empty_selection();
        if (or_temp_result_1611_25_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1611_25_0 || or_temp_result_1611_25_1) {
            minibossgolempiece1_1250_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyrock_657_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(minibossgolempiece1_1250_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + -8, parent->y + -8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 8, parent->y + -8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 8, parent->y + 8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + -8, parent->y + 8), parent->layer);
                enemyrock_657_instances.add_back();
            }
        }
        FrameObject * single_instance_1611_25_1; single_instance_1611_25_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgolempiece1_1250_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_25_1 == NULL)
                    single_instance_1611_25_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(60);
            ((Active*)*it)->set_direction(pick_random(12, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15));
        }
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)((Active*)single_instance_1611_25_1))->move_back();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    or_final_or_event_1611_25_1_end: ;
}
void Frames::event_func_5499()
{
    // event 1612_25
    bool or_result_1612_25 = false;
    bool or_temp_result_1612_25_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1612_25_0_end;
        minibossgolempiece2_1249_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(minibossgolempiece2_1249_instances, qualifier_7)) goto or_event_1612_25_0_end;
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto or_event_1612_25_0_end;
        or_result_1612_25 = true;
        or_temp_result_1612_25_0 = true;
    }
    or_event_1612_25_0_end: ;
    minibossgolempiece2_1249_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1612_25_0) {
        minibossgolempiece2_1249_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1612_25
    bool or_temp_result_1612_25_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto or_event_1612_25_1_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto or_event_1612_25_1_end;
        or_result_1612_25 = true;
        or_temp_result_1612_25_1 = true;
        or_event_1612_25_1_end: ;
        if (or_temp_result_1612_25_1) {
            minibossgolempiece2_1249_instances.save_selection();
        }
        if (!or_result_1612_25) goto or_final_or_event_1612_25_1_end;
        qualifier_7.empty_selection();
        minibossgolempiece2_1249_instances.empty_selection();
        if (or_temp_result_1612_25_0 || or_temp_result_1612_25_1) {
            minibossgolempiece2_1249_instances.restore_selection();
        }
        if (or_temp_result_1612_25_0) {
            qualifier_7.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyrock_657_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(minibossgolempiece2_1249_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + -8, parent->y + -8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 8, parent->y + -8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + 8, parent->y + 8), parent->layer);
                enemyrock_657_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->x + -8, parent->y + 8), parent->layer);
                enemyrock_657_instances.add_back();
            }
        }
        FrameObject * single_instance_1612_25_1; single_instance_1612_25_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgolempiece2_1249_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1612_25_1 == NULL)
                    single_instance_1612_25_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(60);
            ((Active*)*it)->set_direction(pick_random(12, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15));
        }
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)((Active*)single_instance_1612_25_1))->move_back();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    or_final_or_event_1612_25_1_end: ;
}
void Frames::event_func_5500()
{
    // event 1613_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1)) goto event_1613_25_end;
        if (!((minibossgolempiece1_1250_instances.size()) == (0))) goto event_1613_25_end;
        if (!((minibossgolempiece2_1249_instances.size()) == (0))) goto event_1613_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(1))) goto event_1613_25_end;
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
            group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1 = false;
    
            group_main_engine_level_specific_methods_bosses_miniboss_golem_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
    }
    event_1613_25_end: ;
}
void Frames::event_func_5501()
{
    // event 1614_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1614_25_end;
        minibossgolempiece1_1250_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece1_1250_instances.has_selection()) goto event_1614_25_end;
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1614_25_end: ;
}
void Frames::event_func_5502()
{
    // event 1615_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1615_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!minibossgolempiece2_1249_instances.has_selection()) goto event_1615_25_end;
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1615_25_end: ;
}
void Frames::event_func_5503()
{
    // event 1616_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1616_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!minibossgolem_1252_instances.has_selection()) goto event_1616_25_end;
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1616_25_end: ;
}
void Frames::event_func_5504()
{
    // event 1617_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1617_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(1))) goto event_1617_25_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)) > (200))) goto event_1617_25_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1617_25_end: ;
}
void Frames::event_func_5505()
{
    // event 1618_25
    {
        if (!(group_main_engine_1)) goto event_1618_25_end;
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1618_25_end: ;
}
void Frames::event_func_5506()
{
    // event 1619_25
    {
        if (!(group_main_engine_1)) goto event_1619_25_end;
        minibossflame_1199_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, playercharactersensor_383_instances)) goto event_1619_25_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1619_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1619_25_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (8))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1619_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1619_25_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1619_25_end;
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
    event_1619_25_end: ;
}
void Frames::event_func_5507()
{
    // event 1621_25
    {
        if (!(group_main_engine_1)) goto event_1621_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1621_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1621_25_end: ;
}
void Frames::event_func_5508()
{
    // event 1622_25
    {
        if (!(group_main_engine_1)) goto event_1622_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1622_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.2, 12));
        }
    }
    event_1622_25_end: ;
}
void Frames::event_func_5509()
{
    // event 1623_25
    {
        if (!(group_main_engine_1)) goto event_1623_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1623_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -5);
        }
        media.play_id(SOUND_BUBBLEBOUNCE_2_72, -1, 1);
    }
    event_1623_25_end: ;
}
void Frames::event_func_5510()
{
    // event 1624_25
    {
        if (!(group_main_engine_1)) goto event_1624_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1624_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1624_25_end: ;
}
void Frames::event_func_5511()
{
    // event 1625_25
    {
        if (!(group_main_engine_1)) goto event_1625_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1625_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1625_25_end: ;
}
void Frames::event_func_5512()
{
    // event 1626_25
    {
        if (!(group_main_engine_1)) goto event_1626_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1626_25_end;
        if (!(test_obstacle(((Active*)get_single(badnikgolemshot_1197_instances, default_active_instance))->get_x()-10, ((Active*)get_single(badnikgolemshot_1197_instances, default_active_instance))->get_y()))) goto event_1626_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1626_25_end: ;
}
void Frames::event_func_5513()
{
    // event 1627_25
    {
        if (!(group_main_engine_1)) goto event_1627_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1627_25_end;
        if (!(test_obstacle(((Active*)get_single(badnikgolemshot_1197_instances, default_active_instance))->get_x()+10, ((Active*)get_single(badnikgolemshot_1197_instances, default_active_instance))->get_y()))) goto event_1627_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1627_25_end: ;
}
void Frames::event_func_5514()
{
    // event 1628_25
    {
        if (!(group_main_engine_1)) goto event_1628_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1628_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1628_25_end: ;
}
void Frames::event_func_5515()
{
    // event 1632_25
    {
        if (!(group_main_engine_1)) goto event_1632_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1632_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
            ((Active*)*it)->destroy();
        }
        badnikgolemshot2_1198_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
        FrameObject * single_instance_1632_25_1; single_instance_1632_25_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1632_25_1 == NULL)
                    single_instance_1632_25_1 = new_obj;
            }
        }
    }
    event_1632_25_end: ;
}
void Frames::event_func_5516()
{
    // event 1633_25
    {
        if (!(group_main_engine_1)) goto event_1633_25_end;
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot2_1198_instances.has_selection()) goto event_1633_25_end;
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1633_25_end: ;
}
void Frames::event_func_5517()
{
    // event 1634_25
    {
        if (!(group_main_engine_1)) goto event_1634_25_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-200))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1634_25_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1634_25_end: ;
}
void Frames::event_func_5518()
{
    // event 1636_25
    {
        if (!(group_main_engine_1)) goto event_1636_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (1540))) goto event_1636_25_end;
        if (not_always_1636_25 > loop_count) {
            not_always_1636_25 = loop_count + 2;
            goto event_1636_25_end;
        }
        not_always_1636_25 = loop_count + 2;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1636_25_end: ;
}
void Frames::event_func_5519()
{
    // event 1637_25
    {
        if (!(group_main_engine_1)) goto event_1637_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1540))) goto event_1637_25_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255-get_min((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-1540)*0.5, 255));
            ((Active*)*it)->set_x(get_max(frame_left(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), frame_right())));
            ((Active*)*it)->set_y(get_max(frame_top(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24), frame_bottom())));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1637_25_end: ;
}
void Frames::event_func_5520()
{
    // event 1645_25
    {
        if (!(group_main_engine_1)) goto event_1645_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1645_25_end: ;
}
void Frames::event_func_5521()
{
    // event 1646_25
    {
        if (!(group_main_engine_1)) goto event_1646_25_end;
        gimmickmovingfloor1_1253_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor1_1253_instances.has_selection()) goto event_1646_25_end;
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1646_25_end: ;
}
void Frames::event_func_5522()
{
    // event 1647_25
    {
        if (!(group_main_engine_1)) goto event_1647_25_end;
        gimmickmovingfloor1_1253_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor1_1253_instances.has_selection()) goto event_1647_25_end;
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1647_25_end: ;
}
void Frames::event_func_5523()
{
    // event 1648_25
    {
        if (!(group_main_engine_1)) goto event_1648_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor2_1254_instances.has_selection()) goto event_1648_25_end;
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1648_25_end: ;
}
void Frames::event_func_5524()
{
    // event 1649_25
    {
        if (!(group_main_engine_1)) goto event_1649_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor2_1254_instances.has_selection()) goto event_1649_25_end;
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1649_25_end: ;
}
void Frames::event_func_5525()
{
    // event 1650_25
    {
        if (!(group_main_engine_1)) goto event_1650_25_end;
        gimmickmovingfloor3_1255_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor3_1255_instances.has_selection()) goto event_1650_25_end;
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1650_25_end: ;
}
void Frames::event_func_5526()
{
    // event 1651_25
    {
        if (!(group_main_engine_1)) goto event_1651_25_end;
        gimmickmovingfloor3_1255_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor3_1255_instances.has_selection()) goto event_1651_25_end;
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1651_25_end: ;
}
void Frames::event_func_5527()
{
    // event 1652_25
    {
        if (!(group_main_engine_1)) goto event_1652_25_end;
        gimmickmovingfloor1_1253_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!gimmickmovingfloor1_1253_instances.has_selection()) goto event_1652_25_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1652_25_end: ;
}
void Frames::event_func_5528()
{
    // event 1653_25
    {
        if (!(group_main_engine_1)) goto event_1653_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1653_25_end;
        gimmickmovingfloor1_1253_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        gimmickmovingfloor2_1254_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        gimmickmovingfloor3_1255_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        media.play_id(SOUND_DRAG2_62, -1, 0);
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1653_25_end: ;
}
void Frames::event_func_5529()
{
    // event 1654_25
    {
        if (!(group_main_engine_1)) goto event_1654_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1654_25_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1654_25_end: ;
}
void Frames::event_func_5530()
{
    // event 1655_25
    {
        if (!(group_main_engine_1)) goto event_1655_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1655_25_end;
        if (not_always_1655_25 > loop_count) {
            not_always_1655_25 = loop_count + 2;
            goto event_1655_25_end;
        }
        not_always_1655_25 = loop_count + 2;
        media.stop_sample(SOUND_DRAG2_62);
    }
    event_1655_25_end: ;
}
void Frames::event_func_5531()
{
    // event 1656_25
    {
        if (!(group_main_engine_1)) goto event_1656_25_end;
        if (!(((Active*)get_instance(guicompass_1270_instances))->flags & VISIBLE)) goto event_1656_25_end;
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guicompass_1270_instances))->set_x(frame_left()+32-((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)*0.5);
        {
            ((Active*)get_instance(guicompass_1270_instances))->blend_color.set_semi_transparency(((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)*4);
        }
    }
    event_1656_25_end: ;
}
void Frames::event_func_5532()
{
    // event 1657_25
    {
        if (!(group_main_engine_1)) goto event_1657_25_end;
        if (!(((Active*)get_instance(guicompass_1270_instances))->flags & VISIBLE)) goto event_1657_25_end;
        if (!(((Active*)get_instance(guicompass_1270_instances))->alterables->flags.is_on(0))) goto event_1657_25_end;
        ((Active*)get_instance(guicompass_1270_instances))->set_y(frame_top()+64-((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)*0.5);
        ((Active*)get_instance(guicompass_1270_instances))->set_direction(1);
    }
    event_1657_25_end: ;
}
void Frames::event_func_5533()
{
    // event 1658_25
    bool or_result_1658_25 = false;
    bool or_temp_result_1658_25_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1658_25_0_end;
        guicompass_1270_instances.clear_selection();
        for (ObjectIterator it(guicompass_1270_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (40))) { it.deselect(); continue; }
        }
        if (!guicompass_1270_instances.has_selection()) goto or_event_1658_25_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) < (440))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) < (440))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1658_25_0_end;
        or_result_1658_25 = true;
        or_temp_result_1658_25_0 = true;
    }
    or_event_1658_25_0_end: ;
    guicompass_1270_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1658_25_0) {
        guicompass_1270_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1658_25
    bool or_temp_result_1658_25_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1658_25_1_end;
        guicompass_1270_instances.clear_selection();
        for (ObjectIterator it(guicompass_1270_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (40))) { it.deselect(); continue; }
        }
        if (!guicompass_1270_instances.has_selection()) goto or_event_1658_25_1_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, -12, 1288, 469, 1548)) > (0))) goto or_event_1658_25_1_end;
        or_result_1658_25 = true;
        or_temp_result_1658_25_1 = true;
        or_event_1658_25_1_end: ;
        player_389_instances.clear_saved_selection();
        if (or_temp_result_1658_25_1) {
            guicompass_1270_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1658_25) goto or_final_or_event_1658_25_1_end;
        player_389_instances.empty_selection();
        guicompass_1270_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1658_25_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1658_25_0 || or_temp_result_1658_25_1) {
            guicompass_1270_instances.restore_selection();
        }
        if (or_temp_result_1658_25_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(guicompass_1270_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_1658_25_1_end: ;
}
void Frames::event_func_5534()
{
    // event 1659_25
    {
        if (!(group_main_engine_1)) goto event_1659_25_end;
        if (!((((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)) >= (40))) goto event_1659_25_end;
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.sub(0, 40);
        ((Active*)get_instance(guicompass_1270_instances))->set_x(((Active*)get_instance(guicompass_1270_instances))->get_x()+40);
    }
    event_1659_25_end: ;
}
void Frames::event_func_5535()
{
    // event 1660_25
    {
        if (!(group_main_engine_1)) goto event_1660_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_1660_25_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 2915, 281, 3205, 585);
        if (once_condition_1660_25) goto event_1660_25_end;
        once_condition_1660_25 = true;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1660_25_end: ;
}
void Frames::event_func_5536()
{
    // event 1661_25
    {
        if (!(group_main_engine_1)) goto event_1661_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1661_25_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 3219, 327, 3266, 622);
        if (once_condition_1661_25) goto event_1661_25_end;
        once_condition_1661_25 = true;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1661_25_end: ;
}
void Frames::event_func_5537()
{
    // event 1662_25
    {
        if (!(group_main_engine_1)) goto event_1662_25_end;
        pushableblock1_531_instances.clear_selection();
        if (!((objects_in_zone(pushableblock1_531_instances, 2897, 835, 3166, 1044)) > (0))) goto event_1662_25_end;
        for (ObjectIterator it(pushableblock1_531_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!pushableblock1_531_instances.has_selection()) goto event_1662_25_end;
        FrameObject * single_instance_1662_25_0; single_instance_1662_25_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(pushableblock1_531_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -10, parent->y + -30), parent->layer);
                if (single_instance_1662_25_0 == NULL)
                    single_instance_1662_25_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1662_25_0))->force_frame(2);
        FrameObject * single_instance_1662_25_1; single_instance_1662_25_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(pushableblock1_531_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 3, parent->y + -18), parent->layer);
                if (single_instance_1662_25_1 == NULL)
                    single_instance_1662_25_1 = new_obj;
            }
        }
        for (ObjectIterator it(pushableblock1_531_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1662_25_end: ;
}
void Frames::event_func_5538()
{
    // event 1819_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1819_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1819_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1819_25_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_top()+152))) { it.deselect(); continue; }
        }
        if (!levelcardintro3_760_instances.has_selection()) goto event_1819_25_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1819_25_end: ;
}
void Frames::event_func_5539()
{
    // event 1820_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1820_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1820_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1820_25_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1820_25_end: ;
}
void Frames::event_func_5540()
{
    // event 1821_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1821_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1821_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1821_25_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (frame_top()+152))) { it.deselect(); continue; }
        }
        if (!levelcardintro3_760_instances.has_selection()) goto event_1821_25_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+152);
        }
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1821_25_end: ;
}
void Frames::event_func_5541()
{
    // event 1822_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1822_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1822_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1822_25_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (frame_top()+168))) { it.deselect(); continue; }
        }
        if (!levelcardintro2_761_instances.has_selection()) goto event_1822_25_end;
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+168);
        }
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_FLY_IN_135, -1, 1);
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1822_25_end: ;
}
void Frames::event_func_5542()
{
    // event 1823_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1823_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1823_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1823_25_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0)-90)*(250-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)-90)*(250-((Active*)*it)->alterables->values.get(0))*-1);
            ((Active*)*it)->alterables->values.add(0, 3);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-160, 0);
        }
        FrameObject * single_instance_1823_25_0; single_instance_1823_25_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelcardintro1_464_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1823_25_0 == NULL)
                    single_instance_1823_25_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1823_25_0))->set_scale(get_max((180-((Active*)get_single(levelcardintro1_464_instances, default_active_instance))->alterables->values.get(0))*0.02, 1));
    }
    event_1823_25_end: ;
}
void Frames::event_func_5543()
{
    // event 1824_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1824_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1824_25_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1824_25_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1824_25_0; single_instance_1824_25_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1824_25_0 == NULL)
                    single_instance_1824_25_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
    }
    event_1824_25_end: ;
}
void Frames::event_func_5544()
{
    // event 1825_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1825_25_end;
        if (!((levelcardintro1_464_instances.size()) == (0))) goto event_1825_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1825_25_end;
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
    event_1825_25_end: ;
}
void Frames::event_func_5545()
{
    // event 1826_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1826_25_end;
        if (!((levelcardintro1_464_instances.size()) == (0))) goto event_1826_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1826_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1826_25_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+2, 100));
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+2, 100));
        }
    }
    event_1826_25_end: ;
}
void Frames::event_func_5546()
{
    // event 1827_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1827_25_end;
        if (!((levelcardintro1_464_instances.size()) == (0))) goto event_1827_25_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-200))) { it.deselect(); continue; }
        }
        if (!levelcardintro3_760_instances.has_selection()) goto event_1827_25_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1827_25_end;
        if (!((global_values->get(4)) != (0))) goto event_1827_25_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
    }
    event_1827_25_end: ;
}
void Frames::event_func_5547()
{
    // event 1871_25
    {
        if (!(group_pause_1)) goto event_1871_25_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1871_25_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1871_25_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1871_25_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1871_25_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
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
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
            group_main_engine_1 = false;
    
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(gimmickhangingmovingbar_1173_instances))->stop_animation();
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireballturret1_1180_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturret1_1180_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickfireballturret2_1181_instances))->stop_animation();
        ((Active*)get_instance(gimmickhangingmovingbar2_736_instances))->stop_animation();
    }
    event_1871_25_end: ;
}
