#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12637()
{
    // event 1605_58
    {
        if (!(group_main_engine_1)) goto event_1605_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1605_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1605_58_end: ;
}
void Frames::event_func_12638()
{
    // event 1606_58
    {
        if (!(group_main_engine_1)) goto event_1606_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1606_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
            ((Active*)*it)->alterables->values.set(9, randrange(20));
        }
    }
    event_1606_58_end: ;
}
void Frames::event_func_12639()
{
    // event 1607_58
    {
        if (!(group_main_engine_1)) goto event_1607_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1607_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(9, randrange(20));
        }
    }
    event_1607_58_end: ;
}
void Frames::event_func_12640()
{
    // event 1608_58
    {
        if (!(group_main_engine_1)) goto event_1608_58_end;
        every_1608_58 += manager.dt;
        if (every_1608_58 < 0.1) goto event_1608_58_end;
        every_1608_58 -= 0.1;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1608_58_end;
        media.play_id(SOUND_BIKE_SKID2_337, 24-1);
    }
    event_1608_58_end: ;
}
void Frames::event_func_12641()
{
    // event 1609_58
    {
        if (!(group_main_engine_1)) goto event_1609_58_end;
        every_1609_58 += manager.dt;
        if (every_1609_58 < 0.1) goto event_1609_58_end;
        every_1609_58 -= 0.1;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1609_58_end;
        media.play_id(SOUND_BIKE_SKID2_337, 24-1);
    }
    event_1609_58_end: ;
}
void Frames::event_func_12642()
{
    // event 1610_58
    {
        if (!(group_main_engine_1)) goto event_1610_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1610_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2, -10));
        }
    }
    event_1610_58_end: ;
}
void Frames::event_func_12643()
{
    // event 1611_58
    {
        if (!(group_main_engine_1)) goto event_1611_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (-2))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1611_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2, -10));
        }
    }
    event_1611_58_end: ;
}
void Frames::event_func_12644()
{
    // event 1612_58
    {
        if (!(group_main_engine_1)) goto event_1612_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1612_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.2, 10));
        }
    }
    event_1612_58_end: ;
}
void Frames::event_func_12645()
{
    // event 1613_58
    {
        if (!(group_main_engine_1)) goto event_1613_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (2))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1613_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.2, 10));
        }
    }
    event_1613_58_end: ;
}
void Frames::event_func_12646()
{
    // event 1614_58
    {
        if (!(group_main_engine_1)) goto event_1614_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1614_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1614_58_end: ;
}
void Frames::event_func_12647()
{
    // event 1615_58
    {
        if (!(group_main_engine_1)) goto event_1615_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1615_58_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
    }
    event_1615_58_end: ;
}
void Frames::event_func_12648()
{
    // event 1616_58
    {
        if (!(group_main_engine_1)) goto event_1616_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1616_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10-randrange(30));
            ((Active*)*it)->alterables->values.set(8, -10);
            ((Active*)*it)->alterables->flags.disable(13);
        }
    }
    event_1616_58_end: ;
}
void Frames::event_func_12649()
{
    // event 1617_58
    {
        if (!(group_main_engine_1)) goto event_1617_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1617_58_end;
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, yellowspringup_434_instances)) goto event_1617_58_end;
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1617_58_0; single_instance_1617_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringup_434_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1617_58_0 == NULL)
                    single_instance_1617_58_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1617_58_0))->set_layer(((Active*)get_single(yellowspringup_434_instances, default_active_instance))->layer->index+1-1);
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -12);
        }
    }
    event_1617_58_end: ;
}
void Frames::event_func_12650()
{
    // event 1618_58
    {
        if (!(group_main_engine_1)) goto event_1618_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1618_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1618_58_end: ;
}
void Frames::event_func_12651()
{
    // event 1619_58
    {
        if (!(group_main_engine_1)) goto event_1619_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1619_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.3, 15));
        }
    }
    event_1619_58_end: ;
}
void Frames::event_func_12652()
{
    // event 1620_58
    {
        if (!(group_main_engine_1)) goto event_1620_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (((Active*)*it)->alterables->values.get(20)))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1620_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1620_58_end: ;
}
void Frames::event_func_12653()
{
    // event 1621_58
    {
        if (!(group_main_engine_1)) goto event_1621_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (((Active*)*it)->alterables->values.get(20)+2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1621_58_end;
        FrameObject * single_instance_1621_58_0; single_instance_1621_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybikeninjamask_3171_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyninjastar_3173(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -12), parent->layer);
                if (single_instance_1621_58_0 == NULL)
                    single_instance_1621_58_0 = new_obj;
            }
        }
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
    }
    event_1621_58_end: ;
}
void Frames::event_func_12654()
{
    // event 1622_58
    {
        if (!(group_main_engine_1)) goto event_1622_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (((Active*)*it)->alterables->values.get(20)+2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1622_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1622_58_end: ;
}
void Frames::event_func_12655()
{
    // event 1623_58
    {
        if (!(group_main_engine_1)) goto event_1623_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1623_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1623_58_end: ;
}
void Frames::event_func_12656()
{
    // event 1624_58
    {
        if (!(group_main_engine_1)) goto event_1624_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)*it)->alterables->values.get(0)*2, 0);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1624_58_end: ;
}
void Frames::event_func_12657()
{
    // event 1625_58
    {
        if (!(group_main_engine_1)) goto event_1625_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1625_58_end;
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1625_58_end: ;
}
void Frames::event_func_12658()
{
    // event 1626_58
    {
        if (!(group_main_engine_1)) goto event_1626_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1626_58_end;
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_abs(((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1626_58_end: ;
}
void Frames::event_func_12659()
{
    // event 1627_58
    {
        if (!(group_main_engine_1)) goto event_1627_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1627_58_end;
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1627_58_end: ;
}
void Frames::event_func_12660()
{
    // event 1628_58
    {
        if (!(group_main_engine_1)) goto event_1628_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1628_58_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(enemyninjastar_3173_instances, playerreflect_447_instances)) goto event_1628_58_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1628_58_end;
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1628_58_end: ;
}
void Frames::event_func_12661()
{
    // event 1630_58
    {
        if (!(group_main_engine_1)) goto event_1630_58_end;
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1630_58_end;
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
        FrameObject * single_instance_1630_58_0; single_instance_1630_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyninjastar_3173_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1630_58_0 == NULL)
                    single_instance_1630_58_0 = new_obj;
            }
        }
    }
    event_1630_58_end: ;
}
void Frames::event_func_12662()
{
    // event 1631_58
    {
        if (!(group_main_engine_1)) goto event_1631_58_end;
        enemyninjastar_3173_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemyninjastar_3173_instances, playercharactersensor_383_instances)) goto event_1631_58_end;
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyninjastar_3173_instances.has_selection()) goto event_1631_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1631_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1631_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(1, 2);
    }
    event_1631_58_end: ;
}
void Frames::event_func_12663()
{
    // event 1633_58
    {
        if (!(group_main_engine_1)) goto event_1633_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1633_58_end: ;
}
void Frames::event_func_12664()
{
    // event 1634_58
    bool or_result_1634_58 = false;
    bool or_temp_result_1634_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1634_58_0_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto or_event_1634_58_0_end;
        or_result_1634_58 = true;
        or_temp_result_1634_58_0 = true;
    }
    or_event_1634_58_0_end: ;
    enemybikeninjamask_3171_instances.clear_saved_selection();
    if (or_temp_result_1634_58_0) {
        enemybikeninjamask_3171_instances.save_selection();
    }
    // event 1634_58
    bool or_temp_result_1634_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1634_58_1_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto or_event_1634_58_1_end;
        or_result_1634_58 = true;
        or_temp_result_1634_58_1 = true;
    }
    or_event_1634_58_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1634_58_1) {
        enemybikeninjamask_3171_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1634_58
    bool or_temp_result_1634_58_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1634_58_2_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto or_event_1634_58_2_end;
        or_result_1634_58 = true;
        or_temp_result_1634_58_2 = true;
        or_event_1634_58_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1634_58_2) {
            enemybikeninjamask_3171_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1634_58) goto or_final_or_event_1634_58_2_end;
        enemybikeninjamask_3171_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1634_58_0 || or_temp_result_1634_58_1 || or_temp_result_1634_58_2) {
            enemybikeninjamask_3171_instances.restore_selection();
        }
        if (or_temp_result_1634_58_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1634_58_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    or_final_or_event_1634_58_2_end: ;
}
void Frames::event_func_12665()
{
    // event 1635_58
    bool or_result_1635_58 = false;
    bool or_temp_result_1635_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_58_0_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto or_event_1635_58_0_end;
        or_result_1635_58 = true;
        or_temp_result_1635_58_0 = true;
    }
    or_event_1635_58_0_end: ;
    enemybikeninjamask_3171_instances.clear_saved_selection();
    if (or_temp_result_1635_58_0) {
        enemybikeninjamask_3171_instances.save_selection();
    }
    // event 1635_58
    bool or_temp_result_1635_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_58_1_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto or_event_1635_58_1_end;
        or_result_1635_58 = true;
        or_temp_result_1635_58_1 = true;
    }
    or_event_1635_58_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1635_58_1) {
        enemybikeninjamask_3171_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1635_58
    bool or_temp_result_1635_58_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_58_2_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto or_event_1635_58_2_end;
        or_result_1635_58 = true;
        or_temp_result_1635_58_2 = true;
        or_event_1635_58_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1635_58_2) {
            enemybikeninjamask_3171_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1635_58) goto or_final_or_event_1635_58_2_end;
        enemybikeninjamask_3171_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1635_58_0 || or_temp_result_1635_58_1 || or_temp_result_1635_58_2) {
            enemybikeninjamask_3171_instances.restore_selection();
        }
        if (or_temp_result_1635_58_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1635_58_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1635_58_2_end: ;
}
void Frames::event_func_12666()
{
    // event 1638_58
    {
        if (!(group_main_engine_1)) goto event_1638_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1638_58_end;
        if (!check_not_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto event_1638_58_end;
        if (!check_not_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto event_1638_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1638_58_end: ;
}
void Frames::event_func_12667()
{
    // event 1642_58
    {
        if (!(group_main_engine_1)) goto event_1642_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1642_58_end: ;
}
void Frames::event_func_12668()
{
    // event 1643_58
    bool or_result_1643_58 = false;
    bool or_temp_result_1643_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_58_0_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto or_event_1643_58_0_end;
        or_result_1643_58 = true;
        or_temp_result_1643_58_0 = true;
    }
    or_event_1643_58_0_end: ;
    enemybikeninjamask_3171_instances.clear_saved_selection();
    if (or_temp_result_1643_58_0) {
        enemybikeninjamask_3171_instances.save_selection();
    }
    // event 1643_58
    bool or_temp_result_1643_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_58_1_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto or_event_1643_58_1_end;
        or_result_1643_58 = true;
        or_temp_result_1643_58_1 = true;
    }
    or_event_1643_58_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1643_58_1) {
        enemybikeninjamask_3171_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1643_58
    bool or_temp_result_1643_58_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_58_2_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto or_event_1643_58_2_end;
        or_result_1643_58 = true;
        or_temp_result_1643_58_2 = true;
        or_event_1643_58_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1643_58_2) {
            enemybikeninjamask_3171_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1643_58) goto or_final_or_event_1643_58_2_end;
        enemybikeninjamask_3171_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1643_58_0 || or_temp_result_1643_58_1 || or_temp_result_1643_58_2) {
            enemybikeninjamask_3171_instances.restore_selection();
        }
        if (or_temp_result_1643_58_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1643_58_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1643_58_2_end: ;
}
void Frames::event_func_12669()
{
    // event 1644_58
    {
        if (!(group_main_engine_1)) goto event_1644_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1644_58_end: ;
}
void Frames::event_func_12670()
{
    // event 1645_58
    bool or_result_1645_58 = false;
    bool or_temp_result_1645_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1645_58_0_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto or_event_1645_58_0_end;
        or_result_1645_58 = true;
        or_temp_result_1645_58_0 = true;
    }
    or_event_1645_58_0_end: ;
    enemybikeninjamask_3171_instances.clear_saved_selection();
    if (or_temp_result_1645_58_0) {
        enemybikeninjamask_3171_instances.save_selection();
    }
    // event 1645_58
    bool or_temp_result_1645_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1645_58_1_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto or_event_1645_58_1_end;
        or_result_1645_58 = true;
        or_temp_result_1645_58_1 = true;
    }
    or_event_1645_58_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1645_58_1) {
        enemybikeninjamask_3171_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1645_58
    bool or_temp_result_1645_58_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1645_58_2_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto or_event_1645_58_2_end;
        or_result_1645_58 = true;
        or_temp_result_1645_58_2 = true;
        or_event_1645_58_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1645_58_2) {
            enemybikeninjamask_3171_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1645_58) goto or_final_or_event_1645_58_2_end;
        enemybikeninjamask_3171_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1645_58_0 || or_temp_result_1645_58_1 || or_temp_result_1645_58_2) {
            enemybikeninjamask_3171_instances.restore_selection();
        }
        if (or_temp_result_1645_58_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1645_58_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1645_58_2_end: ;
}
void Frames::event_func_12671()
{
    // event 1646_58
    {
        if (!(group_main_engine_1)) goto event_1646_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(4);
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1646_58_end: ;
}
void Frames::event_func_12672()
{
    // event 1647_58
    bool or_result_1647_58 = false;
    bool or_temp_result_1647_58_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1647_58_0_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto or_event_1647_58_0_end;
        or_result_1647_58 = true;
        or_temp_result_1647_58_0 = true;
    }
    or_event_1647_58_0_end: ;
    enemybikeninjamask_3171_instances.clear_saved_selection();
    if (or_temp_result_1647_58_0) {
        enemybikeninjamask_3171_instances.save_selection();
    }
    // event 1647_58
    bool or_temp_result_1647_58_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1647_58_1_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_7)) goto or_event_1647_58_1_end;
        or_result_1647_58 = true;
        or_temp_result_1647_58_1 = true;
    }
    or_event_1647_58_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1647_58_1) {
        enemybikeninjamask_3171_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1647_58
    bool or_temp_result_1647_58_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1647_58_2_end;
        enemybikeninjamask_3171_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, qualifier_8)) goto or_event_1647_58_2_end;
        or_result_1647_58 = true;
        or_temp_result_1647_58_2 = true;
        or_event_1647_58_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1647_58_2) {
            enemybikeninjamask_3171_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1647_58) goto or_final_or_event_1647_58_2_end;
        enemybikeninjamask_3171_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1647_58_0 || or_temp_result_1647_58_1 || or_temp_result_1647_58_2) {
            enemybikeninjamask_3171_instances.restore_selection();
        }
        if (or_temp_result_1647_58_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1647_58_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_1647_58_2_end: ;
}
void Frames::event_func_12673()
{
    // event 1648_58
    {
        if (!(group_main_engine_1)) goto event_1648_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->force_direction(0);
        }
    }
    event_1648_58_end: ;
}
void Frames::event_func_12674()
{
    // event 1649_58
    {
        if (!(group_main_engine_1)) goto event_1649_58_end;
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index));
            if (parent == NULL) goto pos_end_1649_58_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1649_58_0: ;
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->flags.get(4));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), width));
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_single(enemybikeninjamask_3171_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
    }
    event_1649_58_end: ;
}
void Frames::event_func_12675()
{
    // event 1651_58
    {
        if (!(group_main_engine_1)) goto event_1651_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1651_58_end;
        FrameObject * single_instance_1651_58_0; single_instance_1651_58_0 = pick_random(enemybikeninjamask_3171_instances);
        if (single_instance_1651_58_0 == NULL) goto event_1651_58_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1651_58_1; single_instance_1651_58_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemybikeninjadefeated_3168(((Active*)single_instance_1651_58_0)->x + 0, ((Active*)single_instance_1651_58_0)->y + 0), ((Active*)single_instance_1651_58_0)->layer);
            if (single_instance_1651_58_1 == NULL)
                single_instance_1651_58_1 = new_obj;
        }
        FrameObject * single_instance_1651_58_2; single_instance_1651_58_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)single_instance_1651_58_0)->x + 0, ((Active*)single_instance_1651_58_0)->y + -20), ((Active*)single_instance_1651_58_0)->layer);
            if (single_instance_1651_58_2 == NULL)
                single_instance_1651_58_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1651_58_0))->alterables->values.set(0, -5);
        ((Active*)((Active*)single_instance_1651_58_1))->set_direction(8+((Active*)single_instance_1651_58_0)->alterables->values.get(4)*-8);
        ((Active*)((Active*)single_instance_1651_58_1))->alterables->values.set(0, ((Active*)single_instance_1651_58_0)->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1651_58_1))->alterables->values.set(1, ((Active*)single_instance_1651_58_0)->alterables->values.get(24));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_58();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1651_58_end: ;
}
void Frames::event_func_12676()
{
    // event 1653_58
    {
        if (!(group_main_engine_1)) goto event_1653_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1653_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1653_58_end: ;
}
void Frames::event_func_12677()
{
    // event 1654_58
    {
        if (!(group_main_engine_1)) goto event_1654_58_end;
        if (!((enemybikeninja_3172_instances.size()) > (enemybikeninjamask_3171_instances.size()))) goto event_1654_58_end;
        enemybikeninja_3172_instances.clear_selection();
        FrameObject * single_instance_1654_58_0; single_instance_1654_58_0 = pick_random(enemybikeninja_3172_instances);
        if (single_instance_1654_58_0 == NULL) goto event_1654_58_end;
        ((Active*)((Active*)single_instance_1654_58_0))->destroy();
    }
    event_1654_58_end: ;
}
void Frames::event_func_12678()
{
    // event 1655_58
    {
        if (!(group_main_engine_1)) goto event_1655_58_end;
        if (!((effectbikeninjawarning_3170_instances.size()) > (enemybikeninjamask_3171_instances.size()))) goto event_1655_58_end;
        effectbikeninjawarning_3170_instances.clear_selection();
        FrameObject * single_instance_1655_58_0; single_instance_1655_58_0 = pick_random(effectbikeninjawarning_3170_instances);
        if (single_instance_1655_58_0 == NULL) goto event_1655_58_end;
        ((Active*)((Active*)single_instance_1655_58_0))->destroy();
    }
    event_1655_58_end: ;
}
void Frames::event_func_12679()
{
    // event 1656_58
    {
        if (!(group_main_engine_1)) goto event_1656_58_end;
        enemybikeninjadefeated_3168_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.3, 15));
        }
    }
    event_1656_58_end: ;
}
void Frames::event_func_12680()
{
    // event 1657_58
    {
        if (!(group_main_engine_1)) goto event_1657_58_end;
        enemybikeninjadefeated_3168_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-60))) { it.deselect(); continue; }
        }
        if (!enemybikeninjadefeated_3168_instances.has_selection()) goto event_1657_58_end;
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1657_58_end: ;
}
void Frames::event_func_12681()
{
    // event 1658_58
    {
        if (!(group_main_engine_1)) goto event_1658_58_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        enemybikeninjamask_3171_instances.clear_selection();
        if (!check_overlap(enemybladeorbiterleft_3151_instances, enemybikeninjamask_3171_instances)) goto event_1658_58_end;
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterleft_3151_instances.has_selection()) goto event_1658_58_end;
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
    }
    event_1658_58_end: ;
}
void Frames::event_func_12682()
{
    // event 1663_58
    {
        if (!(group_main_engine_1)) goto event_1663_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        if (!check_overlap(enemybikeninjamask_3171_instances, enemytotematic_3103_instances)) goto event_1663_58_end;
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1663_58_end;
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1663_58_end: ;
}
void Frames::event_func_12683()
{
    // event 1666_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1666_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1666_58_end;
        if (!((global_values->get(0)) != (2))) goto event_1666_58_end;
        next_frame = 8 + 0;    
    
    }
    event_1666_58_end: ;
}
void Frames::event_func_12684()
{
    // event 1667_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1667_58_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1667_58_end;
        if (!((global_values->get(0)) == (2))) goto event_1667_58_end;
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
        if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1) {
            group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 = true;
        }
            group_main_engine_level_specific_methods_arena_1 = false;
    
            group_main_engine_level_specific_methods_bosses_1 = false;
    
            group_main_engine_level_specific_methods_frame_transition_1 = false;
    
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
    }
    event_1667_58_end: ;
}
void Frames::event_func_12685()
{
    // event 1683_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1683_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1683_58_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (14))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1683_58_end;
        if (once_condition_1683_58) goto event_1683_58_end;
        once_condition_1683_58 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_yeah_ogg_135, 28-1);
    }
    event_1683_58_end: ;
}
void Frames::event_func_12686()
{
    // event 1685_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1685_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1685_58_end;
        if (once_condition_1685_58) goto event_1685_58_end;
        once_condition_1685_58 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_milla_superdog_ogg_161, 28-1);
    }
    event_1685_58_end: ;
}
void Frames::event_func_12687()
{
    // event 1706_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1706_58_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1706_58_end;
        FrameObject * single_instance_1706_58_0; single_instance_1706_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1706_58_0 == NULL)
                    single_instance_1706_58_0 = new_obj;
            }
        }
    }
    event_1706_58_end: ;
}
void Frames::event_func_12688()
{
    // event 1707_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1707_58_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1707_58_end;
        FrameObject * single_instance_1707_58_0; single_instance_1707_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1707_58_0 == NULL)
                    single_instance_1707_58_0 = new_obj;
            }
        }
    }
    event_1707_58_end: ;
}
void Frames::event_func_12689()
{
    // event 1708_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1708_58_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1708_58_end;
        FrameObject * single_instance_1708_58_0; single_instance_1708_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1708_58_0 == NULL)
                    single_instance_1708_58_0 = new_obj;
            }
        }
    }
    event_1708_58_end: ;
}
void Frames::event_func_12690()
{
    // event 1709_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1709_58_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1709_58_end;
        FrameObject * single_instance_1709_58_0; single_instance_1709_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1709_58_0 == NULL)
                    single_instance_1709_58_0 = new_obj;
            }
        }
    }
    event_1709_58_end: ;
}
void Frames::event_func_12691()
{
    // event 1710_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1710_58_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1710_58_end;
        FrameObject * single_instance_1710_58_0; single_instance_1710_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1710_58_0 == NULL)
                    single_instance_1710_58_0 = new_obj;
            }
        }
    }
    event_1710_58_end: ;
}
void Frames::event_func_12692()
{
    // event 1711_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1711_58_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1711_58_end;
        FrameObject * single_instance_1711_58_0; single_instance_1711_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1711_58_0 == NULL)
                    single_instance_1711_58_0 = new_obj;
            }
        }
    }
    event_1711_58_end: ;
}
void Frames::event_func_12693()
{
    // event 1712_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1712_58_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1712_58_end;
        FrameObject * single_instance_1712_58_0; single_instance_1712_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1712_58_0 == NULL)
                    single_instance_1712_58_0 = new_obj;
            }
        }
    }
    event_1712_58_end: ;
}
void Frames::event_func_12694()
{
    // event 1713_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1713_58_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1713_58_end;
        FrameObject * single_instance_1713_58_0; single_instance_1713_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1713_58_0 == NULL)
                    single_instance_1713_58_0 = new_obj;
            }
        }
    }
    event_1713_58_end: ;
}
void Frames::event_func_12695()
{
    // event 1714_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1714_58_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1714_58_end;
        FrameObject * single_instance_1714_58_0; single_instance_1714_58_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1714_58_0 == NULL)
                    single_instance_1714_58_0 = new_obj;
            }
        }
    }
    event_1714_58_end: ;
}
void Frames::event_func_12696()
{
    // event 1715_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1715_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1715_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1715_58_end: ;
}
void Frames::event_func_12697()
{
    // event 1716_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1716_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1716_58_end;
        if (not_always_1716_58 > loop_count) {
            not_always_1716_58 = loop_count + 2;
            goto event_1716_58_end;
        }
        not_always_1716_58 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1716_58_end: ;
}
void Frames::event_func_12698()
{
    // event 1717_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1717_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1717_58_end;
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
                loop_voice_58();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1717_58_end: ;
}
void Frames::event_func_12699()
{
    // event 1718_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1718_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1718_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1718_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1718_58_end: ;
}
void Frames::event_func_12700()
{
    // event 1719_58
    bool or_result_1719_58 = false;
    bool or_temp_result_1719_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1719_58_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1719_58_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1719_58_0_end;
        if (not_always_1719_58 > loop_count) {
            not_always_1719_58 = loop_count + 2;
            goto or_event_1719_58_0_end;
        }
        not_always_1719_58 = loop_count + 2;
        or_result_1719_58 = true;
        or_temp_result_1719_58_0 = true;
    }
    or_event_1719_58_0_end: ;
    // event 1719_58
    bool or_temp_result_1719_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto or_event_1719_58_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1719_58_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1719_58_1_end;
        if (not_always_1719_58 > loop_count) {
            not_always_1719_58 = loop_count + 2;
            goto or_event_1719_58_1_end;
        }
        not_always_1719_58 = loop_count + 2;
        or_result_1719_58 = true;
        or_temp_result_1719_58_1 = true;
        or_event_1719_58_1_end: ;
        if (!or_result_1719_58) goto or_final_or_event_1719_58_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1719_58_1_end: ;
}
void Frames::event_func_12701()
{
    // event 1720_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1720_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1720_58_end;
        if (not_always_1720_58 > loop_count) {
            not_always_1720_58 = loop_count + 2;
            goto event_1720_58_end;
        }
        not_always_1720_58 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1720_58_end: ;
}
void Frames::event_func_12702()
{
    // event 1721_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1721_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1721_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1721_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1721_58_end: ;
}
void Frames::event_func_12703()
{
    // event 1722_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1722_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1722_58_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1722_58_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1722_58_end: ;
}
void Frames::event_func_12704()
{
    // event 1723_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1723_58_end;
        if (!((global_values->get(27)) == (0))) goto event_1723_58_end;
        if (not_always_1723_58 > loop_count) {
            not_always_1723_58 = loop_count + 2;
            goto event_1723_58_end;
        }
        not_always_1723_58 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1723_58_end: ;
}
void Frames::event_func_12705()
{
    // event 1727_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1727_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1727_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1727_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1727_58_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1727_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1727_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1727_58_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1727_58_end: ;
}
void Frames::event_func_12706()
{
    // event 1728_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1728_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1728_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1728_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1728_58_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1728_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1728_58_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1728_58_end: ;
}
void Frames::event_func_12707()
{
    // event 1729_58
    bool or_result_1729_58 = false;
    bool or_temp_result_1729_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1729_58_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1729_58_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1729_58_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1729_58_0_end;
        or_result_1729_58 = true;
        or_temp_result_1729_58_0 = true;
    }
    or_event_1729_58_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1729_58_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1729_58
    bool or_temp_result_1729_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1729_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1729_58_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1729_58_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1729_58_1_end;
        or_result_1729_58 = true;
        or_temp_result_1729_58_1 = true;
        or_event_1729_58_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1729_58_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1729_58) goto or_final_or_event_1729_58_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1729_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1729_58_0 || or_temp_result_1729_58_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1729_58_1_end: ;
}
void Frames::event_func_12708()
{
    // event 1730_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1730_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1730_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1730_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1730_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1730_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1730_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1730_58_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1730_58_end: ;
}
void Frames::event_func_12709()
{
    // event 1731_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1731_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1731_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1731_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1731_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1731_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1731_58_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1731_58_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1731_58_end: ;
}
void Frames::event_func_12710()
{
    // event 1732_58
    bool or_result_1732_58 = false;
    bool or_temp_result_1732_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1732_58_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1732_58_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1732_58_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1732_58_0_end;
        or_result_1732_58 = true;
        or_temp_result_1732_58_0 = true;
    }
    or_event_1732_58_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1732_58_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1732_58
    bool or_temp_result_1732_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1732_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1732_58_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1732_58_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1732_58_1_end;
        or_result_1732_58 = true;
        or_temp_result_1732_58_1 = true;
        or_event_1732_58_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1732_58_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1732_58) goto or_final_or_event_1732_58_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1732_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1732_58_0 || or_temp_result_1732_58_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1732_58_1_end: ;
}
void Frames::event_func_12711()
{
    // event 1733_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1733_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1733_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1733_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1733_58_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1733_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1733_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1733_58_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1733_58_end: ;
}
void Frames::event_func_12712()
{
    // event 1734_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1734_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1734_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1734_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1734_58_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1734_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1734_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1734_58_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1734_58_end: ;
}
void Frames::event_func_12713()
{
    // event 1735_58
    bool or_result_1735_58 = false;
    bool or_temp_result_1735_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1735_58_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1735_58_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1735_58_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1735_58_0_end;
        or_result_1735_58 = true;
        or_temp_result_1735_58_0 = true;
    }
    or_event_1735_58_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1735_58_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1735_58
    bool or_temp_result_1735_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1735_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1735_58_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1735_58_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1735_58_1_end;
        or_result_1735_58 = true;
        or_temp_result_1735_58_1 = true;
        or_event_1735_58_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1735_58_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1735_58) goto or_final_or_event_1735_58_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1735_58_0 || or_temp_result_1735_58_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1735_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1735_58_1_end: ;
}
void Frames::event_func_12714()
{
    // event 1736_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1736_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1736_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1736_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1736_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1736_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1736_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1736_58_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1736_58_end: ;
}
void Frames::event_func_12715()
{
    // event 1737_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1737_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1737_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1737_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1737_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1737_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1737_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1737_58_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1737_58_end: ;
}
void Frames::event_func_12716()
{
    // event 1738_58
    bool or_result_1738_58 = false;
    bool or_temp_result_1738_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1738_58_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1738_58_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1738_58_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1738_58_0_end;
        or_result_1738_58 = true;
        or_temp_result_1738_58_0 = true;
    }
    or_event_1738_58_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1738_58_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1738_58
    bool or_temp_result_1738_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1738_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1738_58_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1738_58_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1738_58_1_end;
        or_result_1738_58 = true;
        or_temp_result_1738_58_1 = true;
        or_event_1738_58_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1738_58_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1738_58) goto or_final_or_event_1738_58_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1738_58_0 || or_temp_result_1738_58_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1738_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1738_58_1_end: ;
}
void Frames::event_func_12717()
{
    // event 1739_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1739_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1739_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1739_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1739_58_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1739_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1739_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1739_58_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1739_58_end: ;
}
void Frames::event_func_12718()
{
    // event 1740_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto event_1740_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1740_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1740_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1740_58_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1740_58_end;
        if (!media.is_channel_playing(20-1)) goto event_1740_58_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1740_58_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1740_58_end: ;
}
void Frames::event_func_12719()
{
    // event 1741_58
    bool or_result_1741_58 = false;
    bool or_temp_result_1741_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1741_58_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1741_58_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1741_58_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1741_58_0_end;
        or_result_1741_58 = true;
        or_temp_result_1741_58_0 = true;
    }
    or_event_1741_58_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1741_58_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1741_58
    bool or_temp_result_1741_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1741_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1741_58_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1741_58_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1741_58_1_end;
        or_result_1741_58 = true;
        or_temp_result_1741_58_1 = true;
        or_event_1741_58_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1741_58_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1741_58) goto or_final_or_event_1741_58_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1741_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1741_58_0 || or_temp_result_1741_58_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1741_58_1_end: ;
}
void Frames::event_func_12720()
{
    // event 1742_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1742_58_end;
        if (!((global_values->get(27)) == (1))) goto event_1742_58_end;
        if (not_always_1742_58 > loop_count) {
            not_always_1742_58 = loop_count + 2;
            goto event_1742_58_end;
        }
        not_always_1742_58 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1742_58_end: ;
}
void Frames::event_func_12721()
{
    // event 1743_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1743_58_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1743_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1743_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1743_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1743_58_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1743_58_end: ;
}
void Frames::event_func_12722()
{
    // event 1744_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1744_58_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1744_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1744_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1744_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1744_58_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1744_58_end: ;
}
void Frames::event_func_12723()
{
    // event 1745_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1745_58_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1745_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1745_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1745_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1745_58_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1745_58_end: ;
}
void Frames::event_func_12724()
{
    // event 1746_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1746_58_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1746_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1746_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1746_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1746_58_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1746_58_end: ;
}
void Frames::event_func_12725()
{
    // event 1747_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1747_58_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1747_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1747_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1747_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1747_58_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1747_58_end: ;
}
void Frames::event_func_12726()
{
    // event 1748_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1748_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1748_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1748_58_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1748_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1748_58_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1748_58_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1748_58_end: ;
}
void Frames::event_func_12727()
{
    // event 1749_58
    bool or_result_1749_58 = false;
    bool or_temp_result_1749_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1749_58_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1749_58_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1749_58_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1749_58_0_end;
        or_result_1749_58 = true;
        or_temp_result_1749_58_0 = true;
    }
    or_event_1749_58_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1749_58_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1749_58
    bool or_temp_result_1749_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1749_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1749_58_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1749_58_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1749_58_1_end;
        or_result_1749_58 = true;
        or_temp_result_1749_58_1 = true;
        or_event_1749_58_1_end: ;
        if (or_temp_result_1749_58_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1749_58) goto or_final_or_event_1749_58_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1749_58_0 || or_temp_result_1749_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1749_58_0 || or_temp_result_1749_58_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1749_58_1_end: ;
}
void Frames::event_func_12728()
{
    // event 1750_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1750_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1750_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1750_58_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1750_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1750_58_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1750_58_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1750_58_end: ;
}
void Frames::event_func_12729()
{
    // event 1751_58
    bool or_result_1751_58 = false;
    bool or_temp_result_1751_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1751_58_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1751_58_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1751_58_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1751_58_0_end;
        or_result_1751_58 = true;
        or_temp_result_1751_58_0 = true;
    }
    or_event_1751_58_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1751_58_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1751_58
    bool or_temp_result_1751_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1751_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1751_58_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1751_58_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1751_58_1_end;
        or_result_1751_58 = true;
        or_temp_result_1751_58_1 = true;
        or_event_1751_58_1_end: ;
        if (or_temp_result_1751_58_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1751_58) goto or_final_or_event_1751_58_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1751_58_0 || or_temp_result_1751_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1751_58_0 || or_temp_result_1751_58_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1751_58_1_end: ;
}
void Frames::event_func_12730()
{
    // event 1752_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1752_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1752_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1752_58_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1752_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1752_58_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1752_58_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1752_58_end: ;
}
void Frames::event_func_12731()
{
    // event 1753_58
    bool or_result_1753_58 = false;
    bool or_temp_result_1753_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1753_58_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1753_58_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1753_58_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1753_58_0_end;
        or_result_1753_58 = true;
        or_temp_result_1753_58_0 = true;
    }
    or_event_1753_58_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1753_58_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1753_58
    bool or_temp_result_1753_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1753_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1753_58_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1753_58_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1753_58_1_end;
        or_result_1753_58 = true;
        or_temp_result_1753_58_1 = true;
        or_event_1753_58_1_end: ;
        if (or_temp_result_1753_58_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1753_58) goto or_final_or_event_1753_58_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1753_58_0 || or_temp_result_1753_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1753_58_0 || or_temp_result_1753_58_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1753_58_1_end: ;
}
void Frames::event_func_12732()
{
    // event 1754_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1754_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1754_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1754_58_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1754_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1754_58_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1754_58_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1754_58_end: ;
}
void Frames::event_func_12733()
{
    // event 1755_58
    bool or_result_1755_58 = false;
    bool or_temp_result_1755_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1755_58_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1755_58_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1755_58_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1755_58_0_end;
        or_result_1755_58 = true;
        or_temp_result_1755_58_0 = true;
    }
    or_event_1755_58_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1755_58_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1755_58
    bool or_temp_result_1755_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1755_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1755_58_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1755_58_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1755_58_1_end;
        or_result_1755_58 = true;
        or_temp_result_1755_58_1 = true;
        or_event_1755_58_1_end: ;
        if (or_temp_result_1755_58_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1755_58) goto or_final_or_event_1755_58_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1755_58_0 || or_temp_result_1755_58_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1755_58_0 || or_temp_result_1755_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1755_58_1_end: ;
}
void Frames::event_func_12734()
{
    // event 1756_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto event_1756_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1756_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1756_58_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1756_58_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1756_58_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1756_58_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1756_58_end: ;
}
void Frames::event_func_12735()
{
    // event 1757_58
    bool or_result_1757_58 = false;
    bool or_temp_result_1757_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1757_58_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1757_58_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1757_58_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1757_58_0_end;
        or_result_1757_58 = true;
        or_temp_result_1757_58_0 = true;
    }
    or_event_1757_58_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1757_58_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1757_58
    bool or_temp_result_1757_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1)) goto or_event_1757_58_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1757_58_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1757_58_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1757_58_1_end;
        or_result_1757_58 = true;
        or_temp_result_1757_58_1 = true;
        or_event_1757_58_1_end: ;
        if (or_temp_result_1757_58_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1757_58) goto or_final_or_event_1757_58_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1757_58_0 || or_temp_result_1757_58_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1757_58_0 || or_temp_result_1757_58_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1757_58_1_end: ;
}
void Frames::event_func_12736()
{
    // event 1759_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1)) goto event_1759_58_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1759_58_end: ;
}
