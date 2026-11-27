#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4251()
{
    // event 1597_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1597_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1597_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(12, get_min(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12)+4, 100));
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+4, 100));
        }
    }
    event_1597_19_end: ;
}
void Frames::event_func_4252()
{
    // event 1598_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1598_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1598_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12)) >= (100))) goto event_1598_19_end;
        if (!(((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.is_off(2))) goto event_1598_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(13, 0);
    }
    event_1598_19_end: ;
}
void Frames::event_func_4253()
{
    // event 1599_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1599_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1599_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)) > (150))) goto event_1599_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(13)) == (0))) goto event_1599_19_end;
        media.play_id(SOUND_SLIME_RISE_254, -1, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.enable(3);
    }
    event_1599_19_end: ;
}
void Frames::event_func_4254()
{
    // event 1600_19
    bool or_result_1600_19 = false;
    bool or_temp_result_1600_19_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto or_event_1600_19_0_end;
        bosschompersnake_841_instances.clear_selection();
        for (ObjectIterator it(bosschompersnake_841_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (12))) { it.deselect(); continue; }
        }
        if (!bosschompersnake_841_instances.has_selection()) goto or_event_1600_19_0_end;
        or_result_1600_19 = true;
        or_temp_result_1600_19_0 = true;
    }
    or_event_1600_19_0_end: ;
    bosschompersnake_841_instances.clear_saved_selection();
    if (or_temp_result_1600_19_0) {
        bosschompersnake_841_instances.save_selection();
    }
    // event 1600_19
    bool or_temp_result_1600_19_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto or_event_1600_19_1_end;
        bosschompersnake_841_instances.clear_selection();
        for (ObjectIterator it(bosschompersnake_841_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (12))) { it.deselect(); continue; }
        }
        if (!bosschompersnake_841_instances.has_selection()) goto or_event_1600_19_1_end;
        or_result_1600_19 = true;
        or_temp_result_1600_19_1 = true;
        or_event_1600_19_1_end: ;
        if (or_temp_result_1600_19_1) {
            bosschompersnake_841_instances.save_selection();
        }
        if (!or_result_1600_19) goto or_final_or_event_1600_19_1_end;
        bosschompersnake_841_instances.empty_selection();
        if (or_temp_result_1600_19_0 || or_temp_result_1600_19_1) {
            bosschompersnake_841_instances.restore_selection();
        }
        FrameObject * single_instance_1600_19_0; single_instance_1600_19_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschompersnake_841_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacid_658(parent->x + 24, parent->y + 0), parent->layer);
                if (single_instance_1600_19_0 == NULL)
                    single_instance_1600_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1600_19_0))->set_y(((Active*)get_single(bosschompersnake_841_instances, default_active_instance))->alterables->values.get(4)+32);
        ((Active*)((Active*)single_instance_1600_19_0))->set_x(((Active*)single_instance_1600_19_0)->get_x()-randrange(50));
        ((Active*)((Active*)single_instance_1600_19_0))->alterables->values.set(0, (10+randrange(20))*-0.1);
        ((Active*)((Active*)single_instance_1600_19_0))->alterables->values.set(1, (-50-randrange(20))*0.1);
    }
    or_final_or_event_1600_19_1_end: ;
}
void Frames::event_func_4255()
{
    // event 1601_19
    bool or_result_1601_19 = false;
    bool or_temp_result_1601_19_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto or_event_1601_19_0_end;
        bosschompersnake_841_instances.clear_selection();
        for (ObjectIterator it(bosschompersnake_841_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (12))) { it.deselect(); continue; }
        }
        if (!bosschompersnake_841_instances.has_selection()) goto or_event_1601_19_0_end;
        or_result_1601_19 = true;
        or_temp_result_1601_19_0 = true;
    }
    or_event_1601_19_0_end: ;
    bosschompersnake_841_instances.clear_saved_selection();
    if (or_temp_result_1601_19_0) {
        bosschompersnake_841_instances.save_selection();
    }
    // event 1601_19
    bool or_temp_result_1601_19_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto or_event_1601_19_1_end;
        bosschompersnake_841_instances.clear_selection();
        for (ObjectIterator it(bosschompersnake_841_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (12))) { it.deselect(); continue; }
        }
        if (!bosschompersnake_841_instances.has_selection()) goto or_event_1601_19_1_end;
        or_result_1601_19 = true;
        or_temp_result_1601_19_1 = true;
        or_event_1601_19_1_end: ;
        if (or_temp_result_1601_19_1) {
            bosschompersnake_841_instances.save_selection();
        }
        if (!or_result_1601_19) goto or_final_or_event_1601_19_1_end;
        bosschompersnake_841_instances.empty_selection();
        if (or_temp_result_1601_19_0 || or_temp_result_1601_19_1) {
            bosschompersnake_841_instances.restore_selection();
        }
        FrameObject * single_instance_1601_19_0; single_instance_1601_19_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschompersnake_841_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacid_658(parent->x + 24, parent->y + 0), parent->layer);
                if (single_instance_1601_19_0 == NULL)
                    single_instance_1601_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1601_19_0))->set_y(((Active*)get_single(bosschompersnake_841_instances, default_active_instance))->alterables->values.get(4)+32);
        ((Active*)((Active*)single_instance_1601_19_0))->set_x(((Active*)single_instance_1601_19_0)->get_x()-randrange(50));
        ((Active*)((Active*)single_instance_1601_19_0))->alterables->values.set(0, (10+randrange(20))*0.1);
        ((Active*)((Active*)single_instance_1601_19_0))->alterables->values.set(1, (-50-randrange(20))*0.1);
        for (ObjectIterator it(bosschompersnake_841_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    or_final_or_event_1601_19_1_end: ;
}
void Frames::event_func_4256()
{
    // event 1602_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1602_19_end;
        minibossacid_658_instances.clear_selection();
        if (!check_not_overlap(minibossacid_658_instances, slimefloor_839_instances)) goto event_1602_19_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1602_19_end: ;
}
void Frames::event_func_4257()
{
    // event 1603_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1603_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1603_19_end;
        if (!(((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.is_on(2))) goto event_1603_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)) > (150))) goto event_1603_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()+5);
    }
    event_1603_19_end: ;
}
void Frames::event_func_4258()
{
    // event 1604_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1604_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (2))) goto event_1604_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)) <= (4))) goto event_1604_19_end;
        if (!(((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.is_on(2))) goto event_1604_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(12, 20);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->flags.disable(2);
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_SLIME_FALL_253, -1, 1);
    }
    event_1604_19_end: ;
}
void Frames::event_func_4259()
{
    // event 1605_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1605_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (3))) goto event_1605_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()+1);
    }
    event_1605_19_end: ;
}
void Frames::event_func_4260()
{
    // event 1606_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1606_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(3)) == (3))) goto event_1606_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)) > (150))) goto event_1606_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(3, 0);
    }
    event_1606_19_end: ;
}
void Frames::event_func_4261()
{
    // event 1607_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1607_19_end;
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (5))) { it.deselect(); continue; }
        }
        if (!bosschompersnakesegment_840_instances.has_selection()) goto event_1607_19_end;
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 20);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1607_19_end: ;
}
void Frames::event_func_4262()
{
    // event 1610_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1610_19_end;
        bossbubblebomb_838_instances.clear_selection();
        for (ObjectIterator it(bossbubblebomb_838_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, -8));
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.1, 1));
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1610_19_end: ;
}
void Frames::event_func_4263()
{
    // event 1611_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1611_19_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (120))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1611_19_end;
        FrameObject * single_instance_1611_19_0; single_instance_1611_19_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorbomb_563_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_19_0 == NULL)
                    single_instance_1611_19_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1611_19_0))->force_frame(((Active*)get_single(monitorbomb_563_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1611_19_0))->set_direction(((Active*)get_single(monitorbomb_563_instances, default_active_instance))->get_direction());
    }
    event_1611_19_end: ;
}
void Frames::event_func_4264()
{
    // event 1612_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1612_19_end;
        bossbubblebomb_838_instances.clear_selection();
        for (ObjectIterator it(bossbubblebomb_838_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (70))) { it.deselect(); continue; }
        }
        if (!bossbubblebomb_838_instances.has_selection()) goto event_1612_19_end;
        FrameObject * single_instance_1612_19_0; single_instance_1612_19_0 = pick_random(bossbubblebomb_838_instances);
        if (single_instance_1612_19_0 == NULL) goto event_1612_19_end;
        ((Active*)((Active*)single_instance_1612_19_0))->destroy();
        FrameObject * single_instance_1612_19_1; single_instance_1612_19_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)single_instance_1612_19_0)->x + -16, ((Active*)single_instance_1612_19_0)->y + -16), ((Active*)single_instance_1612_19_0)->layer);
            if (single_instance_1612_19_1 == NULL)
                single_instance_1612_19_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1612_19_1))->force_frame(9);
    }
    event_1612_19_end: ;
}
void Frames::event_func_4265()
{
    // event 1613_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1613_19_end;
        bossbubblebomb_838_instances.clear_selection();
        for (ObjectIterator it(bossbubblebomb_838_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
        }
        if (!bossbubblebomb_838_instances.has_selection()) goto event_1613_19_end;
        FrameObject * single_instance_1613_19_0; single_instance_1613_19_0 = pick_random(bossbubblebomb_838_instances);
        if (single_instance_1613_19_0 == NULL) goto event_1613_19_end;
        ((Active*)((Active*)single_instance_1613_19_0))->destroy();
        FrameObject * single_instance_1613_19_1; single_instance_1613_19_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbomb_563(((Active*)single_instance_1613_19_0)->x + -16, ((Active*)single_instance_1613_19_0)->y + -16), ((Active*)single_instance_1613_19_0)->layer);
            if (single_instance_1613_19_1 == NULL)
                single_instance_1613_19_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1613_19_1))->alterables->values.set(0, 1);
    }
    event_1613_19_end: ;
}
void Frames::event_func_4266()
{
    // event 1614_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1614_19_end;
        playerreflect_447_instances.clear_selection();
        bossbubblebomb_838_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossbubblebomb_838_instances)) goto event_1614_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1614_19_end;
        for (ObjectIterator it(bossbubblebomb_838_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1614_19_0; single_instance_1614_19_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossbubblebomb_838_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1614_19_0 == NULL)
                    single_instance_1614_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1614_19_0))->force_frame(9);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 3);
    }
    event_1614_19_end: ;
}
void Frames::event_func_4267()
{
    // event 1616_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1616_19_end;
        minibossacid_658_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, monitorbomb_563_instances)) goto event_1616_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1616_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_BOMBACTIVATE_172, -1, 1);
    }
    event_1616_19_end: ;
}
void Frames::event_func_4268()
{
    // event 1617_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1617_19_end;
        monitorbomb_563_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        if (!check_overlap(monitorbomb_563_instances, slimefloor_839_instances)) goto event_1617_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1617_19_end: ;
}
void Frames::event_func_4269()
{
    // event 1618_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1618_19_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-200))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1618_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1618_19_end: ;
}
void Frames::event_func_4270()
{
    // event 1619_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1619_19_end;
        monitorbomb_563_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        if (!check_overlap(monitorbomb_563_instances, slimeraft_843_instances)) goto event_1619_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1619_19_end: ;
}
void Frames::event_func_4271()
{
    // event 1620_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1620_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) <= (0))) goto event_1620_19_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(2)-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(3)-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1620_19_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(7, 150);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.sub(0, 10);
        ((Active*)get_instance(bosschompersnake_841_instances))->force_animation(7);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_1620_19_end: ;
}
void Frames::event_func_4272()
{
    // event 1621_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1621_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) <= (0))) goto event_1621_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(6)) == (1))) goto event_1621_19_end;
        if (!((((Active*)get_instance(bosschompersnakemouth_842_instances))->get_frame()) > (2))) goto event_1621_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_x()) > (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(2)-40))) goto event_1621_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_x()) < (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(2)))) goto event_1621_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_y()) < (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(3)))) goto event_1621_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_y()) > (((Active*)get_instance(bosschompersnake_841_instances))->get_box_index(1)+32))) goto event_1621_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1621_19_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(7, 150);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.sub(0, 5);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_animation(0);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_frame(9);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->restore_frame();
        ((Active*)get_instance(bosschompersnake_841_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_1621_19_end: ;
}
void Frames::event_func_4273()
{
    // event 1622_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1622_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) <= (0))) goto event_1622_19_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1622_19_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(7, 100);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.sub(0, 8);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_animation(0);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_frame(9);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->restore_frame();
        ((Active*)get_instance(bosschompersnake_841_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        media.stop_sample(SOUND_COMMON_STRIKE_23);
    }
    event_1622_19_end: ;
}
void Frames::event_func_4274()
{
    // event 1623_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1623_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) > (1))) goto event_1623_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.sub(7, 1);
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1623_19_end: ;
}
void Frames::event_func_4275()
{
    // event 1624_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1624_19_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1624_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) > (1))) goto event_1624_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->set_direction((((Active*)get_instance(bosschompersnake_841_instances))->get_direction()+1)%math_helper%2);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_direction(((Active*)get_instance(bosschompersnake_841_instances))->get_direction());
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(bosschompersnake_841_instances))->get_direction());
        }
    }
    event_1624_19_end: ;
}
void Frames::event_func_4276()
{
    // event 1625_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1)) goto event_1625_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(7)) == (1))) goto event_1625_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.sub(7, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->force_animation(0);
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_direction(0);
        ((Active*)get_instance(bosschompersnake_841_instances))->set_direction(0);
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1625_19_end: ;
}
void Frames::event_func_4277()
{
    // event 1626_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1626_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) <= (0))) goto event_1626_19_end;
        if (not_always_1626_19 > loop_count) {
            not_always_1626_19 = loop_count + 2;
            goto event_1626_19_end;
        }
        not_always_1626_19 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
            group_pause_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1) {
            group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1 = true;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1626_19_end: ;
}
void Frames::event_func_4278()
{
    // event 1627_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1627_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(14, 1);
    }
    event_1627_19_end: ;
}
void Frames::event_func_4279()
{
    // event 1628_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1628_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) <= (0))) goto event_1628_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) <= (40))) goto event_1628_19_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 2);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bosschompersnake_841_instances))->get_y()-40+randrange(81));
            ((Active*)*it)->force_speed(100);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1628_19_1_end;
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
        dynamic_1628_19_1_end: ;
    }
    event_1628_19_end: ;
}
void Frames::event_func_4280()
{
    // event 1629_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1629_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) <= (0))) goto event_1629_19_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1629_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (40))) goto event_1629_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) < (120))) goto event_1629_19_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 2);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bosschompersnake_841_instances))->get_y()-40+randrange(81));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1629_19_1_end;
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
        dynamic_1629_19_1_end: ;
    }
    event_1629_19_end: ;
}
void Frames::event_func_4281()
{
    // event 1630_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1630_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(0)) <= (0))) goto event_1630_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (40))) goto event_1630_19_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
    }
    event_1630_19_end: ;
}
void Frames::event_func_4282()
{
    // event 1631_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1631_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (40))) goto event_1631_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) < (160))) goto event_1631_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(12, get_max(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12)-1, 5));
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-1, 5));
        }
    }
    event_1631_19_end: ;
}
void Frames::event_func_4283()
{
    // event 1632_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1632_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (160))) goto event_1632_19_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->set_visible(false);
    }
    event_1632_19_end: ;
}
void Frames::event_func_4284()
{
    // event 1633_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1633_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (160))) goto event_1633_19_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1633_19_end: ;
}
void Frames::event_func_4285()
{
    // event 1634_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1634_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (160))) goto event_1634_19_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1634_19_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1634_19_end: ;
}
void Frames::event_func_4286()
{
    // event 1635_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1635_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (210))) goto event_1635_19_end;
        media.play_id(SOUND_SLIME_RISE_254, -1, 1);
    }
    event_1635_19_end: ;
}
void Frames::event_func_4287()
{
    // event 1636_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1636_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (210))) goto event_1636_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) < (230))) goto event_1636_19_end;
        FrameObject * single_instance_1636_19_0; single_instance_1636_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_19_0 == NULL)
                    single_instance_1636_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1636_19_0))->alterables->values.set(5, 99);
        ((Active*)((Active*)single_instance_1636_19_0))->alterables->values.set(1, -3-randrange(4));
        ((Active*)((Active*)single_instance_1636_19_0))->alterables->values.set(0, -4+randrange(9));
    }
    event_1636_19_end: ;
}
void Frames::event_func_4288()
{
    // event 1637_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1)) goto event_1637_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) > (340))) goto event_1637_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1637_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1637_19_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, slimefloor_839_instances)) goto event_1637_19_end;
        if (not_always_1637_19 > loop_count) {
            not_always_1637_19 = loop_count + 2;
            goto event_1637_19_end;
        }
        not_always_1637_19 = loop_count + 2;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
            group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
    }
    event_1637_19_end: ;
}
void Frames::event_func_4289()
{
    // event 1638_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1638_19_end;
        scrollingbrick_845_instances.clear_selection();
        for (ObjectIterator it(scrollingbrick_845_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)-((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->move_front();
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+4)%math_helper%128);
        }
        slimefloor_839_instances.clear_selection();
        for (ObjectIterator it(slimefloor_839_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+4)%math_helper%128);
            ((Active*)*it)->move_front();
        }
    }
    event_1638_19_end: ;
}
void Frames::event_func_4290()
{
    // event 1639_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1)) goto event_1639_19_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1639_19_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1639_19_end: ;
}
void Frames::event_func_4291()
{
    // event 1640_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1640_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->set_y(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5))*((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12));
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->set_angle(sin_deg(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)-45)*((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12)*0.25, 0);
        {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            if (parent == NULL) goto pos_end_1640_19_0;
            ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1640_19_0: ;
        }
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_angle(sin_deg(((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(5)-45)*((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(12)*0.25, 0);
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosschompersnake_841_instances))->get_x()-((Active*)*it)->alterables->values.get(0)*56);
        }
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2000);
        }
    }
    event_1640_19_end: ;
}
void Frames::event_func_4292()
{
    // event 1641_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1641_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1641_19_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosschompersnake_841_instances));
            if (parent == NULL) goto pos_end_1641_19_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -32, parent->get_y() + 6);
            pos_end_1641_19_0: ;
        }
    }
    event_1641_19_end: ;
}
void Frames::event_func_4293()
{
    // event 1642_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1642_19_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1642_19_end;
        if (not_always_1642_19 > loop_count) {
            not_always_1642_19 = loop_count + 2;
            goto event_1642_19_end;
        }
        not_always_1642_19 = loop_count + 2;
        {
            ((Active*)get_instance(bosschompersnake_841_instances))->set_shader(Render::INVERT);
        }
        {
            ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_shader(Render::INVERT);
        }
    }
    event_1642_19_end: ;
}
void Frames::event_func_4294()
{
    // event 1643_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1643_19_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1643_19_end;
        if (not_always_1643_19 > loop_count) {
            not_always_1643_19 = loop_count + 2;
            goto event_1643_19_end;
        }
        not_always_1643_19 = loop_count + 2;
        {
            ((Active*)get_instance(bosschompersnake_841_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosschompersnakemouth_842_instances))->set_shader(NULL);
        }
    }
    event_1643_19_end: ;
}
void Frames::event_func_4295()
{
    // event 1644_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1644_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(6)) == (0))) goto event_1644_19_end;
        if (not_always_1644_19 > loop_count) {
            not_always_1644_19 = loop_count + 2;
            goto event_1644_19_end;
        }
        not_always_1644_19 = loop_count + 2;
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_animation(0);
    }
    event_1644_19_end: ;
}
void Frames::event_func_4296()
{
    // event 1645_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1645_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(6)) == (1))) goto event_1645_19_end;
        if (not_always_1645_19 > loop_count) {
            not_always_1645_19 = loop_count + 2;
            goto event_1645_19_end;
        }
        not_always_1645_19 = loop_count + 2;
        ((Active*)get_instance(bosschompersnakemouth_842_instances))->force_animation(10);
    }
    event_1645_19_end: ;
}
void Frames::event_func_4297()
{
    // event 1654_19
    {
        if (!(group_main_engine_1)) goto event_1654_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1654_19_end;
        if (once_condition_1654_19) goto event_1654_19_end;
        once_condition_1654_19 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 45)) == (0))) goto event_1654_19_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (300000))) goto event_1654_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 45);
    }
    event_1654_19_end: ;
}
void Frames::event_func_4298()
{
    // event 1655_19
    {
        if (!(group_main_engine_1)) goto event_1655_19_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1655_19_end;
        if (once_condition_1655_19) goto event_1655_19_end;
        once_condition_1655_19 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 25)) == (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 21)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 22)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 23)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 24)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 25)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 26)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 27)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 28)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 29)) > (0))) goto event_1655_19_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 30)) > (0))) goto event_1655_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 25);
    }
    event_1655_19_end: ;
}
void Frames::event_func_4299()
{
    // event 1656_19
    {
        if (!(group_main_engine_1)) goto event_1656_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1656_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1656_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1656_19_end: ;
}
void Frames::event_func_4300()
{
    // event 1657_19
    {
        if (!(group_main_engine_1)) goto event_1657_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1657_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1657_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1657_19_end: ;
}
void Frames::event_func_4301()
{
    // event 1658_19
    {
        if (!(group_main_engine_1)) goto event_1658_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1658_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1658_19_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1658_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1658_19_end: ;
}
void Frames::event_func_4302()
{
    // event 1659_19
    {
        if (!(group_main_engine_1)) goto event_1659_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1659_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1659_19_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1659_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1659_19_end: ;
}
void Frames::event_func_4303()
{
    // event 1660_19
    {
        if (!(group_main_engine_1)) goto event_1660_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1660_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1660_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1660_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1660_19_end: ;
}
void Frames::event_func_4304()
{
    // event 1661_19
    {
        if (!(group_main_engine_1)) goto event_1661_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1661_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1661_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1661_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1661_19_end: ;
}
void Frames::event_func_4305()
{
    // event 1662_19
    {
        if (!(group_main_engine_1)) goto event_1662_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1662_19_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1662_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1662_19_end: ;
}
void Frames::event_func_4306()
{
    // event 1663_19
    {
        if (!(group_main_engine_1)) goto event_1663_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1663_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1663_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1663_19_end: ;
}
void Frames::event_func_4307()
{
    // event 1664_19
    {
        if (!(group_main_engine_1)) goto event_1664_19_end;
        if (!((((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.get(14)) == (1))) goto event_1664_19_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1664_19_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_1664_19_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1664_19_end: ;
}
void Frames::event_func_4308()
{
    // event 1827_19
    {
        if (!(group_main_engine_1)) goto event_1827_19_end;
        ((Active*)get_instance(bubblepatch_806_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(bubblepatch_806_instances))->alterables->values.add(1, 1);
    }
    event_1827_19_end: ;
}
void Frames::event_func_4309()
{
    // event 1828_19
    {
        if (!(group_main_engine_1)) goto event_1828_19_end;
        if (!((((Active*)get_instance(bubblepatch_806_instances))->alterables->values.get(0)) > (15))) goto event_1828_19_end;
        ((Active*)get_instance(bubblepatch_806_instances))->alterables->values.set(0, 0);
        FrameObject * single_instance_1828_19_0; single_instance_1828_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bubblepatch_806_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1828_19_0 == NULL)
                    single_instance_1828_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1828_19_0))->set_x(((Active*)single_instance_1828_19_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1828_19_0))->alterables->values.set(3, (-10-randrange(11))*0.1);
    }
    event_1828_19_end: ;
}
void Frames::event_func_4310()
{
    // event 1829_19
    {
        if (!(group_main_engine_1)) goto event_1829_19_end;
        if (!((((Active*)get_instance(bubblepatch_806_instances))->alterables->values.get(1)) > (50))) goto event_1829_19_end;
        ((Active*)get_instance(bubblepatch_806_instances))->alterables->values.set(1, 0);
        FrameObject * single_instance_1829_19_0; single_instance_1829_19_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bubblepatch_806_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1829_19_0 == NULL)
                    single_instance_1829_19_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1829_19_0))->set_x(((Active*)single_instance_1829_19_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1829_19_0))->alterables->values.set(3, (-10-randrange(11))*0.1);
        ((Active*)((Active*)single_instance_1829_19_0))->alterables->values.set(4, 1+randrange(3));
    }
    event_1829_19_end: ;
}
void Frames::event_func_4311()
{
    // event 1831_19
    {
        if (!(group_main_engine_1)) goto event_1831_19_end;
        if (!(((Active*)get_instance(bubblepatch_806_instances))->test_animation(7))) goto event_1831_19_end;
        bubblepatch_806_instances.clear_selection();
        if (!check_not_overlap(bubblepatch_806_instances, playercharactersensor_383_instances)) goto event_1831_19_end;
        ((Active*)get_instance(bubblepatch_806_instances))->force_animation(8);
    }
    event_1831_19_end: ;
}
void Frames::event_func_4312()
{
    // event 1895_19
    {
        if (!(group_pause_1)) goto event_1895_19_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1895_19_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1895_19_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1895_19_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1895_19_end;
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
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(waterjetright_673_instances))->stop_animation();
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1895_19_end: ;
}
void Frames::event_func_4313()
{
    // event 1896_19
    bool or_result_1896_19 = false;
    bool or_temp_result_1896_19_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1896_19_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1896_19_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1896_19_0_end;
        or_result_1896_19 = true;
        or_temp_result_1896_19_0 = true;
    }
    or_event_1896_19_0_end: ;
    // event 1896_19
    bool or_temp_result_1896_19_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1896_19_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1896_19_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1896_19_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1896_19_1_end;
        or_result_1896_19 = true;
        or_temp_result_1896_19_1 = true;
        or_event_1896_19_1_end: ;
        if (!or_result_1896_19) goto or_final_or_event_1896_19_1_end;
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
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(waterjetright_673_instances))->start_animation();
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1896_19_1_end: ;
}
void Frames::event_func_4314()
{
    // event 1910_19
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_1910_19_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1910_19_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.add(2, 1);
    }
    event_1910_19_end: ;
}
void Frames::event_func_4315()
{
    // event 1911_19
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_1911_19_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_1911_19_end;
        if (not_always_1911_19 > loop_count) {
            not_always_1911_19 = loop_count + 2;
            goto event_1911_19_end;
        }
        not_always_1911_19 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
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
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
    }
    event_1911_19_end: ;
}
void Frames::event_func_4316()
{
    // event 1912_19
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_1912_19_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_1912_19_end;
        if (not_always_1912_19 > loop_count) {
            not_always_1912_19 = loop_count + 2;
            goto event_1912_19_end;
        }
        not_always_1912_19 = loop_count + 2;
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
    }
    event_1912_19_end: ;
}
void Frames::handle_frame_20_events()
{
    test_collisions_19();
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
    event_func_3807();
    event_func_4036();
    event_func_4203();
    event_func_4205();
    event_func_4117();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_1746();
    event_func_1747();
    event_func_1748();
    event_func_1749();
    event_func_1750();
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
    event_func_1761();
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
    event_func_1777();
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
    event_func_1909();
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
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
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
    event_func_2423();
    event_func_2424();
    event_func_2425();
    event_func_2426();
    event_func_2427();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_3743();
    event_func_3744();
    event_func_3745();
    event_func_3746();
    event_func_3747();
    event_func_3748();
    event_func_3749();
    event_func_3750();
    event_func_3751();
    event_func_3752();
    event_func_3753();
    event_func_3754();
    event_func_3755();
    event_func_3756();
    event_func_4189();
    event_func_3758();
    event_func_3759();
    event_func_3760();
    event_func_3761();
    event_func_3763();
    event_func_3764();
    event_func_3765();
    event_func_4190();
    event_func_4191();
    event_func_4192();
    event_func_4193();
    event_func_4194();
    event_func_4195();
    event_func_4196();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_3774();
    event_func_3775();
    event_func_3776();
    event_func_3777();
    event_func_3778();
    event_func_3779();
    event_func_3780();
    event_func_3781();
    event_func_3782();
    event_func_3783();
    event_func_3784();
    event_func_3785();
    event_func_3786();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    event_func_3791();
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_4031();
    event_func_4032();
    event_func_4033();
    event_func_4034();
    event_func_4035();
    event_func_4037();
    event_func_4038();
    event_func_4039();
    event_func_4040();
    event_func_4041();
    event_func_4042();
    event_func_4043();
    event_func_4044();
    event_func_4045();
    event_func_4046();
    event_func_4047();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_4200();
    event_func_4201();
    event_func_4202();
    event_func_4204();
    event_func_4206();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4212();
    event_func_4213();
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4224();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_4225();
    event_func_4226();
    event_func_4227();
    event_func_4228();
    event_func_4229();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_3809();
    event_func_4230();
    event_func_4231();
    event_func_4232();
    event_func_3813();
    event_func_3814();
    event_func_3815();
    event_func_3816();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_4233();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_4234();
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_4235();
    event_func_4236();
    event_func_4237();
    if (!group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1) goto group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1_end;
    event_func_4238();
    event_func_4239();
    event_func_4240();
    event_func_4241();
    if (!group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1) goto group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1_end;
    event_func_4242();
    event_func_4243();
    event_func_4244();
    event_func_4245();
    event_func_4246();
    event_func_4247();
    event_func_4248();
    event_func_4249();
    event_func_4250();
    event_func_4251();
    event_func_4252();
    event_func_4253();
    event_func_4254();
    event_func_4255();
    event_func_4256();
    event_func_4257();
    event_func_4258();
    event_func_4259();
    event_func_4260();
    event_func_4261();
    event_func_4262();
    event_func_4263();
    event_func_4264();
    event_func_4265();
    event_func_4266();
    event_func_4267();
    event_func_4268();
    event_func_4269();
    event_func_4270();
    event_func_4271();
    event_func_4272();
    event_func_4273();
    event_func_4274();
    event_func_4275();
    event_func_4276();
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1_end: ;
    event_func_4277();
    if (!group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1) goto group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1_end;
    event_func_4278();
    event_func_4279();
    event_func_4280();
    event_func_4281();
    event_func_4282();
    event_func_4283();
    event_func_4284();
    event_func_4285();
    event_func_4286();
    event_func_4287();
    event_func_4288();
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1_end: ;
    event_func_4289();
    event_func_4290();
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1_end: ;
    event_func_4291();
    event_func_4292();
    event_func_4293();
    event_func_4294();
    event_func_4295();
    event_func_4296();
    event_func_4113();
    event_func_4114();
    event_func_4115();
    event_func_4116();
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_4297();
    event_func_4298();
    event_func_4299();
    event_func_4300();
    event_func_4301();
    event_func_4302();
    event_func_4303();
    event_func_4304();
    event_func_4305();
    event_func_4306();
    event_func_4307();
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
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
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
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
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
    event_func_4130();
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
    event_func_4174();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_4312();
    event_func_4313();
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
    event_func_4314();
    event_func_4315();
    event_func_4316();
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
void Frames::handle_frame_20_pre_events()
{
}
void Frames::event_func_4317()
{
    // event 2_19
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 0);
#endif
    }
    event_2_19_end: ;
}
void Frames::event_func_4318()
{
    // event 6_19
    {
        if (!(group_main_engine_1)) goto event_6_19_end;
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_x(((Active*)get_instance(levelcardactclear1_847_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_x(((Active*)get_instance(levelcardactclear2_848_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_x(((Active*)get_instance(levelcardactclear3_849_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_x(((Active*)get_instance(levelcardactclear4_846_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_x(((Counter*)get_instance(levelcardbonus1_850_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_x(((Counter*)get_instance(levelcardbonus2_851_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_x(((Counter*)get_instance(levelcardbonus3_852_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(totalbonus_853_instances))->set_x(((Counter*)get_instance(totalbonus_853_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_x(((Counter*)get_instance(totalcrystals_854_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_6_19_end: ;
}
void Frames::event_func_4319()
{
    // event 7_19
    {
        if (!(group_main_engine_1)) goto event_7_19_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1480);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 28);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 11);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_7_19_end: ;
}
void Frames::event_func_4320()
{
    // event 24_19
    {
        if (!(group_main_engine_1)) goto event_24_19_end;
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 1);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.3);
    }
    event_24_19_end: ;
}
void Frames::event_func_4321()
{
    // event 1438_19
    {
        if (!(group_main_engine_1)) goto event_1438_19_end;
        slimefloor_839_instances.clear_selection();
        for (ObjectIterator it(slimefloor_839_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->layer->index+1);
        }
    }
    event_1438_19_end: ;
}
void Frames::event_func_4322()
{
    // event 1539_19
    {
        if (!(group_main_engine_1)) goto event_1539_19_end;
        ((Active*)get_instance(waterjetright_673_instances))->alterables->values.set(0, ((Active*)get_instance(waterjetright_673_instances))->get_x());
    }
    event_1539_19_end: ;
}
void Frames::event_func_4323()
{
    // event 1572_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1572_19_end;
        if (!((global_values->get(4)) >= (0))) goto event_1572_19_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1572_19_end: ;
}
void Frames::event_func_4324()
{
    // event 1579_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1579_19_end;
        bosschompersnakesegment_840_instances.clear_selection();
        spread_value(bosschompersnakesegment_840_instances, 0, 1);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(4, ((Active*)get_instance(bosschompersnake_841_instances))->get_y());
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(0)*40);
        }
        scrollingbrick_845_instances.clear_selection();
        for (ObjectIterator it(scrollingbrick_845_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(10, ((Active*)get_instance(bosschompersnake_841_instances))->get_x());
    }
    event_1579_19_end: ;
}
void Frames::event_func_4325()
{
    // event 1580_19
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1580_19_end;
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.add(5, 120);
        bosschompersnakesegment_840_instances.clear_selection();
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 120);
        }
        ((Active*)get_instance(bosschompersnake_841_instances))->alterables->values.set(12, 100);
        for (ObjectIterator it(bosschompersnakesegment_840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 100);
        }
    }
    event_1580_19_end: ;
}
void Frames::on_frame_20_start_events()
{
    event_func_3979();
    event_func_4317();
    event_func_4133();
    event_func_4318();
    event_func_4319();
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
    event_func_3267();
    event_func_4320();
    event_func_4179();
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
    event_func_3271();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_4321();
    event_func_4322();
    event_func_2686();
    event_func_4323();
    event_func_4324();
    event_func_4325();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_4143();
    event_func_4144();
    event_func_4145();
    event_func_4146();
    event_func_4147();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_20_init()
{
    index = 19;
    width = 7168;
    height = 2400;
    virtual_width = 7168;
    virtual_height = 2400;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &aquabrickplatform_744_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &levelaxelplatform3_844_instances, NULL};
    qualifier_8.set(14, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &aquabrickplatform_744_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &levelaxelplatform3_844_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyslime_741_instances, &enemyfirefly_742_instances, &enemygansekijr_816_instances, &minibosschomperhitbox_818_instances, NULL};
    qualifier_20.set(4, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece8_762_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece10_765_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &breakableaquabrick_743_instances, &collapsingplatform_745_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &slimefloor_839_instances, &slimeraft_843_instances, NULL};
    qualifier_7.set(30, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemygansekijr_816_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &levelaxelplatform3_844_instances, NULL};
    qualifier_12.set(5, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &levelaxelplatform3_844_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece6_834(0, 0), 0);
    add_background_object(create_levelparallaxpiece9_835(0, 104), 0);
    add_background_object(create_levelparallaxpiece8_826(0, 0), 0);
    add_background_object(create_levelparallaxpiece7_827(0, 0), 0);
    add_background_object(create_levelparallaxpiece10_836(0, -240), 0);
    add_background_object(create_aquabrickback2_770(0, 1216), 1);
    add_background_object(create_aquabrickback2_770(128, 1216), 1);
    add_background_object(create_aquabrickback2_770(256, 1216), 1);
    add_background_object(create_aquabrickback2_770(384, 1216), 1);
    add_background_object(create_aquabrickback2_770(0, 1344), 1);
    add_background_object(create_aquabrickback2_770(128, 1344), 1);
    add_background_object(create_aquabrickback2_770(256, 1344), 1);
    add_background_object(create_aquabrickback2_770(384, 1344), 1);
    add_background_object(create_aquabrickback2_770(0, 1472), 1);
    add_background_object(create_aquabrickback2_770(128, 1472), 1);
    add_background_object(create_aquabrickback2_770(256, 1472), 1);
    add_background_object(create_aquabrickback2_770(384, 1472), 1);
    add_background_object(create_aquabrickback2_770(512, 1216), 1);
    add_background_object(create_aquabrickback2_770(640, 1216), 1);
    add_background_object(create_aquabrickback2_770(768, 1216), 1);
    add_background_object(create_aquabrickback2_770(896, 1216), 1);
    add_background_object(create_aquabrickback2_770(512, 1344), 1);
    add_background_object(create_aquabrickback2_770(640, 1344), 1);
    add_background_object(create_aquabrickback2_770(768, 1344), 1);
    add_background_object(create_aquabrickback2_770(896, 1344), 1);
    add_background_object(create_aquabrickback2_770(512, 1472), 1);
    add_background_object(create_aquabrickback2_770(640, 1472), 1);
    add_background_object(create_aquabrickback2_770(768, 1472), 1);
    add_background_object(create_aquabrickback2_770(896, 1472), 1);
    add_background_object(create_aquabrickback2_770(1024, 1216), 1);
    add_background_object(create_aquabrickback2_770(1152, 1216), 1);
    add_background_object(create_aquabrickback2_770(1024, 1344), 1);
    add_background_object(create_aquabrickback2_770(1152, 1344), 1);
    add_background_object(create_aquabrickback2_770(1024, 1472), 1);
    add_background_object(create_aquabrickback2_770(1152, 1472), 1);
    add_background_object(create_aquabrickback2_770(1280, 1216), 1);
    add_background_object(create_aquabrickback2_770(1408, 1216), 1);
    add_background_object(create_aquabrickback2_770(1280, 1344), 1);
    add_background_object(create_aquabrickback2_770(1408, 1344), 1);
    add_background_object(create_aquabrickback2_770(1280, 1472), 1);
    add_background_object(create_aquabrickback2_770(1408, 1472), 1);
    add_background_object(create_aquabrickback2_770(1536, 1216), 1);
    add_background_object(create_aquabrickback2_770(1536, 1344), 1);
    add_background_object(create_aquabrickback2_770(1536, 1472), 1);
    add_background_object(create_aquabrickback2_770(384, 1600), 1);
    add_background_object(create_aquabrickback2_770(512, 1600), 1);
    add_background_object(create_aquabrickback2_770(640, 1600), 1);
    add_background_object(create_aquabrickback2_770(768, 1600), 1);
    add_background_object(create_aquabrickback2_770(896, 1600), 1);
    add_background_object(create_aquabrickback2_770(1024, 1600), 1);
    add_background_object(create_aquabrickback2_770(1152, 1600), 1);
    add_background_object(create_aquabrickback2_770(384, 1728), 1);
    add_background_object(create_aquabrickback2_770(512, 1728), 1);
    add_background_object(create_aquabrickback2_770(640, 1728), 1);
    add_background_object(create_aquabrickback2_770(768, 1728), 1);
    add_background_object(create_aquabrickback2_770(896, 1728), 1);
    add_background_object(create_aquabrickback2_770(1024, 1728), 1);
    add_background_object(create_aquabrickback2_770(1152, 1728), 1);
    add_background_object(create_aquabrickback2_770(1280, 1600), 1);
    add_background_object(create_aquabrickback2_770(1408, 1600), 1);
    add_background_object(create_aquabrickback2_770(1280, 1728), 1);
    add_background_object(create_aquabrickback2_770(1408, 1728), 1);
    add_background_object(create_aquabrickback2_770(1536, 1600), 1);
    add_background_object(create_aquabrickback2_770(1536, 1728), 1);
    add_background_object(create_aquabrickback2_770(0, 1600), 1);
    add_background_object(create_aquabrickback2_770(128, 1600), 1);
    add_background_object(create_aquabrickback2_770(256, 1600), 1);
    add_background_object(create_aquabrickback2_770(0, 1728), 1);
    add_background_object(create_aquabrickback2_770(128, 1728), 1);
    add_background_object(create_aquabrickback2_770(256, 1728), 1);
    add_background_object(create_aquabrickback2_770(384, 1856), 1);
    add_background_object(create_aquabrickback2_770(512, 1856), 1);
    add_background_object(create_aquabrickback2_770(640, 1856), 1);
    add_background_object(create_aquabrickback2_770(768, 1856), 1);
    add_background_object(create_aquabrickback2_770(896, 1856), 1);
    add_background_object(create_aquabrickback2_770(1024, 1856), 1);
    add_background_object(create_aquabrickback2_770(1152, 1856), 1);
    add_background_object(create_aquabrickback2_770(1280, 1856), 1);
    add_background_object(create_aquabrickback2_770(1408, 1856), 1);
    add_background_object(create_aquabrickback2_770(1536, 1856), 1);
    add_background_object(create_aquabrickback2_770(0, 1856), 1);
    add_background_object(create_aquabrickback2_770(128, 1856), 1);
    add_background_object(create_aquabrickback2_770(256, 1856), 1);
    add_background_object(create_atwaterfaucet3_681(2224, 944), 2);
    add_background_object(create_atwaterfaucet3_681(2224, 880), 2);
    add_background_object(create_aquabrick3_691(4352, 304), 2);
    add_background_object(create_aquabrick3_691(4480, 304), 2);
    add_background_object(create_aquabrick3_691(4608, 304), 2);
    add_background_object(create_aquabrick3_691(4736, 304), 2);
    add_background_object(create_aquabrick3_691(6272, 304), 2);
    add_background_object(create_aquabrick3_691(6400, 304), 2);
    add_background_object(create_aquabrick3_691(6528, 304), 2);
    add_background_object(create_aquabrick3_691(6656, 304), 2);
    add_background_object(create_aquabrick3_691(6784, 304), 2);
    add_background_object(create_aquabrick3_691(6912, 304), 2);
    add_background_object(create_atsewerpipe1_671(1528, 576), 2);
    add_background_object(create_atsewerpipe1_671(1400, 576), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectfuel_528(-284, 132), 2);
    add_object(create_objectjumppad_530(-384, 288), 2);
    add_object(create_waterjetright_673(-512, 1592), 2);
    add_object(create_slimefloor_839(2176, 944), 2);
    add_object(create_slimefloor_839(2432, 944), 2);
    add_object(create_slimefloor_839(2560, 944), 2);
    add_object(create_slimefloor_839(2688, 944), 2);
    add_object(create_slimefloor_839(2304, 944), 2);
    add_object(create_slimefloor_839(4224, 272), 2);
    add_object(create_slimefloor_839(4480, 272), 2);
    add_object(create_slimefloor_839(4352, 272), 2);
    add_object(create_slimefloor_839(4608, 272), 2);
    add_object(create_slimefloor_839(2176, 1440), 2);
    add_object(create_slimefloor_839(2432, 1440), 2);
    add_object(create_slimefloor_839(2560, 1440), 2);
    add_object(create_slimefloor_839(2688, 1440), 2);
    add_object(create_slimefloor_839(2304, 1440), 2);
    add_object(create_slimefloor_839(6208, 272), 2);
    add_object(create_slimefloor_839(6336, 272), 2);
    add_object(create_slimefloor_839(6464, 272), 2);
    add_object(create_slimefloor_839(6592, 272), 2);
    add_object(create_slimefloor_839(6720, 272), 2);
    add_object(create_slimefloor_839(6848, 272), 2);
    add_object(create_slimefloor_839(6976, 272), 2);
    add_object(create_slimefloor_839(7104, 272), 2);
    add_object(create_bosschompersnakesegment_840(6255, 248), 2);
    add_object(create_objectpetal_302(4273, 129), 2);
    add_object(create_bosschompersnakesegment_840(6311, 264), 2);
    add_object(create_objectpetal_302(4345, 113), 2);
    add_object(create_bosschompersnakesegment_840(6367, 272), 2);
    add_object(create_objectpetal_302(4425, 105), 2);
    add_object(create_bosschompersnakesegment_840(6423, 272), 2);
    add_object(create_objectpetal_302(4497, 121), 2);
    add_object(create_bosschompersnakesegment_840(6479, 264), 2);
    add_object(create_objectpetal_302(4561, 161), 2);
    add_object(create_bosschompersnake_841(6532, 260), 2);
    add_object(create_bosschompersnakemouth_842(6527, 296), 2);
    add_object(create_slimefloor_839(6080, 272), 2);
    add_object(create_slimefloor_839(5952, 272), 2);
    add_object(create_slimefloor_839(5824, 272), 2);
    add_object(create_slimefloor_839(5696, 272), 2);
    add_object(create_slimefloor_839(5568, 272), 2);
    add_object(create_slimefloor_839(5440, 272), 2);
    add_object(create_slimefloor_839(5312, 272), 2);
    add_object(create_slimefloor_839(5184, 272), 2);
    add_object(create_slimefloor_839(5056, 272), 2);
    add_object(create_slimefloor_839(4928, 272), 2);
    add_object(create_slimefloor_839(4800, 272), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_aquabrick3_691(1536, 560), 3);
    add_background_object(create_aquabrick1_676(1280, 720), 3);
    add_background_object(create_aquabrick2_706(1600, 704), 3);
    add_background_object(create_atsewerpipe9_668(1280, 1936), 3);
    add_background_object(create_atsewerpipe9_668(1408, 1936), 3);
    add_background_object(create_aquabrick5_682(1152, 1888), 3);
    add_background_object(create_atsewerpipe6_672(1264, 2128), 3);
    add_background_object(create_atsewerpipe1_671(1408, 2096), 3);
    add_background_object(create_atsewerpipe1_671(1280, 2096), 3);
    add_background_object(create_atsewerpipe1_671(768, 1968), 3);
    add_background_object(create_atsewerpipe1_671(896, 1968), 3);
    add_background_object(create_atsewerpipe8_680(1040, 1616), 3);
    add_background_object(create_atsewerpipe8_680(1040, 1744), 3);
    add_background_object(create_sewerpipe12_795(656, 1792), 3);
    add_background_object(create_aquabrick3_691(3200, 1312), 3);
    add_background_object(create_aquabrick3_691(3328, 1072), 3);
    add_background_object(create_aquabrick3_691(3200, 1072), 3);
    add_background_object(create_aquabrick1_676(2816, 912), 3);
    add_background_object(create_aquabrickarch3_705(2624, 1232), 3);
    add_background_object(create_aquabrickarch1_669(2752, 1360), 3);
    add_background_object(create_aquabrickarch1_669(2032, 912), 3);
    add_background_object(create_aquabrickarch2_690(2032, 720), 3);
    add_background_object(create_aquabrick5_682(4672, 304), 3);
    add_background_object(create_aquabrick5_682(4096, 272), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 512), 3);
    add_background_object(create_aquabrick1_676(3648, 400), 3);
    add_background_object(create_aquabrick1_676(3648, 368), 3);
    add_background_object(create_aquabrick2_706(2272, 448), 3);
    add_background_object(create_aquabrick21_683(2688, 944), 3);
    add_background_object(create_aquabrick1_676(2688, 944), 3);
    add_background_object(create_aquabrick1_676(2752, 944), 3);
    add_background_object(create_aquabrick5_682(2048, 944), 3);
    add_background_object(create_aquabrick21_683(1984, 944), 3);
    add_background_object(create_aquabrick4_707(1656, 560), 3);
    add_background_object(create_atsewerpipe1_671(1472, 1056), 3);
    add_background_object(create_atcolumn_704(1776, 1376), 3);
    add_background_object(create_atsewerpipe9_668(912, 1456), 3);
    add_background_object(create_atsewerpipe11_679(1040, 1456), 3);
    add_background_object(create_atsewerpipe1_671(1344, 1056), 3);
    add_background_object(create_atsewerpipe1_671(1216, 1056), 3);
    add_background_object(create_aquabrickarch1_669(752, 1392), 3);
    add_background_object(create_aquabrickarch3_705(624, 1072), 3);
    add_background_object(create_atsewerpipe9_668(416, 1184), 3);
    add_background_object(create_atsewerpipe11_679(544, 1184), 3);
    add_background_object(create_atsewerpipe9_668(288, 1184), 3);
    add_background_object(create_atsewerpipe8_680(544, 1344), 3);
    add_background_object(create_sewerpipe12_795(400, 896), 3);
    add_background_object(create_sewerpipe13_796(1136, 528), 3);
    add_background_object(create_aquabrickarch2_690(880, 1296), 3);
    add_background_object(create_aquabrickarch1_669(880, 1424), 3);
    add_background_object(create_aquabrickarch1_669(880, 1488), 3);
    add_background_object(create_aquabrickarch1_669(880, 1552), 3);
    add_background_object(create_aquabrick10_677(1184, 1632), 3);
    add_background_object(create_aquabrick3_691(1280, 1600), 3);
    add_background_object(create_atsewerpipe6_672(1024, 928), 3);
    add_background_object(create_atsewerpipe1_671(896, 896), 3);
    add_background_object(create_atsewerpipe1_671(768, 896), 3);
    add_background_object(create_atsewerpipe1_671(640, 896), 3);
    add_background_object(create_aquabrick21_683(384, 368), 3);
    add_background_object(create_aquabrick5_682(128, 368), 3);
    add_background_object(create_aquabrick5_682(512, 368), 3);
    add_background_object(create_aquabrick21_683(1152, 368), 3);
    add_background_object(create_atladder_708(-152, 968), 3);
    add_background_object(create_aquabrick1_676(-544, 856), 3);
    add_background_object(create_aquabrick10_677(-512, 824), 3);
    add_background_object(create_aquabrick11_688(-480, 856), 3);
    add_background_object(create_aquabrick13_712(-544, 968), 3);
    add_background_object(create_aquabrick14_693(-544, 984), 3);
    add_background_object(create_aquabrick15_685(-544, 1048), 3);
    add_background_object(create_aquabrick16_684(-472, 1048), 3);
    add_background_object(create_aquabrick17_713(-592, 1080), 3);
    add_background_object(create_aquabrick18_715(-592, 1080), 3);
    add_background_object(create_aquabrick19_714(1088, 840), 3);
    add_background_object(create_aquabrick20_716(1088, 840), 3);
    add_background_object(create_aquabrick2_706(-528, 1088), 3);
    add_background_object(create_aquabrick21_683(-592, 1280), 3);
    add_background_object(create_aquabrick22_726(-592, 1408), 3);
    add_background_object(create_aquabrick23_727(-464, 1408), 3);
    add_background_object(create_aquabrick3_691(-464, 1280), 3);
    add_background_object(create_aquabrick4_707(-472, 984), 3);
    add_background_object(create_aquabrick5_682(-336, 1280), 3);
    add_background_object(create_aquabrick6_709(-464, 968), 3);
    add_background_object(create_aquabrick7_728(-608, 1392), 3);
    add_background_object(create_aquabrick8_729(-464, 1392), 3);
    add_background_object(create_aquabrick9_721(-464, 1088), 3);
    add_background_object(create_aquabrickarch1_669(-224, 1536), 3);
    add_background_object(create_aquabrickarch2_690(-224, 1408), 3);
    add_background_object(create_aquabrickarch3_705(-400, 1408), 3);
    add_background_object(create_aquadirt_689(-544, 896), 3);
    add_background_object(create_aquadirt2_692(-544, 888), 3);
    add_background_object(create_aquadirt3_703(-480, 888), 3);
    add_background_object(create_aquadirt4_699(-352, 880), 3);
    add_background_object(create_aquadirt5_695(-224, 880), 3);
    add_background_object(create_aquadirt6_678(-544, 912), 3);
    add_background_object(create_aquaplant1_670(-544, 824), 3);
    add_background_object(create_aquaplant2_694(-416, 824), 3);
    add_background_object(create_lightray1_659(-376, 944), 3);
    add_background_object(create_lightray2_666(-392, 976), 3);
    add_background_object(create_aquabrick34_790(-376, 1624), 3);
    add_background_object(create_aquabrickback2_770(-304, 944), 3);
    add_background_object(create_atsewerpipe1_671(128, 496), 3);
    add_background_object(create_aquabrick2_706(128, 624), 3);
    add_background_object(create_aquabrick2_706(192, 624), 3);
    add_background_object(create_aquabrick1_676(128, 640), 3);
    add_background_object(create_aquabrick1_676(192, 640), 3);
    add_background_object(create_aquabrick3_691(128, 672), 3);
    add_background_object(create_atsewerpipe1_671(256, 496), 3);
    add_background_object(create_aquabrick2_706(256, 624), 3);
    add_background_object(create_aquabrick2_706(320, 624), 3);
    add_background_object(create_aquabrick1_676(256, 640), 3);
    add_background_object(create_aquabrick1_676(320, 640), 3);
    add_background_object(create_aquabrick3_691(256, 672), 3);
    add_background_object(create_atsewerpipe1_671(384, 496), 3);
    add_background_object(create_aquabrick2_706(384, 624), 3);
    add_background_object(create_aquabrick2_706(448, 624), 3);
    add_background_object(create_aquabrick1_676(384, 640), 3);
    add_background_object(create_aquabrick1_676(448, 640), 3);
    add_background_object(create_aquabrick3_691(384, 672), 3);
    add_background_object(create_aquabrick1_676(128, 496), 3);
    add_background_object(create_aquabrick1_676(192, 496), 3);
    add_background_object(create_aquabrick3_691(128, 400), 3);
    add_background_object(create_aquabrick3_691(256, 432), 3);
    add_background_object(create_aquabrick1_676(384, 496), 3);
    add_background_object(create_aquabrick1_676(448, 496), 3);
    add_background_object(create_aquabrick3_691(384, 400), 3);
    add_background_object(create_aquabrick3_691(128, 368), 3);
    add_background_object(create_aquabrick3_691(256, 368), 3);
    add_background_object(create_aquabrick3_691(384, 368), 3);
    add_background_object(create_aquabrick3_691(128, 736), 3);
    add_background_object(create_aquabrick3_691(256, 736), 3);
    add_background_object(create_aquabrick3_691(384, 736), 3);
    add_background_object(create_aquabrick3_691(128, 800), 3);
    add_background_object(create_aquabrick3_691(256, 800), 3);
    add_background_object(create_aquabrick3_691(384, 800), 3);
    add_background_object(create_aquabrick3_691(128, 304), 3);
    add_background_object(create_aquabrick3_691(256, 304), 3);
    add_background_object(create_aquabrick3_691(384, 304), 3);
    add_background_object(create_atsewerpipe1_671(512, 496), 3);
    add_background_object(create_aquabrick2_706(512, 624), 3);
    add_background_object(create_aquabrick2_706(576, 624), 3);
    add_background_object(create_aquabrick1_676(512, 640), 3);
    add_background_object(create_aquabrick1_676(576, 640), 3);
    add_background_object(create_aquabrick3_691(512, 672), 3);
    add_background_object(create_aquabrick1_676(512, 496), 3);
    add_background_object(create_aquabrick1_676(576, 496), 3);
    add_background_object(create_aquabrick3_691(512, 400), 3);
    add_background_object(create_aquabrick3_691(512, 368), 3);
    add_background_object(create_aquabrick3_691(512, 736), 3);
    add_background_object(create_aquabrick3_691(512, 800), 3);
    add_background_object(create_aquabrick3_691(512, 304), 3);
    add_background_object(create_atsewerpipe1_671(640, 496), 3);
    add_background_object(create_aquabrick2_706(640, 624), 3);
    add_background_object(create_aquabrick2_706(704, 624), 3);
    add_background_object(create_aquabrick1_676(640, 640), 3);
    add_background_object(create_aquabrick1_676(704, 640), 3);
    add_background_object(create_aquabrick3_691(640, 672), 3);
    add_background_object(create_atsewerpipe1_671(768, 496), 3);
    add_background_object(create_aquabrick2_706(768, 624), 3);
    add_background_object(create_aquabrick2_706(832, 624), 3);
    add_background_object(create_aquabrick1_676(768, 640), 3);
    add_background_object(create_aquabrick1_676(832, 640), 3);
    add_background_object(create_aquabrick3_691(768, 672), 3);
    add_background_object(create_aquabrick3_691(640, 432), 3);
    add_background_object(create_aquabrick3_691(768, 432), 3);
    add_background_object(create_aquabrick3_691(640, 368), 3);
    add_background_object(create_aquabrick3_691(768, 368), 3);
    add_background_object(create_aquabrick3_691(640, 736), 3);
    add_background_object(create_aquabrick3_691(768, 736), 3);
    add_background_object(create_aquabrick3_691(640, 800), 3);
    add_background_object(create_aquabrick3_691(768, 800), 3);
    add_background_object(create_aquabrick3_691(640, 304), 3);
    add_background_object(create_aquabrick3_691(768, 304), 3);
    add_background_object(create_atsewerpipe1_671(896, 496), 3);
    add_background_object(create_aquabrick2_706(896, 624), 3);
    add_background_object(create_aquabrick2_706(960, 624), 3);
    add_background_object(create_aquabrick1_676(896, 640), 3);
    add_background_object(create_aquabrick1_676(960, 640), 3);
    add_background_object(create_aquabrick3_691(896, 672), 3);
    add_background_object(create_aquabrick3_691(896, 432), 3);
    add_background_object(create_aquabrick3_691(896, 368), 3);
    add_background_object(create_aquabrick3_691(896, 736), 3);
    add_background_object(create_aquabrick3_691(896, 800), 3);
    add_background_object(create_aquabrick3_691(896, 304), 3);
    add_background_object(create_atsewerpipe1_671(1024, 496), 3);
    add_background_object(create_aquabrick2_706(1024, 624), 3);
    add_background_object(create_aquabrick2_706(1088, 624), 3);
    add_background_object(create_aquabrick1_676(1024, 640), 3);
    add_background_object(create_aquabrick1_676(1088, 640), 3);
    add_background_object(create_aquabrick3_691(1024, 432), 3);
    add_background_object(create_aquabrick3_691(1024, 368), 3);
    add_background_object(create_aquabrick3_691(1024, 304), 3);
    add_background_object(create_aquabrick1_676(1152, 496), 3);
    add_background_object(create_aquabrick1_676(1216, 496), 3);
    add_background_object(create_aquabrick3_691(1152, 400), 3);
    add_background_object(create_aquabrick3_691(1152, 368), 3);
    add_background_object(create_aquabrick3_691(1152, 304), 3);
    add_background_object(create_aquabrick1_676(1088, 464), 3);
    add_background_object(create_aquabrick1_676(1024, 464), 3);
    add_background_object(create_aquabrick1_676(960, 464), 3);
    add_background_object(create_aquabrick1_676(896, 464), 3);
    add_background_object(create_aquabrick1_676(832, 464), 3);
    add_background_object(create_aquabrick1_676(768, 464), 3);
    add_background_object(create_aquabrick1_676(704, 464), 3);
    add_background_object(create_aquabrick1_676(640, 464), 3);
    add_background_object(create_aquabrick16_684(632, 496), 3);
    add_background_object(create_aquabrick15_685(1136, 496), 3);
    add_background_object(create_aquabrick1_676(320, 464), 3);
    add_background_object(create_aquabrick1_676(256, 464), 3);
    add_background_object(create_aquabrick16_684(248, 496), 3);
    add_background_object(create_aquabrick15_685(368, 496), 3);
    add_background_object(create_atsewerpipe1_671(0, 496), 3);
    add_background_object(create_aquabrick2_706(0, 624), 3);
    add_background_object(create_aquabrick2_706(64, 624), 3);
    add_background_object(create_aquabrick1_676(0, 640), 3);
    add_background_object(create_aquabrick1_676(64, 640), 3);
    add_background_object(create_aquabrick3_691(0, 672), 3);
    add_background_object(create_aquabrick1_676(0, 496), 3);
    add_background_object(create_aquabrick1_676(64, 496), 3);
    add_background_object(create_aquabrick3_691(0, 432), 3);
    add_background_object(create_aquabrick3_691(0, 368), 3);
    add_background_object(create_aquabrick3_691(0, 736), 3);
    add_background_object(create_aquabrick3_691(0, 800), 3);
    add_background_object(create_aquabrick3_691(0, 304), 3);
    add_background_object(create_aquabrick21_683(1280, 496), 3);
    add_background_object(create_aquabrick3_691(1280, 368), 3);
    add_background_object(create_aquabrick3_691(1280, 304), 3);
    add_background_object(create_aquabrick3_691(1280, 432), 3);
    add_background_object(create_aquabrick6_709(1152, 624), 3);
    add_background_object(create_aquabrick5_682(1024, 672), 3);
    add_background_object(create_aquabrick4_707(1144, 640), 3);
    add_background_object(create_aquabrick4_707(1144, 704), 3);
    add_background_object(create_aquabrick14_693(1264, 528), 3);
    add_background_object(create_aquabrick21_683(1280, 752), 3);
    add_background_object(create_aquabrick14_693(1264, 720), 3);
    add_background_object(create_aquabrick31_789(1024, 800), 3);
    add_background_object(create_aquabrick4_707(1144, 752), 3);
    add_background_object(create_aquabrick14_693(1264, 784), 3);
    add_background_object(create_aquabrick21_683(1280, 880), 3);
    add_background_object(create_aquabrick21_683(1280, 944), 3);
    add_background_object(create_aquabrick1_676(1088, 1040), 3);
    add_background_object(create_aquabrick1_676(1152, 1040), 3);
    add_background_object(create_aquabrick1_676(1216, 1040), 3);
    add_background_object(create_aquabrick1_676(896, 1040), 3);
    add_background_object(create_aquabrick1_676(960, 1040), 3);
    add_background_object(create_aquabrick1_676(1024, 1040), 3);
    add_background_object(create_aquabrick2_706(896, 1024), 3);
    add_background_object(create_aquabrick2_706(960, 1024), 3);
    add_background_object(create_aquabrick2_706(1024, 1024), 3);
    add_background_object(create_aquabrick1_676(896, 864), 3);
    add_background_object(create_aquabrick1_676(960, 864), 3);
    add_background_object(create_aquabrick1_676(1024, 864), 3);
    add_background_object(create_aquabrick15_685(1008, 912), 3);
    add_background_object(create_aquabrick33_792(1024, 800), 3);
    add_background_object(create_aquabrick15_685(1008, 896), 3);
    add_background_object(create_aquabrick1_676(768, 864), 3);
    add_background_object(create_aquabrick1_676(832, 864), 3);
    add_background_object(create_aquabrick1_676(768, 1040), 3);
    add_background_object(create_aquabrick1_676(832, 1040), 3);
    add_background_object(create_aquabrick2_706(768, 1024), 3);
    add_background_object(create_aquabrick2_706(832, 1024), 3);
    add_background_object(create_aquabrick1_676(640, 864), 3);
    add_background_object(create_aquabrick1_676(704, 864), 3);
    add_background_object(create_aquabrick1_676(640, 1040), 3);
    add_background_object(create_aquabrick1_676(704, 1040), 3);
    add_background_object(create_aquabrick2_706(640, 1024), 3);
    add_background_object(create_aquabrick2_706(704, 1024), 3);
    add_background_object(create_aquabrick3_691(1408, 304), 3);
    add_background_object(create_aquabrick3_691(1408, 368), 3);
    add_background_object(create_aquabrick3_691(1408, 432), 3);
    add_background_object(create_aquabrick3_691(1408, 496), 3);
    add_background_object(create_aquabrick3_691(1408, 560), 3);
    add_background_object(create_aquabrick3_691(1408, 752), 3);
    add_background_object(create_aquabrick3_691(1408, 816), 3);
    add_background_object(create_aquabrick3_691(1408, 880), 3);
    add_background_object(create_aquabrick3_691(1408, 944), 3);
    add_background_object(create_aquabrick3_691(1408, 1008), 3);
    add_background_object(create_aquabrick1_676(512, 864), 3);
    add_background_object(create_aquabrick1_676(576, 864), 3);
    add_background_object(create_aquabrick1_676(384, 864), 3);
    add_background_object(create_aquabrick1_676(448, 864), 3);
    add_background_object(create_atsewerpipe6_672(1152, 528), 3);
    add_background_object(create_atsewerpipe6_672(1152, 560), 3);
    add_background_object(create_atsewerpipe6_672(1152, 592), 3);
    add_background_object(create_atsewerpipe6_672(1024, 992), 3);
    add_background_object(create_atsewerpipe6_672(1024, 960), 3);
    add_background_object(create_aquabrick3_691(128, 864), 3);
    add_background_object(create_aquabrick3_691(128, 928), 3);
    add_background_object(create_aquabrick3_691(128, 992), 3);
    add_background_object(create_aquabrick3_691(0, 864), 3);
    add_background_object(create_aquabrick3_691(0, 928), 3);
    add_background_object(create_aquabrick3_691(0, 992), 3);
    add_background_object(create_aquabrick3_691(128, 1056), 3);
    add_background_object(create_aquabrick3_691(128, 1120), 3);
    add_background_object(create_aquabrick3_691(128, 1184), 3);
    add_background_object(create_aquabrick3_691(0, 1056), 3);
    add_background_object(create_aquabrick3_691(0, 1120), 3);
    add_background_object(create_aquabrick3_691(0, 1184), 3);
    add_background_object(create_aquabrick5_682(256, 864), 3);
    add_background_object(create_aquabrick5_682(256, 992), 3);
    add_background_object(create_aquabrick5_682(256, 1120), 3);
    add_background_object(create_aquabrick4_707(376, 896), 3);
    add_background_object(create_aquabrick4_707(376, 960), 3);
    add_background_object(create_aquabrick4_707(376, 1024), 3);
    add_background_object(create_aquabrick4_707(376, 1088), 3);
    add_background_object(create_aquabrick4_707(376, 1152), 3);
    add_background_object(create_aquabrick9_721(384, 1216), 3);
    add_background_object(create_aquabrick5_682(224, 1232), 3);
    add_background_object(create_aquabrick3_691(128, 1312), 3);
    add_background_object(create_aquabrick3_691(128, 1376), 3);
    add_background_object(create_aquabrick3_691(0, 1312), 3);
    add_background_object(create_aquabrick3_691(0, 1376), 3);
    add_background_object(create_aquabrick5_682(224, 1360), 3);
    add_background_object(create_aquabrick5_682(256, 1440), 3);
    add_background_object(create_aquabrick3_691(128, 1440), 3);
    add_background_object(create_aquabrick3_691(128, 1504), 3);
    add_background_object(create_aquabrick3_691(0, 1440), 3);
    add_background_object(create_aquabrick3_691(0, 1504), 3);
    add_background_object(create_aquabrick13_712(624, 1024), 3);
    add_background_object(create_aquabrick4_707(344, 1360), 3);
    add_background_object(create_aquabrick2_706(352, 1424), 3);
    add_background_object(create_aquabrick1_676(384, 1440), 3);
    add_background_object(create_aquabrick2_706(384, 1424), 3);
    add_background_object(create_aquabrick3_691(128, 1248), 3);
    add_background_object(create_aquabrick3_691(0, 1248), 3);
    add_background_object(create_aquabrick4_707(344, 1296), 3);
    add_background_object(create_aquabrick3_691(256, 1504), 3);
    add_background_object(create_aquabrick3_691(384, 1472), 3);
    add_background_object(create_aquabrick3_691(320, 1472), 3);
    add_background_object(create_aquabrick3_691(384, 1536), 3);
    add_background_object(create_aquabrick3_691(256, 1568), 3);
    add_background_object(create_aquabrick3_691(128, 1568), 3);
    add_background_object(create_aquabrick3_691(0, 1568), 3);
    add_background_object(create_aquabrick1_676(448, 1440), 3);
    add_background_object(create_aquabrick2_706(448, 1424), 3);
    add_background_object(create_aquabrick1_676(512, 1440), 3);
    add_background_object(create_aquabrick2_706(512, 1424), 3);
    add_background_object(create_aquabrick3_691(512, 1472), 3);
    add_background_object(create_aquabrick3_691(512, 1536), 3);
    add_background_object(create_aquabrick1_676(576, 1440), 3);
    add_background_object(create_aquabrick2_706(576, 1424), 3);
    add_background_object(create_aquabrick3_691(384, 1600), 3);
    add_background_object(create_aquabrick3_691(512, 1600), 3);
    add_background_object(create_aquabrick3_691(256, 1632), 3);
    add_background_object(create_aquabrick3_691(128, 1632), 3);
    add_background_object(create_aquabrick3_691(0, 1632), 3);
    add_background_object(create_aquabrick3_691(384, 1664), 3);
    add_background_object(create_aquabrick3_691(512, 1664), 3);
    add_background_object(create_aquabrick1_676(640, 1440), 3);
    add_background_object(create_aquabrick2_706(640, 1424), 3);
    add_background_object(create_aquabrick3_691(640, 1472), 3);
    add_background_object(create_aquabrick3_691(640, 1536), 3);
    add_background_object(create_aquabrick1_676(704, 1440), 3);
    add_background_object(create_aquabrick2_706(704, 1424), 3);
    add_background_object(create_aquabrick1_676(768, 1440), 3);
    add_background_object(create_aquabrick2_706(768, 1424), 3);
    add_background_object(create_aquabrick1_676(832, 1440), 3);
    add_background_object(create_aquabrick2_706(832, 1424), 3);
    add_background_object(create_aquabrick3_691(640, 1600), 3);
    add_background_object(create_aquabrick3_691(768, 1664), 3);
    add_background_object(create_aquabrick3_691(640, 1664), 3);
    add_background_object(create_aquabrick3_691(768, 1728), 3);
    add_background_object(create_atsewerpipe6_672(624, 896), 3);
    add_background_object(create_atsewerpipe6_672(624, 928), 3);
    add_background_object(create_atsewerpipe6_672(624, 960), 3);
    add_background_object(create_atsewerpipe6_672(624, 992), 3);
    add_background_object(create_aquabrick1_676(640, 1072), 3);
    add_background_object(create_aquabrick1_676(640, 1104), 3);
    add_background_object(create_aquabrick1_676(640, 1136), 3);
    add_background_object(create_aquabrick1_676(704, 1136), 3);
    add_background_object(create_aquabrick14_693(624, 1040), 3);
    add_background_object(create_aquabrick4_707(696, 1072), 3);
    add_background_object(create_aquabrick2_706(704, 1120), 3);
    add_background_object(create_aquabrick14_693(624, 1104), 3);
    add_background_object(create_aquabrick15_685(624, 1136), 3);
    add_background_object(create_aquabrick6_709(768, 1120), 3);
    add_background_object(create_aquabrick16_684(760, 1136), 3);
    add_background_object(create_aquabrick5_682(768, 1472), 3);
    add_background_object(create_aquabrick1_676(896, 1632), 3);
    add_background_object(create_aquabrick1_676(960, 1632), 3);
    add_background_object(create_aquabrick1_676(1024, 1888), 3);
    add_background_object(create_aquabrick1_676(1088, 1888), 3);
    add_background_object(create_aquabrick6_709(896, 1424), 3);
    add_background_object(create_aquabrick4_707(888, 1440), 3);
    add_background_object(create_aquabrick4_707(888, 1504), 3);
    add_background_object(create_aquabrick2_706(960, 1616), 3);
    add_background_object(create_aquabrick2_706(1024, 1872), 3);
    add_background_object(create_aquabrick3_691(384, 1728), 3);
    add_background_object(create_aquabrick3_691(512, 1728), 3);
    add_background_object(create_aquabrick3_691(640, 1728), 3);
    add_background_object(create_aquabrick3_691(256, 1696), 3);
    add_background_object(create_aquabrick5_682(768, 1536), 3);
    add_background_object(create_aquabrick4_707(888, 1568), 3);
    add_background_object(create_aquabrickslope3_710(1152, 1584), 3);
    add_background_object(create_aquabrickslope4_711(1280, 1552), 3);
    add_background_object(create_aquabrick3_691(1280, 1664), 3);
    add_background_object(create_aquabrick3_691(1280, 1728), 3);
    add_background_object(create_aquabrick1_676(1408, 1568), 3);
    add_background_object(create_aquabrick1_676(1472, 1568), 3);
    add_background_object(create_aquabrick3_691(1408, 1600), 3);
    add_background_object(create_aquabrick3_691(1408, 1664), 3);
    add_background_object(create_aquabrick2_706(1408, 1552), 3);
    add_background_object(create_aquabrick3_691(1408, 1728), 3);
    add_background_object(create_aquabrick1_676(1472, 1200), 3);
    add_background_object(create_aquabrick1_676(1408, 1200), 3);
    add_background_object(create_aquabrick1_676(1088, 1200), 3);
    add_background_object(create_aquabrick1_676(1472, 1232), 3);
    add_background_object(create_aquabrick1_676(1088, 1232), 3);
    add_background_object(create_aquabrick2_706(1472, 1184), 3);
    add_background_object(create_aquabrick2_706(1408, 1184), 3);
    add_background_object(create_aquabrick2_706(1088, 1184), 3);
    add_background_object(create_aquabrick13_712(1072, 1184), 3);
    add_background_object(create_aquabrick14_693(1072, 1200), 3);
    add_background_object(create_aquabrick1_676(1088, 1264), 3);
    add_background_object(create_aquabrick1_676(1152, 1264), 3);
    add_background_object(create_aquabrick1_676(960, 1264), 3);
    add_background_object(create_aquabrick1_676(896, 1264), 3);
    add_background_object(create_aquabrick2_706(960, 1248), 3);
    add_background_object(create_aquabrick2_706(896, 1248), 3);
    add_background_object(create_aquabrick13_712(880, 1248), 3);
    add_background_object(create_aquabrick15_685(880, 1264), 3);
    add_background_object(create_aquabrick1_676(1216, 1264), 3);
    add_background_object(create_aquabrick1_676(1280, 1264), 3);
    add_background_object(create_aquabrick1_676(1344, 1264), 3);
    add_background_object(create_aquabrick1_676(1024, 1264), 3);
    add_background_object(create_aquabrick2_706(1024, 1248), 3);
    add_background_object(create_aquabrick1_676(1408, 1264), 3);
    add_background_object(create_aquabrick1_676(1472, 1264), 3);
    add_background_object(create_aquabrick11_688(1408, 1232), 3);
    add_background_object(create_aquabrick1_676(1344, 1200), 3);
    add_background_object(create_aquabrick1_676(1280, 1200), 3);
    add_background_object(create_aquabrick1_676(1344, 1232), 3);
    add_background_object(create_aquabrick2_706(1344, 1184), 3);
    add_background_object(create_aquabrick2_706(1280, 1184), 3);
    add_background_object(create_aquabrick11_688(1280, 1232), 3);
    add_background_object(create_aquabrick1_676(1216, 1200), 3);
    add_background_object(create_aquabrick1_676(1152, 1200), 3);
    add_background_object(create_aquabrick1_676(1216, 1232), 3);
    add_background_object(create_aquabrick2_706(1216, 1184), 3);
    add_background_object(create_aquabrick2_706(1152, 1184), 3);
    add_background_object(create_aquabrick11_688(1152, 1232), 3);
    add_background_object(create_aquabrick1_676(1472, 1072), 3);
    add_background_object(create_aquabrick1_676(1408, 1072), 3);
    add_background_object(create_aquabrick1_676(1344, 1072), 3);
    add_background_object(create_aquabrick1_676(1280, 1072), 3);
    add_background_object(create_aquabrick1_676(1216, 1072), 3);
    add_background_object(create_aquabrick15_685(1200, 1072), 3);
    add_background_object(create_aquabrickarch1_669(752, 1200), 3);
    add_background_object(create_aquabrickarch1_669(752, 1264), 3);
    add_background_object(create_aquabrickarch1_669(752, 1328), 3);
    add_background_object(create_atsewerpipe6_672(1200, 1104), 3);
    add_background_object(create_atsewerpipe6_672(1200, 1128), 3);
    add_background_object(create_atsewerpipe6_672(1200, 1152), 3);
    add_background_object(create_aquabrick2_706(1080, 1448), 3);
    add_background_object(create_aquabrick13_712(1064, 1448), 3);
    add_background_object(create_aquabrick1_676(1080, 1464), 3);
    add_background_object(create_aquabrick15_685(1064, 1464), 3);
    add_background_object(create_aquabrick2_706(1144, 1448), 3);
    add_background_object(create_aquabrick1_676(1144, 1464), 3);
    add_background_object(create_aquabrick6_709(1208, 1448), 3);
    add_background_object(create_aquabrick16_684(1200, 1464), 3);
    add_background_object(create_aquabrick21_683(1536, 1472), 3);
    add_background_object(create_aquabrick3_691(1536, 1600), 3);
    add_background_object(create_aquabrick3_691(1536, 1664), 3);
    add_background_object(create_aquabrick3_691(1536, 1728), 3);
    add_background_object(create_aquabrick14_693(1520, 1504), 3);
    add_background_object(create_aquabrick2_706(1472, 1552), 3);
    add_background_object(create_aquabrick1_676(1536, 1440), 3);
    add_background_object(create_aquabrick1_676(1600, 1440), 3);
    add_background_object(create_aquabrick14_693(1520, 1440), 3);
    add_background_object(create_aquabrick2_706(1600, 1424), 3);
    add_background_object(create_aquabrick2_706(1536, 1424), 3);
    add_background_object(create_aquabrick13_712(1520, 1424), 3);
    add_background_object(create_aquabrick1_676(1664, 1440), 3);
    add_background_object(create_aquabrick1_676(1728, 1440), 3);
    add_background_object(create_aquabrick2_706(1728, 1424), 3);
    add_background_object(create_aquabrick2_706(1664, 1424), 3);
    add_background_object(create_aquabrick3_691(1664, 1600), 3);
    add_background_object(create_aquabrick3_691(1664, 1664), 3);
    add_background_object(create_aquabrick3_691(1664, 1728), 3);
    add_background_object(create_aquabrick3_691(1664, 1472), 3);
    add_background_object(create_aquabrick3_691(1664, 1536), 3);
    add_background_object(create_aquabrick1_676(1792, 1440), 3);
    add_background_object(create_aquabrick1_676(1856, 1440), 3);
    add_background_object(create_aquabrick2_706(1856, 1424), 3);
    add_background_object(create_aquabrick2_706(1792, 1424), 3);
    add_background_object(create_aquabrick3_691(1792, 1600), 3);
    add_background_object(create_aquabrick3_691(1792, 1664), 3);
    add_background_object(create_aquabrick3_691(1792, 1728), 3);
    add_background_object(create_aquabrick3_691(1792, 1472), 3);
    add_background_object(create_aquabrick3_691(1792, 1536), 3);
    add_background_object(create_aquabrick1_676(1920, 1440), 3);
    add_background_object(create_aquabrick1_676(1984, 1440), 3);
    add_background_object(create_aquabrick2_706(1984, 1424), 3);
    add_background_object(create_aquabrick2_706(1920, 1424), 3);
    add_background_object(create_aquabrick3_691(1920, 1600), 3);
    add_background_object(create_aquabrick3_691(1920, 1664), 3);
    add_background_object(create_aquabrick3_691(1920, 1472), 3);
    add_background_object(create_aquabrick3_691(1920, 1536), 3);
    add_background_object(create_aquabrick3_691(384, 1888), 3);
    add_background_object(create_aquabrick3_691(896, 1920), 3);
    add_background_object(create_aquabrick3_691(1024, 1920), 3);
    add_background_object(create_aquabrick3_691(384, 1792), 3);
    add_background_object(create_aquabrick3_691(256, 1888), 3);
    add_background_object(create_aquabrick3_691(256, 1760), 3);
    add_background_object(create_aquabrick3_691(1536, 1792), 3);
    add_background_object(create_aquabrick3_691(1664, 1792), 3);
    add_background_object(create_aquabrick3_691(1792, 1792), 3);
    add_background_object(create_aquabrick3_691(384, 1952), 3);
    add_background_object(create_aquabrick3_691(896, 1984), 3);
    add_background_object(create_aquabrick3_691(1024, 1984), 3);
    add_background_object(create_aquabrick3_691(384, 1856), 3);
    add_background_object(create_aquabrick3_691(256, 1952), 3);
    add_background_object(create_aquabrick3_691(256, 1824), 3);
    add_background_object(create_aquabrick3_691(1664, 1856), 3);
    add_background_object(create_aquabrick3_691(1792, 1856), 3);
    add_background_object(create_aquabrick3_691(128, 1696), 3);
    add_background_object(create_aquabrick3_691(0, 1696), 3);
    add_background_object(create_aquabrick3_691(128, 1760), 3);
    add_background_object(create_aquabrick3_691(0, 1760), 3);
    add_background_object(create_aquabrick3_691(128, 1824), 3);
    add_background_object(create_aquabrick3_691(0, 1824), 3);
    add_background_object(create_aquabrick1_676(1600, 1200), 3);
    add_background_object(create_aquabrick1_676(1536, 1200), 3);
    add_background_object(create_aquabrick1_676(1600, 1232), 3);
    add_background_object(create_aquabrick2_706(1600, 1184), 3);
    add_background_object(create_aquabrick2_706(1536, 1184), 3);
    add_background_object(create_aquabrick1_676(1536, 1264), 3);
    add_background_object(create_aquabrick1_676(1600, 1264), 3);
    add_background_object(create_aquabrick11_688(1536, 1232), 3);
    add_background_object(create_aquabrick6_709(1664, 1184), 3);
    add_background_object(create_aquabrick4_707(1656, 1200), 3);
    add_background_object(create_aquabrick16_684(1656, 1264), 3);
    add_background_object(create_atcolumn_704(1776, 1184), 3);
    add_background_object(create_atcolumn_704(1776, 1280), 3);
    add_background_object(create_atcolumn_704(1776, 992), 3);
    add_background_object(create_atcolumn_704(1776, 1088), 3);
    add_background_object(create_atcolumn_704(1776, 800), 3);
    add_background_object(create_atcolumn_704(1776, 896), 3);
    add_background_object(create_aquabrick5_682(1536, 944), 3);
    add_background_object(create_aquabrick1_676(1600, 1072), 3);
    add_background_object(create_aquabrick1_676(1536, 1072), 3);
    add_background_object(create_aquabrick16_684(1656, 1072), 3);
    add_background_object(create_aquabrick4_707(1656, 1008), 3);
    add_background_object(create_aquabrick4_707(1656, 944), 3);
    add_background_object(create_aquabrick5_682(1536, 816), 3);
    add_background_object(create_aquabrick4_707(1656, 880), 3);
    add_background_object(create_aquabrick4_707(1656, 816), 3);
    add_background_object(create_aquabrick5_682(1536, 752), 3);
    add_background_object(create_aquabrick4_707(1656, 752), 3);
    add_background_object(create_aquabrick4_707(1656, 688), 3);
    add_background_object(create_atcolumn_704(1776, 704), 3);
    add_background_object(create_atsewerpipe6_672(1600, 1104), 3);
    add_background_object(create_atsewerpipe6_672(1600, 1152), 3);
    add_background_object(create_atsewerpipe6_672(1600, 1128), 3);
    add_background_object(create_aquabrick4_707(1656, 624), 3);
    add_background_object(create_atcolumn_704(1776, 608), 3);
    add_background_object(create_aquabrick1_676(1984, 592), 3);
    add_background_object(create_aquabrick1_676(1984, 560), 3);
    add_background_object(create_aquabrick3_691(1536, 304), 3);
    add_background_object(create_aquabrick3_691(1536, 368), 3);
    add_background_object(create_aquabrick3_691(1536, 432), 3);
    add_background_object(create_aquabrick3_691(1536, 496), 3);
    add_background_object(create_aquabrick3_691(1664, 304), 3);
    add_background_object(create_aquabrick3_691(1664, 368), 3);
    add_background_object(create_aquabrick3_691(1664, 432), 3);
    add_background_object(create_aquabrick3_691(1664, 496), 3);
    add_background_object(create_aquabrick3_691(1792, 304), 3);
    add_background_object(create_aquabrick3_691(1792, 368), 3);
    add_background_object(create_aquabrick3_691(1792, 432), 3);
    add_background_object(create_aquabrick3_691(1792, 496), 3);
    add_background_object(create_aquabrick3_691(1920, 304), 3);
    add_background_object(create_aquabrick3_691(1920, 368), 3);
    add_background_object(create_aquabrick3_691(1920, 432), 3);
    add_background_object(create_aquabrick3_691(1920, 496), 3);
    add_background_object(create_aquabrick3_691(2048, 304), 3);
    add_background_object(create_aquabrick3_691(2048, 368), 3);
    add_background_object(create_aquabrick3_691(2048, 432), 3);
    add_background_object(create_aquabrick3_691(2048, 496), 3);
    add_background_object(create_aquabrick3_691(1792, 176), 3);
    add_background_object(create_aquabrick3_691(1792, 240), 3);
    add_background_object(create_aquabrick3_691(1920, 176), 3);
    add_background_object(create_aquabrick3_691(1920, 240), 3);
    add_background_object(create_aquabrick3_691(2048, 176), 3);
    add_background_object(create_aquabrick3_691(2048, 240), 3);
    add_background_object(create_aquabrick3_691(1792, 48), 3);
    add_background_object(create_aquabrick3_691(1792, 112), 3);
    add_background_object(create_aquabrick3_691(1920, 48), 3);
    add_background_object(create_aquabrick3_691(1920, 112), 3);
    add_background_object(create_aquabrick3_691(2048, 48), 3);
    add_background_object(create_aquabrick3_691(2048, 112), 3);
    add_background_object(create_aquabrick3_691(1792, -16), 3);
    add_background_object(create_aquabrick3_691(1920, -16), 3);
    add_background_object(create_aquabrick3_691(2048, -16), 3);
    add_background_object(create_aquabrick5_682(2176, -16), 3);
    add_background_object(create_aquabrick5_682(2176, 112), 3);
    add_background_object(create_aquabrick5_682(2176, 240), 3);
    add_background_object(create_aquabrick5_682(2176, 496), 3);
    add_background_object(create_aquabrick5_682(2176, 560), 3);
    add_background_object(create_aquabrick1_676(2176, 720), 3);
    add_background_object(create_aquabrick1_676(2176, 688), 3);
    add_background_object(create_aquabrick1_676(2240, 720), 3);
    add_background_object(create_aquabrick1_676(2240, 688), 3);
    add_background_object(create_aquabrick4_707(2296, -48), 3);
    add_background_object(create_aquabrick4_707(2296, 16), 3);
    add_background_object(create_aquabrick4_707(2296, 80), 3);
    add_background_object(create_aquabrick4_707(2296, 144), 3);
    add_background_object(create_aquabrick4_707(2296, 208), 3);
    add_background_object(create_aquabrick4_707(2296, 272), 3);
    add_background_object(create_aquabrick4_707(2296, 464), 3);
    add_background_object(create_aquabrick4_707(2296, 528), 3);
    add_background_object(create_aquabrick4_707(2296, 592), 3);
    add_background_object(create_aquabrick4_707(2296, 656), 3);
    add_background_object(create_aquabrick16_684(2296, 720), 3);
    add_background_object(create_aquabrick2_706(1984, 928), 3);
    add_background_object(create_aquabrick1_676(1984, 944), 3);
    add_background_object(create_aquabrick2_706(2112, 928), 3);
    add_background_object(create_aquabrick1_676(2048, 944), 3);
    add_background_object(create_aquabrick13_712(1968, 928), 3);
    add_background_object(create_aquabrick14_693(1968, 944), 3);
    add_background_object(create_aquabrick14_693(1968, 1008), 3);
    add_background_object(create_aquabrick21_683(1984, 1072), 3);
    add_background_object(create_aquabrick1_676(1984, 1200), 3);
    add_background_object(create_aquabrick1_676(2048, 1200), 3);
    add_background_object(create_aquabrick14_693(1968, 1072), 3);
    add_background_object(create_aquabrick14_693(1968, 1136), 3);
    add_background_object(create_aquabrick15_685(1968, 1200), 3);
    add_background_object(create_aquabrick5_682(2176, 368), 3);
    add_background_object(create_aquabrick4_707(2296, 336), 3);
    add_background_object(create_aquabrick4_707(2296, 400), 3);
    add_background_object(create_aquabrick21_683(2048, 560), 3);
    add_background_object(create_aquabrick1_676(2048, 688), 3);
    add_background_object(create_aquabrick1_676(2112, 688), 3);
    add_background_object(create_aquabrick15_685(2032, 688), 3);
    add_background_object(create_aquabrick14_693(2032, 624), 3);
    add_background_object(create_aquabrick15_685(2160, 720), 3);
    add_background_object(create_aquabrick1_676(2112, 1200), 3);
    add_background_object(create_aquabrick1_676(2112, 944), 3);
    add_background_object(create_aquabrick2_706(2048, 928), 3);
    add_background_object(create_aquabrick6_709(2176, 928), 3);
    add_background_object(create_aquabrick16_684(2168, 944), 3);
    add_background_object(create_aquabrick1_676(2176, 976), 3);
    add_background_object(create_aquabrick3_691(2112, 1136), 3);
    add_background_object(create_aquabrick1_676(2176, 1200), 3);
    add_background_object(create_aquabrick3_691(2112, 1072), 3);
    add_background_object(create_aquabrick3_691(2112, 1008), 3);
    add_background_object(create_aquabrick3_691(2240, 1136), 3);
    add_background_object(create_aquabrick3_691(2240, 1072), 3);
    add_background_object(create_aquabrick3_691(2240, 1008), 3);
    add_background_object(create_aquabrick1_676(2240, 1200), 3);
    add_background_object(create_aquabrick1_676(2304, 1200), 3);
    add_background_object(create_aquabrick1_676(2240, 976), 3);
    add_background_object(create_aquabrick1_676(2304, 976), 3);
    add_background_object(create_aquabrick3_691(2496, 1136), 3);
    add_background_object(create_aquabrick3_691(2496, 1072), 3);
    add_background_object(create_aquabrick3_691(2496, 1008), 3);
    add_background_object(create_aquabrick1_676(2496, 1200), 3);
    add_background_object(create_aquabrick1_676(2560, 1200), 3);
    add_background_object(create_aquabrick1_676(2496, 976), 3);
    add_background_object(create_aquabrick1_676(2560, 976), 3);
    add_background_object(create_aquabrick3_691(2624, 1136), 3);
    add_background_object(create_aquabrick3_691(2624, 1072), 3);
    add_background_object(create_aquabrick3_691(2624, 1008), 3);
    add_background_object(create_aquabrick1_676(2624, 1200), 3);
    add_background_object(create_aquabrick1_676(2688, 1200), 3);
    add_background_object(create_aquabrick1_676(2624, 976), 3);
    add_background_object(create_aquabrick15_685(2672, 944), 3);
    add_background_object(create_aquabrick2_706(2688, 928), 3);
    add_background_object(create_aquabrick13_712(2672, 928), 3);
    add_background_object(create_aquabrick3_691(2368, 1136), 3);
    add_background_object(create_aquabrick3_691(2368, 1072), 3);
    add_background_object(create_aquabrick3_691(2368, 1008), 3);
    add_background_object(create_aquabrick1_676(2368, 1200), 3);
    add_background_object(create_aquabrick1_676(2432, 1200), 3);
    add_background_object(create_aquabrick1_676(2368, 976), 3);
    add_background_object(create_aquabrick1_676(2432, 976), 3);
    add_background_object(create_aquabrick2_706(2816, 832), 3);
    add_background_object(create_aquabrick3_691(2752, 1072), 3);
    add_background_object(create_atwaterfaucet_722(2672, 872), 3);
    add_background_object(create_atwaterfaucet2_724(2720, 872), 3);
    add_background_object(create_atwaterfaucet2_724(2784, 872), 3);
    add_background_object(create_aquabrick13_712(2800, 832), 3);
    add_background_object(create_aquabrick15_685(2800, 912), 3);
    add_background_object(create_aquabrick2_706(2752, 928), 3);
    add_background_object(create_aquabrick1_676(2816, 848), 3);
    add_background_object(create_aquabrick1_676(3008, 848), 3);
    add_background_object(create_aquabrick21_683(3072, 752), 3);
    add_background_object(create_aquabrick14_693(3056, 752), 3);
    add_background_object(create_aquabrick15_685(3056, 816), 3);
    add_background_object(create_aquabrick2_706(3008, 832), 3);
    add_background_object(create_aquabrick21_683(3072, 624), 3);
    add_background_object(create_aquabrick14_693(3056, 624), 3);
    add_background_object(create_aquabrick14_693(3056, 688), 3);
    add_background_object(create_aquabrick21_683(3072, 496), 3);
    add_background_object(create_aquabrick14_693(3056, 496), 3);
    add_background_object(create_aquabrick14_693(3056, 560), 3);
    add_background_object(create_aquabrick21_683(3072, 368), 3);
    add_background_object(create_aquabrick14_693(3056, 368), 3);
    add_background_object(create_aquabrick14_693(3056, 432), 3);
    add_background_object(create_aquabrick6_709(2336, 448), 3);
    add_background_object(create_aquabrick21_683(3072, 240), 3);
    add_background_object(create_aquabrick14_693(3056, 304), 3);
    add_background_object(create_aquabrick1_676(3072, 240), 3);
    add_background_object(create_aquabrick1_676(3136, 240), 3);
    add_background_object(create_aquabrick14_693(3056, 240), 3);
    add_background_object(create_aquabrick2_706(3072, 224), 3);
    add_background_object(create_aquabrick2_706(3136, 224), 3);
    add_background_object(create_aquabrick13_712(3056, 224), 3);
    add_background_object(create_aquabrick5_682(3328, 368), 3);
    add_background_object(create_aquabrick5_682(3328, 496), 3);
    add_background_object(create_aquabrick1_676(3584, 592), 3);
    add_background_object(create_aquabrick1_676(3648, 592), 3);
    add_background_object(create_aquabrick1_676(3712, 592), 3);
    add_background_object(create_aquabrick1_676(3776, 592), 3);
    add_background_object(create_aquabrick1_676(3840, 592), 3);
    add_background_object(create_aquabrick1_676(3904, 592), 3);
    add_background_object(create_aquabrick21_683(3968, 496), 3);
    add_background_object(create_aquabrick21_683(3968, 368), 3);
    add_background_object(create_aquabrick20_716(3776, 392), 3);
    add_background_object(create_aquabrick22_726(3968, 240), 3);
    add_background_object(create_aquabrick3_691(3456, 688), 3);
    add_background_object(create_aquabrick3_691(3456, 624), 3);
    add_background_object(create_aquabrick3_691(3584, 688), 3);
    add_background_object(create_aquabrick3_691(3584, 624), 3);
    add_background_object(create_aquabrick3_691(3712, 688), 3);
    add_background_object(create_aquabrick3_691(3712, 624), 3);
    add_background_object(create_aquabrick3_691(3840, 688), 3);
    add_background_object(create_aquabrick3_691(3840, 624), 3);
    add_background_object(create_aquabrick3_691(3968, 688), 3);
    add_background_object(create_aquabrick3_691(3968, 624), 3);
    add_background_object(create_aquabrick7_728(3952, 224), 3);
    add_background_object(create_aquabrick15_685(3952, 368), 3);
    add_background_object(create_aquabrick19_714(3776, 392), 3);
    add_background_object(create_aquabrick3_691(3328, 688), 3);
    add_background_object(create_aquabrick3_691(3328, 624), 3);
    add_background_object(create_aquabrick3_691(3328, 944), 3);
    add_background_object(create_aquabrick3_691(3328, 880), 3);
    add_background_object(create_aquabrick3_691(3328, 816), 3);
    add_background_object(create_aquabrick3_691(3328, 752), 3);
    add_background_object(create_aquabrick3_691(3328, 1008), 3);
    add_background_object(create_aquabrick3_691(3200, 240), 3);
    add_background_object(create_aquabrick1_676(3200, 240), 3);
    add_background_object(create_aquabrick1_676(3264, 240), 3);
    add_background_object(create_aquabrick2_706(3200, 224), 3);
    add_background_object(create_aquabrick2_706(3264, 224), 3);
    add_background_object(create_aquabrick3_691(3200, 688), 3);
    add_background_object(create_aquabrick3_691(3200, 624), 3);
    add_background_object(create_aquabrick3_691(3200, 560), 3);
    add_background_object(create_aquabrick3_691(3200, 496), 3);
    add_background_object(create_aquabrick3_691(3200, 432), 3);
    add_background_object(create_aquabrick3_691(3200, 368), 3);
    add_background_object(create_aquabrick3_691(3200, 304), 3);
    add_background_object(create_aquabrick3_691(3200, 944), 3);
    add_background_object(create_aquabrick3_691(3200, 880), 3);
    add_background_object(create_aquabrick3_691(3200, 816), 3);
    add_background_object(create_aquabrick3_691(3200, 752), 3);
    add_background_object(create_aquabrick3_691(3200, 1008), 3);
    add_background_object(create_aquabrick2_706(3712, 576), 3);
    add_background_object(create_aquabrick2_706(3648, 576), 3);
    add_background_object(create_aquabrick2_706(3584, 576), 3);
    add_background_object(create_aquabrick5_682(3328, 240), 3);
    add_background_object(create_aquabrick1_676(3328, 240), 3);
    add_background_object(create_aquabrick1_676(3392, 240), 3);
    add_background_object(create_aquabrick2_706(3328, 224), 3);
    add_background_object(create_aquabrick2_706(3392, 224), 3);
    add_background_object(create_aquabrick1_676(3456, 592), 3);
    add_background_object(create_aquabrick1_676(3520, 592), 3);
    add_background_object(create_aquabrick2_706(3520, 576), 3);
    add_background_object(create_aquabrick6_709(3456, 224), 3);
    add_background_object(create_aquabrick4_707(3448, 240), 3);
    add_background_object(create_aquabrick4_707(3448, 304), 3);
    add_background_object(create_aquabrick4_707(3448, 368), 3);
    add_background_object(create_aquabrick4_707(3448, 432), 3);
    add_background_object(create_aquabrick4_707(3448, 496), 3);
    add_background_object(create_aquabrick16_684(3448, 560), 3);
    add_background_object(create_aquabrick2_706(3456, 576), 3);
    add_background_object(create_aquabrick21_683(3648, 240), 3);
    add_background_object(create_aquabrick5_682(3712, 240), 3);
    add_background_object(create_aquabrick1_676(3712, 400), 3);
    add_background_object(create_aquabrick1_676(3776, 400), 3);
    add_background_object(create_aquabrick15_685(3632, 400), 3);
    add_background_object(create_aquabrick16_684(3832, 400), 3);
    add_background_object(create_aquabrick4_707(3832, 272), 3);
    add_background_object(create_aquabrick14_693(3632, 336), 3);
    add_background_object(create_aquabrick14_693(3632, 272), 3);
    add_background_object(create_atsewerpipe8_680(3472, 448), 3);
    add_background_object(create_atsewerpipe8_680(3472, 320), 3);
    add_background_object(create_atsewerpipe8_680(3472, 192), 3);
    add_background_object(create_atsewerpipe10_701(3472, 32), 3);
    add_background_object(create_aquabrick1_676(4096, 240), 3);
    add_background_object(create_aquabrick1_676(4160, 240), 3);
    add_background_object(create_aquabrick3_691(4096, 336), 3);
    add_background_object(create_aquabrick2_706(4160, 224), 3);
    add_background_object(create_aquabrick2_706(4096, 224), 3);
    add_background_object(create_aquabrick3_691(4096, 464), 3);
    add_background_object(create_aquabrick3_691(4096, 400), 3);
    add_background_object(create_aquabrick3_691(4096, 592), 3);
    add_background_object(create_aquabrick3_691(4096, 528), 3);
    add_background_object(create_aquabrick3_691(4096, 656), 3);
    add_background_object(create_aquabrick1_676(3648, 208), 3);
    add_background_object(create_aquabrick1_676(3712, 208), 3);
    add_background_object(create_aquabrick1_676(3776, 208), 3);
    add_background_object(create_aquabrick4_707(3832, 208), 3);
    add_background_object(create_aquabrick14_693(3632, 208), 3);
    add_background_object(create_aquabrick1_676(3712, 368), 3);
    add_background_object(create_aquabrick1_676(3776, 368), 3);
    add_background_object(create_aquabrick4_707(3832, 336), 3);
    add_background_object(create_aquabrick6_709(3840, 192), 3);
    add_background_object(create_aquabrick13_712(3632, 192), 3);
    add_background_object(create_aquabrick2_706(3648, 192), 3);
    add_background_object(create_aquabrick2_706(3712, 192), 3);
    add_background_object(create_aquabrick2_706(3776, 192), 3);
    add_background_object(create_atsewerpipe11_679(3632, 32), 3);
    add_background_object(create_watervent_725(3632, 192), 3);
    add_background_object(create_aquabrick14_693(3680, 320), 3);
    add_background_object(create_aquabrick14_693(3680, 256), 3);
    add_background_object(create_aquabrick1_676(3776, 0), 3);
    add_background_object(create_aquabrick15_685(3760, 0), 3);
    add_background_object(create_aquabrick1_676(3840, 0), 3);
    add_background_object(create_aquabrick16_684(3896, 0), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 128), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 64), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 32), 3);
    add_background_object(create_aquabrick4_707(3784, 256), 3);
    add_background_object(create_aquabrick4_707(3784, 320), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 432), 3);
    add_background_object(create_atwaterfaucet3_681(3808, 472), 3);
    add_background_object(create_atwaterfaucet3_681(3648, 432), 3);
    add_background_object(create_atwaterfaucet3_681(3648, 512), 3);
    add_background_object(create_atwaterfaucet3_681(3648, 480), 3);
    add_background_object(create_aquabrick6_709(4224, 224), 3);
    add_background_object(create_aquabrick4_707(4216, 240), 3);
    add_background_object(create_aquabrick1_676(4224, 304), 3);
    add_background_object(create_aquabrick1_676(4288, 304), 3);
    add_background_object(create_aquabrick1_676(4352, 304), 3);
    add_background_object(create_aquabrick1_676(4416, 304), 3);
    add_background_object(create_aquabrick1_676(4480, 304), 3);
    add_background_object(create_aquabrick1_676(4544, 304), 3);
    add_background_object(create_aquabrick3_691(4224, 336), 3);
    add_background_object(create_aquabrick3_691(4224, 464), 3);
    add_background_object(create_aquabrick3_691(4224, 400), 3);
    add_background_object(create_aquabrick3_691(4224, 592), 3);
    add_background_object(create_aquabrick3_691(4224, 528), 3);
    add_background_object(create_aquabrick3_691(4224, 656), 3);
    add_background_object(create_aquabrick3_691(4352, 336), 3);
    add_background_object(create_aquabrick3_691(4352, 464), 3);
    add_background_object(create_aquabrick3_691(4352, 400), 3);
    add_background_object(create_aquabrick3_691(4352, 592), 3);
    add_background_object(create_aquabrick3_691(4352, 528), 3);
    add_background_object(create_aquabrick3_691(4352, 656), 3);
    add_background_object(create_aquabrick3_691(4480, 336), 3);
    add_background_object(create_aquabrick3_691(4480, 464), 3);
    add_background_object(create_aquabrick3_691(4480, 400), 3);
    add_background_object(create_aquabrick3_691(4480, 592), 3);
    add_background_object(create_aquabrick3_691(4480, 528), 3);
    add_background_object(create_aquabrick3_691(4480, 656), 3);
    add_background_object(create_aquabrick21_683(4608, 272), 3);
    add_background_object(create_aquabrick3_691(4608, 336), 3);
    add_background_object(create_aquabrick3_691(4608, 464), 3);
    add_background_object(create_aquabrick3_691(4608, 400), 3);
    add_background_object(create_aquabrick3_691(4608, 592), 3);
    add_background_object(create_aquabrick3_691(4608, 528), 3);
    add_background_object(create_aquabrick3_691(4608, 656), 3);
    add_background_object(create_aquabrick15_685(4592, 272), 3);
    add_background_object(create_aquabrick1_676(4608, 272), 3);
    add_background_object(create_aquabrick1_676(4672, 272), 3);
    add_background_object(create_aquabrick13_712(4592, 256), 3);
    add_background_object(create_aquabrick2_706(4672, 256), 3);
    add_background_object(create_aquabrick2_706(4608, 256), 3);
    add_background_object(create_aquabrick1_676(4736, 272), 3);
    add_background_object(create_aquabrick1_676(6272, 304), 3);
    add_background_object(create_aquabrick2_706(4736, 256), 3);
    add_background_object(create_aquabrick3_691(4736, 336), 3);
    add_background_object(create_aquabrick3_691(4736, 464), 3);
    add_background_object(create_aquabrick3_691(4736, 400), 3);
    add_background_object(create_aquabrick3_691(4736, 592), 3);
    add_background_object(create_aquabrick3_691(4736, 528), 3);
    add_background_object(create_aquabrick3_691(4736, 656), 3);
    add_background_object(create_aquabrick4_707(3096, 272), 3);
    add_background_object(create_aquabrick14_693(3152, 272), 3);
    add_background_object(create_watervent_725(3104, 336), 3);
    add_background_object(create_aquabrick4_707(3352, 272), 3);
    add_background_object(create_aquabrick14_693(3408, 272), 3);
    add_background_object(create_watervent_725(3360, 336), 3);
    add_background_object(create_aquabrick4_707(2200, 672), 3);
    add_background_object(create_aquabrick14_693(2256, 672), 3);
    add_background_object(create_watervent_725(2208, 736), 3);
    add_background_object(create_atwaterfaucet3_681(2224, 752), 3);
    add_background_object(create_atwaterfaucet3_681(2224, 816), 3);
    add_background_object(create_aquabrickarch1_669(2032, 848), 3);
    add_background_object(create_aquabrick21_683(2688, 1440), 3);
    add_background_object(create_aquabrick1_676(2688, 1440), 3);
    add_background_object(create_aquabrick1_676(2752, 1440), 3);
    add_background_object(create_aquabrick5_682(2048, 1440), 3);
    add_background_object(create_aquabrick2_706(2112, 1424), 3);
    add_background_object(create_aquabrick1_676(2048, 1440), 3);
    add_background_object(create_aquabrick1_676(2048, 1696), 3);
    add_background_object(create_aquabrick1_676(2112, 1696), 3);
    add_background_object(create_aquabrick1_676(2112, 1440), 3);
    add_background_object(create_aquabrick2_706(2048, 1424), 3);
    add_background_object(create_aquabrick6_709(2176, 1424), 3);
    add_background_object(create_aquabrick16_684(2168, 1440), 3);
    add_background_object(create_aquabrick1_676(2176, 1472), 3);
    add_background_object(create_aquabrick3_691(2112, 1632), 3);
    add_background_object(create_aquabrick1_676(2176, 1696), 3);
    add_background_object(create_aquabrick3_691(2112, 1568), 3);
    add_background_object(create_aquabrick3_691(2112, 1504), 3);
    add_background_object(create_aquabrick3_691(2240, 1632), 3);
    add_background_object(create_aquabrick3_691(2240, 1568), 3);
    add_background_object(create_aquabrick3_691(2240, 1504), 3);
    add_background_object(create_aquabrick1_676(2240, 1696), 3);
    add_background_object(create_aquabrick1_676(2304, 1696), 3);
    add_background_object(create_aquabrick1_676(2240, 1472), 3);
    add_background_object(create_aquabrick1_676(2304, 1472), 3);
    add_background_object(create_aquabrick3_691(2496, 1632), 3);
    add_background_object(create_aquabrick3_691(2496, 1568), 3);
    add_background_object(create_aquabrick3_691(2496, 1504), 3);
    add_background_object(create_aquabrick1_676(2496, 1696), 3);
    add_background_object(create_aquabrick1_676(2560, 1696), 3);
    add_background_object(create_aquabrick1_676(2496, 1472), 3);
    add_background_object(create_aquabrick1_676(2560, 1472), 3);
    add_background_object(create_aquabrick3_691(2624, 1632), 3);
    add_background_object(create_aquabrick3_691(2624, 1568), 3);
    add_background_object(create_aquabrick3_691(2624, 1504), 3);
    add_background_object(create_aquabrick1_676(2624, 1696), 3);
    add_background_object(create_aquabrick1_676(2688, 1696), 3);
    add_background_object(create_aquabrick1_676(2624, 1472), 3);
    add_background_object(create_aquabrick15_685(2672, 1440), 3);
    add_background_object(create_aquabrick2_706(2688, 1424), 3);
    add_background_object(create_aquabrick13_712(2672, 1424), 3);
    add_background_object(create_aquabrick3_691(2368, 1632), 3);
    add_background_object(create_aquabrick3_691(2368, 1568), 3);
    add_background_object(create_aquabrick3_691(2368, 1504), 3);
    add_background_object(create_aquabrick1_676(2368, 1696), 3);
    add_background_object(create_aquabrick1_676(2432, 1696), 3);
    add_background_object(create_aquabrick1_676(2368, 1472), 3);
    add_background_object(create_aquabrick1_676(2432, 1472), 3);
    add_background_object(create_aquabrick2_706(2816, 1328), 3);
    add_background_object(create_aquabrick3_691(2752, 1568), 3);
    add_background_object(create_aquabrick3_691(2752, 1632), 3);
    add_background_object(create_atwaterfaucet_722(2672, 1368), 3);
    add_background_object(create_atwaterfaucet2_724(2720, 1368), 3);
    add_background_object(create_atwaterfaucet2_724(2784, 1368), 3);
    add_background_object(create_aquabrick21_683(2816, 1376), 3);
    add_background_object(create_aquabrick13_712(2800, 1328), 3);
    add_background_object(create_aquabrick15_685(2800, 1408), 3);
    add_background_object(create_aquabrick2_706(2752, 1424), 3);
    add_background_object(create_aquabrick3_691(2816, 1536), 3);
    add_background_object(create_aquabrick1_676(2816, 1344), 3);
    add_background_object(create_aquabrick3_691(1984, 1568), 3);
    add_background_object(create_aquabrick3_691(1984, 1632), 3);
    add_background_object(create_aquabrick5_682(2752, 1104), 3);
    add_background_object(create_aquabrick1_676(2752, 1200), 3);
    add_background_object(create_aquabrick1_676(2816, 1200), 3);
    add_background_object(create_aquabrick16_684(2872, 1200), 3);
    add_background_object(create_aquabrick4_707(2872, 1104), 3);
    add_background_object(create_aquabrickarch2_690(1968, 1232), 3);
    add_background_object(create_aquabrickarch1_669(1968, 1360), 3);
    add_background_object(create_aquabrick3_691(2880, 1632), 3);
    add_background_object(create_aquabrick1_676(2752, 1696), 3);
    add_background_object(create_aquabrick1_676(2816, 1696), 3);
    add_background_object(create_aquabrick1_676(2880, 1696), 3);
    add_background_object(create_aquabrick1_676(2944, 1696), 3);
    add_background_object(create_aquabrick3_691(2880, 1568), 3);
    add_background_object(create_aquabrick3_691(3008, 1632), 3);
    add_background_object(create_aquabrick1_676(3008, 1696), 3);
    add_background_object(create_aquabrick1_676(3072, 1696), 3);
    add_background_object(create_aquabrick3_691(3008, 1568), 3);
    add_background_object(create_aquabrick3_691(2944, 1504), 3);
    add_background_object(create_aquabrick2_706(3008, 1328), 3);
    add_background_object(create_aquabrick1_676(3008, 1344), 3);
    add_background_object(create_aquabrick1_676(2816, 880), 3);
    add_background_object(create_aquabrick14_693(2800, 848), 3);
    add_background_object(create_aquabrick1_676(2816, 944), 3);
    add_background_object(create_aquabrick5_682(2752, 976), 3);
    add_background_object(create_aquabrick21_683(3072, 880), 3);
    add_background_object(create_aquabrick21_683(3072, 1008), 3);
    add_background_object(create_aquabrick1_676(3008, 880), 3);
    add_background_object(create_aquabrick1_676(3008, 912), 3);
    add_background_object(create_aquabrick1_676(3008, 944), 3);
    add_background_object(create_aquabrick1_676(3008, 976), 3);
    add_background_object(create_aquabrick1_676(3008, 1008), 3);
    add_background_object(create_aquabrick1_676(3008, 1040), 3);
    add_background_object(create_aquabrick1_676(3008, 1072), 3);
    add_background_object(create_aquabrick1_676(3008, 1104), 3);
    add_background_object(create_aquabrick4_707(2872, 1040), 3);
    add_background_object(create_aquabrick13_712(2992, 832), 3);
    add_background_object(create_aquabrick14_693(2992, 848), 3);
    add_background_object(create_aquabrick6_709(2880, 832), 3);
    add_background_object(create_aquabrick4_707(2872, 848), 3);
    add_background_object(create_aquabrick4_707(2872, 912), 3);
    add_background_object(create_aquabrick4_707(2872, 976), 3);
    add_background_object(create_aquabrick14_693(2992, 912), 3);
    add_background_object(create_aquabrick14_693(2992, 976), 3);
    add_background_object(create_aquabrick14_693(2992, 1040), 3);
    add_background_object(create_aquabrick15_685(2992, 1104), 3);
    add_background_object(create_aquabrick4_707(2872, 1136), 3);
    add_background_object(create_aquabrick21_683(3200, 1104), 3);
    add_background_object(create_aquabrick21_683(3200, 1232), 3);
    add_background_object(create_aquabrick1_676(3072, 1104), 3);
    add_background_object(create_aquabrick1_676(3136, 1104), 3);
    add_background_object(create_aquabrick3_691(3072, 1504), 3);
    add_background_object(create_aquabrick3_691(3072, 1440), 3);
    add_background_object(create_aquabrick3_691(3072, 1376), 3);
    add_background_object(create_aquabrick2_706(3072, 1328), 3);
    add_background_object(create_aquabrick1_676(3072, 1344), 3);
    add_background_object(create_aquabrick2_706(3136, 1328), 3);
    add_background_object(create_aquabrick1_676(3136, 1344), 3);
    add_background_object(create_aquabrick3_691(3136, 1632), 3);
    add_background_object(create_aquabrick1_676(3136, 1696), 3);
    add_background_object(create_aquabrick1_676(3200, 1696), 3);
    add_background_object(create_aquabrick3_691(3136, 1568), 3);
    add_background_object(create_aquabrick3_691(3200, 1504), 3);
    add_background_object(create_aquabrick3_691(3200, 1440), 3);
    add_background_object(create_aquabrick3_691(3200, 1376), 3);
    add_background_object(create_aquabrick3_691(3264, 1632), 3);
    add_background_object(create_aquabrick1_676(3264, 1696), 3);
    add_background_object(create_aquabrick1_676(3328, 1696), 3);
    add_background_object(create_aquabrick3_691(3264, 1568), 3);
    add_background_object(create_aquabrick3_691(3328, 1504), 3);
    add_background_object(create_aquabrick3_691(3328, 1440), 3);
    add_background_object(create_aquabrick3_691(3328, 1376), 3);
    add_background_object(create_aquabrick3_691(3328, 1264), 3);
    add_background_object(create_aquabrick3_691(3328, 1136), 3);
    add_background_object(create_aquabrick3_691(3328, 1200), 3);
    add_background_object(create_aquabrick3_691(3328, 1328), 3);
    add_background_object(create_aquabrick14_693(3184, 1136), 3);
    add_background_object(create_aquabrick14_693(3184, 1200), 3);
    add_background_object(create_aquabrick14_693(3184, 1264), 3);
    add_background_object(create_aquabrick1_676(2944, 1376), 3);
    add_background_object(create_aquabrick1_676(2880, 1376), 3);
    add_background_object(create_aquabrick1_676(2816, 1376), 3);
    add_background_object(create_aquabrick14_693(2800, 1344), 3);
    add_background_object(create_aquabrick3_691(2816, 1472), 3);
    add_background_object(create_aquabrick21_683(3008, 1376), 3);
    add_background_object(create_aquabrick3_691(2944, 1408), 3);
    add_background_object(create_aquabrick3_691(2944, 1440), 3);
    add_background_object(create_aquabrick13_712(2992, 1328), 3);
    add_background_object(create_aquabrick6_709(2880, 1328), 3);
    add_background_object(create_aquabrick16_684(2872, 1344), 3);
    add_background_object(create_aquabrick15_685(2992, 1344), 3);
    add_background_object(create_aquabrick2_706(2944, 1360), 3);
    add_background_object(create_aquabrick2_706(2880, 1360), 3);
    add_background_object(create_aquabrickarch2_690(2992, 1136), 3);
    add_background_object(create_aquabrickarch1_669(2992, 1264), 3);
    add_background_object(create_aquabrick1_676(4800, 304), 3);
    add_background_object(create_aquabrick1_676(6336, 304), 3);
    add_background_object(create_aquabrick16_684(4792, 272), 3);
    add_background_object(create_aquabrick6_709(4800, 256), 3);
    add_background_object(create_aquabrick3_691(6272, 336), 3);
    add_background_object(create_aquabrick3_691(6272, 400), 3);
    add_background_object(create_aquabrick3_691(6272, 464), 3);
    add_background_object(create_aquabrick3_691(6272, 592), 3);
    add_background_object(create_aquabrick3_691(6272, 528), 3);
    add_background_object(create_aquabrick3_691(6272, 656), 3);
    add_background_object(create_aquabrick1_676(6400, 304), 3);
    add_background_object(create_aquabrick1_676(6464, 304), 3);
    add_background_object(create_aquabrick3_691(6400, 336), 3);
    add_background_object(create_aquabrick3_691(6400, 400), 3);
    add_background_object(create_aquabrick3_691(6400, 464), 3);
    add_background_object(create_aquabrick3_691(6400, 592), 3);
    add_background_object(create_aquabrick3_691(6400, 528), 3);
    add_background_object(create_aquabrick3_691(6400, 656), 3);
    add_background_object(create_aquabrick3_691(3456, 752), 3);
    add_background_object(create_aquabrick3_691(3584, 752), 3);
    add_background_object(create_aquabrick3_691(3712, 752), 3);
    add_background_object(create_aquabrick3_691(3840, 752), 3);
    add_background_object(create_aquabrick3_691(3968, 752), 3);
    add_background_object(create_aquabrick3_691(4096, 720), 3);
    add_background_object(create_aquabrick3_691(4224, 720), 3);
    add_background_object(create_aquabrick3_691(4352, 720), 3);
    add_background_object(create_aquabrick3_691(3456, 1072), 3);
    add_background_object(create_aquabrick3_691(3456, 944), 3);
    add_background_object(create_aquabrick3_691(3456, 880), 3);
    add_background_object(create_aquabrick3_691(3456, 816), 3);
    add_background_object(create_aquabrick3_691(3456, 1008), 3);
    add_background_object(create_aquabrick3_691(3456, 1504), 3);
    add_background_object(create_aquabrick3_691(3456, 1440), 3);
    add_background_object(create_aquabrick3_691(3456, 1376), 3);
    add_background_object(create_aquabrick3_691(3456, 1264), 3);
    add_background_object(create_aquabrick3_691(3456, 1136), 3);
    add_background_object(create_aquabrick3_691(3456, 1200), 3);
    add_background_object(create_aquabrick3_691(3456, 1328), 3);
    add_background_object(create_aquabrick3_691(3392, 1632), 3);
    add_background_object(create_aquabrick1_676(3392, 1696), 3);
    add_background_object(create_aquabrick1_676(3456, 1696), 3);
    add_background_object(create_aquabrick3_691(3392, 1568), 3);
    add_background_object(create_aquabrick1_676(6528, 304), 3);
    add_background_object(create_aquabrick1_676(6592, 304), 3);
    add_background_object(create_aquabrick3_691(6528, 336), 3);
    add_background_object(create_aquabrick3_691(6528, 400), 3);
    add_background_object(create_aquabrick3_691(6528, 464), 3);
    add_background_object(create_aquabrick3_691(6528, 592), 3);
    add_background_object(create_aquabrick3_691(6528, 528), 3);
    add_background_object(create_aquabrick3_691(6528, 656), 3);
    add_background_object(create_aquabrick1_676(6656, 304), 3);
    add_background_object(create_aquabrick1_676(6720, 304), 3);
    add_background_object(create_aquabrick3_691(6656, 336), 3);
    add_background_object(create_aquabrick3_691(6656, 400), 3);
    add_background_object(create_aquabrick3_691(6656, 464), 3);
    add_background_object(create_aquabrick3_691(6656, 592), 3);
    add_background_object(create_aquabrick3_691(6656, 528), 3);
    add_background_object(create_aquabrick3_691(6656, 656), 3);
    add_background_object(create_aquabrick1_676(6784, 304), 3);
    add_background_object(create_aquabrick1_676(6848, 304), 3);
    add_background_object(create_aquabrick3_691(6784, 336), 3);
    add_background_object(create_aquabrick3_691(6784, 400), 3);
    add_background_object(create_aquabrick3_691(6784, 464), 3);
    add_background_object(create_aquabrick3_691(6784, 592), 3);
    add_background_object(create_aquabrick3_691(6784, 528), 3);
    add_background_object(create_aquabrick3_691(6784, 656), 3);
    add_background_object(create_aquabrick1_676(6912, 304), 3);
    add_background_object(create_aquabrick1_676(6976, 304), 3);
    add_background_object(create_aquabrick3_691(6912, 336), 3);
    add_background_object(create_aquabrick3_691(6912, 400), 3);
    add_background_object(create_aquabrick3_691(6912, 464), 3);
    add_background_object(create_aquabrick3_691(6912, 592), 3);
    add_background_object(create_aquabrick3_691(6912, 528), 3);
    add_background_object(create_aquabrick3_691(6912, 656), 3);
    add_background_object(create_aquabrick1_676(6144, 304), 3);
    add_background_object(create_aquabrick1_676(6208, 304), 3);
    add_background_object(create_aquabrick3_691(6144, 336), 3);
    add_background_object(create_aquabrick3_691(6144, 400), 3);
    add_background_object(create_aquabrick3_691(6144, 464), 3);
    add_background_object(create_aquabrick3_691(6144, 592), 3);
    add_background_object(create_aquabrick3_691(6144, 528), 3);
    add_background_object(create_aquabrick3_691(6144, 656), 3);
    add_background_object(create_aquabrick1_676(6016, 304), 3);
    add_background_object(create_aquabrick1_676(6080, 304), 3);
    add_background_object(create_aquabrick3_691(6016, 336), 3);
    add_background_object(create_aquabrick3_691(6016, 400), 3);
    add_background_object(create_aquabrick3_691(6016, 464), 3);
    add_background_object(create_aquabrick3_691(6016, 592), 3);
    add_background_object(create_aquabrick3_691(6016, 528), 3);
    add_background_object(create_aquabrick3_691(6016, 656), 3);
    add_background_object(create_aquabrick1_676(5888, 304), 3);
    add_background_object(create_aquabrick1_676(5952, 304), 3);
    add_background_object(create_aquabrick3_691(5888, 336), 3);
    add_background_object(create_aquabrick3_691(5888, 400), 3);
    add_background_object(create_aquabrick3_691(5888, 464), 3);
    add_background_object(create_aquabrick3_691(5888, 592), 3);
    add_background_object(create_aquabrick3_691(5888, 528), 3);
    add_background_object(create_aquabrick3_691(5888, 656), 3);
    add_background_object(create_aquabrick1_676(5760, 304), 3);
    add_background_object(create_aquabrick1_676(5824, 304), 3);
    add_background_object(create_aquabrick3_691(5760, 336), 3);
    add_background_object(create_aquabrick3_691(5760, 400), 3);
    add_background_object(create_aquabrick3_691(5760, 464), 3);
    add_background_object(create_aquabrick3_691(5760, 592), 3);
    add_background_object(create_aquabrick3_691(5760, 528), 3);
    add_background_object(create_aquabrick3_691(5760, 656), 3);
    add_background_object(create_aquabrick1_676(5632, 304), 3);
    add_background_object(create_aquabrick1_676(5696, 304), 3);
    add_background_object(create_aquabrick3_691(5632, 336), 3);
    add_background_object(create_aquabrick3_691(5632, 400), 3);
    add_background_object(create_aquabrick3_691(5632, 464), 3);
    add_background_object(create_aquabrick3_691(5632, 592), 3);
    add_background_object(create_aquabrick3_691(5632, 528), 3);
    add_background_object(create_aquabrick3_691(5632, 656), 3);
    add_background_object(create_aquabrick1_676(5504, 304), 3);
    add_background_object(create_aquabrick1_676(5568, 304), 3);
    add_background_object(create_aquabrick3_691(5504, 336), 3);
    add_background_object(create_aquabrick3_691(5504, 400), 3);
    add_background_object(create_aquabrick3_691(5504, 464), 3);
    add_background_object(create_aquabrick3_691(5504, 592), 3);
    add_background_object(create_aquabrick3_691(5504, 528), 3);
    add_background_object(create_aquabrick3_691(5504, 656), 3);
    add_background_object(create_aquabrick1_676(5376, 304), 3);
    add_background_object(create_aquabrick1_676(5440, 304), 3);
    add_background_object(create_aquabrick3_691(5376, 336), 3);
    add_background_object(create_aquabrick3_691(5376, 400), 3);
    add_background_object(create_aquabrick3_691(5376, 464), 3);
    add_background_object(create_aquabrick3_691(5376, 592), 3);
    add_background_object(create_aquabrick3_691(5376, 528), 3);
    add_background_object(create_aquabrick3_691(5376, 656), 3);
    add_background_object(create_aquabrick1_676(5248, 304), 3);
    add_background_object(create_aquabrick1_676(5312, 304), 3);
    add_background_object(create_aquabrick3_691(5248, 336), 3);
    add_background_object(create_aquabrick3_691(5248, 400), 3);
    add_background_object(create_aquabrick3_691(5248, 464), 3);
    add_background_object(create_aquabrick3_691(5248, 592), 3);
    add_background_object(create_aquabrick3_691(5248, 528), 3);
    add_background_object(create_aquabrick3_691(5248, 656), 3);
    add_background_object(create_aquabrick1_676(5120, 304), 3);
    add_background_object(create_aquabrick1_676(5184, 304), 3);
    add_background_object(create_aquabrick3_691(5120, 336), 3);
    add_background_object(create_aquabrick3_691(5120, 400), 3);
    add_background_object(create_aquabrick3_691(5120, 464), 3);
    add_background_object(create_aquabrick3_691(5120, 592), 3);
    add_background_object(create_aquabrick3_691(5120, 528), 3);
    add_background_object(create_aquabrick3_691(5120, 656), 3);
    add_background_object(create_aquabrick1_676(4992, 304), 3);
    add_background_object(create_aquabrick1_676(5056, 304), 3);
    add_background_object(create_aquabrick3_691(4992, 336), 3);
    add_background_object(create_aquabrick3_691(4992, 400), 3);
    add_background_object(create_aquabrick3_691(4992, 464), 3);
    add_background_object(create_aquabrick3_691(4992, 592), 3);
    add_background_object(create_aquabrick3_691(4992, 528), 3);
    add_background_object(create_aquabrick3_691(4992, 656), 3);
    add_background_object(create_aquabrick1_676(4864, 304), 3);
    add_background_object(create_aquabrick1_676(4928, 304), 3);
    add_background_object(create_aquabrick3_691(4864, 336), 3);
    add_background_object(create_aquabrick3_691(4864, 400), 3);
    add_background_object(create_aquabrick3_691(4864, 464), 3);
    add_background_object(create_aquabrick3_691(4864, 592), 3);
    add_background_object(create_aquabrick3_691(4864, 528), 3);
    add_background_object(create_aquabrick3_691(4864, 656), 3);
    add_background_object(create_aquabrick3_691(7040, 368), 3);
    add_background_object(create_aquabrick3_691(7040, 432), 3);
    add_background_object(create_aquabrick3_691(7040, 560), 3);
    add_background_object(create_aquabrick3_691(7040, 496), 3);
    add_background_object(create_aquabrick3_691(7040, 624), 3);
    add_background_object(create_aquabrick21_683(1152, 1664), 3);
    add_background_object(create_aquabrick5_682(896, 1664), 3);
    add_background_object(create_aquabrick21_683(1152, 1792), 3);
    add_background_object(create_aquabrick3_691(1280, 1792), 3);
    add_background_object(create_aquabrick6_709(1024, 1616), 3);
    add_background_object(create_aquabrick13_712(1136, 1616), 3);
    add_background_object(create_aquabrick4_707(1016, 1632), 3);
    add_background_object(create_aquabrick4_707(1016, 1696), 3);
    add_background_object(create_aquabrick1_676(960, 1760), 3);
    add_background_object(create_aquabrick16_684(1016, 1760), 3);
    add_background_object(create_aquabrick14_693(1136, 1632), 3);
    add_background_object(create_aquabrick14_693(1136, 1696), 3);
    add_background_object(create_aquabrick14_693(1136, 1760), 3);
    add_background_object(create_aquabrick2_706(896, 1616), 3);
    add_background_object(create_aquabrick1_676(896, 1888), 3);
    add_background_object(create_aquabrick1_676(960, 1888), 3);
    add_background_object(create_aquabrick2_706(896, 1872), 3);
    add_background_object(create_aquabrick2_706(960, 1872), 3);
    add_background_object(create_aquabrick1_676(896, 1760), 3);
    add_background_object(create_aquabrick1_676(832, 1760), 3);
    add_background_object(create_aquabrick1_676(768, 1760), 3);
    add_background_object(create_aquabrick1_676(704, 1760), 3);
    add_background_object(create_aquabrick5_682(512, 1760), 3);
    add_background_object(create_aquabrick5_682(512, 1888), 3);
    add_background_object(create_aquabrick1_676(640, 1760), 3);
    add_background_object(create_aquabrick21_683(768, 1920), 3);
    add_background_object(create_aquabrick1_676(768, 1888), 3);
    add_background_object(create_aquabrick1_676(832, 1888), 3);
    add_background_object(create_aquabrick2_706(768, 1872), 3);
    add_background_object(create_aquabrick2_706(832, 1872), 3);
    add_background_object(create_aquabrick13_712(752, 1872), 3);
    add_background_object(create_aquabrick14_693(752, 1888), 3);
    add_background_object(create_aquabrick14_693(752, 1952), 3);
    add_background_object(create_aquabrick1_676(768, 2016), 3);
    add_background_object(create_aquabrick1_676(832, 2016), 3);
    add_background_object(create_aquabrick15_685(752, 2016), 3);
    add_background_object(create_aquabrick1_676(896, 2016), 3);
    add_background_object(create_aquabrick1_676(960, 2016), 3);
    add_background_object(create_aquabrick3_691(128, 1888), 3);
    add_background_object(create_aquabrick3_691(0, 1888), 3);
    add_background_object(create_aquabrick3_691(128, 1952), 3);
    add_background_object(create_aquabrick3_691(0, 1952), 3);
    add_background_object(create_aquabrick5_682(512, 2016), 3);
    add_background_object(create_aquabrick4_707(632, 1792), 3);
    add_background_object(create_aquabrick4_707(632, 1856), 3);
    add_background_object(create_aquabrick4_707(632, 1920), 3);
    add_background_object(create_aquabrick4_707(632, 1984), 3);
    add_background_object(create_aquabrick4_707(632, 2048), 3);
    add_background_object(create_aquabrick1_676(640, 2112), 3);
    add_background_object(create_aquabrick3_691(384, 2016), 3);
    add_background_object(create_aquabrick3_691(256, 2016), 3);
    add_background_object(create_aquabrick3_691(384, 2080), 3);
    add_background_object(create_aquabrick3_691(256, 2080), 3);
    add_background_object(create_aquabrick3_691(384, 2144), 3);
    add_background_object(create_aquabrick3_691(256, 2144), 3);
    add_background_object(create_aquabrick3_691(384, 2208), 3);
    add_background_object(create_aquabrick3_691(256, 2208), 3);
    add_background_object(create_aquabrick3_691(640, 2144), 3);
    add_background_object(create_aquabrick3_691(512, 2144), 3);
    add_background_object(create_aquabrick3_691(640, 2208), 3);
    add_background_object(create_aquabrick3_691(512, 2208), 3);
    add_background_object(create_aquabrick3_691(384, 2272), 3);
    add_background_object(create_aquabrick3_691(256, 2272), 3);
    add_background_object(create_aquabrick3_691(640, 2272), 3);
    add_background_object(create_aquabrick3_691(512, 2272), 3);
    add_background_object(create_aquabrick1_676(704, 2112), 3);
    add_background_object(create_aquabrick2_706(640, 2096), 3);
    add_background_object(create_aquabrick2_706(704, 2096), 3);
    add_background_object(create_aquabrick1_676(768, 2112), 3);
    add_background_object(create_aquabrick3_691(768, 2144), 3);
    add_background_object(create_aquabrick3_691(768, 2208), 3);
    add_background_object(create_aquabrick3_691(768, 2272), 3);
    add_background_object(create_aquabrick1_676(832, 2112), 3);
    add_background_object(create_aquabrick2_706(768, 2096), 3);
    add_background_object(create_aquabrick2_706(832, 2096), 3);
    add_background_object(create_aquabrick1_676(896, 2112), 3);
    add_background_object(create_aquabrick3_691(896, 2272), 3);
    add_background_object(create_aquabrick1_676(960, 2112), 3);
    add_background_object(create_aquabrick2_706(896, 2096), 3);
    add_background_object(create_aquabrick2_706(960, 2096), 3);
    add_background_object(create_aquabrick1_676(1024, 2016), 3);
    add_background_object(create_aquabrick1_676(1088, 2016), 3);
    add_background_object(create_aquabrick1_676(1152, 2016), 3);
    add_background_object(create_aquabrick1_676(1216, 2016), 3);
    add_background_object(create_atsewerpipe6_672(752, 2048), 3);
    add_background_object(create_atsewerpipe6_672(752, 2064), 3);
    add_background_object(create_atsewerpipe6_672(1024, 2048), 3);
    add_background_object(create_atsewerpipe6_672(1024, 2072), 3);
    add_background_object(create_aquabrick6_709(1024, 2096), 3);
    add_background_object(create_aquabrick5_682(896, 2144), 3);
    add_background_object(create_aquabrick4_707(1016, 2112), 3);
    add_background_object(create_aquabrick4_707(1016, 2176), 3);
    add_background_object(create_aquabrick3_691(640, 2336), 3);
    add_background_object(create_aquabrick3_691(768, 2336), 3);
    add_background_object(create_aquabrick3_691(896, 2336), 3);
    add_background_object(create_aquabrick3_691(1024, 2336), 3);
    add_background_object(create_aquabrick3_691(1152, 2336), 3);
    add_background_object(create_aquabrick3_691(1280, 2336), 3);
    add_background_object(create_aquabrick3_691(1024, 2272), 3);
    add_background_object(create_aquabrick3_691(1152, 2272), 3);
    add_background_object(create_aquabrick3_691(1280, 2272), 3);
    add_background_object(create_aquabrick1_676(1024, 2240), 3);
    add_background_object(create_aquabrick1_676(1088, 2240), 3);
    add_background_object(create_aquabrick1_676(1152, 2240), 3);
    add_background_object(create_aquabrick1_676(1216, 2240), 3);
    add_background_object(create_aquabrick1_676(1280, 2240), 3);
    add_background_object(create_aquabrick1_676(1344, 2240), 3);
    add_background_object(create_aquabrick2_706(1024, 2224), 3);
    add_background_object(create_aquabrick2_706(1088, 2224), 3);
    add_background_object(create_aquabrick2_706(1152, 2224), 3);
    add_background_object(create_aquabrick2_706(1216, 2224), 3);
    add_background_object(create_aquabrick2_706(1280, 2224), 3);
    add_background_object(create_aquabrick1_676(1280, 2112), 3);
    add_background_object(create_aquabrick1_676(1344, 2112), 3);
    add_background_object(create_aquabrick3_691(1408, 1792), 3);
    add_background_object(create_aquabrick1_676(1408, 1856), 3);
    add_background_object(create_aquabrick1_676(1472, 1856), 3);
    add_background_object(create_aquabrick15_685(1264, 2112), 3);
    add_background_object(create_aquabrick2_706(1344, 2224), 3);
    add_background_object(create_aquabrick21_683(1536, 2112), 3);
    add_background_object(create_aquabrick3_691(1408, 2336), 3);
    add_background_object(create_aquabrick3_691(1408, 2272), 3);
    add_background_object(create_aquabrick1_676(1408, 2240), 3);
    add_background_object(create_aquabrick1_676(1472, 2240), 3);
    add_background_object(create_aquabrick2_706(1408, 2224), 3);
    add_background_object(create_aquabrick21_683(1536, 2144), 3);
    add_background_object(create_aquabrick3_691(1536, 2336), 3);
    add_background_object(create_aquabrick3_691(1536, 2272), 3);
    add_background_object(create_aquabrick3_691(1664, 1920), 3);
    add_background_object(create_aquabrick3_691(1664, 1984), 3);
    add_background_object(create_aquabrick3_691(1664, 2048), 3);
    add_background_object(create_aquabrick3_691(1664, 2112), 3);
    add_background_object(create_aquabrick3_691(1664, 2176), 3);
    add_background_object(create_aquabrick3_691(1664, 2240), 3);
    add_background_object(create_aquabrick3_691(1664, 2304), 3);
    add_background_object(create_aquabrick3_691(1664, 2336), 3);
    add_background_object(create_aquabrick3_691(1792, 1920), 3);
    add_background_object(create_aquabrick3_691(1792, 1984), 3);
    add_background_object(create_aquabrick3_691(1792, 2048), 3);
    add_background_object(create_aquabrick3_691(1792, 2112), 3);
    add_background_object(create_aquabrick3_691(1792, 2176), 3);
    add_background_object(create_aquabrick3_691(1792, 2240), 3);
    add_background_object(create_aquabrick3_691(1792, 2304), 3);
    add_background_object(create_aquabrick3_691(1792, 2336), 3);
    add_background_object(create_aquabrick14_693(1520, 2144), 3);
    add_background_object(create_aquabrick15_685(1520, 2208), 3);
    add_background_object(create_aquabrick2_706(1472, 2224), 3);
    add_background_object(create_atsewerpipe6_672(1264, 2192), 3);
    add_background_object(create_atsewerpipe6_672(1264, 2160), 3);
    add_background_object(create_aquabrick1_676(1984, 1696), 3);
    add_background_object(create_aquabrick1_676(1920, 1696), 3);
    add_background_object(create_aquabrick1_676(1280, 1856), 3);
    add_background_object(create_aquabrick1_676(1344, 1856), 3);
    add_background_object(create_aquabrick1_676(1152, 1856), 3);
    add_background_object(create_aquabrick14_693(1136, 1824), 3);
    add_background_object(create_aquabrick2_706(1088, 1872), 3);
    add_background_object(create_aquabrick1_676(1216, 1856), 3);
    add_background_object(create_aquabrick1_676(1216, 1888), 3);
    add_background_object(create_aquabrick1_676(1152, 1888), 3);
    add_background_object(create_aquabrick1_676(1280, 1984), 3);
    add_background_object(create_aquabrick1_676(1344, 1984), 3);
    add_background_object(create_aquabrick1_676(1280, 2080), 3);
    add_background_object(create_aquabrick11_688(1344, 2080), 3);
    add_background_object(create_aquabrick11_688(1280, 2048), 3);
    add_background_object(create_aquabrick14_693(1264, 2048), 3);
    add_background_object(create_aquabrick1_676(1344, 2048), 3);
    add_background_object(create_aquabrick1_676(1280, 2016), 3);
    add_background_object(create_aquabrick1_676(1344, 2016), 3);
    add_background_object(create_aquabrick2_706(1344, 1968), 3);
    add_background_object(create_aquabrick4_707(1272, 1888), 3);
    add_background_object(create_aquabrick21_683(1536, 1984), 3);
    add_background_object(create_aquabrick21_683(1536, 1856), 3);
    add_background_object(create_aquabrick14_693(1520, 2080), 3);
    add_background_object(create_aquabrick14_693(1520, 2016), 3);
    add_background_object(create_aquabrick14_693(1520, 1952), 3);
    add_background_object(create_aquabrick14_693(1520, 1888), 3);
    add_background_object(create_aquabrick6_709(1408, 1968), 3);
    add_background_object(create_aquabrick4_707(1400, 1984), 3);
    add_background_object(create_aquabrick4_707(1400, 2048), 3);
    add_background_object(create_aquabrick16_684(1400, 2112), 3);
    add_background_object(create_aquabrick16_684(1272, 1952), 3);
    add_background_object(create_aquabrick2_706(1280, 1968), 3);
    add_background_object(create_aquaplant1_670(2808, 800), 3);
    add_background_object(create_aquaplant2_694(2848, 768), 3);
    add_background_object(create_aquaplant1_670(2992, 800), 3);
    add_background_object(create_aquaplant2_694(3168, 160), 3);
    add_background_object(create_aquaplant2_694(3328, 160), 3);
    add_background_object(create_aquaplant1_670(3288, 192), 3);
    add_background_object(create_aquaplant1_670(3088, 192), 3);
    add_background_object(create_aquaplant1_670(3416, 192), 3);
    add_background_object(create_aquaplant2_694(4200, 160), 3);
    add_background_object(create_aquaplant1_670(4152, 192), 3);
    add_background_object(create_aquaplant1_670(4640, 224), 3);
    add_background_object(create_aquaplant1_670(4736, 224), 3);
    add_background_object(create_lightray1_659(1200, 528), 3);
    add_background_object(create_lightray2_666(1168, 592), 3);
    add_background_object(create_lightray1_659(1184, 560), 3);
    add_background_object(create_lightray1_659(568, 896), 3);
    add_background_object(create_lightray1_659(552, 928), 3);
    add_background_object(create_lightray1_659(536, 960), 3);
    add_background_object(create_lightray2_666(520, 992), 3);
    add_background_object(create_lightray1_659(952, 1072), 3);
    add_background_object(create_lightray2_666(920, 1136), 3);
    add_background_object(create_lightray1_659(936, 1104), 3);
    add_background_object(create_lightray1_659(1080, 1072), 3);
    add_background_object(create_lightray2_666(1064, 1104), 3);
    add_background_object(create_lightray1_659(1080, 1296), 3);
    add_background_object(create_lightray2_666(1048, 1360), 3);
    add_background_object(create_lightray1_659(1064, 1328), 3);
    add_background_object(create_lightray1_659(1208, 1296), 3);
    add_background_object(create_lightray2_666(1192, 1328), 3);
    add_background_object(create_lightray1_659(1400, 1296), 3);
    add_background_object(create_lightray2_666(1368, 1360), 3);
    add_background_object(create_lightray1_659(1384, 1328), 3);
    add_background_object(create_lightray1_659(2104, 1232), 3);
    add_background_object(create_lightray1_659(2088, 1264), 3);
    add_background_object(create_lightray2_666(2072, 1296), 3);
    add_background_object(create_lightray1_659(2680, 1232), 3);
    add_background_object(create_lightray2_666(2648, 1296), 3);
    add_background_object(create_lightray1_659(2664, 1264), 3);
    add_background_object(create_lightray1_659(1968, 624), 3);
    add_background_object(create_lightray1_659(1952, 656), 3);
    add_background_object(create_lightray1_659(1936, 688), 3);
    add_background_object(create_lightray2_666(1920, 720), 3);
    add_background_object(create_lightray1_659(2168, 752), 3);
    add_background_object(create_lightray1_659(2152, 784), 3);
    add_background_object(create_lightray2_666(2136, 816), 3);
    add_background_object(create_lightray1_659(696, 1792), 3);
    add_background_object(create_lightray2_666(680, 1824), 3);
    add_background_object(create_lightray1_659(1144, 2048), 3);
    add_background_object(create_lightray2_666(1112, 2112), 3);
    add_background_object(create_lightray1_659(1128, 2080), 3);
    add_background_object(create_lightray2_666(1320, 1920), 3);
    add_background_object(create_lightray1_659(1336, 1888), 3);
    add_background_object(create_athandlebar_733(672, 1168), 3);
    add_background_object(create_athandlebar_733(2176, 1232), 3);
    add_background_object(create_athandlebar_733(2304, 1232), 3);
    add_background_object(create_athandlebar_733(2432, 1232), 3);
    add_background_object(create_athandlebar_733(2560, 1232), 3);
    add_background_object(create_aquabrick14_693(1632, 624), 3);
    add_background_object(create_aquabrick14_693(1632, 688), 3);
    add_background_object(create_aquabrick2_706(1536, 704), 3);
    add_background_object(create_aquabrick2_706(1472, 704), 3);
    add_background_object(create_aquabrick2_706(1408, 704), 3);
    add_background_object(create_aquabrick2_706(1344, 704), 3);
    add_background_object(create_aquabrick2_706(1280, 704), 3);
    add_background_object(create_aquabrick13_712(1264, 704), 3);
    add_background_object(create_aquabrick1_676(1344, 720), 3);
    add_background_object(create_aquabrick1_676(1408, 720), 3);
    add_background_object(create_aquabrick1_676(1472, 720), 3);
    add_background_object(create_aquabrick1_676(1536, 720), 3);
    add_background_object(create_aquabrick1_676(1600, 720), 3);
    add_background_object(create_aquabrick1_676(1600, 592), 3);
    add_background_object(create_aquabrick1_676(1536, 592), 3);
    add_background_object(create_aquabrick1_676(1472, 592), 3);
    add_background_object(create_aquabrick1_676(1408, 592), 3);
    add_background_object(create_aquabrick1_676(1344, 592), 3);
    add_background_object(create_aquabrick1_676(1280, 592), 3);
    add_background_object(create_aquabrick15_685(1264, 592), 3);
    add_object(create_slimeraft_843(2328, 948), 3);
    add_object(create_slimeraft_843(4952, 276), 3);
    add_object(create_playerstartingpoint_358(53, 605), 3);
    add_object(create_laddertop_357(-132, 991), 3);
    add_object(create_breakableaquabrick_743(-424, 1608), 3);
    add_object(create_waterjetback_749(-480, 1616), 3);
    add_object(create_cameratriggerboss_424(6824, 80), 3);
    add_object(create_enemyslime_741(511, 613), 3);
    add_object(create_enemyslime_741(775, 613), 3);
    add_object(create_enemyslime_741(863, 613), 3);
    add_object(create_enemyslime_741(959, 613), 3);
    add_object(create_enemylimiter_350(21, 610), 3);
    add_object(create_enemylimiter_350(53, 610), 3);
    add_object(create_enemylimiter_350(1157, 610), 3);
    add_object(create_enemylimiter_350(1125, 610), 3);
    add_object(create_hazardspikesdown_756(656, 496), 3);
    add_object(create_hazardspikesdown_756(1104, 496), 3);
    add_object(create_hazardspikesdown_756(688, 496), 3);
    add_object(create_hazardspikesdown_756(720, 496), 3);
    add_object(create_hazardspikesdown_756(752, 496), 3);
    add_object(create_hazardspikesdown_756(784, 496), 3);
    add_object(create_hazardspikesdown_756(816, 496), 3);
    add_object(create_hazardspikesdown_756(848, 496), 3);
    add_object(create_hazardspikesdown_756(880, 496), 3);
    add_object(create_hazardspikesdown_756(912, 496), 3);
    add_object(create_hazardspikesdown_756(944, 496), 3);
    add_object(create_hazardspikesdown_756(976, 496), 3);
    add_object(create_hazardspikesdown_756(1008, 496), 3);
    add_object(create_hazardspikesdown_756(1040, 496), 3);
    add_object(create_hazardspikesdown_756(1072, 496), 3);
    add_object(create_hazardspikesdown_756(272, 496), 3);
    add_object(create_hazardspikesdown_756(304, 496), 3);
    add_object(create_hazardspikesdown_756(336, 496), 3);
    add_object(create_objectpetal_302(513, 545), 3);
    add_object(create_objectpetal_302(561, 545), 3);
    add_object(create_objectpetal_302(465, 545), 3);
    add_object(create_collapsingplatform_745(352, 1295), 3);
    add_object(create_enemygansekijr_816(1335, 1172), 3);
    add_object(create_objectcrystal_279(589, 1010), 3);
    add_object(create_objectcrystal_279(557, 1010), 3);
    add_object(create_objectcrystal_279(525, 1010), 3);
    add_object(create_objectcrystal_279(493, 1010), 3);
    add_object(create_objectcrystal_279(461, 1010), 3);
    add_object(create_objectcrystal_279(1077, 1426), 3);
    add_object(create_objectcrystal_279(1205, 1426), 3);
    add_object(create_objectcrystal_279(1173, 1426), 3);
    add_object(create_objectcrystal_279(1141, 1426), 3);
    add_object(create_objectcrystal_279(1109, 1426), 3);
    add_object(create_axelplatformmaker2_747(1808, 1464), 3);
    add_object(create_slimefloor_839(2176, 944), 3);
    add_object(create_slimefloor_839(2432, 944), 3);
    add_object(create_slimefloor_839(2560, 944), 3);
    add_object(create_slimefloor_839(2688, 944), 3);
    add_object(create_slimefloor_839(2304, 944), 3);
    add_object(create_redspringupleft_439(3024, 800), 3);
    add_object(create_redspringupright_438(2320, 416), 3);
    add_object(create_yellowspringleft_436(3616, 400), 3);
    add_object(create_yellowspringleft_436(3616, 368), 3);
    add_object(create_yellowspringleft_436(3616, 272), 3);
    add_object(create_yellowspringleft_436(3616, 240), 3);
    add_object(create_yellowspringleft_436(3616, 208), 3);
    add_object(create_yellowspringright_435(3472, 224), 3);
    add_object(create_yellowspringright_435(3472, 256), 3);
    add_object(create_yellowspringright_435(3472, 288), 3);
    add_object(create_yellowspringright_435(3472, 320), 3);
    add_object(create_yellowspringright_435(3472, 352), 3);
    add_object(create_yellowspringright_435(3472, 384), 3);
    add_object(create_yellowspringright_435(3472, 416), 3);
    add_object(create_yellowspringright_435(3472, 448), 3);
    add_object(create_yellowspringright_435(3472, 480), 3);
    add_object(create_yellowspringright_435(3472, 512), 3);
    add_object(create_yellowspringright_435(3472, 544), 3);
    add_object(create_yellowspringleft_436(3616, 336), 3);
    add_object(create_yellowspringleft_436(3616, 304), 3);
    add_object(create_waterjet_748(3664, 320), 3);
    add_object(create_waterjet_748(3664, 256), 3);
    add_object(create_waterjet_748(3664, 128), 3);
    add_object(create_waterjet_748(3664, 64), 3);
    add_object(create_waterjet_748(3664, 0), 3);
    add_object(create_waterjet_748(3824, 320), 3);
    add_object(create_waterjet_748(3824, 256), 3);
    add_object(create_objectcodec_354(3786, 165), 3);
    add_object(create_objectpetal_302(3705, 169), 3);
    add_object(create_objectpetal_302(3745, 169), 3);
    add_object(create_objectcrystal_279(2333, 922), 3);
    add_object(create_objectcrystal_279(2381, 922), 3);
    add_object(create_objectcrystal_279(2429, 922), 3);
    add_object(create_objectcrystal_279(2477, 922), 3);
    add_object(create_objectcrystal_279(2525, 922), 3);
    add_object(create_objectcrystal_279(2573, 922), 3);
    add_object(create_objectcrystal_279(2621, 922), 3);
    add_object(create_slimefloor_839(4224, 272), 3);
    add_object(create_slimefloor_839(4480, 272), 3);
    add_object(create_slimefloor_839(4352, 272), 3);
    add_object(create_slimefloor_839(4608, 272), 3);
    add_object(create_waterjetback_749(3136, 272), 3);
    add_object(create_waterjetback_749(3392, 272), 3);
    add_object(create_waterjetback_749(2240, 672), 3);
    add_object(create_slimefloor_839(2176, 1440), 3);
    add_object(create_slimefloor_839(2432, 1440), 3);
    add_object(create_slimefloor_839(2560, 1440), 3);
    add_object(create_slimefloor_839(2688, 1440), 3);
    add_object(create_slimefloor_839(2304, 1440), 3);
    add_object(create_objectcrystal_279(2213, 1290), 3);
    add_object(create_objectcrystal_279(2277, 1266), 3);
    add_object(create_objectcrystal_279(2341, 1290), 3);
    add_object(create_objectcrystal_279(2405, 1266), 3);
    add_object(create_objectcrystal_279(2469, 1290), 3);
    add_object(create_objectcrystal_279(2533, 1266), 3);
    add_object(create_objectcrystal_279(2597, 1290), 3);
    add_object(create_aquabrickplatform_805(2880, 832), 3);
    add_object(create_aquabrickplatform_805(2944, 832), 3);
    add_object(create_redspringup_440(2896, 1344), 3);
    add_object(create_redspringup_440(2928, 1344), 3);
    add_object(create_redspringup_440(2960, 1344), 3);
    add_object(create_monitorrings_407(3072, 1296), 3);
    add_object(create_slimefloor_839(6208, 272), 3);
    add_object(create_slimefloor_839(6336, 272), 3);
    add_object(create_slimefloor_839(6464, 272), 3);
    add_object(create_slimefloor_839(6592, 272), 3);
    add_object(create_gimmickhangingidlesensor_740(2337, 1256), 3);
    add_object(create_gimmickhangingidlesensor_740(2465, 1256), 3);
    add_object(create_gimmickhangingidlesensor_740(2593, 1256), 3);
    add_object(create_gimmickhangingidlesensor_740(2209, 1256), 3);
    add_object(create_yellowspringup_434(2160, 1408), 3);
    add_object(create_sign_771(7424, -123), 3);
    add_object(create_slimefloor_839(6720, 272), 3);
    add_object(create_slimefloor_839(6848, 272), 3);
    add_object(create_slimefloor_839(6976, 272), 3);
    add_object(create_slimefloor_839(7104, 272), 3);
    add_object(create_scrollingbrick_845(6912, 304), 3);
    add_object(create_scrollingbrick_845(7040, 304), 3);
    add_object(create_scrollingbrick_845(6784, 304), 3);
    add_object(create_scrollingbrick_845(6656, 304), 3);
    add_object(create_scrollingbrick_845(6528, 304), 3);
    add_object(create_scrollingbrick_845(6400, 304), 3);
    add_object(create_slimefloor_839(5824, 272), 3);
    add_object(create_slimefloor_839(5696, 272), 3);
    add_object(create_slimefloor_839(5568, 272), 3);
    add_object(create_slimefloor_839(5440, 272), 3);
    add_object(create_slimefloor_839(5312, 272), 3);
    add_object(create_slimefloor_839(5184, 272), 3);
    add_object(create_slimefloor_839(5056, 272), 3);
    add_object(create_slimefloor_839(4928, 272), 3);
    add_object(create_slimefloor_839(4800, 272), 3);
    add_object(create_slimefloor_839(6080, 272), 3);
    add_object(create_slimefloor_839(5952, 272), 3);
    add_object(create_enemyfirefly_742(5263, 242), 3);
    add_object(create_enemyfirefly_742(5551, 186), 3);
    add_object(create_enemyfirefly_742(5799, 210), 3);
    add_object(create_enemyfirefly_742(5999, 234), 3);
    add_object(create_enemyslime_741(4143, 213), 3);
    add_object(create_enemylimiter_350(4189, 210), 3);
    add_object(create_enemylimiter_350(4221, 210), 3);
    add_object(create_enemylimiter_350(4117, 210), 3);
    add_object(create_enemylimiter_350(4085, 210), 3);
    add_object(create_enemyslime_741(4703, 245), 3);
    add_object(create_enemylimiter_350(4613, 242), 3);
    add_object(create_enemylimiter_350(4645, 242), 3);
    add_object(create_enemylimiter_350(4789, 242), 3);
    add_object(create_enemylimiter_350(4821, 242), 3);
    add_object(create_objectcodec_354(2946, 877), 3);
    add_object(create_objectcrystal_279(797, 2074), 3);
    add_object(create_objectcrystal_279(997, 2074), 3);
    add_object(create_objectcrystal_279(837, 2074), 3);
    add_object(create_objectcrystal_279(957, 2074), 3);
    add_object(create_objectcrystal_279(877, 2074), 3);
    add_object(create_objectcrystal_279(917, 2074), 3);
    add_object(create_objectcodec_354(1346, 1933), 3);
    add_object(create_objectcrystal_279(1069, 2074), 3);
    add_object(create_objectcrystal_279(1093, 2098), 3);
    add_object(create_objectcrystal_279(1117, 2122), 3);
    add_object(create_objectcrystal_279(1141, 2146), 3);
    add_object(create_objectcrystal_279(1165, 2170), 3);
    add_object(create_objectcrystal_279(1189, 2194), 3);
    add_object(create_objectcrystal_279(1117, 2074), 3);
    add_object(create_objectcrystal_279(1141, 2098), 3);
    add_object(create_objectcrystal_279(1165, 2122), 3);
    add_object(create_objectcrystal_279(1189, 2146), 3);
    add_object(create_objectcrystal_279(1213, 2170), 3);
    add_object(create_objectcrystal_279(1237, 2194), 3);
    add_object(create_objectcrystal_279(1165, 2074), 3);
    add_object(create_objectcrystal_279(1189, 2098), 3);
    add_object(create_objectcrystal_279(1213, 2122), 3);
    add_object(create_objectcrystal_279(1237, 2146), 3);
    add_object(create_objectcrystal_279(1213, 2074), 3);
    add_object(create_objectcrystal_279(1237, 2098), 3);
    add_object(create_objectcrystal_279(1069, 2122), 3);
    add_object(create_objectcrystal_279(1093, 2146), 3);
    add_object(create_objectcrystal_279(1117, 2170), 3);
    add_object(create_objectcrystal_279(1141, 2194), 3);
    add_object(create_objectcrystal_279(1069, 2170), 3);
    add_object(create_objectcrystal_279(1093, 2194), 3);
    add_object(create_minibosschomperhitbox_818(6280, 32), 3);
    add_object(create_monitorwoodshield_325(720, 1088), 3);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 3);
    add_object(create_gimmickhangingidlesensor_740(705, 1192), 3);
    add_object(create_objecttaostone_532(1529, 666), 3);
    add_object(create_monitorkeystone_562(1600, 672), 3);
    add_object(create_monitorkeystone_562(1488, 1520), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_aquabrick1_676(1280, 656), 4);
    add_background_object(create_aquabrick1_676(1280, 688), 4);
    add_background_object(create_aquabrick1_676(384, 1440), 4);
    add_background_object(create_aquabrick2_706(384, 1424), 4);
    add_background_object(create_aquabrick3_691(384, 1472), 4);
    add_background_object(create_aquabrick3_691(384, 1536), 4);
    add_background_object(create_aquabrick1_676(448, 1440), 4);
    add_background_object(create_aquabrick2_706(448, 1424), 4);
    add_background_object(create_aquabrick1_676(512, 1440), 4);
    add_background_object(create_aquabrick2_706(512, 1424), 4);
    add_background_object(create_aquabrick3_691(512, 1472), 4);
    add_background_object(create_aquabrick3_691(512, 1536), 4);
    add_background_object(create_aquabrick1_676(576, 1440), 4);
    add_background_object(create_aquabrick2_706(576, 1424), 4);
    add_background_object(create_aquabrick1_676(640, 1440), 4);
    add_background_object(create_aquabrick2_706(640, 1424), 4);
    add_background_object(create_aquabrick3_691(640, 1472), 4);
    add_background_object(create_aquabrick3_691(640, 1536), 4);
    add_background_object(create_aquabrick1_676(704, 1440), 4);
    add_background_object(create_aquabrick2_706(704, 1424), 4);
    add_background_object(create_aquabrick1_676(768, 1440), 4);
    add_background_object(create_aquabrick2_706(768, 1424), 4);
    add_background_object(create_aquabrick1_676(832, 1440), 4);
    add_background_object(create_aquabrick2_706(832, 1424), 4);
    add_background_object(create_aquabrick5_682(768, 1472), 4);
    add_background_object(create_aquabrick6_709(896, 1424), 4);
    add_background_object(create_aquabrick4_707(888, 1440), 4);
    add_background_object(create_aquabrick4_707(888, 1504), 4);
    add_background_object(create_aquabrick4_707(888, 1568), 4);
    add_background_object(create_aquabrick1_676(1664, 1440), 4);
    add_background_object(create_aquabrick1_676(1728, 1440), 4);
    add_background_object(create_aquabrick2_706(1728, 1424), 4);
    add_background_object(create_aquabrick2_706(1664, 1424), 4);
    add_background_object(create_aquabrick3_691(1664, 1472), 4);
    add_background_object(create_aquabrick1_676(1792, 1440), 4);
    add_background_object(create_aquabrick1_676(1856, 1440), 4);
    add_background_object(create_aquabrick2_706(1856, 1424), 4);
    add_background_object(create_aquabrick2_706(1792, 1424), 4);
    add_background_object(create_aquabrick3_691(1792, 1472), 4);
    add_background_object(create_aquabrick1_676(1856, 592), 4);
    add_background_object(create_aquabrick1_676(1792, 592), 4);
    add_background_object(create_aquabrick1_676(1728, 592), 4);
    add_background_object(create_aquabrick1_676(1664, 592), 4);
    add_background_object(create_aquabrick1_676(1920, 592), 4);
    add_background_object(create_aquabrick1_676(1664, 560), 4);
    add_background_object(create_aquabrick1_676(1728, 560), 4);
    add_background_object(create_aquabrick1_676(1792, 560), 4);
    add_background_object(create_aquabrick1_676(1856, 560), 4);
    add_background_object(create_aquabrick1_676(1920, 560), 4);
    add_background_object(create_aquabrick3_691(1664, 496), 4);
    add_background_object(create_aquabrick3_691(1792, 496), 4);
    add_background_object(create_aquabrick1_676(1984, 592), 4);
    add_background_object(create_aquabrick1_676(1984, 560), 4);
    add_background_object(create_aquabrick3_691(1920, 496), 4);
    add_background_object(create_aquabrick3_691(1664, 432), 4);
    add_background_object(create_aquabrick3_691(1792, 432), 4);
    add_background_object(create_aquabrick3_691(1920, 432), 4);
    add_background_object(create_aquabrick5_682(1536, 496), 4);
    add_background_object(create_aquabrick4_707(1656, 624), 4);
    add_background_object(create_aquabrick3_691(1536, 432), 4);
    add_background_object(create_aquabrick3_691(1536, 496), 4);
    add_background_object(create_aquabrick3_691(1664, 1536), 4);
    add_background_object(create_aquabrick3_691(1792, 1536), 4);
    add_background_object(create_aquabrick1_676(1600, 592), 4);
    add_background_object(create_aquabrick1_676(1536, 592), 4);
    add_background_object(create_aquabrick14_693(1264, 656), 4);
    add_background_object(create_aquabrick1_676(1280, 624), 4);
    add_background_object(create_aquabrick1_676(1344, 656), 4);
    add_background_object(create_aquabrick1_676(1344, 688), 4);
    add_background_object(create_aquabrick1_676(1344, 624), 4);
    add_background_object(create_aquabrick4_707(1400, 624), 4);
    add_background_object(create_aquabrick4_707(1400, 688), 4);
    add_background_object(create_aquabrick1_676(1344, 720), 4);
    add_background_object(create_aquabrick1_676(1408, 720), 4);
    add_background_object(create_aquabrick3_691(1408, 496), 4);
    add_background_object(create_aquabrick3_691(1408, 560), 4);
    add_background_object(create_aquabrick1_676(1472, 592), 4);
    add_background_object(create_aquabrick1_676(1408, 592), 4);
    add_background_object(create_aquabrick21_683(1280, 496), 4);
    add_background_object(create_aquabrick14_693(1264, 528), 4);
    add_background_object(create_aquabrick1_676(1344, 592), 4);
    add_background_object(create_aquabrick1_676(1280, 592), 4);
    add_background_object(create_aquabrick14_693(1264, 592), 4);
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
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
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
    add_object(create_hazardspikesup_755(-208, 392), 5);
    add_object(create_hazardspikesdown_756(-168, 392), 5);
    add_object(create_hazardspikesleft_757(-128, 392), 5);
    add_object(create_hazardspikesright_758(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(6688, 319), 5);
    add_object(create_cameralimitbossleft_421(6464, 160), 5);
    add_object(create_cameralimitbossright_422(7039, 160), 5);
    add_object(create_cameralimitbosstop_423(6688, 8), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_monitorkeystone_562(-216, 80), 5);
    add_object(create_bubblepatch_806(-544, 77), 5);
    add_object(create_mediumbubble_769(-526, 74), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardactclear1_847(-160, 32), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-8, -56), 7);
    add_object(create_totalbonus_853(-2, -32), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
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
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
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
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_tally_running = false;
    loop_tally_index = 0;
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
    loop_gansekijr_floor_running = false;
    loop_gansekijr_floor_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_19, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_19, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_19, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_19, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_19, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_19, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_19, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_19, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_19, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_19, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_19, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_19, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_19, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_19, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_19, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_19, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_19, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_19, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_19, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_19, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_19, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_19, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_19, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_19, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_19, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_19, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_19, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_19, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_19, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_19, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_19, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_19, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_19, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_19, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_19, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_19, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_19, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_19, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_19, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_19, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_19, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_19, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_19, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_19, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_19, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_19, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_19, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_19, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_19, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_19, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_19, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_19, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_19, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_19, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    once_condition_1654_19 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1419_16 = loop_count;
    not_always_1643_19 = loop_count;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    once_condition_58_14 = false;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1521_19 = false;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1536_19 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1418_16 = loop_count;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    not_always_1645_19 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1642_19 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    not_always_1911_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_1 = false;
    not_always_1586_19 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    not_always_1644_19 = loop_count;
    not_always_69_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1514_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1542_19 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_destroyed_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_1520_19 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_chompersnake_main_boss_chompersnake_actions_1 = true;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    once_condition_1655_19 = false;
    not_always_103_0 = loop_count;
    not_always_1507_16 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    not_always_1626_19 = loop_count;
    not_always_236_13 = loop_count;
    not_always_1912_19 = loop_count;
    group_debug_mode_1 = false;
    not_always_100_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1637_19 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1514_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4326()
{
    // event 1541_20
    {
        if (!(group_main_engine_1)) goto event_1541_20_end;
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
    }
    event_1541_20_end: ;
}
void Frames::loop_cutscene_end_20()
{
    event_func_4326();
}
void Frames::event_func_4327()
{
    // event 1479_20
    {
        if (!(group_main_engine_1)) goto event_1479_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1479_20_end;
        FrameObject * single_instance_1479_20_0; single_instance_1479_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1479_20_0 == NULL)
                    single_instance_1479_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1479_20_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1479_20_0))->force_frame(((Active*)get_single(enemyturretus_938_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1479_20_end: ;
}
void Frames::loop_spawndebris_20()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_4327();
}
void Frames::event_func_4328()
{
    // event 1783_20
    {
        if (!(group_main_engine_1)) goto event_1783_20_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage1_ogg_131, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1783_20_end: ;
}
void Frames::loop_play_music_5_20()
{
    event_func_4328();
}
void Frames::event_func_4329()
{
    // event 1540_20
    {
        if (!(group_main_engine_1)) goto event_1540_20_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
            group_pause_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
    }
    event_1540_20_end: ;
}
void Frames::loop_cutscene_start_20()
{
    event_func_4329();
}
void Frames::event_func_4330()
{
    // event 1548_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1548_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1548_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.5);
        }
    }
    event_1548_20_end: ;
}
void Frames::event_func_4331()
{
    // event 1549_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1549_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1549_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.125);
        }
    }
    event_1549_20_end: ;
}
void Frames::event_func_4332()
{
    // event 1550_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1550_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1550_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_abs(sin_deg(((Active*)*it)->alterables->values.get(0)*4))+(((Active*)*it)->alterables->values.get(0)*0.01));
        }
    }
    event_1550_20_end: ;
}
void Frames::event_func_4333()
{
    // event 1551_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1551_20_end;
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinebody_946_instances.has_selection()) goto event_1551_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1551_20_end;
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_abs(sin_deg(((Active*)*it)->alterables->values.get(0)*4))+(((Active*)*it)->alterables->values.get(0)*0.01));
        }
    }
    event_1551_20_end: ;
}
void Frames::event_func_4334()
{
    // event 1552_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1552_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1552_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_abs(sin_deg(((Active*)*it)->alterables->values.get(0)*4))+(((Active*)*it)->alterables->values.get(0)*0.01)*0.25);
        }
    }
    event_1552_20_end: ;
}
void Frames::event_func_4335()
{
    // event 1553_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1553_20_end;
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinebody_946_instances.has_selection()) goto event_1553_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1553_20_end;
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_abs(sin_deg(((Active*)*it)->alterables->values.get(0)*4))+(((Active*)*it)->alterables->values.get(0)*0.01)*0.25);
        }
    }
    event_1553_20_end: ;
}
void Frames::loop_serpent_step_20()
{
    event_func_4330();
    event_func_4331();
    event_func_4332();
    event_func_4333();
    event_func_4334();
    event_func_4335();
}
void Frames::event_func_4336()
{
    // event 1561_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1561_20_end;
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_serpent_segments_index+1))) { it.deselect(); continue; }
        }
        if (!bossserpentinebody_946_instances.has_selection()) goto event_1561_20_end;
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!frontrock1_945_instances.has_selection()) goto event_1561_20_end;
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(frontrock1_945_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossserpentinebody_946_instances.has_selection()) goto event_1561_20_end;
        {
            ObjectIterator other_it(frontrock1_945_instances);
            for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1561_20_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1561_20_0_end: ;
    }
    event_1561_20_end: ;
}
void Frames::loop_serpent_segments_20()
{
    event_func_4336();
}
void Frames::loop_wrapper_sound_hurt1_20(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_20(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_20(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_20(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
