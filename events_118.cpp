#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9571()
{
    // event 1570_39
    {
        if (!(group_main_engine_1)) goto event_1570_39_end;
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!enemybuoybullet_2325_instances.has_selection()) goto event_1570_39_end;
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1570_39_end: ;
}
void Frames::event_func_9572()
{
    // event 1571_39
    {
        if (!(group_main_engine_1)) goto event_1571_39_end;
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!enemybuoybullet2_2326_instances.has_selection()) goto event_1571_39_end;
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1571_39_end: ;
}
void Frames::event_func_9573()
{
    // event 1572_39
    {
        if (!(group_main_engine_1)) goto event_1572_39_end;
        enemybuoybullet_2325_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemybuoybullet_2325_instances, playercharactersensor_383_instances)) goto event_1572_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1572_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1572_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1572_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1572_39_end: ;
}
void Frames::event_func_9574()
{
    // event 1573_39
    {
        if (!(group_main_engine_1)) goto event_1573_39_end;
        enemybuoybullet2_2326_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemybuoybullet2_2326_instances, playercharactersensor_383_instances)) goto event_1573_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1573_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1573_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1573_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1573_39_end: ;
}
void Frames::event_func_9575()
{
    // event 1574_39
    {
        if (!(group_main_engine_1)) goto event_1574_39_end;
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!enemybuoybullet_2325_instances.has_selection()) goto event_1574_39_end;
        {
            SavedSelection extra_enemybuoybullet_2325_instances(enemybuoybullet_2325_instances);
            for (SavedIterator it(extra_enemybuoybullet_2325_instances); !it.end(); ++it) {
                foreach_instance_buoy = ((Active*)*it);
                foreach_buoy_39();
            }
        }
    }
    event_1574_39_end: ;
}
void Frames::event_func_9576()
{
    // event 1576_39
    {
        if (!(group_main_engine_1)) goto event_1576_39_end;
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!enemybuoybullet2_2326_instances.has_selection()) goto event_1576_39_end;
        {
            SavedSelection extra_enemybuoybullet2_2326_instances(enemybuoybullet2_2326_instances);
            for (SavedIterator it(extra_enemybuoybullet2_2326_instances); !it.end(); ++it) {
                foreach_instance_buoy = ((Active*)*it);
                foreach_buoy_39();
            }
        }
    }
    event_1576_39_end: ;
}
void Frames::event_func_9577()
{
    // event 1579_39
    {
        if (!(group_main_engine_1)) goto event_1579_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1579_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1579_39_end: ;
}
void Frames::event_func_9578()
{
    // event 1580_39
    {
        if (!(group_main_engine_1)) goto event_1580_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1580_39_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemysharktorpedo_2423_instances, enemylimiter_350_instances)) goto event_1580_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0-((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1580_39_end: ;
}
void Frames::event_func_9579()
{
    // event 1581_39
    {
        if (!(group_main_engine_1)) goto event_1581_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1581_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1581_39_end: ;
}
void Frames::event_func_9580()
{
    // event 1582_39
    {
        if (!(group_main_engine_1)) goto event_1582_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1582_39_end;
        FrameObject * single_instance_1582_39_0; single_instance_1582_39_0 = pick_random(enemysharktorpedo_2423_instances);
        if (single_instance_1582_39_0 == NULL) goto event_1582_39_end;
        ((Active*)((Active*)single_instance_1582_39_0))->alterables->values.set(9, 1);
        FrameObject * single_instance_1582_39_1; single_instance_1582_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysharktorpedo2_2328(((Active*)single_instance_1582_39_0)->x + 0, ((Active*)single_instance_1582_39_0)->y + 0), ((Active*)single_instance_1582_39_0)->layer);
            if (single_instance_1582_39_1 == NULL)
                single_instance_1582_39_1 = new_obj;
        }
        ((Active*)single_instance_1582_39_1)->move_back(((Active*)single_instance_1582_39_0));
        ((Active*)((Active*)single_instance_1582_39_1))->alterables->values.set(0, -4);
        ((Active*)((Active*)single_instance_1582_39_0))->alterables->values.set(3, -60);
    }
    event_1582_39_end: ;
}
void Frames::event_func_9581()
{
    // event 1583_39
    {
        if (!(group_main_engine_1)) goto event_1583_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) != (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1583_39_end;
        FrameObject * single_instance_1583_39_0; single_instance_1583_39_0 = pick_random(enemysharktorpedo_2423_instances);
        if (single_instance_1583_39_0 == NULL) goto event_1583_39_end;
        ((Active*)((Active*)single_instance_1583_39_0))->alterables->values.set(9, 1);
        FrameObject * single_instance_1583_39_1; single_instance_1583_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysharktorpedo2_2328(((Active*)single_instance_1583_39_0)->x + 0, ((Active*)single_instance_1583_39_0)->y + 0), ((Active*)single_instance_1583_39_0)->layer);
            if (single_instance_1583_39_1 == NULL)
                single_instance_1583_39_1 = new_obj;
        }
        ((Active*)single_instance_1583_39_1)->move_back(((Active*)single_instance_1583_39_0));
        ((Active*)((Active*)single_instance_1583_39_1))->alterables->values.set(0, 4);
        ((Active*)((Active*)single_instance_1583_39_0))->alterables->values.set(3, -60);
    }
    event_1583_39_end: ;
}
void Frames::event_func_9582()
{
    // event 1584_39
    {
        if (!(group_main_engine_1)) goto event_1584_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1584_39_end;
        FrameObject * single_instance_1584_39_0; single_instance_1584_39_0 = pick_random(enemysharktorpedo_2423_instances);
        if (single_instance_1584_39_0 == NULL) goto event_1584_39_end;
        ((Active*)((Active*)single_instance_1584_39_0))->alterables->values.set(9, 1);
        FrameObject * single_instance_1584_39_1; single_instance_1584_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysharktorpedo2_2328(((Active*)single_instance_1584_39_0)->x + 0, ((Active*)single_instance_1584_39_0)->y + 0), ((Active*)single_instance_1584_39_0)->layer);
            if (single_instance_1584_39_1 == NULL)
                single_instance_1584_39_1 = new_obj;
        }
        ((Active*)single_instance_1584_39_1)->move_back(((Active*)single_instance_1584_39_0));
        ((Active*)((Active*)single_instance_1584_39_1))->alterables->values.set(0, -4);
        ((Active*)((Active*)single_instance_1584_39_0))->alterables->values.set(3, -60);
    }
    event_1584_39_end: ;
}
void Frames::event_func_9583()
{
    // event 1585_39
    {
        if (!(group_main_engine_1)) goto event_1585_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) != (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1585_39_end;
        FrameObject * single_instance_1585_39_0; single_instance_1585_39_0 = pick_random(enemysharktorpedo_2423_instances);
        if (single_instance_1585_39_0 == NULL) goto event_1585_39_end;
        ((Active*)((Active*)single_instance_1585_39_0))->alterables->values.set(9, 1);
        FrameObject * single_instance_1585_39_1; single_instance_1585_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysharktorpedo2_2328(((Active*)single_instance_1585_39_0)->x + 0, ((Active*)single_instance_1585_39_0)->y + 0), ((Active*)single_instance_1585_39_0)->layer);
            if (single_instance_1585_39_1 == NULL)
                single_instance_1585_39_1 = new_obj;
        }
        ((Active*)single_instance_1585_39_1)->move_back(((Active*)single_instance_1585_39_0));
        ((Active*)((Active*)single_instance_1585_39_1))->alterables->values.set(0, 4);
        ((Active*)((Active*)single_instance_1585_39_0))->alterables->values.set(3, -60);
    }
    event_1585_39_end: ;
}
void Frames::event_func_9584()
{
    // event 1586_39
    {
        if (!(group_main_engine_1)) goto event_1586_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1586_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 6);
            ((Active*)*it)->alterables->values.set(3, -60);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1586_39_end: ;
}
void Frames::event_func_9585()
{
    // event 1587_39
    {
        if (!(group_main_engine_1)) goto event_1587_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) != (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1587_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, -60);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1587_39_end: ;
}
void Frames::event_func_9586()
{
    // event 1588_39
    {
        if (!(group_main_engine_1)) goto event_1588_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1588_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1588_39_end: ;
}
void Frames::event_func_9587()
{
    // event 1589_39
    {
        if (!(group_main_engine_1)) goto event_1589_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1589_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1589_39_end: ;
}
void Frames::event_func_9588()
{
    // event 1590_39
    {
        if (!(group_main_engine_1)) goto event_1590_39_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1590_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1590_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_1590_39_end: ;
}
void Frames::event_func_9589()
{
    // event 1591_39
    {
        if (!(group_main_engine_1)) goto event_1591_39_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1591_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1591_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1591_39_end: ;
}
void Frames::event_func_9590()
{
    // event 1592_39
    {
        if (!(group_main_engine_1)) goto event_1592_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1592_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 6);
        }
    }
    event_1592_39_end: ;
}
void Frames::event_func_9591()
{
    // event 1593_39
    {
        if (!(group_main_engine_1)) goto event_1593_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1593_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->set_direction((global_values->get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1593_39_end: ;
}
void Frames::event_func_9592()
{
    // event 1594_39
    {
        if (!(group_main_engine_1)) goto event_1594_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1594_39_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1594_39_end;
        FrameObject * single_instance_1594_39_0; single_instance_1594_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1594_39_0 == NULL)
                    single_instance_1594_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1594_39_0))->set_x(((Active*)single_instance_1594_39_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1594_39_0))->set_y(((Active*)single_instance_1594_39_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1594_39_1_end;
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
        dynamic_1594_39_1_end: ;
    }
    event_1594_39_end: ;
}
void Frames::event_func_9593()
{
    // event 1595_39
    {
        if (!(group_main_engine_1)) goto event_1595_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1595_39_end;
        FrameObject * single_instance_1595_39_0; single_instance_1595_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1595_39_0 == NULL)
                    single_instance_1595_39_0 = new_obj;
            }
        }
        FrameObject * single_instance_1595_39_1; single_instance_1595_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1595_39_1 == NULL)
                    single_instance_1595_39_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_39();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1595_39_end: ;
}
void Frames::event_func_9594()
{
    // event 1597_39
    {
        if (!(group_main_engine_1)) goto event_1597_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1597_39_end;
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1597_39_end: ;
}
void Frames::event_func_9595()
{
    // event 1598_39
    {
        if (!(group_main_engine_1)) goto event_1598_39_end;
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1598_39_end: ;
}
void Frames::event_func_9596()
{
    // event 1599_39
    {
        if (!(group_main_engine_1)) goto event_1599_39_end;
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (150))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo2_2328_instances.has_selection()) goto event_1599_39_end;
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
        FrameObject * single_instance_1599_39_0; single_instance_1599_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo2_2328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1599_39_0 == NULL)
                    single_instance_1599_39_0 = new_obj;
            }
        }
    }
    event_1599_39_end: ;
}
void Frames::event_func_9597()
{
    // event 1600_39
    {
        if (!(group_main_engine_1)) goto event_1600_39_end;
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (150))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo2_2328_instances.has_selection()) goto event_1600_39_end;
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1600_39_end: ;
}
void Frames::event_func_9598()
{
    // event 1613_39
    {
        if (!(group_main_engine_1)) goto event_1613_39_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1613_39_end;
        if (!((frame_top()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1613_39_end;
        if (!((lightspark2_577_instances.size()) < (50))) goto event_1613_39_end;
        lightspark2_577_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_lightspark2_577(-50, 0), 1);
            lightspark2_577_instances.add_back();
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-50+randrange(global_values->get(16)+100));
            ((Active*)*it)->set_y(height-50-randrange(600));
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1613_39_end: ;
}
void Frames::event_func_9599()
{
    // event 1614_39
    {
        if (!(group_main_engine_1)) goto event_1614_39_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1614_39_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1614_39_end: ;
}
void Frames::event_func_9600()
{
    // event 1615_39
    {
        if (!(group_main_engine_1)) goto event_1615_39_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1615_39_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1615_39_end: ;
}
void Frames::event_func_9601()
{
    // event 1616_39
    {
        if (!(group_main_engine_1)) goto event_1616_39_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1616_39_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1616_39_end: ;
}
void Frames::event_func_9602()
{
    // event 1617_39
    {
        if (!(group_main_engine_1)) goto event_1617_39_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1617_39_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1617_39_end: ;
}
void Frames::event_func_9603()
{
    // event 1618_39
    {
        if (!(group_main_engine_1)) goto event_1618_39_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (128))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1618_39_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1618_39_end: ;
}
void Frames::event_func_9604()
{
    // event 1643_39
    {
        if (!(group_main_engine_1)) goto event_1643_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_1643_39_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1643_39_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_26)) goto event_1643_39_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1643_39_end: ;
}
void Frames::event_func_9605()
{
    // event 1650_39
    {
        if (!(group_main_engine_1)) goto event_1650_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1650_39_end;
        if (once_condition_1650_39) goto event_1650_39_end;
        once_condition_1650_39 = true;
        if (!group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1) {
            group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1 = true;
        }
    }
    event_1650_39_end: ;
}
void Frames::event_func_9606()
{
    // event 1651_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1651_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.5+((Active*)get_instance(cameratriggerboss_424_instances, it.current_index, default_active_instance))->get_x()*0.5-100+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, 4);
            ((Active*)*it)->set_y((((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(1)+((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_box_index(3))*0.5-32);
        }
    }
    event_1651_39_end: ;
}
void Frames::event_func_9607()
{
    // event 1652_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1652_39_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -26, parent->get_y() + -16);
            pos_end_1652_39_0: ;
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 14, parent->get_y() + -16);
            pos_end_1652_39_1: ;
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -11, parent->get_y() + -9);
            pos_end_1652_39_2: ;
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_3;
            ((Active*)*it)->set_global_position(parent->get_x() + -4, parent->get_y() + -9);
            pos_end_1652_39_3: ;
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 11, parent->get_y() + -9);
            pos_end_1652_39_4: ;
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 4, parent->get_y() + -9);
            pos_end_1652_39_5: ;
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_6;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1652_39_6: ;
        }
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1652_39_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1652_39_7: ;
        }
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        bossmeteor_2338_instances.clear_selection();
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_action_x()-((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_action_y()-((Active*)*it)->alterables->values.get(1)-8);
            ((Active*)*it)->alterables->values.add(1, 5);
            ((Active*)*it)->alterables->values.add(0, 4);
        }
    }
    event_1652_39_end: ;
}
void Frames::event_func_9608()
{
    // event 1653_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1653_39_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index, default_active_instance))->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1653_39_end: ;
}
void Frames::event_func_9609()
{
    // event 1654_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1654_39_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1654_39_end;
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1654_39_end: ;
}
void Frames::event_func_9610()
{
    // event 1655_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1655_39_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1655_39_end;
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1655_39_end: ;
}
void Frames::event_func_9611()
{
    // event 1656_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1656_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()-30))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1656_39_end;
        if (once_condition_1656_39) goto event_1656_39_end;
        once_condition_1656_39 = true;
        media.play_id(SOUND_POLICE_ECHO_278, -1, 1);
    }
    event_1656_39_end: ;
}
void Frames::event_func_9612()
{
    // event 1657_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1657_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1657_39_end;
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1657_39_end: ;
}
void Frames::event_func_9613()
{
    // event 1658_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1658_39_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1658_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (6))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1658_39_end;
        FrameObject * single_instance_1658_39_0; single_instance_1658_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercop_2332_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmeteor_2338(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1658_39_0 == NULL)
                    single_instance_1658_39_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        FrameObject * single_instance_1658_39_1; single_instance_1658_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercop_2332_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1658_39_1 == NULL)
                    single_instance_1658_39_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1658_39_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_1658_39_1))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1658_39_1))->force_speed(100);
    }
    event_1658_39_end: ;
}
void Frames::event_func_9614()
{
    // event 1659_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1659_39_end;
        bossmeteor_2338_instances.clear_selection();
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-40))) { it.deselect(); continue; }
        }
        if (!bossmeteor_2338_instances.has_selection()) goto event_1659_39_end;
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1659_39_end: ;
}
void Frames::event_func_9615()
{
    // event 1660_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1)) goto event_1660_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+40))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1660_39_end;
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossmeteor_2338_instances.clear_selection();
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1 = false;
    
    }
    event_1660_39_end: ;
}
void Frames::event_func_9616()
{
    // event 1661_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1661_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1661_39_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-3, frame_bottom()), ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1661_39_end: ;
}
void Frames::event_func_9617()
{
    // event 1662_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1662_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1662_39_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)+3, height));
    }
    event_1662_39_end: ;
}
void Frames::event_func_9618()
{
    // event 1663_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1663_39_end;
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!cameralimitbossleft_421_instances.has_selection()) goto event_1663_39_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_1) goto event_1663_39_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_1) {
            group_main_engine_level_specific_methods_bosses_boss_1 = true;
        }
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, (1-((SystemBox*)*it)->alterables->values.get(3))*-5);
        }
    }
    event_1663_39_end: ;
}
void Frames::event_func_9619()
{
    // event 1664_39
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1664_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1664_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (frame_bottom()-8))) goto event_1664_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, frame_bottom()-8);
    }
    event_1664_39_end: ;
}
void Frames::event_func_9620()
{
    // event 1665_39
    {
        if (!(group_main_engine_1)) goto event_1665_39_end;
        if (!((global_values->get(3)%math_helper%4) == (1))) goto event_1665_39_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.sub(5, 384);
    }
    event_1665_39_end: ;
}
void Frames::event_func_9621()
{
    // event 1820_39
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1820_39_end;
        if (!((global_values->get(4)) == (1))) goto event_1820_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, -40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1820_39_end: ;
}
void Frames::event_func_9622()
{
    // event 1827_39
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1827_39_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (10))) goto event_1827_39_end;
        if (!((global_values->get(4)) != (0))) goto event_1827_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1827_39_end;
        if (once_condition_1827_39) goto event_1827_39_end;
        once_condition_1827_39 = true;
        FrameObject * single_instance_1827_39_0; single_instance_1827_39_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectfuel_528(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1827_39_0 == NULL)
                    single_instance_1827_39_0 = new_obj;
            }
        }
    }
    event_1827_39_end: ;
}
void Frames::event_func_9623()
{
    // event 1828_39
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1828_39_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1828_39_end;
        if (!((global_values->get(4)) != (0))) goto event_1828_39_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 15);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1828_39_end: ;
}
void Frames::event_func_9624()
{
    // event 1896_39
    {
        if (!(group_main_engine_1)) goto event_1896_39_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.set(2, (((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->get_y()+270-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1))/math_helper/70.0001);
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_x(frame_left());
    }
    event_1896_39_end: ;
}
void Frames::event_func_9625()
{
    // event 1897_39
    {
        if (!(group_main_engine_1)) goto event_1897_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) < (0))) goto event_1897_39_end;
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->set_global_position(((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->get_x(), ((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_y());
        {
            ((Active*)get_instance(levelparalaxwatersurface_7_instances))->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_direction(0);
    }
    event_1897_39_end: ;
}
void Frames::event_func_9626()
{
    // event 1898_39
    {
        if (!(group_main_engine_1)) goto event_1898_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) >= (0))) goto event_1898_39_end;
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->set_global_position(((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->get_x(), ((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_action_y());
        {
            ((Active*)get_instance(levelparalaxwatersurface_7_instances))->blend_color.set_semi_transparency(64);
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_direction(1);
    }
    event_1898_39_end: ;
}
void Frames::event_func_9627()
{
    // event 1899_39
    {
        if (!(group_main_engine_1)) goto event_1899_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) >= (0))) goto event_1899_39_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1));
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y_scale(get_abs(((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2))*0.5);
    }
    event_1899_39_end: ;
}
void Frames::event_func_9628()
{
    // event 1900_39
    {
        if (!(group_main_engine_1)) goto event_1900_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) > (-1))) goto event_1900_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) < (0))) goto event_1900_39_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1));
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y_scale(get_abs(((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)));
    }
    event_1900_39_end: ;
}
void Frames::event_func_9629()
{
    // event 1901_39
    {
        if (!(group_main_engine_1)) goto event_1901_39_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) <= (-1))) goto event_1901_39_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+(((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)+1)*70);
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y_scale(get_min(1, get_abs(((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2))));
    }
    event_1901_39_end: ;
}
void Frames::event_func_9630()
{
    // event 1902_39
    {
        if (!(group_main_engine_1)) goto event_1902_39_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_1)) goto event_1902_39_end;
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-((frame_left()+((Active*)*it)->alterables->values.get(1))%math_helper%64));
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+5)%math_helper%64);
        }
    }
    event_1902_39_end: ;
}
void Frames::event_func_9631()
{
    // event 1903_39
    {
        if (!(group_pause_1)) goto event_1903_39_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1903_39_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1903_39_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1903_39_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1903_39_end;
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
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
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossmeteor_2338_instances.clear_selection();
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1903_39_end: ;
}
void Frames::event_func_9632()
{
    // event 1904_39
    bool or_result_1904_39 = false;
    bool or_temp_result_1904_39_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1904_39_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1904_39_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1904_39_0_end;
        or_result_1904_39 = true;
        or_temp_result_1904_39_0 = true;
    }
    or_event_1904_39_0_end: ;
    // event 1904_39
    bool or_temp_result_1904_39_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1904_39_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1904_39_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1904_39_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1904_39_1_end;
        or_result_1904_39 = true;
        or_temp_result_1904_39_1 = true;
        or_event_1904_39_1_end: ;
        if (!or_result_1904_39) goto or_final_or_event_1904_39_1_end;
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->start_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickseedspawner_2422_instances.clear_selection();
        for (ObjectIterator it(gimmickseedspawner_2422_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossmeteor_2338_instances.clear_selection();
        for (ObjectIterator it(bossmeteor_2338_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1904_39_1_end: ;
}
void Frames::handle_frame_40_events()
{
    test_collisions_39();
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
    event_func_9439();
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
    event_func_9440();
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
    event_func_9441();
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
    event_func_3736();
    event_func_4355();
    event_func_4356();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_9442();
    event_func_9443();
    event_func_9444();
    event_func_9445();
    event_func_9446();
    event_func_9447();
    event_func_9448();
    event_func_9449();
    event_func_9450();
    event_func_9451();
    event_func_9452();
    event_func_9453();
    event_func_9454();
    event_func_9455();
    event_func_9456();
    event_func_9457();
    event_func_9458();
    event_func_9459();
    event_func_9460();
    event_func_9461();
    event_func_9462();
    event_func_9463();
    event_func_9464();
    event_func_9465();
    event_func_9466();
    event_func_9467();
    event_func_9468();
    event_func_9469();
    event_func_9470();
    event_func_9471();
    event_func_9472();
    event_func_9473();
    event_func_9474();
    event_func_9475();
    event_func_9476();
    event_func_9477();
    event_func_9478();
    event_func_9479();
    event_func_9480();
    event_func_9481();
    event_func_9482();
    event_func_9483();
    event_func_9484();
    event_func_9485();
    event_func_9486();
    event_func_9487();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_9488();
    event_func_9489();
    event_func_9490();
    event_func_9491();
    event_func_9492();
    event_func_9493();
    event_func_9494();
    event_func_9495();
    event_func_9496();
    event_func_9497();
    event_func_9498();
    event_func_9499();
    event_func_9500();
    event_func_9501();
    event_func_9502();
    event_func_9503();
    event_func_9423();
    event_func_9504();
    event_func_9505();
    event_func_9506();
    event_func_9507();
    event_func_9508();
    event_func_9509();
    event_func_9510();
    event_func_9511();
    event_func_9512();
    event_func_9513();
    event_func_9514();
    event_func_9515();
    event_func_9516();
    event_func_9517();
    event_func_9518();
    event_func_9519();
    event_func_9520();
    event_func_9521();
    event_func_9522();
    event_func_9523();
    event_func_9524();
    event_func_9525();
    event_func_9526();
    event_func_9527();
    event_func_9528();
    event_func_9529();
    event_func_9530();
    event_func_9531();
    event_func_9532();
    event_func_9533();
    event_func_9534();
    event_func_9535();
    event_func_9536();
    event_func_9537();
    event_func_9538();
    event_func_9539();
    event_func_9540();
    event_func_9541();
    event_func_9542();
    event_func_9543();
    event_func_9544();
    event_func_9545();
    event_func_9546();
    event_func_9547();
    event_func_9548();
    event_func_9549();
    event_func_9550();
    event_func_9551();
    event_func_9552();
    event_func_9553();
    event_func_9554();
    event_func_9555();
    event_func_9556();
    event_func_9557();
    event_func_9558();
    event_func_9559();
    event_func_9560();
    event_func_9561();
    event_func_9562();
    event_func_9563();
    event_func_9564();
    event_func_9565();
    event_func_9566();
    event_func_9567();
    event_func_9568();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
    event_func_9577();
    event_func_9578();
    event_func_9579();
    event_func_9580();
    event_func_9581();
    event_func_9582();
    event_func_9583();
    event_func_9584();
    event_func_9585();
    event_func_9586();
    event_func_9587();
    event_func_9588();
    event_func_9589();
    event_func_9590();
    event_func_9591();
    event_func_9592();
    event_func_9593();
    event_func_9594();
    event_func_9595();
    event_func_9596();
    event_func_9597();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3817();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
    event_func_9598();
    event_func_9599();
    event_func_9600();
    event_func_9601();
    event_func_9602();
    event_func_9603();
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
    event_func_3000();
    event_func_9604();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_9605();
    if (!group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1) goto group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1_end;
    event_func_9606();
    event_func_9607();
    event_func_9608();
    event_func_9609();
    event_func_9610();
    event_func_9611();
    event_func_9612();
    event_func_9613();
    event_func_9614();
    event_func_9615();
    group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_9616();
    event_func_9617();
    event_func_9618();
    event_func_9619();
    if (!group_main_engine_level_specific_methods_bosses_boss_1) goto group_main_engine_level_specific_methods_bosses_boss_1_end;
    group_main_engine_level_specific_methods_bosses_boss_1_end: ;
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_9620();
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
    event_func_9621();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_9622();
    event_func_9623();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
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
    event_func_9624();
    event_func_9625();
    event_func_9626();
    event_func_9627();
    event_func_9628();
    event_func_9629();
    event_func_9630();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_9631();
    event_func_9632();
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
void Frames::handle_frame_40_pre_events()
{
}
void Frames::event_func_9633()
{
    // event 3_39
    {
        if (!(group_main_engine_1)) goto event_3_39_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1200);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 51);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 21);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_3_39_end: ;
}
void Frames::event_func_9634()
{
    // event 20_39
    {
        if (!(group_main_engine_1)) goto event_20_39_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0);
    }
    event_20_39_end: ;
}
void Frames::event_func_9635()
{
    // event 1400_39
    {
        if (!(group_main_engine_1)) goto event_1400_39_end;
        gimmickbridgelog_412_instances.empty_selection();
        // select single: false true false
        gimmickbridge12logs_353_instances.clear_selection();
        for (ObjectIterator p_it(gimmickbridge12logs_353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 176, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 160, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 144, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 128, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 112, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 96, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 80, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 64, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 48, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 32, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 16, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbridgelog_2339(parent->x + 0, parent->y + 56), parent->layer);
                gimmickbridgelog_412_instances.add_back();
            }
        }
    }
    event_1400_39_end: ;
}
void Frames::event_func_9636()
{
    // event 1413_39
    {
        if (!(group_main_engine_1)) goto event_1413_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        spread_value(gimmickleafplatformback_2358_instances, 8, 0);
    }
    event_1413_39_end: ;
}
void Frames::event_func_9637()
{
    // event 1414_39
    {
        if (!(group_main_engine_1)) goto event_1414_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickleafplatformback_2358_instances.has_selection()) goto event_1414_39_end;
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 120);
        }
    }
    event_1414_39_end: ;
}
void Frames::event_func_9638()
{
    // event 1415_39
    {
        if (!(group_main_engine_1)) goto event_1415_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickleafplatformback_2358_instances.has_selection()) goto event_1415_39_end;
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60);
        }
    }
    event_1415_39_end: ;
}
void Frames::event_func_9639()
{
    // event 1416_39
    {
        if (!(group_main_engine_1)) goto event_1416_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
        }
        if (!gimmickleafplatformback_2358_instances.has_selection()) goto event_1416_39_end;
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 120);
        }
    }
    event_1416_39_end: ;
}
void Frames::event_func_9640()
{
    // event 1417_39
    {
        if (!(group_main_engine_1)) goto event_1417_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (7))) { it.deselect(); continue; }
        }
        if (!gimmickleafplatformback_2358_instances.has_selection()) goto event_1417_39_end;
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60);
        }
    }
    event_1417_39_end: ;
}
void Frames::event_func_9641()
{
    // event 1418_39
    {
        if (!(group_main_engine_1)) goto event_1418_39_end;
        gimmickleafplatformback_2358_instances.clear_selection();
        for (ObjectIterator it(gimmickleafplatformback_2358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)-90, 0);
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_action_x());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_action_y());
            ((Active*)*it)->alterables->values.sub(1, 128);
        }
    }
    event_1418_39_end: ;
}
void Frames::event_func_9642()
{
    // event 1500_39
    {
        if (!(group_main_engine_1)) goto event_1500_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->layer->index+1);
        }
    }
    event_1500_39_end: ;
}
void Frames::event_func_9643()
{
    // event 1530_39
    {
        if (!(group_main_engine_1)) goto event_1530_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        enemybullfragmask_2419_instances.clear_selection();
        for (ObjectIterator it(enemybullfragmask_2419_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(enemybullfrag_2417_instances, it.current_index));
            if (parent == NULL) goto pos_end_1530_39_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1530_39_0: ;
        }
    }
    event_1530_39_end: ;
}
void Frames::event_func_9644()
{
    // event 1578_39
    {
        if (!(group_main_engine_1)) goto event_1578_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1578_39_end: ;
}
void Frames::event_func_9645()
{
    // event 1649_39
    {
        if (!(group_main_engine_1)) goto event_1649_39_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.5);
        }
    }
    event_1649_39_end: ;
}
void Frames::event_func_9646()
{
    // event 1819_39
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1819_39_end;
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
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(4);
        }
    }
    event_1819_39_end: ;
}
void Frames::on_frame_40_start_events()
{
    event_func_3980();
    event_func_4133();
    event_func_9633();
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
    event_func_9634();
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
    event_func_3273();
    event_func_9635();
    event_func_3275();
    event_func_9636();
    event_func_9637();
    event_func_9638();
    event_func_9639();
    event_func_9640();
    event_func_9641();
    event_func_9642();
    event_func_9643();
    event_func_9644();
    event_func_2686();
    event_func_2687();
    event_func_9645();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9646();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_40_init()
{
    index = 39;
    width = 13472;
    height = 2200;
    virtual_width = 13472;
    virtual_height = 2200;
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
    static ObjectList* qualifier_26_instances[] = {&jcwaterstream4_2409_instances, &jcwaterstream3_2410_instances, &jcwaterstream6_2411_instances, &jcwaterstream5_2412_instances, &jcwaterstream2_2413_instances, &jcwaterstream1_2416_instances, NULL};
    qualifier_26.set(6, &qualifier_26_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, &hazardspikesup_558_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyplantturretus_2365_instances, &enemybullfrag_2417_instances, &enemybuoybuoy_2418_instances, &enemymeteorroller_2421_instances, &enemysharktorpedo_2423_instances, NULL};
    qualifier_20.set(5, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &jcslidingplatform_2414_instances, &enemybullfragmask_2419_instances, &hazardspikesup_558_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelcreekplatform_2424_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &jcslidingplatform_2414_instances, &levelcreekplatform_2424_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2318(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2319(0, 96), 0);
    add_background_object(create_levelparallaxpiece1_2(0, 192), 0);
    add_background_object(create_levelparallaxpiece5_2320(0, 48), 0);
    add_background_object(create_jcoceanbottom_2321(0, 1472), 0);
    add_background_object(create_levelparallaxpiece6_2322(0, 1200), 0);
    add_object(create_levelparalaxwatersurface_7(0, 389), 0);
    add_object(create_bosshovercopsiren4_2329(13288, -184), 0);
    add_object(create_bosshovercopsiren3_2330(13312, -184), 0);
    add_object(create_bosshovercopturbine2_2331(13292, -167), 0);
    add_object(create_bosshovercop_2332(13264, -136), 0);
    add_object(create_bosshovercopturbine1_2333(13212, -167), 0);
    add_object(create_bosshovercoppropellor_2334(13232, -168), 0);
    add_object(create_bosshovercoppropellor2_2335(13312, -168), 0);
    add_object(create_bosshovercopsiren1_2336(13208, -184), 0);
    add_object(create_bosshovercopsiren2_2337(13192, -184), 0);
    add_background_object(create_jcbamboo3_2340(2208, 224), 1);
    add_background_object(create_jcbamboo3_2340(2104, 224), 1);
    add_background_object(create_jcbamboo3_2340(2312, 336), 1);
    add_background_object(create_jcbamboo3_2341(2104, 112), 1);
    add_background_object(create_jcbamboo3_2341(2208, 112), 1);
    add_background_object(create_jcbamboo3_2341(2312, 224), 1);
    add_background_object(create_jcbamboo4_2342(2312, 768), 1);
    add_background_object(create_jcbamboo4_2342(2312, 856), 1);
    add_background_object(create_jcbamboo3_2340(2416, 336), 1);
    add_background_object(create_jcbamboo3_2341(2416, 224), 1);
    add_background_object(create_jcbamboo4_2342(2416, 768), 1);
    add_background_object(create_jcbamboo4_2342(2416, 856), 1);
    add_background_object(create_jcbamboo3_2341(2104, 0), 1);
    add_background_object(create_jcbamboo3_2341(2208, 0), 1);
    add_background_object(create_jcbamboo3_2341(2312, 112), 1);
    add_background_object(create_jcbamboo3_2341(2416, 112), 1);
    add_background_object(create_jcbamboo4_2342(2208, 656), 1);
    add_background_object(create_jcbamboo4_2342(2208, 744), 1);
    add_background_object(create_jcbamboo4_2342(2104, 656), 1);
    add_background_object(create_jcbamboo4_2342(2104, 744), 1);
    add_background_object(create_jcbamboo3_2341(2312, 0), 1);
    add_background_object(create_jcbamboo3_2341(2416, 0), 1);
    add_background_object(create_jcbamboo3_2340(2512, 336), 1);
    add_background_object(create_jcbamboo3_2341(2512, 224), 1);
    add_background_object(create_jcbamboo4_2342(2512, 768), 1);
    add_background_object(create_jcbamboo4_2342(2512, 856), 1);
    add_background_object(create_jcbamboo3_2340(2616, 336), 1);
    add_background_object(create_jcbamboo3_2341(2616, 224), 1);
    add_background_object(create_jcbamboo4_2342(2616, 768), 1);
    add_background_object(create_jcbamboo4_2342(2616, 856), 1);
    add_background_object(create_jcbamboo3_2341(2512, 112), 1);
    add_background_object(create_jcbamboo3_2341(2616, 112), 1);
    add_background_object(create_jcbamboo3_2341(2512, 0), 1);
    add_background_object(create_jcbamboo3_2341(2616, 0), 1);
    add_background_object(create_jcbamboo3_2340(2728, 336), 1);
    add_background_object(create_jcbamboo3_2341(2728, 224), 1);
    add_background_object(create_jcbamboo4_2342(2728, 768), 1);
    add_background_object(create_jcbamboo4_2342(2728, 856), 1);
    add_background_object(create_jcbamboo3_2341(2728, 0), 1);
    add_background_object(create_jcbamboo3_2340(2832, 336), 1);
    add_background_object(create_jcbamboo3_2341(2832, 224), 1);
    add_background_object(create_jcbamboo4_2342(2832, 768), 1);
    add_background_object(create_jcbamboo4_2342(2832, 856), 1);
    add_background_object(create_jcbamboo3_2341(2832, 112), 1);
    add_background_object(create_jcbamboo3_2341(2832, 0), 1);
    add_background_object(create_jcbamboo3_2340(2960, 336), 1);
    add_background_object(create_jcbamboo3_2341(2960, 224), 1);
    add_background_object(create_jcbamboo4_2342(2960, 768), 1);
    add_background_object(create_jcbamboo4_2342(2960, 856), 1);
    add_background_object(create_jcbamboo3_2341(2960, 112), 1);
    add_background_object(create_jcbamboo3_2341(2960, 0), 1);
    add_background_object(create_jcbamboo3_2341(2728, 112), 1);
    add_background_object(create_jcbamboo3_2340(3080, 336), 1);
    add_background_object(create_jcbamboo3_2341(3080, 224), 1);
    add_background_object(create_jcbamboo4_2342(3080, 768), 1);
    add_background_object(create_jcbamboo4_2342(3080, 856), 1);
    add_background_object(create_jcbamboo3_2341(3080, 112), 1);
    add_background_object(create_jcbamboo3_2341(3080, 0), 1);
    add_background_object(create_jcbamboo3_2340(3224, 336), 1);
    add_background_object(create_jcbamboo3_2341(3224, 224), 1);
    add_background_object(create_jcbamboo4_2342(3224, 768), 1);
    add_background_object(create_jcbamboo4_2342(3224, 856), 1);
    add_background_object(create_jcbamboo3_2341(3224, 112), 1);
    add_background_object(create_jcbamboo3_2341(3224, 0), 1);
    add_background_object(create_jcbamboo3_2340(3328, 448), 1);
    add_background_object(create_jcbamboo3_2341(3328, 336), 1);
    add_background_object(create_jcbamboo4_2342(3328, 880), 1);
    add_background_object(create_jcbamboo4_2342(3328, 968), 1);
    add_background_object(create_jcbamboo3_2341(3328, 224), 1);
    add_background_object(create_jcbamboo3_2341(3328, 112), 1);
    add_background_object(create_jcbamboo3_2340(3448, 448), 1);
    add_background_object(create_jcbamboo3_2341(3448, 336), 1);
    add_background_object(create_jcbamboo4_2342(3448, 880), 1);
    add_background_object(create_jcbamboo4_2342(3448, 968), 1);
    add_background_object(create_jcbamboo3_2341(3448, 224), 1);
    add_background_object(create_jcbamboo3_2341(3448, 112), 1);
    add_background_object(create_jcbamboo3_2341(3328, 0), 1);
    add_background_object(create_jcbamboo3_2341(3448, 0), 1);
    add_background_object(create_jcbamboo3_2340(3904, 376), 1);
    add_background_object(create_jcbamboo3_2341(3904, 264), 1);
    add_background_object(create_jcbamboo4_2342(3904, 808), 1);
    add_background_object(create_jcbamboo4_2342(3904, 896), 1);
    add_background_object(create_jcbamboo3_2341(3904, 152), 1);
    add_background_object(create_jcbamboo3_2341(3904, 40), 1);
    add_background_object(create_jcbamboo3_2340(4024, 376), 1);
    add_background_object(create_jcbamboo3_2341(4024, 264), 1);
    add_background_object(create_jcbamboo4_2342(4024, 808), 1);
    add_background_object(create_jcbamboo4_2342(4024, 896), 1);
    add_background_object(create_jcbamboo3_2341(4024, 152), 1);
    add_background_object(create_jcbamboo3_2341(4024, 40), 1);
    add_background_object(create_jcbamboo3_2340(4168, 376), 1);
    add_background_object(create_jcbamboo3_2341(4168, 264), 1);
    add_background_object(create_jcbamboo4_2342(4168, 808), 1);
    add_background_object(create_jcbamboo4_2342(4168, 896), 1);
    add_background_object(create_jcbamboo3_2341(4168, 152), 1);
    add_background_object(create_jcbamboo3_2341(4168, 40), 1);
    add_background_object(create_jcbamboo3_2341(3904, -72), 1);
    add_background_object(create_jcbamboo3_2341(4024, -72), 1);
    add_background_object(create_jcbamboo3_2341(4168, -72), 1);
    add_background_object(create_jcbamboo3_2340(1984, 368), 1);
    add_background_object(create_jcbamboo3_2340(1152, 352), 1);
    add_background_object(create_jcbamboo3_2341(1152, 240), 1);
    add_background_object(create_jcbamboo3_2341(1984, 256), 1);
    add_background_object(create_jcbamboo3_2341(1152, 128), 1);
    add_background_object(create_jcbamboo3_2341(1984, 144), 1);
    add_background_object(create_jcbamboo4_2342(1984, 800), 1);
    add_background_object(create_jcbamboo4_2342(1984, 888), 1);
    add_background_object(create_jcbamboo4_2342(1152, 784), 1);
    add_background_object(create_jcbamboo4_2342(1152, 872), 1);
    add_background_object(create_jcbamboo3_2341(1152, 16), 1);
    add_background_object(create_jcbamboo3_2341(1984, 32), 1);
    add_background_object(create_jcbamboo3_2341(1152, -96), 1);
    add_background_object(create_jcbamboo3_2341(1984, -80), 1);
    add_background_object(create_jcbamboo3_2340(1040, 312), 1);
    add_background_object(create_jcbamboo3_2341(1040, 200), 1);
    add_background_object(create_jcbamboo3_2341(1040, 88), 1);
    add_background_object(create_jcbamboo4_2342(1040, 744), 1);
    add_background_object(create_jcbamboo4_2342(1040, 832), 1);
    add_background_object(create_jcbamboo3_2341(1040, -24), 1);
    add_background_object(create_jcbamboo3_2341(1040, -136), 1);
    add_background_object(create_jcbamboo3_2340(912, 208), 1);
    add_background_object(create_jcbamboo3_2341(912, 96), 1);
    add_background_object(create_jcbamboo3_2341(912, -16), 1);
    add_background_object(create_jcbamboo4_2342(912, 640), 1);
    add_background_object(create_jcbamboo4_2342(912, 728), 1);
    add_background_object(create_jcbamboo3_2340(784, 208), 1);
    add_background_object(create_jcbamboo3_2341(784, 96), 1);
    add_background_object(create_jcbamboo3_2341(784, -16), 1);
    add_background_object(create_jcbamboo4_2342(784, 640), 1);
    add_background_object(create_jcbamboo4_2342(784, 728), 1);
    add_background_object(create_jcbamboo3_2340(656, 216), 1);
    add_background_object(create_jcbamboo3_2341(656, 104), 1);
    add_background_object(create_jcbamboo3_2341(656, -8), 1);
    add_background_object(create_jcbamboo4_2342(656, 648), 1);
    add_background_object(create_jcbamboo4_2342(656, 736), 1);
    add_background_object(create_jcbamboo3_2340(528, 216), 1);
    add_background_object(create_jcbamboo3_2341(528, 104), 1);
    add_background_object(create_jcbamboo3_2341(528, -8), 1);
    add_background_object(create_jcbamboo4_2342(528, 648), 1);
    add_background_object(create_jcbamboo4_2342(528, 736), 1);
    add_background_object(create_jcbamboo3_2340(408, 216), 1);
    add_background_object(create_jcbamboo3_2341(408, 104), 1);
    add_background_object(create_jcbamboo3_2341(408, -8), 1);
    add_background_object(create_jcbamboo4_2342(408, 648), 1);
    add_background_object(create_jcbamboo4_2342(408, 736), 1);
    add_background_object(create_jcbamboo3_2340(272, 216), 1);
    add_background_object(create_jcbamboo3_2341(272, 104), 1);
    add_background_object(create_jcbamboo3_2341(272, -8), 1);
    add_background_object(create_jcbamboo4_2342(272, 648), 1);
    add_background_object(create_jcbamboo4_2342(272, 736), 1);
    add_background_object(create_jcbamboo3_2340(104, 216), 1);
    add_background_object(create_jcbamboo3_2341(104, 104), 1);
    add_background_object(create_jcbamboo3_2341(104, -8), 1);
    add_background_object(create_jcbamboo4_2342(104, 648), 1);
    add_background_object(create_jcbamboo4_2342(104, 736), 1);
    add_background_object(create_jcbamboo3_2340(7416, 448), 1);
    add_background_object(create_jcbamboo3_2341(7416, 336), 1);
    add_background_object(create_jcbamboo4_2342(7416, 880), 1);
    add_background_object(create_jcbamboo4_2342(7416, 968), 1);
    add_background_object(create_jcbamboo3_2341(7416, 224), 1);
    add_background_object(create_jcbamboo3_2341(7416, 112), 1);
    add_background_object(create_jcbamboo3_2340(7536, 448), 1);
    add_background_object(create_jcbamboo3_2341(7536, 336), 1);
    add_background_object(create_jcbamboo4_2342(7536, 880), 1);
    add_background_object(create_jcbamboo4_2342(7536, 968), 1);
    add_background_object(create_jcbamboo3_2341(7536, 224), 1);
    add_background_object(create_jcbamboo3_2341(7536, 112), 1);
    add_background_object(create_jcbamboo3_2341(7416, 0), 1);
    add_background_object(create_jcbamboo3_2341(7536, 0), 1);
    add_background_object(create_jcbamboo3_2340(7680, 448), 1);
    add_background_object(create_jcbamboo3_2341(7680, 336), 1);
    add_background_object(create_jcbamboo4_2342(7680, 880), 1);
    add_background_object(create_jcbamboo4_2342(7680, 968), 1);
    add_background_object(create_jcbamboo3_2341(7680, 224), 1);
    add_background_object(create_jcbamboo3_2341(7680, 112), 1);
    add_background_object(create_jcbamboo3_2340(7800, 448), 1);
    add_background_object(create_jcbamboo3_2341(7800, 336), 1);
    add_background_object(create_jcbamboo4_2342(7800, 880), 1);
    add_background_object(create_jcbamboo4_2342(7800, 968), 1);
    add_background_object(create_jcbamboo3_2341(7800, 224), 1);
    add_background_object(create_jcbamboo3_2341(7800, 112), 1);
    add_background_object(create_jcbamboo3_2341(7680, 0), 1);
    add_background_object(create_jcbamboo3_2341(7800, 0), 1);
    add_background_object(create_jcbamboo3_2340(1744, 368), 1);
    add_background_object(create_jcbamboo3_2341(1744, 256), 1);
    add_background_object(create_jcbamboo3_2341(1744, 144), 1);
    add_background_object(create_jcbamboo3_2341(1744, 32), 1);
    add_background_object(create_jcbamboo3_2341(1744, -72), 1);
    add_background_object(create_jcbamboo4_2342(1744, 800), 1);
    add_background_object(create_jcbamboo4_2342(1744, 888), 1);
    add_background_object(create_jcbamboo3_2340(1864, 376), 1);
    add_background_object(create_jcbamboo3_2341(1864, 264), 1);
    add_background_object(create_jcbamboo3_2341(1864, 152), 1);
    add_background_object(create_jcbamboo3_2341(1864, 40), 1);
    add_background_object(create_jcbamboo3_2341(1864, -64), 1);
    add_background_object(create_jcbamboo4_2342(1864, 808), 1);
    add_background_object(create_jcbamboo4_2342(1864, 896), 1);
    add_background_object(create_jcbamboo3_2340(1624, 376), 1);
    add_background_object(create_jcbamboo3_2341(1624, 264), 1);
    add_background_object(create_jcbamboo3_2341(1624, 152), 1);
    add_background_object(create_jcbamboo3_2341(1624, 40), 1);
    add_background_object(create_jcbamboo3_2341(1624, -72), 1);
    add_background_object(create_jcbamboo4_2342(1624, 808), 1);
    add_background_object(create_jcbamboo4_2342(1624, 896), 1);
    add_background_object(create_jcbamboo3_2340(1384, 376), 1);
    add_background_object(create_jcbamboo3_2341(1384, 264), 1);
    add_background_object(create_jcbamboo3_2341(1384, 152), 1);
    add_background_object(create_jcbamboo3_2341(1384, 40), 1);
    add_background_object(create_jcbamboo3_2341(1384, -64), 1);
    add_background_object(create_jcbamboo4_2342(1384, 808), 1);
    add_background_object(create_jcbamboo4_2342(1384, 896), 1);
    add_background_object(create_jcbamboo3_2340(1272, 368), 1);
    add_background_object(create_jcbamboo3_2341(1272, 256), 1);
    add_background_object(create_jcbamboo3_2341(1272, 144), 1);
    add_background_object(create_jcbamboo3_2341(1272, 32), 1);
    add_background_object(create_jcbamboo3_2341(1272, -72), 1);
    add_background_object(create_jcbamboo4_2342(1272, 800), 1);
    add_background_object(create_jcbamboo4_2342(1272, 888), 1);
    add_background_object(create_jcbamboo3_2340(1504, 376), 1);
    add_background_object(create_jcbamboo3_2341(1504, 264), 1);
    add_background_object(create_jcbamboo3_2341(1504, 152), 1);
    add_background_object(create_jcbamboo3_2341(1504, 40), 1);
    add_background_object(create_jcbamboo3_2341(1504, -72), 1);
    add_background_object(create_jcbamboo4_2342(1504, 808), 1);
    add_background_object(create_jcbamboo4_2342(1504, 896), 1);
    add_background_object(create_jcbamboo3_2340(8096, 448), 1);
    add_background_object(create_jcbamboo3_2341(8096, 336), 1);
    add_background_object(create_jcbamboo4_2342(8096, 880), 1);
    add_background_object(create_jcbamboo4_2342(8096, 968), 1);
    add_background_object(create_jcbamboo3_2341(8096, 224), 1);
    add_background_object(create_jcbamboo3_2341(8096, 112), 1);
    add_background_object(create_jcbamboo3_2340(8216, 448), 1);
    add_background_object(create_jcbamboo3_2341(8216, 336), 1);
    add_background_object(create_jcbamboo4_2342(8216, 880), 1);
    add_background_object(create_jcbamboo4_2342(8216, 968), 1);
    add_background_object(create_jcbamboo3_2341(8216, 224), 1);
    add_background_object(create_jcbamboo3_2341(8216, 112), 1);
    add_background_object(create_jcbamboo3_2341(8096, 0), 1);
    add_background_object(create_jcbamboo3_2341(8216, 0), 1);
    add_background_object(create_jcbamboo3_2340(8360, 448), 1);
    add_background_object(create_jcbamboo3_2341(8360, 336), 1);
    add_background_object(create_jcbamboo4_2342(8360, 880), 1);
    add_background_object(create_jcbamboo4_2342(8360, 968), 1);
    add_background_object(create_jcbamboo3_2341(8360, 224), 1);
    add_background_object(create_jcbamboo3_2341(8360, 112), 1);
    add_background_object(create_jcbamboo3_2340(8480, 448), 1);
    add_background_object(create_jcbamboo3_2341(8480, 336), 1);
    add_background_object(create_jcbamboo4_2342(8480, 880), 1);
    add_background_object(create_jcbamboo4_2342(8480, 968), 1);
    add_background_object(create_jcbamboo3_2341(8480, 224), 1);
    add_background_object(create_jcbamboo3_2341(8480, 112), 1);
    add_background_object(create_jcbamboo3_2341(8360, 0), 1);
    add_background_object(create_jcbamboo3_2341(8480, 0), 1);
    add_background_object(create_jcbamboo4_2342(3904, 984), 1);
    add_background_object(create_jcbamboo4_2342(3904, 1072), 1);
    add_background_object(create_jcbamboo4_2342(4024, 984), 1);
    add_background_object(create_jcbamboo4_2342(4024, 1072), 1);
    add_background_object(create_jcbamboo4_2342(4168, 984), 1);
    add_background_object(create_jcbamboo4_2342(4168, 1072), 1);
    add_background_object(create_jcbamboo4_2342(3904, 1160), 1);
    add_background_object(create_jcbamboo4_2342(3904, 1248), 1);
    add_background_object(create_jcbamboo4_2342(4024, 1160), 1);
    add_background_object(create_jcbamboo4_2342(4024, 1248), 1);
    add_background_object(create_jcbamboo4_2342(4168, 1160), 1);
    add_background_object(create_jcbamboo4_2342(4168, 1248), 1);
    add_background_object(create_jcbamboo4_2342(2960, 944), 1);
    add_background_object(create_jcbamboo4_2342(2960, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3080, 944), 1);
    add_background_object(create_jcbamboo4_2342(3080, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3224, 944), 1);
    add_background_object(create_jcbamboo4_2342(3224, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3328, 1056), 1);
    add_background_object(create_jcbamboo4_2342(3328, 1144), 1);
    add_background_object(create_jcbamboo4_2342(3448, 1056), 1);
    add_background_object(create_jcbamboo4_2342(3448, 1144), 1);
    add_background_object(create_jcbamboo4_2342(2960, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2960, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3080, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3080, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3224, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3224, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3328, 1232), 1);
    add_background_object(create_jcbamboo4_2342(3328, 1320), 1);
    add_background_object(create_jcbamboo4_2342(3448, 1232), 1);
    add_background_object(create_jcbamboo4_2342(3448, 1320), 1);
    add_background_object(create_jcbamboo3_2340(10168, 440), 1);
    add_background_object(create_jcbamboo3_2341(10168, 328), 1);
    add_background_object(create_jcbamboo4_2342(10168, 872), 1);
    add_background_object(create_jcbamboo4_2342(10168, 960), 1);
    add_background_object(create_jcbamboo3_2341(10168, 216), 1);
    add_background_object(create_jcbamboo3_2341(10168, 104), 1);
    add_background_object(create_jcbamboo3_2340(10288, 440), 1);
    add_background_object(create_jcbamboo3_2341(10288, 328), 1);
    add_background_object(create_jcbamboo4_2342(10288, 872), 1);
    add_background_object(create_jcbamboo4_2342(10288, 960), 1);
    add_background_object(create_jcbamboo3_2341(10288, 216), 1);
    add_background_object(create_jcbamboo3_2341(10288, 104), 1);
    add_background_object(create_jcbamboo3_2341(10168, -8), 1);
    add_background_object(create_jcbamboo3_2341(10288, -8), 1);
    add_background_object(create_jcbamboo3_2340(10432, 440), 1);
    add_background_object(create_jcbamboo3_2341(10432, 328), 1);
    add_background_object(create_jcbamboo4_2342(10432, 872), 1);
    add_background_object(create_jcbamboo4_2342(10432, 960), 1);
    add_background_object(create_jcbamboo3_2341(10432, 216), 1);
    add_background_object(create_jcbamboo3_2341(10432, 104), 1);
    add_background_object(create_jcbamboo3_2340(10552, 440), 1);
    add_background_object(create_jcbamboo3_2341(10552, 328), 1);
    add_background_object(create_jcbamboo4_2342(10552, 872), 1);
    add_background_object(create_jcbamboo4_2342(10552, 960), 1);
    add_background_object(create_jcbamboo3_2341(10552, 216), 1);
    add_background_object(create_jcbamboo3_2341(10552, 104), 1);
    add_background_object(create_jcbamboo3_2341(10432, -8), 1);
    add_background_object(create_jcbamboo3_2341(10552, -8), 1);
    add_background_object(create_jcbamboo3_2340(10088, 400), 1);
    add_background_object(create_jcbamboo3_2341(10088, 288), 1);
    add_background_object(create_jcbamboo4_2342(10088, 832), 1);
    add_background_object(create_jcbamboo4_2342(10088, 920), 1);
    add_background_object(create_jcbamboo3_2341(10088, 176), 1);
    add_background_object(create_jcbamboo3_2341(10088, 64), 1);
    add_background_object(create_jcbamboo3_2341(10088, -48), 1);
    add_background_object(create_jcbamboo3_2340(10232, 400), 1);
    add_background_object(create_jcbamboo3_2341(10232, 288), 1);
    add_background_object(create_jcbamboo4_2342(10232, 832), 1);
    add_background_object(create_jcbamboo4_2342(10232, 920), 1);
    add_background_object(create_jcbamboo3_2341(10232, 176), 1);
    add_background_object(create_jcbamboo3_2341(10232, 64), 1);
    add_background_object(create_jcbamboo3_2340(10352, 400), 1);
    add_background_object(create_jcbamboo3_2341(10352, 288), 1);
    add_background_object(create_jcbamboo4_2342(10352, 832), 1);
    add_background_object(create_jcbamboo4_2342(10352, 920), 1);
    add_background_object(create_jcbamboo3_2341(10352, 176), 1);
    add_background_object(create_jcbamboo3_2341(10352, 64), 1);
    add_background_object(create_jcbamboo3_2341(10232, -48), 1);
    add_background_object(create_jcbamboo3_2341(10352, -48), 1);
    add_background_object(create_jcbamboo3_2340(10480, 384), 1);
    add_background_object(create_jcbamboo3_2341(10480, 272), 1);
    add_background_object(create_jcbamboo4_2342(10480, 816), 1);
    add_background_object(create_jcbamboo4_2342(10480, 904), 1);
    add_background_object(create_jcbamboo3_2341(10480, 160), 1);
    add_background_object(create_jcbamboo3_2341(10480, 48), 1);
    add_background_object(create_jcbamboo3_2340(10600, 384), 1);
    add_background_object(create_jcbamboo3_2341(10600, 272), 1);
    add_background_object(create_jcbamboo4_2342(10600, 816), 1);
    add_background_object(create_jcbamboo4_2342(10600, 904), 1);
    add_background_object(create_jcbamboo3_2341(10600, 160), 1);
    add_background_object(create_jcbamboo3_2341(10600, 48), 1);
    add_background_object(create_jcbamboo3_2341(10480, -64), 1);
    add_background_object(create_jcbamboo3_2341(10600, -64), 1);
    add_background_object(create_jcbamboo3_2340(9776, 448), 1);
    add_background_object(create_jcbamboo3_2341(9776, 336), 1);
    add_background_object(create_jcbamboo4_2342(9776, 880), 1);
    add_background_object(create_jcbamboo4_2342(9776, 968), 1);
    add_background_object(create_jcbamboo3_2341(9776, 224), 1);
    add_background_object(create_jcbamboo3_2341(9776, 112), 1);
    add_background_object(create_jcbamboo3_2340(9944, 448), 1);
    add_background_object(create_jcbamboo3_2341(9944, 336), 1);
    add_background_object(create_jcbamboo4_2342(9944, 880), 1);
    add_background_object(create_jcbamboo4_2342(9944, 968), 1);
    add_background_object(create_jcbamboo3_2341(9944, 224), 1);
    add_background_object(create_jcbamboo3_2341(9944, 112), 1);
    add_background_object(create_jcbamboo3_2341(9776, 0), 1);
    add_background_object(create_jcbamboo3_2341(9944, 0), 1);
    add_background_object(create_jcbamboo3_2340(9680, 416), 1);
    add_background_object(create_jcbamboo3_2341(9680, 304), 1);
    add_background_object(create_jcbamboo4_2342(9680, 848), 1);
    add_background_object(create_jcbamboo4_2342(9680, 936), 1);
    add_background_object(create_jcbamboo3_2341(9680, 192), 1);
    add_background_object(create_jcbamboo3_2341(9680, 80), 1);
    add_background_object(create_jcbamboo3_2341(9680, -32), 1);
    add_background_object(create_jcbamboo3_2340(9864, 408), 1);
    add_background_object(create_jcbamboo3_2341(9864, 296), 1);
    add_background_object(create_jcbamboo4_2342(9864, 840), 1);
    add_background_object(create_jcbamboo4_2342(9864, 928), 1);
    add_background_object(create_jcbamboo3_2341(9864, 184), 1);
    add_background_object(create_jcbamboo3_2341(9864, 72), 1);
    add_background_object(create_jcbamboo3_2340(10008, 408), 1);
    add_background_object(create_jcbamboo3_2341(10008, 296), 1);
    add_background_object(create_jcbamboo4_2342(10008, 840), 1);
    add_background_object(create_jcbamboo4_2342(10008, 928), 1);
    add_background_object(create_jcbamboo3_2341(10008, 184), 1);
    add_background_object(create_jcbamboo3_2341(10008, 72), 1);
    add_background_object(create_jcbamboo3_2341(9864, -40), 1);
    add_background_object(create_jcbamboo3_2341(10008, -40), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1048), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1136), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1048), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1136), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1048), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1136), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1048), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1136), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1008), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1096), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1008), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1096), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1008), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1096), 1);
    add_background_object(create_jcbamboo4_2342(10480, 992), 1);
    add_background_object(create_jcbamboo4_2342(10480, 1080), 1);
    add_background_object(create_jcbamboo4_2342(10600, 992), 1);
    add_background_object(create_jcbamboo4_2342(10600, 1080), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1056), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1144), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1056), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1144), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1024), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1112), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1016), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1104), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1016), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1104), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1224), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1312), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1224), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1312), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1224), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1312), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1224), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1312), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1184), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1272), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1184), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1272), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1184), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1272), 1);
    add_background_object(create_jcbamboo4_2342(10480, 1168), 1);
    add_background_object(create_jcbamboo4_2342(10480, 1256), 1);
    add_background_object(create_jcbamboo4_2342(10600, 1168), 1);
    add_background_object(create_jcbamboo4_2342(10600, 1256), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1232), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1320), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1232), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1320), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1200), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1288), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1192), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1280), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1192), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1280), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1400), 1);
    add_background_object(create_jcbamboo4_2342(10168, 1488), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1400), 1);
    add_background_object(create_jcbamboo4_2342(10288, 1488), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1400), 1);
    add_background_object(create_jcbamboo4_2342(10432, 1488), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1400), 1);
    add_background_object(create_jcbamboo4_2342(10552, 1488), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1360), 1);
    add_background_object(create_jcbamboo4_2342(10088, 1448), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1360), 1);
    add_background_object(create_jcbamboo4_2342(10232, 1448), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1360), 1);
    add_background_object(create_jcbamboo4_2342(10352, 1448), 1);
    add_background_object(create_jcbamboo4_2342(10480, 1344), 1);
    add_background_object(create_jcbamboo4_2342(10480, 1432), 1);
    add_background_object(create_jcbamboo4_2342(10600, 1344), 1);
    add_background_object(create_jcbamboo4_2342(10600, 1432), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1408), 1);
    add_background_object(create_jcbamboo4_2342(9776, 1496), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1408), 1);
    add_background_object(create_jcbamboo4_2342(9944, 1496), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1376), 1);
    add_background_object(create_jcbamboo4_2342(9680, 1464), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1368), 1);
    add_background_object(create_jcbamboo4_2342(9864, 1456), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1368), 1);
    add_background_object(create_jcbamboo4_2342(10008, 1456), 1);
    add_background_object(create_jcbamboo3_2340(8616, 448), 1);
    add_background_object(create_jcbamboo3_2341(8616, 336), 1);
    add_background_object(create_jcbamboo4_2342(8616, 880), 1);
    add_background_object(create_jcbamboo4_2342(8616, 968), 1);
    add_background_object(create_jcbamboo3_2341(8616, 224), 1);
    add_background_object(create_jcbamboo3_2341(8616, 112), 1);
    add_background_object(create_jcbamboo3_2340(8736, 448), 1);
    add_background_object(create_jcbamboo3_2341(8736, 336), 1);
    add_background_object(create_jcbamboo4_2342(8736, 880), 1);
    add_background_object(create_jcbamboo4_2342(8736, 968), 1);
    add_background_object(create_jcbamboo3_2341(8736, 224), 1);
    add_background_object(create_jcbamboo3_2341(8736, 112), 1);
    add_background_object(create_jcbamboo3_2341(8616, 0), 1);
    add_background_object(create_jcbamboo3_2341(8736, 0), 1);
    add_background_object(create_jcbamboo3_2340(10664, 440), 1);
    add_background_object(create_jcbamboo3_2341(10664, 328), 1);
    add_background_object(create_jcbamboo4_2342(10664, 872), 1);
    add_background_object(create_jcbamboo4_2342(10664, 960), 1);
    add_background_object(create_jcbamboo3_2341(10664, 216), 1);
    add_background_object(create_jcbamboo3_2341(10664, 104), 1);
    add_background_object(create_jcbamboo3_2341(10664, -8), 1);
    add_background_object(create_jcbamboo3_2340(10712, 384), 1);
    add_background_object(create_jcbamboo3_2341(10712, 272), 1);
    add_background_object(create_jcbamboo4_2342(10712, 816), 1);
    add_background_object(create_jcbamboo4_2342(10712, 904), 1);
    add_background_object(create_jcbamboo3_2341(10712, 160), 1);
    add_background_object(create_jcbamboo3_2341(10712, 48), 1);
    add_background_object(create_jcbamboo3_2341(10712, -64), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1048), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1136), 1);
    add_background_object(create_jcbamboo4_2342(10712, 992), 1);
    add_background_object(create_jcbamboo4_2342(10712, 1080), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1224), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1312), 1);
    add_background_object(create_jcbamboo4_2342(10712, 1168), 1);
    add_background_object(create_jcbamboo4_2342(10712, 1256), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1400), 1);
    add_background_object(create_jcbamboo4_2342(10664, 1488), 1);
    add_background_object(create_jcbamboo4_2342(10712, 1344), 1);
    add_background_object(create_jcbamboo4_2342(10712, 1432), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1056), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1144), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1232), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1320), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1408), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1496), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8096, 1672), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8216, 1672), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1672), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8480, 1672), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8616, 1672), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1584), 1);
    add_background_object(create_jcbamboo4_2342(8736, 1672), 1);
    add_background_object(create_jctreetrunk_2343(11512, 1040), 2);
    add_background_object(create_jcrockpillar1_2344(6560, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(11224, 1240), 2);
    add_background_object(create_jcrock1_2345(11112, 1456), 2);
    add_background_object(create_jcrock1_2345(8656, 1504), 2);
    add_background_object(create_jcrock2_2346(8440, 1504), 2);
    add_background_object(create_jcrock2_2346(7944, 1528), 2);
    add_background_object(create_jcrock2_2346(7720, 1504), 2);
    add_background_object(create_jcrock1_2345(7216, 1504), 2);
    add_background_object(create_jcbamboo1_2347(7008, 0), 2);
    add_background_object(create_jcbamboo2_2348(7192, 264), 2);
    add_background_object(create_jcbamboo2_2348(7192, 408), 2);
    add_background_object(create_jcbamboo2_2348(7192, 552), 2);
    add_background_object(create_jcplant1_2349(4512, 704), 2);
    add_background_object(create_jcbamboo2_2350(3768, 1072), 2);
    add_background_object(create_jcbamboo1_2347(3768, 536), 2);
    add_background_object(create_jcbamboo2_2350(3456, 1040), 2);
    add_background_object(create_jcbamboo2_2350(3600, 1024), 2);
    add_background_object(create_jcbamboo1_2347(3456, 504), 2);
    add_background_object(create_jcbamboo1_2347(3600, 488), 2);
    add_background_object(create_jcbamboo2_2350(3952, 1000), 2);
    add_background_object(create_jcbamboo1_2347(3952, 464), 2);
    add_background_object(create_jcbamboo2_2348(3952, 320), 2);
    add_background_object(create_jcbamboo2_2348(3952, 176), 2);
    add_background_object(create_jcbamboo2_2348(3952, 32), 2);
    add_background_object(create_jcbamboo2_2348(3952, -112), 2);
    add_background_object(create_jcrock2_2346(4816, 1072), 2);
    add_background_object(create_jcplant1_2349(4464, 736), 2);
    add_background_object(create_jcplant1_2349(4552, 728), 2);
    add_background_object(create_jcplant1_2349(4368, 752), 2);
    add_background_object(create_jcplant1_2349(4624, 752), 2);
    add_background_object(create_jcbamboo2_2350(5312, 1056), 2);
    add_background_object(create_jcbamboo1_2347(5312, 520), 2);
    add_background_object(create_jcbamboo2_2348(5312, 376), 2);
    add_background_object(create_jcbamboo2_2348(5312, 232), 2);
    add_background_object(create_jcbamboo2_2348(5312, 88), 2);
    add_background_object(create_jcbamboo2_2348(5312, -56), 2);
    add_background_object(create_jcbamboo2_2350(5464, 1064), 2);
    add_background_object(create_jcbamboo1_2347(5464, 528), 2);
    add_background_object(create_jcbamboo2_2348(5464, 384), 2);
    add_background_object(create_jcbamboo2_2348(5464, 240), 2);
    add_background_object(create_jcbamboo2_2348(5464, 96), 2);
    add_background_object(create_jcbamboo2_2348(5464, -48), 2);
    add_background_object(create_jcbamboo2_2350(5744, 1072), 2);
    add_background_object(create_jcbamboo1_2347(5744, 536), 2);
    add_background_object(create_jcbamboo2_2348(5744, 392), 2);
    add_background_object(create_jcbamboo2_2348(5744, 248), 2);
    add_background_object(create_jcbamboo2_2348(5744, 104), 2);
    add_background_object(create_jcbamboo2_2348(5744, -40), 2);
    add_background_object(create_jcbamboo2_2350(5896, 1056), 2);
    add_background_object(create_jcbamboo1_2347(5896, 520), 2);
    add_background_object(create_jcbamboo2_2348(5896, 376), 2);
    add_background_object(create_jcbamboo2_2348(5896, 232), 2);
    add_background_object(create_jcbamboo2_2348(5896, 88), 2);
    add_background_object(create_jcbamboo2_2348(5896, -56), 2);
    add_background_object(create_jcrock2_2346(6464, 888), 2);
    add_background_object(create_jcbamboo1_2347(6520, 136), 2);
    add_background_object(create_jcbamboo2_2348(6520, -8), 2);
    add_background_object(create_jcbamboo1_2347(6648, 64), 2);
    add_background_object(create_jcbamboo2_2348(6648, -80), 2);
    add_background_object(create_jcplant1_2349(7128, 568), 2);
    add_background_object(create_jcplant1_2349(7048, 496), 2);
    add_background_object(create_jcplant1_2349(7184, 608), 2);
    add_background_object(create_jcplanet4_2351(7304, 592), 2);
    add_background_object(create_jcplanet4_2351(7128, 496), 2);
    add_background_object(create_jcbamboo1_2347(9160, 520), 2);
    add_background_object(create_jcbamboo2_2350(9160, 1056), 2);
    add_background_object(create_jcbamboo2_2348(9160, 376), 2);
    add_background_object(create_jcbamboo2_2348(9160, 232), 2);
    add_background_object(create_jcbamboo2_2348(9160, 88), 2);
    add_background_object(create_jcbamboo2_2348(9160, -56), 2);
    add_background_object(create_jcbamboo1_2347(9352, 416), 2);
    add_background_object(create_jcbamboo2_2350(9352, 952), 2);
    add_background_object(create_jcbamboo2_2348(9352, 272), 2);
    add_background_object(create_jcbamboo2_2348(9352, 128), 2);
    add_background_object(create_jcbamboo2_2348(9352, -16), 2);
    add_background_object(create_jcbamboo1_2347(9568, 336), 2);
    add_background_object(create_jcbamboo2_2350(9568, 872), 2);
    add_background_object(create_jcbamboo2_2350(504, 936), 2);
    add_background_object(create_jcbamboo1_2347(504, 400), 2);
    add_background_object(create_jcbamboo1_2347(368, 400), 2);
    add_background_object(create_jcbamboo1_2347(192, 400), 2);
    add_background_object(create_jcbamboo2_2348(504, 256), 2);
    add_background_object(create_jcbamboo2_2348(504, 112), 2);
    add_background_object(create_jcbamboo2_2348(504, -32), 2);
    add_background_object(create_jcbamboo2_2348(368, 256), 2);
    add_background_object(create_jcbamboo2_2348(368, 112), 2);
    add_background_object(create_jcbamboo2_2348(368, -32), 2);
    add_background_object(create_jcbamboo2_2348(192, 256), 2);
    add_background_object(create_jcbamboo2_2348(192, 112), 2);
    add_background_object(create_jcbamboo2_2348(192, -32), 2);
    add_background_object(create_jcplant1_2349(352, 888), 2);
    add_background_object(create_jcplant1_2349(496, 912), 2);
    add_background_object(create_jcplant1_2349(256, 808), 2);
    add_background_object(create_jcplant1_2349(192, 768), 2);
    add_background_object(create_jcbamboo1_2347(1816, 400), 2);
    add_background_object(create_jcbamboo2_2348(1816, 256), 2);
    add_background_object(create_jcbamboo2_2348(1816, 112), 2);
    add_background_object(create_jcbamboo2_2348(1816, -32), 2);
    add_background_object(create_jcplant1_2349(1720, 768), 2);
    add_background_object(create_jcplant1_2349(2184, 1064), 2);
    add_background_object(create_jcplant1_2349(2336, 1096), 2);
    add_background_object(create_jcbamboo2_2350(1984, 936), 2);
    add_background_object(create_jcbamboo1_2347(1984, 400), 2);
    add_background_object(create_jcbamboo2_2348(1984, 256), 2);
    add_background_object(create_jcbamboo2_2348(1984, 112), 2);
    add_background_object(create_jcbamboo2_2348(1984, -32), 2);
    add_background_object(create_jcrock1_2345(1904, 864), 2);
    add_background_object(create_jcrock2_2346(424, 880), 2);
    add_background_object(create_jcrock1_2345(80, 712), 2);
    add_background_object(create_jccoral1_2352(7552, 1392), 2);
    add_background_object(create_jccoral2_2353(7576, 1472), 2);
    add_background_object(create_jccoral1_2352(7552, 1552), 2);
    add_background_object(create_jccoral1_2352(7400, 1456), 2);
    add_background_object(create_jccoral2_2353(7424, 1536), 2);
    add_background_object(create_jccoral1_2352(7280, 1352), 2);
    add_background_object(create_jccoral2_2353(7304, 1432), 2);
    add_background_object(create_jccoral1_2352(7280, 1512), 2);
    add_background_object(create_jccoral1_2352(7680, 1432), 2);
    add_background_object(create_jccoral2_2353(7704, 1512), 2);
    add_background_object(create_jccoral2_2353(7704, 1352), 2);
    add_background_object(create_jccoral1_2352(7760, 1544), 2);
    add_background_object(create_jccoral2_2353(7784, 1464), 2);
    add_background_object(create_jccoral1_2352(7856, 1368), 2);
    add_background_object(create_jccoral2_2353(7880, 1448), 2);
    add_background_object(create_jccoral1_2352(7856, 1528), 2);
    add_background_object(create_jccoral1_2352(8056, 1456), 2);
    add_background_object(create_jccoral2_2353(8080, 1536), 2);
    add_background_object(create_jccoral2_2353(8080, 1376), 2);
    add_background_object(create_jccoral1_2352(8056, 1296), 2);
    add_background_object(create_jccoral1_2352(8208, 1512), 2);
    add_background_object(create_jccoral2_2353(8232, 1432), 2);
    add_background_object(create_jccoral1_2352(8208, 1352), 2);
    add_background_object(create_jccoral2_2353(8144, 1536), 2);
    add_background_object(create_jccoral1_2352(8128, 1464), 2);
    add_background_object(create_jccoral1_2352(8384, 1456), 2);
    add_background_object(create_jccoral2_2353(8408, 1536), 2);
    add_background_object(create_jccoral2_2353(8408, 1376), 2);
    add_background_object(create_jccoral1_2352(8672, 1328), 2);
    add_background_object(create_jccoral2_2353(8696, 1408), 2);
    add_background_object(create_jccoral1_2352(8544, 1480), 2);
    add_background_object(create_jccoral1_2352(8496, 1520), 2);
    add_background_object(create_jccoral1_2352(8672, 1488), 2);
    add_background_object(create_jccoral2_2353(8744, 1520), 2);
    add_background_object(create_jccoral2_2353(8888, 1320), 2);
    add_background_object(create_jccoral1_2352(8864, 1400), 2);
    add_background_object(create_jccoral1_2352(8960, 1352), 2);
    add_background_object(create_jcrock1_2345(7336, 1528), 2);
    add_background_object(create_jcrock2_2346(7576, 1544), 2);
    add_background_object(create_jcrock1_2345(8160, 1528), 2);
    add_background_object(create_jcrock2_2346(8864, 1384), 2);
    add_background_object(create_jcrock1_2345(6984, 1336), 2);
    add_background_object(create_jcrock2_2346(6776, 1328), 2);
    add_background_object(create_jcrock2_2346(6672, 1456), 2);
    add_background_object(create_jcrock1_2345(6344, 1480), 2);
    add_background_object(create_jcrock1_2345(5576, 1376), 2);
    add_background_object(create_jcrock2_2346(6024, 1400), 2);
    add_background_object(create_jcrock2_2346(5008, 1368), 2);
    add_background_object(create_jcrock1_2345(4800, 1416), 2);
    add_background_object(create_jcrock2_2346(4552, 1392), 2);
    add_background_object(create_jcrock2_2346(4384, 1400), 2);
    add_background_object(create_jcplant3_2354(2856, 848), 2);
    add_background_object(create_jcplant3_2354(4472, 1048), 2);
    add_background_object(create_jcplant4_2355(9736, 792), 2);
    add_background_object(create_jcbamboo1_2347(6336, 808), 2);
    add_background_object(create_jcbamboo2_2348(6336, 664), 2);
    add_background_object(create_jcbamboo2_2348(6336, 520), 2);
    add_background_object(create_jcbamboo2_2348(6336, 376), 2);
    add_background_object(create_jcbamboo2_2348(6336, 232), 2);
    add_background_object(create_jcbamboo2_2348(6336, 88), 2);
    add_background_object(create_jcbamboo2_2348(6336, -56), 2);
    add_background_object(create_jcbamboo1_2347(664, 352), 2);
    add_background_object(create_jcbamboo2_2348(664, 208), 2);
    add_background_object(create_jcbamboo2_2348(664, 64), 2);
    add_background_object(create_jcbamboo2_2348(664, -80), 2);
    add_background_object(create_jcbamboo1_2347(808, 320), 2);
    add_background_object(create_jcbamboo2_2348(808, 176), 2);
    add_background_object(create_jcbamboo2_2348(808, 32), 2);
    add_background_object(create_jcbamboo2_2348(808, -112), 2);
    add_background_object(create_jcbamboo1_2347(1024, 448), 2);
    add_background_object(create_jcbamboo2_2348(1024, 304), 2);
    add_background_object(create_jcbamboo2_2348(1024, 160), 2);
    add_background_object(create_jcbamboo2_2348(1024, 16), 2);
    add_background_object(create_jcbamboo1_2347(1152, 512), 2);
    add_background_object(create_jcbamboo2_2348(1152, 368), 2);
    add_background_object(create_jcbamboo2_2348(1152, 224), 2);
    add_background_object(create_jcbamboo2_2348(1152, 80), 2);
    add_background_object(create_jcbamboo1_2347(1328, 480), 2);
    add_background_object(create_jcbamboo2_2348(1328, 336), 2);
    add_background_object(create_jcbamboo2_2348(1328, 192), 2);
    add_background_object(create_jcbamboo2_2348(1328, 48), 2);
    add_background_object(create_jcbamboo1_2347(1448, 432), 2);
    add_background_object(create_jcbamboo2_2348(1448, 288), 2);
    add_background_object(create_jcbamboo2_2348(1448, 144), 2);
    add_background_object(create_jcbamboo2_2348(1448, 0), 2);
    add_background_object(create_jcbamboo2_2348(1024, -128), 2);
    add_background_object(create_jcbamboo2_2348(1152, -64), 2);
    add_background_object(create_jcbamboo2_2348(1328, -96), 2);
    add_background_object(create_jcbamboo1_2347(9792, 352), 2);
    add_background_object(create_jcbamboo2_2350(9792, 888), 2);
    add_background_object(create_jcbamboo2_2348(9792, 208), 2);
    add_background_object(create_jcbamboo2_2348(9792, 64), 2);
    add_background_object(create_jcbamboo2_2348(9792, -80), 2);
    add_background_object(create_jcbamboo2_2350(12480, 968), 2);
    add_background_object(create_jcbamboo1_2347(12480, 432), 2);
    add_background_object(create_jcbamboo2_2348(12480, 288), 2);
    add_background_object(create_jcbamboo2_2348(12480, 144), 2);
    add_background_object(create_jcbamboo2_2348(12480, 0), 2);
    add_background_object(create_jcbamboo2_2350(12480, 1080), 2);
    add_background_object(create_jcbamboo2_2350(12648, 1000), 2);
    add_background_object(create_jcbamboo1_2347(12648, 464), 2);
    add_background_object(create_jcbamboo2_2348(12648, 320), 2);
    add_background_object(create_jcbamboo2_2348(12648, 176), 2);
    add_background_object(create_jcbamboo2_2348(12648, 32), 2);
    add_background_object(create_jcbamboo2_2350(12648, 1112), 2);
    add_background_object(create_jcbamboo2_2348(12648, -112), 2);
    add_background_object(create_jcbamboo2_2350(12800, 952), 2);
    add_background_object(create_jcbamboo1_2347(12800, 416), 2);
    add_background_object(create_jcbamboo2_2348(12800, 272), 2);
    add_background_object(create_jcbamboo2_2348(12800, 128), 2);
    add_background_object(create_jcbamboo2_2348(12800, -16), 2);
    add_background_object(create_jcbamboo2_2350(12800, 1064), 2);
    add_background_object(create_jcbamboo2_2350(12960, 984), 2);
    add_background_object(create_jcbamboo1_2347(12960, 448), 2);
    add_background_object(create_jcbamboo2_2348(12960, 304), 2);
    add_background_object(create_jcbamboo2_2348(12960, 160), 2);
    add_background_object(create_jcbamboo2_2348(12960, 16), 2);
    add_background_object(create_jcbamboo2_2350(12960, 1096), 2);
    add_background_object(create_jcbamboo2_2350(13104, 936), 2);
    add_background_object(create_jcbamboo1_2347(13104, 400), 2);
    add_background_object(create_jcbamboo2_2348(13104, 256), 2);
    add_background_object(create_jcbamboo2_2348(13104, 112), 2);
    add_background_object(create_jcbamboo2_2348(13104, -32), 2);
    add_background_object(create_jcbamboo2_2350(13104, 1048), 2);
    add_background_object(create_jcbamboo2_2350(13256, 936), 2);
    add_background_object(create_jcbamboo1_2347(13256, 400), 2);
    add_background_object(create_jcbamboo2_2348(13256, 256), 2);
    add_background_object(create_jcbamboo2_2348(13256, 112), 2);
    add_background_object(create_jcbamboo2_2348(13256, -32), 2);
    add_background_object(create_jcbamboo2_2350(13256, 1048), 2);
    add_background_object(create_jcbamboo2_2348(12960, -128), 2);
    add_background_object(create_jcbamboo1_2347(13400, 288), 2);
    add_background_object(create_jcbamboo2_2348(13400, 144), 2);
    add_background_object(create_jcbamboo2_2348(13400, 0), 2);
    add_background_object(create_jccoral1_2352(11224, 1464), 2);
    add_background_object(create_jccoral2_2353(11248, 1384), 2);
    add_background_object(create_jccoral2_2353(11136, 1480), 2);
    add_background_object(create_jccoral1_2352(11120, 1400), 2);
    add_background_object(create_jccoral2_2353(11144, 1320), 2);
    add_background_object(create_jcrock2_2346(11728, 1264), 2);
    add_background_object(create_jcrock1_2345(11624, 1240), 2);
    add_background_object(create_jcrock2_2346(11896, 1296), 2);
    add_background_object(create_jcrock1_2345(12016, 1240), 2);
    add_background_object(create_jcrock1_2345(12152, 1272), 2);
    add_background_object(create_jcrock2_2346(12224, 1296), 2);
    add_background_object(create_jcrock2_2346(12408, 1240), 2);
    add_background_object(create_jcplanet3_2356(11360, 1088), 2);
    add_background_object(create_jcplanet4_2351(11392, 1112), 2);
    add_background_object(create_jcplant1_2349(11480, 1128), 2);
    add_background_object(create_jcrockpillar1_2344(9136, 1304), 2);
    add_background_object(create_jcrockpillar2_2357(9464, 1432), 2);
    add_background_object(create_jcrockpillar2_2357(9776, 1016), 2);
    add_background_object(create_jcrockpillar2_2357(9880, 1320), 2);
    add_background_object(create_jcrockpillar2_2357(9984, 1624), 2);
    add_background_object(create_jcrockpillar1_2344(10432, 1504), 2);
    add_background_object(create_jcrockpillar1_2344(7024, 760), 2);
    add_background_object(create_jcrockpillar2_2357(6528, 760), 2);
    add_background_object(create_jcrock1_2345(6696, 1008), 2);
    add_background_object(create_jcrock2_2346(6600, 1024), 2);
    add_background_object(create_jcrockpillar2_2357(12536, 880), 2);
    add_background_object(create_jcrockpillar1_2344(12904, 912), 2);
    add_background_object(create_jcrockpillar2_2357(10432, 1200), 2);
    add_background_object(create_jcrockpillar2_2357(10328, 896), 2);
    add_background_object(create_jcbamboo1_2347(10416, 216), 2);
    add_background_object(create_jcbamboo2_2350(10416, 752), 2);
    add_background_object(create_jcbamboo2_2348(10416, 72), 2);
    add_background_object(create_jcbamboo2_2348(10416, -72), 2);
    add_background_object(create_jcrockpillar1_2344(9624, 872), 2);
    add_background_object(create_jctreetrunk_2343(13272, 1000), 2);
    add_background_object(create_jcplant1_2349(704, 776), 2);
    add_background_object(create_jcplant1_2349(600, 856), 2);
    add_background_object(create_jcplant1_2349(992, 944), 2);
    add_background_object(create_jcplant1_2349(12808, 1120), 2);
    add_background_object(create_jcplant1_2349(12856, 1104), 2);
    add_background_object(create_jcplant1_2349(13048, 1112), 2);
    add_background_object(create_jcplant1_2349(13216, 1112), 2);
    add_background_object(create_jcplant1_2349(12448, 1152), 2);
    add_object(create_gimmickleafplatformback_2358(10128, 647), 2);
    add_object(create_gimmickleafplatform1_2359(10128, 407), 2);
    add_object(create_gimmickleafplatform2_2360(10128, 407), 2);
    add_object(create_gimmickleafplatformback_2358(10320, 999), 2);
    add_object(create_gimmickleafplatform1_2359(10320, 759), 2);
    add_object(create_gimmickleafplatform2_2360(10320, 759), 2);
    add_object(create_jcwaterstream8_2361(9952, 856), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(13480, -43), 2);
    add_object(create_link_352(96, -184), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_gimmickleafplatformback_2358(3544, 1239), 2);
    add_object(create_gimmickleafplatformback_2358(3784, 1175), 2);
    add_object(create_gimmickleafplatform1_2359(3544, 999), 2);
    add_object(create_gimmickleafplatform2_2360(3544, 999), 2);
    add_object(create_gimmickleafplatform1_2359(3784, 935), 2);
    add_object(create_gimmickleafplatform2_2360(3784, 935), 2);
    add_object(create_gimmickleafplatformback_2358(4152, 1111), 2);
    add_object(create_gimmickleafplatform1_2359(4152, 871), 2);
    add_object(create_gimmickleafplatform2_2360(4152, 871), 2);
    add_object(create_gimmickleafplatformback_2358(4592, 895), 2);
    add_object(create_gimmickleafplatform1_2359(4592, 655), 2);
    add_object(create_gimmickleafplatform2_2360(4592, 655), 2);
    add_object(create_gimmickleafplatformback_2358(4560, 895), 2);
    add_object(create_gimmickleafplatform1_2359(4560, 655), 2);
    add_object(create_gimmickleafplatform2_2360(4560, 655), 2);
    add_object(create_gimmickleafplatformback_2358(4528, 895), 2);
    add_object(create_gimmickleafplatform1_2359(4528, 655), 2);
    add_object(create_gimmickleafplatform2_2360(4528, 655), 2);
    add_object(create_jcwaterstream8_2361(4872, 1096), 2);
    add_object(create_jcwaterstream8_2361(4872, 968), 2);
    add_object(create_jcwaterstream8_2361(4872, 1032), 2);
    add_object(create_jcwaterstream7_2362(4888, 1096), 2);
    add_object(create_jcwaterstream7_2362(4888, 968), 2);
    add_object(create_jcwaterstream7_2362(4888, 1032), 2);
    add_object(create_jcwaterstream8_2361(6696, 1024), 2);
    add_object(create_jcwaterstream8_2361(6696, 960), 2);
    add_object(create_jcwaterstream8_2361(6696, 832), 2);
    add_object(create_jcwaterstream8_2361(6576, 832), 2);
    add_object(create_jcwaterstream8_2361(6576, 768), 2);
    add_object(create_jcwaterstream8_2361(6696, 768), 2);
    add_object(create_jcwaterstream8_2361(6696, 896), 2);
    add_object(create_jcwaterstream8_2361(6576, 896), 2);
    add_object(create_jcslidingplatformmask_2363(5536, 616), 2);
    add_object(create_jcslidingplatformmask_2363(5016, 584), 2);
    add_object(create_jcslidingplatformmask_2363(6960, 320), 2);
    add_object(create_jcwaterstream8_2361(7080, 1008), 2);
    add_object(create_jcwaterstream8_2361(7080, 944), 2);
    add_object(create_jcwaterstream8_2361(7080, 880), 2);
    add_object(create_jcwaterstream8_2361(7080, 816), 2);
    add_object(create_jcwaterstream8_2361(7080, 752), 2);
    add_object(create_jcwaterstream8_2361(7080, 688), 2);
    add_object(create_jcwaterstream7_2362(6880, 1032), 2);
    add_object(create_jcwaterstream7_2362(6880, 776), 2);
    add_object(create_jcwaterstream7_2362(6880, 840), 2);
    add_object(create_jcwaterstream7_2362(6880, 904), 2);
    add_object(create_jcwaterstream7_2362(6880, 968), 2);
    add_object(create_enemyplantturretusstalk_2364(4318, 1032), 2);
    add_object(create_enemyplantturretusstalk_2364(4430, 1064), 2);
    add_object(create_enemyplantturretusstalk_2364(4790, 744), 2);
    add_object(create_enemyplantturretusstalk_2364(4870, 704), 2);
    add_object(create_enemyplantturretusstalk_2364(4942, 720), 2);
    add_object(create_enemyplantturretusstalk_2364(4326, 688), 2);
    add_object(create_enemyplantturretus_2365(4314, 1027), 2);
    add_object(create_enemyplantturretus_2365(4426, 1059), 2);
    add_object(create_enemyplantturretus_2365(4786, 731), 2);
    add_object(create_enemyplantturretus_2365(4866, 691), 2);
    add_object(create_enemyplantturretus_2365(4938, 707), 2);
    add_object(create_enemyplantturretus_2365(4322, 683), 2);
    add_object(create_enemyplantturretushat_2366(4314, 1032), 2);
    add_object(create_enemyplantturretushat_2366(4426, 1064), 2);
    add_object(create_enemyplantturretushat_2366(4786, 736), 2);
    add_object(create_enemyplantturretushat_2366(4866, 696), 2);
    add_object(create_enemyplantturretushat_2366(4938, 712), 2);
    add_object(create_enemyplantturretushat_2366(4322, 688), 2);
    add_object(create_effectfallingleaf_2323(4317, 619), 2);
    add_object(create_enemyplantturretusstalk_2364(5710, 1080), 2);
    add_object(create_enemyplantturretus_2365(5706, 1075), 2);
    add_object(create_enemyplantturretushat_2366(5706, 1080), 2);
    add_object(create_enemyplantturretusstalk_2364(7254, 552), 2);
    add_object(create_enemyplantturretus_2365(7250, 547), 2);
    add_object(create_enemyplantturretushat_2366(7250, 552), 2);
    add_object(create_enemyplantturretusstalk_2364(7310, 584), 2);
    add_object(create_enemyplantturretus_2365(7306, 579), 2);
    add_object(create_enemyplantturretushat_2366(7306, 584), 2);
    add_object(create_jcwaterstream8_2361(9160, 1136), 2);
    add_object(create_jcwaterstream8_2361(9288, 1072), 2);
    add_object(create_jcwaterstream8_2361(9416, 1008), 2);
    add_object(create_jcwaterstream8_2361(9952, 920), 2);
    add_object(create_jcwaterstream7_2362(9968, 920), 2);
    add_object(create_jcwaterstream7_2362(9968, 856), 2);
    add_object(create_jcwaterstream8_2361(9952, 728), 2);
    add_object(create_jcwaterstream8_2361(9952, 792), 2);
    add_object(create_jcwaterstream7_2362(9968, 792), 2);
    add_object(create_jcwaterstream7_2362(9968, 728), 2);
    add_object(create_jcwaterstream8_2361(9952, 600), 2);
    add_object(create_jcwaterstream8_2361(9952, 664), 2);
    add_object(create_jcwaterstream7_2362(9968, 664), 2);
    add_object(create_jcwaterstream7_2362(9968, 600), 2);
    add_object(create_jcslidingplatformmask_2363(10488, 856), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_jcbud1_2367(3896, 912), 3);
    add_background_object(create_jcbud2_2368(3952, 896), 3);
    add_background_object(create_jcbud2_2368(8064, 704), 3);
    add_background_object(create_jcbud2_2368(1864, 800), 3);
    add_background_object(create_jcbud2_2368(1968, 888), 3);
    add_background_object(create_jcbamboo1_2347(1664, 400), 3);
    add_background_object(create_jcbud1_2367(1640, 816), 3);
    add_background_object(create_jcrock2_2346(13384, 456), 3);
    add_background_object(create_jctreetrunk_2343(13312, 424), 3);
    add_background_object(create_jcplant1_2349(12768, 824), 3);
    add_background_object(create_jctreetrunk_2343(12824, 760), 3);
    add_background_object(create_jcflatground7_2369(12168, 1192), 3);
    add_background_object(create_jcflatground6_2370(12192, 1192), 3);
    add_background_object(create_jcflatground7_2369(11912, 1192), 3);
    add_background_object(create_jcflatground6_2370(11936, 1192), 3);
    add_background_object(create_jcdirt7_2371(10320, 1064), 3);
    add_background_object(create_jcdirt7_2371(10256, 1064), 3);
    add_background_object(create_jcdirt7_2371(10448, 1064), 3);
    add_background_object(create_jcdirt7_2371(10384, 1064), 3);
    add_background_object(create_jcdirt7_2371(10192, 864), 3);
    add_background_object(create_jcdirt7_2371(10128, 864), 3);
    add_background_object(create_jcbrokenslope_2372(10496, 904), 3);
    add_background_object(create_jcrockpillar2_2357(9936, 560), 3);
    add_background_object(create_jcdirt18_2373(11648, 1192), 3);
    add_background_object(create_jcdirt4_2374(13344, 1368), 3);
    add_background_object(create_jcrock2_2346(11016, 1752), 3);
    add_background_object(create_jcrock1_2345(10664, 1800), 3);
    add_background_object(create_jcrock1_2345(10488, 1736), 3);
    add_background_object(create_jcrock2_2346(10392, 1760), 3);
    add_background_object(create_jcrock2_2346(10472, 1784), 3);
    add_background_object(create_jcflatground1_2375(10336, 1848), 3);
    add_background_object(create_jcflatground1_2375(10792, 1848), 3);
    add_background_object(create_jcflatground1_2375(10984, 1848), 3);
    add_background_object(create_jcdirt1_594(10344, 1856), 3);
    add_background_object(create_jcrock1_2345(10256, 1792), 3);
    add_background_object(create_jccoral2_2353(10408, 1800), 3);
    add_background_object(create_jccoral2_2353(10296, 1832), 3);
    add_background_object(create_jcdirt4_2374(10344, 1920), 3);
    add_background_object(create_jcrock2_2346(9976, 1624), 3);
    add_background_object(create_jcrock1_2345(10024, 1816), 3);
    add_background_object(create_jcrock2_2346(9392, 1832), 3);
    add_background_object(create_jcrock2_2346(9584, 1864), 3);
    add_background_object(create_jcrock1_2345(9760, 1824), 3);
    add_background_object(create_jccoral2_2353(9760, 1840), 3);
    add_background_object(create_jccoral1_2352(9840, 1832), 3);
    add_background_object(create_jccoral1_2352(10040, 1648), 3);
    add_background_object(create_jccoral2_2353(9976, 1624), 3);
    add_background_object(create_jcflatground1_2375(10104, 1912), 3);
    add_background_object(create_jcdirt16_2376(9896, 1848), 3);
    add_background_object(create_jcdirt5_2377(9960, 1728), 3);
    add_background_object(create_jcdirt16_2376(9640, 1648), 3);
    add_background_object(create_jcdirt19_2378(9328, 1848), 3);
    add_background_object(create_jcdirt7_2371(9714, 1696), 3);
    add_background_object(create_jcdirt2_2379(9704, 1696), 3);
    add_background_object(create_jcdirt7_2371(9778, 1632), 3);
    add_background_object(create_jcdirt1_594(11288, -96), 3);
    add_background_object(create_jcdirt1_594(11288, 96), 3);
    add_background_object(create_jcdirt3_2380(11528, 224), 3);
    add_background_object(create_jcplant1_2349(12528, 464), 3);
    add_background_object(create_jcplant4_2355(13272, 512), 3);
    add_background_object(create_jcplant3_2354(13344, 488), 3);
    add_background_object(create_jcplant1_2349(12672, 832), 3);
    add_background_object(create_jcplant1_2349(12960, 840), 3);
    add_background_object(create_jcplant1_2349(13016, 856), 3);
    add_background_object(create_jcdirt17_2381(12424, 1184), 3);
    add_background_object(create_jcdirt8_2382(10128, 928), 3);
    add_background_object(create_jcdirt7_2371(9906, 992), 3);
    add_background_object(create_jcdirt3_2380(9952, 984), 3);
    add_background_object(create_jcdirt7_2371(9842, 992), 3);
    add_background_object(create_jcdirt7_2371(9714, 992), 3);
    add_background_object(create_jcdirt7_2371(9778, 992), 3);
    add_background_object(create_jcplanet3_2356(9984, 232), 3);
    add_background_object(create_jcplanet4_2351(10016, 264), 3);
    add_background_object(create_jcplant3_2354(9984, 272), 3);
    add_background_object(create_jcplant4_2355(10080, 256), 3);
    add_background_object(create_jcrock1_2345(1456, 888), 3);
    add_background_object(create_jcrock2_2346(1360, 936), 3);
    add_background_object(create_jcrock1_2345(1264, 960), 3);
    add_background_object(create_jcrock2_2346(1208, 1000), 3);
    add_background_object(create_jcrock1_2345(1320, 992), 3);
    add_background_object(create_jcrock2_2346(1232, 1040), 3);
    add_background_object(create_jcrock2_2346(1048, 960), 3);
    add_background_object(create_jcrock1_2345(1128, 1016), 3);
    add_background_object(create_jcplant1_2349(1536, 912), 3);
    add_background_object(create_jcdirt14_2383(1344, 1056), 3);
    add_background_object(create_jcdirt1_594(1536, 968), 3);
    add_background_object(create_jcdirt10_2384(1408, 968), 3);
    add_background_object(create_jcdirt1_594(1280, 1120), 3);
    add_background_object(create_jcdirt1_594(3584, 1312), 3);
    add_background_object(create_jcdirt7_2371(8578, 1568), 3);
    add_background_object(create_jcdirt7_2371(8642, 1568), 3);
    add_background_object(create_jcflatground7_2369(8552, 1552), 3);
    add_background_object(create_jcflatground5_2385(8576, 1552), 3);
    add_background_object(create_jcflatground6_2370(8704, 1552), 3);
    add_background_object(create_jcdirt1_594(8552, 1632), 3);
    add_background_object(create_jcbamboo2_2350(2128, 936), 3);
    add_background_object(create_jcbamboo2_2350(2320, 1048), 3);
    add_background_object(create_jcbamboo2_2350(2456, 1048), 3);
    add_background_object(create_jcdirt15_2386(384, 904), 3);
    add_background_object(create_jcdirt11_2387(256, 808), 3);
    add_background_object(create_jcdirt1_594(256, 968), 3);
    add_background_object(create_jcdirt1_594(256, 1160), 3);
    add_background_object(create_jcdirt14_2383(1600, 904), 3);
    add_background_object(create_jcdirt1_594(512, 968), 3);
    add_background_object(create_jcdirt10_2384(1664, 808), 3);
    add_background_object(create_jcdirt15_2386(2176, 1056), 3);
    add_background_object(create_jcdirt11_2387(2048, 960), 3);
    add_background_object(create_jcdirt1_594(2048, 1120), 3);
    add_background_object(create_jcdirt16_2376(2488, 1056), 3);
    add_background_object(create_jcrock2_2346(2576, 824), 3);
    add_background_object(create_jcflatground1_2375(6888, 1384), 3);
    add_background_object(create_jcdirt1_594(6760, 1440), 3);
    add_background_object(create_jcdirt12_2388(6896, 1400), 3);
    add_background_object(create_jcdirt1_594(7016, 1440), 3);
    add_background_object(create_jcflatground7_2369(6992, 1408), 3);
    add_background_object(create_jcflatground6_2370(6896, 1408), 3);
    add_background_object(create_jcdirt8_2382(9200, 1248), 3);
    add_background_object(create_jcdirt1_594(9328, 1056), 3);
    add_background_object(create_jcdirt7_2371(9202, 1120), 3);
    add_background_object(create_jcdirt7_2371(9266, 1120), 3);
    add_background_object(create_jcdirt7_2371(9200, 1184), 3);
    add_background_object(create_jcdirt7_2371(9264, 1184), 3);
    add_background_object(create_jcdirt13_2389(9272, 1112), 3);
    add_background_object(create_jcdirt7_2371(9458, 992), 3);
    add_background_object(create_jcdirt7_2371(9522, 992), 3);
    add_background_object(create_jcdirt13_2389(9456, 984), 3);
    add_background_object(create_jcdirt2_2379(9192, 1128), 3);
    add_background_object(create_jcplant1_2349(8048, 768), 3);
    add_background_object(create_jcplanet4_2351(7992, 640), 3);
    add_background_object(create_jcrock1_2345(8112, 768), 3);
    add_background_object(create_jcrock1_2345(7904, 640), 3);
    add_background_object(create_jcplant1_2349(7616, 592), 3);
    add_background_object(create_jcdirt15_2386(8128, 816), 3);
    add_background_object(create_jcdirt7_2371(8090, 864), 3);
    add_background_object(create_jcdirt7_2371(8154, 864), 3);
    add_background_object(create_jcdirt18_2373(8216, 864), 3);
    add_background_object(create_jcdirt11_2387(8024, 736), 3);
    add_background_object(create_jcdirt7_2371(8026, 864), 3);
    add_background_object(create_jcdirt5_2377(7800, 264), 3);
    add_background_object(create_jcdirt7_2371(9136, 1184), 3);
    add_background_object(create_jcdirt17_2381(9072, 1184), 3);
    add_background_object(create_jcflatground1_2375(7472, 1176), 3);
    add_background_object(create_jcflatground1_2375(4536, 1488), 3);
    add_background_object(create_jcflatground1_2375(5024, 1464), 3);
    add_background_object(create_jcflatground1_2375(5600, 1472), 3);
    add_background_object(create_jcflatground1_2375(8280, 1624), 3);
    add_background_object(create_jcdirt1_594(8040, 1632), 3);
    add_background_object(create_jcflatground1_2375(7288, 1592), 3);
    add_background_object(create_jcflatground1_2375(7432, 1624), 3);
    add_background_object(create_jcflatground1_2375(7768, 1592), 3);
    add_background_object(create_jcflatground1_2375(6896, 1408), 3);
    add_background_object(create_jcdirt7_2371(6146, 1824), 3);
    add_background_object(create_jcdirt7_2371(6146, 1888), 3);
    add_background_object(create_jcdirt7_2371(6210, 1888), 3);
    add_background_object(create_jcdirt1_594(6248, 1760), 3);
    add_background_object(create_jcdirt18_2373(6384, 1376), 3);
    add_background_object(create_jcdirt4_2374(6248, 1376), 3);
    add_background_object(create_jcdirt3_2380(6368, 1376), 3);
    add_background_object(create_jcdirt2_2379(6752, 1440), 3);
    add_background_object(create_jcdirt2_2379(6752, 1504), 3);
    add_background_object(create_jcdirt1_594(6248, 1568), 3);
    add_background_object(create_jcdirt1_594(6504, 1568), 3);
    add_background_object(create_jcdirt1_594(5376, 1312), 3);
    add_background_object(create_jcdirt3_2380(5624, 1376), 3);
    add_background_object(create_jcdirt3_2380(5624, 1440), 3);
    add_background_object(create_jcdirt1_594(5888, 1504), 3);
    add_background_object(create_jcplant1_2349(4888, 736), 3);
    add_background_object(create_jcplant1_2349(4808, 744), 3);
    add_background_object(create_jcplant1_2349(4288, 736), 3);
    add_background_object(create_jcplant1_2349(7104, 976), 3);
    add_background_object(create_jcplant1_2349(5616, 1120), 3);
    add_background_object(create_jcrock1_2345(6664, 656), 3);
    add_background_object(create_jcplant1_2349(6536, 512), 3);
    add_background_object(create_jcplanet4_2351(6528, 504), 3);
    add_background_object(create_jcplanet4_2351(6656, 472), 3);
    add_background_object(create_jcplanet3_2356(6624, 496), 3);
    add_background_object(create_jcplanet3_2356(6456, 480), 3);
    add_background_object(create_jcplanet4_2351(5832, 1088), 3);
    add_background_object(create_jcplanet4_2351(5752, 1112), 3);
    add_background_object(create_jcplanet3_2356(5720, 1088), 3);
    add_background_object(create_jcdirt5_2377(7224, 904), 3);
    add_background_object(create_jcdirt5_2377(7224, 712), 3);
    add_background_object(create_jcdirt7_2371(7098, 1032), 3);
    add_background_object(create_jcdirt8_2382(7096, 712), 3);
    add_background_object(create_jcdirt7_2371(7290, 680), 3);
    add_background_object(create_jcdirt7_2371(7226, 680), 3);
    add_background_object(create_jcdirt1_594(6840, 1096), 3);
    add_background_object(create_jcdirt14_2383(3784, 1056), 3);
    add_background_object(create_jcrock1_2345(6520, 1008), 3);
    add_background_object(create_jcdirt5_2377(6712, 1096), 3);
    add_background_object(create_jcdirt8_2382(6584, 1096), 3);
    add_background_object(create_jcplant1_2349(4224, 1080), 3);
    add_background_object(create_jcplant1_2349(4288, 1064), 3);
    add_background_object(create_jcplant1_2349(3376, 1064), 3);
    add_background_object(create_jcbamboo1_2347(3080, 392), 3);
    add_background_object(create_jcplant1_2349(2992, 864), 3);
    add_background_object(create_jcplant1_2349(3848, 960), 3);
    add_background_object(create_jcdirt8_2382(4760, 1168), 3);
    add_background_object(create_jcdirt9_2390(4888, 1168), 3);
    add_background_object(create_jcrock1_2345(3568, 1016), 3);
    add_background_object(create_jcplant1_2349(4032, 1024), 3);
    add_background_object(create_jcplant2_2391(4416, 968), 3);
    add_background_object(create_jcplant2_2391(4496, 952), 3);
    add_background_object(create_jcbamboo1_2347(3344, 472), 3);
    add_background_object(create_jcbamboo2_2350(3344, 1008), 3);
    add_background_object(create_jcrock1_2345(3264, 1016), 3);
    add_background_object(create_jcbamboo1_2347(2936, 392), 3);
    add_background_object(create_jcdirt1_594(3072, 928), 3);
    add_background_object(create_jcbamboo1_2347(3216, 392), 3);
    add_background_object(create_jcbamboo2_2348(3344, 328), 3);
    add_background_object(create_jcdirt1_594(3072, 1120), 3);
    add_background_object(create_jcrock1_2345(3136, 816), 3);
    add_background_object(create_jcrock2_2346(3048, 840), 3);
    add_background_object(create_jcdirt3_2380(3320, 928), 3);
    add_background_object(create_jcdirt1_594(3328, 1120), 3);
    add_background_object(create_jcbamboo2_2348(3456, 360), 3);
    add_background_object(create_jcdirt1_594(2816, 1120), 3);
    add_background_object(create_jcdirt1_594(2816, 928), 3);
    add_background_object(create_jcdirt1_594(3584, 1120), 3);
    add_background_object(create_jcdirt10_2384(3840, 960), 3);
    add_background_object(create_jcdirt11_2387(3968, 960), 3);
    add_background_object(create_jcbamboo2_2348(3080, 248), 3);
    add_background_object(create_jcbamboo2_2348(3216, 248), 3);
    add_background_object(create_jcbamboo2_2348(3344, 184), 3);
    add_background_object(create_jcbamboo2_2348(3456, 216), 3);
    add_background_object(create_jcbamboo2_2348(3080, 104), 3);
    add_background_object(create_jcbamboo2_2348(3216, 104), 3);
    add_background_object(create_jcbamboo2_2348(3344, 40), 3);
    add_background_object(create_jcbamboo2_2348(3456, 72), 3);
    add_background_object(create_jcbamboo2_2348(3080, -40), 3);
    add_background_object(create_jcbamboo2_2348(3216, -40), 3);
    add_background_object(create_jcbamboo2_2348(3344, -104), 3);
    add_background_object(create_jcbamboo2_2348(3456, -72), 3);
    add_background_object(create_jcgrass1_2392(2816, 912), 3);
    add_background_object(create_jcgrass1_2392(3200, 912), 3);
    add_background_object(create_jcgrass2_2393(-64, 656), 3);
    add_background_object(create_jcgrass6_2394(3304, 912), 3);
    add_background_object(create_jcgrass3_2395(2944, 904), 3);
    add_background_object(create_jcgrass4_2396(3072, 904), 3);
    add_background_object(create_jcgrass3_2395(3456, 1104), 3);
    add_background_object(create_jcgrass4_2396(3584, 1104), 3);
    add_background_object(create_jcgrass4_2396(3328, 1104), 3);
    add_background_object(create_jcdirt3_2380(3320, 992), 3);
    add_background_object(create_jcdirt3_2380(3320, 1056), 3);
    add_background_object(create_jcbamboo2_2348(2936, 248), 3);
    add_background_object(create_jcbamboo2_2348(2936, 104), 3);
    add_background_object(create_jcbamboo2_2348(2936, -40), 3);
    add_background_object(create_jcbamboo2_2348(3600, 344), 3);
    add_background_object(create_jcbamboo2_2348(3600, 200), 3);
    add_background_object(create_jcbamboo2_2348(3600, 56), 3);
    add_background_object(create_jcbamboo2_2348(3600, -88), 3);
    add_background_object(create_jcbamboo2_2348(3768, 392), 3);
    add_background_object(create_jcbamboo2_2348(3768, 248), 3);
    add_background_object(create_jcbamboo2_2348(3768, 104), 3);
    add_background_object(create_jcbamboo2_2348(3768, -40), 3);
    add_background_object(create_jcdirt1_594(3840, 1088), 3);
    add_background_object(create_jcdirt1_594(4096, 1120), 3);
    add_background_object(create_jcdirt15_2386(4104, 1056), 3);
    add_background_object(create_jcgrass3_2395(4224, 1104), 3);
    add_background_object(create_jcdirt5_2377(4400, 792), 3);
    add_background_object(create_jcdirt9_2390(4480, 1120), 3);
    add_background_object(create_jcdirt4_2374(4352, 1120), 3);
    add_background_object(create_jcdirt8_2382(4272, 792), 3);
    add_background_object(create_jcgrass4_2396(4400, 776), 3);
    add_background_object(create_jcgrass3_2395(4272, 776), 3);
    add_background_object(create_jcgrass5_2397(4256, 784), 3);
    add_background_object(create_jcdirt1_594(4528, 792), 3);
    add_background_object(create_jcgrass4_2396(4656, 776), 3);
    add_background_object(create_jcgrass3_2395(4528, 776), 3);
    add_background_object(create_jcdirt6_2398(4400, 968), 3);
    add_background_object(create_dvceilingoverlay_915(4400, 968), 3);
    add_background_object(create_jcgrass4_2396(4352, 1104), 3);
    add_background_object(create_jcgrass1_2392(4480, 1112), 3);
    add_background_object(create_jcgrass6_2394(4584, 1112), 3);
    add_background_object(create_jcdirt6_2398(4528, 968), 3);
    add_background_object(create_dvceilingoverlay_915(4528, 968), 3);
    add_background_object(create_jcdirt6_2398(4656, 968), 3);
    add_background_object(create_dvceilingoverlay_915(4656, 968), 3);
    add_background_object(create_jcgrass1_2392(2944, 1752), 3);
    add_background_object(create_jcflatground1_2375(3472, 1576), 3);
    add_background_object(create_jcflatground2_2399(3472, 1608), 3);
    add_background_object(create_jcflatground3_2400(3472, 1640), 3);
    add_background_object(create_jcflatground4_2401(3472, 1680), 3);
    add_background_object(create_jcgrass6_2394(3032, 1808), 3);
    add_background_object(create_jcgrass7_2402(2840, 1816), 3);
    add_background_object(create_jcdirt1_594(4784, 792), 3);
    add_background_object(create_jcdirt6_2398(4784, 968), 3);
    add_background_object(create_dvceilingoverlay_915(4784, 968), 3);
    add_background_object(create_jcdirt6_2398(4912, 968), 3);
    add_background_object(create_dvceilingoverlay_915(4912, 968), 3);
    add_background_object(create_jcgrass3_2395(4784, 776), 3);
    add_background_object(create_jcgrass5_2397(4728, 1168), 3);
    add_background_object(create_jcgrass4_2396(4888, 1160), 3);
    add_background_object(create_jcgrass6_2394(5016, 1168), 3);
    add_background_object(create_jcgrass3_2395(4760, 1160), 3);
    add_background_object(create_dvceilingoverlay_915(4344, 952), 3);
    add_background_object(create_jcbrokenslope_2372(5024, 632), 3);
    add_background_object(create_jcdirt4_2374(5040, 792), 3);
    add_background_object(create_jcdirt16_2376(5304, 1440), 3);
    add_background_object(create_jcdirt3_2380(5168, 792), 3);
    add_background_object(create_jcdirt3_2380(5168, 856), 3);
    add_background_object(create_jcdirt3_2380(5168, 920), 3);
    add_background_object(create_jcdirt6_2398(5040, 968), 3);
    add_background_object(create_dvceilingoverlay_915(5040, 968), 3);
    add_background_object(create_jcdirt8_2382(5248, 1184), 3);
    add_background_object(create_jcdirt9_2390(5888, 1184), 3);
    add_background_object(create_jcdirt5_2377(5632, 1184), 3);
    add_background_object(create_jcdirt4_2374(5760, 1184), 3);
    add_background_object(create_jcgrass3_2395(5248, 1160), 3);
    add_background_object(create_jcgrass4_2396(5632, 1160), 3);
    add_background_object(create_jcgrass3_2395(5760, 1160), 3);
    add_background_object(create_jcgrass4_2396(5888, 1160), 3);
    add_background_object(create_jcgrass6_2394(5992, 1168), 3);
    add_background_object(create_jcdirt5_2377(5376, 1184), 3);
    add_background_object(create_jcdirt4_2374(5504, 1184), 3);
    add_background_object(create_jcgrass4_2396(5376, 1160), 3);
    add_background_object(create_jcgrass3_2395(5504, 1160), 3);
    add_background_object(create_jcdirt1_594(4096, 1312), 3);
    add_background_object(create_jcdirt1_594(4096, 1504), 3);
    add_background_object(create_jcdirt1_594(3840, 1312), 3);
    add_background_object(create_jcdirt1_594(3840, 1504), 3);
    add_background_object(create_jcdirt1_594(4352, 1504), 3);
    add_background_object(create_jcdirt1_594(4608, 1504), 3);
    add_background_object(create_jcdirt1_594(4864, 1504), 3);
    add_background_object(create_jcdirt1_594(5120, 1504), 3);
    add_background_object(create_jcdirt1_594(5376, 1504), 3);
    add_background_object(create_jcgrass5_2397(5240, 1168), 3);
    add_background_object(create_jcbrokenslope_2372(5544, 664), 3);
    add_background_object(create_jcdirt6_2398(5560, 808), 3);
    add_background_object(create_dvceilingoverlay_915(5560, 808), 3);
    add_background_object(create_jcgrass5_2397(6304, 976), 3);
    add_background_object(create_jcgrass3_2395(6336, 968), 3);
    add_background_object(create_jcgrass5_2397(6424, 1104), 3);
    add_background_object(create_jcgrass3_2395(6456, 1096), 3);
    add_background_object(create_jcgrass3_2395(6464, 960), 3);
    add_background_object(create_jcgrass3_2395(6584, 1088), 3);
    add_background_object(create_jcgrass3_2395(6712, 1080), 3);
    add_background_object(create_jcgrass3_2395(6840, 1072), 3);
    add_background_object(create_jcgrass6_2394(6592, 960), 3);
    add_background_object(create_jcdirt1_594(6472, 568), 3);
    add_background_object(create_jcdirt6_2398(6472, 744), 3);
    add_background_object(create_dvceilingoverlay_915(6472, 744), 3);
    add_background_object(create_jcdirt12_2388(3984, 1224), 3);
    add_background_object(create_jcdirt13_2389(3808, 1232), 3);
    add_background_object(create_jcdirt12_2388(3888, 1240), 3);
    add_background_object(create_jcdirt12_2388(3760, 1088), 3);
    add_background_object(create_jcdirt13_2389(3992, 1048), 3);
    add_background_object(create_jcgrass7_2402(3712, 1032), 3);
    add_background_object(create_jcgrass8_2403(3840, 960), 3);
    add_background_object(create_jcgrass10_2404(3968, 960), 3);
    add_background_object(create_jcgrass9_2405(4096, 1032), 3);
    add_background_object(create_jcdirt12_2388(5376, 1312), 3);
    add_background_object(create_jcdirt12_2388(5480, 1336), 3);
    add_background_object(create_jcdirt2_2379(5368, 1440), 3);
    add_background_object(create_jcdirt2_2379(5368, 1376), 3);
    add_background_object(create_jcdirt9_2390(4352, 1312), 3);
    add_background_object(create_jcdirt13_2389(4248, 1368), 3);
    add_background_object(create_jcgrass1_2392(6968, 1072), 3);
    add_background_object(create_jcdirt4_2374(7096, 1096), 3);
    add_background_object(create_jcdirt9_2390(7224, 1096), 3);
    add_background_object(create_jcdirt8_2382(6968, 520), 3);
    add_background_object(create_jcdirt2_2379(7096, 1032), 3);
    add_background_object(create_jcgrass6_2394(6856, 744), 3);
    add_background_object(create_jcdirt3_2380(6720, 632), 3);
    add_background_object(create_jcdirt3_2380(6720, 568), 3);
    add_background_object(create_jcdirt3_2380(6720, 696), 3);
    add_background_object(create_jcgrass4_2396(6728, 736), 3);
    add_background_object(create_jcbrokenslope_2372(6968, 368), 3);
    add_background_object(create_jcdirt11_2387(7096, 520), 3);
    add_background_object(create_jcdirt7_2371(7098, 648), 3);
    add_background_object(create_jcdirt7_2371(7162, 648), 3);
    add_background_object(create_jcdirt15_2386(7224, 616), 3);
    add_background_object(create_jcdirt15_2386(7288, 680), 3);
    add_background_object(create_jcdirt12_2388(7072, 592), 3);
    add_background_object(create_jcdirt13_2389(7176, 680), 3);
    add_background_object(create_jcgrass10_2404(7080, 520), 3);
    add_background_object(create_jcgrass5_2397(7056, 520), 3);
    add_background_object(create_jcgrass9_2405(7208, 592), 3);
    add_background_object(create_jcdirt3_2380(7336, 696), 3);
    add_background_object(create_jcgrass6_2394(7336, 672), 3);
    add_background_object(create_jcdirt3_2380(7336, 760), 3);
    add_background_object(create_jcdirt3_2380(7336, 824), 3);
    add_background_object(create_jcdirt3_2380(7336, 888), 3);
    add_background_object(create_jcdirt3_2380(7336, 952), 3);
    add_background_object(create_jcdirt3_2380(7336, 1016), 3);
    add_background_object(create_jcdirt2_2379(6464, 568), 3);
    add_background_object(create_jcdirt2_2379(6464, 632), 3);
    add_background_object(create_jcdirt2_2379(6464, 696), 3);
    add_background_object(create_jcdirt7_2371(7162, 1032), 3);
    add_background_object(create_jcdirt13_2389(7104, 1032), 3);
    add_background_object(create_jcgrass5_2397(7096, 1024), 3);
    add_background_object(create_jcgrass2_2393(7128, 1024), 3);
    add_background_object(create_jcgrass6_2394(7192, 1024), 3);
    add_background_object(create_jcdirt2_2379(7224, 912), 3);
    add_background_object(create_jcdirt2_2379(7224, 976), 3);
    add_background_object(create_dvceilingoverlay_915(6600, 744), 3);
    add_background_object(create_jcdirt6_2398(6600, 744), 3);
    add_background_object(create_jcgrass6_2394(6712, 552), 3);
    add_background_object(create_jcgrass5_2397(6456, 560), 3);
    add_background_object(create_jcgrass3_2395(6480, 552), 3);
    add_background_object(create_jcgrass1_2392(6600, 552), 3);
    add_background_object(create_jcgrass4_2396(4912, 776), 3);
    add_background_object(create_jcdirt5_2377(7160, 72), 3);
    add_background_object(create_jcdirt8_2382(7032, 72), 3);
    add_background_object(create_jcdirt1_594(7032, -120), 3);
    add_background_object(create_dvceilingoverlay_915(7160, 248), 3);
    add_background_object(create_jcdirt6_2398(7160, 248), 3);
    add_background_object(create_dvceilingoverlay_915(7104, 232), 3);
    add_background_object(create_jcdirt1_594(7288, -120), 3);
    add_background_object(create_jcdirt1_594(7288, 72), 3);
    add_background_object(create_dvceilingoverlay_915(7288, 248), 3);
    add_background_object(create_jcdirt6_2398(7288, 248), 3);
    add_background_object(create_dvceilingoverlay_915(7416, 248), 3);
    add_background_object(create_jcdirt6_2398(7416, 248), 3);
    add_background_object(create_jcflatground6_2370(6768, 1536), 3);
    add_background_object(create_jcflatground5_2385(6640, 1536), 3);
    add_background_object(create_jcflatground5_2385(6768, 1408), 3);
    add_background_object(create_jcflatground7_2369(6744, 1408), 3);
    add_background_object(create_jcflatground5_2385(6288, 1336), 3);
    add_background_object(create_jcflatground7_2369(6264, 1336), 3);
    add_background_object(create_jcflatground6_2370(6272, 1368), 3);
    add_background_object(create_jcflatground5_2385(6888, 1384), 3);
    add_background_object(create_jcflatground5_2385(7016, 1408), 3);
    add_background_object(create_jcdirt6_2398(6712, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(6712, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(6840, 1272), 3);
    add_background_object(create_jcdirt6_2398(6840, 1272), 3);
    add_background_object(create_jcdirt6_2398(6968, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(6968, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(7096, 1272), 3);
    add_background_object(create_jcdirt6_2398(7096, 1272), 3);
    add_background_object(create_jcdirt4_2374(6120, 1440), 3);
    add_background_object(create_jcdirt7_2371(6146, 1632), 3);
    add_background_object(create_jcflatground7_2369(6184, 1368), 3);
    add_background_object(create_jcflatground7_2369(6112, 1408), 3);
    add_background_object(create_jcflatground6_2370(6104, 1472), 3);
    add_background_object(create_jcflatground7_2369(5952, 1472), 3);
    add_background_object(create_jcflatground5_2385(5976, 1472), 3);
    add_background_object(create_jcdirt12_2388(6064, 1496), 3);
    add_background_object(create_jcdirt12_2388(6192, 1400), 3);
    add_background_object(create_jcdirt1_594(5632, 1504), 3);
    add_background_object(create_jcflatground6_2370(5784, 1472), 3);
    add_background_object(create_jcflatground7_2369(5632, 1472), 3);
    add_background_object(create_jcflatground5_2385(5656, 1472), 3);
    add_background_object(create_jcflatground6_2370(5944, 1496), 3);
    add_background_object(create_jcflatground7_2369(5792, 1496), 3);
    add_background_object(create_jcflatground5_2385(5816, 1496), 3);
    add_background_object(create_jcdirt6_2398(5632, 1360), 3);
    add_background_object(create_dvceilingoverlay_915(5632, 1360), 3);
    add_background_object(create_jcdirt6_2398(5760, 1360), 3);
    add_background_object(create_dvceilingoverlay_915(5760, 1360), 3);
    add_background_object(create_jcflatground6_2370(4496, 1464), 3);
    add_background_object(create_jcflatground7_2369(4344, 1464), 3);
    add_background_object(create_jcflatground5_2385(4368, 1464), 3);
    add_background_object(create_jcflatground6_2370(4824, 1464), 3);
    add_background_object(create_jcflatground7_2369(4672, 1464), 3);
    add_background_object(create_jcflatground5_2385(4696, 1464), 3);
    add_background_object(create_jcflatground5_2385(4536, 1488), 3);
    add_background_object(create_jcflatground7_2369(4512, 1488), 3);
    add_background_object(create_jcflatground6_2370(4664, 1488), 3);
    add_background_object(create_jcflatground6_2370(5152, 1464), 3);
    add_background_object(create_jcflatground7_2369(5000, 1464), 3);
    add_background_object(create_jcflatground5_2385(5024, 1464), 3);
    add_background_object(create_jcflatground5_2385(4864, 1488), 3);
    add_background_object(create_jcflatground7_2369(4840, 1488), 3);
    add_background_object(create_jcflatground6_2370(4992, 1488), 3);
    add_background_object(create_jcflatground5_2385(5192, 1496), 3);
    add_background_object(create_jcflatground7_2369(5168, 1496), 3);
    add_background_object(create_jcflatground6_2370(5320, 1496), 3);
    add_background_object(create_jcdirt12_2388(6168, 1584), 3);
    add_background_object(create_jcdirt1_594(5888, 1696), 3);
    add_background_object(create_jcdirt1_594(4096, 1696), 3);
    add_background_object(create_jcdirt1_594(3840, 1696), 3);
    add_background_object(create_jcdirt1_594(4352, 1696), 3);
    add_background_object(create_jcdirt1_594(4608, 1696), 3);
    add_background_object(create_jcdirt1_594(4864, 1696), 3);
    add_background_object(create_jcdirt1_594(5120, 1696), 3);
    add_background_object(create_jcdirt1_594(5376, 1696), 3);
    add_background_object(create_jcdirt1_594(5632, 1696), 3);
    add_background_object(create_jcdirt12_2388(6128, 1656), 3);
    add_background_object(create_jcdirt1_594(6760, 1632), 3);
    add_background_object(create_jcdirt13_2389(6680, 1584), 3);
    add_background_object(create_jcdirt3_2380(6368, 1440), 3);
    add_background_object(create_jcdirt17_2381(6080, 1888), 3);
    add_background_object(create_jcdirt3_2380(6368, 1504), 3);
    add_background_object(create_jcflatground5_2385(6512, 1536), 3);
    add_background_object(create_jcflatground7_2369(6488, 1536), 3);
    add_background_object(create_jcflatground8_2406(6416, 1336), 3);
    add_background_object(create_jcflatground6_2370(6480, 1336), 3);
    add_background_object(create_jcflatground7_2369(6376, 1560), 3);
    add_background_object(create_jcflatground8_2406(6400, 1560), 3);
    add_background_object(create_jcflatground6_2370(6464, 1560), 3);
    add_background_object(create_jcflatground8_2406(6136, 1408), 3);
    add_background_object(create_jcflatground8_2406(6208, 1368), 3);
    add_background_object(create_jcflatground6_2370(6200, 1408), 3);
    add_background_object(create_jcdirt1_594(7016, 1632), 3);
    add_background_object(create_jcdirt1_594(7272, 1632), 3);
    add_background_object(create_jcdirt3_2380(7264, 1504), 3);
    add_background_object(create_jcdirt3_2380(7264, 1568), 3);
    add_background_object(create_jcdirt3_2380(7264, 1440), 3);
    add_background_object(create_jcflatground5_2385(7144, 1408), 3);
    add_background_object(create_jcflatground6_2370(7264, 1408), 3);
    add_background_object(create_jcdirt1_594(6504, 1760), 3);
    add_background_object(create_jcdirt12_2388(6176, 1728), 3);
    add_background_object(create_jcdirt12_2388(6104, 1744), 3);
    add_background_object(create_jcdirt12_2388(6160, 1808), 3);
    add_background_object(create_jcflatground7_2369(7264, 1592), 3);
    add_background_object(create_jcflatground5_2385(7288, 1592), 3);
    add_background_object(create_jcflatground6_2370(7416, 1592), 3);
    add_background_object(create_jcdirt1_594(7528, 1632), 3);
    add_background_object(create_jcdirt1_594(7784, 1632), 3);
    add_background_object(create_jcflatground7_2369(7400, 1624), 3);
    add_background_object(create_jcflatground5_2385(7424, 1624), 3);
    add_background_object(create_jcflatground7_2369(7672, 1592), 3);
    add_background_object(create_jcflatground5_2385(7696, 1592), 3);
    add_background_object(create_jcflatground6_2370(7952, 1592), 3);
    add_background_object(create_jcflatground5_2385(7824, 1592), 3);
    add_background_object(create_jcflatground6_2370(7680, 1624), 3);
    add_background_object(create_jcflatground5_2385(7552, 1624), 3);
    add_background_object(create_jcflatground7_2369(7944, 1616), 3);
    add_background_object(create_jcdirt1_594(8296, 1632), 3);
    add_background_object(create_jcflatground7_2369(8112, 1592), 3);
    add_background_object(create_jcflatground5_2385(8136, 1592), 3);
    add_background_object(create_jcflatground6_2370(8264, 1592), 3);
    add_background_object(create_jcflatground6_2370(8096, 1616), 3);
    add_background_object(create_jcflatground5_2385(7968, 1616), 3);
    add_background_object(create_jcflatground7_2369(8400, 1592), 3);
    add_background_object(create_jcflatground5_2385(8424, 1592), 3);
    add_background_object(create_jcflatground6_2370(8552, 1592), 3);
    add_background_object(create_jcflatground7_2369(8256, 1624), 3);
    add_background_object(create_jcflatground5_2385(8280, 1624), 3);
    add_background_object(create_jcflatground6_2370(8408, 1624), 3);
    add_background_object(create_jcflatground7_2369(7448, 1176), 3);
    add_background_object(create_jcflatground5_2385(7472, 1176), 3);
    add_background_object(create_jcflatground6_2370(7600, 1176), 3);
    add_background_object(create_jcflatground7_2369(8728, 1184), 3);
    add_background_object(create_jcflatground5_2385(8752, 1184), 3);
    add_background_object(create_jcflatground6_2370(8880, 1184), 3);
    add_background_object(create_jcgrass5_2397(9040, 1168), 3);
    add_background_object(create_jcgrass3_2395(9072, 1160), 3);
    add_background_object(create_jcdirt1_594(7544, -120), 3);
    add_background_object(create_jcdirt1_594(7544, 72), 3);
    add_background_object(create_dvceilingoverlay_915(7544, 248), 3);
    add_background_object(create_jcdirt6_2398(7544, 248), 3);
    add_background_object(create_jcdirt8_2382(7552, 584), 3);
    add_background_object(create_jcdirt18_2373(7744, 712), 3);
    add_background_object(create_jcdirt7_2371(7682, 712), 3);
    add_background_object(create_jcdirt7_2371(7682, 648), 3);
    add_background_object(create_jcdirt7_2371(7746, 648), 3);
    add_background_object(create_jcdirt13_2389(7648, 648), 3);
    add_background_object(create_jcgrass5_2397(7552, 576), 3);
    add_background_object(create_jcgrass2_2393(7584, 576), 3);
    add_background_object(create_jcdirt3_2380(7664, 584), 3);
    add_background_object(create_jcgrass6_2394(7648, 576), 3);
    add_background_object(create_jcgrass6_2394(7776, 640), 3);
    add_background_object(create_jcgrass2_2393(7712, 640), 3);
    add_background_object(create_jcgrass5_2397(7680, 640), 3);
    add_background_object(create_jcdirt1_594(7800, 72), 3);
    add_background_object(create_dvceilingoverlay_915(7800, 440), 3);
    add_background_object(create_jcdirt6_2398(7800, 440), 3);
    add_background_object(create_jcdirt8_2382(7672, 264), 3);
    add_background_object(create_jcdirt1_594(7800, -120), 3);
    add_background_object(create_jcgrass9_2405(8112, 784), 3);
    add_background_object(create_jcgrass6_2394(8304, 864), 3);
    add_background_object(create_jcdirt8_2382(7896, 736), 3);
    add_background_object(create_jcgrass10_2404(7984, 712), 3);
    add_background_object(create_jcgrass5_2397(7888, 712), 3);
    add_background_object(create_jcgrass2_2393(7920, 712), 3);
    add_background_object(create_jcgrass2_2393(8240, 864), 3);
    add_background_object(create_jcdirt12_2388(8000, 800), 3);
    add_background_object(create_jcplanet4_2351(7744, 560), 3);
    add_background_object(create_jcplanet3_2356(7544, 496), 3);
    add_background_object(create_jcgrass3_2395(9200, 1096), 3);
    add_background_object(create_jcgrass5_2397(9168, 1104), 3);
    add_background_object(create_jcdirt2_2379(9320, 1064), 3);
    add_background_object(create_jcgrass3_2395(9328, 1032), 3);
    add_background_object(create_jcgrass5_2397(9296, 1040), 3);
    add_background_object(create_jcdirt2_2379(9448, 1000), 3);
    add_background_object(create_jcgrass5_2397(9424, 976), 3);
    add_background_object(create_jcdirt1_594(9584, 1056), 3);
    add_background_object(create_jcdirt1_594(9456, 1248), 3);
    add_background_object(create_dvceilingoverlay_915(9136, 1232), 3);
    add_background_object(create_jcdirt6_2398(9136, 1232), 3);
    add_background_object(create_jcdirt7_2371(9586, 992), 3);
    add_background_object(create_jcdirt7_2371(9650, 992), 3);
    add_background_object(create_jcgrass1_2392(9584, 976), 3);
    add_background_object(create_jcdirt5_2377(9328, 1248), 3);
    add_background_object(create_jcdirt9_2390(9840, 1056), 3);
    add_background_object(create_dvceilingoverlay_915(7648, 752), 3);
    add_background_object(create_jcdirt6_2398(7648, 752), 3);
    add_background_object(create_dvceilingoverlay_915(8024, 912), 3);
    add_background_object(create_jcdirt6_2398(8024, 912), 3);
    add_background_object(create_jcflatground7_2369(6864, 1384), 3);
    add_background_object(create_jcflatground6_2370(7016, 1384), 3);
    add_background_object(create_jcdirt1_594(2560, 1120), 3);
    add_background_object(create_jcdirt1_594(2560, 928), 3);
    add_background_object(create_jcgrass4_2396(2688, 904), 3);
    add_background_object(create_jcdirt2_2379(2552, 928), 3);
    add_background_object(create_jcgrass5_2397(2552, 912), 3);
    add_background_object(create_jcgrass3_2395(2560, 904), 3);
    add_background_object(create_jcdirt2_2379(2552, 992), 3);
    add_background_object(create_jcdirt1_594(2304, 1120), 3);
    add_background_object(create_jcdirt2_2379(2552, 1056), 3);
    add_background_object(create_jcgrass4_2396(2304, 1112), 3);
    add_background_object(create_jcgrass3_2395(2432, 1112), 3);
    add_background_object(create_jcgrass6_2394(2560, 1112), 3);
    add_background_object(create_jcgrass8_2403(1664, 808), 3);
    add_background_object(create_jcdirt13_2389(2072, 1048), 3);
    add_background_object(create_jcgrass9_2405(2176, 1032), 3);
    add_background_object(create_jcdirt15_2386(1920, 904), 3);
    add_background_object(create_jcdirt11_2387(1792, 808), 3);
    add_background_object(create_jcdirt1_594(1792, 968), 3);
    add_background_object(create_jcdirt13_2389(1816, 896), 3);
    add_background_object(create_jcgrass10_2404(2048, 960), 3);
    add_background_object(create_jcgrass9_2405(1920, 880), 3);
    add_background_object(create_jcgrass10_2404(1792, 808), 3);
    add_background_object(create_jcdirt12_2388(1976, 1008), 3);
    add_background_object(create_jcdirt1_594(1792, 1160), 3);
    add_background_object(create_jcdirt13_2389(1640, 904), 3);
    add_background_object(create_jcdirt13_2389(1736, 904), 3);
    add_background_object(create_jcdirt1_594(512, 1160), 3);
    add_background_object(create_jcdirt1_594(0, 816), 3);
    add_background_object(create_jcdirt1_594(0, 1008), 3);
    add_background_object(create_jcdirt13_2389(272, 904), 3);
    add_background_object(create_jcgrass10_2404(256, 808), 3);
    add_background_object(create_jcgrass9_2405(384, 880), 3);
    add_background_object(create_jcdirt15_2386(128, 752), 3);
    add_background_object(create_jcdirt11_2387(0, 656), 3);
    add_background_object(create_jcdirt13_2389(184, 856), 3);
    add_background_object(create_jcgrass9_2405(128, 728), 3);
    add_background_object(create_jcgrass10_2404(0, 656), 3);
    add_background_object(create_jcdirt13_2389(-64, 760), 3);
    add_background_object(create_jcdirt13_2389(176, 984), 3);
    add_background_object(create_jcdirt1_594(0, 1160), 3);
    add_background_object(create_jcbrokenslope_2372(-16, 600), 3);
    add_background_object(create_jcdirt13_2389(16, 744), 3);
    add_background_object(create_jcbamboo1_2347(2456, 400), 3);
    add_background_object(create_jcbamboo2_2348(2456, 256), 3);
    add_background_object(create_jcbamboo2_2348(2456, 112), 3);
    add_background_object(create_jcbamboo2_2348(2456, -32), 3);
    add_background_object(create_jcbamboo1_2347(2320, 400), 3);
    add_background_object(create_jcbamboo2_2348(2320, 256), 3);
    add_background_object(create_jcbamboo2_2348(2320, 112), 3);
    add_background_object(create_jcbamboo2_2348(2320, -32), 3);
    add_background_object(create_jcbamboo1_2347(2128, 400), 3);
    add_background_object(create_jcbamboo2_2348(2128, 256), 3);
    add_background_object(create_jcbamboo2_2348(2128, 112), 3);
    add_background_object(create_jcbamboo2_2348(2128, -32), 3);
    add_background_object(create_jcbamboo2_2348(1664, 256), 3);
    add_background_object(create_jcbamboo2_2348(1664, 112), 3);
    add_background_object(create_jcbamboo2_2348(1664, -32), 3);
    add_background_object(create_jcbamboo2_2350(2456, 936), 3);
    add_background_object(create_jcbamboo2_2350(2320, 936), 3);
    add_background_object(create_jcgrass5_2397(9712, 856), 3);
    add_background_object(create_jcgrass3_2395(9744, 848), 3);
    add_background_object(create_jcgrass4_2396(9872, 848), 3);
    add_background_object(create_jcdirt1_594(8808, 1632), 3);
    add_background_object(create_jcdirt12_2388(8576, 1600), 3);
    add_background_object(create_jcflatground7_2369(8696, 1592), 3);
    add_background_object(create_jcflatground5_2385(8720, 1592), 3);
    add_background_object(create_jcdirt5_2377(8936, 1440), 3);
    add_background_object(create_jcdirt7_2371(8874, 1568), 3);
    add_background_object(create_jcdirt7_2371(8874, 1504), 3);
    add_background_object(create_jcdirt2_2379(8864, 1504), 3);
    add_background_object(create_jcdirt2_2379(8864, 1568), 3);
    add_background_object(create_jcflatground6_2370(8848, 1592), 3);
    add_background_object(create_jcdirt13_2389(8888, 1504), 3);
    add_background_object(create_jcflatground8_2406(8880, 1480), 3);
    add_background_object(create_jcflatground7_2369(8856, 1480), 3);
    add_background_object(create_jcflatground7_2369(8928, 1424), 3);
    add_background_object(create_jcflatground6_2370(9080, 1424), 3);
    add_background_object(create_jcgrass3_2395(10000, 848), 3);
    add_background_object(create_jcdirt1_594(10256, 872), 3);
    add_background_object(create_jcgrass4_2396(10384, 848), 3);
    add_background_object(create_dvceilingoverlay_915(10256, 1112), 3);
    add_background_object(create_jcdirt6_2398(10256, 1112), 3);
    add_background_object(create_jcdirt4_2374(7928, 264), 3);
    add_background_object(create_dvceilingoverlay_915(7928, 440), 3);
    add_background_object(create_jcdirt6_2398(7928, 440), 3);
    add_background_object(create_jcdirt1_594(2048, 1312), 3);
    add_background_object(create_jcdirt1_594(2560, 1312), 3);
    add_background_object(create_jcdirt1_594(2304, 1312), 3);
    add_background_object(create_jcdirt1_594(2816, 1312), 3);
    add_background_object(create_jcdirt1_594(3072, 1312), 3);
    add_background_object(create_jcdirt1_594(3328, 1312), 3);
    add_background_object(create_jcgrass5_2397(8184, 944), 3);
    add_background_object(create_jcgrass6_2394(8216, 944), 3);
    add_background_object(create_jcdirt14_2383(576, 904), 3);
    add_background_object(create_jcdirt10_2384(640, 808), 3);
    add_background_object(create_jcdirt13_2389(616, 904), 3);
    add_background_object(create_jcgrass8_2403(640, 808), 3);
    add_background_object(create_jcgrass7_2402(512, 880), 3);
    add_background_object(create_jcbamboo2_2350(960, 936), 3);
    add_background_object(create_jcrock1_2345(880, 864), 3);
    add_background_object(create_jcdirt15_2386(1152, 1056), 3);
    add_background_object(create_jcdirt11_2387(1024, 960), 3);
    add_background_object(create_jcdirt1_594(1024, 1120), 3);
    add_background_object(create_jcdirt13_2389(1048, 1048), 3);
    add_background_object(create_jcgrass9_2405(1152, 1032), 3);
    add_background_object(create_jcdirt15_2386(896, 904), 3);
    add_background_object(create_jcdirt11_2387(768, 808), 3);
    add_background_object(create_jcdirt1_594(768, 968), 3);
    add_background_object(create_jcdirt13_2389(792, 896), 3);
    add_background_object(create_jcgrass10_2404(1024, 960), 3);
    add_background_object(create_jcgrass9_2405(896, 880), 3);
    add_background_object(create_jcgrass10_2404(768, 808), 3);
    add_background_object(create_jcdirt12_2388(952, 1008), 3);
    add_background_object(create_jcdirt1_594(768, 1160), 3);
    add_background_object(create_jcdirt1_594(1024, 1312), 3);
    add_background_object(create_jcdirt13_2389(712, 904), 3);
    add_background_object(create_jcgrass8_2403(1408, 960), 3);
    add_background_object(create_jcgrass7_2402(1280, 1032), 3);
    add_background_object(create_jcgrass7_2402(1536, 880), 3);
    add_background_object(create_jcdirt1_594(1280, 1312), 3);
    add_background_object(create_jcdirt1_594(1536, 1160), 3);
    add_background_object(create_jcdirt13_2389(1472, 1016), 3);
    add_background_object(create_jcdirt13_2389(1392, 1056), 3);
    add_background_object(create_jcdirt8_2382(9896, 512), 3);
    add_background_object(create_jcdirt9_2390(10024, 512), 3);
    add_background_object(create_jcdirt1_594(9896, 320), 3);
    add_background_object(create_jcdirt3_2380(10136, 320), 3);
    add_background_object(create_jcdirt3_2380(10136, 384), 3);
    add_background_object(create_jcdirt3_2380(10136, 448), 3);
    add_background_object(create_jcdirt2_2379(9896, 320), 3);
    add_background_object(create_jcdirt2_2379(9896, 384), 3);
    add_background_object(create_jcdirt2_2379(9896, 448), 3);
    add_background_object(create_jcgrass5_2397(9896, 312), 3);
    add_background_object(create_jcgrass6_2394(10120, 312), 3);
    add_background_object(create_jcgrass2_2393(10056, 312), 3);
    add_background_object(create_jcgrass1_2392(9928, 312), 3);
    add_background_object(create_jcplant3_2354(9936, 248), 3);
    add_background_object(create_jcdirt8_2382(9464, 176), 3);
    add_background_object(create_jcdirt5_2377(9592, 176), 3);
    add_background_object(create_jcdirt3_2380(9712, 304), 3);
    add_background_object(create_jcdirt3_2380(9712, 176), 3);
    add_background_object(create_jcdirt3_2380(9712, 240), 3);
    add_background_object(create_jcgrass5_2397(9696, 344), 3);
    add_background_object(create_jcgrass6_2394(9728, 344), 3);
    add_background_object(create_dvceilingoverlay_915(9592, 352), 3);
    add_background_object(create_jcdirt6_2398(9592, 352), 3);
    add_background_object(create_jcdirt1_594(9464, -16), 3);
    add_background_object(create_jcdirt3_2380(9712, 112), 3);
    add_background_object(create_jcdirt3_2380(9712, -16), 3);
    add_background_object(create_jcdirt3_2380(9712, 48), 3);
    add_background_object(create_jcdirt2_2379(9464, -16), 3);
    add_background_object(create_jcdirt2_2379(9464, 48), 3);
    add_background_object(create_jcdirt2_2379(9464, 112), 3);
    add_background_object(create_jcgrass6_2394(9968, 976), 3);
    add_background_object(create_jcdirt13_2389(9800, 984), 3);
    add_background_object(create_jcgrass1_2392(9840, 976), 3);
    add_background_object(create_jcgrass1_2392(9712, 976), 3);
    add_background_object(create_jcgrass1_2392(9456, 976), 3);
    add_background_object(create_jcdirt8_2382(11032, 96), 3);
    add_background_object(create_jcdirt1_594(11032, -96), 3);
    add_background_object(create_jcdirt2_2379(11032, 32), 3);
    add_background_object(create_jcdirt2_2379(11032, -32), 3);
    add_background_object(create_jcdirt8_2382(11160, 288), 3);
    add_background_object(create_jcdirt5_2377(11160, 96), 3);
    add_background_object(create_jcdirt9_2390(11288, 288), 3);
    add_background_object(create_dvceilingoverlay_915(11416, 272), 3);
    add_background_object(create_jcdirt6_2398(11416, 272), 3);
    add_background_object(create_jcdirt6_2398(10384, 1112), 3);
    add_background_object(create_dvceilingoverlay_915(10384, 1112), 3);
    add_background_object(create_jcdirt12_2388(10216, 904), 3);
    add_background_object(create_jcgrass3_2395(10256, 848), 3);
    add_background_object(create_jcdirt1_594(13216, 1144), 3);
    add_background_object(create_jcdirt1_594(12960, 1160), 3);
    add_background_object(create_jcdirt1_594(12704, 1176), 3);
    add_background_object(create_jcdirt8_2382(12448, 1176), 3);
    add_background_object(create_jcdirt5_2377(12576, 1176), 3);
    add_background_object(create_jcgrass3_2395(12704, 1160), 3);
    add_background_object(create_jcgrass3_2395(12448, 1168), 3);
    add_background_object(create_jcgrass5_2397(12416, 1176), 3);
    add_background_object(create_jcdirt13_2389(12920, 1160), 3);
    add_background_object(create_jcdirt13_2389(13176, 1152), 3);
    add_background_object(create_jcgrass3_2395(12832, 1152), 3);
    add_background_object(create_jcgrass3_2395(12960, 1144), 3);
    add_background_object(create_jcgrass3_2395(13088, 1136), 3);
    add_background_object(create_jcgrass3_2395(13216, 1128), 3);
    add_background_object(create_jcdirt1_594(12576, 1368), 3);
    add_background_object(create_jcdirt1_594(12832, 1368), 3);
    add_background_object(create_jcdirt1_594(13088, 1368), 3);
    add_background_object(create_jcdirt12_2388(12944, 1288), 3);
    add_background_object(create_jcdirt13_2389(13040, 1320), 3);
    add_background_object(create_jcdirt12_2388(13144, 1272), 3);
    add_background_object(create_jcdirt12_2388(13248, 1312), 3);
    add_background_object(create_jcdirt13_2389(13352, 1272), 3);
    add_background_object(create_jcdirt5_2377(13344, 952), 3);
    add_background_object(create_jcdirt2_2379(13344, 952), 3);
    add_background_object(create_jcdirt2_2379(13344, 1016), 3);
    add_background_object(create_jcdirt2_2379(13344, 1080), 3);
    add_background_object(create_jcdirt5_2377(13344, 760), 3);
    add_background_object(create_jcdirt2_2379(13344, 760), 3);
    add_background_object(create_jcdirt2_2379(13344, 824), 3);
    add_background_object(create_jcdirt2_2379(13344, 888), 3);
    add_background_object(create_jcdirt5_2377(13344, 568), 3);
    add_background_object(create_jcdirt8_2382(13216, 568), 3);
    add_background_object(create_jcgrass6_2394(13168, 904), 3);
    add_background_object(create_jcgrass4_2396(13040, 896), 3);
    add_background_object(create_jcgrass4_2396(12912, 888), 3);
    add_background_object(create_jcgrass4_2396(12784, 880), 3);
    add_background_object(create_jcdirt5_2377(12528, 704), 3);
    add_background_object(create_jcdirt3_2380(12640, 832), 3);
    add_background_object(create_jcgrass5_2397(12624, 872), 3);
    add_background_object(create_jcgrass4_2396(12656, 872), 3);
    add_background_object(create_jcdirt1_594(12576, 1560), 3);
    add_background_object(create_jcdirt1_594(11040, 1560), 3);
    add_background_object(create_jcflatground5_2385(11152, 1544), 3);
    add_background_object(create_jcflatground6_2370(11280, 1544), 3);
    add_background_object(create_jcflatground6_2370(11112, 1520), 3);
    add_background_object(create_jcflatground7_2369(11128, 1544), 3);
    add_background_object(create_jcdirt2_2379(12528, 704), 3);
    add_background_object(create_jcdirt2_2379(12528, 768), 3);
    add_background_object(create_jcdirt2_2379(12528, 832), 3);
    add_background_object(create_dvceilingoverlay_915(12528, 880), 3);
    add_background_object(create_jcdirt6_2398(12528, 880), 3);
    add_background_object(create_jcdirt3_2380(12640, 704), 3);
    add_background_object(create_jcdirt3_2380(12640, 768), 3);
    add_background_object(create_jcdirt5_2377(12528, 512), 3);
    add_background_object(create_jcdirt3_2380(12640, 640), 3);
    add_background_object(create_jcdirt2_2379(12528, 512), 3);
    add_background_object(create_jcdirt2_2379(12528, 576), 3);
    add_background_object(create_jcdirt2_2379(12528, 640), 3);
    add_background_object(create_jcdirt3_2380(12640, 512), 3);
    add_background_object(create_jcdirt3_2380(12640, 576), 3);
    add_background_object(create_jcgrass5_2397(13208, 560), 3);
    add_background_object(create_jcgrass3_2395(13240, 552), 3);
    add_background_object(create_jcdirt14_2383(13408, 504), 3);
    add_background_object(create_jcgrass7_2402(13368, 472), 3);
    add_background_object(create_jcgrass8_2403(13496, 400), 3);
    add_background_object(create_jcplant4_2355(13208, 496), 3);
    add_background_object(create_jcgrass2_2393(12560, 504), 3);
    add_background_object(create_jcgrass5_2397(12528, 504), 3);
    add_background_object(create_jcgrass6_2394(12624, 504), 3);
    add_background_object(create_jcplanet3_2356(12536, 424), 3);
    add_background_object(create_jcdirt3_2380(11528, 160), 3);
    add_background_object(create_jcdirt3_2380(11528, 96), 3);
    add_background_object(create_jcdirt3_2380(11528, 32), 3);
    add_background_object(create_jcdirt3_2380(11528, -32), 3);
    add_background_object(create_seedspawnerstalk_2407(1776, 888), 3);
    add_background_object(create_jcdirt12_2388(1728, 944), 3);
    add_background_object(create_dvceilingoverlay_915(13296, 728), 3);
    add_background_object(create_dvceilingoverlay_915(9960, 664), 3);
    add_background_object(create_dvceilingoverlay_915(9968, 856), 3);
    add_background_object(create_dvceilingoverlay_915(9840, 856), 3);
    add_background_object(create_dvceilingoverlay_915(9712, 856), 3);
    add_background_object(create_dvceilingoverlay_915(9544, 344), 3);
    add_background_object(create_dvceilingoverlay_915(7968, 896), 3);
    add_background_object(create_dvceilingoverlay_915(7744, 424), 3);
    add_background_object(create_dvceilingoverlay_915(7152, 1256), 3);
    add_background_object(create_dvceilingoverlay_915(6728, 744), 3);
    add_background_object(create_dvceilingoverlay_915(7168, 872), 3);
    add_background_object(create_dvceilingoverlay_915(13072, 904), 3);
    add_background_object(create_dvceilingoverlay_915(12944, 896), 3);
    add_background_object(create_dvceilingoverlay_915(12816, 888), 3);
    add_background_object(create_dvceilingoverlay_915(12688, 880), 3);
    add_background_object(create_dvceilingoverlay_915(12576, 880), 3);
    add_background_object(create_dvceilingoverlay_915(10200, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(6656, 1256), 3);
    add_background_object(create_jcdirt1_594(8552, 1824), 3);
    add_background_object(create_jcdirt1_594(8040, 1824), 3);
    add_background_object(create_jcdirt1_594(6760, 1824), 3);
    add_background_object(create_jcdirt1_594(7016, 1824), 3);
    add_background_object(create_jcdirt1_594(7272, 1824), 3);
    add_background_object(create_jcdirt1_594(7528, 1824), 3);
    add_background_object(create_jcdirt1_594(7784, 1824), 3);
    add_background_object(create_jcdirt1_594(8296, 1824), 3);
    add_background_object(create_jcdirt1_594(8808, 1824), 3);
    add_background_object(create_jcdirt1_594(9064, 1824), 3);
    add_background_object(create_jcdirt1_594(8808, 2016), 3);
    add_background_object(create_jcdirt1_594(9064, 2016), 3);
    add_background_object(create_jcdirt1_594(9320, 2112), 3);
    add_background_object(create_jcdirt8_2382(8680, 2016), 3);
    add_background_object(create_jcdirt1_594(9576, 1920), 3);
    add_background_object(create_jcdirt1_594(9832, 1920), 3);
    add_background_object(create_jcdirt1_594(9576, 2112), 3);
    add_background_object(create_jcdirt1_594(9832, 2112), 3);
    add_background_object(create_jcdirt1_594(10088, 1920), 3);
    add_background_object(create_jcdirt1_594(10088, 2112), 3);
    add_background_object(create_jcdirt1_594(9064, 1632), 3);
    add_background_object(create_jcdirt3_2380(9056, 1568), 3);
    add_background_object(create_jcdirt3_2380(9056, 1504), 3);
    add_background_object(create_jcdirt3_2380(9056, 1440), 3);
    add_background_object(create_jcflatground5_2385(8952, 1424), 3);
    add_background_object(create_jcdirt3_2380(9312, 1760), 3);
    add_background_object(create_jcdirt3_2380(9312, 1696), 3);
    add_background_object(create_jcdirt3_2380(9312, 1632), 3);
    add_background_object(create_jcflatground7_2369(9160, 1592), 3);
    add_background_object(create_jcflatground6_2370(9568, 1592), 3);
    add_background_object(create_jcflatground5_2385(9184, 1592), 3);
    add_background_object(create_jcflatground8_2406(9080, 1616), 3);
    add_background_object(create_jcflatground6_2370(9144, 1616), 3);
    add_background_object(create_jcflatground7_2369(9056, 1616), 3);
    add_background_object(create_jcdirt4_2374(9712, 1248), 3);
    add_background_object(create_jcdirt4_2374(9712, 1440), 3);
    add_background_object(create_jcdirt18_2373(9776, 1696), 3);
    add_background_object(create_jcdirt7_2371(9714, 1632), 3);
    add_background_object(create_jcdirt6_2398(9328, 1424), 3);
    add_background_object(create_dvceilingoverlay_915(9328, 1424), 3);
    add_background_object(create_jcdirt6_2398(9456, 1424), 3);
    add_background_object(create_dvceilingoverlay_915(9456, 1424), 3);
    add_background_object(create_jcflatground5_2385(9312, 1592), 3);
    add_background_object(create_jcflatground5_2385(9440, 1592), 3);
    add_background_object(create_jcdirt2_2379(9704, 1632), 3);
    add_background_object(create_jcdirt2_2379(9704, 1568), 3);
    add_background_object(create_jcdirt2_2379(9704, 1504), 3);
    add_background_object(create_jcdirt2_2379(9704, 1440), 3);
    add_background_object(create_dvceilingoverlay_915(9584, 1424), 3);
    add_background_object(create_jcdirt6_2398(9584, 1424), 3);
    add_background_object(create_dvceilingoverlay_915(9272, 1408), 3);
    add_background_object(create_jcflatground7_2369(9416, 1712), 3);
    add_background_object(create_jcflatground6_2370(9696, 1712), 3);
    add_background_object(create_jcflatground5_2385(9440, 1712), 3);
    add_background_object(create_jcflatground5_2385(9568, 1712), 3);
    add_background_object(create_jcdirt6_2398(9416, 1736), 3);
    add_background_object(create_dvceilingoverlay_915(9416, 1736), 3);
    add_background_object(create_jcdirt6_2398(9544, 1736), 3);
    add_background_object(create_dvceilingoverlay_915(9544, 1736), 3);
    add_background_object(create_dvceilingoverlay_915(9672, 1736), 3);
    add_background_object(create_jcdirt6_2398(9672, 1736), 3);
    add_background_object(create_jcdirt6_2398(9328, 1624), 3);
    add_background_object(create_dvceilingoverlay_915(9328, 1624), 3);
    add_background_object(create_jcdirt6_2398(9456, 1624), 3);
    add_background_object(create_dvceilingoverlay_915(9456, 1624), 3);
    add_background_object(create_jcdirt3_2380(9312, 1888), 3);
    add_background_object(create_jcdirt3_2380(9312, 1824), 3);
    add_background_object(create_jcdirt1_594(9320, 1920), 3);
    add_background_object(create_jcdirt12_2388(9240, 1912), 3);
    add_background_object(create_jcdirt13_2389(9256, 2032), 3);
    add_background_object(create_jcflatground5_2385(9336, 1912), 3);
    add_background_object(create_jcflatground5_2385(9464, 1912), 3);
    add_background_object(create_jcflatground7_2369(9312, 1912), 3);
    add_background_object(create_jcflatground5_2385(9592, 1912), 3);
    add_background_object(create_jcflatground5_2385(9720, 1912), 3);
    add_background_object(create_jcflatground5_2385(10104, 1912), 3);
    add_background_object(create_jcflatground5_2385(10272, 1880), 3);
    add_background_object(create_jcdirt3_2380(10080, 1728), 3);
    add_background_object(create_jcdirt3_2380(10080, 1792), 3);
    add_background_object(create_jcdirt3_2380(10080, 1856), 3);
    add_background_object(create_jcflatground7_2369(10080, 1912), 3);
    add_background_object(create_jcdirt2_2379(9960, 1728), 3);
    add_background_object(create_jcdirt2_2379(9960, 1792), 3);
    add_background_object(create_jcdirt2_2379(9960, 1856), 3);
    add_background_object(create_jcflatground5_2385(9848, 1912), 3);
    add_background_object(create_dvceilingoverlay_915(9768, 1216), 3);
    add_background_object(create_jcdirt3_2380(9824, 1568), 3);
    add_background_object(create_jcdirt3_2380(9824, 1632), 3);
    add_background_object(create_jcdirt3_2380(9824, 1440), 3);
    add_background_object(create_jcdirt3_2380(9824, 1504), 3);
    add_background_object(create_jcdirt3_2380(9824, 1312), 3);
    add_background_object(create_jcdirt3_2380(9824, 1376), 3);
    add_background_object(create_jcdirt3_2380(9824, 1248), 3);
    add_background_object(create_jcflatground5_2385(9984, 1704), 3);
    add_background_object(create_jcflatground7_2369(9960, 1704), 3);
    add_background_object(create_jcflatground6_2370(10112, 1704), 3);
    add_background_object(create_jcflatground7_2369(10248, 1880), 3);
    add_background_object(create_jcflatground6_2370(10232, 1912), 3);
    add_background_object(create_jccoral1_2352(9952, 1544), 3);
    add_background_object(create_jccoral2_2353(10064, 1568), 3);
    add_background_object(create_jccoral1_2352(10040, 1488), 3);
    add_background_object(create_jccoral2_2353(10064, 1408), 3);
    add_background_object(create_jccoral2_2353(9864, 1752), 3);
    add_background_object(create_jcflatground8_2406(10400, 1880), 3);
    add_background_object(create_jccoral1_2352(10384, 1720), 3);
    add_background_object(create_jccoral1_2352(10272, 1752), 3);
    add_background_object(create_jccoral2_2353(10296, 1672), 3);
    add_background_object(create_jccoral1_2352(10272, 1592), 3);
    add_background_object(create_jcdirt1_594(10344, 2048), 3);
    add_background_object(create_jcflatground7_2369(10328, 1848), 3);
    add_background_object(create_jcflatground5_2385(10352, 1848), 3);
    add_background_object(create_jcdirt1_594(10600, 2048), 3);
    add_background_object(create_jcdirt1_594(10600, 1856), 3);
    add_background_object(create_jcflatground7_2369(10544, 1824), 3);
    add_background_object(create_jcflatground5_2385(10568, 1824), 3);
    add_background_object(create_jcflatground6_2370(10696, 1824), 3);
    add_background_object(create_jcflatground7_2369(10704, 1848), 3);
    add_background_object(create_jcdirt1_594(10856, 2048), 3);
    add_background_object(create_jcdirt1_594(10856, 1856), 3);
    add_background_object(create_jcflatground5_2385(10728, 1848), 3);
    add_background_object(create_jcdirt1_594(11112, 1752), 3);
    add_background_object(create_jcdirt1_594(11112, 1944), 3);
    add_background_object(create_jcflatground8_2406(11048, 1520), 3);
    add_background_object(create_jcdirt2_2379(11112, 1752), 3);
    add_background_object(create_jcdirt2_2379(11112, 1816), 3);
    add_background_object(create_dvceilingoverlay_915(11032, 1736), 3);
    add_background_object(create_jcdirt6_2398(11032, 1736), 3);
    add_background_object(create_jcflatground5_2385(10856, 1848), 3);
    add_background_object(create_jcflatground6_2370(11112, 1848), 3);
    add_background_object(create_jcflatground5_2385(10984, 1848), 3);
    add_background_object(create_jcdirt12_2388(11064, 1904), 3);
    add_background_object(create_jcdirt1_594(12576, 1752), 3);
    add_background_object(create_jcdirt1_594(12832, 1752), 3);
    add_background_object(create_jcdirt1_594(12832, 1560), 3);
    add_background_object(create_jcdirt9_2390(13088, 1752), 3);
    add_background_object(create_jcdirt9_2390(13216, 1560), 3);
    add_background_object(create_jcdirt9_2390(11112, 2136), 3);
    add_background_object(create_jcdirt17_2381(6696, 1952), 3);
    add_background_object(create_jcdirt8_2382(10912, 1560), 3);
    add_background_object(create_jcflatground7_2369(10896, 1520), 3);
    add_background_object(create_jcflatground5_2385(10920, 1520), 3);
    add_background_object(create_jcdirt13_2389(10992, 1592), 3);
    add_background_object(create_dvceilingoverlay_915(10984, 1720), 3);
    add_background_object(create_dvceilingoverlay_915(6424, 1104), 3);
    add_background_object(create_dvceilingoverlay_915(6552, 1104), 3);
    add_background_object(create_dvceilingoverlay_915(6336, 976), 3);
    add_background_object(create_dvceilingoverlay_915(6464, 968), 3);
    add_background_object(create_jccoral1_2352(11328, 1440), 3);
    add_background_object(create_jccoral2_2353(11472, 1480), 3);
    add_background_object(create_jccoral1_2352(11448, 1400), 3);
    add_background_object(create_jcrock2_2346(11464, 1464), 3);
    add_background_object(create_jcflatground2_2399(11392, 1520), 3);
    add_background_object(create_jcdirt17_2381(11272, 1184), 3);
    add_background_object(create_jcdirt8_2382(11296, 1176), 3);
    add_background_object(create_jcdirt5_2377(11424, 1176), 3);
    add_background_object(create_jcgrass4_2396(11424, 1160), 3);
    add_background_object(create_jcgrass3_2395(11296, 1160), 3);
    add_background_object(create_jcgrass5_2397(11264, 1168), 3);
    add_background_object(create_jcdirt1_594(11552, 1368), 3);
    add_background_object(create_jcdirt1_594(11552, 1560), 3);
    add_background_object(create_jcdirt1_594(11296, 1560), 3);
    add_background_object(create_jcflatground8_2406(11488, 1544), 3);
    add_background_object(create_jcdirt2_2379(11552, 1368), 3);
    add_background_object(create_jcdirt6_2398(11424, 1352), 3);
    add_background_object(create_dvceilingoverlay_915(11424, 1352), 3);
    add_background_object(create_jcdirt2_2379(11552, 1432), 3);
    add_background_object(create_jcdirt2_2379(11552, 1496), 3);
    add_background_object(create_jcflatground6_2370(11552, 1544), 3);
    add_background_object(create_jcflatground5_2385(11320, 1520), 3);
    add_background_object(create_jcflatground6_2370(11448, 1520), 3);
    add_background_object(create_jcflatground7_2369(11296, 1520), 3);
    add_background_object(create_jcflatground7_2369(11464, 1544), 3);
    add_background_object(create_jcdirt1_594(11368, 1752), 3);
    add_background_object(create_jcdirt1_594(11624, 1752), 3);
    add_background_object(create_jcdirt9_2390(11368, 1944), 3);
    add_background_object(create_jcdirt4_2374(11552, 1176), 3);
    add_background_object(create_jcgrass4_2396(11552, 1168), 3);
    add_background_object(create_jcdirt4_2374(13088, 1560), 3);
    add_background_object(create_jcdirt1_594(11808, 1560), 3);
    add_background_object(create_jcdirt1_594(12064, 1560), 3);
    add_background_object(create_jcdirt1_594(12320, 1560), 3);
    add_background_object(create_jcdirt1_594(11808, 1368), 3);
    add_background_object(create_jcdirt1_594(12064, 1368), 3);
    add_background_object(create_jcdirt1_594(12320, 1368), 3);
    add_background_object(create_jcgrass6_2394(11680, 1176), 3);
    add_background_object(create_jcdirt3_2380(11664, 1304), 3);
    add_background_object(create_jcdirt3_2380(11664, 1240), 3);
    add_background_object(create_jcflatground5_2385(12256, 1352), 3);
    add_background_object(create_jcflatground6_2370(12216, 1328), 3);
    add_background_object(create_jcflatground7_2369(12232, 1352), 3);
    add_background_object(create_jcflatground8_2406(12152, 1328), 3);
    add_background_object(create_jcflatground7_2369(12000, 1328), 3);
    add_background_object(create_jcflatground5_2385(12024, 1328), 3);
    add_background_object(create_jcflatground5_2385(12424, 1328), 3);
    add_background_object(create_jcflatground6_2370(12552, 1328), 3);
    add_background_object(create_jcflatground7_2369(12400, 1328), 3);
    add_background_object(create_jcflatground6_2370(12384, 1352), 3);
    add_background_object(create_jcflatground5_2385(11856, 1352), 3);
    add_background_object(create_jcflatground6_2370(11984, 1352), 3);
    add_background_object(create_jcflatground5_2385(11696, 1328), 3);
    add_background_object(create_jcflatground7_2369(11672, 1328), 3);
    add_background_object(create_jcflatground6_2370(11824, 1328), 3);
    add_background_object(create_jcflatground7_2369(11832, 1352), 3);
    add_background_object(create_jcdirt9_2390(8056, 264), 3);
    add_background_object(create_jcdirt9_2390(8184, 72), 3);
    add_background_object(create_jcdirt9_2390(8312, -120), 3);
    add_background_object(create_jcdirt1_594(8056, -120), 3);
    add_background_object(create_jcdirt4_2374(8056, 72), 3);
    add_background_object(create_jcdirt2_2379(10128, 872), 3);
    add_background_object(create_jcgrass4_2396(10128, 848), 3);
    add_background_object(create_jcdirt7_2371(10576, 1064), 3);
    add_background_object(create_jcdirt7_2371(10512, 1064), 3);
    add_background_object(create_jcdirt3_2380(10636, 1064), 3);
    add_background_object(create_dvceilingoverlay_915(10524, 1112), 3);
    add_background_object(create_jcdirt6_2398(10524, 1112), 3);
    add_background_object(create_jcdirt6_2398(10448, 1112), 3);
    add_background_object(create_dvceilingoverlay_915(10448, 1112), 3);
    add_background_object(create_jcdirt13_2389(10232, 992), 3);
    add_background_object(create_jcdirt7_2371(10496, 584), 3);
    add_background_object(create_jcdirt17_2381(10496, 648), 3);
    add_background_object(create_jcdirt18_2373(10560, 648), 3);
    add_background_object(create_jcdirt7_2371(10560, 584), 3);
    add_background_object(create_jcdirt7_2371(10496, 520), 3);
    add_background_object(create_jcdirt7_2371(10560, 520), 3);
    add_background_object(create_jcdirt7_2371(10496, 456), 3);
    add_background_object(create_jcdirt7_2371(10560, 456), 3);
    add_background_object(create_jcdirt7_2371(10496, 392), 3);
    add_background_object(create_jcdirt7_2371(10560, 392), 3);
    add_background_object(create_jcdirt2_2379(10496, 584), 3);
    add_background_object(create_jcdirt2_2379(10496, 392), 3);
    add_background_object(create_jcdirt3_2380(10608, 392), 3);
    add_background_object(create_jcdirt3_2380(10608, 584), 3);
    add_background_object(create_jcgrass2_2393(10528, 376), 3);
    add_background_object(create_jcgrass5_2397(10496, 376), 3);
    add_background_object(create_jcgrass6_2394(10592, 376), 3);
    add_background_object(create_jcdirt13_2389(10496, 456), 3);
    add_background_object(create_jcdirt3_2380(10608, 520), 3);
    add_background_object(create_jcdirt3_2380(10608, 456), 3);
    add_background_object(create_jcdirt2_2379(10496, 456), 3);
    add_background_object(create_jcdirt2_2379(10496, 520), 3);
    add_background_object(create_jcplant4_2355(10536, 312), 3);
    add_background_object(create_jcgrass5_2397(11904, 1176), 3);
    add_background_object(create_jcgrass6_2394(11936, 1176), 3);
    add_background_object(create_jcgrass5_2397(12160, 1176), 3);
    add_background_object(create_jcgrass6_2394(12192, 1176), 3);
    add_background_object(create_jcgrass1_2392(12576, 1168), 3);
    add_background_object(create_jcgrasstop1_2408(2816, 904), 3);
    add_background_object(create_jcgrasstop1_2408(3200, 904), 3);
    add_background_object(create_jcgrasstop1_2408(4480, 1104), 3);
    add_background_object(create_jcgrasstop1_2408(9928, 304), 3);
    add_background_object(create_jcgrasstop1_2408(12576, 1160), 3);
    add_background_object(create_jcflatground8_2406(10480, 1848), 3);
    add_background_object(create_jcflatground6_2370(10544, 1848), 3);
    add_object(create_yellowspringup_434(6736, 728), 3);
    add_object(create_jcwaterstream7_2362(6616, 1056), 3);
    add_object(create_playerstartingpoint_358(-27, 213), 3);
    add_object(create_objectcrystal_279(3213, 882), 3);
    add_object(create_objectcrystal_279(3141, 866), 3);
    add_object(create_objectcrystal_279(3173, 890), 3);
    add_object(create_objectcrystal_279(3717, 866), 3);
    add_object(create_objectcrystal_279(3677, 874), 3);
    add_object(create_objectcrystal_279(3637, 890), 3);
    add_object(create_objectcrystal_279(3925, 826), 3);
    add_object(create_objectcrystal_279(3965, 810), 3);
    add_object(create_objectcrystal_279(3885, 842), 3);
    add_object(create_objectpetal_302(4561, 529), 3);
    add_object(create_objectpetal_302(4513, 537), 3);
    add_object(create_objectpetal_302(4609, 537), 3);
    add_object(create_objectpetal_302(4465, 553), 3);
    add_object(create_objectpetal_302(4657, 553), 3);
    add_object(create_objectcrystal_279(3245, 890), 3);
    add_object(create_objectcrystal_279(3189, 858), 3);
    add_object(create_jcwaterstream4_2409(2664, 1816), 3);
    add_object(create_jcwaterstream3_2410(4760, 1160), 3);
    add_object(create_jcwaterstream6_2411(4720, 1168), 3);
    add_object(create_jcwaterstream5_2412(5016, 1168), 3);
    add_object(create_jcwaterstream2_2413(4888, 1160), 3);
    add_object(create_objectwhispmaker_751(3024, 824), 3);
    add_object(create_objectwhispmaker_751(3640, 1048), 3);
    add_object(create_objectwhispmaker_751(3976, 880), 3);
    add_object(create_objectwhispmaker_751(4456, 704), 3);
    add_object(create_jcslidingplatform_2414(5016, 584), 3);
    add_object(create_jcslidingplatform_2414(5536, 616), 3);
    add_object(create_jcwaterstream8_2361(6296, 1136), 3);
    add_object(create_jcwaterstream8_2361(6296, 1008), 3);
    add_object(create_jcwaterstream8_2361(6296, 1072), 3);
    add_object(create_jcwaterstream3_2410(6336, 968), 3);
    add_object(create_jcwaterstream6_2411(6296, 976), 3);
    add_object(create_objectcodec_354(5594, 589), 3);
    add_object(create_jcwaterstream8_2361(6416, 1136), 3);
    add_object(create_jcwaterstream3_2410(6456, 1096), 3);
    add_object(create_jcwaterstream6_2411(6416, 1104), 3);
    add_object(create_jcwaterstream3_2410(6464, 960), 3);
    add_object(create_jcwaterstream3_2410(6584, 1088), 3);
    add_object(create_jcwaterstream3_2410(6712, 1080), 3);
    add_object(create_jcwaterstream3_2410(6840, 1072), 3);
    add_object(create_jcwaterstream5_2412(6592, 960), 3);
    add_object(create_jcwaterstream7_2362(6616, 992), 3);
    add_object(create_objectcrystal_279(6461, 1154), 3);
    add_object(create_objectcrystal_279(6485, 1178), 3);
    add_object(create_objectcrystal_279(6509, 1154), 3);
    add_object(create_objectcrystal_279(6533, 1178), 3);
    add_object(create_objectcrystal_279(6557, 1154), 3);
    add_object(create_objectcrystal_279(6581, 1178), 3);
    add_object(create_jcslidingplatformlandpoint_2415(5392, 1112), 3);
    add_object(create_jcslidingplatformlandpoint_2415(5792, 1112), 3);
    add_object(create_objectcrystal_279(5269, 554), 3);
    add_object(create_objectcrystal_279(5309, 546), 3);
    add_object(create_objectcrystal_279(5349, 538), 3);
    add_object(create_objectcrystal_279(5389, 530), 3);
    add_object(create_objectcrystal_279(5437, 530), 3);
    add_object(create_objectcrystal_279(5565, 1090), 3);
    add_object(create_objectcrystal_279(5597, 1090), 3);
    add_object(create_objectcrystal_279(5629, 1090), 3);
    add_object(create_objectcrystal_279(5661, 1090), 3);
    add_object(create_objectcrystal_279(6333, 1130), 3);
    add_object(create_objectcrystal_279(6357, 1154), 3);
    add_object(create_objectcrystal_279(6381, 1130), 3);
    add_object(create_objectcrystal_279(6405, 1154), 3);
    add_object(create_objectcrystal_279(6485, 930), 3);
    add_object(create_objectcrystal_279(6509, 914), 3);
    add_object(create_objectcrystal_279(6533, 890), 3);
    add_object(create_objectcrystal_279(6557, 882), 3);
    add_object(create_objectcrystal_279(6581, 890), 3);
    add_object(create_jcwaterstream1_2416(6968, 1072), 3);
    add_object(create_jcslidingplatform_2414(6960, 320), 3);
    add_object(create_jcslidingplatformlandpoint_2415(7128, 464), 3);
    add_object(create_jcwaterstream2_2413(6728, 736), 3);
    add_object(create_jcwaterstream5_2412(6856, 744), 3);
    add_object(create_objectcrystal_279(3117, 890), 3);
    add_object(create_objectcrystal_279(3277, 898), 3);
    add_object(create_objectcrystal_279(3213, 834), 3);
    add_object(create_objectcrystal_279(3237, 850), 3);
    add_object(create_redspringupleft_439(7192, 992), 3);
    add_object(create_enemybullfrag_2417(7151, 960), 3);
    add_object(create_yellowspringup_434(4992, 768), 3);
    add_object(create_objectcrystal_279(6741, 450), 3);
    add_object(create_objectcrystal_279(6773, 434), 3);
    add_object(create_objectcrystal_279(6805, 418), 3);
    add_object(create_objectpetal_302(5881, 1473), 3);
    add_object(create_objectpetal_302(6033, 1449), 3);
    add_object(create_objectpetal_302(6161, 1385), 3);
    add_object(create_objectpetal_302(6457, 1537), 3);
    add_object(create_objectpetal_302(6409, 1497), 3);
    add_object(create_objectcodec_354(5722, 1429), 3);
    add_object(create_enemybuoybuoy_2418(5064, 1328), 3);
    add_object(create_enemybullfrag_2417(6951, 1320), 3);
    add_object(create_monitorcrystals_324(6584, 520), 3);
    add_object(create_enemybuoybuoy_2418(4920, 1416), 3);
    add_object(create_enemybuoybuoy_2418(4616, 1360), 3);
    add_object(create_enemybuoybuoy_2418(6016, 1368), 3);
    add_object(create_enemybuoybuoy_2418(7360, 1336), 3);
    add_object(create_enemybuoybuoy_2418(6584, 1464), 3);
    add_object(create_enemybuoybuoy_2418(7672, 1312), 3);
    add_object(create_enemybuoybuoy_2418(7840, 1456), 3);
    add_object(create_enemybuoybuoy_2418(7376, 1512), 3);
    add_object(create_enemybuoybuoy_2418(7616, 1560), 3);
    add_object(create_enemybuoybuoy_2418(8096, 1328), 3);
    add_object(create_enemybuoybuoy_2418(8024, 1544), 3);
    add_object(create_enemybuoybuoy_2418(8360, 1408), 3);
    add_object(create_enemybuoybuoy_2418(8232, 1224), 3);
    add_object(create_enemybuoybuoy_2418(8472, 1512), 3);
    add_object(create_monitorkeystone_562(7280, 1560), 3);
    add_object(create_objectcrystal_279(7469, 1546), 3);
    add_object(create_objectcrystal_279(7517, 1522), 3);
    add_object(create_objectcrystal_279(7541, 1570), 3);
    add_object(create_objectcrystal_279(7573, 1602), 3);
    add_object(create_objectcrystal_279(7469, 1490), 3);
    add_object(create_objectcrystal_279(7421, 1570), 3);
    add_object(create_objectcrystal_279(7605, 1482), 3);
    add_object(create_objectcrystal_279(7653, 1450), 3);
    add_object(create_objectcrystal_279(7693, 1514), 3);
    add_object(create_objectcrystal_279(7749, 1570), 3);
    add_object(create_objectcrystal_279(7861, 1546), 3);
    add_object(create_objectcrystal_279(7893, 1514), 3);
    add_object(create_objectcrystal_279(7949, 1538), 3);
    add_object(create_objectcrystal_279(7917, 1562), 3);
    add_object(create_monitorearthshield_326(8368, 1592), 3);
    add_object(create_monitorearthshield_326(7816, 1560), 3);
    add_object(create_monitorearthshield_326(7480, 1592), 3);
    add_object(create_monitorkeystone_562(5640, 1440), 3);
    add_object(create_objectcrystal_279(7749, 1386), 3);
    add_object(create_objectcrystal_279(7797, 1330), 3);
    add_object(create_objectcrystal_279(7845, 1394), 3);
    add_object(create_objectcrystal_279(7909, 1322), 3);
    add_object(create_objectcrystal_279(7949, 1298), 3);
    add_object(create_objectcrystal_279(7997, 1378), 3);
    add_object(create_objectcrystal_279(8037, 1442), 3);
    add_object(create_objectcrystal_279(8093, 1498), 3);
    add_object(create_objectcrystal_279(8117, 1410), 3);
    add_object(create_objectcrystal_279(8093, 1594), 3);
    add_object(create_objectcrystal_279(8117, 1570), 3);
    add_object(create_objectcrystal_279(8149, 1570), 3);
    add_object(create_objectcrystal_279(8181, 1570), 3);
    add_object(create_objectcrystal_279(8213, 1570), 3);
    add_object(create_objectcrystal_279(8245, 1570), 3);
    add_object(create_objectcrystal_279(8277, 1570), 3);
    add_object(create_objectcrystal_279(8301, 1594), 3);
    add_object(create_objectcrystal_279(8285, 1522), 3);
    add_object(create_objectcrystal_279(8333, 1490), 3);
    add_object(create_objectcrystal_279(8381, 1522), 3);
    add_object(create_objectcrystal_279(8253, 1402), 3);
    add_object(create_objectcrystal_279(8205, 1362), 3);
    add_object(create_objectcrystal_279(8437, 1458), 3);
    add_object(create_objectcrystal_279(8477, 1418), 3);
    add_object(create_objectcrystal_279(8525, 1458), 3);
    add_object(create_objectcrystal_279(8437, 1354), 3);
    add_object(create_objectcrystal_279(7469, 1362), 3);
    add_object(create_objectcrystal_279(7517, 1322), 3);
    add_object(create_objectcrystal_279(7549, 1354), 3);
    add_object(create_objectcrystal_279(7397, 1434), 3);
    add_object(create_objectwhispmaker_751(6608, 472), 3);
    add_object(create_objectwhispmaker_751(5808, 1064), 3);
    add_object(create_monitorearthshield_326(4520, 1456), 3);
    add_object(create_monitorearthshield_326(5104, 1432), 3);
    add_object(create_objectcrystal_279(5213, 1458), 3);
    add_object(create_objectcrystal_279(5269, 1394), 3);
    add_object(create_objectcrystal_279(5341, 1434), 3);
    add_object(create_objectcrystal_279(5301, 1474), 3);
    add_object(create_objectcrystal_279(5253, 1434), 3);
    add_object(create_objectcrystal_279(5253, 1338), 3);
    add_object(create_objectcrystal_279(5221, 1298), 3);
    add_object(create_objectcrystal_279(5037, 1418), 3);
    add_object(create_objectcrystal_279(4989, 1258), 3);
    add_object(create_objectcrystal_279(4981, 1298), 3);
    add_object(create_objectcrystal_279(4965, 1338), 3);
    add_object(create_objectcrystal_279(4805, 1330), 3);
    add_object(create_objectcrystal_279(4789, 1290), 3);
    add_object(create_objectcrystal_279(4773, 1250), 3);
    add_object(create_objectcrystal_279(4781, 1402), 3);
    add_object(create_objectcrystal_279(4717, 1426), 3);
    add_object(create_objectcrystal_279(4637, 1458), 3);
    add_object(create_objectcrystal_279(4445, 1442), 3);
    add_object(create_objectcrystal_279(4525, 1410), 3);
    add_object(create_objectcrystal_279(4485, 1386), 3);
    add_object(create_objectcrystal_279(4509, 1346), 3);
    add_object(create_objectcrystal_279(4541, 1322), 3);
    add_object(create_objectcrystal_279(4597, 1458), 3);
    add_object(create_objectcrystal_279(4733, 1354), 3);
    add_object(create_objectcrystal_279(4541, 1370), 3);
    add_object(create_objectcrystal_279(4565, 1426), 3);
    add_object(create_objectcrystal_279(4485, 1434), 3);
    add_object(create_objectcrystal_279(4821, 1434), 3);
    add_object(create_objectcrystal_279(4997, 1378), 3);
    add_object(create_objectcrystal_279(5005, 1442), 3);
    add_object(create_objectcrystal_279(5077, 1394), 3);
    add_object(create_objectcrystal_279(5133, 1402), 3);
    add_object(create_objectcrystal_279(5197, 1394), 3);
    add_object(create_objectcrystal_279(5165, 1362), 3);
    add_object(create_enemybuoybuoy_2418(8688, 1408), 3);
    add_object(create_enemybuoybuoy_2418(8648, 1224), 3);
    add_object(create_objectcrystal_279(8301, 1314), 3);
    add_object(create_objectcrystal_279(8373, 1274), 3);
    add_object(create_enemybuoybuoy_2418(7872, 1224), 3);
    add_object(create_objectcrystal_279(8557, 1530), 3);
    add_object(create_objectcrystal_279(8597, 1474), 3);
    add_object(create_objectcrystal_279(8637, 1506), 3);
    add_object(create_objectcrystal_279(8621, 1290), 3);
    add_object(create_objectcrystal_279(8661, 1322), 3);
    add_object(create_objectcrystal_279(8597, 1386), 3);
    add_object(create_objectcrystal_279(8757, 1154), 3);
    add_object(create_objectcrystal_279(8797, 1154), 3);
    add_object(create_objectcrystal_279(8837, 1154), 3);
    add_object(create_objectcrystal_279(8877, 1154), 3);
    add_object(create_enemybuoybuoy_2418(8968, 1224), 3);
    add_object(create_monitorrings_407(7520, 1144), 3);
    add_object(create_jcwaterstream3_2410(9072, 1160), 3);
    add_object(create_jcwaterstream6_2411(9032, 1168), 3);
    add_object(create_objectwhispmaker_751(7696, 528), 3);
    add_object(create_objectwhispmaker_751(8120, 712), 3);
    add_object(create_jcwaterstream6_2411(9160, 1104), 3);
    add_object(create_jcwaterstream3_2410(9200, 1096), 3);
    add_object(create_jcwaterstream6_2411(9288, 1040), 3);
    add_object(create_jcwaterstream3_2410(9328, 1032), 3);
    add_object(create_jcwaterstream6_2411(9416, 976), 3);
    add_object(create_enemybullfrag_2417(9487, 912), 3);
    add_object(create_jcwaterstream1_2416(9584, 976), 3);
    add_object(create_enemybullfragmask_2419(9492, 848), 3);
    add_object(create_enemybullfragmask_2419(7148, 960), 3);
    add_object(create_enemybullfragmask_2419(6956, 1320), 3);
    add_object(create_objectcrystal_279(2693, 618), 3);
    add_object(create_objectcrystal_279(2717, 594), 3);
    add_object(create_objectcrystal_279(2741, 618), 3);
    add_object(create_objectcrystal_279(2765, 594), 3);
    add_object(create_objectcrystal_279(2789, 618), 3);
    add_object(create_objectcrystal_279(2813, 594), 3);
    add_object(create_objectcrystal_279(2837, 618), 3);
    add_object(create_objectwhispmaker_751(2376, 1016), 3);
    add_object(create_monitorearthshield_326(8832, 1560), 3);
    add_object(create_objectcrystal_279(8757, 1482), 3);
    add_object(create_objectcrystal_279(8805, 1442), 3);
    add_object(create_objectcrystal_279(8789, 1514), 3);
    add_object(create_enemylimiter_350(2557, 898), 3);
    add_object(create_enemylimiter_350(3357, 898), 3);
    add_object(create_enemymeteorrollerflame_2420(3064, 880), 3);
    add_object(create_enemymeteorroller_2421(2823, 892), 3);
    add_object(create_enemymeteorroller_2421(3071, 884), 3);
    add_object(create_enemymeteorrollerflame_2420(2816, 888), 3);
    add_object(create_enemymeteorrollerflame_2420(5632, 1136), 3);
    add_object(create_enemymeteorroller_2421(5639, 1140), 3);
    add_object(create_enemymeteorrollerflame_2420(6592, 528), 3);
    add_object(create_enemymeteorroller_2421(6599, 532), 3);
    add_object(create_enemylimiter_350(6469, 546), 3);
    add_object(create_enemylimiter_350(6757, 538), 3);
    add_object(create_enemylimiter_350(6037, 1154), 3);
    add_object(create_enemylimiter_350(5253, 1154), 3);
    add_object(create_effectwarning_1513(-404, 696), 3);
    add_object(create_enemymeteorrollerflame_2420(7720, 616), 3);
    add_object(create_enemymeteorroller_2421(7727, 620), 3);
    add_object(create_enemylimiter_350(7685, 626), 3);
    add_object(create_enemylimiter_350(7821, 626), 3);
    add_object(create_enemymeteorrollerflame_2420(6832, 1056), 3);
    add_object(create_enemymeteorroller_2421(6839, 1060), 3);
    add_object(create_enemylimiter_350(7117, 1058), 3);
    add_object(create_enemylimiter_350(6437, 1090), 3);
    add_object(create_enemymeteorrollerflame_2420(9864, 824), 3);
    add_object(create_enemymeteorroller_2421(9871, 828), 3);
    add_object(create_enemymeteorrollerflame_2420(10048, 832), 3);
    add_object(create_enemymeteorroller_2421(10055, 836), 3);
    add_object(create_enemymeteorrollerflame_2420(10240, 832), 3);
    add_object(create_enemymeteorroller_2421(10247, 836), 3);
    add_object(create_enemylimiter_350(9725, 842), 3);
    add_object(create_gimmickseedspawner_2422(8217, 825), 3);
    add_object(create_gimmickseedspawner_2422(1793, 769), 3);
    add_object(create_objectcrystal_279(6173, 690), 3);
    add_object(create_objectcrystal_279(6205, 674), 3);
    add_object(create_objectcrystal_279(6237, 690), 3);
    add_object(create_objectcrystal_279(6269, 674), 3);
    add_object(create_objectcrystal_279(6301, 690), 3);
    add_object(create_objectcrystal_279(6333, 674), 3);
    add_object(create_objectcrystal_279(6365, 690), 3);
    add_object(create_objectcrystal_279(1141, 994), 3);
    add_object(create_objectcrystal_279(1173, 1026), 3);
    add_object(create_objectcrystal_279(1205, 1058), 3);
    add_object(create_objectcrystal_279(1245, 1082), 3);
    add_object(create_objectcrystal_279(1293, 1090), 3);
    add_object(create_objectcrystal_279(1341, 1074), 3);
    add_object(create_objectcrystal_279(1373, 1042), 3);
    add_object(create_objectcrystal_279(1405, 1010), 3);
    add_object(create_objectwhispmaker_751(10032, 232), 3);
    add_object(create_objectcrystal_279(9925, 290), 3);
    add_object(create_objectcrystal_279(9965, 290), 3);
    add_object(create_objectcrystal_279(10005, 290), 3);
    add_object(create_objectcrystal_279(10437, 642), 3);
    add_object(create_objectcrystal_279(10405, 666), 3);
    add_object(create_objectcrystal_279(10373, 690), 3);
    add_object(create_redspringupright_438(9728, 312), 3);
    add_object(create_jcwaterstream5_2412(9968, 976), 3);
    add_object(create_jcwaterstream1_2416(9840, 976), 3);
    add_object(create_jcwaterstream1_2416(9712, 976), 3);
    add_object(create_jcwaterstream7_2362(9992, 1136), 3);
    add_object(create_jcwaterstream7_2362(9992, 1072), 3);
    add_object(create_jcwaterstream7_2362(9992, 1008), 3);
    add_object(create_jcwaterstream1_2416(9456, 976), 3);
    add_object(create_enemylimiter_350(12429, 1154), 3);
    add_object(create_enemylimiter_350(13357, 1114), 3);
    add_object(create_enemymeteorrollerflame_2420(12576, 1136), 3);
    add_object(create_enemymeteorroller_2421(12583, 1148), 3);
    add_object(create_enemymeteorrollerflame_2420(12680, 1144), 3);
    add_object(create_enemymeteorroller_2421(12687, 1148), 3);
    add_object(create_enemymeteorrollerflame_2420(12816, 1136), 3);
    add_object(create_enemymeteorroller_2421(12823, 1140), 3);
    add_object(create_enemymeteorrollerflame_2420(12928, 1128), 3);
    add_object(create_enemymeteorroller_2421(12935, 1132), 3);
    add_object(create_enemymeteorrollerflame_2420(13040, 1120), 3);
    add_object(create_enemymeteorroller_2421(13047, 1124), 3);
    add_object(create_enemymeteorrollerflame_2420(13104, 1120), 3);
    add_object(create_enemymeteorroller_2421(13111, 1124), 3);
    add_object(create_enemymeteorrollerflame_2420(13184, 1112), 3);
    add_object(create_enemymeteorroller_2421(13191, 1116), 3);
    add_object(create_enemymeteorrollerflame_2420(12800, 856), 3);
    add_object(create_enemymeteorroller_2421(12807, 860), 3);
    add_object(create_enemymeteorrollerflame_2420(12904, 864), 3);
    add_object(create_enemymeteorroller_2421(12911, 868), 3);
    add_object(create_enemymeteorrollerflame_2420(13008, 872), 3);
    add_object(create_enemymeteorroller_2421(13015, 876), 3);
    add_object(create_objectwhispmaker_751(13328, 464), 3);
    add_object(create_enemylimiter_350(13221, 890), 3);
    add_object(create_objectwhispmaker_751(12592, 408), 3);
    add_object(create_objectwhispmaker_751(12800, 784), 3);
    add_object(create_objectwhispmaker_751(12616, 1072), 3);
    add_object(create_objectwhispmaker_751(13136, 1040), 3);
    add_object(create_enemysharktorpedo_2423(10212, 1397), 3);
    add_object(create_objectcrystal_279(12733, 1146), 3);
    add_object(create_objectcrystal_279(12781, 1146), 3);
    add_object(create_objectcrystal_279(12861, 1138), 3);
    add_object(create_objectcrystal_279(12901, 1138), 3);
    add_object(create_objectcrystal_279(12965, 1130), 3);
    add_object(create_objectcrystal_279(13013, 1130), 3);
    add_object(create_objectcrystal_279(13077, 1122), 3);
    add_object(create_objectcrystal_279(13149, 1122), 3);
    add_object(create_objectcrystal_279(12629, 1146), 3);
    add_object(create_objectcrystal_279(12677, 1146), 3);
    add_object(create_objectcrystal_279(12821, 1138), 3);
    add_object(create_objectcrystal_279(13149, 882), 3);
    add_object(create_objectcrystal_279(13101, 882), 3);
    add_object(create_objectcrystal_279(13053, 874), 3);
    add_object(create_objectcrystal_279(13005, 874), 3);
    add_object(create_objectcrystal_279(12957, 874), 3);
    add_object(create_objectcrystal_279(12925, 866), 3);
    add_object(create_objectcrystal_279(12877, 866), 3);
    add_object(create_objectcrystal_279(12829, 858), 3);
    add_object(create_objectcrystal_279(12781, 858), 3);
    add_object(create_enemylimiter_350(10029, 1394), 3);
    add_object(create_enemysharktorpedo_2423(9460, 1565), 3);
    add_object(create_enemylimiter_350(9701, 1562), 3);
    add_object(create_enemylimiter_350(9245, 1562), 3);
    add_object(create_monitorwatershield_327(10096, 1880), 3);
    add_object(create_objectcrystal_279(9565, 1666), 3);
    add_object(create_objectcrystal_279(9565, 1698), 3);
    add_object(create_objectcrystal_279(9533, 1666), 3);
    add_object(create_objectcrystal_279(9533, 1698), 3);
    add_object(create_objectcrystal_279(9501, 1666), 3);
    add_object(create_objectcrystal_279(9501, 1698), 3);
    add_object(create_objectcrystal_279(9469, 1666), 3);
    add_object(create_objectcrystal_279(9469, 1698), 3);
    add_object(create_objectcrystal_279(9437, 1666), 3);
    add_object(create_objectcrystal_279(9437, 1698), 3);
    add_object(create_enemybuoybuoy_2418(10400, 1680), 3);
    add_object(create_enemybuoybuoy_2418(10528, 1584), 3);
    add_object(create_enemybuoybuoy_2418(10544, 1768), 3);
    add_object(create_enemybuoybuoy_2418(10680, 1672), 3);
    add_object(create_monitorkeystone_562(11080, 1816), 3);
    add_object(create_monitorkeystone_562(10840, 1816), 3);
    add_object(create_monitorkeystone_562(10376, 1816), 3);
    add_object(create_objectcrystal_279(10757, 1794), 3);
    add_object(create_objectcrystal_279(10677, 1754), 3);
    add_object(create_objectcrystal_279(10861, 1458), 3);
    add_object(create_objectcrystal_279(10813, 1482), 3);
    add_object(create_objectcrystal_279(10765, 1506), 3);
    add_object(create_objectcrystal_279(10589, 1650), 3);
    add_object(create_objectcrystal_279(10533, 1698), 3);
    add_object(create_objectcrystal_279(10469, 1650), 3);
    add_object(create_objectcrystal_279(10421, 1602), 3);
    add_object(create_objectcrystal_279(10373, 1562), 3);
    add_object(create_objectcrystal_279(10397, 1770), 3);
    add_object(create_objectcrystal_279(10461, 1738), 3);
    add_object(create_objectpetal_302(9497, 1897), 3);
    add_object(create_objectpetal_302(9609, 1897), 3);
    add_object(create_objectpetal_302(9737, 1897), 3);
    add_object(create_enemybuoybuoy_2418(9608, 1816), 3);
    add_object(create_objectcrystal_279(10197, 1498), 3);
    add_object(create_objectcrystal_279(10165, 1538), 3);
    add_object(create_objectcrystal_279(10229, 1538), 3);
    add_object(create_objectcrystal_279(10197, 1578), 3);
    add_object(create_enemylimiter_350(12661, 858), 3);
    add_object(create_levelcreekplatform_2424(12840, 704), 3);
    add_object(create_levelcreekplatform_2424(12992, 600), 3);
    add_object(create_enemylimiter_350(11277, 1154), 3);
    add_object(create_objectcrystal_279(11253, 1250), 3);
    add_object(create_objectcrystal_279(11285, 1274), 3);
    add_object(create_objectcrystal_279(11309, 1306), 3);
    add_object(create_monitorrings_407(11408, 1488), 3);
    add_object(create_objectwhispmaker_751(11480, 1072), 3);
    add_object(create_enemybuoybuoy_2418(11216, 1432), 3);
    add_object(create_objectfuel_528(7644, 564), 3);
    add_object(create_jcslidingplatform_2414(10488, 856), 3);
    add_object(create_enemylimiter_350(10397, 1402), 3);
    add_object(create_enemysharktorpedo_2423(10492, 1261), 3);
    add_object(create_enemylimiter_350(10309, 1258), 3);
    add_object(create_enemylimiter_350(10677, 1266), 3);
    add_object(create_objectcrystal_279(10869, 1162), 3);
    add_object(create_objectcrystal_279(10917, 1162), 3);
    add_object(create_objectcrystal_279(10965, 1162), 3);
    add_object(create_objectcrystal_279(11013, 1162), 3);
    add_object(create_objectcodec_354(10074, 237), 3);
    add_object(create_gimmickbridge12logs_353(11712, 1120), 3);
    add_object(create_gimmickbridge12logs_353(12224, 1120), 3);
    add_object(create_gimmickbridge12logs_353(11968, 1120), 3);
    add_object(create_gimmickbridgelog_2339(11568, -40), 3);
    add_object(create_objectcrystal_279(13125, 882), 3);
    add_object(create_objectcrystal_279(13077, 882), 3);
    add_object(create_objectcrystal_279(13029, 874), 3);
    add_object(create_objectcrystal_279(12981, 874), 3);
    add_object(create_objectcrystal_279(12853, 866), 3);
    add_object(create_objectcrystal_279(12901, 866), 3);
    add_object(create_objectcrystal_279(12805, 858), 3);
    add_object(create_objectcrystal_279(12757, 858), 3);
    add_object(create_objectcrystal_279(12733, 850), 3);
    add_object(create_objectcrystal_279(12709, 850), 3);
    add_object(create_objectcrystal_279(12685, 850), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_jcbridgesegment_2425(11696, 1152), 4);
    add_background_object(create_jcbridgesegment_2425(11904, 1152), 4);
    add_background_object(create_jcbridgesegment_2425(11952, 1152), 4);
    add_background_object(create_jcbridgesegment_2425(12160, 1152), 4);
    add_background_object(create_jcbridgesegment_2425(12208, 1152), 4);
    add_background_object(create_jcbridgesegment_2425(12416, 1152), 4);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(11944, 1247), 5);
    add_object(create_cameralimitbossleft_421(11768, 1048), 5);
    add_object(create_cameralimitbossright_422(12247, 1056), 5);
    add_object(create_cameralimitbosstop_423(11960, 880), 5);
    add_object(create_cameratriggerboss_424(11552, 944), 5);
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
    add_object(create_bubblepatch_806(-528, 303), 5);
    add_object(create_mediumbubble_769(-518, 314), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
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
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
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
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
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
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_39, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_39, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_39, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_39, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_39, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_39, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_39, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_39, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_39, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_39, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_39, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_39, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_39, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_39, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_39, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_39, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_39, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_39, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_39, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_39, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_39, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_39, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_39, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_39, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_39, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_39, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_39, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_39, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_39, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_39, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_39, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_39, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_39, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_39, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_39, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_39, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_39, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_39, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_39, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_39, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_39, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_39, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_39, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_39, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_39, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_39, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_39, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_39, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_39, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_39, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_39, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_39, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_39, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_39, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    once_condition_1656_39 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1441_39 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
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
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_level_specific_methods_cutscenes_hovercop_flyby_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    once_condition_1650_39 = false;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    once_condition_1827_39 = false;
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
    group_main_engine_level_specific_methods_bosses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
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
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1438_39 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1697_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_1439_39 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
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
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_1531_39 = loop_count;
    not_always_59_13 = loop_count;
    not_always_1440_39 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_9647()
{
    // event 1753_40
    {
        if (!(group_main_engine_1)) goto event_1753_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1753_40_end;
        FrameObject * single_instance_1753_40_0; single_instance_1753_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercopturbine2_2331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1753_40_0 == NULL)
                    single_instance_1753_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1753_40_0))->get_movement()->set_speed(50+randrange(30));
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1753_40_end: ;
}
void Frames::event_func_9648()
{
    // event 1757_40
    {
        if (!(group_main_engine_1)) goto event_1757_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1757_40_end;
        FrameObject * single_instance_1757_40_0; single_instance_1757_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercopturbine1_2333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1757_40_0 == NULL)
                    single_instance_1757_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1757_40_0))->get_movement()->set_speed(50+randrange(30));
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1757_40_end: ;
}
void Frames::loop_spawndebris_40()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_9423();
    event_func_9424();
    event_func_9426();
    event_func_9425();
    event_func_9427();
    event_func_9647();
    event_func_9648();
}
void Frames::event_func_9649()
{
    // event 1648_40
    {
        if (!(group_main_engine_1)) goto event_1648_40_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (15))) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto event_1648_40_end;
        FrameObject * single_instance_1648_40_0; single_instance_1648_40_0 = pick_random(enemybubblorbiter_2443_instances);
        if (single_instance_1648_40_0 == NULL) goto event_1648_40_end;
        FrameObject * single_instance_1648_40_1; single_instance_1648_40_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_badnikgolemshot_1197(((Active*)single_instance_1648_40_0)->x + 0, ((Active*)single_instance_1648_40_0)->y + 0), ((Active*)single_instance_1648_40_0)->layer);
            if (single_instance_1648_40_1 == NULL)
                single_instance_1648_40_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1648_40_1))->alterables->values.set(8, ((Active*)single_instance_1648_40_0)->get_fixed());
        ((Active*)((Active*)single_instance_1648_40_1))->alterables->values.set(4, ((Active*)single_instance_1648_40_0)->alterables->values.get(6));
        ((Active*)((Active*)single_instance_1648_40_0))->alterables->values.add(6, 1);
        ((Active*)((Active*)single_instance_1648_40_1))->alterables->values.set(6, 360-((Active*)single_instance_1648_40_1)->alterables->values.get(4)*24);
    }
    event_1648_40_end: ;
}
void Frames::loop_bbls_40()
{
    event_func_9649();
}
void Frames::event_func_9650()
{
    // event 1490_40
    {
        if (!(group_main_engine_1)) goto event_1490_40_end;
        leveljccollapsingplatform_2444_instances.clear_selection();
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatform_2444_instances.has_selection()) goto event_1490_40_end;
        FrameObject * single_instance_1490_40_0; single_instance_1490_40_0 = pick_random(leveljccollapsingplatform_2444_instances);
        if (single_instance_1490_40_0 == NULL) goto event_1490_40_end;
        FrameObject * single_instance_1490_40_1; single_instance_1490_40_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_leveljccollapsingplatformpiece_2427(((Active*)single_instance_1490_40_0)->x + 0, ((Active*)single_instance_1490_40_0)->y + 0), ((Active*)single_instance_1490_40_0)->layer);
            if (single_instance_1490_40_1 == NULL)
                single_instance_1490_40_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1490_40_1))->force_frame(((Active*)single_instance_1490_40_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1490_40_0))->alterables->values.add(0, 1);
        ((Active*)((Active*)single_instance_1490_40_1))->alterables->values.set(0, ((Active*)single_instance_1490_40_1)->get_y());
        ((Active*)((Active*)single_instance_1490_40_1))->alterables->values.set(2, ((Active*)single_instance_1490_40_0)->alterables->values.get(0)*6);
    }
    event_1490_40_end: ;
}
void Frames::loop_collapse_40()
{
    event_func_9650();
}
void Frames::loop_wrapper_sound_hurt1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_40(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_40(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_40(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_40(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_40(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_40(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_40(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_40(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_40(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
